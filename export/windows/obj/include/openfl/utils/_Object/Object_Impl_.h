// Generated by Haxe 4.3.6
#ifndef INCLUDED_openfl_utils__Object_Object_Impl_
#define INCLUDED_openfl_utils__Object_Object_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,utils,_Object,Object_Impl_)

namespace openfl{
namespace utils{
namespace _Object{


class HXCPP_CLASS_ATTRIBUTES Object_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Object_Impl__obj OBJ_;
		Object_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6bbb6220 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.utils._Object.Object_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.utils._Object.Object_Impl_"); }

		inline static ::hx::ObjectPtr< Object_Impl__obj > __new() {
			::hx::ObjectPtr< Object_Impl__obj > __this = new Object_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Object_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Object_Impl__obj *__this = (Object_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Object_Impl__obj), false, "openfl.utils._Object.Object_Impl_"));
			*(void **)__this = Object_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Object_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Object_Impl_",bf,20,11,ba); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::Dynamic _new();
		static ::Dynamic _new_dyn();

		static bool hasOwnProperty( ::Dynamic this1,::String name);
		static ::Dynamic hasOwnProperty_dyn();

		static bool isPrototypeOf( ::Dynamic this1,::hx::Class theClass);
		static ::Dynamic isPrototypeOf_dyn();

		static  ::Dynamic iterator( ::Dynamic this1);
		static ::Dynamic iterator_dyn();

		static bool propertyIsEnumerable( ::Dynamic this1,::String name);
		static ::Dynamic propertyIsEnumerable_dyn();

		static ::String toLocaleString( ::Dynamic this1);
		static ::Dynamic toLocaleString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

		static  ::Dynamic valueOf( ::Dynamic this1);
		static ::Dynamic valueOf_dyn();

		static  ::Dynamic _hx___fieldRead( ::Dynamic this1,::String name);
		static ::Dynamic _hx___fieldRead_dyn();

		static  ::Dynamic _hx___fieldWrite( ::Dynamic this1,::String name, ::Dynamic value);
		static ::Dynamic _hx___fieldWrite_dyn();

		static  ::Dynamic __get( ::Dynamic this1,::String key);
		static ::Dynamic __get_dyn();

		static  ::Dynamic __set( ::Dynamic this1,::String key, ::Dynamic value);
		static ::Dynamic __set_dyn();

		static  ::Dynamic _hx___getArray( ::Dynamic this1,int index);
		static ::Dynamic _hx___getArray_dyn();

		static  ::Dynamic _hx___setArray( ::Dynamic this1,int index, ::Dynamic value);
		static ::Dynamic _hx___setArray_dyn();

		static  ::Dynamic toFunction( ::Dynamic this1);
		static ::Dynamic toFunction_dyn();

		static Float toFloat( ::Dynamic this1);
		static ::Dynamic toFloat_dyn();

		static int toInt( ::Dynamic this1);
		static ::Dynamic toInt_dyn();

		static bool toBool( ::Dynamic this1);
		static ::Dynamic toBool_dyn();

		static  ::Dynamic _hx___negate( ::Dynamic this1);
		static ::Dynamic _hx___negate_dyn();

		static  ::Dynamic _hx___preIncrement( ::Dynamic this1);
		static ::Dynamic _hx___preIncrement_dyn();

		static  ::Dynamic _hx___postIncrement( ::Dynamic this1);
		static ::Dynamic _hx___postIncrement_dyn();

		static  ::Dynamic _hx___preDecrement( ::Dynamic this1);
		static ::Dynamic _hx___preDecrement_dyn();

		static  ::Dynamic _hx___postDecrement( ::Dynamic this1);
		static ::Dynamic _hx___postDecrement_dyn();

