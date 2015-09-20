#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Planet
#include <Planet.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_VectorExtender
#include <VectorExtender.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
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

Void Player_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",8,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(39)
	this->moveMode = (int)0;
	HX_STACK_LINE(37)
	this->canHop = true;
	HX_STACK_LINE(34)
	this->isSuperSlam = false;
	HX_STACK_LINE(33)
	this->maxSlamSpeed = ((Float)500.0);
	HX_STACK_LINE(32)
	this->minSlamSpeed = ((Float)100.0);
	HX_STACK_LINE(31)
	this->slamSpeed = ((Float)0.0);
	HX_STACK_LINE(30)
	this->slamChargeTimerMax = ((Float)1.0);
	HX_STACK_LINE(29)
	this->slamChargeTimer = ((Float)0.0);
	HX_STACK_LINE(26)
	this->jumpBoostTimerMax = ((Float)1.0);
	HX_STACK_LINE(25)
	this->jumpBoostTimer = ((Float)0.0);
	HX_STACK_LINE(24)
	this->jumpBoostForce = ((Float)500.0);
	HX_STACK_LINE(21)
	this->gravityForce = ((Float)500.0);
	HX_STACK_LINE(20)
	this->jumpForce = ((Float)100.0);
	HX_STACK_LINE(17)
	this->height = ((Float)0.0);
	HX_STACK_LINE(14)
	this->speed = ((Float)30.0);
	HX_STACK_LINE(13)
	this->location = ((Float)0.0);
	HX_STACK_LINE(10)
	this->size = (int)10;
	HX_STACK_LINE(45)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	super::__construct(tmp);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Player_obj::update( Float dt){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",48,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(50)
		Float chargeScale = ((Float)1.0);		HX_STACK_VAR(chargeScale,"chargeScale");
		HX_STACK_LINE(52)
		::Planet tmp = this->planet;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		if ((tmp1)){
			HX_STACK_LINE(54)
			int tmp2 = this->moveMode;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			if ((tmp3)){
				HX_STACK_LINE(55)
				this->height = (int)0;
				HX_STACK_LINE(57)
				Float tmp4 = this->location;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				Float tmp5 = this->speed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(57)
				Float tmp6 = dt;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(57)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(57)
				Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(57)
				::Planet tmp9 = this->planet;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(57)
				Float tmp10 = tmp9->diameter;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(57)
				Float tmp11 = hx::Mod(tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(57)
				this->location = tmp11;
			}
			HX_STACK_LINE(59)
			int tmp4 = this->moveMode;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(59)
			bool tmp5 = (tmp4 == (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(59)
			if ((tmp5)){
				HX_STACK_LINE(60)
				Float tmp6 = this->jumpSpeed;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(60)
				Float tmp7 = dt;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(60)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(60)
				hx::AddEq(this->height,tmp8);
				HX_STACK_LINE(61)
				Float tmp9 = this->gravityForce;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(61)
				Float tmp10 = dt;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(61)
				Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(61)
				hx::SubEq(this->jumpSpeed,tmp11);
				HX_STACK_LINE(63)
				hx::AddEq(this->jumpBoostTimer,dt);
				HX_STACK_LINE(64)
				Float tmp12 = this->jumpBoostTimer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(64)
				Float tmp13 = this->jumpBoostTimerMax;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(64)
				bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(64)
				if ((tmp14)){
					HX_STACK_LINE(64)
					Float tmp15 = this->jumpBoostForce;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(64)
					Float tmp16 = dt;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(64)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(64)
					hx::AddEq(this->jumpSpeed,tmp17);
				}
				HX_STACK_LINE(66)
				Float tmp15 = this->height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(66)
				bool tmp16 = (tmp15 <= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(66)
				if ((tmp16)){
					HX_STACK_LINE(67)
					this->land();
				}
				HX_STACK_LINE(71)
				Float tmp17 = this->location;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(71)
				Float tmp18 = this->speed;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(71)
				Float tmp19 = dt;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(71)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(71)
				Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(71)
				::Planet tmp22 = this->planet;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(71)
				Float tmp23 = tmp22->diameter;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(71)
				Float tmp24 = hx::Mod(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(71)
				this->location = tmp24;
			}
			else{
				HX_STACK_LINE(73)
				int tmp6 = this->moveMode;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				bool tmp7 = (tmp6 == (int)2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				if ((tmp7)){
					HX_STACK_LINE(74)
					hx::AddEq(this->slamChargeTimer,dt);
					HX_STACK_LINE(76)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(76)
						Float tmp9 = this->slamChargeTimer;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(76)
						Float tmp10 = this->slamChargeTimerMax;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(76)
						Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(76)
						Float t = tmp11;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(76)
						bool tmp12 = (t < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(76)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(76)
						if ((tmp12)){
							HX_STACK_LINE(76)
							tmp13 = (int)0;
						}
						else{
							HX_STACK_LINE(76)
							bool tmp14 = (t > (int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(76)
							if ((tmp14)){
								HX_STACK_LINE(76)
								tmp13 = (int)1;
							}
							else{
								HX_STACK_LINE(76)
								tmp13 = t;
							}
						}
						HX_STACK_LINE(76)
						t = tmp13;
						HX_STACK_LINE(76)
						Float tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(76)
						Float tmp15 = ((Float)1.);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(76)
						Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(76)
						tmp8 = (((Float)1.0) + tmp16);
					}
					HX_STACK_LINE(76)
					chargeScale = tmp8;
					HX_STACK_LINE(78)
					Float tmp9 = this->slamChargeTimer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(78)
					Float tmp10 = this->slamChargeTimerMax;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(78)
					bool tmp11 = (tmp9 >= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(78)
					if ((tmp11)){
						HX_STACK_LINE(81)
						this->isSuperSlam = true;
					}
				}
				else{
					HX_STACK_LINE(84)
					int tmp8 = this->moveMode;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(84)
					bool tmp9 = (tmp8 == (int)3);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(84)
					if ((tmp9)){
						HX_STACK_LINE(85)
						Float tmp10 = this->gravityForce;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(85)
						Float tmp11 = dt;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(85)
						Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(85)
						hx::AddEq(this->slamSpeed,tmp12);
						HX_STACK_LINE(86)
						Float tmp13 = this->slamSpeed;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(86)
						Float tmp14 = dt;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(86)
						Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(86)
						hx::SubEq(this->height,tmp15);
						HX_STACK_LINE(88)
						Float tmp16 = this->height;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(88)
						bool tmp17 = (tmp16 <= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(88)
						if ((tmp17)){
							HX_STACK_LINE(89)
							this->land();
						}
					}
				}
			}
			HX_STACK_LINE(94)
			Float tmp6 = this->location;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(94)
			::Planet tmp7 = this->planet;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			Float tmp8 = tmp7->diameter;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(94)
			Float tmp10 = (tmp9 * (int)2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(94)
			Float tmp11 = ::Math_obj::PI;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(94)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(94)
			Float locRadians = tmp12;		HX_STACK_VAR(locRadians,"locRadians");
			HX_STACK_LINE(95)
			::phoenix::Vector tmp13 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(95)
			Float tmp14 = locRadians;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(95)
			::phoenix::Vector tmp15 = ::VectorExtender_obj::setFromAngle(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(95)
			::phoenix::Vector unitVec = tmp15;		HX_STACK_VAR(unitVec,"unitVec");
			HX_STACK_LINE(97)
			::phoenix::Vector tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				::Planet tmp17 = this->planet;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(97)
				::phoenix::Vector tmp18 = tmp17->get_pos();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(97)
				::phoenix::Vector a = tmp18;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(97)
				::phoenix::Vector tmp19 = unitVec;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(97)
				::Planet tmp20 = this->planet;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(97)
				Float tmp21 = tmp20->radius;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(97)
				Float tmp22 = this->height;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(97)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(97)
				int tmp24 = this->size;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(97)
				Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(97)
				::phoenix::Vector tmp26 = ::phoenix::Vector_obj::Multiply(tmp19,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(97)
				::phoenix::Vector b = tmp26;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(97)
				Float tmp27 = (a->x + b->x);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(97)
				Float tmp28 = (a->y + b->y);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(97)
				Float tmp29 = (a->z + b->z);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(97)
				tmp16 = ::phoenix::Vector_obj::__new(tmp27,tmp28,tmp29,null());
			}
			HX_STACK_LINE(97)
			this->set_pos(tmp16);
		}
		HX_STACK_LINE(102)
		::luxe::Draw tmp2 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		::phoenix::Vector tmp3 = this->get_pos();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		::phoenix::Vector tmp5 = this->get_pos();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		int tmp7 = this->size;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		Float tmp8 = chargeScale;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(105)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(108)
		bool tmp10 = this->isSuperSlam;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(108)
		::phoenix::Color tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(108)
		if ((tmp10)){
			HX_STACK_LINE(108)
			tmp11 = ::phoenix::Color_obj::__new((int)1,(int)0,(int)0,null());
		}
		else{
			HX_STACK_LINE(108)
			tmp11 = this->color;
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp6,Float &tmp9,::phoenix::Color &tmp11,Float &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",102,0xa27fc9dd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp4,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp6,false);
					__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , tmp9,false);
					__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , true,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)2)),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp11,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(102)
		Dynamic tmp12 = _Function_1_1::Block(tmp6,tmp9,tmp11,tmp4);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(102)
		tmp2->circle(tmp12);
	}
return null();
}


Void Player_obj::jump( ){
{
		HX_STACK_FRAME("Player","jump",0x1abc40fb,"Player.jump","Player.hx",112,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		bool tmp = this->isJumping;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		if ((tmp1)){
			HX_STACK_LINE(115)
			this->moveMode = (int)1;
			HX_STACK_LINE(116)
			Float tmp2 = this->jumpForce;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(116)
			this->jumpSpeed = tmp2;
			HX_STACK_LINE(117)
			this->jumpBoostTimer = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,jump,(void))

Void Player_obj::fall( ){
{
		HX_STACK_FRAME("Player","fall",0x18083888,"Player.fall","Player.hx",121,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		this->moveMode = (int)1;
		HX_STACK_LINE(123)
		this->jumpSpeed = (int)0;
		HX_STACK_LINE(124)
		Float tmp = this->jumpBoostTimerMax;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		this->jumpBoostTimer = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,fall,(void))

Void Player_obj::stopJumpBoost( ){
{
		HX_STACK_FRAME("Player","stopJumpBoost",0xed192d46,"Player.stopJumpBoost","Player.hx",127,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(128)
		Float tmp = this->jumpBoostTimerMax;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		this->jumpBoostTimer = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,stopJumpBoost,(void))

Void Player_obj::land( ){
{
		HX_STACK_FRAME("Player","land",0x1bff81f8,"Player.land","Player.hx",131,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(132)
		int tmp = this->moveMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		bool tmp1 = (tmp == (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		if ((tmp1)){
			HX_STACK_LINE(132)
			::Planet tmp3 = this->planet;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			::Planet tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(132)
			tmp2 = false;
		}
		HX_STACK_LINE(132)
		if ((tmp2)){
			HX_STACK_LINE(133)
			::phoenix::Vector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				::Planet tmp4 = this->planet;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(133)
				::phoenix::Vector tmp5 = tmp4->get_pos();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(133)
				::phoenix::Vector a = tmp5;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(133)
				::phoenix::Vector tmp6 = this->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(133)
				::phoenix::Vector b = tmp6;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(133)
				Float tmp7 = (a->x - b->x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(133)
				Float tmp8 = (a->y - b->y);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(133)
				Float tmp9 = (a->z - b->z);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(133)
				tmp3 = ::phoenix::Vector_obj::__new(tmp7,tmp8,tmp9,null());
			}
			HX_STACK_LINE(133)
			::phoenix::Vector delta = tmp3;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(135)
			bool tmp4 = this->isSuperSlam;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			if ((tmp4)){
				HX_STACK_LINE(136)
				::Planet tmp5 = this->planet;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(136)
				::phoenix::Vector tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(136)
				{
					HX_STACK_LINE(136)
					Float tmp7 = (delta->x * delta->x);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(136)
					Float tmp8 = (delta->y * delta->y);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(136)
					Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(136)
					Float tmp10 = (delta->z * delta->z);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(136)
					Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(136)
					Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(136)
					Float b = tmp12;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(136)
					Float tmp13 = (Float(delta->x) / Float(b));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(136)
					Float tmp14 = (Float(delta->y) / Float(b));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(136)
					Float tmp15 = (Float(delta->z) / Float(b));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(136)
					tmp6 = ::phoenix::Vector_obj::__new(tmp13,tmp14,tmp15,null());
				}
				HX_STACK_LINE(136)
				tmp5->superSlam(tmp6);
			}
			else{
				HX_STACK_LINE(139)
				::Planet tmp5 = this->planet;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(139)
				Float tmp6 = this->slamSpeed;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(139)
				Float tmp7 = (Float(tmp6) / Float((int)10));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(139)
				::phoenix::Vector tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(139)
				{
					HX_STACK_LINE(139)
					Float tmp9 = (delta->x * delta->x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(139)
					Float tmp10 = (delta->y * delta->y);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(139)
					Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(139)
					Float tmp12 = (delta->z * delta->z);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(139)
					Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(139)
					Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(139)
					Float b = tmp14;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(139)
					Float tmp15 = (Float(delta->x) / Float(b));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(139)
					Float tmp16 = (Float(delta->y) / Float(b));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(139)
					Float tmp17 = (Float(delta->z) / Float(b));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(139)
					tmp8 = ::phoenix::Vector_obj::__new(tmp15,tmp16,tmp17,null());
				}
				HX_STACK_LINE(139)
				tmp5->slam(tmp7,tmp8);
			}
		}
		HX_STACK_LINE(143)
		this->isSuperSlam = false;
		HX_STACK_LINE(146)
		this->moveMode = (int)0;
		HX_STACK_LINE(147)
		this->height = (int)0;
		HX_STACK_LINE(149)
		this->canHop = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,land,(void))

Void Player_obj::chargeSlam( ){
{
		HX_STACK_FRAME("Player","chargeSlam",0x2ce36626,"Player.chargeSlam","Player.hx",152,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		this->moveMode = (int)2;
		HX_STACK_LINE(154)
		this->slamChargeTimer = (int)0;
		HX_STACK_LINE(155)
		this->isSuperSlam = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,chargeSlam,(void))

Void Player_obj::slam( ){
{
		HX_STACK_FRAME("Player","slam",0x20a84dd2,"Player.slam","Player.hx",158,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		this->moveMode = (int)3;
		HX_STACK_LINE(161)
		bool tmp = this->isSuperSlam;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		if ((tmp)){
			HX_STACK_LINE(162)
			Float tmp1 = this->maxSlamSpeed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(162)
			Float tmp2 = (tmp1 * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(162)
			this->slamSpeed = tmp2;
		}
		else{
			HX_STACK_LINE(165)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				Float tmp2 = this->minSlamSpeed;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(165)
				Float value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(165)
				Float tmp3 = this->slamChargeTimer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(165)
				Float tmp4 = this->slamChargeTimerMax;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(165)
				Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(165)
				Float t = tmp5;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(165)
				bool tmp6 = (t < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(165)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(165)
				if ((tmp6)){
					HX_STACK_LINE(165)
					tmp7 = (int)0;
				}
				else{
					HX_STACK_LINE(165)
					bool tmp8 = (t > (int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(165)
					if ((tmp8)){
						HX_STACK_LINE(165)
						tmp7 = (int)1;
					}
					else{
						HX_STACK_LINE(165)
						tmp7 = t;
					}
				}
				HX_STACK_LINE(165)
				t = tmp7;
				HX_STACK_LINE(165)
				Float tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(165)
				Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(165)
				Float tmp10 = this->maxSlamSpeed;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(165)
				Float tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(165)
				Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(165)
				Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(165)
				tmp1 = (tmp8 + tmp13);
			}
			HX_STACK_LINE(165)
			this->slamSpeed = tmp1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,slam,(void))

Void Player_obj::inputDown( ){
{
		HX_STACK_FRAME("Player","inputDown",0xbf686a5f,"Player.inputDown","Player.hx",169,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		int tmp = this->moveMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		if ((tmp1)){
			HX_STACK_LINE(171)
			this->jump();
		}
		else{
			HX_STACK_LINE(173)
			int tmp2 = this->moveMode;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(173)
			bool tmp3 = (tmp2 == (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(173)
			if ((tmp3)){
				HX_STACK_LINE(174)
				this->chargeSlam();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,inputDown,(void))

Void Player_obj::inputUp( ){
{
		HX_STACK_FRAME("Player","inputUp",0xfe196f18,"Player.inputUp","Player.hx",178,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(179)
		int tmp = this->moveMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		bool tmp1 = (tmp == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		if ((tmp1)){
			HX_STACK_LINE(180)
			this->stopJumpBoost();
		}
		else{
			HX_STACK_LINE(182)
			int tmp2 = this->moveMode;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(182)
			bool tmp3 = (tmp2 == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(182)
			if ((tmp3)){
				HX_STACK_LINE(183)
				this->slam();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,inputUp,(void))

bool Player_obj::entersAtmosphere( ::Planet p){
	HX_STACK_FRAME("Player","entersAtmosphere",0xd731cbaa,"Player.entersAtmosphere","Player.hx",187,0xa27fc9dd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(188)
	bool tmp = this->canHop;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(188)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(188)
	if ((tmp1)){
		HX_STACK_LINE(188)
		int tmp3 = this->moveMode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(188)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(188)
		tmp2 = (tmp5 != (int)0);
	}
	else{
		HX_STACK_LINE(188)
		tmp2 = false;
	}
	HX_STACK_LINE(188)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(188)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(188)
	if ((tmp3)){
		HX_STACK_LINE(188)
		::Planet tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(188)
		::Planet tmp6 = this->planet;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(188)
		::Planet tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(188)
		::Planet tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(188)
		tmp4 = (tmp5 != tmp8);
	}
	else{
		HX_STACK_LINE(188)
		tmp4 = false;
	}
	HX_STACK_LINE(188)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(188)
	if ((tmp4)){
		HX_STACK_LINE(188)
		::phoenix::Vector tmp6 = this->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(188)
		::phoenix::Vector tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(188)
		::phoenix::Vector tmp8 = p->get_pos();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(188)
		::phoenix::Vector tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(188)
		::phoenix::Vector tmp10 = tmp7;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(188)
		::phoenix::Vector tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(188)
		Float tmp12 = ::VectorExtender_obj::distance(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(188)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(188)
		int tmp14 = this->size;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(188)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(188)
		Float tmp16 = p->atmosphereRadius();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(188)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(188)
		Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(188)
		Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(188)
		tmp5 = (tmp13 < tmp19);
	}
	else{
		HX_STACK_LINE(188)
		tmp5 = false;
	}
	HX_STACK_LINE(188)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,entersAtmosphere,return )

Void Player_obj::setPlanet( ::Planet p){
{
		HX_STACK_FRAME("Player","setPlanet",0x4d27bcad,"Player.setPlanet","Player.hx",191,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(192)
		::Planet tmp = this->planet;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		if ((tmp1)){
			HX_STACK_LINE(192)
			::Planet tmp2 = this->planet;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(192)
			tmp2->players->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(193)
		this->planet = p;
		HX_STACK_LINE(194)
		::Planet tmp2 = this->planet;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		tmp2->players->push(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(195)
		::Planet tmp3 = this->planet;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		::String tmp5 = (HX_HCSTRING("set planet ","\x0a","\x04","\xcd","\xff") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(195)
		Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Player.hx","\xdd","\xc9","\x7f","\xa2"),195,HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"),HX_HCSTRING("setPlanet","\xda","\x07","\x58","\x97"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(195)
		::haxe::Log_obj::trace(tmp5,tmp6);
		HX_STACK_LINE(196)
		::Planet tmp7 = this->planet;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		int tmp8 = tmp7->players->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(196)
		::String tmp9 = (HX_HCSTRING("PLAYERS ","\x0e","\x3a","\xd9","\xa1") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(196)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Player.hx","\xdd","\xc9","\x7f","\xa2"),196,HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"),HX_HCSTRING("setPlanet","\xda","\x07","\x58","\x97"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(196)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,setPlanet,(void))

Void Player_obj::hopToPlanet( ::Planet p){
{
		HX_STACK_FRAME("Player","hopToPlanet",0xcda942af,"Player.hopToPlanet","Player.hx",199,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(200)
		::Planet tmp = p;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		this->setPlanet(tmp);
		HX_STACK_LINE(202)
		::phoenix::Vector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			::phoenix::Vector tmp2 = this->get_pos();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(202)
			::phoenix::Vector a = tmp2;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(202)
			::phoenix::Vector tmp3 = p->get_pos();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(202)
			::phoenix::Vector b = tmp3;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(202)
			Float tmp4 = (a->x - b->x);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			Float tmp5 = (a->y - b->y);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			Float tmp6 = (a->z - b->z);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			tmp1 = ::phoenix::Vector_obj::__new(tmp4,tmp5,tmp6,null());
		}
		HX_STACK_LINE(202)
		::phoenix::Vector fromPlanet = tmp1;		HX_STACK_VAR(fromPlanet,"fromPlanet");
		HX_STACK_LINE(204)
		Float tmp2 = (fromPlanet->x * fromPlanet->x);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		Float tmp3 = (fromPlanet->y * fromPlanet->y);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		Float tmp5 = (fromPlanet->z * fromPlanet->z);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(204)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(204)
		Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(204)
		Float tmp8 = p->radius;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(204)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(204)
		Float tmp10 = ::Math_obj::max((int)0,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(204)
		this->height = tmp10;
		HX_STACK_LINE(205)
		Float tmp11 = p->diameter;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(205)
		::phoenix::Vector tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(205)
			Float tmp13 = (fromPlanet->x * fromPlanet->x);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(205)
			Float tmp14 = (fromPlanet->y * fromPlanet->y);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(205)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(205)
			Float tmp16 = (fromPlanet->z * fromPlanet->z);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(205)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(205)
			Float tmp18 = ::Math_obj::sqrt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(205)
			Float b = tmp18;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(205)
			Float tmp19 = (Float(fromPlanet->x) / Float(b));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(205)
			Float tmp20 = (Float(fromPlanet->y) / Float(b));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(205)
			Float tmp21 = (Float(fromPlanet->z) / Float(b));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(205)
			tmp12 = ::phoenix::Vector_obj::__new(tmp19,tmp20,tmp21,null());
		}
		HX_STACK_LINE(205)
		Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(205)
		::phoenix::Vector tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(205)
			Float tmp15 = (fromPlanet->x * fromPlanet->x);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(205)
			Float tmp16 = (fromPlanet->y * fromPlanet->y);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(205)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(205)
			Float tmp18 = (fromPlanet->z * fromPlanet->z);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(205)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(205)
			Float tmp20 = ::Math_obj::sqrt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(205)
			Float b = tmp20;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(205)
			Float tmp21 = (Float(fromPlanet->x) / Float(b));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(205)
			Float tmp22 = (Float(fromPlanet->y) / Float(b));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(205)
			Float tmp23 = (Float(fromPlanet->z) / Float(b));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(205)
			tmp14 = ::phoenix::Vector_obj::__new(tmp21,tmp22,tmp23,null());
		}
		HX_STACK_LINE(205)
		Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(205)
		Float tmp16 = ::Math_obj::atan2(tmp13,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(205)
		Float tmp17 = ::Math_obj::PI;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(205)
		Float tmp18 = ((int)2 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(205)
		Float tmp19 = (Float(tmp16) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(205)
		Float tmp20 = (tmp11 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(205)
		this->location = tmp20;
		HX_STACK_LINE(207)
		this->canHop = false;
		HX_STACK_LINE(209)
		Float tmp21 = this->height;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(209)
		bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(209)
		if ((tmp22)){
			HX_STACK_LINE(210)
			this->fall();
		}
		else{
			HX_STACK_LINE(213)
			this->land();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,hopToPlanet,(void))

Void Player_obj::init( ){
{
		HX_STACK_FRAME("Player","init",0x1a0db71d,"Player.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void Player_obj::ondestroy( ){
{
		HX_STACK_FRAME("Player","ondestroy",0xe4af728e,"Player.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(location,"location");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(isJumping,"isJumping");
	HX_MARK_MEMBER_NAME(jumpSpeed,"jumpSpeed");
	HX_MARK_MEMBER_NAME(jumpForce,"jumpForce");
	HX_MARK_MEMBER_NAME(gravityForce,"gravityForce");
	HX_MARK_MEMBER_NAME(jumpBoostForce,"jumpBoostForce");
	HX_MARK_MEMBER_NAME(jumpBoostTimer,"jumpBoostTimer");
	HX_MARK_MEMBER_NAME(jumpBoostTimerMax,"jumpBoostTimerMax");
	HX_MARK_MEMBER_NAME(slamChargeTimer,"slamChargeTimer");
	HX_MARK_MEMBER_NAME(slamChargeTimerMax,"slamChargeTimerMax");
	HX_MARK_MEMBER_NAME(slamSpeed,"slamSpeed");
	HX_MARK_MEMBER_NAME(minSlamSpeed,"minSlamSpeed");
	HX_MARK_MEMBER_NAME(maxSlamSpeed,"maxSlamSpeed");
	HX_MARK_MEMBER_NAME(isSuperSlam,"isSuperSlam");
	HX_MARK_MEMBER_NAME(canHop,"canHop");
	HX_MARK_MEMBER_NAME(moveMode,"moveMode");
	HX_MARK_MEMBER_NAME(planet,"planet");
	HX_MARK_MEMBER_NAME(color,"color");
	::luxe::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(location,"location");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(isJumping,"isJumping");
	HX_VISIT_MEMBER_NAME(jumpSpeed,"jumpSpeed");
	HX_VISIT_MEMBER_NAME(jumpForce,"jumpForce");
	HX_VISIT_MEMBER_NAME(gravityForce,"gravityForce");
	HX_VISIT_MEMBER_NAME(jumpBoostForce,"jumpBoostForce");
	HX_VISIT_MEMBER_NAME(jumpBoostTimer,"jumpBoostTimer");
	HX_VISIT_MEMBER_NAME(jumpBoostTimerMax,"jumpBoostTimerMax");
	HX_VISIT_MEMBER_NAME(slamChargeTimer,"slamChargeTimer");
	HX_VISIT_MEMBER_NAME(slamChargeTimerMax,"slamChargeTimerMax");
	HX_VISIT_MEMBER_NAME(slamSpeed,"slamSpeed");
	HX_VISIT_MEMBER_NAME(minSlamSpeed,"minSlamSpeed");
	HX_VISIT_MEMBER_NAME(maxSlamSpeed,"maxSlamSpeed");
	HX_VISIT_MEMBER_NAME(isSuperSlam,"isSuperSlam");
	HX_VISIT_MEMBER_NAME(canHop,"canHop");
	HX_VISIT_MEMBER_NAME(moveMode,"moveMode");
	HX_VISIT_MEMBER_NAME(planet,"planet");
	HX_VISIT_MEMBER_NAME(color,"color");
	::luxe::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		if (HX_FIELD_EQ(inName,"fall") ) { return fall_dyn(); }
		if (HX_FIELD_EQ(inName,"land") ) { return land_dyn(); }
		if (HX_FIELD_EQ(inName,"slam") ) { return slam_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"canHop") ) { return canHop; }
		if (HX_FIELD_EQ(inName,"planet") ) { return planet; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inputUp") ) { return inputUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { return location; }
		if (HX_FIELD_EQ(inName,"moveMode") ) { return moveMode; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isJumping") ) { return isJumping; }
		if (HX_FIELD_EQ(inName,"jumpSpeed") ) { return jumpSpeed; }
		if (HX_FIELD_EQ(inName,"jumpForce") ) { return jumpForce; }
		if (HX_FIELD_EQ(inName,"slamSpeed") ) { return slamSpeed; }
		if (HX_FIELD_EQ(inName,"inputDown") ) { return inputDown_dyn(); }
		if (HX_FIELD_EQ(inName,"setPlanet") ) { return setPlanet_dyn(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"chargeSlam") ) { return chargeSlam_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSuperSlam") ) { return isSuperSlam; }
		if (HX_FIELD_EQ(inName,"hopToPlanet") ) { return hopToPlanet_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gravityForce") ) { return gravityForce; }
		if (HX_FIELD_EQ(inName,"minSlamSpeed") ) { return minSlamSpeed; }
		if (HX_FIELD_EQ(inName,"maxSlamSpeed") ) { return maxSlamSpeed; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stopJumpBoost") ) { return stopJumpBoost_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"jumpBoostForce") ) { return jumpBoostForce; }
		if (HX_FIELD_EQ(inName,"jumpBoostTimer") ) { return jumpBoostTimer; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"slamChargeTimer") ) { return slamChargeTimer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"entersAtmosphere") ) { return entersAtmosphere_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"jumpBoostTimerMax") ) { return jumpBoostTimerMax; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"slamChargeTimerMax") ) { return slamChargeTimerMax; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canHop") ) { canHop=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"planet") ) { planet=inValue.Cast< ::Planet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { location=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moveMode") ) { moveMode=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isJumping") ) { isJumping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpSpeed") ) { jumpSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpForce") ) { jumpForce=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slamSpeed") ) { slamSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSuperSlam") ) { isSuperSlam=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gravityForce") ) { gravityForce=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minSlamSpeed") ) { minSlamSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSlamSpeed") ) { maxSlamSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"jumpBoostForce") ) { jumpBoostForce=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpBoostTimer") ) { jumpBoostTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"slamChargeTimer") ) { slamChargeTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"jumpBoostTimerMax") ) { jumpBoostTimerMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"slamChargeTimerMax") ) { slamChargeTimerMax=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Player_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("isJumping","\xea","\x0d","\xa8","\x10"));
	outFields->push(HX_HCSTRING("jumpSpeed","\xb9","\xa3","\x36","\x0d"));
	outFields->push(HX_HCSTRING("jumpForce","\x1d","\xbe","\x61","\x90"));
	outFields->push(HX_HCSTRING("gravityForce","\xbd","\x18","\xea","\x34"));
	outFields->push(HX_HCSTRING("jumpBoostForce","\x56","\xba","\x99","\x5a"));
	outFields->push(HX_HCSTRING("jumpBoostTimer","\x30","\xc8","\x3a","\x66"));
	outFields->push(HX_HCSTRING("jumpBoostTimerMax","\x54","\x38","\xa7","\x0c"));
	outFields->push(HX_HCSTRING("slamChargeTimer","\xec","\xf2","\x90","\x79"));
	outFields->push(HX_HCSTRING("slamChargeTimerMax","\x18","\x6b","\x4b","\x72"));
	outFields->push(HX_HCSTRING("slamSpeed","\x82","\xab","\xd9","\x4e"));
	outFields->push(HX_HCSTRING("minSlamSpeed","\x90","\xb7","\x67","\x6a"));
	outFields->push(HX_HCSTRING("maxSlamSpeed","\x3e","\x0c","\x5d","\xe6"));
	outFields->push(HX_HCSTRING("isSuperSlam","\x96","\x8f","\x4d","\x33"));
	outFields->push(HX_HCSTRING("canHop","\x59","\x79","\x1f","\xb8"));
	outFields->push(HX_HCSTRING("moveMode","\x14","\x3f","\x18","\xeb"));
	outFields->push(HX_HCSTRING("planet","\x98","\x92","\xb0","\x37"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Player_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsFloat,(int)offsetof(Player_obj,location),HX_HCSTRING("location","\x35","\x6e","\x46","\xe5")},
	{hx::fsFloat,(int)offsetof(Player_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsFloat,(int)offsetof(Player_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(Player_obj,isJumping),HX_HCSTRING("isJumping","\xea","\x0d","\xa8","\x10")},
	{hx::fsFloat,(int)offsetof(Player_obj,jumpSpeed),HX_HCSTRING("jumpSpeed","\xb9","\xa3","\x36","\x0d")},
	{hx::fsFloat,(int)offsetof(Player_obj,jumpForce),HX_HCSTRING("jumpForce","\x1d","\xbe","\x61","\x90")},
	{hx::fsFloat,(int)offsetof(Player_obj,gravityForce),HX_HCSTRING("gravityForce","\xbd","\x18","\xea","\x34")},
	{hx::fsFloat,(int)offsetof(Player_obj,jumpBoostForce),HX_HCSTRING("jumpBoostForce","\x56","\xba","\x99","\x5a")},
	{hx::fsFloat,(int)offsetof(Player_obj,jumpBoostTimer),HX_HCSTRING("jumpBoostTimer","\x30","\xc8","\x3a","\x66")},
	{hx::fsFloat,(int)offsetof(Player_obj,jumpBoostTimerMax),HX_HCSTRING("jumpBoostTimerMax","\x54","\x38","\xa7","\x0c")},
	{hx::fsFloat,(int)offsetof(Player_obj,slamChargeTimer),HX_HCSTRING("slamChargeTimer","\xec","\xf2","\x90","\x79")},
	{hx::fsFloat,(int)offsetof(Player_obj,slamChargeTimerMax),HX_HCSTRING("slamChargeTimerMax","\x18","\x6b","\x4b","\x72")},
	{hx::fsFloat,(int)offsetof(Player_obj,slamSpeed),HX_HCSTRING("slamSpeed","\x82","\xab","\xd9","\x4e")},
	{hx::fsFloat,(int)offsetof(Player_obj,minSlamSpeed),HX_HCSTRING("minSlamSpeed","\x90","\xb7","\x67","\x6a")},
	{hx::fsFloat,(int)offsetof(Player_obj,maxSlamSpeed),HX_HCSTRING("maxSlamSpeed","\x3e","\x0c","\x5d","\xe6")},
	{hx::fsBool,(int)offsetof(Player_obj,isSuperSlam),HX_HCSTRING("isSuperSlam","\x96","\x8f","\x4d","\x33")},
	{hx::fsBool,(int)offsetof(Player_obj,canHop),HX_HCSTRING("canHop","\x59","\x79","\x1f","\xb8")},
	{hx::fsInt,(int)offsetof(Player_obj,moveMode),HX_HCSTRING("moveMode","\x14","\x3f","\x18","\xeb")},
	{hx::fsObject /*::Planet*/ ,(int)offsetof(Player_obj,planet),HX_HCSTRING("planet","\x98","\x92","\xb0","\x37")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Player_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("isJumping","\xea","\x0d","\xa8","\x10"),
	HX_HCSTRING("jumpSpeed","\xb9","\xa3","\x36","\x0d"),
	HX_HCSTRING("jumpForce","\x1d","\xbe","\x61","\x90"),
	HX_HCSTRING("gravityForce","\xbd","\x18","\xea","\x34"),
	HX_HCSTRING("jumpBoostForce","\x56","\xba","\x99","\x5a"),
	HX_HCSTRING("jumpBoostTimer","\x30","\xc8","\x3a","\x66"),
	HX_HCSTRING("jumpBoostTimerMax","\x54","\x38","\xa7","\x0c"),
	HX_HCSTRING("slamChargeTimer","\xec","\xf2","\x90","\x79"),
	HX_HCSTRING("slamChargeTimerMax","\x18","\x6b","\x4b","\x72"),
	HX_HCSTRING("slamSpeed","\x82","\xab","\xd9","\x4e"),
	HX_HCSTRING("minSlamSpeed","\x90","\xb7","\x67","\x6a"),
	HX_HCSTRING("maxSlamSpeed","\x3e","\x0c","\x5d","\xe6"),
	HX_HCSTRING("isSuperSlam","\x96","\x8f","\x4d","\x33"),
	HX_HCSTRING("canHop","\x59","\x79","\x1f","\xb8"),
	HX_HCSTRING("moveMode","\x14","\x3f","\x18","\xeb"),
	HX_HCSTRING("planet","\x98","\x92","\xb0","\x37"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),
	HX_HCSTRING("fall","\x7b","\xbc","\xb5","\x43"),
	HX_HCSTRING("stopJumpBoost","\xf3","\x12","\xd3","\x05"),
	HX_HCSTRING("land","\xeb","\x05","\xad","\x47"),
	HX_HCSTRING("chargeSlam","\x59","\xe2","\xf4","\xcc"),
	HX_HCSTRING("slam","\xc5","\xd1","\x55","\x4c"),
	HX_HCSTRING("inputDown","\x8c","\xb5","\x98","\x09"),
	HX_HCSTRING("inputUp","\x05","\xa5","\x1e","\xd4"),
	HX_HCSTRING("entersAtmosphere","\x1d","\xf0","\x4e","\x08"),
	HX_HCSTRING("setPlanet","\xda","\x07","\x58","\x97"),
	HX_HCSTRING("hopToPlanet","\x1c","\x73","\xe4","\x3c"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Player_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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

