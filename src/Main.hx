
import luxe.Input;
import luxe.Vector;
import luxe.utils.Maths;
import luxe.Color;

using VectorExtender;

class Main extends luxe.Game {

	public static var instance : Main;

	//var player : Player;
	public var planets = [];
	public var players = [];

	public var planetRemovalList = [];
	public var needsNewHome = [];

	//var x = false;
	var buttonTriggers = [];

    override function ready() {
    	instance = this;
    	/*
    	var p0 = new Planet({pos : new Vector(300, 300)}, 1);
    	var p1 = new Planet({pos : new Vector(500, 100)}, 3);
    	planets = [p0, p1];

    	player = new Player({});
    	player.setPlanet(p0);
    	*/

    	for (i in 0 ... 10) {
    		var newP = new Planet({pos : new Vector(
    			Luxe.utils.random.float(100, Luxe.screen.width - 100), 
    			Luxe.utils.random.float(100, Luxe.screen.height - 100))},
    		Luxe.utils.random.int(1, 10));

    		planets.push(newP);
    		buttonTriggers.push(false);
    	}

    	/*
		player = new Player({});
    	player.setPlanet(planets[Luxe.utils.random.int(0, planets.length)]);
    	*/

    	for (j in 0 ... 4) {
    		var newPlayer = new Player({});
    		var k = Luxe.utils.random.int(0, planets.length);
    		trace(k);
    		newPlayer.setPlanet(planets[k]);
    		players.push(newPlayer);
    	}

    	players[0].color = new Color(1,1,0);
    	players[1].color = new Color(0,1,1);
    	players[2].color = new Color(1,0,1);
    	players[3].color = new Color(1,1,1);
    } //ready

    override function onkeydown( e:KeyEvent ) {

    	/*
        if (e.keycode == Key.space && !x) {
        	player.inputDown();
        	x = true;
        }
        */

        if (e.keycode == Key.key_1 && !buttonTriggers[0]) {
        	players[0].inputDown();
        	buttonTriggers[0] = true;
        }

        if (e.keycode == Key.key_z && !buttonTriggers[1]) {
        	players[1].inputDown();
        	buttonTriggers[1] = true;
        }

        if (e.keycode == Key.key_0 && !buttonTriggers[2]) {
        	players[2].inputDown();
        	buttonTriggers[2] = true;
        }

        if (e.keycode == Key.key_m && !buttonTriggers[3]) {
        	players[3].inputDown();
        	buttonTriggers[3] = true;
        }

    }

    override function onkeyup( e:KeyEvent ) {

        if(e.keycode == Key.escape) {
            Luxe.shutdown();
        }

        /*
        if (e.keycode == Key.space) {
        	player.inputUp();
        	x = false;
        }
        */

        if (e.keycode == Key.key_1) {
        	players[0].inputUp();
        	buttonTriggers[0] = false;
        }

        if (e.keycode == Key.key_z) {
        	players[1].inputUp();
        	buttonTriggers[1] = false;
        }

        if (e.keycode == Key.key_0) {
        	players[2].inputUp();
        	buttonTriggers[2] = false;
        }

        if (e.keycode == Key.key_m) {
        	players[3].inputUp();
        	buttonTriggers[3] = false;
        }

    } //onkeyup

    override function update(dt:Float) {

    	//trace("PLANET POP " + planets.length);

    	for (d in planetRemovalList) {
    		planets.remove(d);
    		d.destroy();
    	}
    	planetRemovalList = [];

    	var closestPlanet = null;
    	for (py in needsNewHome) {
			for (pt in planets) {
				if (closestPlanet == null) closestPlanet = pt;
				if (pt.pos.distance(py.pos) < closestPlanet.pos.distance(py.pos)) closestPlanet = pt;
			}
			py.hopToPlanet(closestPlanet);
		}
		needsNewHome = [];

    	for (p in planets) {
    		/*
    		if (player.entersAtmosphere(p)) {
    			player.hopToPlanet(p);
    		}
    		*/

    		for (player in players) {
	    		if (player.entersAtmosphere(p)) {
	    			player.hopToPlanet(p);
	    		}
    		}

    		for (p2 in planets) {
    			if (p.collidesWithPlanet(p2) && (planetRemovalList.indexOf(p) == -1) && (planetRemovalList.indexOf(p2) == -1)) {
    				if (p.isSuperSlam || p2.isSuperSlam) {
    					p.splitPlanet();
    					p2.splitPlanet();
    				}
    				else {
	    				p.mergeWithPlanet(p2);

	    				/*
	    				trace("REMOVE");
						trace(planets.length);
	    				planets.remove(p2);
	    				p2.destroy();
						trace(planets.length);
						*/

						planetRemovalList.push(p2);
    				}
    			}
    		}
    	}
    } //update


} //Main