		static  ::Dynamic _hx___add( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___add_dyn();

		static ::String _hx___addString( ::Dynamic a,::String b);
		static ::Dynamic _hx___addString_dyn();

		static  ::Dynamic _hx___addInt( ::Dynamic a,int b);
		static ::Dynamic _hx___addInt_dyn();

		static Float _hx___addFloat( ::Dynamic a,Float b);
		static ::Dynamic _hx___addFloat_dyn();

		static  ::Dynamic _hx___sub( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___sub_dyn();

		static  ::Dynamic _hx___subInt( ::Dynamic a,int b);
		static ::Dynamic _hx___subInt_dyn();

		static  ::Dynamic _hx___intSub(int a, ::Dynamic b);
		static ::Dynamic _hx___intSub_dyn();

		static Float _hx___subFloat( ::Dynamic a,Float b);
		static ::Dynamic _hx___subFloat_dyn();

		static Float _hx___floatSub(Float a, ::Dynamic b);
		static ::Dynamic _hx___floatSub_dyn();

		static  ::Dynamic _hx___mul( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___mul_dyn();

		static  ::Dynamic _hx___mulInt( ::Dynamic a,int b);
		static ::Dynamic _hx___mulInt_dyn();

		static Float _hx___mulFloat( ::Dynamic a,Float b);
		static ::Dynamic _hx___mulFloat_dyn();

		static Float _hx___div( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___div_dyn();

		static Float _hx___divInt( ::Dynamic a,int b);
		static ::Dynamic _hx___divInt_dyn();

		static Float _hx___intDiv(int a, ::Dynamic b);
		static ::Dynamic _hx___intDiv_dyn();

		static Float _hx___divFloat( ::Dynamic a,Float b);
		static ::Dynamic _hx___divFloat_dyn();

		static Float _hx___floatDiv(Float a, ::Dynamic b);
		static ::Dynamic _hx___floatDiv_dyn();

		static Float _hx___mod( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___mod_dyn();

		static Float _hx___modInt( ::Dynamic a,int b);
		static ::Dynamic _hx___modInt_dyn();

		static Float _hx___intMod(int a, ::Dynamic b);
		static ::Dynamic _hx___intMod_dyn();

		static Float _hx___modFloat( ::Dynamic a,Float b);
		static ::Dynamic _hx___modFloat_dyn();

		static Float _hx___floatMod(Float a, ::Dynamic b);
		static ::Dynamic _hx___floatMod_dyn();

		static bool _hx___eq( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___eq_dyn();

		static bool _hx___eqDynamic( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___eqDynamic_dyn();

		static bool _hx___neq( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___neq_dyn();

		static bool _hx___neqDynamic( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___neqDynamic_dyn();

		static bool _hx___lt( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___lt_dyn();

		static bool _hx___ltInt( ::Dynamic a,int b);
		static ::Dynamic _hx___ltInt_dyn();

		static bool _hx___intLt(int a, ::Dynamic b);
		static ::Dynamic _hx___intLt_dyn();

		static bool _hx___ltFloat( ::Dynamic a,Float b);
		static ::Dynamic _hx___ltFloat_dyn();

		static bool _hx___floatLt(Float a, ::Dynamic b);
		static ::Dynamic _hx___floatLt_dyn();

		static bool _hx___lte( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___lte_dyn();

		static bool _hx___lteInt( ::Dynamic a,int b);
		static ::Dynamic _hx___lteInt_dyn();

		static bool _hx___intLte(int a, ::Dynamic b);
		static ::Dynamic _hx___intLte_dyn();

		static bool _hx___lteFloat( ::Dynamic a,Float b);
		static ::Dynamic _hx___lteFloat_dyn();

		static bool _hx___floatLte(Float a, ::Dynamic b);
		static ::Dynamic _hx___floatLte_dyn();

		static bool _hx___gt( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___gt_dyn();

		static bool _hx___gtInt( ::Dynamic a,int b);
		static ::Dynamic _hx___gtInt_dyn();

		static bool _hx___intGt(int a, ::Dynamic b);
		static ::Dynamic _hx___intGt_dyn();

		static bool _hx___gtFloat( ::Dynamic a,Float b);
		static ::Dynamic _hx___gtFloat_dyn();

		static bool _hx___floatGt(Float a, ::Dynamic b);
		static ::Dynamic _hx___floatGt_dyn();

		static bool _hx___gte( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___gte_dyn();

		static bool _hx___gteInt( ::Dynamic a,int b);
		static ::Dynamic _hx___gteInt_dyn();

		static bool _hx___intGte(int a, ::Dynamic b);
		static ::Dynamic _hx___intGte_dyn();

		static bool _hx___gteFloat( ::Dynamic a,Float b);
		static ::Dynamic _hx___gteFloat_dyn();

		static bool _hx___floatGte(Float a, ::Dynamic b);
		static ::Dynamic _hx___floatGte_dyn();

		static int _hx___complement( ::Dynamic this1);
		static ::Dynamic _hx___complement_dyn();

		static int _hx___and( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___and_dyn();

		static int _hx___andInt( ::Dynamic a,int b);
		static ::Dynamic _hx___andInt_dyn();

		static int _hx___or( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___or_dyn();

		static int _hx___orInt( ::Dynamic a,int b);
		static ::Dynamic _hx___orInt_dyn();

		static int _hx___xor( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___xor_dyn();

		static int _hx___xorInt( ::Dynamic a,int b);
		static ::Dynamic _hx___xorInt_dyn();

		static int _hx___shr( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___shr_dyn();

		static int _hx___shrInt( ::Dynamic a,int b);
		static ::Dynamic _hx___shrInt_dyn();

		static int _hx___intShr(int a, ::Dynamic b);
		static ::Dynamic _hx___intShr_dyn();

		static int _hx___ushr( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___ushr_dyn();

		static int _hx___ushrInt( ::Dynamic a,int b);
		static ::Dynamic _hx___ushrInt_dyn();

		static int _hx___intUshr(int a, ::Dynamic b);
		static ::Dynamic _hx___intUshr_dyn();

		static int _hx___shl( ::Dynamic a, ::Dynamic b);
		static ::Dynamic _hx___shl_dyn();

		static int _hx___shlInt( ::Dynamic a,int b);
		static ::Dynamic _hx___shlInt_dyn();

		static int _hx___intShl(int a, ::Dynamic b);
		static ::Dynamic _hx___intShl_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _Object

#endif /* INCLUDED_openfl_utils__Object_Object_Impl_ */ 
