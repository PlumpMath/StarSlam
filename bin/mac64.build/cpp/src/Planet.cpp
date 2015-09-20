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
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
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
#ifndef INCLUDED_phoenix_geometry_CircleGeometry
#include <phoenix/geometry/CircleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif

Void Planet_obj::__construct(Dynamic _options,int _points)
{
HX_STACK_FRAME("Planet","new",0xeab663aa,"Planet.new","Planet.hx",7,0x3de53f06)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
HX_STACK_ARG(_points,"_points")
{
	HX_STACK_LINE(21)
	this->players = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(19)
	this->isSuperSlam = false;
	HX_STACK_LINE(18)
	this->fictionMaxCoefficient = (int)100;
	HX_STACK_LINE(17)
	this->frictionPercent = ((Float)0.1);
	HX_STACK_LINE(16)
	this->velocity = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());
	HX_STACK_LINE(10)
	this->sizeToAtmosphere = (int)2;
	HX_STACK_LINE(9)
	this->pointsToArea = (int)1000;
	HX_STACK_LINE(24)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	super::__construct(tmp);
	HX_STACK_LINE(26)
	this->points = _points;
	HX_STACK_LINE(27)
	int tmp1 = this->points;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	int tmp2 = this->pointsToArea;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	Float tmp6 = ::Math_obj::sqrt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(27)
	this->radius = tmp6;
	HX_STACK_LINE(28)
	Float tmp7 = this->radius;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(28)
	Float tmp8 = (tmp7 * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(28)
	Float tmp9 = ::Math_obj::PI;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(28)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(28)
	this->diameter = tmp10;
}
;
	return null();
}

//Planet_obj::~Planet_obj() { }

Dynamic Planet_obj::__CreateEmpty() { return  new Planet_obj; }
hx::ObjectPtr< Planet_obj > Planet_obj::__new(Dynamic _options,int _points)
{  hx::ObjectPtr< Planet_obj > _result_ = new Planet_obj();
	_result_->__construct(_options,_points);
	return _result_;}

