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
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		data = '{"name":null,"assets":"aoy4:pathy34:assets%2Fdata%2Fdata-goes-here.txty4:sizezy4:typey4:TEXTy2:idR1y7:preloadtgoR0y36:assets%2Fimages%2Farts%2Fanimals.pngR2i16728R3y5:IMAGER5R7R6tgoR0y41:assets%2Fimages%2Farts%2Fcommonobject.pngR2i63740R3R8R5R9R6tgoR0y37:assets%2Fimages%2Farts%2Fcontinue.pngR2i10145R3R8R5R10R6tgoR0y36:assets%2Fimages%2Farts%2Fcredits.pngR2i53031R3R8R5R11R6tgoR0y35:assets%2Fimages%2Farts%2Feggman.pngR2i81072R3R8R5R12R6tgoR0y38:assets%2Fimages%2Farts%2Fgreenhill.pngR2i126473R3R8R5R13R6tgoR0y33:assets%2Fimages%2Farts%2Flogo.pngR2i41686R3R8R5R14R6tgoR0y39:assets%2Fimages%2Farts%2Fmarblezone.pngR2i57473R3R8R5R15R6tgoR0y37:assets%2Fimages%2Farts%2Fmegaplay.pngR2i11646R3R8R5R16R6tgoR0y36:assets%2Fimages%2Farts%2Fobjects.pngR2i53400R3R8R5R17R6tgoR0y36:assets%2Fimages%2Farts%2Foverlay.pngR2i23575R3R8R5R18R6tgoR0y108:assets%2Fimages%2Farts%2Fsonic_exe_official_remake_2011_original_sprites_by_seaproductionyoutube_dg8af7z.pngR2i565828R3R8R5R19R6tgoR0y34:assets%2Fimages%2Farts%2Ftails.pngR2i482579R3R8R5R20R6tgoR0y40:assets%2Fimages%2Farts%2Ftitlescreen.pngR2i211606R3R8R5R21R6tgoR0y26:assets%2Fimages%2Fsega.pngR2i21661R3R8R5R22R6tgoR0y26:assets%2Fimages%2Fsega.xmlR2i3452R3R4R5R23R6tgoR2i2863551R3y5:MUSICR5y31:assets%2Fmusic%2Faracnoflee.mp3y9:pathGroupaR25hR6tgoR2i1411197R3R24R5y25:assets%2Fmusic%2Fbase.mp3R26aR27hR6tgoR2i5169081R3R24R5y31:assets%2Fmusic%2Fgigas-boss.mp3R26aR28hR6tgoR2i1161129R3R24R5y31:assets%2Fmusic%2Fgreen-hill.mp3R26aR29hR6tgoR2i4157146R3R24R5y30:assets%2Fmusic%2Fhell-zone.mp3R26aR30hR6tgoR2i3220027R3R24R5y34:assets%2Fmusic%2Fhideandseekre.mp3R26aR31hR6tgoR2i3123276R3R24R5y30:assets%2Fmusic%2Fhill-zone.mp3R26aR32hR6tgoR2i1872583R3R24R5y34:assets%2Fmusic%2Fhollow-valley.mp3R26aR33hR6tgoR2i540330R3R24R5y33:assets%2Fmusic%2Fnewdangerrun.mp3R26aR34hR6tgoR2i5402858R3R24R5y31:assets%2Fmusic%2Fomt-lament.mp3R26aR35y31:assets%2Fmusic%2Fomt-lament.wavhR6tgoR2i41630478R3y5:SOUNDR5R36R26aR35R36hgoR2i2768369R3R24R5y35:assets%2Fmusic%2Fsad-brain-zone.mp3R26aR38hR6tgoR2i1585157R3R24R5y37:assets%2Fmusic%2Fscrap-brain-zone.mp3R26aR39hR6tgoR2i2073626R3R24R5y34:assets%2Fmusic%2Ftoy-select-v2.mp3R26aR40hR6tgoR2i76644R3R37R5y27:assets%2Fsounds%2FS2_20.wavR26aR41hR6tgoR2i82472R3R37R5y27:assets%2Fsounds%2FS2_21.wavR26aR42hR6tgoR2i158848R3R37R5y27:assets%2Fsounds%2FS2_23.wavR26aR43hR6tgoR2i82460R3R37R5y27:assets%2Fsounds%2FS2_24.wavR26aR44hR6tgoR2i123536R3R37R5y27:assets%2Fsounds%2FS2_26.wavR26aR45hR6tgoR2i337936R3R37R5y27:assets%2Fsounds%2FS2_2A.wavR26aR46hR6tgoR2i117576R3R37R5y27:assets%2Fsounds%2FS2_2C.wavR26aR47hR6tgoR2i60996R3R37R5y27:assets%2Fsounds%2FS2_2D.wavR26aR48hR6tgoR2i293492R3R37R5y27:assets%2Fsounds%2FS2_32.wavR26aR49hR6tgoR2i428932R3R37R5y27:assets%2Fsounds%2FS2_39.wavR26aR50hR6tgoR2i23616R3R37R5y27:assets%2Fsounds%2FS2_3A.wavR26aR51hR6tgoR2i41224R3R37R5y27:assets%2Fsounds%2FS2_3B.wavR26aR52hR6tgoR2i252600R3R37R5y27:assets%2Fsounds%2FS2_3C.wavR26aR53hR6tgoR2i356360R3R37R5y27:assets%2Fsounds%2FS2_3E.wavR26aR54hR6tgoR2i761412R3R37R5y27:assets%2Fsounds%2FS2_3F.wavR26aR55hR6tgoR2i79152R3R37R5y27:assets%2Fsounds%2FS2_41.wavR26aR56hR6tgoR2i132444R3R37R5y27:assets%2Fsounds%2FS2_42.wavR26aR57hR6tgoR2i182788R3R37R5y27:assets%2Fsounds%2FS2_43.wavR26aR58hR6tgoR2i302252R3R37R5y27:assets%2Fsounds%2FS2_45.wavR26aR59hR6tgoR2i264628R3R37R5y27:assets%2Fsounds%2FS2_46.wavR26aR60hR6tgoR2i107008R3R37R5y27:assets%2Fsounds%2FS2_48.wavR26aR61hR6tgoR2i295504R3R37R5y27:assets%2Fsounds%2FS2_4A.wavR26aR62hR6tgoR2i423288R3R37R5y27:assets%2Fsounds%2FS2_4B.wavR26aR63hR6tgoR2i182712R3R37R5y27:assets%2Fsounds%2FS2_4C.wavR26aR64hR6tgoR2i6084R3R37R5y27:assets%2Fsounds%2FS2_4D.wavR26aR65hR6tgoR2i106412R3R37R5y27:assets%2Fsounds%2FS2_4E.wavR26aR66hR6tgoR2i320620R3R37R5y27:assets%2Fsounds%2FS2_4F.wavR26aR67hR6tgoR2i487748R3R37R5y27:assets%2Fsounds%2FS2_5F.wavR26aR68hR6tgoR2i323452R3R37R5y27:assets%2Fsounds%2FS2_60.wavR26aR69hR6tgoR2i29568R3R37R5y27:assets%2Fsounds%2FS2_68.wavR26aR70hR6tgoR2i486868R3R37R5y27:assets%2Fsounds%2FS2_6C.wavR26aR71hR6tgoR2i106012R3R37R5y27:assets%2Fsounds%2FS2_6D.wavR26aR72hR6tgoR2i315436R3R37R5y26:assets%2Fsounds%2Fsega.wavR26aR73hR6tgoR2i8220R3R24R5y26:flixel%2Fsounds%2Fbeep.mp3R26aR74y26:flixel%2Fsounds%2Fbeep.ogghR6tgoR2i39706R3R24R5y28:flixel%2Fsounds%2Fflixel.mp3R26aR76y28:flixel%2Fsounds%2Fflixel.ogghR6tgoR2i6840R3R37R5R75R26aR74R75hgoR2i33629R3R37R5R77R26aR76R77hgoR2i15744R3y4:FONTy9:classNamey35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfR6tgoR2i29724R3R78R79y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfR6tgoR0y33:flixel%2Fimages%2Fui%2Fbutton.pngR2i277R3R8R5R84R6tgoR0y36:flixel%2Fimages%2Flogo%2Fdefault.pngR2i505R3R8R5R85R6tgoR0y42:flixel%2Fimages%2Ftransitions%2Fcircle.pngR2i824R3R8R5R86R6tgoR0y53:flixel%2Fimages%2Ftransitions%2Fdiagonal_gradient.pngR2i3812R3R8R5R87R6tgoR0y43:flixel%2Fimages%2Ftransitions%2Fdiamond.pngR2i788R3R8R5R88R6tgoR0y42:flixel%2Fimages%2Ftransitions%2Fsquare.pngR2i383R3R8R5R89R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

	}


}

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
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
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
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

