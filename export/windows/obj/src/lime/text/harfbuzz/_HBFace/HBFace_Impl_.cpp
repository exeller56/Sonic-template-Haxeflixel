// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz__HBFace_HBFace_Impl_
#include <lime/text/harfbuzz/_HBFace/HBFace_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3c3f5af58f50a8b3_17__new,"lime.text.harfbuzz._HBFace.HBFace_Impl_","_new",0x6343ca1a,"lime.text.harfbuzz._HBFace.HBFace_Impl_._new","lime/text/harfbuzz/HBFace.hx",17,0x49e1a040)
HX_LOCAL_STACK_FRAME(_hx_pos_3c3f5af58f50a8b3_30_get_empty,"lime.text.harfbuzz._HBFace.HBFace_Impl_","get_empty",0x41d8238b,"lime.text.harfbuzz._HBFace.HBFace_Impl_.get_empty","lime/text/harfbuzz/HBFace.hx",30,0x49e1a040)
HX_LOCAL_STACK_FRAME(_hx_pos_3c3f5af58f50a8b3_39_get_glyphCount,"lime.text.harfbuzz._HBFace.HBFace_Impl_","get_glyphCount",0x3bf765c5,"lime.text.harfbuzz._HBFace.HBFace_Impl_.get_glyphCount","lime/text/harfbuzz/HBFace.hx",39,0x49e1a040)
HX_LOCAL_STACK_FRAME(_hx_pos_3c3f5af58f50a8b3_46_set_glyphCount,"lime.text.harfbuzz._HBFace.HBFace_Impl_","set_glyphCount",0x5c174e39,"lime.text.harfbuzz._HBFace.HBFace_Impl_.set_glyphCount","lime/text/harfbuzz/HBFace.hx",46,0x49e1a040)
HX_LOCAL_STACK_FRAME(_hx_pos_3c3f5af58f50a8b3_56_get_immutable,"lime.text.harfbuzz._HBFace.HBFace_Impl_","get_immutable",0xb1a06840,"lime.text.harfbuzz._HBFace.HBFace_Impl_.get_immutable","lime/text/harfbuzz/HBFace.hx",56,0x49e1a040)
HX_LOCAL_STACK_FRAME(_hx_pos_3c3f5af58f50a8b3_65_get_index,"lime.text.harfbuzz._HBFace.HBFace_Impl_","get_index",0x90128410,"lime.text.harfbuzz._HBFace.HBFace_Impl_.get_index","lime/text/harfbuzz/HBFace.hx",65,0x49e1a040)
HX_LOCAL_STACK_FRAME(_hx_pos_3c3f5af58f50a8b3_72_set_index,"lime.text.harfbuzz._HBFace.HBFace_Impl_","set_index",0x7363701c,"lime.text.harfbuzz._HBFace.HBFace_Impl_.set_index","lime/text/harfbuzz/HBFace.hx",72,0x49e1a040)
HX_LOCAL_STACK_FRAME(_hx_pos_3c3f5af58f50a8b3_82_get_upem,"lime.text.harfbuzz._HBFace.HBFace_Impl_","get_upem",0x79160c45,"lime.text.harfbuzz._HBFace.HBFace_Impl_.get_upem","lime/text/harfbuzz/HBFace.hx",82,0x49e1a040)
HX_LOCAL_STACK_FRAME(_hx_pos_3c3f5af58f50a8b3_89_set_upem,"lime.text.harfbuzz._HBFace.HBFace_Impl_","set_upem",0x277365b9,"lime.text.harfbuzz._HBFace.HBFace_Impl_.set_upem","lime/text/harfbuzz/HBFace.hx",89,0x49e1a040)
namespace lime{
namespace text{
namespace harfbuzz{
namespace _HBFace{

void HBFace_Impl__obj::__construct() { }

Dynamic HBFace_Impl__obj::__CreateEmpty() { return new HBFace_Impl__obj; }

void *HBFace_Impl__obj::_hx_vtable = 0;

Dynamic HBFace_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HBFace_Impl__obj > _hx_result = new HBFace_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBFace_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x559249c7;
}

 ::Dynamic HBFace_Impl__obj::_new( ::Dynamic blob,int index){
            	HX_STACKFRAME(&_hx_pos_3c3f5af58f50a8b3_17__new)
HXDLIN(  17)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_face_create(::hx::DynamicPtr(blob),index)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBFace_Impl__obj,_new,return )

 ::Dynamic HBFace_Impl__obj::get_empty(){
            	HX_STACKFRAME(&_hx_pos_3c3f5af58f50a8b3_30_get_empty)
HXDLIN(  30)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_face_get_empty()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HBFace_Impl__obj,get_empty,return )

int HBFace_Impl__obj::get_glyphCount( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_3c3f5af58f50a8b3_39_get_glyphCount)
HXDLIN(  39)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_face_get_glyph_count(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBFace_Impl__obj,get_glyphCount,return )

int HBFace_Impl__obj::set_glyphCount( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_3c3f5af58f50a8b3_46_set_glyphCount)
HXLINE(  48)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_face_set_glyph_count(::hx::DynamicPtr(this1),value);
HXLINE(  50)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBFace_Impl__obj,set_glyphCount,return )

bool HBFace_Impl__obj::get_immutable( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_3c3f5af58f50a8b3_56_get_immutable)
HXDLIN(  56)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_face_is_immutable(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBFace_Impl__obj,get_immutable,return )

int HBFace_Impl__obj::get_index( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_3c3f5af58f50a8b3_65_get_index)
HXDLIN(  65)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_face_get_index(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBFace_Impl__obj,get_index,return )

int HBFace_Impl__obj::set_index( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_3c3f5af58f50a8b3_72_set_index)
HXLINE(  74)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_face_set_index(::hx::DynamicPtr(this1),value);
HXLINE(  76)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBFace_Impl__obj,set_index,return )

int HBFace_Impl__obj::get_upem( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_3c3f5af58f50a8b3_82_get_upem)
HXDLIN(  82)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_face_get_upem(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBFace_Impl__obj,get_upem,return )

int HBFace_Impl__obj::set_upem( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_3c3f5af58f50a8b3_89_set_upem)
HXLINE(  91)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_face_set_upem(::hx::DynamicPtr(this1),value);
HXLINE(  93)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBFace_Impl__obj,set_upem,return )


HBFace_Impl__obj::HBFace_Impl__obj()
{
}

bool HBFace_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_upem") ) { outValue = get_upem_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_upem") ) { outValue = set_upem_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_empty") ) { outValue = get_empty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_index") ) { outValue = get_index_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_index") ) { outValue = set_index_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_immutable") ) { outValue = get_immutable_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_glyphCount") ) { outValue = get_glyphCount_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_glyphCount") ) { outValue = set_glyphCount_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HBFace_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HBFace_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class HBFace_Impl__obj::__mClass;

static ::String HBFace_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_empty",e4,96,83,b3),
	HX_("get_glyphCount",cc,2f,ae,7e),
	HX_("set_glyphCount",40,18,ce,9e),
	HX_("get_immutable",19,fc,2a,28),
	HX_("get_index",69,f7,bd,01),
	HX_("set_index",75,e3,0e,e5),
	HX_("get_upem",0c,07,66,cd),
	HX_("set_upem",80,60,c3,7b),
	::String(null())
};

void HBFace_Impl__obj::__register()
{
	HBFace_Impl__obj _hx_dummy;
	HBFace_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.text.harfbuzz._HBFace.HBFace_Impl_",55,e6,7d,04);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HBFace_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HBFace_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HBFace_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBFace_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBFace_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
} // end namespace _HBFace
