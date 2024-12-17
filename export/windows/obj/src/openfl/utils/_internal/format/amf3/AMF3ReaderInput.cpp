// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFReader
#include <openfl/utils/_internal/format/amf/AMFReader.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFTools
#include <openfl/utils/_internal/format/amf/AMFTools.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFValue
#include <openfl/utils/_internal/format/amf/AMFValue.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Reader
#include <openfl/utils/_internal/format/amf3/AMF3Reader.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3ReaderInput
#include <openfl/utils/_internal/format/amf3/AMF3ReaderInput.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Tools
#include <openfl/utils/_internal/format/amf3/AMF3Tools.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Value
#include <openfl/utils/_internal/format/amf3/AMF3Value.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_172d7565e4e611c6_39_new,"openfl.utils._internal.format.amf3.AMF3ReaderInput","new",0xb2603215,"openfl.utils._internal.format.amf3.AMF3ReaderInput.new","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",39,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_52_readBoolean,"openfl.utils._internal.format.amf3.AMF3ReaderInput","readBoolean",0x0c6f1ca7,"openfl.utils._internal.format.amf3.AMF3ReaderInput.readBoolean","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",52,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_57_readByte,"openfl.utils._internal.format.amf3.AMF3ReaderInput","readByte",0xc82747a9,"openfl.utils._internal.format.amf3.AMF3ReaderInput.readByte","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",57,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_62_readBytes,"openfl.utils._internal.format.amf3.AMF3ReaderInput","readBytes",0x5a376caa,"openfl.utils._internal.format.amf3.AMF3ReaderInput.readBytes","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",62,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_67_readDouble,"openfl.utils._internal.format.amf3.AMF3ReaderInput","readDouble",0xa1a37df2,"openfl.utils._internal.format.amf3.AMF3ReaderInput.readDouble","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",67,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_72_readFloat,"openfl.utils._internal.format.amf3.AMF3ReaderInput","readFloat",0x9f3629db,"openfl.utils._internal.format.amf3.AMF3ReaderInput.readFloat","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",72,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_77_readInt,"openfl.utils._internal.format.amf3.AMF3ReaderInput","readInt",0xc0a1936e,"openfl.utils._internal.format.amf3.AMF3ReaderInput.readInt","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",77,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_82_readMultiByte,"openfl.utils._internal.format.amf3.AMF3ReaderInput","readMultiByte",0xb2baf5e0,"openfl.utils._internal.format.amf3.AMF3ReaderInput.readMultiByte","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",82,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_87_readObject,"openfl.utils._internal.format.amf3.AMF3ReaderInput","readObject",0x8417d1a0,"openfl.utils._internal.format.amf3.AMF3ReaderInput.readObject","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",87,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_106_readShort,"openfl.utils._internal.format.amf3.AMF3ReaderInput","readShort",0x18c6e8bb,"openfl.utils._internal.format.amf3.AMF3ReaderInput.readShort","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",106,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_111_readUnsignedByte,"openfl.utils._internal.format.amf3.AMF3ReaderInput","readUnsignedByte",0xe364fc3e,"openfl.utils._internal.format.amf3.AMF3ReaderInput.readUnsignedByte","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",111,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_115_readUnsignedInt,"openfl.utils._internal.format.amf3.AMF3ReaderInput","readUnsignedInt",0xda024879,"openfl.utils._internal.format.amf3.AMF3ReaderInput.readUnsignedInt","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",115,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_132_readUnsignedShort,"openfl.utils._internal.format.amf3.AMF3ReaderInput","readUnsignedShort",0xd3873686,"openfl.utils._internal.format.amf3.AMF3ReaderInput.readUnsignedShort","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",132,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_147_readUTF,"openfl.utils._internal.format.amf3.AMF3ReaderInput","readUTF",0xc0aa97a6,"openfl.utils._internal.format.amf3.AMF3ReaderInput.readUTF","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",147,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_154_readUTFBytes,"openfl.utils._internal.format.amf3.AMF3ReaderInput","readUTFBytes",0x2a9566e5,"openfl.utils._internal.format.amf3.AMF3ReaderInput.readUTFBytes","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",154,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_159_get_bytesAvailable,"openfl.utils._internal.format.amf3.AMF3ReaderInput","get_bytesAvailable",0xc74cfe92,"openfl.utils._internal.format.amf3.AMF3ReaderInput.get_bytesAvailable","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",159,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_164_get_endian,"openfl.utils._internal.format.amf3.AMF3ReaderInput","get_endian",0x606c774f,"openfl.utils._internal.format.amf3.AMF3ReaderInput.get_endian","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",164,0x4fe29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_172d7565e4e611c6_169_set_endian,"openfl.utils._internal.format.amf3.AMF3ReaderInput","set_endian",0x63ea15c3,"openfl.utils._internal.format.amf3.AMF3ReaderInput.set_endian","openfl/utils/_internal/format/amf3/AMF3ReaderInput.hx",169,0x4fe29dde)
namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf3{

void AMF3ReaderInput_obj::__construct( ::openfl::utils::_internal::format::amf3::AMF3Reader r){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_39_new)
HXLINE(  40)		this->i = r->i;
HXLINE(  41)		this->r = r;
HXLINE(  47)		this->objectEncoding = 3;
            	}