Dynamic Planet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Planet_obj > _result_ = new Planet_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Planet_obj::update( Float dt){
{
		HX_STACK_FRAME("Planet","update",0x212a9cff,"Planet.update","Planet.hx",31,0x3de53f06)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			::phoenix::Vector tmp = this->get_pos();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(33)
			::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(33)
			::phoenix::Vector tmp1 = this->velocity;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(33)
			Float tmp2 = dt;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			::phoenix::Vector tmp3 = ::phoenix::Vector_obj::Multiply(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			::phoenix::Vector other = tmp3;		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				bool tmp4 = (other == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				if ((tmp4)){
					HX_STACK_LINE(33)
					::luxe::DebugError tmp5 = ::luxe::DebugError_obj::null_assertion(HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(33)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				Float tmp4 = (_this->x + other->x);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				Float _x = tmp4;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(33)
				Float tmp5 = (_this->y + other->y);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(33)
				Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(33)
				Float tmp6 = (_this->z + other->z);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(33)
				Float _z = tmp6;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(33)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(33)
				_this->ignore_listeners = true;
				HX_STACK_LINE(33)
				{
					HX_STACK_LINE(33)
					_this->x = _x;
					HX_STACK_LINE(33)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(33)
					if ((tmp7)){
						HX_STACK_LINE(33)
						_this->x;
					}
					else{
						HX_STACK_LINE(33)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(33)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(33)
						if ((tmp8)){
							HX_STACK_LINE(33)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(33)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(33)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(33)
							tmp9 = false;
						}
						HX_STACK_LINE(33)
						if ((tmp9)){
							HX_STACK_LINE(33)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(33)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(33)
						_this->x;
					}
				}
				HX_STACK_LINE(33)
				{
					HX_STACK_LINE(33)
					_this->y = _y;
					HX_STACK_LINE(33)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(33)
					if ((tmp7)){
						HX_STACK_LINE(33)
						_this->y;
					}
					else{
						HX_STACK_LINE(33)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(33)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(33)
						if ((tmp8)){
							HX_STACK_LINE(33)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(33)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(33)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(33)
							tmp9 = false;
						}
						HX_STACK_LINE(33)
						if ((tmp9)){
							HX_STACK_LINE(33)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(33)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(33)
						_this->y;
					}
				}
				HX_STACK_LINE(33)
				{
					HX_STACK_LINE(33)
					_this->z = _z;
					HX_STACK_LINE(33)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(33)
					if ((tmp7)){
						HX_STACK_LINE(33)
						_this->z;
					}
					else{
						HX_STACK_LINE(33)
						bool tmp8 = (_this->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(33)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(33)
						if ((tmp8)){
							HX_STACK_LINE(33)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(33)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(33)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(33)
							tmp9 = false;
						}
						HX_STACK_LINE(33)
						if ((tmp9)){
							HX_STACK_LINE(33)
							Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(33)
							_this->listen_z(tmp10);
						}
						HX_STACK_LINE(33)
						_this->z;
					}
				}
				HX_STACK_LINE(33)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(33)
				bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(33)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(33)
				if ((tmp7)){
					HX_STACK_LINE(33)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(33)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(33)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(33)
					tmp8 = false;
				}
				HX_STACK_LINE(33)
				if ((tmp8)){
					HX_STACK_LINE(33)
					Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(33)
					_this->listen_x(tmp9);
				}
				HX_STACK_LINE(33)
				bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(33)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(33)
				if ((tmp9)){
					HX_STACK_LINE(33)
					bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(33)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(33)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(33)
					tmp10 = false;
				}
				HX_STACK_LINE(33)
				if ((tmp10)){
					HX_STACK_LINE(33)
					Float tmp11 = _this->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(33)
					_this->listen_y(tmp11);
				}
				HX_STACK_LINE(33)
				bool tmp11 = (_this->listen_z != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(33)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(33)
				if ((tmp11)){
					HX_STACK_LINE(33)
					bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(33)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(33)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(33)
					tmp12 = false;
				}
				HX_STACK_LINE(33)
				if ((tmp12)){
					HX_STACK_LINE(33)
					Float tmp13 = _this->z;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(33)
					_this->listen_z(tmp13);
				}
				HX_STACK_LINE(33)
				_this;
			}
			HX_STACK_LINE(33)
			_this;
		}
		HX_STACK_LINE(36)
		::phoenix::Vector tmp = this->get_pos();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		Float tmp2 = this->radius;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		::luxe::Core tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		Float tmp5 = tmp4->screen->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		bool tmp6 = (tmp3 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(36)
		if ((tmp6)){
			HX_STACK_LINE(36)
			::phoenix::Vector tmp8 = this->velocity;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(36)
			::phoenix::Vector tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(36)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(36)
			tmp7 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(36)
			tmp7 = false;
		}
		HX_STACK_LINE(36)
		if ((tmp7)){
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				::phoenix::Vector tmp8 = this->velocity;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(37)
				::phoenix::Vector _g = tmp8;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					Float tmp9 = (_g->x * (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(37)
					Float _x = tmp9;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(37)
					_g->x = _x;
					HX_STACK_LINE(37)
					bool tmp10 = _g->_construct;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(37)
					if ((tmp10)){
						HX_STACK_LINE(37)
						_g->x;
					}
					else{
						HX_STACK_LINE(37)
						bool tmp11 = (_g->listen_x != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(37)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(37)
						if ((tmp11)){
							HX_STACK_LINE(37)
							bool tmp13 = _g->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(37)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(37)
							tmp12 = !(tmp14);
						}
						else{
							HX_STACK_LINE(37)
							tmp12 = false;
						}
						HX_STACK_LINE(37)
						if ((tmp12)){
							HX_STACK_LINE(37)
							Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(37)
							_g->listen_x(tmp13);
						}
						HX_STACK_LINE(37)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(38)
			bool tmp8 = this->isSuperSlam;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(38)
			if ((tmp8)){
				HX_STACK_LINE(38)
				this->endSuperSlam();
			}
		}
		else{
			HX_STACK_LINE(40)
			::phoenix::Vector tmp8 = this->get_pos();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(40)
			Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(40)
			Float tmp10 = this->radius;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(40)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(40)
			bool tmp12 = (tmp11 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(40)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(40)
			if ((tmp12)){
				HX_STACK_LINE(40)
				::phoenix::Vector tmp14 = this->velocity;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(40)
				::phoenix::Vector tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(40)
				Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(40)
				tmp13 = (tmp16 < (int)0);
			}
			else{
				HX_STACK_LINE(40)
				tmp13 = false;
			}
			HX_STACK_LINE(40)
			if ((tmp13)){
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					::phoenix::Vector tmp14 = this->velocity;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(41)
					::phoenix::Vector _g = tmp14;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(41)
					{
						HX_STACK_LINE(41)
						Float tmp15 = (_g->x * (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(41)
						Float _x = tmp15;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(41)
						_g->x = _x;
						HX_STACK_LINE(41)
						bool tmp16 = _g->_construct;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(41)
						if ((tmp16)){
							HX_STACK_LINE(41)
							_g->x;
						}
						else{
							HX_STACK_LINE(41)
							bool tmp17 = (_g->listen_x != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(41)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(41)
							if ((tmp17)){
								HX_STACK_LINE(41)
								bool tmp19 = _g->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(41)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(41)
								tmp18 = !(tmp20);
							}
							else{
								HX_STACK_LINE(41)
								tmp18 = false;
							}
							HX_STACK_LINE(41)
							if ((tmp18)){
								HX_STACK_LINE(41)
								Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(41)
								_g->listen_x(tmp19);
							}
							HX_STACK_LINE(41)
							_g->x;
						}
					}
				}
				HX_STACK_LINE(42)
				bool tmp14 = this->isSuperSlam;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(42)
				if ((tmp14)){
					HX_STACK_LINE(42)
					this->endSuperSlam();
				}
			}
		}
		HX_STACK_LINE(44)
		::phoenix::Vector tmp8 = this->get_pos();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(44)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(44)
		Float tmp10 = this->radius;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(44)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(44)
		::luxe::Core tmp12 = ::Luxe_obj::core;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(44)
		Float tmp13 = tmp12->screen->height;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(44)
		bool tmp14 = (tmp11 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(44)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(44)
		if ((tmp14)){
			HX_STACK_LINE(44)
			::phoenix::Vector tmp16 = this->velocity;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(44)
			::phoenix::Vector tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(44)
			Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(44)
			tmp15 = (tmp18 > (int)0);
		}
		else{
			HX_STACK_LINE(44)
			tmp15 = false;
		}
		HX_STACK_LINE(44)
		if ((tmp15)){
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				::phoenix::Vector tmp16 = this->velocity;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(45)
				::phoenix::Vector _g = tmp16;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					Float tmp17 = (_g->y * (int)-1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(45)
					Float _y = tmp17;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(45)
					_g->y = _y;
					HX_STACK_LINE(45)
					bool tmp18 = _g->_construct;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(45)
					if ((tmp18)){
						HX_STACK_LINE(45)
						_g->y;
					}
					else{
						HX_STACK_LINE(45)
						bool tmp19 = (_g->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(45)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(45)
						if ((tmp19)){
							HX_STACK_LINE(45)
							bool tmp21 = _g->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(45)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(45)
							tmp20 = !(tmp22);
						}
						else{
							HX_STACK_LINE(45)
							tmp20 = false;
						}
						HX_STACK_LINE(45)
						if ((tmp20)){
							HX_STACK_LINE(45)
							Float tmp21 = _y;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(45)
							_g->listen_y(tmp21);
						}
						HX_STACK_LINE(45)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(46)
			bool tmp16 = this->isSuperSlam;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(46)
			if ((tmp16)){
				HX_STACK_LINE(46)
				this->endSuperSlam();
			}
		}
		else{
			HX_STACK_LINE(48)
			::phoenix::Vector tmp16 = this->get_pos();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(48)
			Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(48)
			Float tmp18 = this->radius;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(48)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(48)
			bool tmp20 = (tmp19 < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(48)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(48)
			if ((tmp20)){
				HX_STACK_LINE(48)
				::phoenix::Vector tmp22 = this->velocity;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(48)
				::phoenix::Vector tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(48)
				Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(48)
				tmp21 = (tmp24 < (int)0);
			}
			else{
				HX_STACK_LINE(48)
				tmp21 = false;
			}
			HX_STACK_LINE(48)
			if ((tmp21)){
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(49)
					::phoenix::Vector tmp22 = this->velocity;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(49)
					::phoenix::Vector _g = tmp22;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(49)
					{
						HX_STACK_LINE(49)
						Float tmp23 = (_g->y * (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(49)
						Float _y = tmp23;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(49)
						_g->y = _y;
						HX_STACK_LINE(49)
						bool tmp24 = _g->_construct;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(49)
						if ((tmp24)){
							HX_STACK_LINE(49)
							_g->y;
						}
						else{
							HX_STACK_LINE(49)
							bool tmp25 = (_g->listen_y != null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(49)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(49)
							if ((tmp25)){
								HX_STACK_LINE(49)
								bool tmp27 = _g->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(49)
								bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(49)
								tmp26 = !(tmp28);
							}
							else{
								HX_STACK_LINE(49)
								tmp26 = false;
							}
							HX_STACK_LINE(49)
							if ((tmp26)){
								HX_STACK_LINE(49)
								Float tmp27 = _y;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(49)
								_g->listen_y(tmp27);
							}
							HX_STACK_LINE(49)
							_g->y;
						}
					}
				}
				HX_STACK_LINE(50)
				bool tmp22 = this->isSuperSlam;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(50)
				if ((tmp22)){
					HX_STACK_LINE(50)
					this->endSuperSlam();
				}
			}
		}
		HX_STACK_LINE(54)
		Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::phoenix::Vector tmp17 = this->velocity;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(54)
			::phoenix::Vector _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(54)
			Float tmp18 = (_this->x * _this->x);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(54)
			Float tmp19 = (_this->y * _this->y);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(54)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(54)
			Float tmp21 = (_this->z * _this->z);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(54)
			Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(54)
			tmp16 = ::Math_obj::sqrt(tmp22);
		}
		HX_STACK_LINE(54)
		bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(54)
		if ((tmp17)){
			HX_STACK_LINE(55)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				::phoenix::Vector tmp19 = this->velocity;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(55)
				::phoenix::Vector _this = tmp19;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(55)
				Float tmp20 = (_this->x * _this->x);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(55)
				Float tmp21 = (_this->y * _this->y);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(55)
				Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(55)
				Float tmp23 = (_this->z * _this->z);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(55)
				Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(55)
				tmp18 = ::Math_obj::sqrt(tmp24);
			}
			HX_STACK_LINE(55)
			Float tmp19 = this->frictionPercent;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(55)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(55)
			int tmp21 = this->fictionMaxCoefficient;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(55)
			Float tmp22 = ::Math_obj::min(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(55)
			Float f = tmp22;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(56)
			::phoenix::Vector tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				::phoenix::Vector tmp24 = this->velocity;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(56)
				::phoenix::Vector _this = tmp24;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					Float tmp25 = (_this->x * _this->x);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(56)
					Float tmp26 = (_this->y * _this->y);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(56)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(56)
					Float tmp28 = (_this->z * _this->z);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(56)
					Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(56)
					Float tmp30 = ::Math_obj::sqrt(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(56)
					Float b = tmp30;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(56)
					Float tmp31 = (Float(_this->x) / Float(b));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(56)
					Float tmp32 = (Float(_this->y) / Float(b));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(56)
					Float tmp33 = (Float(_this->z) / Float(b));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(56)
					tmp23 = ::phoenix::Vector_obj::__new(tmp31,tmp32,tmp33,null());
				}
			}
			HX_STACK_LINE(56)
			Float tmp24 = (f * dt);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(56)
			::phoenix::Vector tmp25 = ::phoenix::Vector_obj::Multiply(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(56)
			::phoenix::Vector vF = tmp25;		HX_STACK_VAR(vF,"vF");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				::phoenix::Vector tmp26 = this->velocity;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(57)
				::phoenix::Vector _this = tmp26;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					bool tmp27 = (vF == null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(57)
					if ((tmp27)){
						HX_STACK_LINE(57)
						::luxe::DebugError tmp28 = ::luxe::DebugError_obj::null_assertion(HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a"));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(57)
						HX_STACK_DO_THROW(tmp28);
					}
				}
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					Float tmp27 = (_this->x - vF->x);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(57)
					Float _x = tmp27;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(57)
					Float tmp28 = (_this->y - vF->y);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(57)
					Float _y = tmp28;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(57)
					Float tmp29 = (_this->z - vF->z);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(57)
					Float _z = tmp29;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(57)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(57)
					_this->ignore_listeners = true;
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						_this->x = _x;
						HX_STACK_LINE(57)
						bool tmp30 = _this->_construct;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(57)
						if ((tmp30)){
							HX_STACK_LINE(57)
							_this->x;
						}
						else{
							HX_STACK_LINE(57)
							bool tmp31 = (_this->listen_x != null());		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(57)
							bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(57)
							if ((tmp31)){
								HX_STACK_LINE(57)
								bool tmp33 = _this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(57)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(57)
								tmp32 = !(tmp34);
							}
							else{
								HX_STACK_LINE(57)
								tmp32 = false;
							}
							HX_STACK_LINE(57)
							if ((tmp32)){
								HX_STACK_LINE(57)
								Float tmp33 = _x;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(57)
								_this->listen_x(tmp33);
							}
							HX_STACK_LINE(57)
							_this->x;
						}
					}
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						_this->y = _y;
						HX_STACK_LINE(57)
						bool tmp30 = _this->_construct;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(57)
						if ((tmp30)){
							HX_STACK_LINE(57)
							_this->y;
						}
						else{
							HX_STACK_LINE(57)
							bool tmp31 = (_this->listen_y != null());		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(57)
							bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(57)
							if ((tmp31)){
								HX_STACK_LINE(57)
								bool tmp33 = _this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(57)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(57)
								tmp32 = !(tmp34);
							}
							else{
								HX_STACK_LINE(57)
								tmp32 = false;
							}
							HX_STACK_LINE(57)
							if ((tmp32)){
								HX_STACK_LINE(57)
								Float tmp33 = _y;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(57)
								_this->listen_y(tmp33);
							}
							HX_STACK_LINE(57)
							_this->y;
						}
					}
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						_this->z = _z;
						HX_STACK_LINE(57)
						bool tmp30 = _this->_construct;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(57)
						if ((tmp30)){
							HX_STACK_LINE(57)
							_this->z;
						}
						else{
							HX_STACK_LINE(57)
							bool tmp31 = (_this->listen_z != null());		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(57)
							bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(57)
							if ((tmp31)){
								HX_STACK_LINE(57)
								bool tmp33 = _this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(57)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(57)
								tmp32 = !(tmp34);
							}
							else{
								HX_STACK_LINE(57)
								tmp32 = false;
							}
							HX_STACK_LINE(57)
							if ((tmp32)){
								HX_STACK_LINE(57)
								Float tmp33 = _z;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(57)
								_this->listen_z(tmp33);
							}
							HX_STACK_LINE(57)
							_this->z;
						}
					}
					HX_STACK_LINE(57)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(57)
					bool tmp30 = (_this->listen_x != null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(57)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(57)
					if ((tmp30)){
						HX_STACK_LINE(57)
						bool tmp32 = _this->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(57)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(57)
						tmp31 = !(tmp33);
					}
					else{
						HX_STACK_LINE(57)
						tmp31 = false;
					}
					HX_STACK_LINE(57)
					if ((tmp31)){
						HX_STACK_LINE(57)
						Float tmp32 = _this->x;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(57)
						_this->listen_x(tmp32);
					}
					HX_STACK_LINE(57)
					bool tmp32 = (_this->listen_y != null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(57)
					bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(57)
					if ((tmp32)){
						HX_STACK_LINE(57)
						bool tmp34 = _this->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(57)
						bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(57)
						tmp33 = !(tmp35);
					}
					else{
						HX_STACK_LINE(57)
						tmp33 = false;
					}
					HX_STACK_LINE(57)
					if ((tmp33)){
						HX_STACK_LINE(57)
						Float tmp34 = _this->y;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(57)
						_this->listen_y(tmp34);
					}
					HX_STACK_LINE(57)
					bool tmp34 = (_this->listen_z != null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(57)
					bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(57)
					if ((tmp34)){
						HX_STACK_LINE(57)
						bool tmp36 = _this->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(57)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(57)
						tmp35 = !(tmp37);
					}
					else{
						HX_STACK_LINE(57)
						tmp35 = false;
					}
					HX_STACK_LINE(57)
					if ((tmp35)){
						HX_STACK_LINE(57)
						Float tmp36 = _this->z;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(57)
						_this->listen_z(tmp36);
					}
					HX_STACK_LINE(57)
					_this;
				}
				HX_STACK_LINE(57)
				_this;
			}
		}
		HX_STACK_LINE(61)
		::luxe::Draw tmp18 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(62)
		::phoenix::Vector tmp19 = this->get_pos();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(62)
		Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(63)
		::phoenix::Vector tmp21 = this->get_pos();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(63)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(64)
		Float tmp23 = this->radius;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(64)
		int tmp24 = this->sizeToAtmosphere;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(64)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(67)
		bool tmp26 = this->isSuperSlam;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(67)
		::phoenix::Color tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(67)
		if ((tmp26)){
			HX_STACK_LINE(67)
			tmp27 = ::phoenix::Color_obj::__new((int)1,(int)0,(int)0,((Float)0.5));
		}
		else{
			HX_STACK_LINE(67)
			tmp27 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)1,((Float)0.5));
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp22,Float &tmp20,Float &tmp25,::phoenix::Color &tmp27){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Planet.hx",61,0x3de53f06)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp20,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp22,false);
					__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , tmp25,false);
					__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , true,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)0)),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp27,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(61)
		Dynamic tmp28 = _Function_1_1::Block(tmp22,tmp20,tmp25,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(61)
		tmp18->circle(tmp28);
		HX_STACK_LINE(70)
		::luxe::Draw tmp29 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(71)
		::phoenix::Vector tmp30 = this->get_pos();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(71)
		Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(72)
		::phoenix::Vector tmp32 = this->get_pos();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(72)
		Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(73)
		Float tmp34 = this->radius;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(76)
		bool tmp35 = this->isSuperSlam;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(76)
		::phoenix::Color tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(76)
		if ((tmp35)){
			HX_STACK_LINE(76)
			tmp36 = ::phoenix::Color_obj::__new((int)1,((Float)0.5),(int)0,(int)1);
		}
		else{
			HX_STACK_LINE(76)
			tmp36 = ::phoenix::Color_obj::__new((int)0,(int)1,((Float)0.5),(int)1);
		}
		struct _Function_1_2{
			inline static Dynamic Block( Float &tmp33,::phoenix::Color &tmp36,Float &tmp31,Float &tmp34){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Planet.hx",70,0x3de53f06)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp31,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp33,false);
					__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , tmp34,false);
					__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , true,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)1)),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp36,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(70)
		Dynamic tmp37 = _Function_1_2::Block(tmp33,tmp36,tmp31,tmp34);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(70)
		tmp29->circle(tmp37);
	}
return null();
}


Void Planet_obj::superSlam( ::phoenix::Vector dir){
{
		HX_STACK_FRAME("Planet","superSlam",0x0d13ffaa,"Planet.superSlam","Planet.hx",80,0x3de53f06)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dir,"dir")
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			::phoenix::Vector tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(81)
			::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(81)
			::phoenix::Vector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					Float tmp2 = (dir->x * (int)500);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(81)
					Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(81)
					Float tmp3 = (dir->y * (int)500);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(81)
					Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(81)
					Float tmp4 = (dir->z * (int)500);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(81)
					Float _z = tmp4;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(81)
					bool prev = dir->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(81)
					dir->ignore_listeners = true;
					HX_STACK_LINE(81)
					{
						HX_STACK_LINE(81)
						dir->x = _x;
						HX_STACK_LINE(81)
						bool tmp5 = dir->_construct;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(81)
						if ((tmp5)){
							HX_STACK_LINE(81)
							dir->x;
						}
						else{
							HX_STACK_LINE(81)
							bool tmp6 = (dir->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(81)
							bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(81)
							if ((tmp6)){
								HX_STACK_LINE(81)
								bool tmp8 = dir->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(81)
								bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(81)
								tmp7 = !(tmp9);
							}
							else{
								HX_STACK_LINE(81)
								tmp7 = false;
							}
							HX_STACK_LINE(81)
							if ((tmp7)){
								HX_STACK_LINE(81)
								Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(81)
								dir->listen_x(tmp8);
							}
							HX_STACK_LINE(81)
							dir->x;
						}
					}
					HX_STACK_LINE(81)
					{
						HX_STACK_LINE(81)
						dir->y = _y;
						HX_STACK_LINE(81)
						bool tmp5 = dir->_construct;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(81)
						if ((tmp5)){
							HX_STACK_LINE(81)
							dir->y;
						}
						else{
							HX_STACK_LINE(81)
							bool tmp6 = (dir->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(81)
							bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(81)
							if ((tmp6)){
								HX_STACK_LINE(81)
								bool tmp8 = dir->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(81)
								bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(81)
								tmp7 = !(tmp9);
							}
							else{
								HX_STACK_LINE(81)
								tmp7 = false;
							}
							HX_STACK_LINE(81)
							if ((tmp7)){
								HX_STACK_LINE(81)
								Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(81)
								dir->listen_y(tmp8);
							}
							HX_STACK_LINE(81)
							dir->y;
						}
					}
					HX_STACK_LINE(81)
					{
						HX_STACK_LINE(81)
						dir->z = _z;
						HX_STACK_LINE(81)
						bool tmp5 = dir->_construct;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(81)
						if ((tmp5)){
							HX_STACK_LINE(81)
							dir->z;
						}
						else{
							HX_STACK_LINE(81)
							bool tmp6 = (dir->listen_z != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(81)
							bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(81)
							if ((tmp6)){
								HX_STACK_LINE(81)
								bool tmp8 = dir->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(81)
								bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(81)
								tmp7 = !(tmp9);
							}
							else{
								HX_STACK_LINE(81)
								tmp7 = false;
							}
							HX_STACK_LINE(81)
							if ((tmp7)){
								HX_STACK_LINE(81)
								Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(81)
								dir->listen_z(tmp8);
							}
							HX_STACK_LINE(81)
							dir->z;
						}
					}
					HX_STACK_LINE(81)
					dir->ignore_listeners = prev;
					HX_STACK_LINE(81)
					bool tmp5 = (dir->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(81)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(81)
					if ((tmp5)){
						HX_STACK_LINE(81)
						bool tmp7 = dir->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(81)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(81)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(81)
						tmp6 = false;
					}
					HX_STACK_LINE(81)
					if ((tmp6)){
						HX_STACK_LINE(81)
						Float tmp7 = dir->x;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(81)
						dir->listen_x(tmp7);
					}
					HX_STACK_LINE(81)
					bool tmp7 = (dir->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(81)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(81)
					if ((tmp7)){
						HX_STACK_LINE(81)
						bool tmp9 = dir->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(81)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(81)
						tmp8 = !(tmp10);
					}
					else{
						HX_STACK_LINE(81)
						tmp8 = false;
					}
					HX_STACK_LINE(81)
					if ((tmp8)){
						HX_STACK_LINE(81)
						Float tmp9 = dir->y;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(81)
						dir->listen_y(tmp9);
					}
					HX_STACK_LINE(81)
					bool tmp9 = (dir->listen_z != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(81)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(81)
					if ((tmp9)){
						HX_STACK_LINE(81)
						bool tmp11 = dir->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(81)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(81)
						tmp10 = !(tmp12);
					}
					else{
						HX_STACK_LINE(81)
						tmp10 = false;
					}
					HX_STACK_LINE(81)
					if ((tmp10)){
						HX_STACK_LINE(81)
						Float tmp11 = dir->z;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(81)
						dir->listen_z(tmp11);
					}
					HX_STACK_LINE(81)
					dir;
				}
				HX_STACK_LINE(81)
				tmp1 = dir;
			}
			HX_STACK_LINE(81)
			::phoenix::Vector other = tmp1;		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				bool tmp2 = (other == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(81)
				if ((tmp2)){
					HX_STACK_LINE(81)
					::luxe::DebugError tmp3 = ::luxe::DebugError_obj::null_assertion(HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(81)
					HX_STACK_DO_THROW(tmp3);
				}
			}
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				Float tmp2 = (_this->x + other->x);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(81)
				Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(81)
				Float tmp3 = (_this->y + other->y);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(81)
				Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(81)
				Float tmp4 = (_this->z + other->z);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(81)
				Float _z = tmp4;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(81)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(81)
				_this->ignore_listeners = true;
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					_this->x = _x;
					HX_STACK_LINE(81)
					bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(81)
					if ((tmp5)){
						HX_STACK_LINE(81)
						_this->x;
					}
					else{
						HX_STACK_LINE(81)
						bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(81)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(81)
						if ((tmp6)){
							HX_STACK_LINE(81)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(81)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(81)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(81)
							tmp7 = false;
						}
						HX_STACK_LINE(81)
						if ((tmp7)){
							HX_STACK_LINE(81)
							Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(81)
							_this->listen_x(tmp8);
						}
						HX_STACK_LINE(81)
						_this->x;
					}
				}
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					_this->y = _y;
					HX_STACK_LINE(81)
					bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(81)
					if ((tmp5)){
						HX_STACK_LINE(81)
						_this->y;
					}
					else{
						HX_STACK_LINE(81)
						bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(81)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(81)
						if ((tmp6)){
							HX_STACK_LINE(81)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(81)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(81)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(81)
							tmp7 = false;
						}
						HX_STACK_LINE(81)
						if ((tmp7)){
							HX_STACK_LINE(81)
							Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(81)
							_this->listen_y(tmp8);
						}
						HX_STACK_LINE(81)
						_this->y;
					}
				}
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					_this->z = _z;
					HX_STACK_LINE(81)
					bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(81)
					if ((tmp5)){
						HX_STACK_LINE(81)
						_this->z;
					}
					else{
						HX_STACK_LINE(81)
						bool tmp6 = (_this->listen_z != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(81)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(81)
						if ((tmp6)){
							HX_STACK_LINE(81)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(81)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(81)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(81)
							tmp7 = false;
						}
						HX_STACK_LINE(81)
						if ((tmp7)){
							HX_STACK_LINE(81)
							Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(81)
							_this->listen_z(tmp8);
						}
						HX_STACK_LINE(81)
						_this->z;
					}
				}
				HX_STACK_LINE(81)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(81)
				bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(81)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(81)
				if ((tmp5)){
					HX_STACK_LINE(81)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(81)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(81)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(81)
					tmp6 = false;
				}
				HX_STACK_LINE(81)
				if ((tmp6)){
					HX_STACK_LINE(81)
					Float tmp7 = _this->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(81)
					_this->listen_x(tmp7);
				}
				HX_STACK_LINE(81)
				bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(81)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(81)
				if ((tmp7)){
					HX_STACK_LINE(81)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(81)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(81)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(81)
					tmp8 = false;
				}
				HX_STACK_LINE(81)
				if ((tmp8)){
					HX_STACK_LINE(81)
					Float tmp9 = _this->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(81)
					_this->listen_y(tmp9);
				}
				HX_STACK_LINE(81)
				bool tmp9 = (_this->listen_z != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(81)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(81)
				if ((tmp9)){
					HX_STACK_LINE(81)
					bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(81)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(81)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(81)
					tmp10 = false;
				}
				HX_STACK_LINE(81)
				if ((tmp10)){
					HX_STACK_LINE(81)
					Float tmp11 = _this->z;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(81)
					_this->listen_z(tmp11);
				}
				HX_STACK_LINE(81)
				_this;
			}
			HX_STACK_LINE(81)
			_this;
		}
		HX_STACK_LINE(82)
		this->isSuperSlam = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Planet_obj,superSlam,(void))

Void Planet_obj::endSuperSlam( ){
{
		HX_STACK_FRAME("Planet","endSuperSlam",0x758894fb,"Planet.endSuperSlam","Planet.hx",85,0x3de53f06)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		this->isSuperSlam = false;
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::phoenix::Vector tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(87)
			::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(87)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(87)
			if ((tmp1)){
				HX_STACK_LINE(87)
				Float tmp2 = (Float(_this->x) / Float((int)10));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(87)
				Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(87)
				Float tmp3 = (Float(_this->y) / Float((int)10));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(87)
				Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(87)
				Float tmp4 = (Float(_this->z) / Float((int)10));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(87)
				Float _z = tmp4;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(87)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(87)
				_this->ignore_listeners = true;
				HX_STACK_LINE(87)
				{
					HX_STACK_LINE(87)
					_this->x = _x;
					HX_STACK_LINE(87)
					bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(87)
					if ((tmp5)){
						HX_STACK_LINE(87)
						_this->x;
					}
					else{
						HX_STACK_LINE(87)
						bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(87)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(87)
						if ((tmp6)){
							HX_STACK_LINE(87)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(87)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(87)
							tmp7 = false;
						}
						HX_STACK_LINE(87)
						if ((tmp7)){
							HX_STACK_LINE(87)
							Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							_this->listen_x(tmp8);
						}
						HX_STACK_LINE(87)
						_this->x;
					}
				}
				HX_STACK_LINE(87)
				{
					HX_STACK_LINE(87)
					_this->y = _y;
					HX_STACK_LINE(87)
					bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(87)
					if ((tmp5)){
						HX_STACK_LINE(87)
						_this->y;
					}
					else{
						HX_STACK_LINE(87)
						bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(87)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(87)
						if ((tmp6)){
							HX_STACK_LINE(87)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(87)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(87)
							tmp7 = false;
						}
						HX_STACK_LINE(87)
						if ((tmp7)){
							HX_STACK_LINE(87)
							Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							_this->listen_y(tmp8);
						}
						HX_STACK_LINE(87)
						_this->y;
					}
				}
				HX_STACK_LINE(87)
				{
					HX_STACK_LINE(87)
					_this->z = _z;
					HX_STACK_LINE(87)
					bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(87)
					if ((tmp5)){
						HX_STACK_LINE(87)
						_this->z;
					}
					else{
						HX_STACK_LINE(87)
						bool tmp6 = (_this->listen_z != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(87)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(87)
						if ((tmp6)){
							HX_STACK_LINE(87)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(87)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(87)
							tmp7 = false;
						}
						HX_STACK_LINE(87)
						if ((tmp7)){
							HX_STACK_LINE(87)
							Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							_this->listen_z(tmp8);
						}
						HX_STACK_LINE(87)
						_this->z;
					}
				}
				HX_STACK_LINE(87)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(87)
				bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(87)
				if ((tmp5)){
					HX_STACK_LINE(87)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(87)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(87)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(87)
					tmp6 = false;
				}
				HX_STACK_LINE(87)
				if ((tmp6)){
					HX_STACK_LINE(87)
					Float tmp7 = _this->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(87)
					_this->listen_x(tmp7);
				}
				HX_STACK_LINE(87)
				bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(87)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(87)
				if ((tmp7)){
					HX_STACK_LINE(87)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(87)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(87)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(87)
					tmp8 = false;
				}
				HX_STACK_LINE(87)
				if ((tmp8)){
					HX_STACK_LINE(87)
					Float tmp9 = _this->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(87)
					_this->listen_y(tmp9);
				}
				HX_STACK_LINE(87)
				bool tmp9 = (_this->listen_z != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(87)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(87)
				if ((tmp9)){
					HX_STACK_LINE(87)
					bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(87)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(87)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(87)
					tmp10 = false;
				}
				HX_STACK_LINE(87)
				if ((tmp10)){
					HX_STACK_LINE(87)
					Float tmp11 = _this->z;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(87)
					_this->listen_z(tmp11);
				}
				HX_STACK_LINE(87)
				_this;
			}
			else{
				HX_STACK_LINE(87)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(87)
				_this->ignore_listeners = true;
				HX_STACK_LINE(87)
				{
					HX_STACK_LINE(87)
					_this->x = (int)0;
					HX_STACK_LINE(87)
					bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(87)
					if ((tmp2)){
						HX_STACK_LINE(87)
						_this->x;
					}
					else{
						HX_STACK_LINE(87)
						bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(87)
						bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(87)
						if ((tmp3)){
							HX_STACK_LINE(87)
							bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(87)
							bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(87)
							tmp4 = !(tmp6);
						}
						else{
							HX_STACK_LINE(87)
							tmp4 = false;
						}
						HX_STACK_LINE(87)
						if ((tmp4)){
							HX_STACK_LINE(87)
							_this->listen_x((int)0);
						}
						HX_STACK_LINE(87)
						_this->x;
					}
				}
				HX_STACK_LINE(87)
				{
					HX_STACK_LINE(87)
					_this->y = (int)0;
					HX_STACK_LINE(87)
					bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(87)
					if ((tmp2)){
						HX_STACK_LINE(87)
						_this->y;
					}
					else{
						HX_STACK_LINE(87)
						bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(87)
						bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(87)
						if ((tmp3)){
							HX_STACK_LINE(87)
							bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(87)
							bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(87)
							tmp4 = !(tmp6);
						}
						else{
							HX_STACK_LINE(87)
							tmp4 = false;
						}
						HX_STACK_LINE(87)
						if ((tmp4)){
							HX_STACK_LINE(87)
							_this->listen_y((int)0);
						}
						HX_STACK_LINE(87)
						_this->y;
					}
				}
				HX_STACK_LINE(87)
				{
					HX_STACK_LINE(87)
					_this->z = (int)0;
					HX_STACK_LINE(87)
					bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(87)
					if ((tmp2)){
						HX_STACK_LINE(87)
						_this->z;
					}
					else{
						HX_STACK_LINE(87)
						bool tmp3 = (_this->listen_z != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(87)
						bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(87)
						if ((tmp3)){
							HX_STACK_LINE(87)
							bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(87)
							bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(87)
							tmp4 = !(tmp6);
						}
						else{
							HX_STACK_LINE(87)
							tmp4 = false;
						}
						HX_STACK_LINE(87)
						if ((tmp4)){
							HX_STACK_LINE(87)
							_this->listen_z((int)0);
						}
						HX_STACK_LINE(87)
						_this->z;
					}
				}
				HX_STACK_LINE(87)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(87)
				bool tmp2 = (_this->listen_x != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(87)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(87)
				if ((tmp2)){
					HX_STACK_LINE(87)
					bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(87)
					bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(87)
					tmp3 = !(tmp5);
				}
				else{
					HX_STACK_LINE(87)
					tmp3 = false;
				}
				HX_STACK_LINE(87)
				if ((tmp3)){
					HX_STACK_LINE(87)
					Float tmp4 = _this->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(87)
					_this->listen_x(tmp4);
				}
				HX_STACK_LINE(87)
				bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(87)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				if ((tmp4)){
					HX_STACK_LINE(87)
					bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(87)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(87)
					tmp5 = !(tmp7);
				}
				else{
					HX_STACK_LINE(87)
					tmp5 = false;
				}
				HX_STACK_LINE(87)
				if ((tmp5)){
					HX_STACK_LINE(87)
					Float tmp6 = _this->y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(87)
					_this->listen_y(tmp6);
				}
				HX_STACK_LINE(87)
				bool tmp6 = (_this->listen_z != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(87)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(87)
				if ((tmp6)){
					HX_STACK_LINE(87)
					bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(87)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(87)
					tmp7 = !(tmp9);
				}
				else{
					HX_STACK_LINE(87)
					tmp7 = false;
				}
				HX_STACK_LINE(87)
				if ((tmp7)){
					HX_STACK_LINE(87)
					Float tmp8 = _this->z;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(87)
					_this->listen_z(tmp8);
				}
				HX_STACK_LINE(87)
				_this;
			}
			HX_STACK_LINE(87)
			_this;
		}
		HX_STACK_LINE(88)
		this->splitPlanet();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Planet_obj,endSuperSlam,(void))

Void Planet_obj::slam( Float force,::phoenix::Vector dir){
{
		HX_STACK_FRAME("Planet","slam",0x78341f3b,"Planet.slam","Planet.hx",91,0x3de53f06)
		HX_STACK_THIS(this)
		HX_STACK_ARG(force,"force")
		HX_STACK_ARG(dir,"dir")
		HX_STACK_LINE(92)
		bool tmp = this->isSuperSlam;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		if ((tmp1)){
			HX_STACK_LINE(92)
			::phoenix::Vector tmp2 = this->velocity;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			::phoenix::Vector _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(92)
			::phoenix::Vector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					Float tmp4 = (dir->x * force);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(92)
					Float _x = tmp4;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(92)
					Float tmp5 = (dir->y * force);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(92)
					Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(92)
					Float tmp6 = (dir->z * force);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(92)
					Float _z = tmp6;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(92)
					bool prev = dir->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(92)
					dir->ignore_listeners = true;
					HX_STACK_LINE(92)
					{
						HX_STACK_LINE(92)
						dir->x = _x;
						HX_STACK_LINE(92)
						bool tmp7 = dir->_construct;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(92)
						if ((tmp7)){
							HX_STACK_LINE(92)
							dir->x;
						}
						else{
							HX_STACK_LINE(92)
							bool tmp8 = (dir->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(92)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(92)
							if ((tmp8)){
								HX_STACK_LINE(92)
								bool tmp10 = dir->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(92)
								bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(92)
								tmp9 = !(tmp11);
							}
							else{
								HX_STACK_LINE(92)
								tmp9 = false;
							}
							HX_STACK_LINE(92)
							if ((tmp9)){
								HX_STACK_LINE(92)
								Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(92)
								dir->listen_x(tmp10);
							}
							HX_STACK_LINE(92)
							dir->x;
						}
					}
					HX_STACK_LINE(92)
					{
						HX_STACK_LINE(92)
						dir->y = _y;
						HX_STACK_LINE(92)
						bool tmp7 = dir->_construct;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(92)
						if ((tmp7)){
							HX_STACK_LINE(92)
							dir->y;
						}
						else{
							HX_STACK_LINE(92)
							bool tmp8 = (dir->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(92)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(92)
							if ((tmp8)){
								HX_STACK_LINE(92)
								bool tmp10 = dir->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(92)
								bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(92)
								tmp9 = !(tmp11);
							}
							else{
								HX_STACK_LINE(92)
								tmp9 = false;
							}
							HX_STACK_LINE(92)
							if ((tmp9)){
								HX_STACK_LINE(92)
								Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(92)
								dir->listen_y(tmp10);
							}
							HX_STACK_LINE(92)
							dir->y;
						}
					}
					HX_STACK_LINE(92)
					{
						HX_STACK_LINE(92)
						dir->z = _z;
						HX_STACK_LINE(92)
						bool tmp7 = dir->_construct;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(92)
						if ((tmp7)){
							HX_STACK_LINE(92)
							dir->z;
						}
						else{
							HX_STACK_LINE(92)
							bool tmp8 = (dir->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(92)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(92)
							if ((tmp8)){
								HX_STACK_LINE(92)
								bool tmp10 = dir->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(92)
								bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(92)
								tmp9 = !(tmp11);
							}
							else{
								HX_STACK_LINE(92)
								tmp9 = false;
							}
							HX_STACK_LINE(92)
							if ((tmp9)){
								HX_STACK_LINE(92)
								Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(92)
								dir->listen_z(tmp10);
							}
							HX_STACK_LINE(92)
							dir->z;
						}
					}
					HX_STACK_LINE(92)
					dir->ignore_listeners = prev;
					HX_STACK_LINE(92)
					bool tmp7 = (dir->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(92)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(92)
					if ((tmp7)){
						HX_STACK_LINE(92)
						bool tmp9 = dir->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(92)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(92)
						tmp8 = !(tmp10);
					}
					else{
						HX_STACK_LINE(92)
						tmp8 = false;
					}
					HX_STACK_LINE(92)
					if ((tmp8)){
						HX_STACK_LINE(92)
						Float tmp9 = dir->x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(92)
						dir->listen_x(tmp9);
					}
					HX_STACK_LINE(92)
					bool tmp9 = (dir->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(92)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(92)
					if ((tmp9)){
						HX_STACK_LINE(92)
						bool tmp11 = dir->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(92)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(92)
						tmp10 = !(tmp12);
					}
					else{
						HX_STACK_LINE(92)
						tmp10 = false;
					}
					HX_STACK_LINE(92)
					if ((tmp10)){
						HX_STACK_LINE(92)
						Float tmp11 = dir->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(92)
						dir->listen_y(tmp11);
					}
					HX_STACK_LINE(92)
					bool tmp11 = (dir->listen_z != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(92)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(92)
					if ((tmp11)){
						HX_STACK_LINE(92)
						bool tmp13 = dir->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(92)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(92)
						tmp12 = !(tmp14);
					}
					else{
						HX_STACK_LINE(92)
						tmp12 = false;
					}
					HX_STACK_LINE(92)
					if ((tmp12)){
						HX_STACK_LINE(92)
						Float tmp13 = dir->z;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(92)
						dir->listen_z(tmp13);
					}
					HX_STACK_LINE(92)
					dir;
				}
				HX_STACK_LINE(92)
				tmp3 = dir;
			}
			HX_STACK_LINE(92)
			::phoenix::Vector other = tmp3;		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				bool tmp4 = (other == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(92)
				if ((tmp4)){
					HX_STACK_LINE(92)
					::luxe::DebugError tmp5 = ::luxe::DebugError_obj::null_assertion(HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(92)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				Float tmp4 = (_this->x + other->x);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(92)
				Float _x = tmp4;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(92)
				Float tmp5 = (_this->y + other->y);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(92)
				Float tmp6 = (_this->z + other->z);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				Float _z = tmp6;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(92)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(92)
				_this->ignore_listeners = true;
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					_this->x = _x;
					HX_STACK_LINE(92)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(92)
					if ((tmp7)){
						HX_STACK_LINE(92)
						_this->x;
					}
					else{
						HX_STACK_LINE(92)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(92)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(92)
						if ((tmp8)){
							HX_STACK_LINE(92)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(92)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(92)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(92)
							tmp9 = false;
						}
						HX_STACK_LINE(92)
						if ((tmp9)){
							HX_STACK_LINE(92)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(92)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(92)
						_this->x;
					}
				}
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					_this->y = _y;
					HX_STACK_LINE(92)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(92)
					if ((tmp7)){
						HX_STACK_LINE(92)
						_this->y;
					}
					else{
						HX_STACK_LINE(92)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(92)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(92)
						if ((tmp8)){
							HX_STACK_LINE(92)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(92)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(92)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(92)
							tmp9 = false;
						}
						HX_STACK_LINE(92)
						if ((tmp9)){
							HX_STACK_LINE(92)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(92)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(92)
						_this->y;
					}
				}
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					_this->z = _z;
					HX_STACK_LINE(92)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(92)
					if ((tmp7)){
						HX_STACK_LINE(92)
						_this->z;
					}
					else{
						HX_STACK_LINE(92)
						bool tmp8 = (_this->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(92)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(92)
						if ((tmp8)){
							HX_STACK_LINE(92)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(92)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(92)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(92)
							tmp9 = false;
						}
						HX_STACK_LINE(92)
						if ((tmp9)){
							HX_STACK_LINE(92)
							Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(92)
							_this->listen_z(tmp10);
						}
						HX_STACK_LINE(92)
						_this->z;
					}
				}
				HX_STACK_LINE(92)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(92)
				bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(92)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(92)
				if ((tmp7)){
					HX_STACK_LINE(92)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(92)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(92)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(92)
					tmp8 = false;
				}
				HX_STACK_LINE(92)
				if ((tmp8)){
					HX_STACK_LINE(92)
					Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(92)
					_this->listen_x(tmp9);
				}
				HX_STACK_LINE(92)
				bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(92)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(92)
				if ((tmp9)){
					HX_STACK_LINE(92)
					bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(92)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(92)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(92)
					tmp10 = false;
				}
				HX_STACK_LINE(92)
				if ((tmp10)){
					HX_STACK_LINE(92)
					Float tmp11 = _this->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(92)
					_this->listen_y(tmp11);
				}
				HX_STACK_LINE(92)
				bool tmp11 = (_this->listen_z != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(92)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(92)
				if ((tmp11)){
					HX_STACK_LINE(92)
					bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(92)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(92)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(92)
					tmp12 = false;
				}
				HX_STACK_LINE(92)
				if ((tmp12)){
					HX_STACK_LINE(92)
					Float tmp13 = _this->z;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(92)
					_this->listen_z(tmp13);
				}
				HX_STACK_LINE(92)
				_this;
			}
			HX_STACK_LINE(92)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Planet_obj,slam,(void))

Float Planet_obj::atmosphereRadius( ){
	HX_STACK_FRAME("Planet","atmosphereRadius",0xb2a4c44a,"Planet.atmosphereRadius","Planet.hx",95,0x3de53f06)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	Float tmp = this->radius;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	int tmp1 = this->sizeToAtmosphere;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Planet_obj,atmosphereRadius,return )

bool Planet_obj::collidesWithPlanet( ::Planet p){
	HX_STACK_FRAME("Planet","collidesWithPlanet",0x1d214cc9,"Planet.collidesWithPlanet","Planet.hx",99,0x3de53f06)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(100)
	bool tmp = (p != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	if ((tmp)){
		HX_STACK_LINE(100)
		::phoenix::Vector tmp2 = this->get_pos();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		::phoenix::Vector tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		::phoenix::Vector tmp4 = p->get_pos();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		::phoenix::Vector tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		::phoenix::Vector tmp6 = tmp3;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		::phoenix::Vector tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		Float tmp8 = ::VectorExtender_obj::distance(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(100)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		Float tmp10 = this->radius;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(100)
		Float tmp12 = p->radius;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(100)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(100)
		tmp1 = (tmp9 <= tmp14);
	}
	else{
		HX_STACK_LINE(100)
		tmp1 = false;
	}
	HX_STACK_LINE(100)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Planet_obj,collidesWithPlanet,return )

Void Planet_obj::mergeWithPlanet( ::Planet p){
{
		HX_STACK_FRAME("Planet","mergeWithPlanet",0x5a455c60,"Planet.mergeWithPlanet","Planet.hx",103,0x3de53f06)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(104)
		hx::AddEq(this->points,p->points);
		HX_STACK_LINE(105)
		int tmp = this->points;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		int tmp1 = this->pointsToArea;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		Float tmp3 = ::Math_obj::PI;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		this->radius = tmp5;
		HX_STACK_LINE(106)
		Float tmp6 = this->radius;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(106)
		Float tmp7 = (tmp6 * (int)2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(106)
		Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(106)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(106)
		this->diameter = tmp9;
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			::phoenix::Vector tmp10 = this->velocity;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(108)
			::phoenix::Vector _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(108)
			::phoenix::Vector other = p->velocity;		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(108)
			{
				HX_STACK_LINE(108)
				bool tmp11 = (other == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(108)
				if ((tmp11)){
					HX_STACK_LINE(108)
					::luxe::DebugError tmp12 = ::luxe::DebugError_obj::null_assertion(HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(108)
					HX_STACK_DO_THROW(tmp12);
				}
			}
			HX_STACK_LINE(108)
			{
				HX_STACK_LINE(108)
				Float tmp11 = (_this->x + other->x);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(108)
				Float _x = tmp11;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(108)
				Float tmp12 = (_this->y + other->y);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(108)
				Float _y = tmp12;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(108)
				Float tmp13 = (_this->z + other->z);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(108)
				Float _z = tmp13;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(108)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(108)
				_this->ignore_listeners = true;
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					_this->x = _x;
					HX_STACK_LINE(108)
					bool tmp14 = _this->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(108)
					if ((tmp14)){
						HX_STACK_LINE(108)
						_this->x;
					}
					else{
						HX_STACK_LINE(108)
						bool tmp15 = (_this->listen_x != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(108)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(108)
						if ((tmp15)){
							HX_STACK_LINE(108)
							bool tmp17 = _this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(108)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(108)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(108)
							tmp16 = false;
						}
						HX_STACK_LINE(108)
						if ((tmp16)){
							HX_STACK_LINE(108)
							Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(108)
							_this->listen_x(tmp17);
						}
						HX_STACK_LINE(108)
						_this->x;
					}
				}
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					_this->y = _y;
					HX_STACK_LINE(108)
					bool tmp14 = _this->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(108)
					if ((tmp14)){
						HX_STACK_LINE(108)
						_this->y;
					}
					else{
						HX_STACK_LINE(108)
						bool tmp15 = (_this->listen_y != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(108)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(108)
						if ((tmp15)){
							HX_STACK_LINE(108)
							bool tmp17 = _this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(108)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(108)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(108)
							tmp16 = false;
						}
						HX_STACK_LINE(108)
						if ((tmp16)){
							HX_STACK_LINE(108)
							Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(108)
							_this->listen_y(tmp17);
						}
						HX_STACK_LINE(108)
						_this->y;
					}
				}
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					_this->z = _z;
					HX_STACK_LINE(108)
					bool tmp14 = _this->_construct;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(108)
					if ((tmp14)){
						HX_STACK_LINE(108)
						_this->z;
					}
					else{
						HX_STACK_LINE(108)
						bool tmp15 = (_this->listen_z != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(108)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(108)
						if ((tmp15)){
							HX_STACK_LINE(108)
							bool tmp17 = _this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(108)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(108)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(108)
							tmp16 = false;
						}
						HX_STACK_LINE(108)
						if ((tmp16)){
							HX_STACK_LINE(108)
							Float tmp17 = _z;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(108)
							_this->listen_z(tmp17);
						}
						HX_STACK_LINE(108)
						_this->z;
					}
				}
				HX_STACK_LINE(108)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(108)
				bool tmp14 = (_this->listen_x != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(108)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(108)
				if ((tmp14)){
					HX_STACK_LINE(108)
					bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(108)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(108)
					tmp15 = !(tmp17);
				}
				else{
					HX_STACK_LINE(108)
					tmp15 = false;
				}
				HX_STACK_LINE(108)
				if ((tmp15)){
					HX_STACK_LINE(108)
					Float tmp16 = _this->x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(108)
					_this->listen_x(tmp16);
				}
				HX_STACK_LINE(108)
				bool tmp16 = (_this->listen_y != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(108)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(108)
				if ((tmp16)){
					HX_STACK_LINE(108)
					bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(108)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(108)
					tmp17 = !(tmp19);
				}
				else{
					HX_STACK_LINE(108)
					tmp17 = false;
				}
				HX_STACK_LINE(108)
				if ((tmp17)){
					HX_STACK_LINE(108)
					Float tmp18 = _this->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(108)
					_this->listen_y(tmp18);
				}
				HX_STACK_LINE(108)
				bool tmp18 = (_this->listen_z != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(108)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(108)
				if ((tmp18)){
					HX_STACK_LINE(108)
					bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(108)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(108)
					tmp19 = !(tmp21);
				}
				else{
					HX_STACK_LINE(108)
					tmp19 = false;
				}
				HX_STACK_LINE(108)
				if ((tmp19)){
					HX_STACK_LINE(108)
					Float tmp20 = _this->z;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(108)
					_this->listen_z(tmp20);
				}
				HX_STACK_LINE(108)
				_this;
			}
			HX_STACK_LINE(108)
			_this;
		}
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(110)
			Array< ::Dynamic > _g1 = p->players;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(110)
			while((true)){
				HX_STACK_LINE(110)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(110)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(110)
				if ((tmp11)){
					HX_STACK_LINE(110)
					break;
				}
				HX_STACK_LINE(110)
				::Player tmp12 = _g1->__get(_g).StaticCast< ::Player >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(110)
				::Player pl = tmp12;		HX_STACK_VAR(pl,"pl");
				HX_STACK_LINE(110)
				++(_g);
				HX_STACK_LINE(117)
				::Main tmp13 = ::Main_obj::instance;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(117)
				::Player tmp14 = pl;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(117)
				tmp13->needsNewHome->push(tmp14);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Planet_obj,mergeWithPlanet,(void))

Void Planet_obj::splitPlanet( ){
{
		HX_STACK_FRAME("Planet","splitPlanet",0x717c7e5c,"Planet.splitPlanet","Planet.hx",121,0x3de53f06)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		int tmp = this->points;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		bool tmp1 = (tmp > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		if ((tmp1)){
			HX_STACK_LINE(123)
			int tmp2 = this->points;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(123)
			int remainingPoints = tmp2;		HX_STACK_VAR(remainingPoints,"remainingPoints");
			HX_STACK_LINE(124)
			while((true)){
				HX_STACK_LINE(124)
				bool tmp3 = (remainingPoints > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(124)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(124)
				if ((tmp4)){
					HX_STACK_LINE(124)
					break;
				}
				HX_STACK_LINE(125)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(125)
				{
					HX_STACK_LINE(125)
					::luxe::utils::Utils tmp6 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(125)
					::luxe::utils::Random _this = tmp6->random;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(125)
					Float min = (int)1;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(125)
					int tmp7 = this->points;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(125)
					Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(125)
					Dynamic max = tmp8;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(125)
					bool tmp9 = (max == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(125)
					if ((tmp9)){
						HX_STACK_LINE(125)
						max = min;
						HX_STACK_LINE(125)
						min = (int)0;
					}
					HX_STACK_LINE(125)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(125)
					{
						HX_STACK_LINE(125)
						Float min1 = min;		HX_STACK_VAR(min1,"min1");
						HX_STACK_LINE(125)
						Dynamic max1 = max;		HX_STACK_VAR(max1,"max1");
						HX_STACK_LINE(125)
						bool tmp11 = (max1 == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(125)
						if ((tmp11)){
							HX_STACK_LINE(125)
							max1 = min1;
							HX_STACK_LINE(125)
							min1 = (int)0;
						}
						HX_STACK_LINE(125)
						Float tmp12 = (_this->seed * (int)16807);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(125)
						Float tmp13 = hx::Mod(tmp12,(int)2147483647);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(125)
						Float tmp14 = _this->seed = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(125)
						Float tmp15 = (Float(tmp14) / Float((int)2147483647));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(125)
						Float tmp16 = (tmp15 + ((Float)0.000000000233));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(125)
						Float tmp17 = (max1 - min1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(125)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(125)
						Float tmp19 = min1;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(125)
						tmp10 = (tmp18 + tmp19);
					}
					HX_STACK_LINE(125)
					tmp5 = ::Math_obj::floor(tmp10);
				}
				HX_STACK_LINE(125)
				int p = tmp5;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(126)
				bool tmp6 = (p > remainingPoints);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(126)
				if ((tmp6)){
					HX_STACK_LINE(126)
					p = remainingPoints;
				}
				HX_STACK_LINE(127)
				hx::SubEq(remainingPoints,p);
				HX_STACK_LINE(129)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(129)
				{
					HX_STACK_LINE(129)
					::luxe::utils::Utils tmp8 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(129)
					::luxe::utils::Random _this = tmp8->random;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(129)
					Float tmp9 = this->radius;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(129)
					Float tmp10 = (tmp9 * (int)2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(129)
					Float min = tmp10;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(129)
					Float tmp11 = this->radius;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(129)
					Float tmp12 = (tmp11 * ((Float)0.7));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(129)
					Dynamic max = tmp12;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(129)
					bool tmp13 = (max == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(129)
					if ((tmp13)){
						HX_STACK_LINE(129)
						max = min;
						HX_STACK_LINE(129)
						min = (int)0;
					}
					HX_STACK_LINE(129)
					Float tmp14 = (_this->seed * (int)16807);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(129)
					Float tmp15 = hx::Mod(tmp14,(int)2147483647);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(129)
					Float tmp16 = _this->seed = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(129)
					Float tmp17 = (Float(tmp16) / Float((int)2147483647));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(129)
					Float tmp18 = (tmp17 + ((Float)0.000000000233));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(129)
					Float tmp19 = (max - min);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(129)
					Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(129)
					Float tmp21 = min;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(129)
					tmp7 = (tmp20 + tmp21);
				}
				HX_STACK_LINE(129)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(129)
				{
					HX_STACK_LINE(129)
					::luxe::utils::Utils tmp9 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(129)
					::luxe::utils::Random _this = tmp9->random;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(129)
					Float chance = ((Float)0.5);		HX_STACK_VAR(chance,"chance");
					HX_STACK_LINE(129)
					Float tmp10 = (_this->seed * (int)16807);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(129)
					Float tmp11 = hx::Mod(tmp10,(int)2147483647);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(129)
					Float tmp12 = _this->seed = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(129)
					Float tmp13 = (Float(tmp12) / Float((int)2147483647));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(129)
					Float tmp14 = (tmp13 + ((Float)0.000000000233));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(129)
					Float tmp15 = chance;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(129)
					bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(129)
					if ((tmp16)){
						HX_STACK_LINE(129)
						tmp8 = (int)1;
					}
					else{
						HX_STACK_LINE(129)
						tmp8 = (int)-1;
					}
				}
				HX_STACK_LINE(129)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(129)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(129)
				{
					HX_STACK_LINE(129)
					::luxe::utils::Utils tmp11 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(129)
					::luxe::utils::Random _this = tmp11->random;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(129)
					Float tmp12 = this->radius;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(129)
					Float tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(129)
					Float min = tmp13;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(129)
					Float tmp14 = this->radius;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(129)
					Float tmp15 = (tmp14 * ((Float)0.7));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(129)
					Dynamic max = tmp15;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(129)
					bool tmp16 = (max == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(129)
					if ((tmp16)){
						HX_STACK_LINE(129)
						max = min;
						HX_STACK_LINE(129)
						min = (int)0;
					}
					HX_STACK_LINE(129)
					Float tmp17 = (_this->seed * (int)16807);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(129)
					Float tmp18 = hx::Mod(tmp17,(int)2147483647);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(129)
					Float tmp19 = _this->seed = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(129)
					Float tmp20 = (Float(tmp19) / Float((int)2147483647));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(129)
					Float tmp21 = (tmp20 + ((Float)0.000000000233));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(129)
					Float tmp22 = (max - min);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(129)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(129)
					Float tmp24 = min;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(129)
					tmp10 = (tmp23 + tmp24);
				}
				HX_STACK_LINE(129)
				int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(129)
				{
					HX_STACK_LINE(129)
					::luxe::utils::Utils tmp12 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(129)
					::luxe::utils::Random _this = tmp12->random;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(129)
					Float chance = ((Float)0.5);		HX_STACK_VAR(chance,"chance");
					HX_STACK_LINE(129)
					Float tmp13 = (_this->seed * (int)16807);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(129)
					Float tmp14 = hx::Mod(tmp13,(int)2147483647);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(129)
					Float tmp15 = _this->seed = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(129)
					Float tmp16 = (Float(tmp15) / Float((int)2147483647));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(129)
					Float tmp17 = (tmp16 + ((Float)0.000000000233));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(129)
					Float tmp18 = chance;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(129)
					bool tmp19 = (tmp17 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(129)
					if ((tmp19)){
						HX_STACK_LINE(129)
						tmp11 = (int)1;
					}
					else{
						HX_STACK_LINE(129)
						tmp11 = (int)-1;
					}
				}
				HX_STACK_LINE(129)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(129)
				::phoenix::Vector tmp13 = ::phoenix::Vector_obj::__new(tmp9,tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(129)
				::phoenix::Vector divergence = tmp13;		HX_STACK_VAR(divergence,"divergence");
				HX_STACK_LINE(131)
				::phoenix::Vector tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(131)
				{
					HX_STACK_LINE(131)
					::phoenix::Vector tmp15 = this->get_pos();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(131)
					::phoenix::Vector a = tmp15;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(131)
					Float tmp16 = (a->x + divergence->x);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(131)
					Float tmp17 = (a->y + divergence->y);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(131)
					Float tmp18 = (a->z + divergence->z);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(131)
					tmp14 = ::phoenix::Vector_obj::__new(tmp16,tmp17,tmp18,null());
				}
				struct _Function_3_1{
					inline static Dynamic Block( ::phoenix::Vector &tmp14){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Planet.hx",131,0x3de53f06)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp14,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(131)
				Dynamic tmp15 = _Function_3_1::Block(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(131)
				int tmp16 = p;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(131)
				::Planet tmp17 = ::Planet_obj::__new(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(131)
				::Planet planetlet = tmp17;		HX_STACK_VAR(planetlet,"planetlet");
				HX_STACK_LINE(133)
				::phoenix::Vector tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(133)
				{
					HX_STACK_LINE(133)
					Float tmp19 = (divergence->x * divergence->x);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(133)
					Float tmp20 = (divergence->y * divergence->y);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(133)
					Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(133)
					Float tmp22 = (divergence->z * divergence->z);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(133)
					Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(133)
					Float tmp24 = ::Math_obj::sqrt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(133)
					Float b = tmp24;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(133)
					Float tmp25 = (Float(divergence->x) / Float(b));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(133)
					Float tmp26 = (Float(divergence->y) / Float(b));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(133)
					Float tmp27 = (Float(divergence->z) / Float(b));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(133)
					tmp18 = ::phoenix::Vector_obj::__new(tmp25,tmp26,tmp27,null());
				}
				HX_STACK_LINE(133)
				::phoenix::Vector tmp19 = ::phoenix::Vector_obj::Multiply(tmp18,(int)10);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(133)
				planetlet->velocity = tmp19;
				HX_STACK_LINE(135)
				::Main tmp20 = ::Main_obj::instance;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(135)
				::Planet tmp21 = planetlet;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(135)
				tmp20->planets->push(tmp21);
			}
		}
		HX_STACK_LINE(147)
		::Main tmp2 = ::Main_obj::instance;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		tmp2->planetRemovalList->push(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(162)
			Array< ::Dynamic > _g1 = this->players;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(162)
			while((true)){
				HX_STACK_LINE(162)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(162)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(162)
				if ((tmp4)){
					HX_STACK_LINE(162)
					break;
				}
				HX_STACK_LINE(162)
				::Player tmp5 = _g1->__get(_g).StaticCast< ::Player >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(162)
				::Player pl = tmp5;		HX_STACK_VAR(pl,"pl");
				HX_STACK_LINE(162)
				++(_g);
				HX_STACK_LINE(163)
				::Main tmp6 = ::Main_obj::instance;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(163)
				::Player tmp7 = pl;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(163)
				tmp6->needsNewHome->push(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Planet_obj,splitPlanet,(void))

Void Planet_obj::init( ){
{
		HX_STACK_FRAME("Planet","init",0x71998886,"Planet.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void Planet_obj::ondestroy( ){
{
		HX_STACK_FRAME("Planet","ondestroy",0xe726e485,"Planet.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Planet_obj::Planet_obj()
{
}

void Planet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Planet);
	HX_MARK_MEMBER_NAME(pointsToArea,"pointsToArea");
	HX_MARK_MEMBER_NAME(sizeToAtmosphere,"sizeToAtmosphere");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(radius,"radius");
	HX_MARK_MEMBER_NAME(diameter,"diameter");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(frictionPercent,"frictionPercent");
	HX_MARK_MEMBER_NAME(fictionMaxCoefficient,"fictionMaxCoefficient");
	HX_MARK_MEMBER_NAME(isSuperSlam,"isSuperSlam");
	HX_MARK_MEMBER_NAME(players,"players");
	::luxe::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Planet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pointsToArea,"pointsToArea");
	HX_VISIT_MEMBER_NAME(sizeToAtmosphere,"sizeToAtmosphere");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(radius,"radius");
	HX_VISIT_MEMBER_NAME(diameter,"diameter");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(frictionPercent,"frictionPercent");
	HX_VISIT_MEMBER_NAME(fictionMaxCoefficient,"fictionMaxCoefficient");
	HX_VISIT_MEMBER_NAME(isSuperSlam,"isSuperSlam");
	HX_VISIT_MEMBER_NAME(players,"players");
	::luxe::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Planet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"slam") ) { return slam_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"players") ) { return players; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"diameter") ) { return diameter; }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"superSlam") ) { return superSlam_dyn(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSuperSlam") ) { return isSuperSlam; }
		if (HX_FIELD_EQ(inName,"splitPlanet") ) { return splitPlanet_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pointsToArea") ) { return pointsToArea; }
		if (HX_FIELD_EQ(inName,"endSuperSlam") ) { return endSuperSlam_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"frictionPercent") ) { return frictionPercent; }
		if (HX_FIELD_EQ(inName,"mergeWithPlanet") ) { return mergeWithPlanet_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sizeToAtmosphere") ) { return sizeToAtmosphere; }
		if (HX_FIELD_EQ(inName,"atmosphereRadius") ) { return atmosphereRadius_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"collidesWithPlanet") ) { return collidesWithPlanet_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"fictionMaxCoefficient") ) { return fictionMaxCoefficient; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Planet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"players") ) { players=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"diameter") ) { diameter=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSuperSlam") ) { isSuperSlam=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pointsToArea") ) { pointsToArea=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"frictionPercent") ) { frictionPercent=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sizeToAtmosphere") ) { sizeToAtmosphere=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"fictionMaxCoefficient") ) { fictionMaxCoefficient=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Planet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Planet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pointsToArea","\x2b","\x39","\x39","\x6a"));
	outFields->push(HX_HCSTRING("sizeToAtmosphere","\x9e","\x7f","\x2e","\xdc"));
	outFields->push(HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"));
	outFields->push(HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"));
	outFields->push(HX_HCSTRING("diameter","\xcd","\x6e","\x68","\x34"));
	outFields->push(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"));
	outFields->push(HX_HCSTRING("frictionPercent","\xeb","\xcc","\x44","\xaa"));
	outFields->push(HX_HCSTRING("fictionMaxCoefficient","\xe5","\x0c","\xf6","\xe9"));
	outFields->push(HX_HCSTRING("isSuperSlam","\x96","\x8f","\x4d","\x33"));
	outFields->push(HX_HCSTRING("players","\xf2","\x09","\x15","\x8a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Planet_obj,pointsToArea),HX_HCSTRING("pointsToArea","\x2b","\x39","\x39","\x6a")},
	{hx::fsInt,(int)offsetof(Planet_obj,sizeToAtmosphere),HX_HCSTRING("sizeToAtmosphere","\x9e","\x7f","\x2e","\xdc")},
	{hx::fsInt,(int)offsetof(Planet_obj,points),HX_HCSTRING("points","\x23","\x12","\x2e","\xf7")},
	{hx::fsFloat,(int)offsetof(Planet_obj,radius),HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0")},
	{hx::fsFloat,(int)offsetof(Planet_obj,diameter),HX_HCSTRING("diameter","\xcd","\x6e","\x68","\x34")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Planet_obj,velocity),HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e")},
	{hx::fsFloat,(int)offsetof(Planet_obj,frictionPercent),HX_HCSTRING("frictionPercent","\xeb","\xcc","\x44","\xaa")},
	{hx::fsInt,(int)offsetof(Planet_obj,fictionMaxCoefficient),HX_HCSTRING("fictionMaxCoefficient","\xe5","\x0c","\xf6","\xe9")},
	{hx::fsBool,(int)offsetof(Planet_obj,isSuperSlam),HX_HCSTRING("isSuperSlam","\x96","\x8f","\x4d","\x33")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Planet_obj,players),HX_HCSTRING("players","\xf2","\x09","\x15","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pointsToArea","\x2b","\x39","\x39","\x6a"),
	HX_HCSTRING("sizeToAtmosphere","\x9e","\x7f","\x2e","\xdc"),
	HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"),
	HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"),
	HX_HCSTRING("diameter","\xcd","\x6e","\x68","\x34"),
	HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"),
	HX_HCSTRING("frictionPercent","\xeb","\xcc","\x44","\xaa"),
	HX_HCSTRING("fictionMaxCoefficient","\xe5","\x0c","\xf6","\xe9"),
	HX_HCSTRING("isSuperSlam","\x96","\x8f","\x4d","\x33"),
	HX_HCSTRING("players","\xf2","\x09","\x15","\x8a"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("superSlam","\xe0","\xd8","\xcc","\x54"),
	HX_HCSTRING("endSuperSlam","\x85","\xe1","\xce","\x63"),
	HX_HCSTRING("slam","\xc5","\xd1","\x55","\x4c"),
	HX_HCSTRING("atmosphereRadius","\xd4","\x1d","\x4d","\x25"),
	HX_HCSTRING("collidesWithPlanet","\xd3","\x9c","\xba","\xcd"),
	HX_HCSTRING("mergeWithPlanet","\x16","\x02","\x2e","\xb3"),
	HX_HCSTRING("splitPlanet","\x12","\x91","\x06","\xbc"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Planet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Planet_obj::__mClass,"__mClass");
};

#endif

hx::Class Planet_obj::__mClass;

void Planet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Planet","\xb8","\x06","\x45","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Planet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Planet_obj >;
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

