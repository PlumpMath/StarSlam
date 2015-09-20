#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Planet
#include <Planet.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_VectorExtender
#include <VectorExtender.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_utils_Random
#include <luxe/utils/Random.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_system_input_Keycodes
#include <snow/system/input/Keycodes.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",9,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	this->buttonTriggers = Array_obj< bool >::__new();
	HX_STACK_LINE(18)
	this->needsNewHome = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(17)
	this->planetRemovalList = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(15)
	this->players = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(14)
	this->planets = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(9)
	super::__construct();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",23,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		::Main_obj::instance = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(34)
			while((true)){
				HX_STACK_LINE(34)
				bool tmp = (_g < (int)10);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(34)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(34)
				if ((tmp1)){
					HX_STACK_LINE(34)
					break;
				}
				HX_STACK_LINE(34)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(34)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(36)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(36)
				{
					HX_STACK_LINE(36)
					::luxe::utils::Utils tmp4 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(36)
					::luxe::utils::Random _this = tmp4->random;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(36)
					Float min = (int)100;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(36)
					::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(36)
					Float tmp6 = tmp5->screen->width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(36)
					Float tmp7 = (tmp6 - (int)100);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(36)
					Dynamic max = tmp7;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(36)
					bool tmp8 = (max == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(36)
					if ((tmp8)){
						HX_STACK_LINE(36)
						max = min;
						HX_STACK_LINE(36)
						min = (int)0;
					}
					HX_STACK_LINE(36)
					Float tmp9 = (_this->seed * (int)16807);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(36)
					Float tmp10 = hx::Mod(tmp9,(int)2147483647);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(36)
					Float tmp11 = _this->seed = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(36)
					Float tmp12 = (Float(tmp11) / Float((int)2147483647));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(36)
					Float tmp13 = (tmp12 + ((Float)0.000000000233));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(36)
					Float tmp14 = (max - min);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(36)
					Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(36)
					Float tmp16 = min;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(36)
					tmp3 = (tmp15 + tmp16);
				}
				HX_STACK_LINE(37)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					::luxe::utils::Utils tmp5 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(37)
					::luxe::utils::Random _this = tmp5->random;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(37)
					Float min = (int)100;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(37)
					::luxe::Core tmp6 = ::Luxe_obj::core;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(37)
					Float tmp7 = tmp6->screen->height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(37)
					Float tmp8 = (tmp7 - (int)100);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(37)
					Dynamic max = tmp8;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(37)
					bool tmp9 = (max == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(37)
					if ((tmp9)){
						HX_STACK_LINE(37)
						max = min;
						HX_STACK_LINE(37)
						min = (int)0;
					}
					HX_STACK_LINE(37)
					Float tmp10 = (_this->seed * (int)16807);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(37)
					Float tmp11 = hx::Mod(tmp10,(int)2147483647);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(37)
					Float tmp12 = _this->seed = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(37)
					Float tmp13 = (Float(tmp12) / Float((int)2147483647));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(37)
					Float tmp14 = (tmp13 + ((Float)0.000000000233));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(37)
					Float tmp15 = (max - min);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(37)
					Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(37)
					Float tmp17 = min;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(37)
					tmp4 = (tmp16 + tmp17);
				}
				HX_STACK_LINE(35)
				::phoenix::Vector tmp5 = ::phoenix::Vector_obj::__new(tmp3,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
				struct _Function_3_1{
					inline static Dynamic Block( ::phoenix::Vector &tmp5){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",35,0x087e5c05)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(35)
				Dynamic tmp6 = _Function_3_1::Block(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(38)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(38)
				{
					HX_STACK_LINE(38)
					::luxe::utils::Utils tmp8 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(38)
					::luxe::utils::Random _this = tmp8->random;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(38)
					Float min = (int)1;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(38)
					Dynamic max = (int)10;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(38)
					bool tmp9 = (max == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(38)
					if ((tmp9)){
						HX_STACK_LINE(38)
						max = min;
						HX_STACK_LINE(38)
						min = (int)0;
					}
					HX_STACK_LINE(38)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(38)
					{
						HX_STACK_LINE(38)
						Float min1 = min;		HX_STACK_VAR(min1,"min1");
						HX_STACK_LINE(38)
						Dynamic max1 = max;		HX_STACK_VAR(max1,"max1");
						HX_STACK_LINE(38)
						bool tmp11 = (max1 == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(38)
						if ((tmp11)){
							HX_STACK_LINE(38)
							max1 = min1;
							HX_STACK_LINE(38)
							min1 = (int)0;
						}
						HX_STACK_LINE(38)
						Float tmp12 = (_this->seed * (int)16807);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(38)
						Float tmp13 = hx::Mod(tmp12,(int)2147483647);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(38)
						Float tmp14 = _this->seed = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(38)
						Float tmp15 = (Float(tmp14) / Float((int)2147483647));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(38)
						Float tmp16 = (tmp15 + ((Float)0.000000000233));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(38)
						Float tmp17 = (max1 - min1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(38)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(38)
						Float tmp19 = min1;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(38)
						tmp10 = (tmp18 + tmp19);
					}
					HX_STACK_LINE(38)
					tmp7 = ::Math_obj::floor(tmp10);
				}
				HX_STACK_LINE(35)
				::Planet tmp8 = ::Planet_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(35)
				::Planet newP = tmp8;		HX_STACK_VAR(newP,"newP");
				HX_STACK_LINE(40)
				::Planet tmp9 = newP;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(40)
				this->planets->push(tmp9);
				HX_STACK_LINE(41)
				this->buttonTriggers->push(false);
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				bool tmp = (_g < (int)4);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(49)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(49)
				if ((tmp1)){
					HX_STACK_LINE(49)
					break;
				}
				HX_STACK_LINE(49)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(49)
				int j = tmp2;		HX_STACK_VAR(j,"j");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",50,0x087e5c05)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(50)
				Dynamic tmp3 = _Function_3_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(50)
				::Player tmp4 = ::Player_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(50)
				::Player newPlayer = tmp4;		HX_STACK_VAR(newPlayer,"newPlayer");
				HX_STACK_LINE(51)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(51)
				{
					HX_STACK_LINE(51)
					::luxe::utils::Utils tmp6 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(51)
					::luxe::utils::Random _this = tmp6->random;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(51)
					Float min = (int)0;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(51)
					int tmp7 = this->planets->length;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(51)
					Dynamic max = tmp7;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(51)
					bool tmp8 = (max == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(51)
					if ((tmp8)){
						HX_STACK_LINE(51)
						max = min;
						HX_STACK_LINE(51)
						min = (int)0;
					}
					HX_STACK_LINE(51)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(51)
					{
						HX_STACK_LINE(51)
						Float min1 = min;		HX_STACK_VAR(min1,"min1");
						HX_STACK_LINE(51)
						Dynamic max1 = max;		HX_STACK_VAR(max1,"max1");
						HX_STACK_LINE(51)
						bool tmp10 = (max1 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(51)
						if ((tmp10)){
							HX_STACK_LINE(51)
							max1 = min1;
							HX_STACK_LINE(51)
							min1 = (int)0;
						}
						HX_STACK_LINE(51)
						Float tmp11 = (_this->seed * (int)16807);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(51)
						Float tmp12 = hx::Mod(tmp11,(int)2147483647);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(51)
						Float tmp13 = _this->seed = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(51)
						Float tmp14 = (Float(tmp13) / Float((int)2147483647));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(51)
						Float tmp15 = (tmp14 + ((Float)0.000000000233));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(51)
						Float tmp16 = (max1 - min1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(51)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(51)
						Float tmp18 = min1;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(51)
						tmp9 = (tmp17 + tmp18);
					}
					HX_STACK_LINE(51)
					tmp5 = ::Math_obj::floor(tmp9);
				}
				HX_STACK_LINE(51)
				int k = tmp5;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(52)
				int tmp6 = k;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),52,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				::haxe::Log_obj::trace(tmp6,tmp7);
				HX_STACK_LINE(53)
				::Planet tmp8 = this->planets->__get(k).StaticCast< ::Planet >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(53)
				newPlayer->setPlanet(tmp8);
				HX_STACK_LINE(54)
				::Player tmp9 = newPlayer;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(54)
				this->players->push(tmp9);
			}
		}
		HX_STACK_LINE(57)
		::phoenix::Color tmp = ::phoenix::Color_obj::__new((int)1,(int)1,(int)0,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		::Player tmp1 = this->players->__get((int)0).StaticCast< ::Player >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		tmp1->color = tmp;
		HX_STACK_LINE(58)
		::phoenix::Color tmp2 = ::phoenix::Color_obj::__new((int)0,(int)1,(int)1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		::Player tmp3 = this->players->__get((int)1).StaticCast< ::Player >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		tmp3->color = tmp2;
		HX_STACK_LINE(59)
		::phoenix::Color tmp4 = ::phoenix::Color_obj::__new((int)1,(int)0,(int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		::Player tmp5 = this->players->__get((int)2).StaticCast< ::Player >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		tmp5->color = tmp4;
		HX_STACK_LINE(60)
		::phoenix::Color tmp6 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		::Player tmp7 = this->players->__get((int)3).StaticCast< ::Player >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		tmp7->color = tmp6;
	}
return null();
}


Void Main_obj::onkeydown( Dynamic e){
{
		HX_STACK_FRAME("Main","onkeydown",0x9c5105ed,"Main.onkeydown","Main.hx",63,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(72)
		int tmp = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		int tmp1 = ::snow::_system::input::Keycodes_obj::key_1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		if ((tmp2)){
			HX_STACK_LINE(72)
			bool tmp4 = this->buttonTriggers->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(72)
			tmp3 = false;
		}
		HX_STACK_LINE(72)
		if ((tmp3)){
			HX_STACK_LINE(73)
			::Player tmp4 = this->players->__get((int)0).StaticCast< ::Player >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			tmp4->inputDown();
			HX_STACK_LINE(74)
			this->buttonTriggers[(int)0] = true;
		}
		HX_STACK_LINE(77)
		int tmp4 = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		int tmp5 = ::snow::_system::input::Keycodes_obj::key_z;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		if ((tmp6)){
			HX_STACK_LINE(77)
			bool tmp8 = this->buttonTriggers->__get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(77)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(77)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(77)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(77)
			tmp7 = false;
		}
		HX_STACK_LINE(77)
		if ((tmp7)){
			HX_STACK_LINE(78)
			::Player tmp8 = this->players->__get((int)1).StaticCast< ::Player >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(78)
			tmp8->inputDown();
			HX_STACK_LINE(79)
			this->buttonTriggers[(int)1] = true;
		}
		HX_STACK_LINE(82)
		int tmp8 = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		int tmp9 = ::snow::_system::input::Keycodes_obj::key_0;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(82)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(82)
		if ((tmp10)){
			HX_STACK_LINE(82)
			bool tmp12 = this->buttonTriggers->__get((int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(82)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(82)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(82)
			tmp11 = !(tmp14);
		}
		else{
			HX_STACK_LINE(82)
			tmp11 = false;
		}
		HX_STACK_LINE(82)
		if ((tmp11)){
			HX_STACK_LINE(83)
			::Player tmp12 = this->players->__get((int)2).StaticCast< ::Player >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(83)
			tmp12->inputDown();
			HX_STACK_LINE(84)
			this->buttonTriggers[(int)2] = true;
		}
		HX_STACK_LINE(87)
		int tmp12 = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(87)
		int tmp13 = ::snow::_system::input::Keycodes_obj::key_m;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(87)
		bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(87)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(87)
		if ((tmp14)){
			HX_STACK_LINE(87)
			bool tmp16 = this->buttonTriggers->__get((int)3);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(87)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(87)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(87)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(87)
			tmp15 = false;
		}
		HX_STACK_LINE(87)
		if ((tmp15)){
			HX_STACK_LINE(88)
			::Player tmp16 = this->players->__get((int)3).StaticCast< ::Player >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(88)
			tmp16->inputDown();
			HX_STACK_LINE(89)
			this->buttonTriggers[(int)3] = true;
		}
	}
return null();
}


Void Main_obj::onkeyup( Dynamic e){
{
		HX_STACK_FRAME("Main","onkeyup",0x46406b26,"Main.onkeyup","Main.hx",94,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(96)
		int tmp = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		int tmp1 = ::snow::_system::input::Keycodes_obj::escape;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		if ((tmp2)){
			HX_STACK_LINE(97)
			::Luxe_obj::shutdown();
		}
		HX_STACK_LINE(107)
		int tmp3 = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		int tmp4 = ::snow::_system::input::Keycodes_obj::key_1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		if ((tmp5)){
			HX_STACK_LINE(108)
			::Player tmp6 = this->players->__get((int)0).StaticCast< ::Player >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(108)
			tmp6->inputUp();
			HX_STACK_LINE(109)
			this->buttonTriggers[(int)0] = false;
		}
		HX_STACK_LINE(112)
		int tmp6 = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(112)
		int tmp7 = ::snow::_system::input::Keycodes_obj::key_z;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(112)
		if ((tmp8)){
			HX_STACK_LINE(113)
			::Player tmp9 = this->players->__get((int)1).StaticCast< ::Player >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(113)
			tmp9->inputUp();
			HX_STACK_LINE(114)
			this->buttonTriggers[(int)1] = false;
		}
		HX_STACK_LINE(117)
		int tmp9 = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		int tmp10 = ::snow::_system::input::Keycodes_obj::key_0;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(117)
		bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(117)
		if ((tmp11)){
			HX_STACK_LINE(118)
			::Player tmp12 = this->players->__get((int)2).StaticCast< ::Player >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(118)
			tmp12->inputUp();
			HX_STACK_LINE(119)
			this->buttonTriggers[(int)2] = false;
		}
		HX_STACK_LINE(122)
		int tmp12 = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(122)
		int tmp13 = ::snow::_system::input::Keycodes_obj::key_m;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(122)
		bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(122)
		if ((tmp14)){
			HX_STACK_LINE(123)
			::Player tmp15 = this->players->__get((int)3).StaticCast< ::Player >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(123)
			tmp15->inputUp();
			HX_STACK_LINE(124)
			this->buttonTriggers[(int)3] = false;
		}
	}
return null();
}


Void Main_obj::update( Float dt){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",129,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			Array< ::Dynamic > _g1 = this->planetRemovalList;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(133)
			while((true)){
				HX_STACK_LINE(133)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(133)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(133)
				if ((tmp1)){
					HX_STACK_LINE(133)
					break;
				}
				HX_STACK_LINE(133)
				::Planet tmp2 = _g1->__get(_g).StaticCast< ::Planet >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(133)
				::Planet d = tmp2;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(133)
				++(_g);
				HX_STACK_LINE(134)
				::Planet tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(134)
				this->planets->remove(tmp3);
				HX_STACK_LINE(135)
				d->destroy(null());
			}
		}
		HX_STACK_LINE(137)
		this->planetRemovalList = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(139)
		::Planet closestPlanet = null();		HX_STACK_VAR(closestPlanet,"closestPlanet");
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(140)
			Array< ::Dynamic > _g1 = this->needsNewHome;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(140)
			while((true)){
				HX_STACK_LINE(140)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(140)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(140)
				if ((tmp1)){
					HX_STACK_LINE(140)
					break;
				}
				HX_STACK_LINE(140)
				::Player tmp2 = _g1->__get(_g).StaticCast< ::Player >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(140)
				::Player py = tmp2;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(140)
				++(_g);
				HX_STACK_LINE(141)
				{
					HX_STACK_LINE(141)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(141)
					Array< ::Dynamic > _g3 = this->planets;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(141)
					while((true)){
						HX_STACK_LINE(141)
						bool tmp3 = (_g2 < _g3->length);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(141)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(141)
						if ((tmp4)){
							HX_STACK_LINE(141)
							break;
						}
						HX_STACK_LINE(141)
						::Planet tmp5 = _g3->__get(_g2).StaticCast< ::Planet >();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(141)
						::Planet pt = tmp5;		HX_STACK_VAR(pt,"pt");
						HX_STACK_LINE(141)
						++(_g2);
						HX_STACK_LINE(142)
						bool tmp6 = (closestPlanet == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(142)
						if ((tmp6)){
							HX_STACK_LINE(142)
							closestPlanet = pt;
						}
						HX_STACK_LINE(143)
						::phoenix::Vector tmp7 = pt->get_pos();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(143)
						::phoenix::Vector tmp8 = py->get_pos();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(143)
						Float tmp9 = ::VectorExtender_obj::distance(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(143)
						::phoenix::Vector tmp10 = closestPlanet->get_pos();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(143)
						::phoenix::Vector tmp11 = py->get_pos();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(143)
						Float tmp12 = ::VectorExtender_obj::distance(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(143)
						bool tmp13 = (tmp9 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(143)
						if ((tmp13)){
							HX_STACK_LINE(143)
							closestPlanet = pt;
						}
					}
				}
				HX_STACK_LINE(145)
				::Planet tmp3 = closestPlanet;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(145)
				py->hopToPlanet(tmp3);
			}
		}
		HX_STACK_LINE(147)
		this->needsNewHome = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(149)
			Array< ::Dynamic > _g1 = this->planets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(149)
			while((true)){
				HX_STACK_LINE(149)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(149)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(149)
				if ((tmp1)){
					HX_STACK_LINE(149)
					break;
				}
				HX_STACK_LINE(149)
				::Planet tmp2 = _g1->__get(_g).StaticCast< ::Planet >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(149)
				::Planet p = tmp2;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(149)
				++(_g);
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(156)
					Array< ::Dynamic > _g3 = this->players;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(156)
					while((true)){
						HX_STACK_LINE(156)
						bool tmp3 = (_g2 < _g3->length);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(156)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(156)
						if ((tmp4)){
							HX_STACK_LINE(156)
							break;
						}
						HX_STACK_LINE(156)
						::Player tmp5 = _g3->__get(_g2).StaticCast< ::Player >();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(156)
						::Player player = tmp5;		HX_STACK_VAR(player,"player");
						HX_STACK_LINE(156)
						++(_g2);
						HX_STACK_LINE(157)
						::Planet tmp6 = p;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(157)
						bool tmp7 = player->entersAtmosphere(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(157)
						if ((tmp7)){
							HX_STACK_LINE(158)
							::Planet tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(158)
							player->hopToPlanet(tmp8);
						}
					}
				}
				HX_STACK_LINE(162)
				{
					HX_STACK_LINE(162)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(162)
					Array< ::Dynamic > _g3 = this->planets;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(162)
					while((true)){
						HX_STACK_LINE(162)
						bool tmp3 = (_g2 < _g3->length);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(162)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(162)
						if ((tmp4)){
							HX_STACK_LINE(162)
							break;
						}
						HX_STACK_LINE(162)
						::Planet tmp5 = _g3->__get(_g2).StaticCast< ::Planet >();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(162)
						::Planet p2 = tmp5;		HX_STACK_VAR(p2,"p2");
						HX_STACK_LINE(162)
						++(_g2);
						HX_STACK_LINE(163)
						::Planet tmp6 = p2;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(163)
						::Planet tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(163)
						bool tmp8 = p->collidesWithPlanet(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(163)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(163)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(163)
						if ((tmp9)){
							HX_STACK_LINE(163)
							::Planet tmp11 = p;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(163)
							::Planet tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(163)
							::Planet tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(163)
							int tmp14 = this->planetRemovalList->indexOf(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(163)
							int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(163)
							int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(163)
							tmp10 = (tmp16 == (int)-1);
						}
						else{
							HX_STACK_LINE(163)
							tmp10 = false;
						}
						HX_STACK_LINE(163)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(163)
						if ((tmp10)){
							HX_STACK_LINE(163)
							::Planet tmp12 = p2;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(163)
							::Planet tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(163)
							int tmp14 = this->planetRemovalList->indexOf(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(163)
							int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(163)
							tmp11 = (tmp15 == (int)-1);
						}
						else{
							HX_STACK_LINE(163)
							tmp11 = false;
						}
						HX_STACK_LINE(163)
						if ((tmp11)){
							HX_STACK_LINE(164)
							bool tmp12 = p->isSuperSlam;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(164)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(164)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(164)
							if ((tmp13)){
								HX_STACK_LINE(164)
								tmp14 = p2->isSuperSlam;
							}
							else{
								HX_STACK_LINE(164)
								tmp14 = true;
							}
							HX_STACK_LINE(164)
							if ((tmp14)){
								HX_STACK_LINE(165)
								p->splitPlanet();
								HX_STACK_LINE(166)
								p2->splitPlanet();
							}
							else{
								HX_STACK_LINE(169)
								::Planet tmp15 = p2;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(169)
								p->mergeWithPlanet(tmp15);
								HX_STACK_LINE(179)
								::Planet tmp16 = p2;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								this->planetRemovalList->push(tmp16);
							}
						}
					}
				}
			}
		}
	}
return null();
}


::Main Main_obj::instance;


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(planets,"planets");
	HX_MARK_MEMBER_NAME(players,"players");
	HX_MARK_MEMBER_NAME(planetRemovalList,"planetRemovalList");
	HX_MARK_MEMBER_NAME(needsNewHome,"needsNewHome");
	HX_MARK_MEMBER_NAME(buttonTriggers,"buttonTriggers");
	::luxe::Game_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(planets,"planets");
	HX_VISIT_MEMBER_NAME(players,"players");
	HX_VISIT_MEMBER_NAME(planetRemovalList,"planetRemovalList");
	HX_VISIT_MEMBER_NAME(needsNewHome,"needsNewHome");
	HX_VISIT_MEMBER_NAME(buttonTriggers,"buttonTriggers");
	::luxe::Game_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"planets") ) { return planets; }
		if (HX_FIELD_EQ(inName,"players") ) { return players; }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"needsNewHome") ) { return needsNewHome; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buttonTriggers") ) { return buttonTriggers; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"planetRemovalList") ) { return planetRemovalList; }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
	}
	return false;
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"planets") ) { planets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"players") ) { players=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"needsNewHome") ) { needsNewHome=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buttonTriggers") ) { buttonTriggers=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"planetRemovalList") ) { planetRemovalList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::Main >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("planets","\xdb","\xb2","\xcf","\x82"));
	outFields->push(HX_HCSTRING("players","\xf2","\x09","\x15","\x8a"));
	outFields->push(HX_HCSTRING("planetRemovalList","\xf2","\x46","\x1c","\xd4"));
	outFields->push(HX_HCSTRING("needsNewHome","\xc2","\x9c","\x89","\xcf"));
	outFields->push(HX_HCSTRING("buttonTriggers","\x4d","\x9c","\x1b","\x72"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,planets),HX_HCSTRING("planets","\xdb","\xb2","\xcf","\x82")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,players),HX_HCSTRING("players","\xf2","\x09","\x15","\x8a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,planetRemovalList),HX_HCSTRING("planetRemovalList","\xf2","\x46","\x1c","\xd4")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,needsNewHome),HX_HCSTRING("needsNewHome","\xc2","\x9c","\x89","\xcf")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Main_obj,buttonTriggers),HX_HCSTRING("buttonTriggers","\x4d","\x9c","\x1b","\x72")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::Main*/ ,(void *) &Main_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("planets","\xdb","\xb2","\xcf","\x82"),
	HX_HCSTRING("players","\xf2","\x09","\x15","\x8a"),
	HX_HCSTRING("planetRemovalList","\xf2","\x46","\x1c","\xd4"),
	HX_HCSTRING("needsNewHome","\xc2","\x9c","\x89","\xcf"),
	HX_HCSTRING("buttonTriggers","\x4d","\x9c","\x1b","\x72"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::instance,"instance");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