Dynamic AMF3ReaderInput_obj::__CreateEmpty() { return new AMF3ReaderInput_obj; }

void *AMF3ReaderInput_obj::_hx_vtable = 0;

Dynamic AMF3ReaderInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AMF3ReaderInput_obj > _hx_result = new AMF3ReaderInput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AMF3ReaderInput_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1091aff3;
}

static ::openfl::utils::IDataInput_obj _hx_openfl_utils__internal_format_amf3_AMF3ReaderInput__hx_openfl_utils_IDataInput= {
	( int (::hx::Object::*)())&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::get_bytesAvailable,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::get_endian,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::set_endian,
	( bool (::hx::Object::*)())&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::readBoolean,
	( int (::hx::Object::*)())&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::readByte,
	( void (::hx::Object::*)( ::openfl::utils::ByteArrayData,::hx::Null< int > ,::hx::Null< int > ))&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::readBytes,
	( Float (::hx::Object::*)())&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::readDouble,
	( Float (::hx::Object::*)())&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::readFloat,
	( int (::hx::Object::*)())&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::readInt,
	( ::String (::hx::Object::*)(int,::String))&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::readMultiByte,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::readObject,
	( int (::hx::Object::*)())&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::readShort,
	( int (::hx::Object::*)())&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::readUnsignedByte,
	( int (::hx::Object::*)())&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::readUnsignedInt,
	( int (::hx::Object::*)())&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::readUnsignedShort,
	( ::String (::hx::Object::*)())&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::readUTF,
	( ::String (::hx::Object::*)(int))&::openfl::utils::_internal::format::amf3::AMF3ReaderInput_obj::readUTFBytes,
};

void *AMF3ReaderInput_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xbeb9f218: return &_hx_openfl_utils__internal_format_amf3_AMF3ReaderInput__hx_openfl_utils_IDataInput;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool AMF3ReaderInput_obj::readBoolean(){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_52_readBoolean)
HXDLIN(  52)		return (this->i->readByte() != 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3ReaderInput_obj,readBoolean,return )

int AMF3ReaderInput_obj::readByte(){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_57_readByte)
HXDLIN(  57)		return this->i->readByte();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3ReaderInput_obj,readByte,return )

void AMF3ReaderInput_obj::readBytes( ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  __o_offset,::hx::Null< int >  __o_length){
            		int offset = __o_offset.Default(0);
            		int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_62_readBytes)
HXDLIN(  62)		 ::haxe::io::Input _hx_tmp = this->i;
HXDLIN(  62)		_hx_tmp->readBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(bytes),offset,length);
            	}


HX_DEFINE_DYNAMIC_FUNC3(AMF3ReaderInput_obj,readBytes,(void))

Float AMF3ReaderInput_obj::readDouble(){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_67_readDouble)
HXDLIN(  67)		return this->i->readDouble();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3ReaderInput_obj,readDouble,return )

Float AMF3ReaderInput_obj::readFloat(){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_72_readFloat)
HXDLIN(  72)		return this->i->readFloat();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3ReaderInput_obj,readFloat,return )

int AMF3ReaderInput_obj::readInt(){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_77_readInt)
HXDLIN(  77)		return this->i->readInt32();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3ReaderInput_obj,readInt,return )

