#include <hxcpp.h>

#ifndef INCLUDED_snow_core_native_input_Input
#include <snow/core/native/input/Input.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Input
#include <snow/modules/interfaces/Input.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_Input
#include <snow/modules/sdl/Input.h>
#endif
#ifndef INCLUDED_snow_system_input_Input
#include <snow/system/input/Input.h>
#endif
namespace snow{
namespace modules{
namespace sdl{

Void Input_obj::__construct(::snow::_system::input::Input _system)
{
HX_STACK_FRAME("snow.modules.sdl.Input","new",0x0c45b3d7,"snow.modules.sdl.Input.new","snow/modules/sdl/Input.hx",9,0xc2f5207c)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
{
	HX_STACK_LINE(9)
	::snow::_system::input::Input tmp = _system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	super::__construct(tmp);
}
;
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new(::snow::_system::input::Input _system)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(_system);
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Input_obj::on_event( Dynamic event){
{
		HX_STACK_FRAME("snow.modules.sdl.Input","on_event",0xbe93bee3,"snow.modules.sdl.Input.on_event","snow/modules/sdl/Input.hx",11,0xc2f5207c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(13)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13)
		this->super::on_event(tmp);
		HX_STACK_LINE(16)
		bool tmp1 = (event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) != (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		if ((tmp1)){
			HX_STACK_LINE(17)
			return null();
		}
		HX_STACK_LINE(20)
		Dynamic _event = event->__Field(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"), hx::paccDynamic );		HX_STACK_VAR(_event,"_event");
		HX_STACK_LINE(24)
		bool tmp2 = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		if ((tmp2)){
			HX_STACK_LINE(26)
			Dynamic _key_event = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(_key_event,"_key_event");
			HX_STACK_LINE(28)
			bool tmp3 = (_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)768);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(28)
			if ((tmp3)){
				HX_STACK_LINE(30)
				::snow::_system::input::Input tmp4 = this->_system;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(34)
				Dynamic tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(34)
				Dynamic tmp6 = this->mod_state_from_event(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(35)
				Dynamic tmp7 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(36)
				Dynamic tmp8 = _event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(30)
				tmp4->__Field(HX_HCSTRING("dispatch_key_down_event","\x42","\x92","\xf5","\x8f"), hx::paccDynamic )(_key_event->__Field(HX_HCSTRING("keysym","\xc8","\xb0","\xfa","\x3f"), hx::paccDynamic )->__Field(HX_HCSTRING("sym","\x07","\xad","\x57","\x00"), hx::paccDynamic ),_key_event->__Field(HX_HCSTRING("keysym","\xc8","\xb0","\xfa","\x3f"), hx::paccDynamic )->__Field(HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26"), hx::paccDynamic ),_key_event->__Field(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"), hx::paccDynamic ),tmp6,tmp7,tmp8);
			}
			else{
				HX_STACK_LINE(39)
				bool tmp4 = (_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)769);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(39)
				if ((tmp4)){
					HX_STACK_LINE(41)
					::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(45)
					Dynamic tmp6 = _event;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(45)
					Dynamic tmp7 = this->mod_state_from_event(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(46)
					Dynamic tmp8 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(47)
					Dynamic tmp9 = _event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(41)
					tmp5->__Field(HX_HCSTRING("dispatch_key_up_event","\xbb","\x85","\xda","\x71"), hx::paccDynamic )(_key_event->__Field(HX_HCSTRING("keysym","\xc8","\xb0","\xfa","\x3f"), hx::paccDynamic )->__Field(HX_HCSTRING("sym","\x07","\xad","\x57","\x00"), hx::paccDynamic ),_key_event->__Field(HX_HCSTRING("keysym","\xc8","\xb0","\xfa","\x3f"), hx::paccDynamic )->__Field(HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26"), hx::paccDynamic ),_key_event->__Field(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"), hx::paccDynamic ),tmp7,tmp8,tmp9);
				}
				else{
					HX_STACK_LINE(50)
					bool tmp5 = (_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)770);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(50)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(50)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(50)
					if ((tmp6)){
						HX_STACK_LINE(50)
						tmp7 = (_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)771);
					}
					else{
						HX_STACK_LINE(50)
						tmp7 = true;
					}
					HX_STACK_LINE(50)
					if ((tmp7)){
						HX_STACK_LINE(52)
						::snow::_system::input::Input tmp8 = this->_system;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(54)
						bool tmp9 = (_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(54)
						int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(54)
						if ((tmp9)){
							HX_STACK_LINE(54)
							tmp10 = (int)0;
						}
						else{
							HX_STACK_LINE(54)
							tmp10 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );
						}
						HX_STACK_LINE(55)
						bool tmp11 = (_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(55)
						int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(55)
						if ((tmp11)){
							HX_STACK_LINE(55)
							tmp12 = (int)0;
						}
						else{
							HX_STACK_LINE(55)
							tmp12 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						}
						HX_STACK_LINE(56)
						bool tmp13 = (_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)770);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(56)
						int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(56)
						if ((tmp13)){
							HX_STACK_LINE(56)
							tmp14 = (int)1;
						}
						else{
							HX_STACK_LINE(56)
							tmp14 = (int)2;
						}
						HX_STACK_LINE(57)
						Dynamic tmp15 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(58)
						Dynamic tmp16 = _event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(52)
						tmp8->__Field(HX_HCSTRING("dispatch_text_event","\x6d","\x80","\x5a","\x1c"), hx::paccDynamic )(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic ),tmp10,tmp12,tmp14,tmp15,tmp16);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(65)
			bool tmp3 = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(65)
			if ((tmp3)){
				HX_STACK_LINE(67)
				int _state = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_state,"_state");
				HX_STACK_LINE(73)
				bool tmp4 = (_state == (int)1792);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				if ((tmp4)){
					HX_STACK_LINE(75)
					::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(79)
					Dynamic tmp6 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(75)
					tmp5->__Field(HX_HCSTRING("dispatch_touch_down_event","\x62","\x4b","\x89","\xb1"), hx::paccDynamic )(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("finger_id","\xf1","\x31","\xf7","\x01"), hx::paccDynamic ),tmp6);
				}
				else{
					HX_STACK_LINE(82)
					bool tmp5 = (_state == (int)1793);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(82)
					if ((tmp5)){
						HX_STACK_LINE(84)
						::snow::_system::input::Input tmp6 = this->_system;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(88)
						Dynamic tmp7 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(84)
						tmp6->__Field(HX_HCSTRING("dispatch_touch_up_event","\xdb","\xb6","\xe7","\xd0"), hx::paccDynamic )(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("finger_id","\xf1","\x31","\xf7","\x01"), hx::paccDynamic ),tmp7);
					}
					else{
						HX_STACK_LINE(91)
						bool tmp6 = (_state == (int)1794);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(91)
						if ((tmp6)){
							HX_STACK_LINE(93)
							::snow::_system::input::Input tmp7 = this->_system;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(99)
							Dynamic tmp8 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							tmp7->__Field(HX_HCSTRING("dispatch_touch_move_event","\x51","\xe3","\xb3","\xc4"), hx::paccDynamic )(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("dx","\x94","\x57","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("dy","\x95","\x57","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("finger_id","\xf1","\x31","\xf7","\x01"), hx::paccDynamic ),tmp8);
						}
					}
				}
			}
			else{
				HX_STACK_LINE(106)
				bool tmp4 = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)5);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(106)
				if ((tmp4)){
					HX_STACK_LINE(108)
					Dynamic _gamepad_event = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(_gamepad_event,"_gamepad_event");
					HX_STACK_LINE(112)
					bool tmp5 = (_gamepad_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)1618);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(112)
					if ((tmp5)){
						HX_STACK_LINE(115)
						::snow::_system::input::Input tmp6 = this->_system;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(119)
						Dynamic tmp7 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(115)
						tmp6->__Field(HX_HCSTRING("dispatch_gamepad_button_up_event","\x80","\x00","\xd7","\x72"), hx::paccDynamic )(_gamepad_event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic ),_gamepad_event->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic ),(int)0,tmp7);
					}
					else{
						HX_STACK_LINE(122)
						bool tmp6 = (_gamepad_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)1617);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(122)
						if ((tmp6)){
							HX_STACK_LINE(125)
							::snow::_system::input::Input tmp7 = this->_system;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(129)
							Dynamic tmp8 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(125)
							tmp7->__Field(HX_HCSTRING("dispatch_gamepad_button_down_event","\x47","\x08","\x1a","\x25"), hx::paccDynamic )(_gamepad_event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic ),_gamepad_event->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic ),(int)1,tmp8);
						}
						else{
							HX_STACK_LINE(134)
							bool tmp7 = (_gamepad_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)1616);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(134)
							if ((tmp7)){
								HX_STACK_LINE(136)
								::snow::_system::input::Input tmp8 = this->_system;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(140)
								Dynamic tmp9 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(136)
								tmp8->__Field(HX_HCSTRING("dispatch_gamepad_axis_event","\x7f","\xca","\x44","\x96"), hx::paccDynamic )(_gamepad_event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic ),_gamepad_event->__Field(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"), hx::paccDynamic ),_gamepad_event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ),tmp9);
							}
							else{
								HX_STACK_LINE(147)
								int _type = (int)0;		HX_STACK_VAR(_type,"_type");
								HX_STACK_LINE(149)
								bool tmp8 = (_gamepad_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)1619);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(149)
								if ((tmp8)){
									HX_STACK_LINE(151)
									::snow::_system::input::Input tmp9 = this->_system;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(151)
									Dynamic tmp10 = _gamepad_event;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(151)
									tmp9->__Field(HX_HCSTRING("on_gamepad_added","\x02","\x15","\xab","\xa2"), hx::paccDynamic )(tmp10);
									HX_STACK_LINE(152)
									_type = (int)1;
								}
								else{
									HX_STACK_LINE(154)
									bool tmp9 = (_gamepad_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)1620);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(154)
									if ((tmp9)){
										HX_STACK_LINE(156)
										::snow::_system::input::Input tmp10 = this->_system;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(156)
										Dynamic tmp11 = _gamepad_event;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(156)
										tmp10->__Field(HX_HCSTRING("on_gamepad_removed","\x62","\x74","\xe9","\x51"), hx::paccDynamic )(tmp11);
										HX_STACK_LINE(157)
										_type = (int)2;
									}
									else{
										HX_STACK_LINE(159)
										bool tmp10 = (_gamepad_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)1621);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(159)
										if ((tmp10)){
											HX_STACK_LINE(160)
											_type = (int)3;
										}
									}
								}
								HX_STACK_LINE(163)
								::snow::_system::input::Input tmp9 = this->_system;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(165)
								int tmp10 = _type;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(166)
								Dynamic tmp11 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(163)
								tmp9->__Field(HX_HCSTRING("dispatch_gamepad_device_event","\xf4","\x26","\xd5","\xbb"), hx::paccDynamic )(_gamepad_event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic ),tmp10,tmp11);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(173)
					bool tmp5 = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(173)
					if ((tmp5)){
						HX_STACK_LINE(175)
						bool tmp6 = (_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)1024);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(175)
						if ((tmp6)){
							HX_STACK_LINE(177)
							::snow::_system::input::Input tmp7 = this->_system;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(182)
							Dynamic tmp8 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(183)
							Dynamic tmp9 = _event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(177)
							tmp7->__Field(HX_HCSTRING("dispatch_mouse_move_event","\xab","\x52","\x2c","\xe9"), hx::paccDynamic )(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("xrel","\xe1","\x73","\xa8","\x4f"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("yrel","\x80","\xaa","\x51","\x50"), hx::paccDynamic ),tmp8,tmp9);
						}
						HX_STACK_LINE(186)
						bool tmp7 = (_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)1025);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(186)
						if ((tmp7)){
							HX_STACK_LINE(188)
							::snow::_system::input::Input tmp8 = this->_system;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(192)
							Dynamic tmp9 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(193)
							Dynamic tmp10 = _event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(188)
							tmp8->__Field(HX_HCSTRING("dispatch_mouse_down_event","\xbc","\xba","\x01","\xd6"), hx::paccDynamic )(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic ),tmp9,tmp10);
						}
						else{
							HX_STACK_LINE(196)
							bool tmp8 = (_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)1026);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(196)
							if ((tmp8)){
								HX_STACK_LINE(198)
								::snow::_system::input::Input tmp9 = this->_system;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(202)
								Dynamic tmp10 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(203)
								Dynamic tmp11 = _event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(198)
								tmp9->__Field(HX_HCSTRING("dispatch_mouse_up_event","\xb5","\xbb","\x31","\x4b"), hx::paccDynamic )(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic ),tmp10,tmp11);
							}
							else{
								HX_STACK_LINE(206)
								bool tmp9 = (_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)1027);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(206)
								if ((tmp9)){
									HX_STACK_LINE(208)
									::snow::_system::input::Input tmp10 = this->_system;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(211)
									Dynamic tmp11 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(212)
									Dynamic tmp12 = _event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(208)
									tmp10->__Field(HX_HCSTRING("dispatch_mouse_wheel_event","\xd7","\xbb","\x13","\xda"), hx::paccDynamic )(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),tmp11,tmp12);
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


