// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED__UnicodeString_UnicodeString_Impl_
#include <_UnicodeString/UnicodeString_Impl_.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontUtil
#include <flixel/graphics/frames/bmfont/BMFontUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1f394a6930592b30_14_forEachAttribute,"flixel.graphics.frames.bmfont.BMFontUtil","forEachAttribute",0x8ebc5f47,"flixel.graphics.frames.bmfont.BMFontUtil.forEachAttribute","flixel/graphics/frames/bmfont/BMFontUtil.hx",14,0x9af5a485)
HX_LOCAL_STACK_FRAME(_hx_pos_1f394a6930592b30_11_boot,"flixel.graphics.frames.bmfont.BMFontUtil","boot",0x275886e7,"flixel.graphics.frames.bmfont.BMFontUtil.boot","flixel/graphics/frames/bmfont/BMFontUtil.hx",11,0x9af5a485)
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{

void BMFontUtil_obj::__construct() { }

Dynamic BMFontUtil_obj::__CreateEmpty() { return new BMFontUtil_obj; }

void *BMFontUtil_obj::_hx_vtable = 0;

Dynamic BMFontUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BMFontUtil_obj > _hx_result = new BMFontUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BMFontUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e55f0e7;
}

 ::EReg BMFontUtil_obj::attFinder;

void BMFontUtil_obj::forEachAttribute(::String text, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_1f394a6930592b30_14_forEachAttribute)
HXLINE(  15)		int index = 0;
HXLINE(  16)		while(true){
HXLINE(  16)			 ::EReg _hx_tmp = ::flixel::graphics::frames::bmfont::BMFontUtil_obj::attFinder;
HXDLIN(  16)			if (!(_hx_tmp->match(::_UnicodeString::UnicodeString_Impl__obj::substr(text,index,null())))) {
HXLINE(  16)				goto _hx_goto_0;
            			}
HXLINE(  18)			::String key = ::flixel::graphics::frames::bmfont::BMFontUtil_obj::attFinder->matched(1);
HXLINE(  19)			::String value = ::flixel::graphics::frames::bmfont::BMFontUtil_obj::attFinder->matched(3);
HXLINE(  20)			callback(key,value);
HXLINE(  22)			int nextIndex = ::_UnicodeString::UnicodeString_Impl__obj::get_length(text);
HXDLIN(  22)			int nextIndex1 = (nextIndex - ::flixel::graphics::frames::bmfont::BMFontUtil_obj::attFinder->matchedRight().length);
HXLINE(  23)			if ((nextIndex1 == index)) {
HXLINE(  24)				HX_STACK_DO_THROW((HX_("Error parsing text: ",fb,6f,c8,79) + text));
            			}
HXLINE(  25)			index = nextIndex1;
            		}
            		_hx_goto_0:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BMFontUtil_obj,forEachAttribute,(void))


BMFontUtil_obj::BMFontUtil_obj()
{
}

bool BMFontUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"attFinder") ) { outValue = ( attFinder ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"forEachAttribute") ) { outValue = forEachAttribute_dyn(); return true; }
	}
	return false;
}

bool BMFontUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"attFinder") ) { attFinder=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BMFontUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo BMFontUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(void *) &BMFontUtil_obj::attFinder,HX_("attFinder",e7,2b,1e,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void BMFontUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BMFontUtil_obj::attFinder,"attFinder");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BMFontUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BMFontUtil_obj::attFinder,"attFinder");
};

#endif

::hx::Class BMFontUtil_obj::__mClass;

static ::String BMFontUtil_obj_sStaticFields[] = {
	HX_("attFinder",e7,2b,1e,6b),
	HX_("forEachAttribute",12,a1,eb,ee),
	::String(null())
};

void BMFontUtil_obj::__register()
{
	BMFontUtil_obj _hx_dummy;
	BMFontUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.bmfont.BMFontUtil",d9,59,c0,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMFontUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &BMFontUtil_obj::__SetStatic;
	__mClass->mMarkFunc = BMFontUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BMFontUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BMFontUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BMFontUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMFontUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMFontUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BMFontUtil_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_1f394a6930592b30_11_boot)
HXDLIN(  11)		attFinder =  ::EReg_obj::__alloc( HX_CTX ,HX_("(\\w+?)=(\"?)(.*?)\\2(?=\\s|$)",f9,95,75,99),HX_("",00,00,00,00));
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont