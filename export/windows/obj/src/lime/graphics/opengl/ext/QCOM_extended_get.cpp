// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get
#include <lime/graphics/opengl/ext/QCOM_extended_get.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_34469f9be3ed880b_4_new,"lime.graphics.opengl.ext.QCOM_extended_get","new",0x27edf9cf,"lime.graphics.opengl.ext.QCOM_extended_get.new","lime/graphics/opengl/ext/QCOM_extended_get.hx",4,0xfa68ba23)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void QCOM_extended_get_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_34469f9be3ed880b_4_new)
HXLINE(  16)		this->STATE_RESTORE = 35804;
HXLINE(  15)		this->TEXTURE_OBJECT_VALID_QCOM = 35803;
HXLINE(  14)		this->TEXTURE_TARGET_QCOM = 35802;
HXLINE(  13)		this->TEXTURE_NUM_LEVELS_QCOM = 35801;
HXLINE(  12)		this->TEXTURE_IMAGE_VALID_QCOM = 35800;
HXLINE(  11)		this->TEXTURE_TYPE_QCOM = 35799;
HXLINE(  10)		this->TEXTURE_FORMAT_QCOM = 35798;
HXLINE(   9)		this->TEXTURE_INTERNAL_FORMAT_QCOM = 35797;
HXLINE(   8)		this->TEXTURE_DEPTH_QCOM = 35796;
HXLINE(   7)		this->TEXTURE_HEIGHT_QCOM = 35795;
HXLINE(   6)		this->TEXTURE_WIDTH_QCOM = 35794;
            	}

Dynamic QCOM_extended_get_obj::__CreateEmpty() { return new QCOM_extended_get_obj; }

void *QCOM_extended_get_obj::_hx_vtable = 0;

Dynamic QCOM_extended_get_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QCOM_extended_get_obj > _hx_result = new QCOM_extended_get_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QCOM_extended_get_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0171ada5;
}


QCOM_extended_get_obj::QCOM_extended_get_obj()
{
}

