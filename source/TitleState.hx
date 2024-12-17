package;

import FlxTransWindow.FlxTransWindow;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxGame;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.sound.FlxSound;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import lime.system.BackgroundWorker;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.BitmapData;


class TitleState extends FlxState {
    private var letters:Array<FlxText> = [];
    private var elapsedTime:Float = 0;
    public var defaultCamZoom:Float = 1.05;
    var warningMusic:FlxSound;

    override public function create():Void {
        super.create();

        var bg:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.fromRGB(1, 1, 1));
        if (defaultCamZoom < 1)
        {
          bg.scale.scale(1 / defaultCamZoom);
        }
        bg.scrollFactor.set();
        add(bg);
        FlxTransWindow.getWindowsTransparent();

        
        // warningMusic = FlxG.sound.load(AssetPaths.toy_select_v2__wav, 1, true);
        // warningMusic.play();

        // Messages to display
        var messages:Array<String> = [
            "!!! Warning !!!",
            "This isn't a normal game,",
            "it's different! We tried so much to",
            "control the dangerous scenes.",
            "You should choose if you",
            "want to play the game or not."
        ];

        var startX:Float;
        var startY:Float = 400;
        var letterWidth:Float = 30; // Width per character
        var lineSpacing:Float = 40; // Spacing between lines

        

        for (messageIndex in 0...messages.length) {
            var message:String = messages[messageIndex];
            startX = (FlxG.width - message.length * letterWidth) / 2;


            for (i in 0...message.length) {
                var char:String = message.charAt(i);
                var letter = new FlxText(startX + i * letterWidth, startY + messageIndex * lineSpacing, letterWidth, char);
                // Gradient color
                var startColor:Int = 0xFF0000; // Red
                var endColor:Int = 0x3A0000;   // Dark Red
                var ratio:Float = Math.min(Math.max(i / message.length, 0), 1); // Clamp ratio
                var color:Int = interpolateColor(startColor, endColor, ratio);

                letter.setFormat(AssetPaths.sonic_2_title_card_font__ttf, 64, color, "center");
                add(letter);

                letters.push(letter); // Store letter for wave animation
            }
        }


    }

    override public function update(elapsed:Float):Void {
        super.update(elapsed);

        // Increment elapsed time
        elapsedTime += elapsed;

        // Apply wave effect
        for (i in 0...letters.length) {
            var letter = letters[i];
            letter.y += Math.sin(elapsedTime * 5 + i * 0.1) * 0.5; // Smooth wave
        }

        

        if(FlxG.keys.justPressed.ENTER){
            FlxG.camera.fade(FlxColor.BLACK, 1, false);
            warningMusic.fadeOut(2);
            var timer1:FlxTimer = new FlxTimer();
            timer1.start(3, function (timer1:FlxTimer) {
                FlxG.switchState(new StartEmulationState());
            });
        }
    }

    private function interpolateColor(startColor:Int, endColor:Int, ratio:Float):Int {
        var rStart:Int = (startColor >> 16) & 0xFF;
        var gStart:Int = (startColor >> 8) & 0xFF;
        var bStart:Int = startColor & 0xFF;

        var rEnd:Int = (endColor >> 16) & 0xFF;
        var gEnd:Int = (endColor >> 8) & 0xFF;
        var bEnd:Int = endColor & 0xFF;

        var r:Int = Std.int(rStart + (rEnd - rStart) * ratio);
        var g:Int = Std.int(gStart + (gEnd - gStart) * ratio);
        var b:Int = Std.int(bStart + (bEnd - bStart) * ratio);

        return (r << 16) | (g << 8) | b;
    }
}
