package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.graphics.tile.FlxDrawQuadsItem;
import flixel.text.FlxText;
import flixel.util.FlxColor;

class WarningState extends FlxState
{
    var warningText:FlxText;
    override function create() {
        super.create();
        warningText = new FlxText(0,0,0,"WaRnInG !!!", 64);
        warningText.screenCenter();
        warningText.setFormat(AssetPaths.)
    }

    override function update(elapsed:Float) {
        super.update(elapsed);
    }
}