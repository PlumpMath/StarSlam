#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_Inspector
#include <luxe/debug/Inspector.h>
#endif
#ifndef INCLUDED_luxe_debug_ProfilerDebugView
#include <luxe/debug/ProfilerDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_SceneDebugView
#include <luxe/debug/SceneDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_StatsDebugView
#include <luxe/debug/StatsDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_TraceDebugView
#include <luxe/debug/TraceDebugView.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_system_input_Keycodes
#include <snow/system/input/Keycodes.h>
#endif
namespace luxe{

Void Debug_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("luxe.Debug","new",0xf1f6bded,"luxe.Debug.new","luxe/Debug.hx",26,0xe4198724)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(356)
	this->last_cursor_grab = false;
	HX_STACK_LINE(355)
	this->last_cursor_shown = true;
	HX_STACK_LINE(56)
	this->profiling = false;
	HX_STACK_LINE(55)
	this->profile_path = HX_HCSTRING("profile.txt","\xab","\xd0","\x4f","\xc6");
	HX_STACK_LINE(52)
	this->started = false;
	HX_STACK_LINE(46)
	this->last_view_index = (int)0;
	HX_STACK_LINE(45)
	this->current_view_index = (int)0;
	HX_STACK_LINE(43)
	this->dt_average_count = (int)0;
	HX_STACK_LINE(42)
	this->dt_average_span = (int)60;
	HX_STACK_LINE(41)
	this->dt_average_accum = ((Float)0);
	HX_STACK_LINE(40)
	this->dt_average = ((Float)0);
	HX_STACK_LINE(29)
	this->visible = false;
	HX_STACK_LINE(61)
	this->core = _core;
}
;
	return null();
}

//Debug_obj::~Debug_obj() { }

Dynamic Debug_obj::__CreateEmpty() { return  new Debug_obj; }
hx::ObjectPtr< Debug_obj > Debug_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct(_core);
	return _result_;}

