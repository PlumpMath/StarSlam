#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_InputType
#include <luxe/InputType.h>
#endif
#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_system_input_Input
#include <snow/system/input/Input.h>
#endif
namespace luxe{

Void Input_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("luxe.Input","new",0xd5d5d724,"luxe.Input.new","luxe/Input.hx",223,0x19edc1cd)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(223)
	this->core = _core;
}
;
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(_core);
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Input_obj::init( ){
{
		HX_STACK_FRAME("luxe.Input","init",0x41ff1fcc,"luxe.Input.init","luxe/Input.hx",233,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(235)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(235)
			tmp = tmp2;
		}
		HX_STACK_LINE(235)
		this->key_bindings = tmp;
		HX_STACK_LINE(236)
		::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(236)
			::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(236)
			tmp1 = tmp3;
		}
		HX_STACK_LINE(236)
		this->mouse_bindings = tmp1;
		HX_STACK_LINE(237)
		::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(237)
			::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(237)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(237)
		this->gamepad_bindings = tmp2;
		HX_STACK_LINE(239)
		::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(239)
			::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(239)
			tmp3 = tmp5;
		}
		HX_STACK_LINE(239)
		this->_named_input_down = tmp3;
		HX_STACK_LINE(240)
		::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(240)
			::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(240)
			::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(240)
			tmp4 = tmp6;
		}
		HX_STACK_LINE(240)
		this->_named_input_pressed = tmp4;
		HX_STACK_LINE(241)
		::haxe::ds::StringMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			::haxe::ds::StringMap tmp6 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(241)
			::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(241)
			tmp5 = tmp7;
		}
		HX_STACK_LINE(241)
		this->_named_input_released = tmp5;
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,init,(void))

Void Input_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Input","destroy",0x250ce5be,"luxe.Input.destroy","luxe/Log.hx",138,0xe5312153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,destroy,(void))

