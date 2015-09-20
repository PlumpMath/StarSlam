#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers__Uint8Array_Uint8Array_Impl_
#include <snow/api/buffers/_Uint8Array/Uint8Array_Impl_.h>
#endif
#ifndef INCLUDED_snow_core_native_io_IO
#include <snow/core/native/io/IO.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_IO
#include <snow/modules/interfaces/IO.h>
#endif
#ifndef INCLUDED_snow_system_io_IO
#include <snow/system/io/IO.h>
#endif
namespace snow{
namespace _system{
namespace io{

Void IO_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.system.io.IO","new",0x7b9ec76c,"snow.system.io.IO.new","snow/system/io/IO.hx",14,0x9d2af803)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(25)
	this->string_save_prefix = HX_HCSTRING("slot","\xfe","\xdd","\x55","\x4c");
	HX_STACK_LINE(31)
	this->app = _app;
	HX_STACK_LINE(33)
	::snow::core::native::io::IO tmp = ::snow::core::native::io::IO_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	this->module = tmp;
	HX_STACK_LINE(35)
	::snow::core::native::io::IO tmp1 = this->module;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	tmp1->init();
}
;
	return null();
}

//IO_obj::~IO_obj() { }

Dynamic IO_obj::__CreateEmpty() { return  new IO_obj; }
hx::ObjectPtr< IO_obj > IO_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< IO_obj > _result_ = new IO_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic IO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IO_obj > _result_ = new IO_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void IO_obj::url_open( ::String _url){
{
		HX_STACK_FRAME("snow.system.io.IO","url_open",0x1ecb1f4e,"snow.system.io.IO.url_open","snow/system/io/IO.hx",40,0x9d2af803)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_url,"_url")
		HX_STACK_LINE(42)
		::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::String tmp1 = _url;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		tmp->url_open(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,url_open,(void))

::snow::api::Promise IO_obj::data_load( ::String _path,Dynamic _options){
	HX_STACK_FRAME("snow.system.io.IO","data_load",0xe4ea8fa7,"snow.system.io.IO.data_load","snow/system/io/IO.hx",48,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(50)
	::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::String tmp1 = _path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	Dynamic tmp2 = _options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	::snow::api::Promise tmp3 = tmp->data_load(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,data_load,return )

bool IO_obj::data_save( ::String _path,::snow::api::buffers::ArrayBufferView _data,Dynamic _options){
	HX_STACK_FRAME("snow.system.io.IO","data_save",0xe98080be,"snow.system.io.IO.data_save","snow/system/io/IO.hx",57,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_data,"_data")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(59)
	::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	::String tmp1 = _path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	::snow::api::buffers::ArrayBufferView tmp2 = _data;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	Dynamic tmp3 = _options;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	bool tmp4 = tmp->data_save(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(IO_obj,data_save,return )

::snow::api::Promise IO_obj::data_flow( ::String _id,Dynamic _processor,Dynamic _provider){
	HX_STACK_FRAME("snow.system.io.IO","data_flow",0xe0f10d6f,"snow.system.io.IO.data_flow","snow/system/io/IO.hx",64,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_processor,"_processor")
	HX_STACK_ARG(_provider,"_provider")
	HX_STACK_LINE(64)
	::snow::_system::io::IO _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(66)
	bool tmp = (_provider == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	if ((tmp)){
		HX_STACK_LINE(66)
		Dynamic tmp1 = this->default_provider_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		_provider = tmp1;
	}

	HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,Dynamic,_processor,::snow::_system::io::IO,_g,::String,_id,Dynamic,_provider)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/system/io/IO.hx",68,0x9d2af803)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(70)
			::snow::Snow tmp1 = _g->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			::String tmp2 = _id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			::snow::api::Promise tmp3 = _provider(tmp1,tmp2).Cast< ::snow::api::Promise >();		HX_STACK_VAR(tmp3,"tmp3");

			HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_Function_2_1,Dynamic,_processor,::snow::_system::io::IO,_g,Dynamic,reject,Dynamic,resolve,::String,_id)
			int __ArgCount() const { return 1; }
			Void run(Dynamic data){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/system/io/IO.hx",72,0x9d2af803)
				HX_STACK_ARG(data,"data")
				{
					HX_STACK_LINE(73)
					bool tmp4 = (_processor != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(73)
					if ((tmp4)){
						HX_STACK_LINE(74)
						::snow::Snow tmp5 = _g->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(74)
						::String tmp6 = _id;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(74)
						Dynamic tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(74)
						::snow::api::Promise tmp8 = _processor(tmp5,tmp6,tmp7).Cast< ::snow::api::Promise >();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(74)
						Dynamic tmp9 = resolve;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(74)
						Dynamic tmp10 = reject;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(74)
						tmp8->then(tmp9,tmp10);
					}
					else{
						HX_STACK_LINE(76)
						Dynamic tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(76)
						resolve(tmp5);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(70)
			::snow::api::Promise tmp4 = tmp3->then( Dynamic(new _Function_2_1(_processor,_g,reject,resolve,_id)),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(80)
			Dynamic tmp5 = reject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(70)
			tmp4->error(tmp5);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(68)
	::snow::api::Promise tmp1 = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_processor,_g,_id,_provider)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC3(IO_obj,data_flow,return )

::String IO_obj::string_save_path( hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.system.io.IO","string_save_path",0xd2135e6d,"snow.system.io.IO.string_save_path","snow/system/io/IO.hx",93,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(95)
		::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		int tmp1 = _slot;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		::String tmp2 = tmp->string_save_path(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_save_path,return )

bool IO_obj::string_save( ::String _key,::String _value,hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.system.io.IO","string_save",0x1c1ecbb7,"snow.system.io.IO.string_save","snow/system/io/IO.hx",106,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_ARG(_value,"_value")
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(108)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			::haxe::ds::IntMap tmp1 = this->string_slots;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(108)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			if ((tmp2)){
				HX_STACK_LINE(108)
				::haxe::ds::IntMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					::haxe::ds::IntMap tmp4 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(108)
					::haxe::ds::IntMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(108)
					tmp3 = tmp5;
				}
				HX_STACK_LINE(108)
				this->string_slots = tmp3;
			}
			HX_STACK_LINE(108)
			::haxe::ds::IntMap tmp3 = this->string_slots;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			int tmp4 = _slot;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			::haxe::ds::StringMap tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			::haxe::ds::StringMap _string_map = tmp5;		HX_STACK_VAR(_string_map,"_string_map");
			HX_STACK_LINE(108)
			bool tmp6 = (_string_map == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(108)
			if ((tmp6)){
				HX_STACK_LINE(108)
				::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					::snow::core::native::io::IO tmp8 = this->module;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(108)
					::snow::core::native::io::IO _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(108)
					int tmp9 = _slot;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(108)
					::String tmp10 = _this->string_save_path(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(108)
					::snow::api::buffers::ArrayBufferView tmp11 = _this->_data_load(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(108)
					::snow::api::buffers::ArrayBufferView _data = tmp11;		HX_STACK_VAR(_data,"_data");
					HX_STACK_LINE(108)
					bool tmp12 = (_data == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(108)
					if ((tmp12)){
						HX_STACK_LINE(108)
						tmp7 = null();
					}
					else{
						HX_STACK_LINE(108)
						::snow::api::buffers::ArrayBufferView tmp13 = _data;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(108)
						::haxe::io::Bytes tmp14 = ::snow::api::buffers::_Uint8Array::Uint8Array_Impl__obj::toBytes(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(108)
						tmp7 = tmp14->toString();
					}
				}
				HX_STACK_LINE(108)
				::String _string = tmp7;		HX_STACK_VAR(_string,"_string");
				HX_STACK_LINE(108)
				bool tmp8 = (_string == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(108)
				if ((tmp8)){
					HX_STACK_LINE(108)
					::haxe::ds::StringMap tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(108)
					{
						HX_STACK_LINE(108)
						::haxe::ds::StringMap tmp10 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(108)
						::haxe::ds::StringMap tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(108)
						tmp9 = tmp11;
					}
					HX_STACK_LINE(108)
					_string_map = tmp9;
				}
				else{
					HX_STACK_LINE(108)
					::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(108)
					{
						HX_STACK_LINE(108)
						{
							HX_STACK_LINE(108)
							bool tmp10 = (_string == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(108)
							if ((tmp10)){
								HX_STACK_LINE(108)
								::snow::api::DebugError tmp11 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(108)
								HX_STACK_DO_THROW(tmp11);
							}
						}
						HX_STACK_LINE(108)
						::String tmp10 = _string;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(108)
						::haxe::io::Bytes tmp11 = ::haxe::crypto::Base64_obj::decode(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(108)
						::haxe::io::Bytes _bytes = tmp11;		HX_STACK_VAR(_bytes,"_bytes");
						HX_STACK_LINE(108)
						tmp9 = _bytes->toString();
					}
					HX_STACK_LINE(108)
					_string = tmp9;
					HX_STACK_LINE(108)
					::String tmp10 = _string;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(108)
					Dynamic tmp11 = ::haxe::Unserializer_obj::run(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(108)
					_string_map = tmp11;
				}
				HX_STACK_LINE(108)
				::haxe::ds::IntMap tmp9 = this->string_slots;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(108)
				int tmp10 = _slot;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(108)
				::haxe::ds::StringMap tmp11 = _string_map;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(108)
				tmp9->set(tmp10,tmp11);
			}
			HX_STACK_LINE(108)
			tmp = _string_map;
		}
		HX_STACK_LINE(108)
		::haxe::ds::StringMap _string_map = tmp;		HX_STACK_VAR(_string_map,"_string_map");
		HX_STACK_LINE(110)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				bool tmp2 = (_key == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(110)
				if ((tmp2)){
					HX_STACK_LINE(110)
					::snow::api::DebugError tmp3 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(110)
					HX_STACK_DO_THROW(tmp3);
				}
			}
			HX_STACK_LINE(110)
			::String tmp2 = _key;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(110)
			::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::ofString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(110)
			::haxe::io::Bytes _bytes = tmp3;		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(110)
			::haxe::io::Bytes tmp4 = _bytes;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(110)
			tmp1 = ::haxe::crypto::Base64_obj::encode(tmp4,null());
		}
		HX_STACK_LINE(110)
		::String _encoded_key = tmp1;		HX_STACK_VAR(_encoded_key,"_encoded_key");
		HX_STACK_LINE(111)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				bool tmp3 = (_value == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(111)
				if ((tmp3)){
					HX_STACK_LINE(111)
					::snow::api::DebugError tmp4 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(111)
					HX_STACK_DO_THROW(tmp4);
				}
			}
			HX_STACK_LINE(111)
			::String tmp3 = _value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::ofString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			::haxe::io::Bytes _bytes = tmp4;		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(111)
			::haxe::io::Bytes tmp5 = _bytes;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(111)
			tmp2 = ::haxe::crypto::Base64_obj::encode(tmp5,null());
		}
		HX_STACK_LINE(111)
		::String _encoded_value = tmp2;		HX_STACK_VAR(_encoded_value,"_encoded_value");
		HX_STACK_LINE(115)
		::String tmp3 = _encoded_key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		::String tmp4 = _encoded_value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		_string_map->set(tmp3,tmp4);
		HX_STACK_LINE(117)
		::haxe::ds::StringMap tmp5 = _string_map;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		::String tmp6 = ::haxe::Serializer_obj::run(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		::String _contents = tmp6;		HX_STACK_VAR(_contents,"_contents");
		HX_STACK_LINE(118)
		::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			{
				HX_STACK_LINE(118)
				bool tmp8 = (_contents == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(118)
				if ((tmp8)){
					HX_STACK_LINE(118)
					::snow::api::DebugError tmp9 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(118)
					HX_STACK_DO_THROW(tmp9);
				}
			}
			HX_STACK_LINE(118)
			::String tmp8 = _contents;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(118)
			::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::ofString(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(118)
			::haxe::io::Bytes _bytes = tmp9;		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(118)
			::haxe::io::Bytes tmp10 = _bytes;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(118)
			tmp7 = ::haxe::crypto::Base64_obj::encode(tmp10,null());
		}
		HX_STACK_LINE(118)
		_contents = tmp7;
		HX_STACK_LINE(120)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			::snow::core::native::io::IO tmp9 = this->module;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(120)
			::snow::core::native::io::IO _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(120)
			int tmp10 = _slot;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(120)
			::String tmp11 = _this->string_save_path(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(120)
			::String _path = tmp11;		HX_STACK_VAR(_path,"_path");
			HX_STACK_LINE(120)
			::String tmp12 = _contents;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(120)
			::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::ofString(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(120)
			::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::_Uint8Array::Uint8Array_Impl__obj::fromBytes(tmp13,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(120)
			::snow::api::buffers::ArrayBufferView _data = tmp14;		HX_STACK_VAR(_data,"_data");
			HX_STACK_LINE(120)
			::String tmp15 = _path;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(120)
			::snow::api::buffers::ArrayBufferView tmp16 = _data;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(120)
			tmp8 = _this->data_save(tmp15,tmp16,null());
		}
		HX_STACK_LINE(120)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(IO_obj,string_save,return )

::String IO_obj::string_load( ::String _key,hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.system.io.IO","string_load",0x1788daa0,"snow.system.io.IO.string_load","snow/system/io/IO.hx",127,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(129)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			::haxe::ds::IntMap tmp1 = this->string_slots;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(129)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(129)
			if ((tmp2)){
				HX_STACK_LINE(129)
				::haxe::ds::IntMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(129)
				{
					HX_STACK_LINE(129)
					::haxe::ds::IntMap tmp4 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(129)
					::haxe::ds::IntMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(129)
					tmp3 = tmp5;
				}
				HX_STACK_LINE(129)
				this->string_slots = tmp3;
			}
			HX_STACK_LINE(129)
			::haxe::ds::IntMap tmp3 = this->string_slots;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(129)
			int tmp4 = _slot;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(129)
			::haxe::ds::StringMap tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(129)
			::haxe::ds::StringMap _string_map = tmp5;		HX_STACK_VAR(_string_map,"_string_map");
			HX_STACK_LINE(129)
			bool tmp6 = (_string_map == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(129)
			if ((tmp6)){
				HX_STACK_LINE(129)
				::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(129)
				{
					HX_STACK_LINE(129)
					::snow::core::native::io::IO tmp8 = this->module;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(129)
					::snow::core::native::io::IO _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(129)
					int tmp9 = _slot;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(129)
					::String tmp10 = _this->string_save_path(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(129)
					::snow::api::buffers::ArrayBufferView tmp11 = _this->_data_load(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(129)
					::snow::api::buffers::ArrayBufferView _data = tmp11;		HX_STACK_VAR(_data,"_data");
					HX_STACK_LINE(129)
					bool tmp12 = (_data == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(129)
					if ((tmp12)){
						HX_STACK_LINE(129)
						tmp7 = null();
					}
					else{
						HX_STACK_LINE(129)
						::snow::api::buffers::ArrayBufferView tmp13 = _data;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(129)
						::haxe::io::Bytes tmp14 = ::snow::api::buffers::_Uint8Array::Uint8Array_Impl__obj::toBytes(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(129)
						tmp7 = tmp14->toString();
					}
				}
				HX_STACK_LINE(129)
				::String _string = tmp7;		HX_STACK_VAR(_string,"_string");
				HX_STACK_LINE(129)
				bool tmp8 = (_string == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(129)
				if ((tmp8)){
					HX_STACK_LINE(129)
					::haxe::ds::StringMap tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(129)
					{
						HX_STACK_LINE(129)
						::haxe::ds::StringMap tmp10 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(129)
						::haxe::ds::StringMap tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(129)
						tmp9 = tmp11;
					}
					HX_STACK_LINE(129)
					_string_map = tmp9;
				}
				else{
					HX_STACK_LINE(129)
					::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(129)
					{
						HX_STACK_LINE(129)
						{
							HX_STACK_LINE(129)
							bool tmp10 = (_string == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(129)
							if ((tmp10)){
								HX_STACK_LINE(129)
								::snow::api::DebugError tmp11 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(129)
								HX_STACK_DO_THROW(tmp11);
							}
						}
						HX_STACK_LINE(129)
						::String tmp10 = _string;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(129)
						::haxe::io::Bytes tmp11 = ::haxe::crypto::Base64_obj::decode(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(129)
						::haxe::io::Bytes _bytes = tmp11;		HX_STACK_VAR(_bytes,"_bytes");
						HX_STACK_LINE(129)
						tmp9 = _bytes->toString();
					}
					HX_STACK_LINE(129)
					_string = tmp9;
					HX_STACK_LINE(129)
					::String tmp10 = _string;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(129)
					Dynamic tmp11 = ::haxe::Unserializer_obj::run(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(129)
					_string_map = tmp11;
				}
				HX_STACK_LINE(129)
				::haxe::ds::IntMap tmp9 = this->string_slots;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(129)
				int tmp10 = _slot;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(129)
				::haxe::ds::StringMap tmp11 = _string_map;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(129)
				tmp9->set(tmp10,tmp11);
			}
			HX_STACK_LINE(129)
			tmp = _string_map;
		}
		HX_STACK_LINE(129)
		::haxe::ds::StringMap _string_map = tmp;		HX_STACK_VAR(_string_map,"_string_map");
		HX_STACK_LINE(131)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			{
				HX_STACK_LINE(131)
				bool tmp2 = (_key == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(131)
				if ((tmp2)){
					HX_STACK_LINE(131)
					::snow::api::DebugError tmp3 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(131)
					HX_STACK_DO_THROW(tmp3);
				}
			}
			HX_STACK_LINE(131)
			::String tmp2 = _key;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(131)
			::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::ofString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(131)
			::haxe::io::Bytes _bytes = tmp3;		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(131)
			::haxe::io::Bytes tmp4 = _bytes;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(131)
			tmp1 = ::haxe::crypto::Base64_obj::encode(tmp4,null());
		}
		HX_STACK_LINE(131)
		::String _encoded_key = tmp1;		HX_STACK_VAR(_encoded_key,"_encoded_key");
		HX_STACK_LINE(132)
		::String tmp2 = _encoded_key;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		::String tmp3 = _string_map->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(132)
		::String _encoded_value = tmp3;		HX_STACK_VAR(_encoded_value,"_encoded_value");
		HX_STACK_LINE(136)
		bool tmp4 = (_encoded_value == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(136)
		if ((tmp4)){
			HX_STACK_LINE(137)
			return null();
		}
		HX_STACK_LINE(140)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				bool tmp6 = (_encoded_value == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(140)
				if ((tmp6)){
					HX_STACK_LINE(140)
					::snow::api::DebugError tmp7 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(140)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(140)
			::String tmp6 = _encoded_value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(140)
			::haxe::io::Bytes tmp7 = ::haxe::crypto::Base64_obj::decode(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(140)
			::haxe::io::Bytes _bytes = tmp7;		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(140)
			tmp5 = _bytes->toString();
		}
		HX_STACK_LINE(140)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,string_load,return )

::haxe::ds::StringMap IO_obj::string_slots_sync( hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.system.io.IO","string_slots_sync",0x2fdc9d5f,"snow.system.io.IO.string_slots_sync","snow/system/io/IO.hx",150,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(153)
		::haxe::ds::IntMap tmp = this->string_slots;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		if ((tmp1)){
			HX_STACK_LINE(154)
			::haxe::ds::IntMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				::haxe::ds::IntMap tmp3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(154)
				::haxe::ds::IntMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(154)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(154)
			this->string_slots = tmp2;
		}
		HX_STACK_LINE(157)
		::haxe::ds::IntMap tmp2 = this->string_slots;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		int tmp3 = _slot;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		::haxe::ds::StringMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		::haxe::ds::StringMap _string_map = tmp4;		HX_STACK_VAR(_string_map,"_string_map");
		HX_STACK_LINE(159)
		bool tmp5 = (_string_map == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		if ((tmp5)){
			HX_STACK_LINE(161)
			::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			{
				HX_STACK_LINE(161)
				::snow::core::native::io::IO tmp7 = this->module;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(161)
				::snow::core::native::io::IO _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(161)
				int tmp8 = _slot;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(161)
				::String tmp9 = _this->string_save_path(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(161)
				::snow::api::buffers::ArrayBufferView tmp10 = _this->_data_load(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(161)
				::snow::api::buffers::ArrayBufferView _data = tmp10;		HX_STACK_VAR(_data,"_data");
				HX_STACK_LINE(161)
				bool tmp11 = (_data == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(161)
				if ((tmp11)){
					HX_STACK_LINE(161)
					tmp6 = null();
				}
				else{
					HX_STACK_LINE(161)
					::snow::api::buffers::ArrayBufferView tmp12 = _data;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(161)
					::haxe::io::Bytes tmp13 = ::snow::api::buffers::_Uint8Array::Uint8Array_Impl__obj::toBytes(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(161)
					tmp6 = tmp13->toString();
				}
			}
			HX_STACK_LINE(161)
			::String _string = tmp6;		HX_STACK_VAR(_string,"_string");
			HX_STACK_LINE(162)
			bool tmp7 = (_string == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(162)
			if ((tmp7)){
				HX_STACK_LINE(163)
				::haxe::ds::StringMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(163)
				{
					HX_STACK_LINE(163)
					::haxe::ds::StringMap tmp9 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(163)
					::haxe::ds::StringMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(163)
					tmp8 = tmp10;
				}
				HX_STACK_LINE(163)
				_string_map = tmp8;
			}
			else{
				HX_STACK_LINE(165)
				::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(165)
				{
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						bool tmp9 = (_string == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(165)
						if ((tmp9)){
							HX_STACK_LINE(165)
							::snow::api::DebugError tmp10 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(165)
							HX_STACK_DO_THROW(tmp10);
						}
					}
					HX_STACK_LINE(165)
					::String tmp9 = _string;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(165)
					::haxe::io::Bytes tmp10 = ::haxe::crypto::Base64_obj::decode(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(165)
					::haxe::io::Bytes _bytes = tmp10;		HX_STACK_VAR(_bytes,"_bytes");
					HX_STACK_LINE(165)
					tmp8 = _bytes->toString();
				}
				HX_STACK_LINE(165)
				_string = tmp8;
				HX_STACK_LINE(166)
				::String tmp9 = _string;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(166)
				Dynamic tmp10 = ::haxe::Unserializer_obj::run(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(166)
				_string_map = tmp10;
			}
			HX_STACK_LINE(169)
			::haxe::ds::IntMap tmp8 = this->string_slots;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			int tmp9 = _slot;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(169)
			::haxe::ds::StringMap tmp10 = _string_map;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(169)
			tmp8->set(tmp9,tmp10);
		}
		HX_STACK_LINE(173)
		::haxe::ds::StringMap tmp6 = _string_map;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_slots_sync,return )

::snow::api::Promise IO_obj::default_provider( ::snow::Snow _app,::String _id){
	HX_STACK_FRAME("snow.system.io.IO","default_provider",0xa5fc0123,"snow.system.io.IO.default_provider","snow/system/io/IO.hx",180,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_app,"_app")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(180)
	::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(180)
	::snow::api::Promise tmp2 = tmp->data_load(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(180)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,default_provider,return )

Void IO_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.system.io.IO","on_event",0x67a28f2e,"snow.system.io.IO.on_event","snow/system/io/IO.hx",183,0x9d2af803)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(185)
		::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		Dynamic tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		tmp->on_event(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,on_event,(void))

Void IO_obj::update( ){
{
		HX_STACK_FRAME("snow.system.io.IO","update",0x019d7e7d,"snow.system.io.IO.update","snow/system/io/IO.hx",190,0x9d2af803)
		HX_STACK_THIS(this)
		HX_STACK_LINE(192)
		::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		tmp->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,update,(void))

Void IO_obj::destroy( ){
{
		HX_STACK_FRAME("snow.system.io.IO","destroy",0xeee79a06,"snow.system.io.IO.destroy","snow/system/io/IO.hx",197,0x9d2af803)
		HX_STACK_THIS(this)
		HX_STACK_LINE(199)
		::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		tmp->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,destroy,(void))


IO_obj::IO_obj()
{
}

void IO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IO);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(module,"module");
	HX_MARK_MEMBER_NAME(string_save_prefix,"string_save_prefix");
	HX_MARK_MEMBER_NAME(string_slots,"string_slots");
	HX_MARK_END_CLASS();
}

void IO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(module,"module");
	HX_VISIT_MEMBER_NAME(string_save_prefix,"string_save_prefix");
	HX_VISIT_MEMBER_NAME(string_slots,"string_slots");
}

Dynamic IO_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { return module; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"url_open") ) { return url_open_dyn(); }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"data_load") ) { return data_load_dyn(); }
		if (HX_FIELD_EQ(inName,"data_save") ) { return data_save_dyn(); }
		if (HX_FIELD_EQ(inName,"data_flow") ) { return data_flow_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"string_save") ) { return string_save_dyn(); }
		if (HX_FIELD_EQ(inName,"string_load") ) { return string_load_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"string_slots") ) { return string_slots; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"string_save_path") ) { return string_save_path_dyn(); }
		if (HX_FIELD_EQ(inName,"default_provider") ) { return default_provider_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"string_slots_sync") ) { return string_slots_sync_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"string_save_prefix") ) { return string_save_prefix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IO_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { module=inValue.Cast< ::snow::core::native::io::IO >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"string_slots") ) { string_slots=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"string_save_prefix") ) { string_save_prefix=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool IO_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void IO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));
	outFields->push(HX_HCSTRING("string_save_prefix","\xe6","\x3d","\x79","\x2e"));
	outFields->push(HX_HCSTRING("string_slots","\x87","\xc3","\x77","\xdd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(IO_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsObject /*::snow::core::native::io::IO*/ ,(int)offsetof(IO_obj,module),HX_HCSTRING("module","\xac","\x34","\xd3","\xc0")},
	{hx::fsString,(int)offsetof(IO_obj,string_save_prefix),HX_HCSTRING("string_save_prefix","\xe6","\x3d","\x79","\x2e")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(IO_obj,string_slots),HX_HCSTRING("string_slots","\x87","\xc3","\x77","\xdd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"),
	HX_HCSTRING("string_save_prefix","\xe6","\x3d","\x79","\x2e"),
	HX_HCSTRING("url_open","\xda","\x21","\xed","\xd3"),
	HX_HCSTRING("data_load","\x9b","\xc7","\x8a","\xad"),
	HX_HCSTRING("data_save","\xb2","\xb8","\x20","\xb2"),
	HX_HCSTRING("data_flow","\x63","\x45","\x91","\xa9"),
	HX_HCSTRING("string_slots","\x87","\xc3","\x77","\xdd"),
	HX_HCSTRING("string_save_path","\xf9","\xcc","\x0c","\xb8"),
	HX_HCSTRING("string_save","\xab","\xe8","\x33","\x77"),
	HX_HCSTRING("string_load","\x94","\xf7","\x9d","\x72"),
	HX_HCSTRING("string_slots_sync","\x53","\xe9","\x23","\x84"),
	HX_HCSTRING("default_provider","\xaf","\x6f","\xf5","\x8b"),
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IO_obj::__mClass,"__mClass");
};

#endif

hx::Class IO_obj::__mClass;

void IO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.io.IO","\x7a","\xe1","\xfb","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &IO_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IO_obj >;
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
} // end namespace system
} // end namespace io
