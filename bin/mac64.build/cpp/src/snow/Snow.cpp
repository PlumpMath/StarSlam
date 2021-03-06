#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_Promises
#include <snow/api/Promises.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_Core
#include <snow/core/native/Core.h>
#endif
#ifndef INCLUDED_snow_core_native_io_IO
#include <snow/core/native/io/IO.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_IO
#include <snow/modules/interfaces/IO.h>
#endif
#ifndef INCLUDED_snow_system_assets_Asset
#include <snow/system/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_system_assets_AssetJSON
#include <snow/system/assets/AssetJSON.h>
#endif
#ifndef INCLUDED_snow_system_assets_Assets
#include <snow/system/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_system_audio_Audio
#include <snow/system/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_system_input_Input
#include <snow/system/input/Input.h>
#endif
#ifndef INCLUDED_snow_system_input_Keycodes
#include <snow/system/input/Keycodes.h>
#endif
#ifndef INCLUDED_snow_system_io_IO
#include <snow/system/io/IO.h>
#endif
#ifndef INCLUDED_snow_system_window_Window
#include <snow/system/window/Window.h>
#endif
#ifndef INCLUDED_snow_system_window_Windowing
#include <snow/system/window/Windowing.h>
#endif
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
namespace snow{

Void Snow_obj::__construct()
{
HX_STACK_FRAME("snow.Snow","new",0x2ec45060,"snow.Snow.new","snow/Snow.hx",19,0x86524d2f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(74)
	this->is_ready = false;
	HX_STACK_LINE(72)
	this->was_ready = false;
	HX_STACK_LINE(65)
	this->has_shutdown = false;
	HX_STACK_LINE(63)
	this->shutting_down = false;
	HX_STACK_LINE(60)
	this->os = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
	HX_STACK_LINE(57)
	this->platform = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
	HX_STACK_LINE(41)
	this->freeze = false;
	HX_STACK_LINE(83)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	if ((tmp)){
		HX_STACK_LINE(84)
		::String tmp1 = (HX_HCSTRING("log / level to ","\xdc","\xcc","\x48","\x9e") + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		::String tmp2 = (HX_HCSTRING("     i / snow / ","\x06","\xb3","\xeb","\x71") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Snow.hx","\xfb","\x3b","\xfd","\xae"),84,HX_HCSTRING("snow.Snow","\x6e","\xe0","\x04","\xa6"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		::haxe::Log_obj::trace(tmp2,tmp3);
		HX_STACK_LINE(85)
		::String tmp4 = (HX_HCSTRING("log / filter : ","\x41","\x69","\x13","\x1f") + null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(85)
		::String tmp5 = (HX_HCSTRING("     i / snow / ","\x06","\xb3","\xeb","\x71") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Snow.hx","\xfb","\x3b","\xfd","\xae"),85,HX_HCSTRING("snow.Snow","\x6e","\xe0","\x04","\xa6"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(85)
		::haxe::Log_obj::trace(tmp5,tmp6);
		HX_STACK_LINE(86)
		::String tmp7 = (HX_HCSTRING("log / exclude : ","\x99","\x61","\xf3","\xe1") + null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(86)
		::String tmp8 = (HX_HCSTRING("     i / snow / ","\x06","\xb3","\xeb","\x71") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(86)
		Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Snow.hx","\xfb","\x3b","\xfd","\xae"),86,HX_HCSTRING("snow.Snow","\x6e","\xe0","\x04","\xa6"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(86)
		::haxe::Log_obj::trace(tmp8,tmp9);
	}
	HX_STACK_LINE(90)
	this->platform = HX_HCSTRING("mac","\x8f","\x0a","\x53","\x00");
	HX_STACK_LINE(97)
	::snow::core::native::Core tmp1 = ::snow::core::native::Core_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	::snow::Snow_obj::core = tmp1;
	HX_STACK_LINE(98)
	::snow::Snow_obj::next_queue = cpp::ArrayBase_obj::__new();
}
;
	return null();
}

//Snow_obj::~Snow_obj() { }

Dynamic Snow_obj::__CreateEmpty() { return  new Snow_obj; }
hx::ObjectPtr< Snow_obj > Snow_obj::__new()
{  hx::ObjectPtr< Snow_obj > _result_ = new Snow_obj();
	_result_->__construct();
	return _result_;}

Dynamic Snow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Snow_obj > _result_ = new Snow_obj();
	_result_->__construct();
	return _result_;}

Void Snow_obj::shutdown( ){
{
		HX_STACK_FRAME("snow.Snow","shutdown",0x94cb7c96,"snow.Snow.shutdown","snow/Snow.hx",105,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		this->shutting_down = true;
		HX_STACK_LINE(109)
		::snow::App tmp = this->host;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		tmp->ondestroy();
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			::snow::_system::io::IO tmp1 = this->io;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(110)
			tmp1->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		}
		HX_STACK_LINE(111)
		::snow::_system::audio::Audio tmp1 = this->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		tmp1->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		HX_STACK_LINE(112)
		::snow::_system::input::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		tmp2->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		HX_STACK_LINE(113)
		::snow::_system::window::Windowing tmp3 = this->windowing;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		tmp3->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		HX_STACK_LINE(115)
		::snow::core::native::Core tmp4 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		tmp4->shutdown();
		HX_STACK_LINE(117)
		this->has_shutdown = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,shutdown,(void))

Void Snow_obj::render( ){
{
		HX_STACK_FRAME("snow.Snow","render",0x1808eb56,"snow.Snow.render","snow/Snow.hx",123,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		::snow::_system::window::Windowing tmp = this->windowing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		tmp->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,render,(void))

Void Snow_obj::dispatch_system_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.Snow","dispatch_system_event",0x61ee1b6f,"snow.Snow.dispatch_system_event","snow/Snow.hx",129,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(131)
		Dynamic tmp = _event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		this->on_event(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,dispatch_system_event,(void))

Void Snow_obj::init( Dynamic _snow_config,::snow::App _host){
{
		HX_STACK_FRAME("snow.Snow","init",0xb9babb10,"snow.Snow.init","snow/Snow.hx",148,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_snow_config,"_snow_config")
		HX_STACK_ARG(_host,"_host")
		HX_STACK_LINE(150)
		this->snow_config = _snow_config;
		HX_STACK_LINE(151)
		Dynamic tmp = this->snow_config;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		::String tmp1 = tmp->__Field(HX_HCSTRING("app_package","\xa8","\x8a","\xe2","\xb9"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		if ((tmp2)){
			HX_STACK_LINE(152)
			Dynamic tmp3 = this->snow_config;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(152)
			tmp3->__FieldRef(HX_HCSTRING("app_package","\xa8","\x8a","\xe2","\xb9")) = HX_HCSTRING("org.snowkit.snowdefault","\x99","\x8a","\x88","\xa4");
		}
		HX_STACK_LINE(155)
		Dynamic tmp3 = this->default_config();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(155)
		this->config = tmp3;
		HX_STACK_LINE(156)
		this->host = _host;
		HX_STACK_LINE(157)
		::snow::App tmp4 = this->host;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		tmp4->app = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(159)
		::snow::core::native::Core tmp5 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		Dynamic tmp6 = this->on_event_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(159)
		tmp5->init(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Snow_obj,init,(void))

Void Snow_obj::on_snow_init( ){
{
		HX_STACK_FRAME("snow.Snow","on_snow_init",0xe7e6932c,"snow.Snow.on_snow_init","snow/Snow.hx",163,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		::snow::App tmp = this->host;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		tmp->on_internal_init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,on_snow_init,(void))

Void Snow_obj::on_snow_ready( ){
{
		HX_STACK_FRAME("snow.Snow","on_snow_ready",0x2a7c60c7,"snow.Snow.on_snow_ready","snow/Snow.hx",173,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		::snow::Snow _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		bool tmp = this->was_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		if ((tmp)){
			HX_STACK_LINE(176)
			::snow::types::Error tmp1 = ::snow::types::Error_obj::error(HX_HCSTRING("firing ready event more than once is invalid usage","\xfd","\xad","\x25","\xcb"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			HX_STACK_DO_THROW(tmp1);
		}
		HX_STACK_LINE(182)
		::snow::_system::io::IO tmp1 = ::snow::_system::io::IO_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		this->io = tmp1;
		HX_STACK_LINE(183)
		::snow::_system::input::Input tmp2 = ::snow::_system::input::Input_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		this->input = tmp2;
		HX_STACK_LINE(184)
		::snow::_system::audio::Audio tmp3 = ::snow::_system::audio::Audio_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(184)
		this->audio = tmp3;
		HX_STACK_LINE(185)
		::snow::_system::assets::Assets tmp4 = ::snow::_system::assets::Assets_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		this->assets = tmp4;
		HX_STACK_LINE(186)
		::snow::_system::window::Windowing tmp5 = ::snow::_system::window::Windowing_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(186)
		this->windowing = tmp5;
		HX_STACK_LINE(196)
		this->was_ready = true;
		HX_STACK_LINE(198)
		this->setup_app_path();
		HX_STACK_LINE(200)
		::snow::api::Promise tmp6 = this->setup_default_assets();		HX_STACK_VAR(tmp6,"tmp6");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::Snow,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/Snow.hx",200,0x86524d2f)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(204)
				::snow::api::Promise tmp7 = _g->setup_configs();		HX_STACK_VAR(tmp7,"tmp7");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::snow::Snow,_g)
				int __ArgCount() const { return 1; }
				Void run(Dynamic _1){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/Snow.hx",204,0x86524d2f)
					HX_STACK_ARG(_1,"_1")
					{
						HX_STACK_LINE(208)
						_g->setup_default_window();
						HX_STACK_LINE(210)
						Dynamic tmp8 = _g->on_ready_dyn();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(210)
						::snow::Snow_obj::next(tmp8);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(204)
				tmp7->then( Dynamic(new _Function_2_1(_g)),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(200)
		::snow::api::Promise tmp7 = tmp6->then( Dynamic(new _Function_1_1(_g)),null());		HX_STACK_VAR(tmp7,"tmp7");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		int __ArgCount() const { return 1; }
		Void run(::String e){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","snow/Snow.hx",214,0x86524d2f)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(216)
				::String tmp8 = (HX_HCSTRING("snow / cannot recover from error: ","\x23","\x3b","\xc4","\x75") + e);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(216)
				::snow::types::Error tmp9 = ::snow::types::Error_obj::init(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(216)
				HX_STACK_DO_THROW(tmp9);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(200)
		tmp7->error( Dynamic(new _Function_1_2()));
		HX_STACK_LINE(221)
		::snow::api::Promises_obj::step();
		HX_STACK_LINE(224)
		while((true)){
			HX_STACK_LINE(224)
			int tmp8 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(224)
			bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(224)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(224)
			if ((tmp10)){
				HX_STACK_LINE(224)
				break;
			}
			HX_STACK_LINE(225)
			this->cycle_next_queue();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,on_snow_ready,(void))

Void Snow_obj::do_internal_update( Float dt){
{
		HX_STACK_FRAME("snow.Snow","do_internal_update",0xda766217,"snow.Snow.do_internal_update","snow/Snow.hx",231,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			::snow::_system::io::IO tmp = this->io;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(233)
			tmp->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )();
		}
		HX_STACK_LINE(234)
		::snow::_system::input::Input tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		tmp->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )();
		HX_STACK_LINE(235)
		::snow::_system::audio::Audio tmp1 = this->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		tmp1->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )();
		HX_STACK_LINE(236)
		::snow::App tmp2 = this->host;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		Float tmp3 = dt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(236)
		tmp2->update(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,do_internal_update,(void))

Void Snow_obj::on_ready( ){
{
		HX_STACK_FRAME("snow.Snow","on_ready",0xb779ea03,"snow.Snow.on_ready","snow/Snow.hx",241,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(244)
		this->is_ready = true;
		HX_STACK_LINE(245)
		::snow::App tmp = this->host;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		tmp->ready();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,on_ready,(void))

Void Snow_obj::on_snow_update( ){
{
		HX_STACK_FRAME("snow.Snow","on_snow_update",0x8ccc1d25,"snow.Snow.on_snow_update","snow/Snow.hx",249,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(251)
		bool tmp = this->freeze;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		if ((tmp)){
			HX_STACK_LINE(251)
			return null();
		}
		HX_STACK_LINE(254)
		::snow::api::Timer_obj::update();
		HX_STACK_LINE(257)
		::snow::api::Promises_obj::step();
		HX_STACK_LINE(260)
		this->cycle_next_queue();
		HX_STACK_LINE(263)
		bool tmp1 = this->is_ready;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(263)
		if ((tmp2)){
			HX_STACK_LINE(263)
			return null();
		}
		HX_STACK_LINE(266)
		::snow::App tmp3 = this->host;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(266)
		tmp3->on_internal_update();
		HX_STACK_LINE(269)
		::snow::App tmp4 = this->host;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(269)
		tmp4->on_internal_render();
		HX_STACK_LINE(273)
		::Sys_obj::sleep((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,on_snow_update,(void))

Void Snow_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.Snow","on_event",0x468411ba,"snow.Snow.on_event","snow/Snow.hx",278,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(280)
		bool tmp = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) != (int)3);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(280)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(280)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(280)
		if ((tmp1)){
			HX_STACK_LINE(281)
			tmp2 = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) != (int)0);
		}
		else{
			HX_STACK_LINE(280)
			tmp2 = false;
		}
		HX_STACK_LINE(280)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(280)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(280)
		if ((tmp3)){
			HX_STACK_LINE(282)
			tmp4 = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) != (int)5);
		}
		else{
			HX_STACK_LINE(280)
			tmp4 = false;
		}
		HX_STACK_LINE(280)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(280)
		if ((tmp4)){
			HX_STACK_LINE(283)
			tmp5 = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) != (int)6);
		}
		else{
			HX_STACK_LINE(280)
			tmp5 = false;
		}
		HX_STACK_LINE(280)
		if ((tmp5)){
			HX_STACK_LINE(138)
			Dynamic();
		}
		HX_STACK_LINE(289)
		bool tmp6 = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) != (int)3);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(289)
		if ((tmp6)){
			HX_STACK_LINE(204)
			Dynamic();
		}
		HX_STACK_LINE(295)
		bool tmp7 = this->is_ready;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(295)
		if ((tmp7)){
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				::snow::_system::io::IO tmp8 = this->io;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(296)
				Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(296)
				tmp8->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"), hx::paccDynamic )(tmp9);
			}
			HX_STACK_LINE(297)
			::snow::_system::audio::Audio tmp8 = this->audio;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(297)
			Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(297)
			tmp8->__Field(HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"), hx::paccDynamic )(tmp9);
			HX_STACK_LINE(298)
			::snow::_system::window::Windowing tmp10 = this->windowing;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(298)
			Dynamic tmp11 = _event;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(298)
			tmp10->__Field(HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"), hx::paccDynamic )(tmp11);
			HX_STACK_LINE(299)
			::snow::_system::input::Input tmp12 = this->input;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(299)
			Dynamic tmp13 = _event;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(299)
			tmp12->__Field(HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"), hx::paccDynamic )(tmp13);
			HX_STACK_LINE(300)
			::snow::App tmp14 = this->host;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(300)
			Dynamic tmp15 = _event;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(300)
			tmp14->onevent(tmp15);
		}
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			Dynamic _g = _event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(303)
			bool tmp8 = (_g != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(303)
			if ((tmp8)){
				HX_STACK_LINE(303)
				Dynamic tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(303)
				switch( (int)(tmp9)){
					case (int)1: {
						HX_STACK_LINE(306)
						this->on_snow_init();
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(310)
						this->on_snow_ready();
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(314)
						this->on_snow_update();
					}
					;break;
					case (int)7: case (int)8: {
						HX_STACK_LINE(318)
						this->shutdown();
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(322)
						::String tmp10 = HX_HCSTRING("     i / snow / Goodbye.","\xa3","\x6e","\x9d","\xae");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(322)
						Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Snow.hx","\xfb","\x3b","\xfd","\xae"),322,HX_HCSTRING("snow.Snow","\x6e","\xe0","\x04","\xa6"),HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(322)
						::haxe::Log_obj::trace(tmp10,tmp11);
					}
					;break;
					default: {
					}
				}
			}
			else{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,on_event,(void))

Void Snow_obj::cycle_next_queue( ){
{
		HX_STACK_FRAME("snow.Snow","cycle_next_queue",0xfb89383e,"snow.Snow.cycle_next_queue","snow/Snow.hx",333,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(335)
		int tmp = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		int count = tmp;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(336)
		bool tmp1 = (count > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(336)
		if ((tmp1)){
			HX_STACK_LINE(337)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(337)
			while((true)){
				HX_STACK_LINE(337)
				bool tmp2 = (_g < count);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(337)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(337)
				if ((tmp3)){
					HX_STACK_LINE(337)
					break;
				}
				HX_STACK_LINE(337)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(337)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(337)
				Dynamic tmp5 = ::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(337)
				tmp5().Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,cycle_next_queue,(void))

Void Snow_obj::setup_app_path( ){
{
		HX_STACK_FRAME("snow.Snow","setup_app_path",0xf2992e85,"snow.Snow.setup_app_path","snow/Snow.hx",345,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(349)
		::snow::_system::io::IO tmp = this->io;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(349)
		::String tmp1 = tmp->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("app_path","\x43","\x9d","\xdc","\xa2"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(349)
		::String app_path = tmp1;		HX_STACK_VAR(app_path,"app_path");
		HX_STACK_LINE(350)
		::snow::_system::io::IO tmp2 = this->io;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		::String tmp3 = tmp2->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("app_path_prefs","\xf4","\x00","\x3e","\x80"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(350)
		::String pref_path = tmp3;		HX_STACK_VAR(pref_path,"pref_path");
		HX_STACK_LINE(352)
		::String tmp4 = app_path;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(352)
		::Sys_obj::setCwd(tmp4);
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,setup_app_path,(void))

::snow::api::Promise Snow_obj::setup_default_assets( ){
	HX_STACK_FRAME("snow.Snow","setup_default_assets",0x41f17a43,"snow.Snow.setup_default_assets","snow/Snow.hx",361,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(361)
	::snow::Snow _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(363)
	Dynamic tmp = this->snow_config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(363)
	Dynamic tmp1 = tmp->__Field(HX_HCSTRING("config_custom_assets","\x14","\x71","\x35","\x57"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(363)
	if ((tmp1)){
		HX_STACK_LINE(364)
		::snow::api::Promise tmp2 = ::snow::api::Promise_obj::resolve(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(364)
		return tmp2;
	}

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::Snow,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/Snow.hx",369,0x86524d2f)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(372)
			::String tmp2 = _g->snow_config->__Field(HX_HCSTRING("config_assets_path","\xe4","\x1d","\x1f","\x80"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(372)
			_g->assets->__FieldRef(HX_HCSTRING("manifest_path","\x75","\x4b","\x9f","\x84")) = tmp2;
			HX_STACK_LINE(378)
			::snow::api::Promise tmp3 = _g->default_asset_list();		HX_STACK_VAR(tmp3,"tmp3");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::snow::Snow,_g)
			int __ArgCount() const { return 1; }
			Void run(Array< ::String > list){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/Snow.hx",381,0x86524d2f)
				HX_STACK_ARG(list,"list")
				{
					HX_STACK_LINE(381)
					_g->assets->__FieldRef(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")) = list;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(378)
			::snow::api::Promise tmp4 = tmp3->then( Dynamic(new _Function_2_1(_g)),null());		HX_STACK_VAR(tmp4,"tmp4");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_2)
			int __ArgCount() const { return 1; }
			Void run(Dynamic e){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","snow/api/Debug.hx",138,0x9e629c0c)
				HX_STACK_ARG(e,"e")
				{
					HX_STACK_LINE(138)
					Dynamic();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(378)
			::snow::api::Promise tmp5 = tmp4->error( Dynamic(new _Function_2_2()));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(389)
			Dynamic tmp6 = resolve;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(378)
			tmp5->then(tmp6,null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(369)
	::snow::api::Promise tmp2 = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(369)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,setup_default_assets,return )

::snow::api::Promise Snow_obj::setup_configs( ){
	HX_STACK_FRAME("snow.Snow","setup_configs",0xf070606f,"snow.Snow.setup_configs","snow/Snow.hx",395,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(395)
	::snow::Snow _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(398)
	Dynamic tmp = this->snow_config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(398)
	Dynamic tmp1 = tmp->__Field(HX_HCSTRING("config_custom_runtime","\x27","\x0b","\x12","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(398)
	if ((tmp1)){
		HX_STACK_LINE(399)
		this->setup_host_config();
		HX_STACK_LINE(400)
		::snow::api::Promise tmp2 = ::snow::api::Promise_obj::resolve(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(400)
		return tmp2;
	}

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::Snow,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/Snow.hx",403,0x86524d2f)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(407)
			::snow::api::Promise tmp2 = _g->default_runtime_config();		HX_STACK_VAR(tmp2,"tmp2");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::snow::Snow,_g)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _runtime_conf){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/Snow.hx",409,0x86524d2f)
				HX_STACK_ARG(_runtime_conf,"_runtime_conf")
				{
					HX_STACK_LINE(409)
					_g->config->__FieldRef(HX_HCSTRING("runtime","\xd8","\xb4","\x60","\xef")) = _runtime_conf;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(407)
			::snow::api::Promise tmp3 = tmp2->then( Dynamic(new _Function_2_1(_g)),null());		HX_STACK_VAR(tmp3,"tmp3");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_2)
			int __ArgCount() const { return 1; }
			Void run(::String error){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","snow/Snow.hx",411,0x86524d2f)
				HX_STACK_ARG(error,"error")
				{
					HX_STACK_LINE(413)
					::String tmp4 = (HX_HCSTRING("config / failed / default runtime config failed to parse as JSON. cannot recover. ","\xa0","\x56","\x0c","\xa1") + error);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(413)
					::snow::types::Error tmp5 = ::snow::types::Error_obj::init(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(413)
					HX_STACK_DO_THROW(tmp5);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(407)
			::snow::api::Promise tmp4 = tmp3->error( Dynamic(new _Function_2_2()));		HX_STACK_VAR(tmp4,"tmp4");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_3,::snow::Snow,_g,Dynamic,resolve)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","snow/Snow.hx",415,0x86524d2f)
				{
					HX_STACK_LINE(417)
					_g->setup_host_config();
					HX_STACK_LINE(418)
					resolve();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(407)
			tmp4->then( Dynamic(new _Function_2_3(_g,resolve)),null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(403)
	::snow::api::Promise tmp2 = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(403)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,setup_configs,return )

Void Snow_obj::setup_host_config( ){
{
		HX_STACK_FRAME("snow.Snow","setup_host_config",0xcf90f9f7,"snow.Snow.setup_host_config","snow/Snow.hx",426,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(430)
		::snow::App tmp = this->host;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(430)
		Dynamic tmp1 = this->config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(430)
		Dynamic tmp2 = tmp->config(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(430)
		this->config = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,setup_host_config,(void))

Void Snow_obj::setup_default_window( ){
{
		HX_STACK_FRAME("snow.Snow","setup_default_window",0x487ac5b0,"snow.Snow.setup_default_window","snow/Snow.hx",434,0x86524d2f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(446)
		Dynamic tmp = this->config;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(446)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("has_window","\x75","\x65","\x66","\x7e"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(446)
		bool tmp2 = (tmp1 == true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(446)
		if ((tmp2)){
			HX_STACK_LINE(450)
			::snow::_system::window::Windowing tmp3 = this->windowing;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(450)
			Dynamic tmp4 = this->config;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(450)
			Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(450)
			::snow::_system::window::Window tmp6 = tmp3->__Field(HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"), hx::paccDynamic )(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(450)
			this->window = tmp6;
			HX_STACK_LINE(453)
			::snow::_system::window::Window tmp7 = this->window;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(453)
			Dynamic tmp8 = tmp7->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(453)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(453)
			if ((tmp9)){
				HX_STACK_LINE(454)
				::snow::types::Error tmp10 = ::snow::types::Error_obj::windowing(HX_HCSTRING("requested default window cannot be created. cannot continue","\x89","\x82","\x12","\xc4"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(454)
				HX_STACK_DO_THROW(tmp10);
			}
		}
		else{
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,setup_default_window,(void))

Dynamic Snow_obj::default_config( ){
	HX_STACK_FRAME("snow.Snow","default_config",0xd69819c0,"snow.Snow.default_config","snow/Snow.hx",467,0x86524d2f)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",470,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(470)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(470)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(471)
	Dynamic tmp2 = this->default_window_config();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(472)
	Dynamic tmp3 = this->default_render_config();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(476)
	int tmp4 = ::snow::_system::input::Keycodes_obj::left;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(476)
	int tmp5 = ::snow::_system::input::Keycodes_obj::right;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(476)
	int tmp6 = ::snow::_system::input::Keycodes_obj::up;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(476)
	int tmp7 = ::snow::_system::input::Keycodes_obj::down;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(477)
	int tmp8 = ::snow::_system::input::Keycodes_obj::backspace;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(477)
	int tmp9 = ::snow::_system::input::Keycodes_obj::tab;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(477)
	int tmp10 = ::snow::_system::input::Keycodes_obj::_delete;		HX_STACK_VAR(tmp10,"tmp10");
	struct _Function_1_2{
		inline static Dynamic Block( int &tmp5,int &tmp6,int &tmp9,int &tmp4,int &tmp10,int &tmp7,int &tmp8){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",473,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("no_context_menu","\x2d","\x47","\x56","\x3e") , true,false);
				__result->Add(HX_HCSTRING("prevent_default_keys","\x79","\x16","\x08","\x79") , Array_obj< int >::__new().Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8).Add(tmp9).Add(tmp10),false);
				__result->Add(HX_HCSTRING("prevent_default_mouse_wheel","\xdc","\xd1","\x17","\xfd") , true,false);
				__result->Add(HX_HCSTRING("true_fullscreen","\xcc","\x26","\xf1","\xd0") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(473)
	Dynamic tmp11 = _Function_1_2::Block(tmp5,tmp6,tmp9,tmp4,tmp10,tmp7,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
	struct _Function_1_3{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",482,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("audio_buffer_length","\x1c","\x7d","\xb7","\x78") , (int)176400,false);
				__result->Add(HX_HCSTRING("audio_buffer_count","\x59","\xd5","\x71","\x1d") , (int)4,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(482)
	Dynamic tmp12 = _Function_1_3::Block();		HX_STACK_VAR(tmp12,"tmp12");
	struct _Function_1_4{
		inline static Dynamic Block( Dynamic &tmp11,Dynamic &tmp2,Dynamic &tmp3,Dynamic &tmp1,Dynamic &tmp12){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",468,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("has_window","\x75","\x65","\x66","\x7e") , true,false);
				__result->Add(HX_HCSTRING("runtime","\xd8","\xb4","\x60","\xef") , tmp1,false);
				__result->Add(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52") , tmp2,false);
				__result->Add(HX_HCSTRING("render","\x56","\x6b","\x29","\x05") , tmp3,false);
				__result->Add(HX_HCSTRING("web","\x94","\xa4","\x5a","\x00") , tmp11,false);
				__result->Add(HX_HCSTRING("native","\x97","\xc9","\x1c","\x22") , tmp12,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(468)
	Dynamic tmp13 = _Function_1_4::Block(tmp11,tmp2,tmp3,tmp1,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(468)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,default_config,return )

::snow::api::Promise Snow_obj::default_runtime_config( ){
	HX_STACK_FRAME("snow.Snow","default_runtime_config",0xc6956f87,"snow.Snow.default_runtime_config","snow/Snow.hx",491,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(491)
	::snow::Snow _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::Snow,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/Snow.hx",496,0x86524d2f)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(498)
			::String tmp = _g->snow_config->__Field(HX_HCSTRING("config_runtime_path","\x89","\x68","\xc3","\xcc"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(498)
			Dynamic tmp1 = ::snow::_system::assets::AssetJSON_obj::processor_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(498)
			::snow::api::Promise tmp2 = _g->io->__Field(HX_HCSTRING("data_flow","\x63","\x45","\x91","\xa9"), hx::paccDynamic )(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(498)
			::snow::api::Promise load = tmp2;		HX_STACK_VAR(load,"load");
			HX_STACK_LINE(500)
			Dynamic tmp3 = resolve;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(500)
			::snow::api::Promise tmp4 = load->then(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,reject,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(::snow::types::Error error){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/Snow.hx",501,0x86524d2f)
				HX_STACK_ARG(error,"error")
				{
					HX_STACK_LINE(501)
					switch( (int)(error->__Index())){
						case (int)3: {
							HX_STACK_LINE(501)
							Dynamic tmp5 = (::snow::types::Error(error))->__Param(0);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(501)
							Dynamic val = tmp5;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(502)
							{
								HX_STACK_LINE(503)
								::snow::types::Error tmp6 = error;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(503)
								reject(tmp6);
							}
						}
						;break;
						default: {
							HX_STACK_LINE(506)
							resolve();
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(500)
			tmp4->error( Dynamic(new _Function_2_1(reject,resolve)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(496)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(496)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,default_runtime_config,return )

::snow::api::Promise Snow_obj::default_asset_list( ){
	HX_STACK_FRAME("snow.Snow","default_asset_list",0x660ae24b,"snow.Snow.default_asset_list","snow/Snow.hx",515,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(515)
	::snow::Snow _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::Snow,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/Snow.hx",517,0x86524d2f)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(519)
			::String tmp = _g->assets->__Field(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(519)
			::String tmp1 = _g->assets->__Field(HX_HCSTRING("manifest_path","\x75","\x4b","\x9f","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(519)
			::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(519)
			::String list_path = tmp2;		HX_STACK_VAR(list_path,"list_path");
			HX_STACK_LINE(520)
			::String tmp3 = list_path;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(520)
			Dynamic tmp4 = ::snow::_system::assets::AssetJSON_obj::processor_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(520)
			::snow::api::Promise tmp5 = _g->io->__Field(HX_HCSTRING("data_flow","\x63","\x45","\x91","\xa9"), hx::paccDynamic )(tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(520)
			::snow::api::Promise load = tmp5;		HX_STACK_VAR(load,"load");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(Dynamic json){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/Snow.hx",522,0x86524d2f)
				HX_STACK_ARG(json,"json")
				{
					HX_STACK_LINE(524)
					Array< ::String > _list = ((Array< ::String >)(json));		HX_STACK_VAR(_list,"_list");
					HX_STACK_LINE(529)
					resolve(_list);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(522)
			::snow::api::Promise tmp6 = load->then( Dynamic(new _Function_2_1(resolve)),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(531)
			Dynamic tmp7 = reject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(522)
			tmp6->error(tmp7);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(517)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(517)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,default_asset_list,return )

Dynamic Snow_obj::default_render_config( ){
	HX_STACK_FRAME("snow.Snow","default_render_config",0xe3496c8d,"snow.Snow.default_render_config","snow/Snow.hx",538,0x86524d2f)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",552,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("minor","\x35","\x7b","\x68","\x08") , (int)0,false);
				__result->Add(HX_HCSTRING("major","\x39","\xbd","\x1b","\x03") , (int)0,false);
				__result->Add(HX_HCSTRING("profile","\x29","\x49","\x49","\xf3") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(552)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	struct _Function_1_2{
		inline static Dynamic Block( Dynamic &tmp){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",542,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , false,false);
				__result->Add(HX_HCSTRING("stencil","\xfc","\xbd","\x03","\x80") , false,false);
				__result->Add(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48") , (int)0,false);
				__result->Add(HX_HCSTRING("red_bits","\xf4","\xd7","\x46","\xd0") , (int)8,false);
				__result->Add(HX_HCSTRING("green_bits","\x42","\xa5","\xbf","\x35") , (int)8,false);
				__result->Add(HX_HCSTRING("blue_bits","\x0b","\x26","\x35","\x39") , (int)8,false);
				__result->Add(HX_HCSTRING("alpha_bits","\xc7","\xfa","\x9f","\x81") , (int)8,false);
				__result->Add(HX_HCSTRING("depth_bits","\x02","\x9b","\x66","\xbd") , (int)0,false);
				__result->Add(HX_HCSTRING("stencil_bits","\x69","\x27","\x66","\xbe") , (int)0,false);
				__result->Add(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21") , tmp,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(542)
	Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(542)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,default_render_config,return )

Dynamic Snow_obj::default_window_config( ){
	HX_STACK_FRAME("snow.Snow","default_window_config",0xa273eb33,"snow.Snow.default_window_config","snow/Snow.hx",561,0x86524d2f)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/Snow.hx",565,0x86524d2f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("fullscreen_desktop","\x98","\x8c","\x6e","\x75") , true,false);
				__result->Add(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9") , false,false);
				__result->Add(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17") , false,false);
				__result->Add(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9") , true,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , (int)536805376,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , (int)536805376,false);
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)960,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)640,false);
				__result->Add(HX_HCSTRING("title","\x98","\x15","\x3b","\x10") , HX_HCSTRING("snow app","\x84","\x30","\x9f","\x8b"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(565)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(565)
	Dynamic conf = tmp;		HX_STACK_VAR(conf,"conf");
	HX_STACK_LINE(582)
	Dynamic tmp1 = conf;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(582)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,default_window_config,return )

bool Snow_obj::set_freeze( bool _freeze){
	HX_STACK_FRAME("snow.Snow","set_freeze",0x5bc91894,"snow.Snow.set_freeze","snow/Snow.hx",588,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_freeze,"_freeze")
	HX_STACK_LINE(590)
	this->freeze = _freeze;
	HX_STACK_LINE(592)
	bool tmp = _freeze;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(592)
	if ((tmp)){
		HX_STACK_LINE(593)
		::snow::_system::audio::Audio tmp1 = this->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(593)
		tmp1->__Field(HX_HCSTRING("suspend","\x7c","\x2f","\x4f","\xf7"), hx::paccDynamic )();
	}
	else{
		HX_STACK_LINE(595)
		::snow::_system::audio::Audio tmp1 = this->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(595)
		tmp1->__Field(HX_HCSTRING("resume","\xad","\x69","\x84","\x08"), hx::paccDynamic )();
	}
	HX_STACK_LINE(598)
	bool tmp1 = this->freeze;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(598)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,set_freeze,return )

Float Snow_obj::get_time( ){
	HX_STACK_FRAME("snow.Snow","get_time",0xf6770796,"snow.Snow.get_time","snow/Snow.hx",602,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(602)
	::snow::core::native::Core tmp = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(602)
	Float tmp1 = tmp->timestamp();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(602)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,get_time,return )

::String Snow_obj::get_uniqueid( ){
	HX_STACK_FRAME("snow.Snow","get_uniqueid",0xd043c935,"snow.Snow.get_uniqueid","snow/Snow.hx",603,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(603)
	::String tmp = this->make_uniqueid(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(603)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,get_uniqueid,return )

::String Snow_obj::make_uniqueid( Dynamic val){
	HX_STACK_FRAME("snow.Snow","make_uniqueid",0xca2724dd,"snow.Snow.make_uniqueid","snow/Snow.hx",610,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(612)
	bool tmp = (val == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(612)
	if ((tmp)){
		HX_STACK_LINE(614)
		int tmp1 = ::Std_obj::random((int)2147483647);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(614)
		val = tmp1;
	}
	HX_STACK_LINE(626)
	int tmp1 = hx::Mod(val,(int)62);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(626)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(626)
	int r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(627)
	Float tmp3 = (Float(val) / Float((int)62));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(627)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(627)
	int q = tmp4;		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(629)
	bool tmp5 = (q > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(629)
	if ((tmp5)){
		HX_STACK_LINE(629)
		int tmp6 = q;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(629)
		::String tmp7 = this->make_uniqueid(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(629)
		bool tmp8 = (r > (int)9);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(629)
		::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(629)
		if ((tmp8)){
			HX_STACK_LINE(629)
			int tmp10 = (r - (int)10);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(629)
			int tmp11 = ((int)65 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(629)
			int ascii = tmp11;		HX_STACK_VAR(ascii,"ascii");
			HX_STACK_LINE(629)
			bool tmp12 = (ascii > (int)90);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(629)
			if ((tmp12)){
				HX_STACK_LINE(629)
				hx::AddEq(ascii,(int)6);
			}
			HX_STACK_LINE(629)
			int tmp13 = ascii;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(629)
			tmp9 = ::String::fromCharCode(tmp13);
		}
		else{
			HX_STACK_LINE(629)
			int tmp10 = r;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(629)
			::String tmp11 = ::Std_obj::string(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(629)
			tmp9 = tmp11.charAt((int)0);
		}
		HX_STACK_LINE(629)
		::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(629)
		return tmp10;
	}
	HX_STACK_LINE(631)
	bool tmp6 = (r > (int)9);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(631)
	::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(631)
	if ((tmp6)){
		HX_STACK_LINE(631)
		int tmp8 = (r - (int)10);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(631)
		int tmp9 = ((int)65 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(631)
		int ascii = tmp9;		HX_STACK_VAR(ascii,"ascii");
		HX_STACK_LINE(631)
		bool tmp10 = (ascii > (int)90);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(631)
		if ((tmp10)){
			HX_STACK_LINE(631)
			hx::AddEq(ascii,(int)6);
		}
		HX_STACK_LINE(631)
		int tmp11 = ascii;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(631)
		tmp7 = ::String::fromCharCode(tmp11);
	}
	else{
		HX_STACK_LINE(631)
		int tmp8 = r;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(631)
		::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(631)
		tmp7 = tmp9.charAt((int)0);
	}
	HX_STACK_LINE(631)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(631)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,make_uniqueid,return )

::String Snow_obj::_typename( Dynamic t){
	HX_STACK_FRAME("snow.Snow","typename",0xf4b0ca05,"snow.Snow.typename","snow/Snow.hx",635,0x86524d2f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(636)
	Dynamic tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(636)
	::hx::Class tmp1 = ::Type_obj::getClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(636)
	::String tmp2 = ::Type_obj::getClassName(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(636)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,_typename,return )

::snow::core::native::Core Snow_obj::core;

cpp::ArrayBase Snow_obj::next_queue;

Void Snow_obj::next( Dynamic func){
{
		HX_STACK_FRAME("snow.Snow","next",0xbd0204f3,"snow.Snow.next","snow/Snow.hx",139,0x86524d2f)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(141)
		bool tmp = (func != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		if ((tmp)){
			HX_STACK_LINE(141)
			Dynamic tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(141)
			::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Snow_obj,next,(void))

Float Snow_obj::get_timestamp( ){
	HX_STACK_FRAME("snow.Snow","get_timestamp",0x374328ad,"snow.Snow.get_timestamp","snow/Snow.hx",604,0x86524d2f)
	HX_STACK_LINE(604)
	::snow::core::native::Core tmp = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(604)
	Float tmp1 = tmp->timestamp();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(604)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Snow_obj,get_timestamp,return )


Snow_obj::Snow_obj()
{
}

void Snow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Snow);
	HX_MARK_MEMBER_NAME(host,"host");
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(snow_config,"snow_config");
	HX_MARK_MEMBER_NAME(freeze,"freeze");
	HX_MARK_MEMBER_NAME(io,"io");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(assets,"assets");
	HX_MARK_MEMBER_NAME(audio,"audio");
	HX_MARK_MEMBER_NAME(windowing,"windowing");
	HX_MARK_MEMBER_NAME(platform,"platform");
	HX_MARK_MEMBER_NAME(os,"os");
	HX_MARK_MEMBER_NAME(shutting_down,"shutting_down");
	HX_MARK_MEMBER_NAME(has_shutdown,"has_shutdown");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(was_ready,"was_ready");
	HX_MARK_MEMBER_NAME(is_ready,"is_ready");
	HX_MARK_END_CLASS();
}

void Snow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(host,"host");
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(snow_config,"snow_config");
	HX_VISIT_MEMBER_NAME(freeze,"freeze");
	HX_VISIT_MEMBER_NAME(io,"io");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(assets,"assets");
	HX_VISIT_MEMBER_NAME(audio,"audio");
	HX_VISIT_MEMBER_NAME(windowing,"windowing");
	HX_VISIT_MEMBER_NAME(platform,"platform");
	HX_VISIT_MEMBER_NAME(os,"os");
	HX_VISIT_MEMBER_NAME(shutting_down,"shutting_down");
	HX_VISIT_MEMBER_NAME(has_shutdown,"has_shutdown");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(was_ready,"was_ready");
	HX_VISIT_MEMBER_NAME(is_ready,"is_ready");
}

Dynamic Snow_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { return io; }
		if (HX_FIELD_EQ(inName,"os") ) { return os; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == hx::paccAlways) return get_time(); }
		if (HX_FIELD_EQ(inName,"host") ) { return host; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"audio") ) { return audio; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"freeze") ) { return freeze; }
		if (HX_FIELD_EQ(inName,"assets") ) { return assets; }
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniqueid") ) { if (inCallProp == hx::paccAlways) return get_uniqueid(); }
		if (HX_FIELD_EQ(inName,"platform") ) { return platform; }
		if (HX_FIELD_EQ(inName,"is_ready") ) { return is_ready; }
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		if (HX_FIELD_EQ(inName,"on_ready") ) { return on_ready_dyn(); }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		if (HX_FIELD_EQ(inName,"get_time") ) { return get_time_dyn(); }
		if (HX_FIELD_EQ(inName,"typename") ) { return _typename_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"windowing") ) { return windowing; }
		if (HX_FIELD_EQ(inName,"was_ready") ) { return was_ready; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_freeze") ) { return set_freeze_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"snow_config") ) { return snow_config; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_shutdown") ) { return has_shutdown; }
		if (HX_FIELD_EQ(inName,"on_snow_init") ) { return on_snow_init_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uniqueid") ) { return get_uniqueid_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shutting_down") ) { return shutting_down; }
		if (HX_FIELD_EQ(inName,"on_snow_ready") ) { return on_snow_ready_dyn(); }
		if (HX_FIELD_EQ(inName,"setup_configs") ) { return setup_configs_dyn(); }
		if (HX_FIELD_EQ(inName,"make_uniqueid") ) { return make_uniqueid_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"on_snow_update") ) { return on_snow_update_dyn(); }
		if (HX_FIELD_EQ(inName,"setup_app_path") ) { return setup_app_path_dyn(); }
		if (HX_FIELD_EQ(inName,"default_config") ) { return default_config_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cycle_next_queue") ) { return cycle_next_queue_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setup_host_config") ) { return setup_host_config_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"do_internal_update") ) { return do_internal_update_dyn(); }
		if (HX_FIELD_EQ(inName,"default_asset_list") ) { return default_asset_list_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setup_default_assets") ) { return setup_default_assets_dyn(); }
		if (HX_FIELD_EQ(inName,"setup_default_window") ) { return setup_default_window_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dispatch_system_event") ) { return dispatch_system_event_dyn(); }
		if (HX_FIELD_EQ(inName,"default_render_config") ) { return default_render_config_dyn(); }
		if (HX_FIELD_EQ(inName,"default_window_config") ) { return default_window_config_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"default_runtime_config") ) { return default_runtime_config_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Snow_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { outValue = core; return true;  }
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { if (inCallProp == hx::paccAlways) { outValue = get_timestamp(); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"next_queue") ) { outValue = next_queue; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_timestamp") ) { outValue = get_timestamp_dyn(); return true;  }
	}
	return false;
}

Dynamic Snow_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { io=inValue.Cast< ::snow::_system::io::IO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"os") ) { os=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { host=inValue.Cast< ::snow::App >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::snow::_system::input::Input >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audio") ) { audio=inValue.Cast< ::snow::_system::audio::Audio >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"freeze") ) { if (inCallProp == hx::paccAlways) return set_freeze(inValue);freeze=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"assets") ) { assets=inValue.Cast< ::snow::_system::assets::Assets >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::snow::_system::window::Window >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { platform=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"is_ready") ) { is_ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"windowing") ) { windowing=inValue.Cast< ::snow::_system::window::Windowing >(); return inValue; }
		if (HX_FIELD_EQ(inName,"was_ready") ) { was_ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"snow_config") ) { snow_config=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_shutdown") ) { has_shutdown=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shutting_down") ) { shutting_down=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Snow_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=ioValue.Cast< ::snow::core::native::Core >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"next_queue") ) { next_queue=ioValue.Cast< cpp::ArrayBase >(); return true; }
	}
	return false;
}

void Snow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("uniqueid","\x2c","\x95","\xaa","\x5b"));
	outFields->push(HX_HCSTRING("host","\x68","\xcf","\x12","\x45"));
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	outFields->push(HX_HCSTRING("snow_config","\x3e","\xac","\x52","\xc7"));
	outFields->push(HX_HCSTRING("freeze","\x57","\x8a","\x24","\xaf"));
	outFields->push(HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"));
	outFields->push(HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"));
	outFields->push(HX_HCSTRING("windowing","\xf2","\x8e","\x44","\x96"));
	outFields->push(HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"));
	outFields->push(HX_HCSTRING("os","\x24","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20"));
	outFields->push(HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("was_ready","\x8d","\x4d","\x1b","\x4b"));
	outFields->push(HX_HCSTRING("is_ready","\x0e","\x0f","\x77","\x06"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::App*/ ,(int)offsetof(Snow_obj,host),HX_HCSTRING("host","\x68","\xcf","\x12","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Snow_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Snow_obj,snow_config),HX_HCSTRING("snow_config","\x3e","\xac","\x52","\xc7")},
	{hx::fsBool,(int)offsetof(Snow_obj,freeze),HX_HCSTRING("freeze","\x57","\x8a","\x24","\xaf")},
	{hx::fsObject /*::snow::_system::io::IO*/ ,(int)offsetof(Snow_obj,io),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00")},
	{hx::fsObject /*::snow::_system::input::Input*/ ,(int)offsetof(Snow_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::snow::_system::assets::Assets*/ ,(int)offsetof(Snow_obj,assets),HX_HCSTRING("assets","\x83","\x48","\x03","\x4c")},
	{hx::fsObject /*::snow::_system::audio::Audio*/ ,(int)offsetof(Snow_obj,audio),HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{hx::fsObject /*::snow::_system::window::Windowing*/ ,(int)offsetof(Snow_obj,windowing),HX_HCSTRING("windowing","\xf2","\x8e","\x44","\x96")},
	{hx::fsString,(int)offsetof(Snow_obj,platform),HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67")},
	{hx::fsString,(int)offsetof(Snow_obj,os),HX_HCSTRING("os","\x24","\x61","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Snow_obj,shutting_down),HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20")},
	{hx::fsBool,(int)offsetof(Snow_obj,has_shutdown),HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e")},
	{hx::fsObject /*::snow::_system::window::Window*/ ,(int)offsetof(Snow_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsBool,(int)offsetof(Snow_obj,was_ready),HX_HCSTRING("was_ready","\x8d","\x4d","\x1b","\x4b")},
	{hx::fsBool,(int)offsetof(Snow_obj,is_ready),HX_HCSTRING("is_ready","\x0e","\x0f","\x77","\x06")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::snow::core::native::Core*/ ,(void *) &Snow_obj::core,HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Snow_obj::next_queue,HX_HCSTRING("next_queue","\x05","\x12","\x6f","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("host","\x68","\xcf","\x12","\x45"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("snow_config","\x3e","\xac","\x52","\xc7"),
	HX_HCSTRING("freeze","\x57","\x8a","\x24","\xaf"),
	HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"),
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("windowing","\xf2","\x8e","\x44","\x96"),
	HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"),
	HX_HCSTRING("os","\x24","\x61","\x00","\x00"),
	HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20"),
	HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("was_ready","\x8d","\x4d","\x1b","\x4b"),
	HX_HCSTRING("is_ready","\x0e","\x0f","\x77","\x06"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("dispatch_system_event","\x6f","\x9b","\x5d","\x4d"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("on_snow_init","\x2c","\x13","\x67","\x28"),
	HX_HCSTRING("on_snow_ready","\xc7","\xe0","\x6b","\x5a"),
	HX_HCSTRING("do_internal_update","\x17","\xe2","\x56","\x36"),
	HX_HCSTRING("on_ready","\x03","\x6a","\xba","\x8d"),
	HX_HCSTRING("on_snow_update","\x25","\x9d","\x6c","\x4e"),
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	HX_HCSTRING("cycle_next_queue","\x3e","\xb8","\x49","\xc6"),
	HX_HCSTRING("setup_app_path","\x85","\xae","\x39","\xb4"),
	HX_HCSTRING("setup_default_assets","\x43","\xfa","\xf1","\xb6"),
	HX_HCSTRING("setup_configs","\x6f","\xe0","\x5f","\x20"),
	HX_HCSTRING("setup_host_config","\xf7","\x79","\x40","\x6d"),
	HX_HCSTRING("setup_default_window","\xb0","\x45","\x7b","\xbd"),
	HX_HCSTRING("default_config","\xc0","\x99","\x38","\x98"),
	HX_HCSTRING("default_runtime_config","\x87","\xef","\xb5","\xdc"),
	HX_HCSTRING("default_asset_list","\x4b","\x62","\xeb","\xc1"),
	HX_HCSTRING("default_render_config","\x8d","\xec","\xb8","\xce"),
	HX_HCSTRING("default_window_config","\x33","\x6b","\xe3","\x8d"),
	HX_HCSTRING("set_freeze","\x94","\x98","\x29","\xa3"),
	HX_HCSTRING("get_time","\x96","\x87","\xb7","\xcc"),
	HX_HCSTRING("get_uniqueid","\x35","\x49","\xc4","\x10"),
	HX_HCSTRING("make_uniqueid","\xdd","\xa4","\x16","\xfa"),
	HX_HCSTRING("typename","\x05","\x4a","\xf1","\xca"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Snow_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Snow_obj::core,"core");
	HX_MARK_MEMBER_NAME(Snow_obj::next_queue,"next_queue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Snow_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Snow_obj::core,"core");
	HX_VISIT_MEMBER_NAME(Snow_obj::next_queue,"next_queue");
};

#endif

hx::Class Snow_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("next_queue","\x05","\x12","\x6f","\xda"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("get_timestamp","\xad","\xa8","\x32","\x67"),
	::String(null()) };

void Snow_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.Snow","\x6e","\xe0","\x04","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Snow_obj::__GetStatic;
	__mClass->mSetStaticField = &Snow_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Snow_obj >;
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
