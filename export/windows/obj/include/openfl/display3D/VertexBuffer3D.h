// Generated by Haxe 4.3.6
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#define INCLUDED_openfl_display3D_VertexBuffer3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES VertexBuffer3D_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VertexBuffer3D_obj OBJ_;
		VertexBuffer3D_obj();

	public:
		enum { _hx_ClassId = 0x5c924e78 };

		void __construct( ::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.VertexBuffer3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display3D.VertexBuffer3D"); }
		static ::hx::ObjectPtr< VertexBuffer3D_obj > __new( ::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage);
		static ::hx::ObjectPtr< VertexBuffer3D_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VertexBuffer3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VertexBuffer3D",55,59,6d,dc); }

		 ::openfl::display3D::Context3D _hx___context;
		 ::openfl::_Vector::FloatVector _hx___data;
		 ::lime::graphics::opengl::GLObject _hx___id;
		int _hx___memoryUsage;
		int _hx___numVertices;
		int _hx___stride;
		 ::lime::utils::ArrayBufferView _hx___tempFloat32Array;
		int _hx___usage;
		int _hx___vertexSize;
		void dispose();
		::Dynamic dispose_dyn();

		void uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int startVertex,int numVertices);
		::Dynamic uploadFromByteArray_dyn();

		void uploadFromTypedArray( ::lime::utils::ArrayBufferView data,::hx::Null< int >  byteLength);
		::Dynamic uploadFromTypedArray_dyn();

		void uploadFromVector( ::openfl::_Vector::FloatVector data,int startVertex,int numVertices);
		::Dynamic uploadFromVector_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_VertexBuffer3D */ 
