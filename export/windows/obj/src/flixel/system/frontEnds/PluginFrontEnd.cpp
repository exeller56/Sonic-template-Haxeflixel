// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEvent
#include <flixel/input/mouse/FlxMouseEvent.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEventManager
#include <flixel/input/mouse/FlxMouseEventManager.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4a20ba41f30cf210_12_new,"flixel.system.frontEnds.PluginFrontEnd","new",0x6ca9c2b1,"flixel.system.frontEnds.PluginFrontEnd.new","flixel/system/frontEnds/PluginFrontEnd.hx",12,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_47_addPlugin,"flixel.system.frontEnds.PluginFrontEnd","addPlugin",0x49a9c4c5,"flixel.system.frontEnds.PluginFrontEnd.addPlugin","flixel/system/frontEnds/PluginFrontEnd.hx",47,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_61_addIfUniqueType,"flixel.system.frontEnds.PluginFrontEnd","addIfUniqueType",0x6b0dd83a,"flixel.system.frontEnds.PluginFrontEnd.addIfUniqueType","flixel/system/frontEnds/PluginFrontEnd.hx",61,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_82_get,"flixel.system.frontEnds.PluginFrontEnd","get",0x6ca472e7,"flixel.system.frontEnds.PluginFrontEnd.get","flixel/system/frontEnds/PluginFrontEnd.hx",82,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_101_remove,"flixel.system.frontEnds.PluginFrontEnd","remove",0x66803293,"flixel.system.frontEnds.PluginFrontEnd.remove","flixel/system/frontEnds/PluginFrontEnd.hx",101,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_115_removeType,"flixel.system.frontEnds.PluginFrontEnd","removeType",0x8b4a96ed,"flixel.system.frontEnds.PluginFrontEnd.removeType","flixel/system/frontEnds/PluginFrontEnd.hx",115,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_119_removeAllByType,"flixel.system.frontEnds.PluginFrontEnd","removeAllByType",0x423a6b1f,"flixel.system.frontEnds.PluginFrontEnd.removeAllByType","flixel/system/frontEnds/PluginFrontEnd.hx",119,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_149_update,"flixel.system.frontEnds.PluginFrontEnd","update",0xe8fd1c58,"flixel.system.frontEnds.PluginFrontEnd.update","flixel/system/frontEnds/PluginFrontEnd.hx",149,0xbff70e9e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a20ba41f30cf210_164_draw,"flixel.system.frontEnds.PluginFrontEnd","draw",0xa14e4093,"flixel.system.frontEnds.PluginFrontEnd.draw","flixel/system/frontEnds/PluginFrontEnd.hx",164,0xbff70e9e)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void PluginFrontEnd_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4a20ba41f30cf210_12_new)
HXLINE(  23)		this->drawOnTop = false;
HXLINE(  17)		this->list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 138)		this->addPlugin((::flixel::util::FlxTimer_obj::globalManager =  ::flixel::util::FlxTimerManager_obj::__alloc( HX_CTX )));
HXLINE( 139)		this->addPlugin((::flixel::tweens::FlxTween_obj::globalManager =  ::flixel::tweens::FlxTweenManager_obj::__alloc( HX_CTX )));
HXLINE( 140)		this->addPlugin((::flixel::input::mouse::FlxMouseEvent_obj::globalManager =  ::flixel::input::mouse::FlxMouseEventManager_obj::__alloc( HX_CTX )));
            	}

Dynamic PluginFrontEnd_obj::__CreateEmpty() { return new PluginFrontEnd_obj; }

void *PluginFrontEnd_obj::_hx_vtable = 0;

Dynamic PluginFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PluginFrontEnd_obj > _hx_result = new PluginFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PluginFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4da9793b;
}

 ::Dynamic PluginFrontEnd_obj::addPlugin( ::Dynamic plugin){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_47_addPlugin)
HXLINE(  49)		this->list->push(plugin);
HXLINE(  50)		return plugin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,addPlugin,return )

 ::Dynamic PluginFrontEnd_obj::addIfUniqueType( ::Dynamic plugin){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_61_addIfUniqueType)
HXLINE(  63)		{
HXLINE(  63)			int _g = 0;
HXDLIN(  63)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  63)			while((_g < _g1->length)){
HXLINE(  63)				 ::flixel::FlxBasic p = _g1->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN(  63)				_g = (_g + 1);
HXLINE(  65)				bool Simple = true;
HXDLIN(  65)				::String _hx_tmp = ::flixel::util::FlxStringUtil_obj::getClassName(plugin,Simple);
HXDLIN(  65)				if ((_hx_tmp == ::flixel::util::FlxStringUtil_obj::getClassName(p,Simple))) {
HXLINE(  66)					return plugin;
            				}
            			}
            		}
HXLINE(  70)		this->list->push(plugin);
HXLINE(  71)		return plugin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,addIfUniqueType,return )

 ::Dynamic PluginFrontEnd_obj::get(::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_82_get)
