package;

import flixel.FlxGame;
import flixel.system.debug.Window;
import lime.app.Application;
import openfl.display.Sprite;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(0, 0, TitleState, 60, 60, true));
	}
}