Dynamic Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Debug_obj::init( ){
{
		HX_STACK_FRAME("luxe.Debug","init",0xc2a828e3,"luxe.Debug.init","luxe/Debug.hx",64,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(66)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			tmp = tmp2;
		}
		HX_STACK_LINE(66)
		::luxe::Debug_obj::trace_callbacks = tmp;
		HX_STACK_LINE(67)
		::luxe::Debug_obj::views = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(71)
		::luxe::debug::TraceDebugView tmp1 = ::luxe::debug::TraceDebugView_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		::luxe::Debug_obj::views->push(tmp1);
		HX_STACK_LINE(72)
		::luxe::debug::StatsDebugView tmp2 = ::luxe::debug::StatsDebugView_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		::luxe::Debug_obj::views->push(tmp2);
		HX_STACK_LINE(74)
		::luxe::debug::ProfilerDebugView tmp3 = ::luxe::debug::ProfilerDebugView_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		::luxe::Debug_obj::views->push(tmp3);
		HX_STACK_LINE(75)
		::luxe::debug::SceneDebugView tmp4 = ::luxe::debug::SceneDebugView_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		::luxe::Debug_obj::views->push(tmp4);
		HX_STACK_LINE(77)
		::luxe::debug::DebugView tmp5 = ::luxe::Debug_obj::views->__get((int)0).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		this->current_view = tmp5;
		HX_STACK_LINE(81)
		Dynamic tmp6 = ::luxe::Debug_obj::internal_trace_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(81)
		::haxe::Log_obj::trace = tmp6;
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,init,(void))

Dynamic Debug_obj::get_view( ::String _name){
	HX_STACK_FRAME("luxe.Debug","get_view",0xa5fdc141,"luxe.Debug.get_view","luxe/Debug.hx",88,0xe4198724)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(90)
		Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(90)
		while((true)){
			HX_STACK_LINE(90)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(90)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(90)
			if ((tmp1)){
				HX_STACK_LINE(90)
				break;
			}
			HX_STACK_LINE(90)
			::luxe::debug::DebugView tmp2 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			::luxe::debug::DebugView view = tmp2;		HX_STACK_VAR(view,"view");
			HX_STACK_LINE(90)
			++(_g);
			HX_STACK_LINE(92)
			::String tmp3 = view->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(92)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			if ((tmp5)){
				HX_STACK_LINE(93)
				Dynamic tmp6 = ((Dynamic)(view));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(93)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(98)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,get_view,return )

Void Debug_obj::start( ::String _name,Dynamic _max){
{
		HX_STACK_FRAME("luxe.Debug","start",0x566e9f2f,"luxe.Debug.start","luxe/Debug.hx",103,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_max,"_max")
		HX_STACK_LINE(105)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		bool tmp1 = tmp->headless;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		if ((tmp2)){
			HX_STACK_LINE(106)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			Dynamic tmp4 = _max;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(106)
			::luxe::debug::ProfilerDebugView_obj::start(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,start,(void))

Void Debug_obj::end( ::String _name){
{
		HX_STACK_FRAME("luxe.Debug","end",0xf1eff168,"luxe.Debug.end","luxe/Debug.hx",112,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(114)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		bool tmp1 = tmp->headless;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		if ((tmp2)){
			HX_STACK_LINE(115)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(115)
			::luxe::debug::ProfilerDebugView_obj::end(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,end,(void))

Void Debug_obj::remove_trace_listener( ::String _name){
{
		HX_STACK_FRAME("luxe.Debug","remove_trace_listener",0x28bf5e56,"luxe.Debug.remove_trace_listener","luxe/Debug.hx",120,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(121)
		::haxe::ds::StringMap tmp = ::luxe::Debug_obj::trace_callbacks;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,remove_trace_listener,(void))

Void Debug_obj::add_trace_listener( ::String _name,Dynamic _callback){
{
		HX_STACK_FRAME("luxe.Debug","add_trace_listener",0x1a792d5f,"luxe.Debug.add_trace_listener","luxe/Debug.hx",125,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_callback,"_callback")
		HX_STACK_LINE(126)
		::haxe::ds::StringMap tmp = ::luxe::Debug_obj::trace_callbacks;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		Dynamic tmp2 = _callback;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,add_trace_listener,(void))

Void Debug_obj::create_debug_console( ){
{
		HX_STACK_FRAME("luxe.Debug","create_debug_console",0x55dabe3b,"luxe.Debug.create_debug_console","luxe/Debug.hx",174,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(174)
		::luxe::Debug _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(178)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		Dynamic tmp1 = this->keyup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		tmp->on((int)11,tmp1);
		HX_STACK_LINE(179)
		::luxe::Core tmp2 = this->core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		Dynamic tmp3 = this->keydown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		tmp2->on((int)10,tmp3);
		HX_STACK_LINE(180)
		::luxe::Core tmp4 = this->core;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(180)
		Dynamic tmp5 = this->mouseup_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(180)
		tmp4->on((int)16,tmp5);
		HX_STACK_LINE(181)
		::luxe::Core tmp6 = this->core;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(181)
		Dynamic tmp7 = this->mousedown_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(181)
		tmp6->on((int)15,tmp7);
		HX_STACK_LINE(182)
		::luxe::Core tmp8 = this->core;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(182)
		Dynamic tmp9 = this->mousemove_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(182)
		tmp8->on((int)17,tmp9);
		HX_STACK_LINE(183)
		::luxe::Core tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(183)
		Dynamic tmp11 = this->mousewheel_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(183)
		tmp10->on((int)18,tmp11);
		HX_STACK_LINE(186)
		::phoenix::Renderer tmp12 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(186)
		::phoenix::Batcher tmp13 = ::phoenix::Batcher_obj::__new(tmp12,HX_HCSTRING("debug_batcher","\x7b","\xd9","\xce","\x3f"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(186)
		this->batcher = tmp13;
		HX_STACK_LINE(188)
		::phoenix::Camera tmp14 = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(188)
		this->view = tmp14;
		HX_STACK_LINE(190)
		::phoenix::Camera tmp15 = this->view;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(190)
		::phoenix::Batcher tmp16 = this->batcher;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(190)
		tmp16->view = tmp15;
		HX_STACK_LINE(192)
		::phoenix::Batcher tmp17 = this->batcher;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(192)
		tmp17->set_layer((int)999);
		HX_STACK_LINE(194)
		::phoenix::Renderer tmp18 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(194)
		::phoenix::Batcher tmp19 = this->batcher;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(194)
		tmp18->add_batch(tmp19);
		HX_STACK_LINE(198)
		::luxe::Core tmp20 = ::Luxe_obj::core;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(198)
		int tmp21 = tmp20->screen->get_w();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(198)
		Dynamic tmp22 = ((Dynamic)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(198)
		::luxe::Core tmp23 = ::Luxe_obj::core;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(198)
		int tmp24 = tmp23->screen->get_h();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(198)
		Dynamic tmp25 = ((Dynamic)(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(199)
		::phoenix::Color tmp26 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,((Float)0.8));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(203)
		::phoenix::Batcher tmp27 = this->batcher;		HX_STACK_VAR(tmp27,"tmp27");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp22,::phoenix::Color &tmp26,Dynamic &tmp25,::phoenix::Batcher &tmp27){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Debug.hx",196,0xe4198724)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp22,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp25,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp26,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)999)),false);
					__result->Add(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99") , (int)999,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp27,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(196)
		Dynamic tmp28 = _Function_1_1::Block(tmp22,tmp26,tmp25,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(196)
		::phoenix::geometry::QuadGeometry tmp29 = ::phoenix::geometry::QuadGeometry_obj::__new(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(196)
		this->overlay = tmp29;
		HX_STACK_LINE(207)
		::luxe::Core tmp30 = ::Luxe_obj::core;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(207)
		int tmp31 = tmp30->screen->get_w();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(207)
		Float tmp32 = (tmp31 * ((Float)0.05));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(207)
		::luxe::Core tmp33 = ::Luxe_obj::core;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(207)
		int tmp34 = tmp33->screen->get_h();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(207)
		Float tmp35 = (tmp34 * ((Float)0.05));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(207)
		::phoenix::Vector tmp36 = ::phoenix::Vector_obj::__new(tmp32,tmp35,null(),null());		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(207)
		this->padding = tmp36;
		HX_STACK_LINE(210)
		::phoenix::Vector tmp37 = this->padding;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(210)
		Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(210)
		::phoenix::Vector tmp39 = this->padding;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(210)
		Float tmp40 = tmp39->y;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(210)
		::phoenix::Vector tmp41 = ::phoenix::Vector_obj::__new(tmp38,tmp40,null(),null());		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(211)
		::luxe::Core tmp42 = ::Luxe_obj::core;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(211)
		int tmp43 = tmp42->screen->get_w();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(211)
		::phoenix::Vector tmp44 = this->padding;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(211)
		Float tmp45 = tmp44->x;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(211)
		Float tmp46 = (tmp45 * (int)2);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(211)
		Float tmp47 = (tmp43 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(211)
		::luxe::Core tmp48 = ::Luxe_obj::core;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(211)
		int tmp49 = tmp48->screen->get_h();		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(211)
		::phoenix::Vector tmp50 = this->padding;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(211)
		Float tmp51 = tmp50->y;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(211)
		Float tmp52 = (tmp51 * (int)2);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(211)
		Float tmp53 = (tmp49 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(211)
		::phoenix::Vector tmp54 = ::phoenix::Vector_obj::__new(tmp47,tmp53,null(),null());		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(212)
		::phoenix::Batcher tmp55 = this->batcher;		HX_STACK_VAR(tmp55,"tmp55");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Vector &tmp54,::phoenix::Batcher &tmp55,::phoenix::Vector &tmp41){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Debug.hx",208,0xe4198724)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("title","\x98","\x15","\x3b","\x10") , HX_HCSTRING("luxe debug","\x69","\xc6","\xe7","\x61"),false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp41,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp54,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp55,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(208)
		Dynamic tmp56 = _Function_1_2::Block(tmp54,tmp55,tmp41);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(208)
		::luxe::debug::Inspector tmp57 = ::luxe::debug::Inspector_obj::__new(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(208)
		this->debug_inspector = tmp57;
		HX_STACK_LINE(215)
		Dynamic tmp58 = this->refresh_dyn();		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(215)
		::luxe::debug::Inspector tmp59 = this->debug_inspector;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(215)
		tmp59->onrefresh = tmp58;
		HX_STACK_LINE(217)
		::luxe::Core tmp60 = this->core;		HX_STACK_VAR(tmp60,"tmp60");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,::luxe::Debug,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _event){
			HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","luxe/Debug.hx",217,0xe4198724)
			HX_STACK_ARG(_event,"_event")
			{
				HX_STACK_LINE(219)
				Dynamic tmp61 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(219)
				Dynamic _w = tmp61;		HX_STACK_VAR(_w,"_w");
				HX_STACK_LINE(220)
				Dynamic tmp62 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(220)
				Dynamic _h = tmp62;		HX_STACK_VAR(_h,"_h");
				HX_STACK_LINE(221)
				::phoenix::Vector tmp63 = ::phoenix::Vector_obj::__new(_w,_h,null(),null());		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(221)
				::phoenix::Vector _v = tmp63;		HX_STACK_VAR(_v,"_v");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::phoenix::Vector _this = _g->padding;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(223)
					Float tmp64 = (_w * ((Float)0.05));		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(223)
					Float _x = tmp64;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(223)
					Float tmp65 = (_h * ((Float)0.05));		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(223)
					Float _y = tmp65;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(223)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(223)
					_this->ignore_listeners = true;
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						_this->x = _x;
						HX_STACK_LINE(223)
						bool tmp66 = _this->_construct;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(223)
						if ((tmp66)){
							HX_STACK_LINE(223)
							_this->x;
						}
						else{
							HX_STACK_LINE(223)
							bool tmp67 = (_this->listen_x != null());		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(223)
							bool tmp68;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(223)
							if ((tmp67)){
								HX_STACK_LINE(223)
								bool tmp69 = _this->ignore_listeners;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(223)
								bool tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(223)
								tmp68 = !(tmp70);
							}
							else{
								HX_STACK_LINE(223)
								tmp68 = false;
							}
							HX_STACK_LINE(223)
							if ((tmp68)){
								HX_STACK_LINE(223)
								Float tmp69 = _x;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(223)
								_this->listen_x(tmp69);
							}
							HX_STACK_LINE(223)
							_this->x;
						}
					}
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						_this->y = _y;
						HX_STACK_LINE(223)
						bool tmp66 = _this->_construct;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(223)
						if ((tmp66)){
							HX_STACK_LINE(223)
							_this->y;
						}
						else{
							HX_STACK_LINE(223)
							bool tmp67 = (_this->listen_y != null());		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(223)
							bool tmp68;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(223)
							if ((tmp67)){
								HX_STACK_LINE(223)
								bool tmp69 = _this->ignore_listeners;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(223)
								bool tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(223)
								tmp68 = !(tmp70);
							}
							else{
								HX_STACK_LINE(223)
								tmp68 = false;
							}
							HX_STACK_LINE(223)
							if ((tmp68)){
								HX_STACK_LINE(223)
								Float tmp69 = _y;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(223)
								_this->listen_y(tmp69);
							}
							HX_STACK_LINE(223)
							_this->y;
						}
					}
					HX_STACK_LINE(223)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(223)
					bool tmp66 = (_this->listen_x != null());		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(223)
					bool tmp67;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(223)
					if ((tmp66)){
						HX_STACK_LINE(223)
						bool tmp68 = _this->ignore_listeners;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(223)
						bool tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(223)
						tmp67 = !(tmp69);
					}
					else{
						HX_STACK_LINE(223)
						tmp67 = false;
					}
					HX_STACK_LINE(223)
					if ((tmp67)){
						HX_STACK_LINE(223)
						Float tmp68 = _this->x;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(223)
						_this->listen_x(tmp68);
					}
					HX_STACK_LINE(223)
					bool tmp68 = (_this->listen_y != null());		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(223)
					bool tmp69;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(223)
					if ((tmp68)){
						HX_STACK_LINE(223)
						bool tmp70 = _this->ignore_listeners;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(223)
						bool tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(223)
						tmp69 = !(tmp71);
					}
					else{
						HX_STACK_LINE(223)
						tmp69 = false;
					}
					HX_STACK_LINE(223)
					if ((tmp69)){
						HX_STACK_LINE(223)
						Float tmp70 = _this->y;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(223)
						_this->listen_y(tmp70);
					}
					HX_STACK_LINE(223)
					_this;
				}
				HX_STACK_LINE(225)
				::phoenix::Vector tmp64 = _v;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(225)
				_g->overlay->resize(tmp64);
				HX_STACK_LINE(226)
				::phoenix::Rectangle tmp65 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,_w,_h);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(226)
				_g->view->set_viewport(tmp65);
				HX_STACK_LINE(227)
				Dynamic tmp66 = _w;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(227)
				Float tmp67 = _g->padding->x;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(227)
				Float tmp68 = (tmp67 * (int)2);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(227)
				Float tmp69 = (tmp66 - tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(227)
				Dynamic tmp70 = _h;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(227)
				Float tmp71 = _g->padding->y;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(227)
				Float tmp72 = (tmp71 * (int)2);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(227)
				Float tmp73 = (tmp70 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(227)
				::phoenix::Vector tmp74 = ::phoenix::Vector_obj::__new(tmp69,tmp73,null(),null());		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(227)
				_g->debug_inspector->set_size(tmp74);
				HX_STACK_LINE(228)
				Float tmp75 = _g->padding->x;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(228)
				Float tmp76 = _g->padding->y;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(228)
				::phoenix::Vector tmp77 = ::phoenix::Vector_obj::__new(tmp75,tmp76,null(),null());		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(228)
				_g->debug_inspector->set_pos(tmp77);
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(230)
					Array< ::Dynamic > _g2 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(230)
					while((true)){
						HX_STACK_LINE(230)
						bool tmp78 = (_g1 < _g2->length);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(230)
						bool tmp79 = !(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(230)
						if ((tmp79)){
							HX_STACK_LINE(230)
							break;
						}
						HX_STACK_LINE(230)
						::luxe::debug::DebugView tmp80 = _g2->__get(_g1).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(230)
						::luxe::debug::DebugView view = tmp80;		HX_STACK_VAR(view,"view");
						HX_STACK_LINE(230)
						++(_g1);
						HX_STACK_LINE(231)
						Dynamic tmp81 = _event;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(231)
						view->onwindowsized(tmp81);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(217)
		tmp60->on((int)29, Dynamic(new _Function_1_3(_g)));
		HX_STACK_LINE(236)
		::phoenix::Batcher tmp61 = this->batcher;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(236)
		tmp61->enabled = false;
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(238)
			Array< ::Dynamic > _g11 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(238)
			while((true)){
				HX_STACK_LINE(238)
				bool tmp62 = (_g1 < _g11->length);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(238)
				bool tmp63 = !(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(238)
				if ((tmp63)){
					HX_STACK_LINE(238)
					break;
				}
				HX_STACK_LINE(238)
				::luxe::debug::DebugView tmp64 = _g11->__get(_g1).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(238)
				::luxe::debug::DebugView view = tmp64;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(238)
				++(_g1);
				HX_STACK_LINE(239)
				view->create();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,create_debug_console,(void))

Void Debug_obj::mouseup( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","mouseup",0x521047cd,"luxe.Debug.mouseup","luxe/Debug.hx",246,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(247)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		if ((tmp)){
			HX_STACK_LINE(248)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(248)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(248)
			while((true)){
				HX_STACK_LINE(248)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(248)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(248)
				if ((tmp2)){
					HX_STACK_LINE(248)
					break;
				}
				HX_STACK_LINE(248)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(248)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(248)
				++(_g);
				HX_STACK_LINE(249)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(249)
				view->onmouseup(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mouseup,(void))

Void Debug_obj::mousedown( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","mousedown",0x214e9a54,"luxe.Debug.mousedown","luxe/Debug.hx",254,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(255)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		if ((tmp)){
			HX_STACK_LINE(256)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(256)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(256)
			while((true)){
				HX_STACK_LINE(256)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(256)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(256)
				if ((tmp2)){
					HX_STACK_LINE(256)
					break;
				}
				HX_STACK_LINE(256)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(256)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(256)
				++(_g);
				HX_STACK_LINE(257)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(257)
				view->onmousedown(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousedown,(void))

Void Debug_obj::mousewheel( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","mousewheel",0xef674669,"luxe.Debug.mousewheel","luxe/Debug.hx",262,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(263)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		if ((tmp)){
			HX_STACK_LINE(264)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(264)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(264)
			while((true)){
				HX_STACK_LINE(264)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(264)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(264)
				if ((tmp2)){
					HX_STACK_LINE(264)
					break;
				}
				HX_STACK_LINE(264)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(264)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(264)
				++(_g);
				HX_STACK_LINE(265)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(265)
				view->onmousewheel(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousewheel,(void))

Void Debug_obj::mousemove( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","mousemove",0x27418503,"luxe.Debug.mousemove","luxe/Debug.hx",270,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(271)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		if ((tmp)){
			HX_STACK_LINE(272)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(272)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(272)
			while((true)){
				HX_STACK_LINE(272)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(272)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(272)
				if ((tmp2)){
					HX_STACK_LINE(272)
					break;
				}
				HX_STACK_LINE(272)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(272)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(272)
				++(_g);
				HX_STACK_LINE(273)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(273)
				view->onmousemove(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousemove,(void))

Void Debug_obj::keyup( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","keyup",0xb1620087,"luxe.Debug.keyup","luxe/Debug.hx",278,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(280)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(280)
		if ((tmp)){
			HX_STACK_LINE(281)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(281)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(281)
			while((true)){
				HX_STACK_LINE(281)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(281)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(281)
				if ((tmp2)){
					HX_STACK_LINE(281)
					break;
				}
				HX_STACK_LINE(281)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(281)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(281)
				++(_g);
				HX_STACK_LINE(282)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(282)
				view->onkeyup(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,keyup,(void))

Void Debug_obj::keydown( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","keydown",0x430b758e,"luxe.Debug.keydown","luxe/Debug.hx",298,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(300)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		if ((tmp)){
			HX_STACK_LINE(302)
			int tmp1 = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(302)
			int tmp2 = ::snow::_system::input::Keycodes_obj::key_1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(302)
			bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(302)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			if ((tmp3)){
				HX_STACK_LINE(302)
				::luxe::Core tmp5 = this->core;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(302)
				::luxe::Core tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(302)
				tmp4 = tmp6->console_visible;
			}
			else{
				HX_STACK_LINE(302)
				tmp4 = false;
			}
			HX_STACK_LINE(302)
			if ((tmp4)){
				HX_STACK_LINE(303)
				this->switch_view();
			}
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(306)
				Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(306)
				while((true)){
					HX_STACK_LINE(306)
					bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(306)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(306)
					if ((tmp6)){
						HX_STACK_LINE(306)
						break;
					}
					HX_STACK_LINE(306)
					::luxe::debug::DebugView tmp7 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(306)
					::luxe::debug::DebugView view = tmp7;		HX_STACK_VAR(view,"view");
					HX_STACK_LINE(306)
					++(_g);
					HX_STACK_LINE(307)
					Dynamic tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(307)
					view->onkeydown(tmp8);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,keydown,(void))

Void Debug_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.Debug","refresh",0x7ebe11e8,"luxe.Debug.refresh","luxe/Debug.hx",324,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(326)
		::luxe::debug::DebugView tmp = this->current_view;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(326)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(326)
		if ((tmp1)){
			HX_STACK_LINE(327)
			::luxe::debug::DebugView tmp2 = this->current_view;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(327)
			tmp2->refresh();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,refresh,(void))

Void Debug_obj::switch_view( ){
{
		HX_STACK_FRAME("luxe.Debug","switch_view",0x7281325d,"luxe.Debug.switch_view","luxe/Debug.hx",333,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(336)
		int tmp = this->current_view_index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(336)
		this->last_view_index = tmp;
		HX_STACK_LINE(338)
		(this->current_view_index)++;
		HX_STACK_LINE(341)
		int tmp1 = this->current_view_index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(341)
		int tmp2 = ::luxe::Debug_obj::views->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(341)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(341)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(341)
		if ((tmp4)){
			HX_STACK_LINE(342)
			this->current_view_index = (int)0;
		}
		HX_STACK_LINE(346)
		int tmp5 = this->last_view_index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(346)
		::luxe::debug::DebugView tmp6 = ::luxe::Debug_obj::views->__get(tmp5).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(346)
		tmp6->hide();
		HX_STACK_LINE(348)
		int tmp7 = this->current_view_index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(348)
		::luxe::debug::DebugView tmp8 = ::luxe::Debug_obj::views->__get(tmp7).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(348)
		this->current_view = tmp8;
		HX_STACK_LINE(351)
		::luxe::debug::DebugView tmp9 = this->current_view;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(351)
		tmp9->show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,switch_view,(void))

Void Debug_obj::show_console( hx::Null< bool >  __o__show){
bool _show = __o__show.Default(true);
	HX_STACK_FRAME("luxe.Debug","show_console",0x488557a8,"luxe.Debug.show_console","luxe/Debug.hx",358,0xe4198724)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_show,"_show")
{
		HX_STACK_LINE(364)
		bool tmp = _show;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(364)
		if ((tmp)){
			HX_STACK_LINE(366)
			::luxe::Core tmp1 = ::Luxe_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(366)
			::luxe::Cursor tmp2 = tmp1->screen->cursor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(366)
			bool tmp3 = tmp2->get_visible();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(366)
			this->last_cursor_shown = tmp3;
			HX_STACK_LINE(367)
			::luxe::Core tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(367)
			::luxe::Cursor tmp5 = tmp4->screen->cursor;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(367)
			bool tmp6 = tmp5->get_grab();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(367)
			this->last_cursor_grab = tmp6;
			HX_STACK_LINE(369)
			::luxe::Core tmp7 = ::Luxe_obj::core;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(369)
			::luxe::Cursor tmp8 = tmp7->screen->cursor;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(369)
			tmp8->set_visible(true);
			HX_STACK_LINE(370)
			::luxe::Core tmp9 = ::Luxe_obj::core;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(370)
			::luxe::Cursor tmp10 = tmp9->screen->cursor;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(370)
			tmp10->set_grab(false);
		}
		else{
			HX_STACK_LINE(374)
			bool tmp1 = this->last_cursor_shown;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(374)
			bool tmp2 = (tmp1 != true);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(374)
			if ((tmp2)){
				HX_STACK_LINE(375)
				::luxe::Core tmp3 = ::Luxe_obj::core;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(375)
				::luxe::Cursor tmp4 = tmp3->screen->cursor;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(375)
				bool tmp5 = this->last_cursor_shown;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(375)
				tmp4->set_visible(tmp5);
			}
			HX_STACK_LINE(378)
			bool tmp3 = this->last_cursor_grab;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(378)
			bool tmp4 = (tmp3 != false);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(378)
			if ((tmp4)){
				HX_STACK_LINE(379)
				::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(379)
				::luxe::Cursor tmp6 = tmp5->screen->cursor;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(379)
				bool tmp7 = this->last_cursor_grab;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(379)
				tmp6->set_grab(tmp7);
			}
		}
		HX_STACK_LINE(383)
		this->visible = _show;
		HX_STACK_LINE(384)
		::phoenix::Batcher tmp1 = this->batcher;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		tmp1->enabled = _show;
		HX_STACK_LINE(386)
		bool tmp2 = _show;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(386)
		if ((tmp2)){
			HX_STACK_LINE(387)
			::luxe::debug::DebugView tmp3 = this->current_view;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(387)
			tmp3->show();
			HX_STACK_LINE(388)
			::phoenix::geometry::QuadGeometry tmp4 = this->overlay;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(388)
			tmp4->set_visible(true);
			HX_STACK_LINE(389)
			::luxe::debug::Inspector tmp5 = this->debug_inspector;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(389)
			tmp5->show();
		}
		else{
			HX_STACK_LINE(391)
			::luxe::debug::DebugView tmp3 = this->current_view;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(391)
			tmp3->hide();
			HX_STACK_LINE(392)
			::luxe::debug::Inspector tmp4 = this->debug_inspector;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(392)
			tmp4->hide();
			HX_STACK_LINE(393)
			::phoenix::geometry::QuadGeometry tmp5 = this->overlay;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(393)
			tmp5->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,show_console,(void))

Void Debug_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Debug","destroy",0xb6236507,"luxe.Debug.destroy","luxe/Debug.hx",398,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(400)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(400)
		Dynamic tmp1 = this->keyup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(400)
		tmp->off((int)11,tmp1);
		HX_STACK_LINE(401)
		::luxe::Core tmp2 = this->core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(401)
		Dynamic tmp3 = this->keydown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(401)
		tmp2->off((int)10,tmp3);
		HX_STACK_LINE(402)
		::luxe::Core tmp4 = this->core;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(402)
		Dynamic tmp5 = this->mouseup_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(402)
		tmp4->off((int)16,tmp5);
		HX_STACK_LINE(403)
		::luxe::Core tmp6 = this->core;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(403)
		Dynamic tmp7 = this->mousedown_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(403)
		tmp6->off((int)15,tmp7);
		HX_STACK_LINE(404)
		::luxe::Core tmp8 = this->core;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(404)
		Dynamic tmp9 = this->mousemove_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(404)
		tmp8->off((int)17,tmp9);
		HX_STACK_LINE(405)
		::luxe::Core tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(405)
		Dynamic tmp11 = this->mousewheel_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(405)
		tmp10->off((int)18,tmp11);
		HX_STACK_LINE(408)
		::luxe::Debug_obj::shut_down = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,destroy,(void))

Void Debug_obj::process( ){
{
		HX_STACK_FRAME("luxe.Debug","process",0x82e7da7c,"luxe.Debug.process","luxe/Debug.hx",412,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(414)
		::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(414)
		hx::AddEq(this->dt_average_accum,tmp->delta_time);
		HX_STACK_LINE(415)
		(this->dt_average_count)++;
		HX_STACK_LINE(417)
		int tmp1 = this->dt_average_count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(417)
		int tmp2 = this->dt_average_span;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(417)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(417)
		bool tmp4 = (tmp1 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(417)
		if ((tmp4)){
			HX_STACK_LINE(418)
			Float tmp5 = this->dt_average_accum;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(418)
			int tmp6 = this->dt_average_span;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(418)
			Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(418)
			this->dt_average = tmp7;
			HX_STACK_LINE(419)
			Float tmp8 = this->dt_average;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(419)
			this->dt_average_accum = tmp8;
			HX_STACK_LINE(420)
			this->dt_average_count = (int)0;
		}
		HX_STACK_LINE(423)
		bool tmp5 = this->visible;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(423)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(423)
		if ((tmp6)){
			HX_STACK_LINE(424)
			return null();
		}
		HX_STACK_LINE(428)
		::luxe::debug::Inspector tmp7 = this->debug_inspector;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(428)
		::luxe::debug::DebugView tmp8 = this->current_view;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(428)
		::String tmp9 = tmp8->get_name();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(428)
		::String tmp10 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(428)
		::String tmp11 = (tmp10 + HX_HCSTRING("] / ","\xf4","\x48","\x91","\x3d"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(428)
		Float tmp12 = this->dt_average;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(428)
		Float tmp13 = (Float((int)1) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(428)
		int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(428)
		::String tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(428)
		::String tmp16 = (tmp15 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(428)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(428)
		{
			HX_STACK_LINE(428)
			Float tmp18 = ::Math_obj::pow((int)10,(int)5);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(428)
			Float n = tmp18;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(428)
			::luxe::Core tmp19 = ::Luxe_obj::core;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(428)
			Float tmp20 = tmp19->delta_time;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(428)
			Float tmp21 = n;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(428)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(428)
			int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(428)
			Float tmp24 = n;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(428)
			tmp17 = (Float(tmp23) / Float(tmp24));
		}
		HX_STACK_LINE(428)
		::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(428)
		::String tmp19 = (tmp18 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(428)
		Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(428)
		{
			HX_STACK_LINE(428)
			Float tmp21 = ::Math_obj::pow((int)10,(int)5);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(428)
			Float n = tmp21;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(428)
			Float tmp22 = this->dt_average;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(428)
			Float tmp23 = n;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(428)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(428)
			int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(428)
			Float tmp26 = n;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(428)
			tmp20 = (Float(tmp25) / Float(tmp26));
		}
		HX_STACK_LINE(428)
		::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(428)
		tmp7->_title_text->set_text(tmp21);
		HX_STACK_LINE(430)
		{
			HX_STACK_LINE(430)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(430)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(430)
			while((true)){
				HX_STACK_LINE(430)
				bool tmp22 = (_g < _g1->length);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(430)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(430)
				if ((tmp23)){
					HX_STACK_LINE(430)
					break;
				}
				HX_STACK_LINE(430)
				::luxe::debug::DebugView tmp24 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(430)
				::luxe::debug::DebugView view = tmp24;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(430)
				++(_g);
				HX_STACK_LINE(431)
				view->process();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,process,(void))

bool Debug_obj::shut_down;

Array< ::Dynamic > Debug_obj::views;

::haxe::ds::StringMap Debug_obj::trace_callbacks;

Void Debug_obj::default_cpp_trace( Dynamic v,Dynamic infos){
{
		HX_STACK_FRAME("luxe.Debug","default_cpp_trace",0xe2ca2d38,"luxe.Debug.default_cpp_trace","luxe/Debug.hx",132,0xe4198724)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(infos,"infos")
		HX_STACK_LINE(133)
		bool tmp = (infos != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		if ((tmp)){
			HX_STACK_LINE(133)
			tmp1 = (infos->__Field(HX_HCSTRING("customParams","\xd7","\x51","\x18","\xed"), hx::paccDynamic ) != null());
		}
		else{
			HX_STACK_LINE(133)
			tmp1 = false;
		}
		HX_STACK_LINE(133)
		if ((tmp1)){
			HX_STACK_LINE(134)
			::String extra = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(extra,"extra");
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(135)
				cpp::ArrayBase _g1 = infos->__Field(HX_HCSTRING("customParams","\xd7","\x51","\x18","\xed"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(135)
				while((true)){
					HX_STACK_LINE(135)
					bool tmp2 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(135)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(135)
					if ((tmp3)){
						HX_STACK_LINE(135)
						break;
					}
					HX_STACK_LINE(135)
					Dynamic tmp4 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(135)
					Dynamic v1 = tmp4;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(135)
					++(_g);
					HX_STACK_LINE(135)
					Dynamic tmp5 = v1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(135)
					::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(135)
					::String tmp7 = (HX_HCSTRING(",","\x2c","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(135)
					hx::AddEq(extra,tmp7);
				}
			}
			HX_STACK_LINE(136)
			__trace((::Std_obj::string(v) + extra),infos);
		}
		else{
			HX_STACK_LINE(138)
			__trace(v,infos);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,default_cpp_trace,(void))

Void Debug_obj::internal_trace( Dynamic v,Dynamic inf){
{
		HX_STACK_FRAME("luxe.Debug","internal_trace",0x7eeb5c56,"luxe.Debug.internal_trace","luxe/Debug.hx",152,0xe4198724)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(inf,"inf")
		HX_STACK_LINE(154)
		int tmp = inf->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		::String tmp2 = ::StringTools_obj::rpad(tmp1,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),(int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		::String _line = tmp2;		HX_STACK_VAR(_line,"_line");
		HX_STACK_LINE(157)
		Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		Dynamic tmp4 = inf;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		::luxe::Debug_obj::default_cpp_trace(tmp3,tmp4);
		HX_STACK_LINE(163)
		bool tmp5 = ::luxe::Debug_obj::shut_down;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(163)
		if ((tmp5)){
			HX_STACK_LINE(164)
			return null();
		}
		HX_STACK_LINE(168)
		::haxe::ds::StringMap tmp6 = ::luxe::Debug_obj::trace_callbacks;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(168)
		Dynamic tmp7 = tmp6->iterator();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(168)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp7);  __it->hasNext(); ){
			Dynamic _callback = __it->next();
			{
				HX_STACK_LINE(169)
				Dynamic tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(169)
				Dynamic tmp9 = inf;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(169)
				_callback(tmp8,tmp9).Cast< Void >();
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,internal_trace,(void))


Debug_obj::Debug_obj()
{
}

void Debug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Debug);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(debug_inspector,"debug_inspector");
	HX_MARK_MEMBER_NAME(overlay,"overlay");
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(debug_font,"debug_font");
	HX_MARK_MEMBER_NAME(dt_average,"dt_average");
	HX_MARK_MEMBER_NAME(dt_average_accum,"dt_average_accum");
	HX_MARK_MEMBER_NAME(dt_average_span,"dt_average_span");
	HX_MARK_MEMBER_NAME(dt_average_count,"dt_average_count");
	HX_MARK_MEMBER_NAME(current_view_index,"current_view_index");
	HX_MARK_MEMBER_NAME(last_view_index,"last_view_index");
	HX_MARK_MEMBER_NAME(current_view,"current_view");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(profile_path,"profile_path");
	HX_MARK_MEMBER_NAME(profiling,"profiling");
	HX_MARK_MEMBER_NAME(last_cursor_shown,"last_cursor_shown");
	HX_MARK_MEMBER_NAME(last_cursor_grab,"last_cursor_grab");
	HX_MARK_END_CLASS();
}

void Debug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(debug_inspector,"debug_inspector");
	HX_VISIT_MEMBER_NAME(overlay,"overlay");
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(debug_font,"debug_font");
	HX_VISIT_MEMBER_NAME(dt_average,"dt_average");
	HX_VISIT_MEMBER_NAME(dt_average_accum,"dt_average_accum");
	HX_VISIT_MEMBER_NAME(dt_average_span,"dt_average_span");
	HX_VISIT_MEMBER_NAME(dt_average_count,"dt_average_count");
	HX_VISIT_MEMBER_NAME(current_view_index,"current_view_index");
	HX_VISIT_MEMBER_NAME(last_view_index,"last_view_index");
	HX_VISIT_MEMBER_NAME(current_view,"current_view");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(profile_path,"profile_path");
	HX_VISIT_MEMBER_NAME(profiling,"profiling");
	HX_VISIT_MEMBER_NAME(last_cursor_shown,"last_cursor_shown");
	HX_VISIT_MEMBER_NAME(last_cursor_grab,"last_cursor_grab");
}

Dynamic Debug_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"overlay") ) { return overlay; }
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		if (HX_FIELD_EQ(inName,"padding") ) { return padding; }
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_view") ) { return get_view_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"profiling") ) { return profiling; }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debug_font") ) { return debug_font; }
		if (HX_FIELD_EQ(inName,"dt_average") ) { return dt_average; }
		if (HX_FIELD_EQ(inName,"mousewheel") ) { return mousewheel_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"switch_view") ) { return switch_view_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_view") ) { return current_view; }
		if (HX_FIELD_EQ(inName,"profile_path") ) { return profile_path; }
		if (HX_FIELD_EQ(inName,"show_console") ) { return show_console_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"debug_inspector") ) { return debug_inspector; }
		if (HX_FIELD_EQ(inName,"dt_average_span") ) { return dt_average_span; }
		if (HX_FIELD_EQ(inName,"last_view_index") ) { return last_view_index; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dt_average_accum") ) { return dt_average_accum; }
		if (HX_FIELD_EQ(inName,"dt_average_count") ) { return dt_average_count; }
		if (HX_FIELD_EQ(inName,"last_cursor_grab") ) { return last_cursor_grab; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"last_cursor_shown") ) { return last_cursor_shown; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"current_view_index") ) { return current_view_index; }
		if (HX_FIELD_EQ(inName,"add_trace_listener") ) { return add_trace_listener_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"create_debug_console") ) { return create_debug_console_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"remove_trace_listener") ) { return remove_trace_listener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Debug_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"views") ) { outValue = views; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shut_down") ) { outValue = shut_down; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"internal_trace") ) { outValue = internal_trace_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"trace_callbacks") ) { outValue = trace_callbacks; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"default_cpp_trace") ) { outValue = default_cpp_trace_dyn(); return true;  }
	}
	return false;
}

Dynamic Debug_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overlay") ) { overlay=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"padding") ) { padding=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"profiling") ) { profiling=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debug_font") ) { debug_font=inValue.Cast< ::phoenix::BitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dt_average") ) { dt_average=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_view") ) { current_view=inValue.Cast< ::luxe::debug::DebugView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"profile_path") ) { profile_path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"debug_inspector") ) { debug_inspector=inValue.Cast< ::luxe::debug::Inspector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dt_average_span") ) { dt_average_span=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_view_index") ) { last_view_index=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dt_average_accum") ) { dt_average_accum=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dt_average_count") ) { dt_average_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_cursor_grab") ) { last_cursor_grab=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"last_cursor_shown") ) { last_cursor_shown=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"current_view_index") ) { current_view_index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Debug_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"views") ) { views=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shut_down") ) { shut_down=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"trace_callbacks") ) { trace_callbacks=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void Debug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("debug_inspector","\xcb","\x0d","\x08","\xee"));
	outFields->push(HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9"));
	outFields->push(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"));
	outFields->push(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"));
	outFields->push(HX_HCSTRING("debug_font","\x7b","\xda","\x87","\x62"));
	outFields->push(HX_HCSTRING("dt_average","\x6e","\x32","\x0e","\x4f"));
	outFields->push(HX_HCSTRING("dt_average_accum","\x08","\xea","\x79","\x34"));
	outFields->push(HX_HCSTRING("dt_average_span","\x7b","\x35","\xe8","\x30"));
	outFields->push(HX_HCSTRING("dt_average_count","\xfe","\x44","\x43","\x63"));
	outFields->push(HX_HCSTRING("current_view_index","\xfe","\x87","\xa7","\x2c"));
	outFields->push(HX_HCSTRING("last_view_index","\x01","\x45","\x48","\x57"));
	outFields->push(HX_HCSTRING("current_view","\x6b","\xc3","\x3e","\xb5"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	outFields->push(HX_HCSTRING("started","\x41","\x29","\x1b","\x35"));
	outFields->push(HX_HCSTRING("profile_path","\xbb","\xe3","\x72","\xf3"));
	outFields->push(HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"));
	outFields->push(HX_HCSTRING("last_cursor_shown","\x31","\x6e","\xe4","\x3d"));
	outFields->push(HX_HCSTRING("last_cursor_grab","\x6c","\xb6","\xf8","\xdd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Debug_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsBool,(int)offsetof(Debug_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*::luxe::debug::Inspector*/ ,(int)offsetof(Debug_obj,debug_inspector),HX_HCSTRING("debug_inspector","\xcb","\x0d","\x08","\xee")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Debug_obj,overlay),HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(Debug_obj,batcher),HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Debug_obj,view),HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")},
	{hx::fsObject /*::phoenix::BitmapFont*/ ,(int)offsetof(Debug_obj,debug_font),HX_HCSTRING("debug_font","\x7b","\xda","\x87","\x62")},
	{hx::fsFloat,(int)offsetof(Debug_obj,dt_average),HX_HCSTRING("dt_average","\x6e","\x32","\x0e","\x4f")},
	{hx::fsFloat,(int)offsetof(Debug_obj,dt_average_accum),HX_HCSTRING("dt_average_accum","\x08","\xea","\x79","\x34")},
	{hx::fsInt,(int)offsetof(Debug_obj,dt_average_span),HX_HCSTRING("dt_average_span","\x7b","\x35","\xe8","\x30")},
	{hx::fsInt,(int)offsetof(Debug_obj,dt_average_count),HX_HCSTRING("dt_average_count","\xfe","\x44","\x43","\x63")},
	{hx::fsInt,(int)offsetof(Debug_obj,current_view_index),HX_HCSTRING("current_view_index","\xfe","\x87","\xa7","\x2c")},
	{hx::fsInt,(int)offsetof(Debug_obj,last_view_index),HX_HCSTRING("last_view_index","\x01","\x45","\x48","\x57")},
	{hx::fsObject /*::luxe::debug::DebugView*/ ,(int)offsetof(Debug_obj,current_view),HX_HCSTRING("current_view","\x6b","\xc3","\x3e","\xb5")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Debug_obj,padding),HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0")},
	{hx::fsBool,(int)offsetof(Debug_obj,started),HX_HCSTRING("started","\x41","\x29","\x1b","\x35")},
	{hx::fsString,(int)offsetof(Debug_obj,profile_path),HX_HCSTRING("profile_path","\xbb","\xe3","\x72","\xf3")},
	{hx::fsBool,(int)offsetof(Debug_obj,profiling),HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f")},
	{hx::fsBool,(int)offsetof(Debug_obj,last_cursor_shown),HX_HCSTRING("last_cursor_shown","\x31","\x6e","\xe4","\x3d")},
	{hx::fsBool,(int)offsetof(Debug_obj,last_cursor_grab),HX_HCSTRING("last_cursor_grab","\x6c","\xb6","\xf8","\xdd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Debug_obj::shut_down,HX_HCSTRING("shut_down","\x8d","\xbd","\x24","\x57")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Debug_obj::views,HX_HCSTRING("views","\x6e","\xe6","\xfc","\x36")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Debug_obj::trace_callbacks,HX_HCSTRING("trace_callbacks","\x94","\x35","\x4d","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("debug_inspector","\xcb","\x0d","\x08","\xee"),
	HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9"),
	HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),
	HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"),
	HX_HCSTRING("debug_font","\x7b","\xda","\x87","\x62"),
	HX_HCSTRING("dt_average","\x6e","\x32","\x0e","\x4f"),
	HX_HCSTRING("dt_average_accum","\x08","\xea","\x79","\x34"),
	HX_HCSTRING("dt_average_span","\x7b","\x35","\xe8","\x30"),
	HX_HCSTRING("dt_average_count","\xfe","\x44","\x43","\x63"),
	HX_HCSTRING("current_view_index","\xfe","\x87","\xa7","\x2c"),
	HX_HCSTRING("last_view_index","\x01","\x45","\x48","\x57"),
	HX_HCSTRING("current_view","\x6b","\xc3","\x3e","\xb5"),
	HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"),
	HX_HCSTRING("started","\x41","\x29","\x1b","\x35"),
	HX_HCSTRING("profile_path","\xbb","\xe3","\x72","\xf3"),
	HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("get_view","\xee","\xed","\x09","\xce"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("remove_trace_listener","\x89","\x09","\xa9","\x42"),
	HX_HCSTRING("add_trace_listener","\x4c","\xd4","\x42","\x9a"),
	HX_HCSTRING("create_debug_console","\x68","\xba","\x8d","\x98"),
	HX_HCSTRING("mouseup","\xc0","\x0f","\x73","\xc0"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54"),
	HX_HCSTRING("mousemove","\xb6","\x6f","\xdc","\x09"),
	HX_HCSTRING("keyup","\xba","\xd5","\xfe","\xde"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("switch_view","\xd0","\x6f","\xb2","\x61"),
	HX_HCSTRING("last_cursor_shown","\x31","\x6e","\xe4","\x3d"),
	HX_HCSTRING("last_cursor_grab","\x6c","\xb6","\xf8","\xdd"),
	HX_HCSTRING("show_console","\xd5","\xde","\x69","\xa4"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Debug_obj::shut_down,"shut_down");
	HX_MARK_MEMBER_NAME(Debug_obj::views,"views");
	HX_MARK_MEMBER_NAME(Debug_obj::trace_callbacks,"trace_callbacks");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Debug_obj::shut_down,"shut_down");
	HX_VISIT_MEMBER_NAME(Debug_obj::views,"views");
	HX_VISIT_MEMBER_NAME(Debug_obj::trace_callbacks,"trace_callbacks");
};

#endif

hx::Class Debug_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("shut_down","\x8d","\xbd","\x24","\x57"),
	HX_HCSTRING("views","\x6e","\xe6","\xfc","\x36"),
	HX_HCSTRING("trace_callbacks","\x94","\x35","\x4d","\xe8"),
	HX_HCSTRING("default_cpp_trace","\xeb","\x82","\x2b","\x18"),
	HX_HCSTRING("internal_trace","\xc3","\xc8","\x61","\x02"),
	::String(null()) };

void Debug_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Debug","\x7b","\x43","\x14","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Debug_obj::__GetStatic;
	__mClass->mSetStaticField = &Debug_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Debug_obj >;
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

void Debug_obj::__boot()
{
	shut_down= false;
}

} // end namespace luxe
