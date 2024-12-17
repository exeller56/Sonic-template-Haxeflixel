package;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;

class SonicState extends FlxState
{
    override function create() {
        super.create();
        var test:FlxText = new FlxText(100, 100, 0, "test text", 32);
        add(test);
    }  
    
    override function update(elapsed:Float) {
        super.update(elapsed);
    }
}