Void Input_obj::process( ){
{
		HX_STACK_FRAME("luxe.Input","process",0xf1d15b33,"luxe.Input.process","luxe/Input.hx",251,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(256)
		::haxe::ds::StringMap tmp = this->_named_input_pressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String _event = __it->next();
			{
				HX_STACK_LINE(258)
				::haxe::ds::StringMap tmp2 = this->_named_input_pressed;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(258)
				::String tmp3 = _event;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(258)
				Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(258)
				Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(258)
				if ((tmp5)){
					HX_STACK_LINE(259)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(259)
					::String tmp7 = _event;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(259)
					tmp6->remove(tmp7);
				}
				else{
					HX_STACK_LINE(261)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(261)
					::String tmp7 = _event;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(261)
					tmp6->set(tmp7,true);
				}
			}
;
		}
		HX_STACK_LINE(269)
		::haxe::ds::StringMap tmp2 = this->_named_input_released;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(269)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(269)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
			::String _event = __it->next();
			{
				HX_STACK_LINE(271)
				::haxe::ds::StringMap tmp4 = this->_named_input_released;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(271)
				::String tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(271)
				Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(271)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(271)
				if ((tmp7)){
					HX_STACK_LINE(272)
					::haxe::ds::StringMap tmp8 = this->_named_input_released;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					::String tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					tmp8->remove(tmp9);
				}
				else{
					HX_STACK_LINE(274)
					::haxe::ds::StringMap tmp8 = this->_named_input_released;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(274)
					::String tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(274)
					tmp8->set(tmp9,true);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,process,(void))

bool Input_obj::inputpressed( ::String _event){
	HX_STACK_FRAME("luxe.Input","inputpressed",0x66d30494,"luxe.Input.inputpressed","luxe/Input.hx",284,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(285)
	::haxe::ds::StringMap tmp = this->_named_input_pressed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	::String tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(285)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,inputpressed,return )

bool Input_obj::inputreleased( ::String _event){
	HX_STACK_FRAME("luxe.Input","inputreleased",0x98a70a8b,"luxe.Input.inputreleased","luxe/Input.hx",289,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(290)
	::haxe::ds::StringMap tmp = this->_named_input_released;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	::String tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(290)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(290)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,inputreleased,return )

bool Input_obj::inputdown( ::String _event){
	HX_STACK_FRAME("luxe.Input","inputdown",0x58f8fb30,"luxe.Input.inputdown","luxe/Input.hx",294,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(295)
	::haxe::ds::StringMap tmp = this->_named_input_down;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	::String tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(295)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,inputdown,return )

bool Input_obj::keypressed( int _code){
	HX_STACK_FRAME("luxe.Input","keypressed",0x9327649f,"luxe.Input.keypressed","luxe/Input.hx",301,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(302)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(302)
	::snow::_system::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(302)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(302)
	bool tmp3 = tmp1->__Field(HX_HCSTRING("keypressed","\xe3","\x4a","\x1d","\xdb"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(302)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keypressed,return )

bool Input_obj::keyreleased( int _code){
	HX_STACK_FRAME("luxe.Input","keyreleased",0x3626b420,"luxe.Input.keyreleased","luxe/Input.hx",306,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(307)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	::snow::_system::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(307)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(307)
	bool tmp3 = tmp1->__Field(HX_HCSTRING("keyreleased","\x5c","\x49","\x5a","\xe5"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(307)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keyreleased,return )

bool Input_obj::keydown( int _code){
	HX_STACK_FRAME("luxe.Input","keydown",0xb1f4f645,"luxe.Input.keydown","luxe/Input.hx",311,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(312)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(312)
	::snow::_system::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(312)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(312)
	bool tmp3 = tmp1->__Field(HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(312)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keydown,return )

bool Input_obj::scanpressed( int _code){
	HX_STACK_FRAME("luxe.Input","scanpressed",0x4c8f9989,"luxe.Input.scanpressed","luxe/Input.hx",317,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(318)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	::snow::_system::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(318)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(318)
	bool tmp3 = tmp1->__Field(HX_HCSTRING("scanpressed","\xc5","\x2e","\xc3","\xfb"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(318)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scanpressed,return )

bool Input_obj::scanreleased( int _code){
	HX_STACK_FRAME("luxe.Input","scanreleased",0xb7eccbf6,"luxe.Input.scanreleased","luxe/Input.hx",322,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(323)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(323)
	::snow::_system::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(323)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(323)
	bool tmp3 = tmp1->__Field(HX_HCSTRING("scanreleased","\x3a","\xcb","\xdb","\x55"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(323)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scanreleased,return )

bool Input_obj::scandown( int _code){
	HX_STACK_FRAME("luxe.Input","scandown",0x9cf0eb1b,"luxe.Input.scandown","luxe/Input.hx",327,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(328)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	::snow::_system::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(328)
	bool tmp3 = tmp1->__Field(HX_HCSTRING("scandown","\x5f","\xf8","\x95","\x27"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(328)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scandown,return )

bool Input_obj::mousepressed( int _button){
	HX_STACK_FRAME("luxe.Input","mousepressed",0xb04bfbd9,"luxe.Input.mousepressed","luxe/Input.hx",334,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(335)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(335)
	::snow::_system::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(335)
	int tmp2 = _button;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(335)
	bool tmp3 = tmp1->__Field(HX_HCSTRING("mousepressed","\x1d","\xfb","\x3a","\x4e"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(335)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousepressed,return )

bool Input_obj::mousereleased( int _button){
	HX_STACK_FRAME("luxe.Input","mousereleased",0x99066fa6,"luxe.Input.mousereleased","luxe/Input.hx",339,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(340)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	::snow::_system::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(340)
	int tmp2 = _button;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(340)
	bool tmp3 = tmp1->__Field(HX_HCSTRING("mousereleased","\xe2","\xcb","\x36","\x2c"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(340)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousereleased,return )

bool Input_obj::mousedown( int _button){
	HX_STACK_FRAME("luxe.Input","mousedown",0x3e22f6cb,"luxe.Input.mousedown","luxe/Input.hx",344,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(345)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	::snow::_system::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(345)
	int tmp2 = _button;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(345)
	bool tmp3 = tmp1->__Field(HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(345)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousedown,return )

bool Input_obj::gamepadpressed( int _gamepad,int _button){
	HX_STACK_FRAME("luxe.Input","gamepadpressed",0x00765fdd,"luxe.Input.gamepadpressed","luxe/Input.hx",351,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(352)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(352)
	::snow::_system::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(352)
	int tmp2 = _gamepad;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(352)
	int tmp3 = _button;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(352)
	bool tmp4 = tmp1->__Field(HX_HCSTRING("gamepadpressed","\x21","\xb8","\x96","\x37"), hx::paccDynamic )(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(352)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadpressed,return )

bool Input_obj::gamepadreleased( int _gamepad,int _button){
	HX_STACK_FRAME("luxe.Input","gamepadreleased",0x6df38f22,"luxe.Input.gamepadreleased","luxe/Input.hx",356,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(357)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(357)
	::snow::_system::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(357)
	int tmp2 = _gamepad;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(357)
	int tmp3 = _button;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(357)
	bool tmp4 = tmp1->__Field(HX_HCSTRING("gamepadreleased","\x5e","\x72","\x20","\x73"), hx::paccDynamic )(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(357)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadreleased,return )

bool Input_obj::gamepaddown( int _gamepad,int _button){
	HX_STACK_FRAME("luxe.Input","gamepaddown",0x38b3a847,"luxe.Input.gamepaddown","luxe/Input.hx",361,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(362)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	::snow::_system::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	int tmp2 = _gamepad;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(362)
	int tmp3 = _button;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(362)
	bool tmp4 = tmp1->__Field(HX_HCSTRING("gamepaddown","\x83","\x3d","\xe7","\xe7"), hx::paccDynamic )(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(362)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepaddown,return )

Float Input_obj::gamepadaxis( int _gamepad,int _axis){
	HX_STACK_FRAME("luxe.Input","gamepadaxis",0x36becc86,"luxe.Input.gamepadaxis","luxe/Input.hx",366,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_axis,"_axis")
	HX_STACK_LINE(367)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(367)
	::snow::_system::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(367)
	int tmp2 = _gamepad;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(367)
	int tmp3 = _axis;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(367)
	Float tmp4 = tmp1->__Field(HX_HCSTRING("gamepadaxis","\xc2","\x61","\xf2","\xe5"), hx::paccDynamic )(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(367)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadaxis,return )

Void Input_obj::bind_key( ::String _name,int _key){
{
		HX_STACK_FRAME("luxe.Input","bind_key",0x3768d999,"luxe.Input.bind_key","luxe/Input.hx",374,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_key,"_key")
		HX_STACK_LINE(376)
		::haxe::ds::StringMap tmp = this->key_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(376)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(376)
		if ((tmp3)){
			HX_STACK_LINE(377)
			::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(377)
			{
				HX_STACK_LINE(377)
				::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(377)
				::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(377)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(377)
			::haxe::ds::IntMap value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(377)
			::haxe::ds::StringMap tmp5 = this->key_bindings;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(377)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(377)
			::haxe::ds::IntMap tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(377)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(380)
		::haxe::ds::StringMap tmp4 = this->key_bindings;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(380)
		::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(380)
		::haxe::ds::IntMap tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(380)
		::haxe::ds::IntMap kb = tmp6;		HX_STACK_VAR(kb,"kb");
		HX_STACK_LINE(381)
		int tmp7 = _key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(381)
		kb->set(tmp7,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,bind_key,(void))

Void Input_obj::bind_mouse( ::String _name,int _button){
{
		HX_STACK_FRAME("luxe.Input","bind_mouse",0xb3ebd89f,"luxe.Input.bind_mouse","luxe/Input.hx",386,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_LINE(388)
		::haxe::ds::StringMap tmp = this->mouse_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(388)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(388)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(388)
		if ((tmp3)){
			HX_STACK_LINE(389)
			::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(389)
			{
				HX_STACK_LINE(389)
				::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(389)
				::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(389)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(389)
			::haxe::ds::IntMap value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(389)
			::haxe::ds::StringMap tmp5 = this->mouse_bindings;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(389)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(389)
			::haxe::ds::IntMap tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(389)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(392)
		::haxe::ds::StringMap tmp4 = this->mouse_bindings;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(392)
		::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(392)
		::haxe::ds::IntMap tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(392)
		::haxe::ds::IntMap mb = tmp6;		HX_STACK_VAR(mb,"mb");
		HX_STACK_LINE(393)
		int tmp7 = _button;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(393)
		mb->set(tmp7,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,bind_mouse,(void))

Void Input_obj::bind_gamepad( ::String _name,int _gamepad_button,Dynamic _gamepad_id){
{
		HX_STACK_FRAME("luxe.Input","bind_gamepad",0x321db59b,"luxe.Input.bind_gamepad","luxe/Input.hx",398,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_gamepad_button,"_gamepad_button")
		HX_STACK_ARG(_gamepad_id,"_gamepad_id")
		HX_STACK_LINE(399)
		::haxe::ds::StringMap tmp = this->gamepad_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(399)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(399)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(399)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(399)
		if ((tmp3)){
			HX_STACK_LINE(400)
			::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(400)
			{
				HX_STACK_LINE(400)
				::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(400)
				::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(400)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(400)
			::haxe::ds::IntMap value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(400)
			::haxe::ds::StringMap tmp5 = this->gamepad_bindings;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(400)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(400)
			::haxe::ds::IntMap tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(400)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(403)
		::haxe::ds::StringMap tmp4 = this->gamepad_bindings;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(403)
		::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(403)
		::haxe::ds::IntMap tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(403)
		::haxe::ds::IntMap gp = tmp6;		HX_STACK_VAR(gp,"gp");
		HX_STACK_LINE(404)
		int tmp7 = _gamepad_button;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(404)
		Dynamic tmp8 = _gamepad_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(404)
		gp->set(tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,bind_gamepad,(void))

Void Input_obj::check_named_keys( Dynamic e,hx::Null< bool >  __o__down){
bool _down = __o__down.Default(false);
	HX_STACK_FRAME("luxe.Input","check_named_keys",0x66d0b78d,"luxe.Input.check_named_keys","luxe/Input.hx",407,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(_down,"_down")
{
		HX_STACK_LINE(409)
		Array< ::String > _fired = Array_obj< ::String >::__new();		HX_STACK_VAR(_fired,"_fired");
		HX_STACK_LINE(410)
		::haxe::ds::StringMap tmp = this->key_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(410)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(410)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String _name = __it->next();
			{
				HX_STACK_LINE(412)
				::haxe::ds::StringMap tmp2 = this->key_bindings;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(412)
				::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(412)
				::haxe::ds::IntMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(412)
				::haxe::ds::IntMap _b = tmp4;		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(413)
				bool tmp5 = _down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(413)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(413)
				if ((tmp5)){
					HX_STACK_LINE(413)
					tmp6 = e->__Field(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"), hx::paccDynamic );
				}
				else{
					HX_STACK_LINE(413)
					tmp6 = false;
				}
				HX_STACK_LINE(413)
				bool _is_down_repeat = tmp6;		HX_STACK_VAR(_is_down_repeat,"_is_down_repeat");
				HX_STACK_LINE(414)
				int tmp7 = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(414)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(414)
				bool tmp9 = _b->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(414)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(414)
				if ((tmp9)){
					HX_STACK_LINE(414)
					bool tmp11 = _is_down_repeat;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(414)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(414)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(414)
					tmp10 = false;
				}
				HX_STACK_LINE(414)
				if ((tmp10)){
					HX_STACK_LINE(415)
					::String tmp11 = _name;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(415)
					bool tmp12 = ::Lambda_obj::has(_fired,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(415)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(415)
					if ((tmp13)){
						HX_STACK_LINE(416)
						::String tmp14 = _name;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(416)
						_fired->push(tmp14);
					}
				}
			}
;
		}
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(422)
			while((true)){
				HX_STACK_LINE(422)
				bool tmp2 = (_g < _fired->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(422)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(422)
				if ((tmp3)){
					HX_STACK_LINE(422)
					break;
				}
				HX_STACK_LINE(422)
				::String tmp4 = _fired->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(422)
				::String _f = tmp4;		HX_STACK_VAR(_f,"_f");
				HX_STACK_LINE(422)
				++(_g);
				HX_STACK_LINE(423)
				bool tmp5 = _down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(423)
				if ((tmp5)){
					HX_STACK_LINE(426)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(426)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(426)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(428)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(428)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(428)
					tmp8->set(tmp9,true);
					HX_STACK_LINE(430)
					::luxe::Core tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(430)
					::String tmp11 = _f;		HX_STACK_VAR(tmp11,"tmp11");
					struct _Function_4_1{
						inline static Dynamic Block( ::String &_f,Dynamic &e){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Input.hx",430,0x19edc1cd)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _f,false);
								__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::luxe::InputType_obj::keys,false);
								__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::down,false);
								__result->Add(HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5") , e,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(430)
					Dynamic tmp12 = _Function_4_1::Block(_f,e);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(430)
					tmp10->oninputdown(tmp11,tmp12);
				}
				else{
					HX_STACK_LINE(440)
					::haxe::ds::StringMap tmp6 = this->_named_input_released;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(440)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(440)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(442)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(442)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(442)
					tmp8->remove(tmp9);
					HX_STACK_LINE(444)
					::luxe::Core tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(444)
					::String tmp11 = _f;		HX_STACK_VAR(tmp11,"tmp11");
					struct _Function_4_1{
						inline static Dynamic Block( ::String &_f,Dynamic &e){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Input.hx",444,0x19edc1cd)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _f,false);
								__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::luxe::InputType_obj::keys,false);
								__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::up,false);
								__result->Add(HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5") , e,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(444)
					Dynamic tmp12 = _Function_4_1::Block(_f,e);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(444)
					tmp10->oninputup(tmp11,tmp12);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,check_named_keys,(void))

Void Input_obj::check_named_mouse( Dynamic e,hx::Null< bool >  __o__down){
bool _down = __o__down.Default(false);
	HX_STACK_FRAME("luxe.Input","check_named_mouse",0xbd36266c,"luxe.Input.check_named_mouse","luxe/Input.hx",456,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(_down,"_down")
{
		HX_STACK_LINE(458)
		Array< ::String > _fired = Array_obj< ::String >::__new();		HX_STACK_VAR(_fired,"_fired");
		HX_STACK_LINE(459)
		::haxe::ds::StringMap tmp = this->mouse_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(459)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(459)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String _name = __it->next();
			{
				HX_STACK_LINE(461)
				::haxe::ds::StringMap tmp2 = this->mouse_bindings;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(461)
				::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(461)
				::haxe::ds::IntMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(461)
				::haxe::ds::IntMap _b = tmp4;		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(462)
				int tmp5 = e->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(462)
				bool tmp6 = _b->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(462)
				if ((tmp6)){
					HX_STACK_LINE(463)
					::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(463)
					bool tmp8 = ::Lambda_obj::has(_fired,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(463)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(463)
					if ((tmp9)){
						HX_STACK_LINE(464)
						::String tmp10 = _name;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(464)
						_fired->push(tmp10);
					}
				}
			}
;
		}
		HX_STACK_LINE(470)
		{
			HX_STACK_LINE(470)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(470)
			while((true)){
				HX_STACK_LINE(470)
				bool tmp2 = (_g < _fired->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(470)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(470)
				if ((tmp3)){
					HX_STACK_LINE(470)
					break;
				}
				HX_STACK_LINE(470)
				::String tmp4 = _fired->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(470)
				::String _f = tmp4;		HX_STACK_VAR(_f,"_f");
				HX_STACK_LINE(470)
				++(_g);
				HX_STACK_LINE(471)
				bool tmp5 = _down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(471)
				if ((tmp5)){
					HX_STACK_LINE(474)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(474)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(474)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(476)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(476)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(476)
					tmp8->set(tmp9,true);
					HX_STACK_LINE(478)
					::luxe::Core tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(478)
					::String tmp11 = _f;		HX_STACK_VAR(tmp11,"tmp11");
					struct _Function_4_1{
						inline static Dynamic Block( ::String &_f,Dynamic &e){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Input.hx",478,0x19edc1cd)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _f,false);
								__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::luxe::InputType_obj::mouse,false);
								__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::down,false);
								__result->Add(HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32") , e,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(478)
					Dynamic tmp12 = _Function_4_1::Block(_f,e);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(478)
					tmp10->oninputdown(tmp11,tmp12);
				}
				else{
					HX_STACK_LINE(488)
					::haxe::ds::StringMap tmp6 = this->_named_input_released;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(488)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(488)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(490)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(490)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(490)
					tmp8->remove(tmp9);
					HX_STACK_LINE(492)
					::luxe::Core tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(492)
					::String tmp11 = _f;		HX_STACK_VAR(tmp11,"tmp11");
					struct _Function_4_1{
						inline static Dynamic Block( ::String &_f,Dynamic &e){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Input.hx",492,0x19edc1cd)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _f,false);
								__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::luxe::InputType_obj::mouse,false);
								__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::up,false);
								__result->Add(HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32") , e,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(492)
					Dynamic tmp12 = _Function_4_1::Block(_f,e);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(492)
					tmp10->oninputup(tmp11,tmp12);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,check_named_mouse,(void))

Void Input_obj::check_named_gamepad_buttons( Dynamic e,hx::Null< bool >  __o__down){
bool _down = __o__down.Default(false);
	HX_STACK_FRAME("luxe.Input","check_named_gamepad_buttons",0xe4db646a,"luxe.Input.check_named_gamepad_buttons","luxe/Input.hx",503,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(_down,"_down")
{
		HX_STACK_LINE(505)
		Array< ::String > _fired = Array_obj< ::String >::__new();		HX_STACK_VAR(_fired,"_fired");
		HX_STACK_LINE(506)
		::haxe::ds::StringMap tmp = this->gamepad_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(506)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(506)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String _name = __it->next();
			{
				HX_STACK_LINE(508)
				::haxe::ds::StringMap tmp2 = this->gamepad_bindings;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(508)
				::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(508)
				::haxe::ds::IntMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(508)
				::haxe::ds::IntMap _b = tmp4;		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(509)
				int tmp5 = e->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(509)
				bool tmp6 = _b->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(509)
				if ((tmp6)){
					HX_STACK_LINE(510)
					int tmp7 = e->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(510)
					Dynamic tmp8 = _b->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(510)
					Dynamic _kb = tmp8;		HX_STACK_VAR(_kb,"_kb");
					HX_STACK_LINE(511)
					bool tmp9 = (_kb == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(511)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(511)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(511)
					if ((tmp10)){
						HX_STACK_LINE(511)
						tmp11 = (_kb == e->__Field(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"), hx::paccDynamic ));
					}
					else{
						HX_STACK_LINE(511)
						tmp11 = true;
					}
					HX_STACK_LINE(511)
					bool _accepted_gamepad = tmp11;		HX_STACK_VAR(_accepted_gamepad,"_accepted_gamepad");
					HX_STACK_LINE(512)
					::String tmp12 = _name;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(512)
					bool tmp13 = ::Lambda_obj::has(_fired,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(512)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(512)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(512)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(512)
					if ((tmp15)){
						HX_STACK_LINE(512)
						tmp16 = _accepted_gamepad;
					}
					else{
						HX_STACK_LINE(512)
						tmp16 = false;
					}
					HX_STACK_LINE(512)
					if ((tmp16)){
						HX_STACK_LINE(513)
						::String tmp17 = _name;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(513)
						_fired->push(tmp17);
					}
				}
			}
;
		}
		HX_STACK_LINE(518)
		{
			HX_STACK_LINE(518)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(518)
			while((true)){
				HX_STACK_LINE(518)
				bool tmp2 = (_g < _fired->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(518)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(518)
				if ((tmp3)){
					HX_STACK_LINE(518)
					break;
				}
				HX_STACK_LINE(518)
				::String tmp4 = _fired->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(518)
				::String _f = tmp4;		HX_STACK_VAR(_f,"_f");
				HX_STACK_LINE(518)
				++(_g);
				HX_STACK_LINE(519)
				bool tmp5 = _down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(519)
				if ((tmp5)){
					HX_STACK_LINE(522)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(522)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(522)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(524)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(524)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(524)
					tmp8->set(tmp9,true);
					HX_STACK_LINE(526)
					::luxe::Core tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(526)
					::String tmp11 = _f;		HX_STACK_VAR(tmp11,"tmp11");
					struct _Function_4_1{
						inline static Dynamic Block( ::String &_f,Dynamic &e){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Input.hx",526,0x19edc1cd)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _f,false);
								__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::luxe::InputType_obj::gamepad,false);
								__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::down,false);
								__result->Add(HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b") , e,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(526)
					Dynamic tmp12 = _Function_4_1::Block(_f,e);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(526)
					tmp10->oninputdown(tmp11,tmp12);
				}
				else{
					HX_STACK_LINE(536)
					::haxe::ds::StringMap tmp6 = this->_named_input_released;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(536)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(536)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(538)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(538)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(538)
					tmp8->remove(tmp9);
					HX_STACK_LINE(540)
					::luxe::Core tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(540)
					::String tmp11 = _f;		HX_STACK_VAR(tmp11,"tmp11");
					struct _Function_4_1{
						inline static Dynamic Block( ::String &_f,Dynamic &e){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Input.hx",540,0x19edc1cd)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _f,false);
								__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::luxe::InputType_obj::gamepad,false);
								__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::up,false);
								__result->Add(HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b") , e,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(540)
					Dynamic tmp12 = _Function_4_1::Block(_f,e);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(540)
					tmp10->oninputup(tmp11,tmp12);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,check_named_gamepad_buttons,(void))


Input_obj::Input_obj()
{
}

void Input_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Input);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(key_bindings,"key_bindings");
	HX_MARK_MEMBER_NAME(mouse_bindings,"mouse_bindings");
	HX_MARK_MEMBER_NAME(gamepad_bindings,"gamepad_bindings");
	HX_MARK_MEMBER_NAME(_named_input_released,"_named_input_released");
	HX_MARK_MEMBER_NAME(_named_input_pressed,"_named_input_pressed");
	HX_MARK_MEMBER_NAME(_named_input_down,"_named_input_down");
	HX_MARK_END_CLASS();
}

void Input_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(key_bindings,"key_bindings");
	HX_VISIT_MEMBER_NAME(mouse_bindings,"mouse_bindings");
	HX_VISIT_MEMBER_NAME(gamepad_bindings,"gamepad_bindings");
	HX_VISIT_MEMBER_NAME(_named_input_released,"_named_input_released");
	HX_VISIT_MEMBER_NAME(_named_input_pressed,"_named_input_pressed");
	HX_VISIT_MEMBER_NAME(_named_input_down,"_named_input_down");
}

Dynamic Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scandown") ) { return scandown_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_key") ) { return bind_key_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inputdown") ) { return inputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keypressed") ) { return keypressed_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_mouse") ) { return bind_mouse_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyreleased") ) { return keyreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"scanpressed") ) { return scanpressed_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepaddown") ) { return gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepadaxis") ) { return gamepadaxis_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"key_bindings") ) { return key_bindings; }
		if (HX_FIELD_EQ(inName,"inputpressed") ) { return inputpressed_dyn(); }
		if (HX_FIELD_EQ(inName,"scanreleased") ) { return scanreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"mousepressed") ) { return mousepressed_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_gamepad") ) { return bind_gamepad_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inputreleased") ) { return inputreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"mousereleased") ) { return mousereleased_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouse_bindings") ) { return mouse_bindings; }
		if (HX_FIELD_EQ(inName,"gamepadpressed") ) { return gamepadpressed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"gamepadreleased") ) { return gamepadreleased_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepad_bindings") ) { return gamepad_bindings; }
		if (HX_FIELD_EQ(inName,"check_named_keys") ) { return check_named_keys_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_named_input_down") ) { return _named_input_down; }
		if (HX_FIELD_EQ(inName,"check_named_mouse") ) { return check_named_mouse_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_named_input_pressed") ) { return _named_input_pressed; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_named_input_released") ) { return _named_input_released; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"check_named_gamepad_buttons") ) { return check_named_gamepad_buttons_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"key_bindings") ) { key_bindings=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouse_bindings") ) { mouse_bindings=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepad_bindings") ) { gamepad_bindings=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_named_input_down") ) { _named_input_down=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_named_input_pressed") ) { _named_input_pressed=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_named_input_released") ) { _named_input_released=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Input_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	outFields->push(HX_HCSTRING("key_bindings","\x6e","\x13","\x38","\x46"));
	outFields->push(HX_HCSTRING("mouse_bindings","\x28","\xc6","\x4d","\x00"));
	outFields->push(HX_HCSTRING("gamepad_bindings","\x2c","\xcc","\xd5","\xc5"));
	outFields->push(HX_HCSTRING("_named_input_released","\xb7","\x45","\x2d","\x4a"));
	outFields->push(HX_HCSTRING("_named_input_pressed","\xe8","\x52","\xd1","\x13"));
	outFields->push(HX_HCSTRING("_named_input_down","\x5c","\x30","\x1f","\x6d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Input_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,key_bindings),HX_HCSTRING("key_bindings","\x6e","\x13","\x38","\x46")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,mouse_bindings),HX_HCSTRING("mouse_bindings","\x28","\xc6","\x4d","\x00")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,gamepad_bindings),HX_HCSTRING("gamepad_bindings","\x2c","\xcc","\xd5","\xc5")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,_named_input_released),HX_HCSTRING("_named_input_released","\xb7","\x45","\x2d","\x4a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,_named_input_pressed),HX_HCSTRING("_named_input_pressed","\xe8","\x52","\xd1","\x13")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,_named_input_down),HX_HCSTRING("_named_input_down","\x5c","\x30","\x1f","\x6d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("key_bindings","\x6e","\x13","\x38","\x46"),
	HX_HCSTRING("mouse_bindings","\x28","\xc6","\x4d","\x00"),
	HX_HCSTRING("gamepad_bindings","\x2c","\xcc","\xd5","\xc5"),
	HX_HCSTRING("_named_input_released","\xb7","\x45","\x2d","\x4a"),
	HX_HCSTRING("_named_input_pressed","\xe8","\x52","\xd1","\x13"),
	HX_HCSTRING("_named_input_down","\x5c","\x30","\x1f","\x6d"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("inputpressed","\xd8","\x03","\xc2","\x04"),
	HX_HCSTRING("inputreleased","\xc7","\x66","\xd7","\x2b"),
	HX_HCSTRING("inputdown","\x6c","\x89","\xbf","\x1e"),
	HX_HCSTRING("keypressed","\xe3","\x4a","\x1d","\xdb"),
	HX_HCSTRING("keyreleased","\x5c","\x49","\x5a","\xe5"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("scanpressed","\xc5","\x2e","\xc3","\xfb"),
	HX_HCSTRING("scanreleased","\x3a","\xcb","\xdb","\x55"),
	HX_HCSTRING("scandown","\x5f","\xf8","\x95","\x27"),
	HX_HCSTRING("mousepressed","\x1d","\xfb","\x3a","\x4e"),
	HX_HCSTRING("mousereleased","\xe2","\xcb","\x36","\x2c"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("gamepadpressed","\x21","\xb8","\x96","\x37"),
	HX_HCSTRING("gamepadreleased","\x5e","\x72","\x20","\x73"),
	HX_HCSTRING("gamepaddown","\x83","\x3d","\xe7","\xe7"),
	HX_HCSTRING("gamepadaxis","\xc2","\x61","\xf2","\xe5"),
	HX_HCSTRING("bind_key","\xdd","\xe6","\x0d","\xc2"),
	HX_HCSTRING("bind_mouse","\xe3","\xbe","\xe1","\xfb"),
	HX_HCSTRING("bind_gamepad","\xdf","\xb4","\x0c","\xd0"),
	HX_HCSTRING("check_named_keys","\xd1","\xa8","\xea","\xe8"),
	HX_HCSTRING("check_named_mouse","\xa8","\x50","\xcf","\x11"),
	HX_HCSTRING("check_named_gamepad_buttons","\xa6","\x31","\x6e","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Input","\x32","\xb5","\x12","\x75");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Input_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
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
