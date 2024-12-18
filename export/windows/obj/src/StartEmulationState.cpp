// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_StartEmulationState
#include <StartEmulationState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedContainer
#include <flixel/group/FlxTypedContainer.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSoundGroup
#include <flixel/sound/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_958d53fb85363643_12_new,"StartEmulationState","new",0x61c15bef,"StartEmulationState.new","StartEmulationState.hx",12,0xaca2b661)
HX_LOCAL_STACK_FRAME(_hx_pos_958d53fb85363643_19_create,"StartEmulationState","create",0x3bf03ecd,"StartEmulationState.create","StartEmulationState.hx",19,0xaca2b661)
HX_LOCAL_STACK_FRAME(_hx_pos_958d53fb85363643_45_segaLogoProduction,"StartEmulationState","segaLogoProduction",0xb60e5ae1,"StartEmulationState.segaLogoProduction","StartEmulationState.hx",45,0xaca2b661)
HX_LOCAL_STACK_FRAME(_hx_pos_958d53fb85363643_44_segaLogoProduction,"StartEmulationState","segaLogoProduction",0xb60e5ae1,"StartEmulationState.segaLogoProduction","StartEmulationState.hx",44,0xaca2b661)
HX_LOCAL_STACK_FRAME(_hx_pos_958d53fb85363643_32_segaLogoProduction,"StartEmulationState","segaLogoProduction",0xb60e5ae1,"StartEmulationState.segaLogoProduction","StartEmulationState.hx",32,0xaca2b661)
HX_LOCAL_STACK_FRAME(_hx_pos_958d53fb85363643_55_segaSoundHandler,"StartEmulationState","segaSoundHandler",0x7f3e1f18,"StartEmulationState.segaSoundHandler","StartEmulationState.hx",55,0xaca2b661)
HX_LOCAL_STACK_FRAME(_hx_pos_958d53fb85363643_51_segaSoundHandler,"StartEmulationState","segaSoundHandler",0x7f3e1f18,"StartEmulationState.segaSoundHandler","StartEmulationState.hx",51,0xaca2b661)
HX_LOCAL_STACK_FRAME(_hx_pos_958d53fb85363643_69_sonicTeamPresent,"StartEmulationState","sonicTeamPresent",0x9237d5a3,"StartEmulationState.sonicTeamPresent","StartEmulationState.hx",69,0xaca2b661)
HX_LOCAL_STACK_FRAME(_hx_pos_958d53fb85363643_59_sonicTeamPresent,"StartEmulationState","sonicTeamPresent",0x9237d5a3,"StartEmulationState.sonicTeamPresent","StartEmulationState.hx",59,0xaca2b661)
HX_LOCAL_STACK_FRAME(_hx_pos_958d53fb85363643_75_update,"StartEmulationState","update",0x46e65dda,"StartEmulationState.update","StartEmulationState.hx",75,0xaca2b661)

void StartEmulationState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_958d53fb85363643_12_new)
HXDLIN(  12)		super::__construct();
            	}

Dynamic StartEmulationState_obj::__CreateEmpty() { return new StartEmulationState_obj; }

void *StartEmulationState_obj::_hx_vtable = 0;

Dynamic StartEmulationState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StartEmulationState_obj > _hx_result = new StartEmulationState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StartEmulationState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x563293a6) {
			if (inClassId<=(int)0x34bfd7f5) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x34bfd7f5;
			} else {
				return inClassId==(int)0x563293a6;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void StartEmulationState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_958d53fb85363643_19_create)
HXLINE(  20)		this->super::create();
HXLINE(  22)		::flixel::FlxG_obj::resizeWindow(320,224);
HXLINE(  23)		::flixel::FlxG_obj::set_fullscreen(true);
HXLINE(  24)		this->segaLogoProduction();
HXLINE(  27)		this->add(this->segaLogo);
            	}


void StartEmulationState_obj::segaLogoProduction(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::StartEmulationState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer task1){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::StartEmulationState,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_958d53fb85363643_45_segaLogoProduction)
HXLINE(  45)				_gthis->sonicTeamPresent();
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_GC_STACKFRAME(&_hx_pos_958d53fb85363643_44_segaLogoProduction)
HXLINE(  44)			::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.5),false, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_958d53fb85363643_32_segaLogoProduction)
HXDLIN(  32)		 ::StartEmulationState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  33)		this->segaLogo =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  34)		 ::flixel::FlxSprite _hx_tmp = this->segaLogo;
HXDLIN(  34)		_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(HX_("assets/images/sega.png",12,25,2a,ff),HX_("assets/images/sega.xml",40,36,30,ff)));
HXLINE(  35)		{
HXLINE(  35)			 ::flixel::FlxSprite _this = this->segaLogo;
HXDLIN(  35)			int axes = 17;
HXDLIN(  35)			bool _hx_tmp1;
HXDLIN(  35)			if ((axes != 1)) {
HXLINE(  35)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  35)				_hx_tmp1 = true;
            			}
HXDLIN(  35)			if (_hx_tmp1) {
HXLINE(  35)				int _hx_tmp2 = ::flixel::FlxG_obj::width;
HXDLIN(  35)				_this->set_x(((( (Float)(_hx_tmp2) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  35)			bool _hx_tmp3;
HXDLIN(  35)			if ((axes != 16)) {
HXLINE(  35)				_hx_tmp3 = (axes == 17);
            			}
            			else {
HXLINE(  35)				_hx_tmp3 = true;
            			}
HXDLIN(  35)			if (_hx_tmp3) {
HXLINE(  35)				int _hx_tmp4 = ::flixel::FlxG_obj::height;
HXDLIN(  35)				_this->set_y(((( (Float)(_hx_tmp4) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  36)		this->segaLogo->scale->set_x(( (Float)(5) ));
HXLINE(  37)		this->segaLogo->scale->set_y(( (Float)(5) ));
HXLINE(  38)		this->segaLogo->animation->addByPrefix(HX_("sega",2c,87,50,4c),HX_("sega logo",df,28,a4,8b),15,false,null(),null());
HXLINE(  39)		this->segaLogo->animation->play(HX_("sega",2c,87,50,4c),null(),null(),null());
HXLINE(  41)		this->segaSoundHandler();
HXLINE(  42)		 ::flixel::util::FlxTimer task1 =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXLINE(  43)		task1->start(5, ::Dynamic(new _hx_Closure_1(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(StartEmulationState_obj,segaLogoProduction,(void))

void StartEmulationState_obj::segaSoundHandler(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::StartEmulationState,_gthis) HXARGC(1)
            		void _hx_run(::String name){
            			HX_STACKFRAME(&_hx_pos_958d53fb85363643_55_segaSoundHandler)
HXLINE(  55)			_gthis->segaSound->play(null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_958d53fb85363643_51_segaSoundHandler)
HXDLIN(  51)		 ::StartEmulationState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  52)		this->segaSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/sega.wav",09,b0,c5,14),1,false,null(),null(),null(),null(),null(),null());
HXLINE(  53)		this->segaLogo->animation->finishCallback =  ::Dynamic(new _hx_Closure_0(_gthis));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StartEmulationState_obj,segaSoundHandler,(void))

void StartEmulationState_obj::sonicTeamPresent(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer task2){
            			HX_GC_STACKFRAME(&_hx_pos_958d53fb85363643_69_sonicTeamPresent)
HXLINE(  69)			::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.5),false,null(),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_958d53fb85363643_59_sonicTeamPresent)
HXLINE(  60)		this->sonicTeam =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  61)		this->sonicTeam->loadGraphic(HX_("assets/images/sonic-team.png",44,fc,52,16),false,null(),null(),null(),null());
HXLINE(  62)		{
HXLINE(  62)			 ::flixel::FlxSprite _this = this->sonicTeam;
HXDLIN(  62)			int axes = 17;
HXDLIN(  62)			bool _hx_tmp;
HXDLIN(  62)			if ((axes != 1)) {
HXLINE(  62)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  62)				_hx_tmp = true;
            			}
HXDLIN(  62)			if (_hx_tmp) {
HXLINE(  62)				int _hx_tmp1 = ::flixel::FlxG_obj::width;
HXDLIN(  62)				_this->set_x(((( (Float)(_hx_tmp1) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  62)			bool _hx_tmp2;
HXDLIN(  62)			if ((axes != 16)) {
HXLINE(  62)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE(  62)				_hx_tmp2 = true;
            			}
HXDLIN(  62)			if (_hx_tmp2) {
HXLINE(  62)				int _hx_tmp3 = ::flixel::FlxG_obj::height;
HXDLIN(  62)				_this->set_y(((( (Float)(_hx_tmp3) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  63)		this->sonicTeam->scale->set_x(( (Float)(5) ));
HXLINE(  64)		this->sonicTeam->scale->set_y(( (Float)(5) ));
HXLINE(  65)		this->add(this->sonicTeam);
HXLINE(  66)		::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.5),true,null(),null());
HXLINE(  67)		 ::flixel::util::FlxTimer task2 =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXLINE(  68)		task2->start(5, ::Dynamic(new _hx_Closure_0()),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(StartEmulationState_obj,sonicTeamPresent,(void))

void StartEmulationState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_958d53fb85363643_75_update)
HXDLIN(  75)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< StartEmulationState_obj > StartEmulationState_obj::__new() {
	::hx::ObjectPtr< StartEmulationState_obj > __this = new StartEmulationState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StartEmulationState_obj > StartEmulationState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StartEmulationState_obj *__this = (StartEmulationState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StartEmulationState_obj), true, "StartEmulationState"));
	*(void **)__this = StartEmulationState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StartEmulationState_obj::StartEmulationState_obj()
{
}

void StartEmulationState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StartEmulationState);
	HX_MARK_MEMBER_NAME(segaLogo,"segaLogo");
	HX_MARK_MEMBER_NAME(segaSound,"segaSound");
	HX_MARK_MEMBER_NAME(sonicTeam,"sonicTeam");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StartEmulationState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(segaLogo,"segaLogo");
	HX_VISIT_MEMBER_NAME(segaSound,"segaSound");
	HX_VISIT_MEMBER_NAME(sonicTeam,"sonicTeam");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StartEmulationState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"segaLogo") ) { return ::hx::Val( segaLogo ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"segaSound") ) { return ::hx::Val( segaSound ); }
		if (HX_FIELD_EQ(inName,"sonicTeam") ) { return ::hx::Val( sonicTeam ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"segaSoundHandler") ) { return ::hx::Val( segaSoundHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"sonicTeamPresent") ) { return ::hx::Val( sonicTeamPresent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"segaLogoProduction") ) { return ::hx::Val( segaLogoProduction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StartEmulationState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"segaLogo") ) { segaLogo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"segaSound") ) { segaSound=inValue.Cast<  ::flixel::sound::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sonicTeam") ) { sonicTeam=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StartEmulationState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("segaLogo",b7,58,d2,54));
	outFields->push(HX_("segaSound",03,f6,13,eb));
	outFields->push(HX_("sonicTeam",69,e3,81,a1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StartEmulationState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StartEmulationState_obj,segaLogo),HX_("segaLogo",b7,58,d2,54)},
	{::hx::fsObject /*  ::flixel::sound::FlxSound */ ,(int)offsetof(StartEmulationState_obj,segaSound),HX_("segaSound",03,f6,13,eb)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StartEmulationState_obj,sonicTeam),HX_("sonicTeam",69,e3,81,a1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StartEmulationState_obj_sStaticStorageInfo = 0;
#endif

static ::String StartEmulationState_obj_sMemberFields[] = {
	HX_("segaLogo",b7,58,d2,54),
	HX_("segaSound",03,f6,13,eb),
	HX_("sonicTeam",69,e3,81,a1),
	HX_("create",fc,66,0f,7c),
	HX_("segaLogoProduction",90,8d,a0,0a),
	HX_("segaSoundHandler",07,f8,b4,25),
	HX_("sonicTeamPresent",92,ae,ae,38),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class StartEmulationState_obj::__mClass;

void StartEmulationState_obj::__register()
{
	StartEmulationState_obj _hx_dummy;
	StartEmulationState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StartEmulationState",7d,38,f3,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StartEmulationState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StartEmulationState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StartEmulationState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StartEmulationState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

