// Generated by Haxe 4.3.6
#ifndef INCLUDED_lime_math_Vector2
#define INCLUDED_lime_math_Vector2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Vector2)

namespace lime{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Vector2_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Vector2_obj OBJ_;
		Vector2_obj();

	public:
		enum { _hx_ClassId = 0x38fae9aa };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.math.Vector2")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.math.Vector2"); }
		static ::hx::ObjectPtr< Vector2_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static ::hx::ObjectPtr< Vector2_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Vector2_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Vector2",ef,21,ee,a7); }

		static Float distance( ::lime::math::Vector2 pt1, ::lime::math::Vector2 pt2);
		static ::Dynamic distance_dyn();

		static  ::lime::math::Vector2 interpolate( ::lime::math::Vector2 pt1, ::lime::math::Vector2 pt2,Float f, ::lime::math::Vector2 result);
		static ::Dynamic interpolate_dyn();

		static  ::lime::math::Vector2 polar(Float len,Float angle, ::lime::math::Vector2 result);
		static ::Dynamic polar_dyn();

		Float x;
		Float y;
		 ::lime::math::Vector2 add( ::lime::math::Vector2 v, ::lime::math::Vector2 result);
		::Dynamic add_dyn();

		 ::lime::math::Vector2 clone();
		::Dynamic clone_dyn();

		bool equals( ::lime::math::Vector2 toCompare);
		::Dynamic equals_dyn();

		void normalize(Float thickness);
		::Dynamic normalize_dyn();

		void offset(Float dx,Float dy);
		::Dynamic offset_dyn();

		void setTo(Float xa,Float ya);
		::Dynamic setTo_dyn();

		 ::lime::math::Vector2 subtract( ::lime::math::Vector2 v, ::lime::math::Vector2 result);
		::Dynamic subtract_dyn();

		 ::Dynamic _hx___toFlashPoint();
		::Dynamic _hx___toFlashPoint_dyn();

		Float get_length();
		::Dynamic get_length_dyn();

		Float get_lengthSquared();
		::Dynamic get_lengthSquared_dyn();

};

} // end namespace lime
} // end namespace math

#endif /* INCLUDED_lime_math_Vector2 */ 
