// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontChar
#define INCLUDED_flixel_graphics_frames_bmfont_BMFontChar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_89999802178ac74a_17_new)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontChar)
HX_DECLARE_CLASS2(haxe,io,BytesInput)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{


class HXCPP_CLASS_ATTRIBUTES BMFontChar_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BMFontChar_obj OBJ_;
		BMFontChar_obj();

	public:
		enum { _hx_ClassId = 0x7266f7bb };

		void __construct(int id,int x,int y,int width,int height,int xoffset,int yoffset,int xadvance,int page,int chnl,::String letter);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.frames.bmfont.BMFontChar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.frames.bmfont.BMFontChar"); }

		inline static ::hx::ObjectPtr< BMFontChar_obj > __new(int id,int x,int y,int width,int height,int xoffset,int yoffset,int xadvance,int page,int chnl,::String letter) {
			::hx::ObjectPtr< BMFontChar_obj > __this = new BMFontChar_obj();
			__this->__construct(id,x,y,width,height,xoffset,yoffset,xadvance,page,chnl,letter);
			return __this;
		}

		inline static ::hx::ObjectPtr< BMFontChar_obj > __alloc(::hx::Ctx *_hx_ctx,int id,int x,int y,int width,int height,int xoffset,int yoffset,int xadvance,int page,int chnl,::String letter) {
			BMFontChar_obj *__this = (BMFontChar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BMFontChar_obj), true, "flixel.graphics.frames.bmfont.BMFontChar"));
			*(void **)__this = BMFontChar_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_89999802178ac74a_17_new)
HXLINE(  29)		( ( ::flixel::graphics::frames::bmfont::BMFontChar)(__this) )->letter = null();
HXLINE(  17)		( ( ::flixel::graphics::frames::bmfont::BMFontChar)(__this) )->id = id;
HXDLIN(  17)		( ( ::flixel::graphics::frames::bmfont::BMFontChar)(__this) )->x = x;
HXDLIN(  17)		( ( ::flixel::graphics::frames::bmfont::BMFontChar)(__this) )->y = y;
HXDLIN(  17)		( ( ::flixel::graphics::frames::bmfont::BMFontChar)(__this) )->width = width;
HXDLIN(  17)		( ( ::flixel::graphics::frames::bmfont::BMFontChar)(__this) )->height = height;
HXDLIN(  17)		( ( ::flixel::graphics::frames::bmfont::BMFontChar)(__this) )->xoffset = xoffset;
HXDLIN(  17)		( ( ::flixel::graphics::frames::bmfont::BMFontChar)(__this) )->yoffset = yoffset;
HXDLIN(  17)		( ( ::flixel::graphics::frames::bmfont::BMFontChar)(__this) )->xadvance = xadvance;
HXDLIN(  17)		( ( ::flixel::graphics::frames::bmfont::BMFontChar)(__this) )->page = page;
HXDLIN(  17)		( ( ::flixel::graphics::frames::bmfont::BMFontChar)(__this) )->chnl = chnl;
HXDLIN(  17)		if (::hx::IsNotNull( letter )) {
HXDLIN(  17)			( ( ::flixel::graphics::frames::bmfont::BMFontChar)(__this) )->letter = letter;
            		}
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BMFontChar_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BMFontChar",30,b5,be,a3); }

		static  ::flixel::graphics::frames::bmfont::BMFontChar fromXml( ::Xml charNode);
		static ::Dynamic fromXml_dyn();

		static ::Array< ::Dynamic> listFromXml( ::Xml charsNode);
		static ::Dynamic listFromXml_dyn();

		static  ::flixel::graphics::frames::bmfont::BMFontChar fromText(::String kerningText);
		static ::Dynamic fromText_dyn();

		static ::Array< ::Dynamic> listFromBytes( ::haxe::io::BytesInput bytes);
		static ::Dynamic listFromBytes_dyn();

		int id;
		int x;
		int y;
		int width;
		int height;
		int xoffset;
		int yoffset;
		int xadvance;
		int page;
		int chnl;
		::String letter;
};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont

#endif /* INCLUDED_flixel_graphics_frames_bmfont_BMFontChar */ 