@:keep @:file("assets/data/data-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends haxe.io.Bytes {}
@:keep @:image("assets/images/arts/animals.png") @:noCompletion #if display private #end class __ASSET__assets_images_arts_animals_png extends lime.graphics.Image {}
@:keep @:image("assets/images/arts/commonobject.png") @:noCompletion #if display private #end class __ASSET__assets_images_arts_commonobject_png extends lime.graphics.Image {}
@:keep @:image("assets/images/arts/continue.png") @:noCompletion #if display private #end class __ASSET__assets_images_arts_continue_png extends lime.graphics.Image {}
@:keep @:image("assets/images/arts/credits.png") @:noCompletion #if display private #end class __ASSET__assets_images_arts_credits_png extends lime.graphics.Image {}
@:keep @:image("assets/images/arts/eggman.png") @:noCompletion #if display private #end class __ASSET__assets_images_arts_eggman_png extends lime.graphics.Image {}
@:keep @:image("assets/images/arts/greenhill.png") @:noCompletion #if display private #end class __ASSET__assets_images_arts_greenhill_png extends lime.graphics.Image {}
@:keep @:image("assets/images/arts/logo.png") @:noCompletion #if display private #end class __ASSET__assets_images_arts_logo_png extends lime.graphics.Image {}
@:keep @:image("assets/images/arts/marblezone.png") @:noCompletion #if display private #end class __ASSET__assets_images_arts_marblezone_png extends lime.graphics.Image {}
@:keep @:image("assets/images/arts/megaplay.png") @:noCompletion #if display private #end class __ASSET__assets_images_arts_megaplay_png extends lime.graphics.Image {}
@:keep @:image("assets/images/arts/objects.png") @:noCompletion #if display private #end class __ASSET__assets_images_arts_objects_png extends lime.graphics.Image {}
@:keep @:image("assets/images/arts/overlay.png") @:noCompletion #if display private #end class __ASSET__assets_images_arts_overlay_png extends lime.graphics.Image {}
@:keep @:image("assets/images/arts/sonic_exe_official_remake_2011_original_sprites_by_seaproductionyoutube_dg8af7z.png") @:noCompletion #if display private #end class __ASSET__assets_images_arts_sonic_exe_official_remake_2011_original_sprites_by_seaproductionyoutube_dg8af7z_png extends lime.graphics.Image {}
@:keep @:image("assets/images/arts/tails.png") @:noCompletion #if display private #end class __ASSET__assets_images_arts_tails_png extends lime.graphics.Image {}
@:keep @:image("assets/images/arts/titlescreen.png") @:noCompletion #if display private #end class __ASSET__assets_images_arts_titlescreen_png extends lime.graphics.Image {}
@:keep @:image("assets/images/sega.png") @:noCompletion #if display private #end class __ASSET__assets_images_sega_png extends lime.graphics.Image {}
@:keep @:file("assets/images/sega.xml") @:noCompletion #if display private #end class __ASSET__assets_images_sega_xml extends haxe.io.Bytes {}
@:keep @:file("assets/music/aracnoflee.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_aracnoflee_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/base.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_base_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/gigas-boss.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_gigas_boss_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/green-hill.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_green_hill_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/hell-zone.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_hell_zone_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/hideandseekre.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_hideandseekre_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/hill-zone.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_hill_zone_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/hollow-valley.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_hollow_valley_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/newdangerrun.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_newdangerrun_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/omt-lament.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_omt_lament_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/omt-lament.wav") @:noCompletion #if display private #end class __ASSET__assets_music_omt_lament_wav extends haxe.io.Bytes {}
@:keep @:file("assets/music/sad-brain-zone.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_sad_brain_zone_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/scrap-brain-zone.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_scrap_brain_zone_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/music/toy-select-v2.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_toy_select_v2_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_20.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_20_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_21.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_21_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_23.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_23_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_24.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_24_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_26.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_26_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_2A.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_2a_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_2C.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_2c_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_2D.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_2d_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_32.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_32_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_39.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_39_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_3A.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_3a_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_3B.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_3b_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_3C.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_3c_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_3E.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_3e_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_3F.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_3f_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_41.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_41_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_42.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_42_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_43.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_43_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_45.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_45_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_46.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_46_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_48.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_48_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_4A.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_4a_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_4B.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_4b_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_4C.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_4c_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_4D.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_4d_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_4E.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_4e_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_4F.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_4f_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_5F.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_5f_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_60.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_60_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_68.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_68_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_6C.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_6c_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/S2_6D.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_s2_6d_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/sega.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_sega_wav extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/sounds/beep.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/sounds/flixel.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("export/html5/obj/webfont/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/html5/obj/webfont/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/5,8,0/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,2,3/assets/images/transitions/circle.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_circle_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,2,3/assets/images/transitions/diagonal_gradient.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_diagonal_gradient_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,2,3/assets/images/transitions/diamond.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_diamond_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-addons/3,2,3/assets/images/transitions/square.png") @:noCompletion #if display private #end class __ASSET__flixel_images_transitions_square_png extends lime.graphics.Image {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end