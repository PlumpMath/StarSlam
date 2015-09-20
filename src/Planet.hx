import luxe.Entity;
import luxe.Color;
import luxe.Vector;

using VectorExtender;

class Planet extends Entity {

	var pointsToArea = 1000;
	var sizeToAtmosphere = 2;

	public var points : Int;
	public var radius : Float;
	public var diameter : Float;

	var velocity : Vector = new Vector(0,0); 
	var frictionPercent = 0.1;
	var fictionMaxCoefficient = 100;
	public var isSuperSlam = false;

	public var players : Array<Player> = [];

	override function new(_options : luxe.options.EntityOptions, _points : Int) : Void {
		super(_options);

		points = _points;
		radius = Math.sqrt( (points * pointsToArea) / Math.PI );
		diameter = radius * 2 * Math.PI;
	}

	override function update(dt : Float) {
		//move
		pos.add( Vector.Multiply(velocity, dt) );

		//bounce off walls
		if ( pos.x + radius > Luxe.screen.width && velocity.x > 0) {
			velocity.x *= -1; 
			if (isSuperSlam) endSuperSlam();
		}
		else if (pos.x - radius < 0 && velocity.x < 0) {
			velocity.x *= -1;
			if (isSuperSlam) endSuperSlam();
		}
		if ( pos.y + radius > Luxe.screen.height && velocity.y > 0) {
			velocity.y *= -1;
			if (isSuperSlam) endSuperSlam();
		} 
		else if (pos.y - radius < 0 && velocity.y < 0) {
			velocity.y *= -1;
			if (isSuperSlam) endSuperSlam();
		}

		//friction
		if (velocity.length > 0) {
			var f = Math.min( velocity.length * frictionPercent, fictionMaxCoefficient );
			var vF = Vector.Multiply( velocity.normalized, f * dt );
			velocity.subtract( vF );
		}

		//draw
		Luxe.draw.circle({
			x : pos.x,
			y : pos.y,
			r : radius * sizeToAtmosphere,
			immediate : true,
			depth : 0,
			color : (isSuperSlam ? new Color(1,0,0,0.5) : new Color(0,0,1,0.5))
		});

		Luxe.draw.circle({
			x : pos.x,
			y : pos.y,
			r : radius,
			immediate : true,
			depth : 1,
			color : (isSuperSlam ? new Color(1,0.5,0,1) : new Color(0,1,0.5,1))
		});
	}

	public function superSlam(dir : Vector) {
		velocity.add( dir.multiplyScalar(500) );
		isSuperSlam = true;
	}

	public function endSuperSlam() {
		isSuperSlam = false;
		velocity.divideScalar(10);
		splitPlanet();
	}

	public function slam(force : Float, dir : Vector) {
		if (!isSuperSlam) velocity.add( dir.multiplyScalar(force) );
	}

	public function atmosphereRadius() : Float {
		return radius * sizeToAtmosphere;
	}

	public function collidesWithPlanet(p : Planet) : Bool {
		return ( p != this && pos.distance(p.pos) <= (radius + p.radius) );
	}

	public function mergeWithPlanet(p : Planet) {
		points += p.points;
		radius = Math.sqrt( (points * pointsToArea) / Math.PI );
		diameter = radius * 2 * Math.PI;

		velocity.add(p.velocity);

		for (pl in p.players) {
			/*
			trace("FLY YOU FOOLS 1");
			trace(pl);
			pl.hopToPlanet(this);
			*/

			Main.instance.needsNewHome.push(pl);
		}
	}

	public function splitPlanet() {
		if (points > 1) {
			var remainingPoints = points;
			while (remainingPoints > 0) {
				var p = Luxe.utils.random.int(1, points / 2);
				if (p > remainingPoints) p = remainingPoints;
				remainingPoints -= p;

				var divergence = new Vector(Luxe.utils.random.float(radius * 2, radius * 0.7)  * Luxe.utils.random.sign(), Luxe.utils.random.float(radius * 2, radius * 0.7)  * Luxe.utils.random.sign());

				var planetlet = new Planet({pos:Vector.Add(pos, divergence)}, p);

				planetlet.velocity = Vector.Multiply( divergence.normalized, 10 );

				Main.instance.planets.push(planetlet);
			}
		}

		/*
		trace("REMOVE");
		trace(Main.instance.planets.length);
		Main.instance.planets.remove(this);
		this.destroy();
		trace(Main.instance.planets.length);
		*/

		Main.instance.planetRemovalList.push(this);

		/*
		var closestPlanet = null;
		for (py in players) {
			trace("FLY YOU FOOLS 2");
			trace(py);
			for (pt in Main.instance.planets) {
				if (closestPlanet == null) closestPlanet = pt;
				if (pt.pos.distance(py.pos) < closestPlanet.pos.distance(py.pos)) closestPlanet = pt;
			}
			py.hopToPlanet(closestPlanet);
		}
		*/

		for (pl in players) {
			Main.instance.needsNewHome.push(pl);
		}
	}
}