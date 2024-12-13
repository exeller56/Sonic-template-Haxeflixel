// Generated by Haxe 4.3.6
#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_binning_control
#define INCLUDED_lime_graphics_opengl_ext_QCOM_binning_control

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_06241e1e759ad02a_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_binning_control)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES QCOM_binning_control_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QCOM_binning_control_obj OBJ_;
		QCOM_binning_control_obj();

	public:
		enum { _hx_ClassId = 0x05a67f3c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_binning_control")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.QCOM_binning_control"); }

		inline static ::hx::ObjectPtr< QCOM_binning_control_obj > __new() {
			::hx::ObjectPtr< QCOM_binning_control_obj > __this = new QCOM_binning_control_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< QCOM_binning_control_obj > __alloc(::hx::Ctx *_hx_ctx) {
			QCOM_binning_control_obj *__this = (QCOM_binning_control_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QCOM_binning_control_obj), false, "lime.graphics.opengl.ext.QCOM_binning_control"));
			*(void **)__this = QCOM_binning_control_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_06241e1e759ad02a_4_new)
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::QCOM_binning_control)(__this) )->RENDER_DIRECT_TO_FRAMEBUFFER_QCOM = 36787;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::QCOM_binning_control)(__this) )->GPU_OPTIMIZED_QCOM = 36786;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::QCOM_binning_control)(__this) )->CPU_OPTIMIZED_QCOM = 36785;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::QCOM_binning_control)(__this) )->BINNING_CONTROL_HINT_QCOM = 36784;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QCOM_binning_control_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("QCOM_binning_control",4a,6c,46,7b); }

		int BINNING_CONTROL_HINT_QCOM;
		int CPU_OPTIMIZED_QCOM;
		int GPU_OPTIMIZED_QCOM;
		int RENDER_DIRECT_TO_FRAMEBUFFER_QCOM;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_binning_control */ 
