package;

import flixel.FlxG;
import flixel.FlxGame;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.sound.FlxSound;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

class StartEmulationState extends FlxState
{
	var segaLogo:FlxSprite;
	var segaSound:FlxSound;
	var sonicTeam:FlxSprite;

	override function create()
	{
		super.create();

		FlxG.resizeWindow(320, 224);
		FlxG.fullscreen = true;
		this.segaLogoProduction(); // call segaLogoProduction function

		//not complete
		add(segaLogo);
	}
	

	function segaLogoProduction()
	{
		segaLogo = new FlxSprite();
		segaLogo.frames = FlxAtlasFrames.fromSparrow(AssetPaths.sega__png, AssetPaths.sega__xml); // get sprite animation from xml animation setting
		segaLogo.screenCenter(); 
		segaLogo.scale.x = 5;
		segaLogo.scale.y = 5;
		segaLogo.animation.addByPrefix("sega", "sega logo", 15, false); // make animation name and get animation sprite from xml
		segaLogo.animation.play("sega");

		this.segaSoundHandler();
		var task1:FlxTimer = new FlxTimer();
		task1.start(5, function (task1:FlxTimer) {
			FlxG.camera.fade(FlxColor.BLACK, 0.5, false, function() {
				this.sonicTeamPresent();
			});
		});
	}

	function segaSoundHandler()
	{
		segaSound = FlxG.sound.load(AssetPaths.sega__wav, 1, false);
		segaLogo.animation.finishCallback = function(name:String):Void // if animation finished, play sega sound
		{
			segaSound.play();
		}
	}

	function sonicTeamPresent() {
		sonicTeam = new FlxSprite();
		sonicTeam.loadGraphic(AssetPaths.sonic_team__png, false);
		sonicTeam.screenCenter();
		sonicTeam.scale.x = 5;
		sonicTeam.scale.y = 5;
		add(sonicTeam);
		FlxG.camera.fade(FlxColor.BLACK, 0.5, true);
		var task2:FlxTimer = new FlxTimer();
		task2.start(5, function (task2:FlxTimer) {
			FlxG.camera.fade(FlxColor.BLACK, 0.5, false,function () {
				FlxG.switchState(new SonicState());
			});
		});
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