Dynamic Input_obj::mod_state_from_event( Dynamic event){
	HX_STACK_FRAME("snow.modules.sdl.Input","mod_state_from_event",0xce34e2f9,"snow.modules.sdl.Input.mod_state_from_event","snow/modules/sdl/Input.hx",223,0xc2f5207c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(227)
	bool tmp = (event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)769);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(227)
	if ((tmp1)){
		HX_STACK_LINE(227)
		tmp2 = (event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)768);
	}
	else{
		HX_STACK_LINE(227)
		tmp2 = true;
	}
	HX_STACK_LINE(227)
	if ((tmp2)){
		HX_STACK_LINE(229)
		int mod_value = event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("keysym","\xc8","\xb0","\xfa","\x3f"), hx::paccDynamic )->__Field(HX_HCSTRING("mod","\xc2","\x16","\x53","\x00"), hx::paccDynamic );		HX_STACK_VAR(mod_value,"mod_value");
		HX_STACK_LINE(233)
		bool tmp3 = (mod_value == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		bool tmp4 = (mod_value == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(236)
		bool tmp5 = (mod_value == (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(237)
		bool tmp6 = (mod_value == (int)64);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(238)
		bool tmp7 = (mod_value == (int)128);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(239)
		bool tmp8 = (mod_value == (int)256);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(240)
		bool tmp9 = (mod_value == (int)512);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(241)
		bool tmp10 = (mod_value == (int)1024);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(242)
		bool tmp11 = (mod_value == (int)2048);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(244)
		bool tmp12 = (mod_value == (int)4096);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(245)
		bool tmp13 = (mod_value == (int)8192);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(246)
		bool tmp14 = (mod_value == (int)16384);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(248)
		bool tmp15 = (mod_value == (int)64);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(248)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(248)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(248)
		if ((tmp16)){
			HX_STACK_LINE(248)
			tmp17 = (mod_value == (int)128);
		}
		else{
			HX_STACK_LINE(248)
			tmp17 = true;
		}
		HX_STACK_LINE(249)
		bool tmp18 = (mod_value == (int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(249)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(249)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(249)
		if ((tmp19)){
			HX_STACK_LINE(249)
			tmp20 = (mod_value == (int)2);
		}
		else{
			HX_STACK_LINE(249)
			tmp20 = true;
		}
		HX_STACK_LINE(250)
		bool tmp21 = (mod_value == (int)256);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(250)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(250)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(250)
		if ((tmp22)){
			HX_STACK_LINE(250)
			tmp23 = (mod_value == (int)512);
		}
		else{
			HX_STACK_LINE(250)
			tmp23 = true;
		}
		HX_STACK_LINE(251)
		bool tmp24 = (mod_value == (int)1024);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(251)
		bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(251)
		bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(251)
		if ((tmp25)){
			HX_STACK_LINE(251)
			tmp26 = (mod_value == (int)2048);
		}
		else{
			HX_STACK_LINE(251)
			tmp26 = true;
		}
		struct _Function_2_1{
			inline static Dynamic Block( bool &tmp5,bool &tmp6,bool &tmp13,bool &tmp17,bool &tmp20,bool &tmp9,bool &tmp11,bool &tmp23,bool &tmp4,bool &tmp10,bool &tmp26,bool &tmp3,bool &tmp7,bool &tmp8,bool &tmp12,bool &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/modules/sdl/Input.hx",231,0xc2f5207c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("none","\xb8","\x12","\x0a","\x49") , tmp3,false);
					__result->Add(HX_HCSTRING("lshift","\x96","\xe4","\xad","\xaa") , tmp4,false);
					__result->Add(HX_HCSTRING("rshift","\xd0","\x0e","\xd2","\x10") , tmp5,false);
					__result->Add(HX_HCSTRING("lctrl","\x17","\x2f","\x0f","\x71") , tmp6,false);
					__result->Add(HX_HCSTRING("rctrl","\x1d","\xaa","\x76","\xe5") , tmp7,false);
					__result->Add(HX_HCSTRING("lalt","\x3d","\x04","\xad","\x47") , tmp8,false);
					__result->Add(HX_HCSTRING("ralt","\xf7","\x4b","\xa4","\x4b") , tmp9,false);
					__result->Add(HX_HCSTRING("lmeta","\x31","\xf1","\x9f","\x77") , tmp10,false);
					__result->Add(HX_HCSTRING("rmeta","\x37","\x6c","\x07","\xec") , tmp11,false);
					__result->Add(HX_HCSTRING("num","\x46","\xde","\x53","\x00") , tmp12,false);
					__result->Add(HX_HCSTRING("caps","\x21","\x1c","\xba","\x41") , tmp13,false);
					__result->Add(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48") , tmp14,false);
					__result->Add(HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41") , tmp17,false);
					__result->Add(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c") , tmp20,false);
					__result->Add(HX_HCSTRING("alt","\x29","\xf9","\x49","\x00") , tmp23,false);
					__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , tmp26,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(231)
		Dynamic tmp27 = _Function_2_1::Block(tmp5,tmp6,tmp13,tmp17,tmp20,tmp9,tmp11,tmp23,tmp4,tmp10,tmp26,tmp3,tmp7,tmp8,tmp12,tmp14);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(231)
		return tmp27;
	}
	else{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/modules/sdl/Input.hx",258,0xc2f5207c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("none","\xb8","\x12","\x0a","\x49") , true,false);
					__result->Add(HX_HCSTRING("lshift","\x96","\xe4","\xad","\xaa") , false,false);
					__result->Add(HX_HCSTRING("rshift","\xd0","\x0e","\xd2","\x10") , false,false);
					__result->Add(HX_HCSTRING("lctrl","\x17","\x2f","\x0f","\x71") , false,false);
					__result->Add(HX_HCSTRING("rctrl","\x1d","\xaa","\x76","\xe5") , false,false);
					__result->Add(HX_HCSTRING("lalt","\x3d","\x04","\xad","\x47") , false,false);
					__result->Add(HX_HCSTRING("ralt","\xf7","\x4b","\xa4","\x4b") , false,false);
					__result->Add(HX_HCSTRING("lmeta","\x31","\xf1","\x9f","\x77") , false,false);
					__result->Add(HX_HCSTRING("rmeta","\x37","\x6c","\x07","\xec") , false,false);
					__result->Add(HX_HCSTRING("num","\x46","\xde","\x53","\x00") , false,false);
					__result->Add(HX_HCSTRING("caps","\x21","\x1c","\xba","\x41") , false,false);
					__result->Add(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48") , false,false);
					__result->Add(HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41") , false,false);
					__result->Add(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c") , false,false);
					__result->Add(HX_HCSTRING("alt","\x29","\xf9","\x49","\x00") , false,false);
					__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(258)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		return tmp3;
	}
	HX_STACK_LINE(227)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mod_state_from_event,return )


Input_obj::Input_obj()
{
}

Dynamic Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mod_state_from_event") ) { return mod_state_from_event_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	HX_HCSTRING("mod_state_from_event","\x50","\x1c","\x02","\x30"),
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
	__mClass->mName = HX_HCSTRING("snow.modules.sdl.Input","\x65","\x7c","\xa3","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
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

} // end namespace snow
} // end namespace modules
} // end namespace sdl
