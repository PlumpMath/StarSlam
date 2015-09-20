#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_Audio
#include <luxe/Audio.h>
#endif
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Cursor
#include <luxe/Cursor.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_GamepadEventType
#include <luxe/GamepadEventType.h>
#endif
#ifndef INCLUDED_luxe_IO
#include <luxe/IO.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Parcel
#include <luxe/Parcel.h>
#endif
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Scene
#include <luxe/Scene.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Tag
#include <luxe/Tag.h>
#endif
#ifndef INCLUDED_luxe_TextEventType
#include <luxe/TextEventType.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
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
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers__Uint8Array_Uint8Array_Impl_
#include <snow/api/buffers/_Uint8Array/Uint8Array_Impl_.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GL_FFI
#include <snow/modules/opengl/native/GL_FFI.h>
#endif
#ifndef INCLUDED_snow_system_assets_Asset
#include <snow/system/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_system_assets_AssetImage
#include <snow/system/assets/AssetImage.h>
#endif
#ifndef INCLUDED_snow_system_assets_Assets
#include <snow/system/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_system_input_Scancodes
#include <snow/system/input/Scancodes.h>
#endif
#ifndef INCLUDED_snow_system_window_Window
#include <snow/system/window/Window.h>
#endif
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
namespace luxe{

Void Core_obj::__construct(::luxe::Game _game,Dynamic _config)
{
HX_STACK_FRAME("luxe.Core","new",0x819c31a9,"luxe.Core.new","luxe/Core.hx",36,0xa921e806)
HX_STACK_THIS(this)
HX_STACK_ARG(_game,"_game")
HX_STACK_ARG(_config,"_config")
{
	HX_STACK_LINE(75)
	this->inited = false;
	HX_STACK_LINE(74)
	this->has_shutdown = false;
	HX_STACK_LINE(73)
	this->shutting_down = false;
	HX_STACK_LINE(52)
	this->headless = false;
	HX_STACK_LINE(50)
	this->console_visible = false;
	HX_STACK_LINE(81)
	super::__construct();
	HX_STACK_LINE(83)
	this->init_config = _config;
	HX_STACK_LINE(84)
	this->game = _game;
	HX_STACK_LINE(87)
	::luxe::Game tmp = this->game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	tmp->app = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(90)
	::luxe::Emitter tmp1 = ::luxe::Emitter_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	this->emitter = tmp1;
	HX_STACK_LINE(93)
	::Luxe_obj::core = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(94)
	::luxe::utils::Utils tmp2 = ::luxe::utils::Utils_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	::Luxe_obj::utils = tmp2;
}
;
	return null();
}

//Core_obj::~Core_obj() { }

Dynamic Core_obj::__CreateEmpty() { return  new Core_obj; }
hx::ObjectPtr< Core_obj > Core_obj::__new(::luxe::Game _game,Dynamic _config)
{  hx::ObjectPtr< Core_obj > _result_ = new Core_obj();
	_result_->__construct(_game,_config);
	return _result_;}

Dynamic Core_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Core_obj > _result_ = new Core_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Core_obj::ready( ){
{
		HX_STACK_FRAME("luxe.Core","ready",0x93d4a5ec,"luxe.Core.ready","luxe/Core.hx",100,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		::luxe::Core _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		if ((tmp)){
			HX_STACK_LINE(103)
			::String tmp1 = (HX_HCSTRING("log / level to ","\xdc","\xcc","\x48","\x9e") + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			::String tmp2 = (HX_HCSTRING("     i / luxe / ","\xb3","\x5b","\x0a","\x3e") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),103,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			::haxe::Log_obj::trace(tmp2,tmp3);
			HX_STACK_LINE(104)
			::String tmp4 = (HX_HCSTRING("log / filter : ","\x41","\x69","\x13","\x1f") + null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(104)
			::String tmp5 = (HX_HCSTRING("     i / luxe / ","\xb3","\x5b","\x0a","\x3e") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(104)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),104,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(104)
			::haxe::Log_obj::trace(tmp5,tmp6);
			HX_STACK_LINE(105)
			::String tmp7 = (HX_HCSTRING("log / exclude : ","\x99","\x61","\xf3","\xe1") + null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(105)
			::String tmp8 = (HX_HCSTRING("     i / luxe / ","\xb3","\x5b","\x0a","\x3e") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(105)
			Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),105,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(105)
			::haxe::Log_obj::trace(tmp8,tmp9);
		}
		HX_STACK_LINE(108)
		::String tmp1 = ::haxe::Resource_obj::getString(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		::Luxe_obj::version = tmp1;
		HX_STACK_LINE(110)
		::String tmp2 = ::Luxe_obj::version;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		::String tmp3 = ::haxe::Resource_obj::getString(HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		::Luxe_obj::build = tmp4;
		HX_STACK_LINE(112)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(112)
		::String tmp6 = tmp5->app->os;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(112)
		::String tmp7 = (HX_HCSTRING("os:","\x96","\x9e","\x54","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		::String tmp8 = (tmp7 + HX_HCSTRING(" / platform:","\xd6","\x0a","\x95","\x7c"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(112)
		::luxe::Core tmp9 = ::Luxe_obj::core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(112)
		::String tmp10 = tmp9->app->platform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(112)
		::String tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(112)
		::String tmp12 = (tmp11 + HX_HCSTRING(" / version ","\x39","\xd8","\x5e","\x9e"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(112)
		::String tmp13 = ::Luxe_obj::build;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(112)
		::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(112)
		::String tmp15 = (HX_HCSTRING("     i / luxe / ","\xb3","\x5b","\x0a","\x3e") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(112)
		Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),112,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(112)
		::haxe::Log_obj::trace(tmp15,tmp16);
		HX_STACK_LINE(115)
		::snow::Snow tmp17 = this->app;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(115)
		::snow::_system::window::Window tmp18 = tmp17->window;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(115)
		bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(115)
		this->headless = tmp19;
		HX_STACK_LINE(124)
		bool tmp20 = this->headless;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(124)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(124)
		if ((tmp21)){
			HX_STACK_LINE(126)
			::String _font_name = HX_HCSTRING("default.png","\x7c","\xfa","\xa2","\x05");		HX_STACK_VAR(_font_name,"_font_name");
			HX_STACK_LINE(127)
			::String tmp22 = _font_name;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(127)
			::haxe::io::Bytes tmp23 = ::haxe::Resource_obj::getBytes(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(127)
			::snow::api::buffers::ArrayBufferView tmp24 = ::snow::api::buffers::_Uint8Array::Uint8Array_Impl__obj::fromBytes(tmp23,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(127)
			::snow::api::buffers::ArrayBufferView _font_image = tmp24;		HX_STACK_VAR(_font_image,"_font_image");
			HX_STACK_LINE(128)
			::snow::Snow tmp25 = this->app;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(128)
			::snow::_system::assets::Assets tmp26 = tmp25->assets;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(128)
			::String tmp27 = _font_name;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(128)
			::snow::api::buffers::ArrayBufferView tmp28 = _font_image;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(128)
			::snow::api::Promise tmp29 = ::snow::_system::assets::AssetImage_obj::load_from_bytes(tmp26,tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(128)
			::snow::api::Promise _font_load = tmp29;		HX_STACK_VAR(_font_load,"_font_load");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::luxe::Core,_g)
			int __ArgCount() const { return 1; }
			Void run(::snow::_system::assets::AssetImage asset){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/Core.hx",130,0xa921e806)
				HX_STACK_ARG(asset,"asset")
				{
					HX_STACK_LINE(131)
					::snow::_system::assets::AssetImage tmp30 = asset;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(131)
					_g->init(tmp30);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(130)
			::snow::api::Promise tmp30 = _font_load->then( Dynamic(new _Function_2_1(_g)),null());		HX_STACK_VAR(tmp30,"tmp30");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::luxe::Core,_g)
			int __ArgCount() const { return 1; }
			Void run(Dynamic error){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","luxe/Core.hx",132,0xa921e806)
				HX_STACK_ARG(error,"error")
				{
					HX_STACK_LINE(133)
					::String tmp31 = HX_HCSTRING("     i / luxe / failed to load default font, things will probably not look right... $error","\xe1","\x3b","\xbe","\x2d");		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(133)
					Dynamic tmp32 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),133,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(133)
					::haxe::Log_obj::trace(tmp31,tmp32);
					HX_STACK_LINE(134)
					_g->init(null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(130)
			tmp30->error( Dynamic(new _Function_2_2(_g)));
		}
		else{
			HX_STACK_LINE(139)
			this->init(null());
		}
	}
return null();
}


Void Core_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Core","ondestroy",0x53c5bbc4,"luxe.Core.ondestroy","luxe/Core.hx",147,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		this->shutting_down = true;
		HX_STACK_LINE(151)
		::String tmp = HX_HCSTRING("     i / luxe / shutting down...","\x81","\x39","\x65","\xfc");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),151,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		::haxe::Log_obj::trace(tmp,tmp1);
		HX_STACK_LINE(154)
		::luxe::Game tmp2 = this->game;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		tmp2->ondestroy();
		HX_STACK_LINE(157)
		::luxe::Emitter tmp3 = this->emitter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		tmp3->emit((int)6,null());
		HX_STACK_LINE(160)
		::phoenix::Renderer tmp4 = this->renderer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(160)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		if ((tmp5)){
			HX_STACK_LINE(161)
			::phoenix::Renderer tmp6 = this->renderer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			tmp6->destroy();
		}
		HX_STACK_LINE(164)
		::luxe::Physics tmp6 = this->physics;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(164)
		tmp6->destroy();
		HX_STACK_LINE(165)
		::luxe::Input tmp7 = this->input;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(165)
		tmp7->destroy();
		HX_STACK_LINE(166)
		::luxe::Audio tmp8 = this->audio;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(166)
		tmp8->destroy();
		HX_STACK_LINE(167)
		::luxe::Timer tmp9 = this->timer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(167)
		tmp9->destroy();
		HX_STACK_LINE(168)
		::luxe::Events tmp10 = this->events;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(168)
		tmp10->destroy();
		HX_STACK_LINE(169)
		::luxe::Debug tmp11 = this->debug;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(169)
		tmp11->destroy();
		HX_STACK_LINE(172)
		this->emitter = null();
		HX_STACK_LINE(173)
		this->input = null();
		HX_STACK_LINE(174)
		this->audio = null();
		HX_STACK_LINE(175)
		this->events = null();
		HX_STACK_LINE(176)
		this->timer = null();
		HX_STACK_LINE(177)
		this->debug = null();
		HX_STACK_LINE(178)
		::Luxe_obj::utils = null();
		HX_STACK_LINE(181)
		this->has_shutdown = true;
		HX_STACK_LINE(183)
		::String tmp12 = HX_HCSTRING("     i / luxe / goodbye.","\x30","\x50","\x16","\xe9");		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(183)
		Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),183,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(183)
		::haxe::Log_obj::trace(tmp12,tmp13);
	}
return null();
}


Void Core_obj::init( ::snow::_system::assets::AssetImage asset){
{
		HX_STACK_FRAME("luxe.Core","init",0xe3c7f9a7,"luxe.Core.init","luxe/Core.hx",187,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(asset,"asset")
		HX_STACK_LINE(193)
		::luxe::Debug tmp = ::luxe::Debug_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		::luxe::Debug tmp1 = this->debug = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		::Luxe_obj::debug = tmp1;
		HX_STACK_LINE(194)
		::luxe::IO tmp2 = ::luxe::IO_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		::luxe::IO tmp3 = this->io = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		::Luxe_obj::io = tmp3;
		HX_STACK_LINE(196)
		::luxe::Draw tmp4 = ::luxe::Draw_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		this->draw = tmp4;
		HX_STACK_LINE(197)
		::luxe::Timer tmp5 = ::luxe::Timer_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		this->timer = tmp5;
		HX_STACK_LINE(198)
		::luxe::Events tmp6 = ::luxe::Events_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(198)
		this->events = tmp6;
		HX_STACK_LINE(199)
		::luxe::Audio tmp7 = ::luxe::Audio_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(199)
		this->audio = tmp7;
		HX_STACK_LINE(200)
		::luxe::Input tmp8 = ::luxe::Input_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(200)
		this->input = tmp8;
		HX_STACK_LINE(201)
		::luxe::Physics tmp9 = ::luxe::Physics_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(201)
		this->physics = tmp9;
		HX_STACK_LINE(204)
		::luxe::Resources tmp10 = ::luxe::Resources_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(204)
		this->resources = tmp10;
		HX_STACK_LINE(205)
		::luxe::Resources tmp11 = this->resources;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(205)
		::Luxe_obj::resources = tmp11;
		HX_STACK_LINE(207)
		bool tmp12 = this->headless;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(207)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(207)
		if ((tmp13)){
			HX_STACK_LINE(209)
			Dynamic tmp14 = this->window_event_dyn();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(209)
			::snow::Snow tmp15 = this->app;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(209)
			tmp15->window->__FieldRef(HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78")) = tmp14;
			HX_STACK_LINE(211)
			::phoenix::Renderer tmp16 = ::phoenix::Renderer_obj::__new(hx::ObjectPtr<OBJ_>(this),asset);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(211)
			this->renderer = tmp16;
			HX_STACK_LINE(213)
			::phoenix::Renderer tmp17 = this->renderer;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(213)
			::Luxe_obj::renderer = tmp17;
		}
		HX_STACK_LINE(218)
		int _window_w = (int)0;		HX_STACK_VAR(_window_w,"_window_w");
		HX_STACK_LINE(219)
		int _window_h = (int)0;		HX_STACK_VAR(_window_h,"_window_h");
		HX_STACK_LINE(221)
		::snow::Snow tmp14 = this->app;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(221)
		::snow::_system::window::Window tmp15 = tmp14->window;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(221)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(221)
		if ((tmp16)){
			HX_STACK_LINE(222)
			::snow::Snow tmp17 = this->app;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(222)
			int tmp18 = tmp17->window->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(222)
			_window_w = tmp18;
			HX_STACK_LINE(223)
			::snow::Snow tmp19 = this->app;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(223)
			int tmp20 = tmp19->window->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(223)
			_window_h = tmp20;
		}
		HX_STACK_LINE(227)
		::luxe::Screen tmp17 = ::luxe::Screen_obj::__new(hx::ObjectPtr<OBJ_>(this),_window_w,_window_h);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(227)
		this->screen = tmp17;
		HX_STACK_LINE(232)
		::luxe::Debug tmp18 = this->debug;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(232)
		tmp18->init();
		HX_STACK_LINE(233)
		::luxe::IO tmp19 = this->io;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(233)
		tmp19->init();
		HX_STACK_LINE(234)
		::luxe::Timer tmp20 = this->timer;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(234)
		tmp20->init();
		HX_STACK_LINE(235)
		::luxe::Audio tmp21 = this->audio;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(235)
		tmp21->init();
		HX_STACK_LINE(236)
		::luxe::Input tmp22 = this->input;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(236)
		tmp22->init();
		HX_STACK_LINE(238)
		bool tmp23 = this->headless;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(238)
		bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(238)
		if ((tmp24)){
			HX_STACK_LINE(239)
			::phoenix::Renderer tmp25 = this->renderer;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(239)
			tmp25->init();
		}
		HX_STACK_LINE(242)
		::luxe::Physics tmp25 = this->physics;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(242)
		tmp25->init();
		HX_STACK_LINE(244)
		::luxe::Audio tmp26 = this->audio;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(244)
		::Luxe_obj::audio = tmp26;
		HX_STACK_LINE(245)
		::luxe::Draw tmp27 = this->draw;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(245)
		::Luxe_obj::draw = tmp27;
		HX_STACK_LINE(246)
		::luxe::Events tmp28 = this->events;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(246)
		::Luxe_obj::events = tmp28;
		HX_STACK_LINE(247)
		::luxe::Timer tmp29 = this->timer;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(247)
		::Luxe_obj::timer = tmp29;
		HX_STACK_LINE(248)
		::luxe::Input tmp30 = this->input;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(248)
		::Luxe_obj::input = tmp30;
		HX_STACK_LINE(250)
		bool tmp31 = this->headless;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(250)
		bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(250)
		if ((tmp32)){
			HX_STACK_LINE(251)
			::phoenix::Renderer tmp33 = this->renderer;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(251)
			::phoenix::Camera tmp34 = tmp33->camera;		HX_STACK_VAR(tmp34,"tmp34");
			struct _Function_2_1{
				inline static Dynamic Block( ::phoenix::Camera &tmp34){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",251,0xa921e806)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("default camera","\x24","\x50","\x2a","\x4c"),false);
						__result->Add(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e") , tmp34,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(251)
			Dynamic tmp35 = _Function_2_1::Block(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(251)
			::luxe::Camera tmp36 = ::luxe::Camera_obj::__new(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(251)
			::Luxe_obj::camera = tmp36;
		}
		HX_STACK_LINE(254)
		::luxe::Physics tmp33 = this->physics;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(254)
		::Luxe_obj::physics = tmp33;
		HX_STACK_LINE(256)
		::luxe::Scene tmp34 = ::luxe::Scene_obj::__new(HX_HCSTRING("default scene","\xad","\xc4","\x21","\x0a"));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(256)
		this->scene = tmp34;
		HX_STACK_LINE(257)
		::luxe::Scene tmp35 = this->scene;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(257)
		::Luxe_obj::scene = tmp35;
		HX_STACK_LINE(259)
		bool tmp36 = this->headless;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(259)
		bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(259)
		if ((tmp37)){
			HX_STACK_LINE(260)
			::luxe::Scene tmp38 = this->scene;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(260)
			::luxe::Camera tmp39 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(260)
			tmp38->add(tmp39);
			HX_STACK_LINE(261)
			::luxe::Debug tmp40 = this->debug;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(261)
			tmp40->create_debug_console();
		}
		HX_STACK_LINE(265)
		this->internal_pre_ready();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,init,(void))

Void Core_obj::internal_pre_ready( ){
{
		HX_STACK_FRAME("luxe.Core","internal_pre_ready",0x6e762e1c,"luxe.Core.internal_pre_ready","luxe/Core.hx",269,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		bool tmp = this->headless;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		if ((tmp1)){
			HX_STACK_LINE(276)
			::String tmp2 = HX_HCSTRING("     i / luxe / opengl /","\xf1","\x80","\xf3","\xa1");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(276)
			Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),276,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("internal_pre_ready","\x45","\xb5","\x6d","\x32"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(276)
			::haxe::Log_obj::trace(tmp2,tmp3);
			HX_STACK_LINE(277)
			::String tmp4 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_version();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(277)
			::String tmp5 = (HX_HCSTRING("     i / luxe / ","\xb3","\x5b","\x0a","\x3e") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(277)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),277,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("internal_pre_ready","\x45","\xb5","\x6d","\x32"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(277)
			::haxe::Log_obj::trace(tmp5,tmp6);
			HX_STACK_LINE(284)
			::luxe::Resources tmp7 = this->resources;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(285)
			Dynamic tmp8 = this->appconfig;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(286)
			Dynamic tmp9 = this->appconfig;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(287)
			Dynamic tmp10 = this->appconfig;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(288)
			Dynamic tmp11 = this->appconfig;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(289)
			Dynamic tmp12 = this->appconfig;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(290)
			Dynamic tmp13 = this->appconfig;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(291)
			Dynamic tmp14 = this->appconfig;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(292)
			Dynamic tmp15 = this->internal_ready_dyn();		HX_STACK_VAR(tmp15,"tmp15");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp13,Dynamic &tmp9,Dynamic &tmp11,Dynamic &tmp10,Dynamic &tmp15,::luxe::Resources &tmp7,Dynamic &tmp8,Dynamic &tmp12,Dynamic &tmp14){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",282,0xa921e806)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("default_parcel","\xc7","\xbb","\xe2","\xbd"),false);
						__result->Add(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2") , tmp7,false);
						__result->Add(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd") , tmp8->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d") , tmp9->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54") , tmp10->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65") , tmp11->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04") , tmp12->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f") , tmp13->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32") , tmp14->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83") , tmp15,false);

						HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
						int __ArgCount() const { return 1; }
						Void run(Dynamic _error){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","luxe/Core.hx",293,0xa921e806)
							HX_STACK_ARG(_error,"_error")
							{
								HX_STACK_LINE(294)
								::String tmp16 = HX_HCSTRING("     i / luxe / config / preload / failed to load","\x2c","\x0a","\x8d","\x9c");		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(294)
								Dynamic tmp17 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),294,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("internal_pre_ready","\x45","\xb5","\x6d","\x32"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(294)
								::haxe::Log_obj::trace(tmp16,tmp17);
								HX_STACK_LINE(295)
								Dynamic tmp18 = _error;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(295)
								::snow::types::Error tmp19 = ::snow::types::Error_obj::error(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(295)
								HX_STACK_DO_THROW(tmp19);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						__result->Add(HX_HCSTRING("onfailed","\x1c","\x48","\x17","\x93") ,  Dynamic(new _Function_3_1()),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(282)
			Dynamic tmp16 = _Function_2_1::Block(tmp13,tmp9,tmp11,tmp10,tmp15,tmp7,tmp8,tmp12,tmp14);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(282)
			::luxe::Parcel tmp17 = ::luxe::Parcel_obj::__new(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(282)
			::luxe::Parcel default_parcel = tmp17;		HX_STACK_VAR(default_parcel,"default_parcel");
			HX_STACK_LINE(299)
			default_parcel->load(null());
		}
		else{
			HX_STACK_LINE(303)
			this->internal_ready(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,internal_pre_ready,(void))

Void Core_obj::internal_ready( ::luxe::Parcel _){
{
		HX_STACK_FRAME("luxe.Core","internal_ready",0x0ed45bf8,"luxe.Core.internal_ready","luxe/Core.hx",309,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(313)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		::snow::_system::window::Window tmp1 = tmp->window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(313)
		if ((tmp2)){
			HX_STACK_LINE(313)
			bool tmp4 = this->headless;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(313)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(313)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(313)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(313)
			tmp3 = false;
		}
		HX_STACK_LINE(313)
		if ((tmp3)){
			HX_STACK_LINE(315)
			Dynamic tmp4 = this->render_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(315)
			::snow::Snow tmp5 = this->app;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(315)
			tmp5->window->__FieldRef(HX_HCSTRING("onrender","\xb5","\xed","\x41","\xb0")) = tmp4;
			HX_STACK_LINE(318)
			::luxe::Debug tmp6 = this->debug;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(318)
			::String tmp7 = ::luxe::Tag_obj::update;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(318)
			tmp6->start(tmp7,(int)50);
			HX_STACK_LINE(319)
			::luxe::Debug tmp8 = this->debug;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(319)
			::String tmp9 = ::luxe::Tag_obj::renderdt;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(319)
			tmp8->start(tmp9,(int)50);
		}
		HX_STACK_LINE(325)
		::luxe::Game tmp4 = this->game;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(325)
		tmp4->ready();
		HX_STACK_LINE(328)
		bool tmp5 = this->shutting_down;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(328)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(328)
		if ((tmp6)){
			HX_STACK_LINE(332)
			::luxe::Emitter tmp7 = this->emitter;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(332)
			tmp7->emit((int)2,null());
			HX_STACK_LINE(333)
			this->inited = true;
			HX_STACK_LINE(336)
			::luxe::Physics tmp8 = this->physics;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(336)
			tmp8->reset();
			HX_STACK_LINE(339)
			::snow::Snow tmp9 = this->app;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(339)
			Dynamic tmp10 = tmp9->snow_config->__Field(HX_HCSTRING("has_loop","\xa9","\x9c","\xf3","\xf3"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(339)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(339)
			if ((tmp11)){
				HX_STACK_LINE(340)
				this->shutdown();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,internal_ready,(void))

Void Core_obj::shutdown( ){
{
		HX_STACK_FRAME("luxe.Core","shutdown",0x12d152ad,"luxe.Core.shutdown","luxe/Core.hx",347,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(350)
		this->shutting_down = true;
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(353)
			::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(353)
			Dynamic tmp1 = tmp->shutdown_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(353)
			::snow::Snow_obj::next(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,shutdown,(void))

Void Core_obj::on( int event,Dynamic handler){
{
		HX_STACK_FRAME("luxe.Core","on",0x6fef7bf6,"luxe.Core.on","luxe/Core.hx",357,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(358)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(358)
		int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(358)
		tmp->on(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,on,(void))

bool Core_obj::off( int event,Dynamic handler){
	HX_STACK_FRAME("luxe.Core","off",0x819cf4b8,"luxe.Core.off","luxe/Core.hx",361,0xa921e806)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(362)
	::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(362)
	bool tmp3 = tmp->off(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(362)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,off,return )

Void Core_obj::emit( int event,Dynamic data){
{
		HX_STACK_FRAME("luxe.Core","emit",0xe1225cea,"luxe.Core.emit","luxe/Core.hx",365,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(366)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(366)
		Dynamic tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(366)
		tmp->emit(tmp1,tmp2);
		HX_STACK_LINE(366)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,emit,(void))

Void Core_obj::onevent( Dynamic event){
{
		HX_STACK_FRAME("luxe.Core","onevent",0x24a23064,"luxe.Core.onevent","luxe/Core.hx",370,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(372)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(372)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(372)
		if ((tmp1)){
			HX_STACK_LINE(372)
			return null();
		}
		HX_STACK_LINE(375)
		::luxe::Game tmp2 = this->game;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(375)
		Dynamic tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(375)
		tmp2->onevent(tmp3);
	}
return null();
}


Void Core_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Core","update",0x50b05860,"luxe.Core.update","luxe/Core.hx",380,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(386)
		bool tmp = this->has_shutdown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(386)
		if ((tmp)){
			HX_STACK_LINE(386)
			return null();
		}
		HX_STACK_LINE(387)
		bool tmp1 = this->inited;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(387)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(387)
		if ((tmp2)){
			HX_STACK_LINE(387)
			return null();
		}
		HX_STACK_LINE(389)
		::luxe::Debug tmp3 = this->debug;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(389)
		::String tmp4 = ::luxe::Tag_obj::update;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(389)
		tmp3->end(tmp4);
		HX_STACK_LINE(390)
		::luxe::Debug tmp5 = this->debug;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(390)
		::String tmp6 = ::luxe::Tag_obj::update;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(390)
		tmp5->start(tmp6,null());
		HX_STACK_LINE(395)
		::luxe::Timer tmp7 = this->timer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(395)
		tmp7->process();
		HX_STACK_LINE(399)
		::luxe::Input tmp8 = this->input;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(399)
		tmp8->process();
		HX_STACK_LINE(403)
		::luxe::Audio tmp9 = this->audio;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(403)
		tmp9->process();
		HX_STACK_LINE(407)
		::luxe::Events tmp10 = this->events;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(407)
		tmp10->process();
		HX_STACK_LINE(411)
		::luxe::Physics tmp11 = this->physics;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(411)
		tmp11->process();
		HX_STACK_LINE(414)
		::luxe::Debug tmp12 = this->debug;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(414)
		::String tmp13 = ::luxe::Tag_obj::updates;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(414)
		tmp12->start(tmp13,null());
		HX_STACK_LINE(415)
		::luxe::Emitter tmp14 = this->emitter;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(415)
		Float tmp15 = dt;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(415)
		tmp14->emit((int)4,tmp15);
		HX_STACK_LINE(416)
		::luxe::Debug tmp16 = this->debug;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(416)
		::String tmp17 = ::luxe::Tag_obj::updates;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(416)
		tmp16->end(tmp17);
		HX_STACK_LINE(419)
		::luxe::Debug tmp18 = this->debug;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(419)
		::String tmp19 = ::luxe::Tag_obj::game_update;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(419)
		tmp18->start(tmp19,null());
		HX_STACK_LINE(420)
		::luxe::Game tmp20 = this->game;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(420)
		Float tmp21 = dt;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(420)
		tmp20->update(tmp21);
		HX_STACK_LINE(421)
		::luxe::Debug tmp22 = this->debug;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(421)
		::String tmp23 = ::luxe::Tag_obj::game_update;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(421)
		tmp22->end(tmp23);
		HX_STACK_LINE(425)
		::luxe::Debug tmp24 = this->debug;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(425)
		tmp24->process();
	}
return null();
}


Void Core_obj::window_event( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Core","window_event",0x26e7e4e2,"luxe.Core.window_event","luxe/Core.hx",430,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(432)
		bool tmp = this->shutting_down;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(432)
		if ((tmp)){
			HX_STACK_LINE(432)
			return null();
		}
		HX_STACK_LINE(433)
		bool tmp1 = this->inited;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(433)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(433)
		if ((tmp2)){
			HX_STACK_LINE(433)
			return null();
		}
		HX_STACK_LINE(435)
		::luxe::Emitter tmp3 = this->emitter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(435)
		Dynamic tmp4 = _event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(435)
		tmp3->emit((int)26,tmp4);
		HX_STACK_LINE(437)
		{
			HX_STACK_LINE(437)
			Dynamic _g = _event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(437)
			bool tmp5 = (_g != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(437)
			if ((tmp5)){
				HX_STACK_LINE(437)
				Dynamic tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(437)
				switch( (int)(tmp6)){
					case (int)5: {
						HX_STACK_LINE(440)
						::luxe::Emitter tmp7 = this->emitter;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(440)
						Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(440)
						tmp7->emit((int)27,tmp8);
						HX_STACK_LINE(441)
						::luxe::Game tmp9 = this->game;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(441)
						Dynamic tmp10 = _event;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(441)
						tmp9->onwindowmoved(tmp10);
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(445)
						::luxe::Screen tmp7 = this->screen;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(445)
						tmp7->internal_resized(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
						HX_STACK_LINE(446)
						::phoenix::Renderer tmp8 = this->renderer;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(446)
						tmp8->internal_resized(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
						HX_STACK_LINE(447)
						::luxe::Emitter tmp9 = this->emitter;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(447)
						Dynamic tmp10 = _event;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(447)
						tmp9->emit((int)28,tmp10);
						HX_STACK_LINE(448)
						::luxe::Game tmp11 = this->game;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(448)
						Dynamic tmp12 = _event;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(448)
						tmp11->onwindowresized(tmp12);
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(452)
						::luxe::Screen tmp7 = this->screen;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(452)
						tmp7->internal_resized(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
						HX_STACK_LINE(453)
						::phoenix::Renderer tmp8 = this->renderer;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(453)
						tmp8->internal_resized(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
						HX_STACK_LINE(454)
						::luxe::Emitter tmp9 = this->emitter;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(454)
						Dynamic tmp10 = _event;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(454)
						tmp9->emit((int)29,tmp10);
						HX_STACK_LINE(455)
						::luxe::Game tmp11 = this->game;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(455)
						Dynamic tmp12 = _event;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(455)
						tmp11->onwindowsized(tmp12);
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(459)
						::luxe::Emitter tmp7 = this->emitter;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(459)
						Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(459)
						tmp7->emit((int)30,tmp8);
						HX_STACK_LINE(460)
						::luxe::Game tmp9 = this->game;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(460)
						Dynamic tmp10 = _event;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(460)
						tmp9->onwindowminimized(tmp10);
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(464)
						::luxe::Emitter tmp7 = this->emitter;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(464)
						Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(464)
						tmp7->emit((int)31,tmp8);
						HX_STACK_LINE(465)
						::luxe::Game tmp9 = this->game;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(465)
						Dynamic tmp10 = _event;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(465)
						tmp9->onwindowrestored(tmp10);
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


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,window_event,(void))

Void Core_obj::render( ::snow::_system::window::Window window){
{
		HX_STACK_FRAME("luxe.Core","render",0xced43dad,"luxe.Core.render","luxe/Core.hx",474,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(476)
		bool tmp = this->shutting_down;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(476)
		if ((tmp)){
			HX_STACK_LINE(476)
			return null();
		}
		HX_STACK_LINE(477)
		bool tmp1 = this->inited;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(477)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(477)
		if ((tmp2)){
			HX_STACK_LINE(477)
			return null();
		}
		HX_STACK_LINE(479)
		::luxe::Debug tmp3 = this->debug;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(479)
		::String tmp4 = ::luxe::Tag_obj::renderdt;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(479)
		tmp3->end(tmp4);
		HX_STACK_LINE(480)
		::luxe::Debug tmp5 = this->debug;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(480)
		::String tmp6 = ::luxe::Tag_obj::renderdt;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(480)
		tmp5->start(tmp6,null());
		HX_STACK_LINE(482)
		bool tmp7 = this->headless;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(482)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(482)
		if ((tmp8)){
			HX_STACK_LINE(484)
			::luxe::Debug tmp9 = this->debug;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(484)
			::String tmp10 = ::luxe::Tag_obj::render;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(484)
			tmp9->start(tmp10,null());
			HX_STACK_LINE(486)
			::luxe::Emitter tmp11 = this->emitter;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(486)
			tmp11->emit((int)7,null());
			HX_STACK_LINE(487)
			::luxe::Game tmp12 = this->game;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(487)
			tmp12->onprerender();
			HX_STACK_LINE(489)
			::luxe::Emitter tmp13 = this->emitter;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(489)
			tmp13->emit((int)8,null());
			HX_STACK_LINE(490)
			::luxe::Game tmp14 = this->game;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(490)
			tmp14->onrender();
			HX_STACK_LINE(491)
			::phoenix::Renderer tmp15 = this->renderer;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(491)
			tmp15->process();
			HX_STACK_LINE(493)
			::luxe::Emitter tmp16 = this->emitter;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(493)
			tmp16->emit((int)9,null());
			HX_STACK_LINE(494)
			::luxe::Game tmp17 = this->game;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(494)
			tmp17->onpostrender();
			HX_STACK_LINE(496)
			::luxe::Debug tmp18 = this->debug;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(496)
			::String tmp19 = ::luxe::Tag_obj::render;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(496)
			tmp18->end(tmp19);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,render,(void))

Void Core_obj::show_console( hx::Null< bool >  __o__show){
bool _show = __o__show.Default(true);
	HX_STACK_FRAME("luxe.Core","show_console",0xc6c98c6c,"luxe.Core.show_console","luxe/Core.hx",502,0xa921e806)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_show,"_show")
{
		HX_STACK_LINE(504)
		this->console_visible = _show;
		HX_STACK_LINE(505)
		::luxe::Debug tmp = this->debug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(505)
		bool tmp1 = this->console_visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(505)
		tmp->show_console(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,show_console,(void))

Void Core_obj::onkeydown( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onkeydown",0xe0adcc4b,"luxe.Core.onkeydown","luxe/Core.hx",511,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(513)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(513)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(513)
		if ((tmp1)){
			HX_STACK_LINE(513)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,bool &repeat,int &window_id,Dynamic &mod,int &scancode,int &keycode){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",515,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26") , scancode,false);
					__result->Add(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0") , keycode,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::down,false);
					__result->Add(HX_HCSTRING("mod","\xc2","\x16","\x53","\x00") , mod,false);
					__result->Add(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06") , repeat,false);
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , timestamp,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , window_id,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(515)
		Dynamic tmp2 = _Function_1_1::Block(timestamp,repeat,window_id,mod,scancode,keycode);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(515)
		Dynamic event = tmp2;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(525)
		bool tmp3 = this->shutting_down;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(525)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(525)
		if ((tmp4)){
			HX_STACK_LINE(528)
			::luxe::Input tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(528)
			Dynamic tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(528)
			tmp5->check_named_keys(tmp6,true);
			HX_STACK_LINE(529)
			::luxe::Emitter tmp7 = this->emitter;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(529)
			Dynamic tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(529)
			tmp7->emit((int)10,tmp8);
			HX_STACK_LINE(531)
			::luxe::Game tmp9 = this->game;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(531)
			Dynamic tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(531)
			tmp9->onkeydown(tmp10);
			HX_STACK_LINE(533)
			int tmp11 = scancode;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(533)
			int tmp12 = ::snow::_system::input::Scancodes_obj::grave;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(533)
			bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(533)
			if ((tmp13)){
				HX_STACK_LINE(534)
				bool tmp14 = this->console_visible;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(534)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(534)
				this->show_console(tmp15);
			}
		}
	}
return null();
}


Void Core_obj::onkeyup( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onkeyup",0x8ddc3e04,"luxe.Core.onkeyup","luxe/Core.hx",541,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(543)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(543)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(543)
		if ((tmp1)){
			HX_STACK_LINE(543)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,bool &repeat,int &window_id,Dynamic &mod,int &scancode,int &keycode){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",545,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26") , scancode,false);
					__result->Add(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0") , keycode,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::up,false);
					__result->Add(HX_HCSTRING("mod","\xc2","\x16","\x53","\x00") , mod,false);
					__result->Add(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06") , repeat,false);
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , timestamp,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , window_id,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(545)
		Dynamic tmp2 = _Function_1_1::Block(timestamp,repeat,window_id,mod,scancode,keycode);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(545)
		Dynamic event = tmp2;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(555)
		bool tmp3 = this->shutting_down;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(555)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(555)
		if ((tmp4)){
			HX_STACK_LINE(558)
			::luxe::Input tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(558)
			Dynamic tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(558)
			tmp5->check_named_keys(tmp6,null());
			HX_STACK_LINE(559)
			::luxe::Emitter tmp7 = this->emitter;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(559)
			Dynamic tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(559)
			tmp7->emit((int)11,tmp8);
			HX_STACK_LINE(561)
			::luxe::Game tmp9 = this->game;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(561)
			Dynamic tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(561)
			tmp9->onkeyup(tmp10);
		}
	}
return null();
}


Void Core_obj::ontextinput( ::String text,int start,int length,int type,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","ontextinput",0xed363987,"luxe.Core.ontextinput","luxe/Core.hx",567,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(569)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(569)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(569)
		if ((tmp1)){
			HX_STACK_LINE(569)
			return null();
		}
		HX_STACK_LINE(571)
		::luxe::TextEventType _type = ::luxe::TextEventType_obj::unknown;		HX_STACK_VAR(_type,"_type");
		HX_STACK_LINE(573)
		int tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(573)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(574)
				_type = ::luxe::TextEventType_obj::edit;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(575)
				_type = ::luxe::TextEventType_obj::input;
			}
			;break;
			default: {
				HX_STACK_LINE(577)
				return null();
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( int &length,::luxe::TextEventType &_type,Float &timestamp,int &window_id,::String &text,int &start){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",581,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , text,false);
					__result->Add(HX_HCSTRING("start","\x62","\x74","\x0b","\x84") , start,false);
					__result->Add(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f") , length,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , _type,false);
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , timestamp,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , window_id,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(581)
		Dynamic tmp3 = _Function_1_1::Block(length,_type,timestamp,window_id,text,start);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(581)
		Dynamic event = tmp3;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(590)
		bool tmp4 = this->shutting_down;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(590)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(590)
		if ((tmp5)){
			HX_STACK_LINE(592)
			::luxe::Emitter tmp6 = this->emitter;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(592)
			Dynamic tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(592)
			tmp6->emit((int)12,tmp7);
			HX_STACK_LINE(594)
			::luxe::Game tmp8 = this->game;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(594)
			Dynamic tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(594)
			tmp8->ontextinput(tmp9);
		}
	}
return null();
}


Void Core_obj::oninputdown( ::String name,Dynamic event){
{
		HX_STACK_FRAME("luxe.Core","oninputdown",0x4817deb6,"luxe.Core.oninputdown","luxe/Core.hx",602,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(604)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(604)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(604)
		if ((tmp1)){
			HX_STACK_LINE(604)
			return null();
		}
		HX_STACK_LINE(606)
		bool tmp2 = this->shutting_down;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(606)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(606)
		if ((tmp3)){
			HX_STACK_LINE(608)
			::luxe::Emitter tmp4 = this->emitter;		HX_STACK_VAR(tmp4,"tmp4");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &event,::String &name){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",608,0xa921e806)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , name,false);
						__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , event,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(608)
			Dynamic tmp5 = _Function_2_1::Block(event,name);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(608)
			tmp4->emit((int)13,tmp5);
			HX_STACK_LINE(610)
			::luxe::Game tmp6 = this->game;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(610)
			::String tmp7 = name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(610)
			Dynamic tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(610)
			tmp6->oninputdown(tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,oninputdown,(void))

Void Core_obj::oninputup( ::String name,Dynamic event){
{
		HX_STACK_FRAME("luxe.Core","oninputup",0x035e4faf,"luxe.Core.oninputup","luxe/Core.hx",616,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(618)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(618)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(618)
		if ((tmp1)){
			HX_STACK_LINE(618)
			return null();
		}
		HX_STACK_LINE(620)
		bool tmp2 = this->shutting_down;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(620)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(620)
		if ((tmp3)){
			HX_STACK_LINE(622)
			::luxe::Emitter tmp4 = this->emitter;		HX_STACK_VAR(tmp4,"tmp4");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &event,::String &name){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",622,0xa921e806)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , name,false);
						__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , event,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(622)
			Dynamic tmp5 = _Function_2_1::Block(event,name);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(622)
			tmp4->emit((int)14,tmp5);
			HX_STACK_LINE(624)
			::luxe::Game tmp6 = this->game;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(624)
			::String tmp7 = name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(624)
			Dynamic tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(624)
			tmp6->oninputup(tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,oninputup,(void))

Void Core_obj::onmousedown( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onmousedown",0x2d41da51,"luxe.Core.onmousedown","luxe/Core.hx",632,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(634)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(634)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(634)
		if ((tmp1)){
			HX_STACK_LINE(634)
			return null();
		}
		HX_STACK_LINE(638)
		::luxe::Screen tmp2 = this->screen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(638)
		::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(638)
		tmp2->cursor->set_internal(tmp3);
		HX_STACK_LINE(641)
		Float tmp4 = timestamp;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(642)
		int tmp5 = window_id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(644)
		int tmp6 = button;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(645)
		int tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(646)
		int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(647)
		int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(648)
		int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(649)
		::luxe::Screen tmp11 = this->screen;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(649)
		::phoenix::Vector tmp12 = tmp11->cursor->get_pos();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_1{
			inline static Dynamic Block( int &tmp5,int &tmp6,int &tmp9,Float &tmp4,int &tmp10,int &tmp7,int &tmp8,::phoenix::Vector &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",640,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp4,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , tmp5,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::down,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , tmp6,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("xrel","\xe1","\x73","\xa8","\x4f") , tmp9,false);
					__result->Add(HX_HCSTRING("yrel","\x80","\xaa","\x51","\x50") , tmp10,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp12,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(640)
		Dynamic tmp13 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp4,tmp10,tmp7,tmp8,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(640)
		Dynamic event = tmp13;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(652)
		bool tmp14 = this->shutting_down;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(652)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(652)
		if ((tmp15)){
			HX_STACK_LINE(654)
			::luxe::Input tmp16 = this->input;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(654)
			Dynamic tmp17 = event;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(654)
			tmp16->check_named_mouse(tmp17,true);
			HX_STACK_LINE(655)
			::luxe::Emitter tmp18 = this->emitter;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(655)
			Dynamic tmp19 = event;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(655)
			tmp18->emit((int)15,tmp19);
			HX_STACK_LINE(656)
			::luxe::Game tmp20 = this->game;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(656)
			Dynamic tmp21 = event;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(656)
			tmp20->onmousedown(tmp21);
		}
	}
return null();
}


Void Core_obj::onmouseup( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onmouseup",0xefb29e8a,"luxe.Core.onmouseup","luxe/Core.hx",662,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(664)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(664)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(664)
		if ((tmp1)){
			HX_STACK_LINE(664)
			return null();
		}
		HX_STACK_LINE(667)
		::luxe::Screen tmp2 = this->screen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(667)
		::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(667)
		tmp2->cursor->set_internal(tmp3);
		HX_STACK_LINE(670)
		Float tmp4 = timestamp;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(671)
		int tmp5 = window_id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(673)
		int tmp6 = button;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(674)
		int tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(675)
		int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(676)
		int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(677)
		int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(678)
		::luxe::Screen tmp11 = this->screen;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(678)
		::phoenix::Vector tmp12 = tmp11->cursor->get_pos();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_1{
			inline static Dynamic Block( int &tmp5,int &tmp6,int &tmp9,Float &tmp4,int &tmp10,int &tmp7,int &tmp8,::phoenix::Vector &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",669,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp4,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , tmp5,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::up,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , tmp6,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("xrel","\xe1","\x73","\xa8","\x4f") , tmp9,false);
					__result->Add(HX_HCSTRING("yrel","\x80","\xaa","\x51","\x50") , tmp10,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp12,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(669)
		Dynamic tmp13 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp4,tmp10,tmp7,tmp8,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(669)
		Dynamic event = tmp13;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(681)
		bool tmp14 = this->shutting_down;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(681)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(681)
		if ((tmp15)){
			HX_STACK_LINE(683)
			::luxe::Input tmp16 = this->input;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(683)
			Dynamic tmp17 = event;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(683)
			tmp16->check_named_mouse(tmp17,null());
			HX_STACK_LINE(684)
			::luxe::Emitter tmp18 = this->emitter;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(684)
			Dynamic tmp19 = event;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(684)
			tmp18->emit((int)16,tmp19);
			HX_STACK_LINE(685)
			::luxe::Game tmp20 = this->game;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(685)
			Dynamic tmp21 = event;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(685)
			tmp20->onmouseup(tmp21);
		}
	}
return null();
}


Void Core_obj::onmousemove( int x,int y,int xrel,int yrel,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onmousemove",0x3334c500,"luxe.Core.onmousemove","luxe/Core.hx",691,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(xrel,"xrel")
		HX_STACK_ARG(yrel,"yrel")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(693)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(693)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(693)
		if ((tmp1)){
			HX_STACK_LINE(693)
			return null();
		}
		HX_STACK_LINE(696)
		::luxe::Screen tmp2 = this->screen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(696)
		::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(696)
		tmp2->cursor->set_internal(tmp3);
		HX_STACK_LINE(699)
		Float tmp4 = timestamp;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(700)
		int tmp5 = window_id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(703)
		int tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(704)
		int tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(705)
		int tmp8 = xrel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(706)
		int tmp9 = yrel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(707)
		::luxe::Screen tmp10 = this->screen;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(707)
		::phoenix::Vector tmp11 = tmp10->cursor->get_pos();		HX_STACK_VAR(tmp11,"tmp11");
		struct _Function_1_1{
			inline static Dynamic Block( int &tmp5,int &tmp6,int &tmp9,::phoenix::Vector &tmp11,Float &tmp4,int &tmp7,int &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",698,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp4,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , tmp5,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::move,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , (int)0,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp6,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("xrel","\xe1","\x73","\xa8","\x4f") , tmp8,false);
					__result->Add(HX_HCSTRING("yrel","\x80","\xaa","\x51","\x50") , tmp9,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp11,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(698)
		Dynamic tmp12 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp11,tmp4,tmp7,tmp8);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(698)
		Dynamic event = tmp12;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(710)
		bool tmp13 = this->shutting_down;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(710)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(710)
		if ((tmp14)){
			HX_STACK_LINE(712)
			::luxe::Emitter tmp15 = this->emitter;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(712)
			Dynamic tmp16 = event;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(712)
			tmp15->emit((int)17,tmp16);
			HX_STACK_LINE(713)
			::luxe::Game tmp17 = this->game;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(713)
			Dynamic tmp18 = event;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(713)
			tmp17->onmousemove(tmp18);
		}
	}
return null();
}


Void Core_obj::onmousewheel( int x,int y,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onmousewheel",0x584c03cc,"luxe.Core.onmousewheel","luxe/Core.hx",719,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(721)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(721)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(721)
		if ((tmp1)){
			HX_STACK_LINE(721)
			return null();
		}
		HX_STACK_LINE(724)
		Float tmp2 = timestamp;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(725)
		int tmp3 = window_id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(728)
		int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(729)
		int tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(730)
		int tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(731)
		int tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(732)
		::luxe::Screen tmp8 = this->screen;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(732)
		::phoenix::Vector tmp9 = tmp8->cursor->get_pos();		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_1{
			inline static Dynamic Block( int &tmp5,int &tmp6,::phoenix::Vector &tmp9,int &tmp4,Float &tmp2,int &tmp3,int &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",723,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp2,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , tmp3,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::wheel,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , (int)0,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp4,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp5,false);
					__result->Add(HX_HCSTRING("xrel","\xe1","\x73","\xa8","\x4f") , tmp6,false);
					__result->Add(HX_HCSTRING("yrel","\x80","\xaa","\x51","\x50") , tmp7,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp9,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(723)
		Dynamic tmp10 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp4,tmp2,tmp3,tmp7);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(723)
		Dynamic event = tmp10;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(735)
		bool tmp11 = this->shutting_down;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(735)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(735)
		if ((tmp12)){
			HX_STACK_LINE(737)
			::luxe::Input tmp13 = this->input;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(737)
			Dynamic tmp14 = event;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(737)
			tmp13->check_named_mouse(tmp14,false);
			HX_STACK_LINE(738)
			::luxe::Emitter tmp15 = this->emitter;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(738)
			Dynamic tmp16 = event;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(738)
			tmp15->emit((int)18,tmp16);
			HX_STACK_LINE(739)
			::luxe::Game tmp17 = this->game;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(739)
			Dynamic tmp18 = event;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(739)
			tmp17->onmousewheel(tmp18);
		}
	}
return null();
}


Void Core_obj::ontouchdown( Float x,Float y,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ontouchdown",0x4659b0eb,"luxe.Core.ontouchdown","luxe/Core.hx",749,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(751)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(751)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(751)
		if ((tmp1)){
			HX_STACK_LINE(751)
			return null();
		}
		HX_STACK_LINE(753)
		::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(753)
		this->_touch_pos = tmp2;
		HX_STACK_LINE(757)
		Float tmp3 = timestamp;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(758)
		int tmp4 = touch_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(759)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(760)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(761)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(762)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(763)
		::phoenix::Vector tmp9 = this->_touch_pos;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp5,Float &tmp6,::phoenix::Vector &tmp9,int &tmp4,Float &tmp3,Float &tmp7,Float &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",755,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::down,false);
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp3,false);
					__result->Add(HX_HCSTRING("touch_id","\x9b","\x7b","\x1d","\x00") , tmp4,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp5,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp6,false);
					__result->Add(HX_HCSTRING("dx","\x94","\x57","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("dy","\x95","\x57","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp9,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(755)
		Dynamic tmp10 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp4,tmp3,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(755)
		Dynamic event = tmp10;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(766)
		bool tmp11 = this->shutting_down;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(766)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(766)
		if ((tmp12)){
			HX_STACK_LINE(768)
			::luxe::Emitter tmp13 = this->emitter;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(768)
			Dynamic tmp14 = event;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(768)
			tmp13->emit((int)19,tmp14);
			HX_STACK_LINE(770)
			::luxe::Game tmp15 = this->game;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(770)
			Dynamic tmp16 = event;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(770)
			tmp15->ontouchdown(tmp16);
		}
	}
return null();
}


Void Core_obj::ontouchup( Float x,Float y,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ontouchup",0x0837baa4,"luxe.Core.ontouchup","luxe/Core.hx",792,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(794)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(794)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(794)
		if ((tmp1)){
			HX_STACK_LINE(794)
			return null();
		}
		HX_STACK_LINE(796)
		::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(796)
		this->_touch_pos = tmp2;
		HX_STACK_LINE(800)
		Float tmp3 = timestamp;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(801)
		int tmp4 = touch_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(802)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(803)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(804)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(805)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(806)
		::phoenix::Vector tmp9 = this->_touch_pos;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp5,Float &tmp6,::phoenix::Vector &tmp9,int &tmp4,Float &tmp3,Float &tmp7,Float &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",798,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::up,false);
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp3,false);
					__result->Add(HX_HCSTRING("touch_id","\x9b","\x7b","\x1d","\x00") , tmp4,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp5,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp6,false);
					__result->Add(HX_HCSTRING("dx","\x94","\x57","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("dy","\x95","\x57","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp9,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(798)
		Dynamic tmp10 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp4,tmp3,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(798)
		Dynamic event = tmp10;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(809)
		bool tmp11 = this->shutting_down;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(809)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(809)
		if ((tmp12)){
			HX_STACK_LINE(811)
			::luxe::Emitter tmp13 = this->emitter;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(811)
			Dynamic tmp14 = event;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(811)
			tmp13->emit((int)20,tmp14);
			HX_STACK_LINE(812)
			::luxe::Game tmp15 = this->game;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(812)
			Dynamic tmp16 = event;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(812)
			tmp15->ontouchup(tmp16);
		}
	}
return null();
}


Void Core_obj::ontouchmove( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ontouchmove",0x4c4c9b9a,"luxe.Core.ontouchmove","luxe/Core.hx",818,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(820)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(820)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(820)
		if ((tmp1)){
			HX_STACK_LINE(820)
			return null();
		}
		HX_STACK_LINE(822)
		::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(822)
		this->_touch_pos = tmp2;
		HX_STACK_LINE(826)
		Float tmp3 = timestamp;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(827)
		int tmp4 = touch_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(828)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(829)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(830)
		Float tmp7 = dx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(831)
		Float tmp8 = dy;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(832)
		::phoenix::Vector tmp9 = this->_touch_pos;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp5,Float &tmp6,::phoenix::Vector &tmp9,int &tmp4,Float &tmp3,Float &tmp7,Float &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",824,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::move,false);
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp3,false);
					__result->Add(HX_HCSTRING("touch_id","\x9b","\x7b","\x1d","\x00") , tmp4,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp5,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp6,false);
					__result->Add(HX_HCSTRING("dx","\x94","\x57","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("dy","\x95","\x57","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp9,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(824)
		Dynamic tmp10 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp4,tmp3,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(824)
		Dynamic event = tmp10;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(835)
		bool tmp11 = this->shutting_down;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(835)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(835)
		if ((tmp12)){
			HX_STACK_LINE(837)
			::luxe::Emitter tmp13 = this->emitter;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(837)
			Dynamic tmp14 = event;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(837)
			tmp13->emit((int)21,tmp14);
			HX_STACK_LINE(838)
			::luxe::Game tmp15 = this->game;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(838)
			Dynamic tmp16 = event;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(838)
			tmp15->ontouchmove(tmp16);
		}
	}
return null();
}


Void Core_obj::ongamepadaxis( int gamepad,int axis,Float value,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ongamepadaxis",0x56021d8c,"luxe.Core.ongamepadaxis","luxe/Core.hx",846,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(848)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(848)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(848)
		if ((tmp1)){
			HX_STACK_LINE(848)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( int &axis,Float &timestamp,Float &value,int &gamepad){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",850,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , timestamp,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::luxe::GamepadEventType_obj::axis,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::axis,false);
					__result->Add(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89") , gamepad,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , (int)-1,false);
					__result->Add(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40") , axis,false);
					__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , value,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(850)
		Dynamic tmp2 = _Function_1_1::Block(axis,timestamp,value,gamepad);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(850)
		Dynamic event = tmp2;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(860)
		bool tmp3 = this->shutting_down;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(860)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(860)
		if ((tmp4)){
			HX_STACK_LINE(862)
			::luxe::Emitter tmp5 = this->emitter;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(862)
			Dynamic tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(862)
			tmp5->emit((int)22,tmp6);
			HX_STACK_LINE(863)
			::luxe::Game tmp7 = this->game;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(863)
			Dynamic tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(863)
			tmp7->ongamepadaxis(tmp8);
		}
	}
return null();
}


Void Core_obj::ongamepaddown( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ongamepaddown",0x57f6f94d,"luxe.Core.ongamepaddown","luxe/Core.hx",869,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(871)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(871)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(871)
		if ((tmp1)){
			HX_STACK_LINE(871)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,int &button,Float &value,int &gamepad){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",873,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , timestamp,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::luxe::GamepadEventType_obj::button,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::down,false);
					__result->Add(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89") , gamepad,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , button,false);
					__result->Add(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40") , (int)-1,false);
					__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , value,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(873)
		Dynamic tmp2 = _Function_1_1::Block(timestamp,button,value,gamepad);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(873)
		Dynamic event = tmp2;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(883)
		bool tmp3 = this->shutting_down;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(883)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(883)
		if ((tmp4)){
			HX_STACK_LINE(885)
			::luxe::Input tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(885)
			Dynamic tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(885)
			tmp5->check_named_gamepad_buttons(tmp6,true);
			HX_STACK_LINE(886)
			::luxe::Emitter tmp7 = this->emitter;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(886)
			Dynamic tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(886)
			tmp7->emit((int)23,tmp8);
			HX_STACK_LINE(887)
			::luxe::Game tmp9 = this->game;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(887)
			Dynamic tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(887)
			tmp9->ongamepaddown(tmp10);
		}
	}
return null();
}


Void Core_obj::ongamepadup( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ongamepadup",0x8890c686,"luxe.Core.ongamepadup","luxe/Core.hx",893,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(895)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(895)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(895)
		if ((tmp1)){
			HX_STACK_LINE(895)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,int &button,Float &value,int &gamepad){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",897,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , timestamp,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::luxe::GamepadEventType_obj::button,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::up,false);
					__result->Add(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89") , gamepad,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , button,false);
					__result->Add(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40") , (int)-1,false);
					__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , value,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(897)
		Dynamic tmp2 = _Function_1_1::Block(timestamp,button,value,gamepad);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(897)
		Dynamic event = tmp2;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(907)
		bool tmp3 = this->shutting_down;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(907)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(907)
		if ((tmp4)){
			HX_STACK_LINE(909)
			::luxe::Input tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(909)
			Dynamic tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(909)
			tmp5->check_named_gamepad_buttons(tmp6,false);
			HX_STACK_LINE(910)
			::luxe::Emitter tmp7 = this->emitter;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(910)
			Dynamic tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(910)
			tmp7->emit((int)24,tmp8);
			HX_STACK_LINE(911)
			::luxe::Game tmp9 = this->game;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(911)
			Dynamic tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(911)
			tmp9->ongamepadup(tmp10);
		}
	}
return null();
}


Void Core_obj::ongamepaddevice( int gamepad,int type,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ongamepaddevice",0xbbf32e41,"luxe.Core.ongamepaddevice","luxe/Core.hx",917,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(919)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(919)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(919)
		if ((tmp1)){
			HX_STACK_LINE(919)
			return null();
		}
		HX_STACK_LINE(921)
		::luxe::GamepadEventType _event_type = ::luxe::GamepadEventType_obj::unknown;		HX_STACK_VAR(_event_type,"_event_type");
		HX_STACK_LINE(923)
		int tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(923)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(925)
				_event_type = ::luxe::GamepadEventType_obj::device_added;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(927)
				_event_type = ::luxe::GamepadEventType_obj::device_removed;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(929)
				_event_type = ::luxe::GamepadEventType_obj::device_remapped;
			}
			;break;
			default: {
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,::luxe::GamepadEventType &_event_type,int &gamepad){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",933,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , timestamp,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , _event_type,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::none,false);
					__result->Add(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89") , gamepad,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , (int)-1,false);
					__result->Add(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40") , (int)-1,false);
					__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , ((Float)((int)0)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(933)
		Dynamic tmp3 = _Function_1_1::Block(timestamp,_event_type,gamepad);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(933)
		Dynamic event = tmp3;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(943)
		bool tmp4 = this->shutting_down;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(943)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(943)
		if ((tmp5)){
			HX_STACK_LINE(945)
			::luxe::Game tmp6 = this->game;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(945)
			Dynamic tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(945)
			tmp6->ongamepaddevice(tmp7);
		}
	}
return null();
}


Dynamic Core_obj::config( Dynamic config){
	HX_STACK_FRAME("luxe.Core","config",0x917d2919,"luxe.Core.config","luxe/Core.hx",952,0xa921e806)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(955)
	this->appconfig = config;
	HX_STACK_LINE(958)
	Dynamic tmp = this->init_config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(958)
	Dynamic tmp1 = tmp->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(958)
	Dynamic tmp2 = this->appconfig;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(958)
	tmp2->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp1;
	HX_STACK_LINE(959)
	Dynamic tmp3 = this->init_config;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(959)
	Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(959)
	Dynamic tmp5 = this->appconfig;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(959)
	tmp5->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp4;
	HX_STACK_LINE(960)
	Dynamic tmp6 = this->init_config;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(960)
	Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__Field(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(960)
	Dynamic tmp8 = this->appconfig;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(960)
	tmp8->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")) = tmp7;
	HX_STACK_LINE(961)
	Dynamic tmp9 = this->init_config;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(961)
	Dynamic tmp10 = tmp9->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__Field(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(961)
	Dynamic tmp11 = this->appconfig;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(961)
	tmp11->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17")) = tmp10;
	HX_STACK_LINE(962)
	Dynamic tmp12 = this->init_config;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(962)
	Dynamic tmp13 = tmp12->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__Field(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(962)
	Dynamic tmp14 = this->appconfig;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(962)
	tmp14->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9")) = tmp13;
	HX_STACK_LINE(963)
	Dynamic tmp15 = this->init_config;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(963)
	::String tmp16 = tmp15->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(963)
	Dynamic tmp17 = this->appconfig;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(963)
	tmp17->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("title","\x98","\x15","\x3b","\x10")) = tmp16;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",965,0xa921e806)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32") , cpp::ArrayBase_obj::__new(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(965)
	Dynamic tmp18 = _Function_1_1::Block();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(965)
	Dynamic tmp19 = this->appconfig;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(965)
	tmp19->__FieldRef(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35")) = tmp18;
	HX_STACK_LINE(976)
	::luxe::Game tmp20 = this->game;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(976)
	Dynamic tmp21 = this->appconfig;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(976)
	Dynamic tmp22 = tmp20->config(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(976)
	this->appconfig = tmp22;
	HX_STACK_LINE(979)
	Dynamic tmp23 = this->appconfig;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(979)
	Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(979)
	return tmp24;
}



Core_obj::Core_obj()
{
}

void Core_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Core);
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_MEMBER_NAME(appconfig,"appconfig");
	HX_MARK_MEMBER_NAME(console_visible,"console_visible");
	HX_MARK_MEMBER_NAME(headless,"headless");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_MEMBER_NAME(debug,"debug");
	HX_MARK_MEMBER_NAME(io,"io");
	HX_MARK_MEMBER_NAME(draw,"draw");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(audio,"audio");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(resources,"resources");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_MEMBER_NAME(physics,"physics");
	HX_MARK_MEMBER_NAME(shutting_down,"shutting_down");
	HX_MARK_MEMBER_NAME(has_shutdown,"has_shutdown");
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(init_config,"init_config");
	HX_MARK_MEMBER_NAME(_touch_pos,"_touch_pos");
	::snow::App_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Core_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(game,"game");
	HX_VISIT_MEMBER_NAME(appconfig,"appconfig");
	HX_VISIT_MEMBER_NAME(console_visible,"console_visible");
	HX_VISIT_MEMBER_NAME(headless,"headless");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
	HX_VISIT_MEMBER_NAME(debug,"debug");
	HX_VISIT_MEMBER_NAME(io,"io");
	HX_VISIT_MEMBER_NAME(draw,"draw");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(audio,"audio");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(resources,"resources");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(screen,"screen");
	HX_VISIT_MEMBER_NAME(physics,"physics");
	HX_VISIT_MEMBER_NAME(shutting_down,"shutting_down");
	HX_VISIT_MEMBER_NAME(has_shutdown,"has_shutdown");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(init_config,"init_config");
	HX_VISIT_MEMBER_NAME(_touch_pos,"_touch_pos");
	::snow::App_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Core_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { return io; }
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"audio") ) { return audio; }
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return events; }
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter; }
		if (HX_FIELD_EQ(inName,"physics") ) { return physics; }
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"headless") ) { return headless; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"appconfig") ) { return appconfig; }
		if (HX_FIELD_EQ(inName,"resources") ) { return resources; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputup") ) { return oninputup_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_touch_pos") ) { return _touch_pos; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"init_config") ) { return init_config; }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputdown") ) { return oninputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_shutdown") ) { return has_shutdown; }
		if (HX_FIELD_EQ(inName,"window_event") ) { return window_event_dyn(); }
		if (HX_FIELD_EQ(inName,"show_console") ) { return show_console_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shutting_down") ) { return shutting_down; }
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"internal_ready") ) { return internal_ready_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"console_visible") ) { return console_visible; }
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"internal_pre_ready") ) { return internal_pre_ready_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Core_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { io=inValue.Cast< ::luxe::IO >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::luxe::Game >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draw") ) { draw=inValue.Cast< ::luxe::Draw >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< ::luxe::Debug >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::luxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::luxe::Input >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audio") ) { audio=inValue.Cast< ::luxe::Audio >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::luxe::Scene >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::luxe::Events >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::luxe::Screen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast< ::luxe::Emitter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"physics") ) { physics=inValue.Cast< ::luxe::Physics >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"headless") ) { headless=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::phoenix::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"appconfig") ) { appconfig=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resources") ) { resources=inValue.Cast< ::luxe::Resources >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_touch_pos") ) { _touch_pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"init_config") ) { init_config=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_shutdown") ) { has_shutdown=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shutting_down") ) { shutting_down=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"console_visible") ) { console_visible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Core_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Core_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"));
	outFields->push(HX_HCSTRING("appconfig","\x23","\x02","\xc1","\xec"));
	outFields->push(HX_HCSTRING("console_visible","\x4a","\x6c","\x20","\x9e"));
	outFields->push(HX_HCSTRING("headless","\x79","\x4c","\xd6","\x48"));
	outFields->push(HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"));
	outFields->push(HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"));
	outFields->push(HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	outFields->push(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"));
	outFields->push(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"));
	outFields->push(HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"));
	outFields->push(HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe"));
	outFields->push(HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20"));
	outFields->push(HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e"));
	outFields->push(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"));
	outFields->push(HX_HCSTRING("init_config","\x51","\xaf","\x62","\x21"));
	outFields->push(HX_HCSTRING("_touch_pos","\x95","\x81","\x56","\x75"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Game*/ ,(int)offsetof(Core_obj,game),HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Core_obj,appconfig),HX_HCSTRING("appconfig","\x23","\x02","\xc1","\xec")},
	{hx::fsBool,(int)offsetof(Core_obj,console_visible),HX_HCSTRING("console_visible","\x4a","\x6c","\x20","\x9e")},
	{hx::fsBool,(int)offsetof(Core_obj,headless),HX_HCSTRING("headless","\x79","\x4c","\xd6","\x48")},
	{hx::fsObject /*::luxe::Emitter*/ ,(int)offsetof(Core_obj,emitter),HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe")},
	{hx::fsObject /*::luxe::Debug*/ ,(int)offsetof(Core_obj,debug),HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7")},
	{hx::fsObject /*::luxe::IO*/ ,(int)offsetof(Core_obj,io),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00")},
	{hx::fsObject /*::luxe::Draw*/ ,(int)offsetof(Core_obj,draw),HX_HCSTRING("draw","\x04","\x2c","\x70","\x42")},
	{hx::fsObject /*::luxe::Timer*/ ,(int)offsetof(Core_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsObject /*::luxe::Events*/ ,(int)offsetof(Core_obj,events),HX_HCSTRING("events","\x19","\x4f","\x6a","\x96")},
	{hx::fsObject /*::luxe::Input*/ ,(int)offsetof(Core_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::luxe::Audio*/ ,(int)offsetof(Core_obj,audio),HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{hx::fsObject /*::luxe::Scene*/ ,(int)offsetof(Core_obj,scene),HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78")},
	{hx::fsObject /*::luxe::Resources*/ ,(int)offsetof(Core_obj,resources),HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39")},
	{hx::fsObject /*::phoenix::Renderer*/ ,(int)offsetof(Core_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*::luxe::Screen*/ ,(int)offsetof(Core_obj,screen),HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47")},
	{hx::fsObject /*::luxe::Physics*/ ,(int)offsetof(Core_obj,physics),HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe")},
	{hx::fsBool,(int)offsetof(Core_obj,shutting_down),HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20")},
	{hx::fsBool,(int)offsetof(Core_obj,has_shutdown),HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e")},
	{hx::fsBool,(int)offsetof(Core_obj,inited),HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Core_obj,init_config),HX_HCSTRING("init_config","\x51","\xaf","\x62","\x21")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Core_obj,_touch_pos),HX_HCSTRING("_touch_pos","\x95","\x81","\x56","\x75")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"),
	HX_HCSTRING("appconfig","\x23","\x02","\xc1","\xec"),
	HX_HCSTRING("console_visible","\x4a","\x6c","\x20","\x9e"),
	HX_HCSTRING("headless","\x79","\x4c","\xd6","\x48"),
	HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"),
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"),
	HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"),
	HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe"),
	HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20"),
	HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e"),
	HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"),
	HX_HCSTRING("init_config","\x51","\xaf","\x62","\x21"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("internal_pre_ready","\x45","\xb5","\x6d","\x32"),
	HX_HCSTRING("internal_ready","\xa1","\xda","\xfc","\xd2"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("window_event","\x4b","\x37","\x88","\x04"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("show_console","\xd5","\xde","\x69","\xa4"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("ontextinput","\x3e","\xe7","\x4d","\x44"),
	HX_HCSTRING("oninputdown","\x6d","\x8c","\x2f","\x9f"),
	HX_HCSTRING("oninputup","\xa6","\x51","\x78","\xde"),
	HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"),
	HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("_touch_pos","\x95","\x81","\x56","\x75"),
	HX_HCSTRING("ontouchdown","\xa2","\x5e","\x71","\x9d"),
	HX_HCSTRING("ontouchup","\x9b","\xbc","\x51","\xe3"),
	HX_HCSTRING("ontouchmove","\x51","\x49","\x64","\xa3"),
	HX_HCSTRING("ongamepadaxis","\x03","\xe7","\xa9","\x64"),
	HX_HCSTRING("ongamepaddown","\xc4","\xc2","\x9e","\x66"),
	HX_HCSTRING("ongamepadup","\x3d","\x74","\xa8","\xdf"),
	HX_HCSTRING("ongamepaddevice","\x78","\x83","\x39","\x9b"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Core_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Core_obj::__mClass,"__mClass");
};

#endif

hx::Class Core_obj::__mClass;

void Core_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Core_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Core_obj >;
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

} // end namespace luxe