::String AMF3ReaderInput_obj::readMultiByte(int length,::String charSet){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_82_readMultiByte)
HXDLIN(  82)		return this->i->readString(length,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AMF3ReaderInput_obj,readMultiByte,return )

 ::Dynamic AMF3ReaderInput_obj::readObject(){
            	HX_GC_STACKFRAME(&_hx_pos_172d7565e4e611c6_87_readObject)
HXDLIN(  87)		switch((int)(this->objectEncoding)){
            			case (int)0: {
HXLINE(  90)				 ::openfl::utils::_internal::format::amf::AMFReader reader =  ::openfl::utils::_internal::format::amf::AMFReader_obj::__alloc( HX_CTX ,this->i);
HXLINE(  91)				 ::Dynamic data = ::openfl::utils::_internal::format::amf::AMFTools_obj::unwrapValue(reader->read());
HXLINE(  92)				return data;
            			}
            			break;
            			case (int)3: {
HXLINE(  95)				 ::openfl::utils::_internal::format::amf3::AMF3Reader reader1 =  ::openfl::utils::_internal::format::amf3::AMF3Reader_obj::__alloc( HX_CTX ,this->i,this->r);
HXLINE(  96)				 ::Dynamic data1 = ::openfl::utils::_internal::format::amf3::AMF3Tools_obj::decode(reader1->read());
HXLINE(  97)				return data1;
            			}
            			break;
            			default:{
HXLINE( 100)				return null();
            			}
            		}
HXLINE(  87)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3ReaderInput_obj,readObject,return )

int AMF3ReaderInput_obj::readShort(){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_106_readShort)
HXDLIN( 106)		return this->i->readInt16();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3ReaderInput_obj,readShort,return )

int AMF3ReaderInput_obj::readUnsignedByte(){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_111_readUnsignedByte)
HXDLIN( 111)		return this->i->readByte();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3ReaderInput_obj,readUnsignedByte,return )

int AMF3ReaderInput_obj::readUnsignedInt(){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_115_readUnsignedInt)
HXLINE( 116)		int ch1 = this->i->readByte();
HXLINE( 117)		int ch2 = this->i->readByte();
HXLINE( 118)		int ch3 = this->i->readByte();
HXLINE( 119)		int ch4 = this->i->readByte();
HXLINE( 121)		if (::hx::IsEq( this->get_endian(),1 )) {
HXLINE( 123)			return ((((ch4 << 24) | (ch3 << 16)) | (ch2 << 8)) | ch1);
            		}
            		else {
HXLINE( 127)			return ((((ch1 << 24) | (ch2 << 16)) | (ch3 << 8)) | ch4);
            		}
HXLINE( 121)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3ReaderInput_obj,readUnsignedInt,return )

int AMF3ReaderInput_obj::readUnsignedShort(){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_132_readUnsignedShort)
HXLINE( 133)		int ch1 = this->i->readByte();
HXLINE( 134)		int ch2 = this->i->readByte();
HXLINE( 136)		if (::hx::IsEq( this->get_endian(),1 )) {
HXLINE( 138)			return ((ch2 << 8) + ch1);
            		}
            		else {
HXLINE( 142)			return ((ch1 << 8) | ch2);
            		}
HXLINE( 136)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3ReaderInput_obj,readUnsignedShort,return )

::String AMF3ReaderInput_obj::readUTF(){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_147_readUTF)
HXLINE( 148)		int bytesCount = this->readUnsignedShort();
HXLINE( 149)		return this->readUTFBytes(bytesCount);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3ReaderInput_obj,readUTF,return )

::String AMF3ReaderInput_obj::readUTFBytes(int length){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_154_readUTFBytes)
HXDLIN( 154)		return this->i->readString(length,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(AMF3ReaderInput_obj,readUTFBytes,return )

int AMF3ReaderInput_obj::get_bytesAvailable(){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_159_get_bytesAvailable)
HXDLIN( 159)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3ReaderInput_obj,get_bytesAvailable,return )

 ::Dynamic AMF3ReaderInput_obj::get_endian(){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_164_get_endian)
HXDLIN( 164)		if (this->i->bigEndian) {
HXDLIN( 164)			return 0;
            		}
            		else {
HXDLIN( 164)			return 1;
            		}
HXDLIN( 164)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AMF3ReaderInput_obj,get_endian,return )

 ::Dynamic AMF3ReaderInput_obj::set_endian( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_172d7565e4e611c6_169_set_endian)
HXDLIN( 169)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AMF3ReaderInput_obj,set_endian,return )


::hx::ObjectPtr< AMF3ReaderInput_obj > AMF3ReaderInput_obj::__new( ::openfl::utils::_internal::format::amf3::AMF3Reader r) {
	::hx::ObjectPtr< AMF3ReaderInput_obj > __this = new AMF3ReaderInput_obj();
	__this->__construct(r);
	return __this;
}

