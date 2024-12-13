package;

import haxe.io.Bytes;
import haxe.io.Path;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

#if disable_preloader_assets
@:dox(hide) class ManifestResources {
	public static var preloadLibraries:Array<Dynamic>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;

	public static function init (config:Dynamic):Void {
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
	}
}
#else
@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

			if(!StringTools.endsWith (rootPath, "/")) {

				rootPath += "/";

			}

		}

		if (rootPath == null) {

			#if (ios || tvos || webassembly)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif (console || sys)
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_sonic_2_title_card_font_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		Assets.libraryPaths["default"] = rootPath + "manifest/default.json";
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

	}


}

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_sonic_2_title_card_font_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_arts_animals_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_arts_commonobject_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_arts_continue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_arts_credits_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_arts_eggman_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_arts_greenhill_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_arts_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_arts_marblezone_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_arts_megaplay_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_arts_objects_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_arts_overlay_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_arts_sonic_exe_official_remake_2011_original_sprites_by_seaproductionyoutube_dg8af7z_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_arts_tails_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_arts_titlescreen_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_sega_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_sega_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_sonic_team_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_aracnoflee_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_base_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_gigas_boss_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_green_hill_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_hell_zone_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_hideandseekre_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_hill_zone_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_hollow_valley_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_newdangerrun_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_omt_lament_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_omt_lament_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_sad_brain_zone_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_scrap_brain_zone_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_toy_select_v2_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_toy_select_v2_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_20_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_21_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_23_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_24_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_26_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_2a_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_2c_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_2d_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_32_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_39_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_3a_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_3b_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_3c_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_3e_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_3f_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_41_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_42_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_43_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_45_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_46_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_48_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_4a_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_4b_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_4c_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_4d_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_4e_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_4f_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_5f_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_60_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_68_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_6c_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_6d_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_sega_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_circle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_diagonal_gradient_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_diamond_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_square_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/fonts/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/fonts/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,2,3/assets/images/transitions/circle.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_circle_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,2,3/assets/images/transitions/diagonal_gradient.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_diagonal_gradient_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,2,3/assets/images/transitions/diamond.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_diamond_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,2,3/assets/images/transitions/square.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_square_png extends lime.graphics.Image {}

@:keep @:noCompletion #if display private #end class __ASSET__assets_fonts_sonic_2_title_card_font_ttf extends lime.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "assets/fonts/sonic-2-title-card-font.ttf"; name = "Sonic 2 Title Card Font Regular"; super (); }}


#else

@:keep @:expose('__ASSET__assets_fonts_sonic_2_title_card_font_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_sonic_2_title_card_font_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/sonic-2-title-card-font.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Sonic 2 Title Card Font Regular"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__assets_fonts_sonic_2_title_card_font_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_sonic_2_title_card_font_ttf extends openfl.text.Font { public function new () { name = "Sonic 2 Title Card Font Regular"; super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__assets_fonts_sonic_2_title_card_font_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_sonic_2_title_card_font_ttf extends openfl.text.Font { public function new () { __fontPath = ManifestResources.rootPath + "assets/fonts/sonic-2-title-card-font.ttf"; name = "Sonic 2 Title Card Font Regular"; super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end