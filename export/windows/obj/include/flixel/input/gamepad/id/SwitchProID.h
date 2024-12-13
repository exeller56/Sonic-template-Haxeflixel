// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_input_gamepad_id_SwitchProID
#define INCLUDED_flixel_input_gamepad_id_SwitchProID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,SwitchProID)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES SwitchProID_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SwitchProID_obj OBJ_;
		SwitchProID_obj();

	public:
		enum { _hx_ClassId = 0x4558d1a2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.SwitchProID")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id.SwitchProID"); }

		inline static ::hx::ObjectPtr< SwitchProID_obj > __new() {
			::hx::ObjectPtr< SwitchProID_obj > __this = new SwitchProID_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SwitchProID_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SwitchProID_obj *__this = (SwitchProID_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SwitchProID_obj), false, "flixel.input.gamepad.id.SwitchProID"));
			*(void **)__this = SwitchProID_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SwitchProID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SwitchProID",94,ee,41,a0); }

		static void __boot();
		static int ZL;
		static int ZR;
		static int B;
		static int A;
		static int Y;
		static int X;
		static int MINUS;
		static int HOME;
		static int PLUS;
		static int LEFT_STICK_CLICK;
		static int RIGHT_STICK_CLICK;
		static int L;
		static int R;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static int CAPTURE;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_SwitchProID */ 
