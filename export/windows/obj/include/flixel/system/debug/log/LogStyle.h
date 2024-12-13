// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#define INCLUDED_flixel_system_debug_log_LogStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_hx_system,debug,log,LogStyle)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace log{


class HXCPP_CLASS_ATTRIBUTES LogStyle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LogStyle_obj OBJ_;
		LogStyle_obj();

	public:
		enum { _hx_ClassId = 0x74ec9bed };

		void __construct(::String __o_prefix,::String __o_color,::hx::Null< int >  __o_size,::hx::Null< bool >  __o_bold,::hx::Null< bool >  __o_italic,::hx::Null< bool >  __o_underlined,::String errorSound,::hx::Null< bool >  __o_openConsole, ::Dynamic callback,::hx::Null< bool >  __o_throwException);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.log.LogStyle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.log.LogStyle"); }
		static ::hx::ObjectPtr< LogStyle_obj > __new(::String __o_prefix,::String __o_color,::hx::Null< int >  __o_size,::hx::Null< bool >  __o_bold,::hx::Null< bool >  __o_italic,::hx::Null< bool >  __o_underlined,::String errorSound,::hx::Null< bool >  __o_openConsole, ::Dynamic callback,::hx::Null< bool >  __o_throwException);
		static ::hx::ObjectPtr< LogStyle_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_prefix,::String __o_color,::hx::Null< int >  __o_size,::hx::Null< bool >  __o_bold,::hx::Null< bool >  __o_italic,::hx::Null< bool >  __o_underlined,::String errorSound,::hx::Null< bool >  __o_openConsole, ::Dynamic callback,::hx::Null< bool >  __o_throwException);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LogStyle_obj();

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
		::String __ToString() const { return HX_("LogStyle",2d,9e,d5,48); }

		static void __boot();
		static  ::flixel::_hx_system::debug::log::LogStyle NORMAL;
		static  ::flixel::_hx_system::debug::log::LogStyle WARNING;
		static  ::flixel::_hx_system::debug::log::LogStyle ERROR;
		static  ::flixel::_hx_system::debug::log::LogStyle NOTICE;
		static  ::flixel::_hx_system::debug::log::LogStyle CONSOLE;
		::String prefix;
		::String color;
		int size;
		bool bold;
		bool italic;
		bool underlined;
		::String errorSound;
		bool openConsole;
		 ::Dynamic callbackFunction;
		Dynamic callbackFunction_dyn() { return callbackFunction;}
		bool throwException;
		::String toLogString(::cpp::VirtualArray data);
		::Dynamic toLogString_dyn();

		::String toHtmlString(::cpp::VirtualArray data);
		::Dynamic toHtmlString_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace log

#endif /* INCLUDED_flixel_system_debug_log_LogStyle */ 