::hx::ObjectPtr< AMF3ReaderInput_obj > AMF3ReaderInput_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::utils::_internal::format::amf3::AMF3Reader r) {
	AMF3ReaderInput_obj *__this = (AMF3ReaderInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AMF3ReaderInput_obj), true, "openfl.utils._internal.format.amf3.AMF3ReaderInput"));
	*(void **)__this = AMF3ReaderInput_obj::_hx_vtable;
	__this->__construct(r);
	return __this;
}

AMF3ReaderInput_obj::AMF3ReaderInput_obj()
{
}

void AMF3ReaderInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AMF3ReaderInput);
	HX_MARK_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_END_CLASS();
}

void AMF3ReaderInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(r,"r");
}

::hx::Val AMF3ReaderInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		if (HX_FIELD_EQ(inName,"r") ) { return ::hx::Val( r ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_endian() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readInt") ) { return ::hx::Val( readInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return ::hx::Val( readUTF_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return ::hx::Val( readByte_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return ::hx::Val( readBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return ::hx::Val( readFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return ::hx::Val( readShort_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readDouble") ) { return ::hx::Val( readDouble_dyn() ); }
		if (HX_FIELD_EQ(inName,"readObject") ) { return ::hx::Val( readObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return ::hx::Val( get_endian_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return ::hx::Val( set_endian_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return ::hx::Val( readBoolean_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return ::hx::Val( readUTFBytes_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return ::hx::Val( readMultiByte_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bytesAvailable() ); }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return ::hx::Val( objectEncoding ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return ::hx::Val( readUnsignedInt_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return ::hx::Val( readUnsignedByte_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return ::hx::Val( readUnsignedShort_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return ::hx::Val( get_bytesAvailable_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AMF3ReaderInput_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast<  ::openfl::utils::_internal::format::amf3::AMF3Reader >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_endian(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AMF3ReaderInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bytesAvailable",de,4b,9d,9b));
	outFields->push(HX_("endian",9b,98,88,fa));
	outFields->push(HX_("objectEncoding",b2,1e,15,2a));
	outFields->push(HX_("i",69,00,00,00));
	outFields->push(HX_("r",72,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AMF3ReaderInput_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(AMF3ReaderInput_obj,objectEncoding),HX_("objectEncoding",b2,1e,15,2a)},
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(AMF3ReaderInput_obj,i),HX_("i",69,00,00,00)},
	{::hx::fsObject /*  ::openfl::utils::_internal::format::amf3::AMF3Reader */ ,(int)offsetof(AMF3ReaderInput_obj,r),HX_("r",72,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AMF3ReaderInput_obj_sStaticStorageInfo = 0;
#endif

static ::String AMF3ReaderInput_obj_sMemberFields[] = {
	HX_("objectEncoding",b2,1e,15,2a),
	HX_("i",69,00,00,00),
	HX_("r",72,00,00,00),
	HX_("readBoolean",f2,7d,ea,d0),
	HX_("readByte",7e,f9,1a,69),
	HX_("readBytes",35,55,7f,8e),
	HX_("readDouble",07,0f,47,2c),
	HX_("readFloat",66,12,7e,d3),
	HX_("readInt",39,b3,c9,02),
	HX_("readMultiByte",eb,7f,c9,15),
	HX_("readObject",b5,62,bb,0e),
	HX_("readShort",46,d1,0e,4d),
	HX_("readUnsignedByte",13,0b,ce,9b),
	HX_("readUnsignedInt",44,ab,4f,05),
	HX_("readUnsignedShort",11,22,0b,77),
	HX_("readUTF",71,b7,d2,02),
	HX_("readUTFBytes",3a,27,0f,52),
	HX_("get_bytesAvailable",a7,2c,37,37),
	HX_("get_endian",64,08,10,eb),
	HX_("set_endian",d8,a6,8d,ee),
	::String(null()) };

::hx::Class AMF3ReaderInput_obj::__mClass;

void AMF3ReaderInput_obj::__register()
{
	AMF3ReaderInput_obj _hx_dummy;
	AMF3ReaderInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._internal.format.amf3.AMF3ReaderInput",a3,83,56,58);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AMF3ReaderInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AMF3ReaderInput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AMF3ReaderInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AMF3ReaderInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf3