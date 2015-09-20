#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferIO
#include <snow/api/buffers/ArrayBufferIO.h>
#endif
namespace snow{
namespace api{
namespace buffers{

Void ArrayBufferIO_obj::__construct()
{
	return null();
}

//ArrayBufferIO_obj::~ArrayBufferIO_obj() { }

Dynamic ArrayBufferIO_obj::__CreateEmpty() { return  new ArrayBufferIO_obj; }
hx::ObjectPtr< ArrayBufferIO_obj > ArrayBufferIO_obj::__new()
{  hx::ObjectPtr< ArrayBufferIO_obj > _result_ = new ArrayBufferIO_obj();
	_result_->__construct();
	return _result_;}

Dynamic ArrayBufferIO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferIO_obj > _result_ = new ArrayBufferIO_obj();
	_result_->__construct();
	return _result_;}

int ArrayBufferIO_obj::getInt8( ::haxe::io::Bytes buffer,int byteOffset){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","getInt8",0xb7b28176,"snow.api.buffers.ArrayBufferIO.getInt8","snow/api/buffers/ArrayBufferIO.hx",8,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_LINE(11)
	int tmp = ::__hxcpp_memory_get_byte(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferIO_obj,getInt8,return )

int ArrayBufferIO_obj::setInt8( ::haxe::io::Bytes buffer,int byteOffset,int value){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","setInt8",0xaab41282,"snow.api.buffers.ArrayBufferIO.setInt8","snow/api/buffers/ArrayBufferIO.hx",20,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(23)
	::__hxcpp_memory_set_byte(buffer->b,byteOffset,value);
	HX_STACK_LINE(30)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,setInt8,return )

Dynamic ArrayBufferIO_obj::getUint8( ::haxe::io::Bytes buffer,int byteOffset){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","getUint8",0xe9fb51b1,"snow.api.buffers.ArrayBufferIO.getUint8","snow/api/buffers/ArrayBufferIO.hx",35,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_LINE(38)
	int tmp = ::__hxcpp_memory_get_byte(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	Dynamic tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferIO_obj,getUint8,return )

int ArrayBufferIO_obj::setUint8Clamped( ::haxe::io::Bytes buffer,int byteOffset,int value){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","setUint8Clamped",0xcc161b75,"snow.api.buffers.ArrayBufferIO.setUint8Clamped","snow/api/buffers/ArrayBufferIO.hx",46,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(48)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				int _int = value;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(48)
				bool tmp3 = (_int < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(48)
				if ((tmp3)){
					HX_STACK_LINE(48)
					tmp2 = (((Float)4294967296.0) + _int);
				}
				else{
					HX_STACK_LINE(48)
					tmp2 = (_int + ((Float)0.0));
				}
			}
			HX_STACK_LINE(48)
			int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(48)
			int _out = tmp3;		HX_STACK_VAR(_out,"_out");
			HX_STACK_LINE(48)
			bool tmp4 = (_out > (int)255);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(48)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			if ((tmp4)){
				HX_STACK_LINE(48)
				tmp5 = (int)255;
			}
			else{
				HX_STACK_LINE(48)
				tmp5 = _out;
			}
			HX_STACK_LINE(48)
			_out = tmp5;
			HX_STACK_LINE(48)
			bool tmp6 = (_out < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(48)
			if ((tmp6)){
				HX_STACK_LINE(48)
				tmp1 = (int)0;
			}
			else{
				HX_STACK_LINE(48)
				tmp1 = _out;
			}
		}
		HX_STACK_LINE(48)
		int value1 = tmp1;		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(48)
		::__hxcpp_memory_set_byte(buffer->b,byteOffset,value1);
		HX_STACK_LINE(48)
		tmp = value1;
	}
	HX_STACK_LINE(48)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,setUint8Clamped,return )

int ArrayBufferIO_obj::setUint8( ::haxe::io::Bytes buffer,int byteOffset,int value){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","setUint8",0x9858ab25,"snow.api.buffers.ArrayBufferIO.setUint8","snow/api/buffers/ArrayBufferIO.hx",53,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(56)
	::__hxcpp_memory_set_byte(buffer->b,byteOffset,value);
	HX_STACK_LINE(61)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,setUint8,return )

int ArrayBufferIO_obj::getInt16( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","getInt16",0x047ebfe7,"snow.api.buffers.ArrayBufferIO.getInt16","snow/api/buffers/ArrayBufferIO.hx",65,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(68)
		int tmp = ::__hxcpp_memory_get_i16(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getInt16,return )

int ArrayBufferIO_obj::setInt16( ::haxe::io::Bytes buffer,int byteOffset,int value,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","setInt16",0xb2dc195b,"snow.api.buffers.ArrayBufferIO.setInt16","snow/api/buffers/ArrayBufferIO.hx",85,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(88)
		::__hxcpp_memory_set_i16(buffer->b,byteOffset,value);
		HX_STACK_LINE(109)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setInt16,return )

Dynamic ArrayBufferIO_obj::getUint16( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","getUint16",0xd1ec234c,"snow.api.buffers.ArrayBufferIO.getUint16","snow/api/buffers/ArrayBufferIO.hx",114,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(117)
		int tmp = ::__hxcpp_memory_get_ui16(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		int tmp1 = (int(tmp) & int((int)65535));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getUint16,return )

int ArrayBufferIO_obj::setUint16( ::haxe::io::Bytes buffer,int byteOffset,int value,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","setUint16",0xb53d0f58,"snow.api.buffers.ArrayBufferIO.setUint16","snow/api/buffers/ArrayBufferIO.hx",133,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(136)
		::__hxcpp_memory_set_ui16(buffer->b,byteOffset,value);
		HX_STACK_LINE(141)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setUint16,return )

int ArrayBufferIO_obj::getInt32( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","getInt32",0x047ec1a1,"snow.api.buffers.ArrayBufferIO.getInt32","snow/api/buffers/ArrayBufferIO.hx",146,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(149)
		int tmp = ::__hxcpp_memory_get_i32(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getInt32,return )

int ArrayBufferIO_obj::setInt32( ::haxe::io::Bytes buffer,int byteOffset,int value,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","setInt32",0xb2dc1b15,"snow.api.buffers.ArrayBufferIO.setInt32","snow/api/buffers/ArrayBufferIO.hx",172,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(175)
		::__hxcpp_memory_set_i32(buffer->b,byteOffset,value);
		HX_STACK_LINE(194)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setInt32,return )

Dynamic ArrayBufferIO_obj::getUint32( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","getUint32",0xd1ec2506,"snow.api.buffers.ArrayBufferIO.getUint32","snow/api/buffers/ArrayBufferIO.hx",199,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(202)
		Dynamic tmp = ::__hxcpp_memory_get_ui32(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getUint32,return )

int ArrayBufferIO_obj::setUint32( ::haxe::io::Bytes buffer,int byteOffset,int value,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","setUint32",0xb53d1112,"snow.api.buffers.ArrayBufferIO.setUint32","snow/api/buffers/ArrayBufferIO.hx",210,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(213)
		::__hxcpp_memory_set_ui32(buffer->b,byteOffset,value);
		HX_STACK_LINE(218)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setUint32,return )

Float ArrayBufferIO_obj::getFloat32( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","getFloat32",0x270d3a4e,"snow.api.buffers.ArrayBufferIO.getFloat32","snow/api/buffers/ArrayBufferIO.hx",223,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(226)
		Float tmp = ::__hxcpp_memory_get_float(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getFloat32,return )

Float ArrayBufferIO_obj::setFloat32( ::haxe::io::Bytes buffer,int byteOffset,Float value,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","setFloat32",0x2a8ad8c2,"snow.api.buffers.ArrayBufferIO.setFloat32","snow/api/buffers/ArrayBufferIO.hx",234,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(237)
		::__hxcpp_memory_set_float(buffer->b,byteOffset,value);
		HX_STACK_LINE(242)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setFloat32,return )

Float ArrayBufferIO_obj::getFloat64( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","getFloat64",0x270d3ced,"snow.api.buffers.ArrayBufferIO.getFloat64","snow/api/buffers/ArrayBufferIO.hx",247,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(250)
		Float tmp = ::__hxcpp_memory_get_double(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(250)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getFloat64,return )

Float ArrayBufferIO_obj::setFloat64( ::haxe::io::Bytes buffer,int byteOffset,Float value,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","setFloat64",0x2a8adb61,"snow.api.buffers.ArrayBufferIO.setFloat64","snow/api/buffers/ArrayBufferIO.hx",258,0x5a87299c)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(261)
		::__hxcpp_memory_set_double(buffer->b,byteOffset,value);
		HX_STACK_LINE(266)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setFloat64,return )

int ArrayBufferIO_obj::_clamp( Float _in){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferIO","_clamp",0x216064c5,"snow.api.buffers.ArrayBufferIO._clamp","snow/api/buffers/ArrayBufferIO.hx",274,0x5a87299c)
	HX_STACK_ARG(_in,"_in")
	HX_STACK_LINE(276)
	Float tmp = _in;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(276)
	int _out = tmp1;		HX_STACK_VAR(_out,"_out");
	HX_STACK_LINE(277)
	bool tmp2 = (_out > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(277)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(277)
	if ((tmp2)){
		HX_STACK_LINE(277)
		tmp3 = (int)255;
	}
	else{
		HX_STACK_LINE(277)
		tmp3 = _out;
	}
	HX_STACK_LINE(277)
	_out = tmp3;
	HX_STACK_LINE(278)
	bool tmp4 = (_out < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(278)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(278)
	if ((tmp4)){
		HX_STACK_LINE(278)
		tmp5 = (int)0;
	}
	else{
		HX_STACK_LINE(278)
		tmp5 = _out;
	}
	HX_STACK_LINE(278)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferIO_obj,_clamp,return )


ArrayBufferIO_obj::ArrayBufferIO_obj()
{
}

bool ArrayBufferIO_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_clamp") ) { outValue = _clamp_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getInt8") ) { outValue = getInt8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setInt8") ) { outValue = setInt8_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getUint8") ) { outValue = getUint8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setUint8") ) { outValue = setUint8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInt16") ) { outValue = getInt16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setInt16") ) { outValue = setInt16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInt32") ) { outValue = getInt32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setInt32") ) { outValue = setInt32_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getUint16") ) { outValue = getUint16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setUint16") ) { outValue = setUint16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUint32") ) { outValue = getUint32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setUint32") ) { outValue = setUint32_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getFloat32") ) { outValue = getFloat32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFloat32") ) { outValue = setFloat32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFloat64") ) { outValue = getFloat64_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFloat64") ) { outValue = setFloat64_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setUint8Clamped") ) { outValue = setUint8Clamped_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferIO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferIO_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBufferIO_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getInt8","\x1f","\xf4","\x3d","\x18"),
	HX_HCSTRING("setInt8","\x2b","\x85","\x3f","\x0b"),
	HX_HCSTRING("getUint8","\xe8","\x32","\x74","\x03"),
	HX_HCSTRING("setUint8Clamped","\x1e","\xdf","\xc1","\xf1"),
	HX_HCSTRING("setUint8","\x5c","\x8c","\xd1","\xb1"),
	HX_HCSTRING("getInt16","\x1e","\xa1","\xf7","\x1d"),
	HX_HCSTRING("setInt16","\x92","\xfa","\x54","\xcc"),
	HX_HCSTRING("getUint16","\x35","\x52","\x38","\x02"),
	HX_HCSTRING("setUint16","\x41","\x3e","\x89","\xe5"),
	HX_HCSTRING("getInt32","\xd8","\xa2","\xf7","\x1d"),
	HX_HCSTRING("setInt32","\x4c","\xfc","\x54","\xcc"),
	HX_HCSTRING("getUint32","\xef","\x53","\x38","\x02"),
	HX_HCSTRING("setUint32","\xfb","\x3f","\x89","\xe5"),
	HX_HCSTRING("getFloat32","\x45","\x17","\x6a","\x39"),
	HX_HCSTRING("setFloat32","\xb9","\xb5","\xe7","\x3c"),
	HX_HCSTRING("getFloat64","\xe4","\x19","\x6a","\x39"),
	HX_HCSTRING("setFloat64","\x58","\xb8","\xe7","\x3c"),
	HX_HCSTRING("_clamp","\x3c","\xba","\x3f","\x44"),
	::String(null()) };

void ArrayBufferIO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.buffers.ArrayBufferIO","\xc5","\x3e","\x30","\xdd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayBufferIO_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArrayBufferIO_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace api
} // end namespace buffers
