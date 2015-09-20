import luxe.Entity;
import luxe.Color;
import luxe.Vector;
import luxe.utils.Maths;

using VectorExtender;

class Player extends Entity {

	var size = 10;

	//running
	var location = 0.0;
	var speed = 30.0;

	//jump
	var height = 0.0;
	var isJumping : Bool;
	var jumpSpeed : Float;
	var jumpForce = 100.0;
	var gravityForce = 500.0;

	//jump boost
	var jumpBoostForce = 500.0;
	var jumpBoostTimer = 0.0;
	var jumpBoostTimerMax = 1.0;

	//slam
	var slamChargeTimer = 0.0;
	var slamChargeTimerMax = 1.0;
	var slamSpeed = 0.0;
	var minSlamSpeed = 100.0;
	var maxSlamSpeed = 500.0;
	var isSuperSlam = false;

	//planet hopping
	var canHop = true;

	var moveMode = 0; //0 - ground, 1 - jumping, 2 - slam charge, 3 - slam

	public var planet : Planet;
	public var color : Color;

	override function new(_options : luxe.options.EntityOptions) : Void {
		super(_options);
	}

	override function update(dt : Float) {

		var chargeScale = 1.0;

		if (planet != null) {

			if (moveMode == 0) { //running
				height = 0;
				//runnning
				location = (location + (speed * dt)) % planet.diameter;
			}
			if (moveMode == 1) { //jumping
				height += jumpSpeed * dt;
				jumpSpeed -= gravityForce * dt;

				jumpBoostTimer += dt;
				if (jumpBoostTimer < jumpBoostTimerMax) jumpSpeed += jumpBoostForce * dt;

				if (height <= 0) {
					land();
				}

				//runnning
				location = (location + (speed * dt)) % planet.diameter;
			}
			else if (moveMode == 2) { //charging
				slamChargeTimer += dt;

				chargeScale = Maths.lerp(1.0, 2.0, slamChargeTimer / slamChargeTimerMax);

				if (slamChargeTimer >= slamChargeTimerMax) {
					//slamChargeTimer = slamChargeTimerMax;
					//slam();
					isSuperSlam = true;
				}
			}
			else if (moveMode == 3) { //slamming
				slamSpeed += gravityForce * dt;
				height -= slamSpeed * dt;

				if (height <= 0) {
					land();
				}
			}

			//update position
			var locRadians = (location / planet.diameter) * 2 * Math.PI;
			var unitVec = (new Vector()).setFromAngle(locRadians);
			
			pos = Vector.Add( planet.pos, Vector.Multiply(unitVec, planet.radius + height + size) );

		}

		//draw
		Luxe.draw.circle({
			x : pos.x,
			y : pos.y,
			r : size * chargeScale,
			immediate : true,
			depth : 2,
			color : ( isSuperSlam ? new Color(1,0,0) : color )
		});
	}

	function jump() {
		if (!isJumping) {
			//isJumping = true;
			moveMode = 1;
			jumpSpeed = jumpForce;
			jumpBoostTimer = 0;
		}
	}

	function fall() {
		moveMode = 1;
		jumpSpeed = 0;
		jumpBoostTimer = jumpBoostTimerMax;
	}

	function stopJumpBoost() {
		jumpBoostTimer = jumpBoostTimerMax;
	}

	function land() {
		if (moveMode == 3 && planet != null) {
			var delta = Vector.Subtract(planet.pos, pos);

			if (isSuperSlam) {
				planet.superSlam(delta.normalized);
			}
			else {
				planet.slam(slamSpeed / 10, delta.normalized);
			}
		}

		isSuperSlam = false;

		//isJumping = false;
		moveMode = 0;
		height = 0;

		canHop = true;
	}

	function chargeSlam() {
		moveMode = 2;
		slamChargeTimer = 0;
		isSuperSlam = false;
	}

	function slam() {
		moveMode = 3;

		if (isSuperSlam) {
			slamSpeed = maxSlamSpeed * 2;
		}
		else {
			slamSpeed = Maths.lerp(minSlamSpeed, maxSlamSpeed, slamChargeTimer / slamChargeTimerMax);
		}
	}

	public function inputDown() {
		if (moveMode == 0) {
			jump();
		}
		else if (moveMode == 1) {
			chargeSlam();
		}
	}

	public function inputUp() {
		if (moveMode == 1) {
			stopJumpBoost();
		}
		else if (moveMode == 2) {
			slam();
		}
	}

	public function entersAtmosphere(p : Planet) : Bool {
		return ( canHop && moveMode != 0 && p != planet && pos.distance(p.pos) < size + p.atmosphereRadius() );
	}

	public function setPlanet(p : Planet) {
		if (planet != null) planet.players.remove(this);
		planet = p;
		planet.players.push(this);
		trace("set planet " + planet);
		trace("PLAYERS " + planet.players.length);
	}

	public function hopToPlanet(p : Planet) {
		setPlanet(p);

		var fromPlanet = Vector.Subtract( pos, p.pos );

		height = Math.max(0, fromPlanet.length - p.radius);
		location = p.diameter * (Math.atan2(fromPlanet.normalized.y, fromPlanet.normalized.x) / (2 * Math.PI));

		canHop = false;

		if (height > 0) {
			fall();
		}
		else {
			land();
		}
	}
}