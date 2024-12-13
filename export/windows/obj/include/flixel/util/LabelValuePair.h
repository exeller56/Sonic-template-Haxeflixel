// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_util_LabelValuePair
#define INCLUDED_flixel_util_LabelValuePair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,util,FlxPool)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)
HX_DECLARE_CLASS2(flixel,util,LabelValuePair)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES LabelValuePair_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LabelValuePair_obj OBJ_;
		LabelValuePair_obj();

	public:
		enum { _hx_ClassId = 0x2545c61d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util.LabelValuePair")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.util.LabelValuePair"); }
		static ::hx::ObjectPtr< LabelValuePair_obj > __new();
		static ::hx::ObjectPtr< LabelValuePair_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LabelValuePair_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("LabelValuePair",b7,9b,80,94); }

		static void __boot();
		static  ::flixel::util::FlxPool _pool;
		static  ::flixel::util::LabelValuePair weak(::String label, ::Dynamic value);
		static ::Dynamic weak_dyn();

		::String label;
		 ::Dynamic value;
		 ::flixel::util::LabelValuePair create(::String label, ::Dynamic value);
		::Dynamic create_dyn();

		void put();
		::Dynamic put_dyn();

		void destroy();
		::Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_LabelValuePair */ 