HXLINE(  83)		{
HXLINE(  83)			int _g = 0;
HXDLIN(  83)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  83)			while((_g < _g1->length)){
HXLINE(  83)				 ::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN(  83)				_g = (_g + 1);
HXLINE(  85)				if (::Std_obj::isOfType(plugin,type)) {
HXLINE(  87)					return plugin;
            				}
            			}
            		}
HXLINE(  91)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,get,return )

 ::Dynamic PluginFrontEnd_obj::remove( ::Dynamic plugin){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_101_remove)
HXLINE( 102)		this->list->remove(plugin);
HXLINE( 103)		return plugin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,remove,return )

bool PluginFrontEnd_obj::removeType(::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_115_removeType)
HXDLIN( 115)		return this->removeAllByType(type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,removeType,return )

bool PluginFrontEnd_obj::removeAllByType(::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_119_removeAllByType)
HXLINE( 120)		bool results = false;
HXLINE( 122)		int i = this->list->length;
HXLINE( 123)		while(true){
HXLINE( 123)			i = (i - 1);
HXDLIN( 123)			if (!(((i + 1) > 0))) {
HXLINE( 123)				goto _hx_goto_8;
            			}
HXLINE( 125)			if (::Std_obj::isOfType(this->list->__get(i).StaticCast<  ::flixel::FlxBasic >(),type)) {
HXLINE( 127)				this->list->removeRange(i,1);
HXLINE( 128)				results = true;
            			}
            		}
            		_hx_goto_8:;
HXLINE( 132)		return results;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,removeAllByType,return )

void PluginFrontEnd_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_149_update)
HXDLIN( 149)		int _g = 0;
HXDLIN( 149)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 149)		while((_g < _g1->length)){
HXDLIN( 149)			 ::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN( 149)			_g = (_g + 1);
HXLINE( 151)			bool _hx_tmp;
HXDLIN( 151)			if (plugin->exists) {
HXLINE( 151)				_hx_tmp = plugin->active;
            			}
            			else {
HXLINE( 151)				_hx_tmp = false;
            			}
HXDLIN( 151)			if (_hx_tmp) {
HXLINE( 153)				plugin->update(elapsed);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,update,(void))

void PluginFrontEnd_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_4a20ba41f30cf210_164_draw)
HXDLIN( 164)		int _g = 0;
HXDLIN( 164)		::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 164)		while((_g < _g1->length)){
HXDLIN( 164)			 ::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN( 164)			_g = (_g + 1);
HXLINE( 166)			bool _hx_tmp;
HXDLIN( 166)			if (plugin->exists) {
HXLINE( 166)				_hx_tmp = plugin->visible;
            			}
            			else {
HXLINE( 166)				_hx_tmp = false;
            			}
HXDLIN( 166)			if (_hx_tmp) {
HXLINE( 168)				plugin->draw();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PluginFrontEnd_obj,draw,(void))


::hx::ObjectPtr< PluginFrontEnd_obj > PluginFrontEnd_obj::__new() {
	::hx::ObjectPtr< PluginFrontEnd_obj > __this = new PluginFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PluginFrontEnd_obj > PluginFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PluginFrontEnd_obj *__this = (PluginFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PluginFrontEnd_obj), true, "flixel.system.frontEnds.PluginFrontEnd"));
	*(void **)__this = PluginFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PluginFrontEnd_obj::PluginFrontEnd_obj()
{
}

void PluginFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PluginFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(drawOnTop,"drawOnTop");
	HX_MARK_END_CLASS();
}

void PluginFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(drawOnTop,"drawOnTop");
}

::hx::Val PluginFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawOnTop") ) { return ::hx::Val( drawOnTop ); }
		if (HX_FIELD_EQ(inName,"addPlugin") ) { return ::hx::Val( addPlugin_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeType") ) { return ::hx::Val( removeType_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addIfUniqueType") ) { return ::hx::Val( addIfUniqueType_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAllByType") ) { return ::hx::Val( removeAllByType_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PluginFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawOnTop") ) { drawOnTop=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PluginFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("list",5e,1c,b3,47));
	outFields->push(HX_("drawOnTop",12,30,7b,fa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PluginFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PluginFrontEnd_obj,list),HX_("list",5e,1c,b3,47)},
	{::hx::fsBool,(int)offsetof(PluginFrontEnd_obj,drawOnTop),HX_("drawOnTop",12,30,7b,fa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PluginFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String PluginFrontEnd_obj_sMemberFields[] = {
	HX_("list",5e,1c,b3,47),
	HX_("drawOnTop",12,30,7b,fa),
	HX_("addPlugin",b4,bf,07,fd),
	HX_("addIfUniqueType",69,30,ad,4a),
	HX_("get",96,80,4e,00),
	HX_("remove",44,9c,88,04),
	HX_("removeType",1e,2d,28,ca),
	HX_("removeAllByType",4e,c3,d9,21),
	HX_("update",09,86,05,87),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class PluginFrontEnd_obj::__mClass;

void PluginFrontEnd_obj::__register()
{
	PluginFrontEnd_obj _hx_dummy;
	PluginFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.PluginFrontEnd",3f,96,ac,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PluginFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PluginFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PluginFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PluginFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
