// Generated by Haxe 4.3.6
#ifndef INCLUDED_lime_net__HTTPRequestErrorResponse
#define INCLUDED_lime_net__HTTPRequestErrorResponse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f7b1deedf7981d65_166_new)
HX_DECLARE_CLASS2(lime,net,_HTTPRequestErrorResponse)

namespace lime{
namespace net{


class HXCPP_CLASS_ATTRIBUTES _HTTPRequestErrorResponse_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef _HTTPRequestErrorResponse_obj OBJ_;
		_HTTPRequestErrorResponse_obj();

	public:
		enum { _hx_ClassId = 0x3002a801 };

		void __construct( ::Dynamic error, ::Dynamic responseData);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.net._HTTPRequestErrorResponse")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.net._HTTPRequestErrorResponse"); }

		inline static ::hx::ObjectPtr< _HTTPRequestErrorResponse_obj > __new( ::Dynamic error, ::Dynamic responseData) {
			::hx::ObjectPtr< _HTTPRequestErrorResponse_obj > __this = new _HTTPRequestErrorResponse_obj();
			__this->__construct(error,responseData);
			return __this;
		}

		inline static ::hx::ObjectPtr< _HTTPRequestErrorResponse_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic error, ::Dynamic responseData) {
			_HTTPRequestErrorResponse_obj *__this = (_HTTPRequestErrorResponse_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(_HTTPRequestErrorResponse_obj), true, "lime.net._HTTPRequestErrorResponse"));
			*(void **)__this = _HTTPRequestErrorResponse_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f7b1deedf7981d65_166_new)
HXLINE( 167)		( ( ::lime::net::_HTTPRequestErrorResponse)(__this) )->error = error;
HXLINE( 168)		( ( ::lime::net::_HTTPRequestErrorResponse)(__this) )->responseData = responseData;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~_HTTPRequestErrorResponse_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("_HTTPRequestErrorResponse",a1,b2,f1,88); }

		 ::Dynamic error;
		 ::Dynamic responseData;
};

} // end namespace lime
} // end namespace net

#endif /* INCLUDED_lime_net__HTTPRequestErrorResponse */ 