::hx::Val QCOM_extended_get_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"STATE_RESTORE") ) { return ::hx::Val( STATE_RESTORE ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"TEXTURE_TYPE_QCOM") ) { return ::hx::Val( TEXTURE_TYPE_QCOM ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TEXTURE_WIDTH_QCOM") ) { return ::hx::Val( TEXTURE_WIDTH_QCOM ); }
		if (HX_FIELD_EQ(inName,"TEXTURE_DEPTH_QCOM") ) { return ::hx::Val( TEXTURE_DEPTH_QCOM ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_HEIGHT_QCOM") ) { return ::hx::Val( TEXTURE_HEIGHT_QCOM ); }
		if (HX_FIELD_EQ(inName,"TEXTURE_FORMAT_QCOM") ) { return ::hx::Val( TEXTURE_FORMAT_QCOM ); }
		if (HX_FIELD_EQ(inName,"TEXTURE_TARGET_QCOM") ) { return ::hx::Val( TEXTURE_TARGET_QCOM ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"TEXTURE_NUM_LEVELS_QCOM") ) { return ::hx::Val( TEXTURE_NUM_LEVELS_QCOM ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TEXTURE_IMAGE_VALID_QCOM") ) { return ::hx::Val( TEXTURE_IMAGE_VALID_QCOM ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"TEXTURE_OBJECT_VALID_QCOM") ) { return ::hx::Val( TEXTURE_OBJECT_VALID_QCOM ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"TEXTURE_INTERNAL_FORMAT_QCOM") ) { return ::hx::Val( TEXTURE_INTERNAL_FORMAT_QCOM ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val QCOM_extended_get_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"STATE_RESTORE") ) { STATE_RESTORE=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"TEXTURE_TYPE_QCOM") ) { TEXTURE_TYPE_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TEXTURE_WIDTH_QCOM") ) { TEXTURE_WIDTH_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_DEPTH_QCOM") ) { TEXTURE_DEPTH_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_HEIGHT_QCOM") ) { TEXTURE_HEIGHT_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_FORMAT_QCOM") ) { TEXTURE_FORMAT_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_TARGET_QCOM") ) { TEXTURE_TARGET_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"TEXTURE_NUM_LEVELS_QCOM") ) { TEXTURE_NUM_LEVELS_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TEXTURE_IMAGE_VALID_QCOM") ) { TEXTURE_IMAGE_VALID_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"TEXTURE_OBJECT_VALID_QCOM") ) { TEXTURE_OBJECT_VALID_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"TEXTURE_INTERNAL_FORMAT_QCOM") ) { TEXTURE_INTERNAL_FORMAT_QCOM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QCOM_extended_get_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("TEXTURE_WIDTH_QCOM",ed,34,0f,3f));
	outFields->push(HX_("TEXTURE_HEIGHT_QCOM",44,3e,1b,4a));
	outFields->push(HX_("TEXTURE_DEPTH_QCOM",d0,04,20,5c));
	outFields->push(HX_("TEXTURE_INTERNAL_FORMAT_QCOM",ba,8b,6b,a9));
	outFields->push(HX_("TEXTURE_FORMAT_QCOM",f4,34,dc,69));
	outFields->push(HX_("TEXTURE_TYPE_QCOM",91,13,0e,a7));
	outFields->push(HX_("TEXTURE_IMAGE_VALID_QCOM",fb,1e,c4,09));
	outFields->push(HX_("TEXTURE_NUM_LEVELS_QCOM",e3,f1,65,25));
	outFields->push(HX_("TEXTURE_TARGET_QCOM",9a,b2,1a,41));
	outFields->push(HX_("TEXTURE_OBJECT_VALID_QCOM",ef,6e,81,63));
	outFields->push(HX_("STATE_RESTORE",a0,1b,6f,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo QCOM_extended_get_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_WIDTH_QCOM),HX_("TEXTURE_WIDTH_QCOM",ed,34,0f,3f)},
	{::hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_HEIGHT_QCOM),HX_("TEXTURE_HEIGHT_QCOM",44,3e,1b,4a)},
	{::hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_DEPTH_QCOM),HX_("TEXTURE_DEPTH_QCOM",d0,04,20,5c)},
	{::hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_INTERNAL_FORMAT_QCOM),HX_("TEXTURE_INTERNAL_FORMAT_QCOM",ba,8b,6b,a9)},
	{::hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_FORMAT_QCOM),HX_("TEXTURE_FORMAT_QCOM",f4,34,dc,69)},
	{::hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_TYPE_QCOM),HX_("TEXTURE_TYPE_QCOM",91,13,0e,a7)},
	{::hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_IMAGE_VALID_QCOM),HX_("TEXTURE_IMAGE_VALID_QCOM",fb,1e,c4,09)},
	{::hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_NUM_LEVELS_QCOM),HX_("TEXTURE_NUM_LEVELS_QCOM",e3,f1,65,25)},
	{::hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_TARGET_QCOM),HX_("TEXTURE_TARGET_QCOM",9a,b2,1a,41)},
	{::hx::fsInt,(int)offsetof(QCOM_extended_get_obj,TEXTURE_OBJECT_VALID_QCOM),HX_("TEXTURE_OBJECT_VALID_QCOM",ef,6e,81,63)},
	{::hx::fsInt,(int)offsetof(QCOM_extended_get_obj,STATE_RESTORE),HX_("STATE_RESTORE",a0,1b,6f,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *QCOM_extended_get_obj_sStaticStorageInfo = 0;
#endif

static ::String QCOM_extended_get_obj_sMemberFields[] = {
	HX_("TEXTURE_WIDTH_QCOM",ed,34,0f,3f),
	HX_("TEXTURE_HEIGHT_QCOM",44,3e,1b,4a),
	HX_("TEXTURE_DEPTH_QCOM",d0,04,20,5c),
	HX_("TEXTURE_INTERNAL_FORMAT_QCOM",ba,8b,6b,a9),
	HX_("TEXTURE_FORMAT_QCOM",f4,34,dc,69),
	HX_("TEXTURE_TYPE_QCOM",91,13,0e,a7),
	HX_("TEXTURE_IMAGE_VALID_QCOM",fb,1e,c4,09),
	HX_("TEXTURE_NUM_LEVELS_QCOM",e3,f1,65,25),
	HX_("TEXTURE_TARGET_QCOM",9a,b2,1a,41),
	HX_("TEXTURE_OBJECT_VALID_QCOM",ef,6e,81,63),
	HX_("STATE_RESTORE",a0,1b,6f,00),
	::String(null()) };

::hx::Class QCOM_extended_get_obj::__mClass;

void QCOM_extended_get_obj::__register()
{
	QCOM_extended_get_obj _hx_dummy;
	QCOM_extended_get_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.QCOM_extended_get",5d,66,43,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(QCOM_extended_get_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< QCOM_extended_get_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QCOM_extended_get_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QCOM_extended_get_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
