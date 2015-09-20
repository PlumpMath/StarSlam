#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
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
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Scene
#include <luxe/Scene.h>
#endif
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_SceneDebugView
#include <luxe/debug/SceneDebugView.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMap
#include <luxe/structural/OrderedMap.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMapIterator
#include <luxe/structural/OrderedMapIterator.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_MatrixTransform
#include <phoenix/MatrixTransform.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
namespace luxe{

Void Scene_obj::__construct(::String __o__name)
{
HX_STACK_FRAME("luxe.Scene","new",0x652ab566,"luxe.Scene.new","luxe/Scene.hx",10,0x14d4e1cb)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__name,"_name")
::String _name = __o__name.Default(HX_HCSTRING("untitled scene","\xd1","\x1d","\x02","\xcb"));
{
	HX_STACK_LINE(97)
	this->entity_count = (int)0;
	HX_STACK_LINE(28)
	this->_has_changed = false;
	HX_STACK_LINE(19)
	this->length = (int)0;
	HX_STACK_LINE(17)
	this->started = false;
	HX_STACK_LINE(15)
	this->inited = false;
	HX_STACK_LINE(34)
	::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	super::__construct(tmp,null());
	HX_STACK_LINE(36)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(36)
	this->entities = tmp1;
	HX_STACK_LINE(38)
	this->_delayed_init_entities = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(39)
	this->_delayed_reset_entities = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(41)
	::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	Dynamic tmp3 = this->init_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	tmp2->on((int)2,tmp3);
	HX_STACK_LINE(42)
	::luxe::Core tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	Dynamic tmp5 = this->_destroy_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	tmp4->on((int)6,tmp5);
	HX_STACK_LINE(43)
	::luxe::Core tmp6 = ::Luxe_obj::core;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	Dynamic tmp7 = this->update_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(43)
	tmp6->on((int)4,tmp7);
	HX_STACK_LINE(45)
	::luxe::Core tmp8 = ::Luxe_obj::core;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(45)
	Dynamic tmp9 = this->prerender_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(45)
	tmp8->on((int)7,tmp9);
	HX_STACK_LINE(46)
	::luxe::Core tmp10 = ::Luxe_obj::core;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(46)
	Dynamic tmp11 = this->postrender_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(46)
	tmp10->on((int)9,tmp11);
	HX_STACK_LINE(47)
	::luxe::Core tmp12 = ::Luxe_obj::core;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(47)
	Dynamic tmp13 = this->render_dyn();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(47)
	tmp12->on((int)8,tmp13);
	HX_STACK_LINE(49)
	::luxe::Core tmp14 = ::Luxe_obj::core;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(49)
	Dynamic tmp15 = this->keydown_dyn();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(49)
	tmp14->on((int)10,tmp15);
	HX_STACK_LINE(50)
	::luxe::Core tmp16 = ::Luxe_obj::core;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(50)
	Dynamic tmp17 = this->keyup_dyn();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(50)
	tmp16->on((int)11,tmp17);
	HX_STACK_LINE(51)
	::luxe::Core tmp18 = ::Luxe_obj::core;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(51)
	Dynamic tmp19 = this->textinput_dyn();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(51)
	tmp18->on((int)12,tmp19);
	HX_STACK_LINE(53)
	::luxe::Core tmp20 = ::Luxe_obj::core;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(53)
	Dynamic tmp21 = this->inputup_dyn();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(53)
	tmp20->on((int)14,tmp21);
	HX_STACK_LINE(54)
	::luxe::Core tmp22 = ::Luxe_obj::core;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(54)
	Dynamic tmp23 = this->inputdown_dyn();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(54)
	tmp22->on((int)13,tmp23);
	HX_STACK_LINE(56)
	::luxe::Core tmp24 = ::Luxe_obj::core;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(56)
	Dynamic tmp25 = this->mouseup_dyn();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(56)
	tmp24->on((int)16,tmp25);
	HX_STACK_LINE(57)
	::luxe::Core tmp26 = ::Luxe_obj::core;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(57)
	Dynamic tmp27 = this->mousedown_dyn();		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(57)
	tmp26->on((int)15,tmp27);
	HX_STACK_LINE(58)
	::luxe::Core tmp28 = ::Luxe_obj::core;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(58)
	Dynamic tmp29 = this->mousemove_dyn();		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(58)
	tmp28->on((int)17,tmp29);
	HX_STACK_LINE(59)
	::luxe::Core tmp30 = ::Luxe_obj::core;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(59)
	Dynamic tmp31 = this->mousewheel_dyn();		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(59)
	tmp30->on((int)18,tmp31);
	HX_STACK_LINE(61)
	::luxe::Core tmp32 = ::Luxe_obj::core;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(61)
	Dynamic tmp33 = this->touchup_dyn();		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(61)
	tmp32->on((int)20,tmp33);
	HX_STACK_LINE(62)
	::luxe::Core tmp34 = ::Luxe_obj::core;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(62)
	Dynamic tmp35 = this->touchdown_dyn();		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(62)
	tmp34->on((int)19,tmp35);
	HX_STACK_LINE(63)
	::luxe::Core tmp36 = ::Luxe_obj::core;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(63)
	Dynamic tmp37 = this->touchmove_dyn();		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(63)
	tmp36->on((int)21,tmp37);
	HX_STACK_LINE(65)
	::luxe::Core tmp38 = ::Luxe_obj::core;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(65)
	Dynamic tmp39 = this->gamepadup_dyn();		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(65)
	tmp38->on((int)24,tmp39);
	HX_STACK_LINE(66)
	::luxe::Core tmp40 = ::Luxe_obj::core;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(66)
	Dynamic tmp41 = this->gamepaddown_dyn();		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(66)
	tmp40->on((int)23,tmp41);
	HX_STACK_LINE(67)
	::luxe::Core tmp42 = ::Luxe_obj::core;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(67)
	Dynamic tmp43 = this->gamepadaxis_dyn();		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(67)
	tmp42->on((int)22,tmp43);
	HX_STACK_LINE(68)
	::luxe::Core tmp44 = ::Luxe_obj::core;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(68)
	Dynamic tmp45 = this->gamepaddevice_dyn();		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(68)
	tmp44->on((int)25,tmp45);
	HX_STACK_LINE(70)
	::luxe::Core tmp46 = ::Luxe_obj::core;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(70)
	Dynamic tmp47 = this->windowmoved_dyn();		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(70)
	tmp46->on((int)27,tmp47);
	HX_STACK_LINE(71)
	::luxe::Core tmp48 = ::Luxe_obj::core;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(71)
	Dynamic tmp49 = this->windowresized_dyn();		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(71)
	tmp48->on((int)28,tmp49);
	HX_STACK_LINE(72)
	::luxe::Core tmp50 = ::Luxe_obj::core;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(72)
	Dynamic tmp51 = this->windowsized_dyn();		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(72)
	tmp50->on((int)29,tmp51);
	HX_STACK_LINE(73)
	::luxe::Core tmp52 = ::Luxe_obj::core;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(73)
	Dynamic tmp53 = this->windowminimized_dyn();		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(73)
	tmp52->on((int)30,tmp53);
	HX_STACK_LINE(74)
	::luxe::Core tmp54 = ::Luxe_obj::core;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(74)
	Dynamic tmp55 = this->windowrestored_dyn();		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(74)
	tmp54->on((int)31,tmp55);
	HX_STACK_LINE(77)
	::luxe::Core tmp56 = ::Luxe_obj::core;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(77)
	bool tmp57 = tmp56->inited;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(77)
	if ((tmp57)){
		HX_STACK_LINE(78)
		this->init(null());
	}
	HX_STACK_LINE(81)
	::luxe::Core tmp58 = ::Luxe_obj::core;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(81)
	::luxe::debug::SceneDebugView tmp59 = tmp58->debug->get_view(HX_HCSTRING("Scenes","\xc7","\xbd","\x60","\x73"));		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(81)
	::luxe::debug::SceneDebugView _view = tmp59;		HX_STACK_VAR(_view,"_view");
	HX_STACK_LINE(82)
	bool tmp60 = (_view != null());		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(82)
	if ((tmp60)){
		HX_STACK_LINE(83)
		_view->add_scene(hx::ObjectPtr<OBJ_>(this));
	}
}
;
	return null();
}

//Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new(::String __o__name)
{  hx::ObjectPtr< Scene_obj > _result_ = new Scene_obj();
	_result_->__construct(__o__name);
	return _result_;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > _result_ = new Scene_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Scene_obj::handle_duplicate_warning( ::String _name){
{
		HX_STACK_FRAME("luxe.Scene","handle_duplicate_warning",0x3544440b,"luxe.Scene.handle_duplicate_warning","luxe/Scene.hx",89,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(90)
		::haxe::ds::StringMap tmp = this->entities;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		if ((tmp2)){
			HX_STACK_LINE(91)
			::String tmp3 = this->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			::String tmp5 = (tmp4 + HX_HCSTRING(" / adding a second entity named ","\x25","\x7f","\xee","\xd9"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(91)
			::String tmp8 = (tmp7 + HX_HCSTRING("!\n                This will replace the existing one, possibly leaving the previous one in limbo.","\x8a","\x82","\xfa","\x6f"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(91)
			::String tmp9 = (HX_HCSTRING("    i / scene / ","\xcd","\x27","\xce","\x13") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(91)
			Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),91,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("handle_duplicate_warning","\xd1","\x8a","\x7d","\x4b"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(91)
			::haxe::Log_obj::trace(tmp9,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,handle_duplicate_warning,(void))

Void Scene_obj::add( ::luxe::Entity entity){
{
		HX_STACK_FRAME("luxe.Scene","add",0x6520d727,"luxe.Scene.add","luxe/Scene.hx",98,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(entity,"entity")
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			bool tmp = (entity == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(100)
			if ((tmp)){
				HX_STACK_LINE(100)
				::luxe::DebugError tmp1 = ::luxe::DebugError_obj::null_assertion(HX_HCSTRING("entity was null (can't put entity in a scene if the entity is null.)","\x65","\x10","\xf4","\x7a"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(100)
				HX_STACK_DO_THROW(tmp1);
			}
		}
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			::String tmp = entity->get_name();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(104)
			::String _name = tmp;		HX_STACK_VAR(_name,"_name");
			HX_STACK_LINE(104)
			::haxe::ds::StringMap tmp1 = this->entities;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(104)
			::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(104)
			if ((tmp3)){
				HX_STACK_LINE(104)
				::String tmp4 = this->get_name();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(104)
				::String tmp5 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(104)
				::String tmp6 = (tmp5 + HX_HCSTRING(" / adding a second entity named ","\x25","\x7f","\xee","\xd9"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(104)
				::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(104)
				::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(104)
				::String tmp9 = (tmp8 + HX_HCSTRING("!\n                This will replace the existing one, possibly leaving the previous one in limbo.","\x8a","\x82","\xfa","\x6f"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(104)
				::String tmp10 = (HX_HCSTRING("    i / scene / ","\xcd","\x27","\xce","\x13") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(104)
				Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),91,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("handle_duplicate_warning","\xd1","\x8a","\x7d","\x4b"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(104)
				::haxe::Log_obj::trace(tmp10,tmp11);
			}
		}
		HX_STACK_LINE(106)
		entity->set_scene(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			::String tmp = entity->get_name();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(107)
			::String key = tmp;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(107)
			::haxe::ds::StringMap tmp1 = this->entities;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			::String tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			::luxe::Entity tmp3 = entity;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(107)
			tmp1->set(tmp2,tmp3);
		}
		HX_STACK_LINE(108)
		(this->entity_count)++;
		HX_STACK_LINE(111)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		if ((tmp)){
			HX_STACK_LINE(113)
			::luxe::Entity tmp1 = entity;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(113)
			this->_delayed_init_entities->push(tmp1);
		}
		HX_STACK_LINE(116)
		bool tmp1 = this->started;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		if ((tmp1)){
			HX_STACK_LINE(118)
			::luxe::Entity tmp2 = entity;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(118)
			this->_delayed_reset_entities->push(tmp2);
		}
		HX_STACK_LINE(121)
		this->_has_changed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,add,(void))

bool Scene_obj::remove( ::luxe::Entity entity){
	HX_STACK_FRAME("luxe.Scene","remove",0x2b461efe,"luxe.Scene.remove","luxe/Scene.hx",126,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(entity,"entity")
	HX_STACK_LINE(128)
	{
		HX_STACK_LINE(128)
		bool tmp = (entity == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		if ((tmp)){
			HX_STACK_LINE(128)
			::luxe::DebugError tmp1 = ::luxe::DebugError_obj::null_assertion(HX_HCSTRING("entity was null (can't remove entity from a scene if the entity is null.)","\x2b","\xca","\x3a","\x87"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(128)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(130)
	this->_has_changed = true;
	HX_STACK_LINE(132)
	::luxe::Scene tmp = entity->get_scene();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	bool tmp1 = (tmp == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	if ((tmp1)){
		HX_STACK_LINE(134)
		entity->set_scene(null());
		HX_STACK_LINE(135)
		(this->entity_count)--;
		HX_STACK_LINE(136)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			::String tmp3 = entity->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(136)
			::String key = tmp3;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(136)
			::haxe::ds::StringMap tmp4 = this->entities;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(136)
			tmp2 = tmp4->remove(tmp5);
		}
		HX_STACK_LINE(136)
		return tmp2;
	}
	else{
		HX_STACK_LINE(140)
		::String tmp2 = HX_HCSTRING("    i / scene / can't remove the entity from this scene, it is not mine (entity.scene != this)","\x6b","\xc2","\xc4","\xef");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),140,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		::haxe::Log_obj::trace(tmp2,tmp3);
		HX_STACK_LINE(141)
		return false;
	}
	HX_STACK_LINE(145)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,remove,return )

Dynamic Scene_obj::get( ::String _name){
	HX_STACK_FRAME("luxe.Scene","get",0x6525659c,"luxe.Scene.get","luxe/Scene.hx",149,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(151)
	::haxe::ds::StringMap tmp = this->entities;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	::luxe::Entity tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	Dynamic tmp3 = ((Dynamic)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(151)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,get,return )

Void Scene_obj::empty( ){
{
		HX_STACK_FRAME("luxe.Scene","empty",0xe3f8ed13,"luxe.Scene.empty","luxe/Scene.hx",156,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(158)
		int tmp = this->entity_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		if ((tmp1)){
			HX_STACK_LINE(159)
			::haxe::ds::StringMap tmp2 = this->entities;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(159)
			Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(159)
			for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp3);  __it->hasNext(); ){
				::luxe::Entity entity = __it->next();
				{
					HX_STACK_LINE(160)
					bool tmp4 = (entity != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(160)
					if ((tmp4)){
						HX_STACK_LINE(162)
						::luxe::Entity tmp5 = entity;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(162)
						this->remove(tmp5);
						HX_STACK_LINE(163)
						entity->destroy(null());
						HX_STACK_LINE(164)
						entity = null();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,empty,(void))

Array< ::Dynamic > Scene_obj::get_named_like( ::String _name,Array< ::Dynamic > into){
	HX_STACK_FRAME("luxe.Scene","get_named_like",0x42ca57e0,"luxe.Scene.get_named_like","luxe/Scene.hx",182,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(into,"into")
	HX_STACK_LINE(184)
	int tmp = this->entity_count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	if ((tmp1)){
		HX_STACK_LINE(185)
		::String tmp2 = (HX_HCSTRING("^((?:","\x79","\xa1","\x39","\x3a") + _name);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		::String tmp3 = (tmp2 + HX_HCSTRING(")[.]{1})","\x63","\xe3","\x56","\x33"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		::EReg tmp4 = ::EReg_obj::__new(tmp3,HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		::EReg _filter = tmp4;		HX_STACK_VAR(_filter,"_filter");
		HX_STACK_LINE(186)
		::haxe::ds::StringMap tmp5 = this->entities;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(186)
		Dynamic tmp6 = tmp5->iterator();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(186)
		for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp6);  __it->hasNext(); ){
			::luxe::Entity _entity = __it->next();
			{
				HX_STACK_LINE(187)
				::String tmp7 = _entity->get_name();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(187)
				bool tmp8 = _filter->match(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(187)
				if ((tmp8)){
					HX_STACK_LINE(188)
					::luxe::Entity tmp9 = _entity;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(188)
					into->push(tmp9);
				}
			}
;
		}
	}
	HX_STACK_LINE(193)
	return into;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,get_named_like,return )

Void Scene_obj::render( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","render",0x2be6ee10,"luxe.Scene.render","luxe/Scene.hx",201,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(201)
		this->emit((int)8,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,render,(void))

Void Scene_obj::prerender( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","prerender",0x8547753f,"luxe.Scene.prerender","luxe/Scene.hx",207,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(207)
		this->emit((int)7,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,prerender,(void))

Void Scene_obj::postrender( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","postrender",0x1efbdf70,"luxe.Scene.postrender","luxe/Scene.hx",213,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(213)
		this->emit((int)9,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,postrender,(void))

Void Scene_obj::keydown( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","keydown",0x70831d87,"luxe.Scene.keydown","luxe/Scene.hx",219,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(223)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		this->emit((int)10,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,keydown,(void))

Void Scene_obj::keyup( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","keyup",0x531d8840,"luxe.Scene.keyup","luxe/Scene.hx",227,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(231)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		this->emit((int)11,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,keyup,(void))

Void Scene_obj::textinput( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","textinput",0x19ef51c3,"luxe.Scene.textinput","luxe/Scene.hx",235,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(239)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		this->emit((int)12,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,textinput,(void))

Void Scene_obj::mousedown( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","mousedown",0x59faf28d,"luxe.Scene.mousedown","luxe/Scene.hx",245,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(249)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		this->emit((int)15,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mousedown,(void))

Void Scene_obj::mousewheel( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","mousewheel",0x4d882010,"luxe.Scene.mousewheel","luxe/Scene.hx",253,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(257)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		this->emit((int)18,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mousewheel,(void))

Void Scene_obj::mouseup( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","mouseup",0x7f87efc6,"luxe.Scene.mouseup","luxe/Scene.hx",261,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(265)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(265)
		this->emit((int)16,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mouseup,(void))

Void Scene_obj::mousemove( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","mousemove",0x5feddd3c,"luxe.Scene.mousemove","luxe/Scene.hx",269,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(273)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		this->emit((int)17,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mousemove,(void))

Void Scene_obj::touchdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","touchdown",0x7312c927,"luxe.Scene.touchdown","luxe/Scene.hx",279,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(281)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		this->emit((int)19,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,touchdown,(void))

Void Scene_obj::touchup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","touchup",0x980d0be0,"luxe.Scene.touchup","luxe/Scene.hx",285,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(287)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		this->emit((int)20,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,touchup,(void))

Void Scene_obj::touchmove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","touchmove",0x7905b3d6,"luxe.Scene.touchmove","luxe/Scene.hx",291,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(293)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		this->emit((int)21,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,touchmove,(void))

Void Scene_obj::gamepadaxis( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","gamepadaxis",0xf55ebcc8,"luxe.Scene.gamepadaxis","luxe/Scene.hx",299,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(301)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(301)
		this->emit((int)22,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepadaxis,(void))

Void Scene_obj::gamepadup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","gamepadup",0xb549dec2,"luxe.Scene.gamepadup","luxe/Scene.hx",305,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(307)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(307)
		this->emit((int)24,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepadup,(void))

Void Scene_obj::gamepaddown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","gamepaddown",0xf7539889,"luxe.Scene.gamepaddown","luxe/Scene.hx",311,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(313)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		this->emit((int)23,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepaddown,(void))

Void Scene_obj::gamepaddevice( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","gamepaddevice",0x6323147d,"luxe.Scene.gamepaddevice","luxe/Scene.hx",317,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(319)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		this->emit((int)25,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepaddevice,(void))

Void Scene_obj::windowmoved( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","windowmoved",0x79774d49,"luxe.Scene.windowmoved","luxe/Scene.hx",326,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(328)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		this->emit((int)27,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowmoved,(void))

Void Scene_obj::windowresized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","windowresized",0x58b7ce86,"luxe.Scene.windowresized","luxe/Scene.hx",332,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(334)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(334)
		this->emit((int)28,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowresized,(void))

Void Scene_obj::windowsized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","windowsized",0xe9ea8999,"luxe.Scene.windowsized","luxe/Scene.hx",338,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(340)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(340)
		this->emit((int)29,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowsized,(void))

Void Scene_obj::windowminimized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","windowminimized",0x4dd4bf9c,"luxe.Scene.windowminimized","luxe/Scene.hx",344,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(346)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		this->emit((int)30,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowminimized,(void))

Void Scene_obj::windowrestored( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","windowrestored",0x9649ce00,"luxe.Scene.windowrestored","luxe/Scene.hx",350,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(352)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		this->emit((int)31,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowrestored,(void))

Void Scene_obj::inputdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","inputdown",0x74d0f6f2,"luxe.Scene.inputdown","luxe/Scene.hx",358,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(360)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(360)
		this->emit((int)13,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,inputdown,(void))

Void Scene_obj::inputup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","inputup",0x9333a0eb,"luxe.Scene.inputup","luxe/Scene.hx",364,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(366)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		this->emit((int)14,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,inputup,(void))

Void Scene_obj::_destroy( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","_destroy",0xd16dabb5,"luxe.Scene._destroy","luxe/Scene.hx",374,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(374)
		this->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,_destroy,(void))

Void Scene_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Scene","destroy",0xe39b0d00,"luxe.Scene.destroy","luxe/Scene.hx",378,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(380)
		::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(380)
		Dynamic tmp1 = this->init_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(380)
		tmp->off((int)2,tmp1);
		HX_STACK_LINE(381)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(381)
		Dynamic tmp3 = this->_destroy_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(381)
		tmp2->off((int)6,tmp3);
		HX_STACK_LINE(382)
		::luxe::Core tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(382)
		Dynamic tmp5 = this->update_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(382)
		tmp4->off((int)4,tmp5);
		HX_STACK_LINE(384)
		::luxe::Core tmp6 = ::Luxe_obj::core;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(384)
		Dynamic tmp7 = this->prerender_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(384)
		tmp6->off((int)7,tmp7);
		HX_STACK_LINE(385)
		::luxe::Core tmp8 = ::Luxe_obj::core;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(385)
		Dynamic tmp9 = this->postrender_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(385)
		tmp8->off((int)9,tmp9);
		HX_STACK_LINE(386)
		::luxe::Core tmp10 = ::Luxe_obj::core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(386)
		Dynamic tmp11 = this->render_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(386)
		tmp10->off((int)8,tmp11);
		HX_STACK_LINE(388)
		::luxe::Core tmp12 = ::Luxe_obj::core;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(388)
		Dynamic tmp13 = this->keydown_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(388)
		tmp12->off((int)10,tmp13);
		HX_STACK_LINE(389)
		::luxe::Core tmp14 = ::Luxe_obj::core;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(389)
		Dynamic tmp15 = this->keyup_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(389)
		tmp14->off((int)11,tmp15);
		HX_STACK_LINE(390)
		::luxe::Core tmp16 = ::Luxe_obj::core;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(390)
		Dynamic tmp17 = this->textinput_dyn();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(390)
		tmp16->off((int)12,tmp17);
		HX_STACK_LINE(392)
		::luxe::Core tmp18 = ::Luxe_obj::core;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(392)
		Dynamic tmp19 = this->inputup_dyn();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(392)
		tmp18->off((int)14,tmp19);
		HX_STACK_LINE(393)
		::luxe::Core tmp20 = ::Luxe_obj::core;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(393)
		Dynamic tmp21 = this->inputdown_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(393)
		tmp20->off((int)13,tmp21);
		HX_STACK_LINE(395)
		::luxe::Core tmp22 = ::Luxe_obj::core;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(395)
		Dynamic tmp23 = this->mouseup_dyn();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(395)
		tmp22->off((int)16,tmp23);
		HX_STACK_LINE(396)
		::luxe::Core tmp24 = ::Luxe_obj::core;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(396)
		Dynamic tmp25 = this->mousedown_dyn();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(396)
		tmp24->off((int)15,tmp25);
		HX_STACK_LINE(397)
		::luxe::Core tmp26 = ::Luxe_obj::core;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(397)
		Dynamic tmp27 = this->mousemove_dyn();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(397)
		tmp26->off((int)17,tmp27);
		HX_STACK_LINE(398)
		::luxe::Core tmp28 = ::Luxe_obj::core;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(398)
		Dynamic tmp29 = this->mousewheel_dyn();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(398)
		tmp28->off((int)18,tmp29);
		HX_STACK_LINE(400)
		::luxe::Core tmp30 = ::Luxe_obj::core;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(400)
		Dynamic tmp31 = this->touchup_dyn();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(400)
		tmp30->off((int)20,tmp31);
		HX_STACK_LINE(401)
		::luxe::Core tmp32 = ::Luxe_obj::core;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(401)
		Dynamic tmp33 = this->touchdown_dyn();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(401)
		tmp32->off((int)19,tmp33);
		HX_STACK_LINE(402)
		::luxe::Core tmp34 = ::Luxe_obj::core;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(402)
		Dynamic tmp35 = this->touchmove_dyn();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(402)
		tmp34->off((int)21,tmp35);
		HX_STACK_LINE(404)
		::luxe::Core tmp36 = ::Luxe_obj::core;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(404)
		Dynamic tmp37 = this->gamepadup_dyn();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(404)
		tmp36->off((int)24,tmp37);
		HX_STACK_LINE(405)
		::luxe::Core tmp38 = ::Luxe_obj::core;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(405)
		Dynamic tmp39 = this->gamepaddown_dyn();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(405)
		tmp38->off((int)23,tmp39);
		HX_STACK_LINE(406)
		::luxe::Core tmp40 = ::Luxe_obj::core;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(406)
		Dynamic tmp41 = this->gamepadaxis_dyn();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(406)
		tmp40->off((int)22,tmp41);
		HX_STACK_LINE(407)
		::luxe::Core tmp42 = ::Luxe_obj::core;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(407)
		Dynamic tmp43 = this->gamepaddevice_dyn();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(407)
		tmp42->off((int)25,tmp43);
		HX_STACK_LINE(409)
		::luxe::Core tmp44 = ::Luxe_obj::core;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(409)
		Dynamic tmp45 = this->windowmoved_dyn();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(409)
		tmp44->off((int)27,tmp45);
		HX_STACK_LINE(410)
		::luxe::Core tmp46 = ::Luxe_obj::core;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(410)
		Dynamic tmp47 = this->windowresized_dyn();		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(410)
		tmp46->off((int)28,tmp47);
		HX_STACK_LINE(411)
		::luxe::Core tmp48 = ::Luxe_obj::core;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(411)
		Dynamic tmp49 = this->windowsized_dyn();		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(411)
		tmp48->off((int)29,tmp49);
		HX_STACK_LINE(412)
		::luxe::Core tmp50 = ::Luxe_obj::core;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(412)
		Dynamic tmp51 = this->windowminimized_dyn();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(412)
		tmp50->off((int)30,tmp51);
		HX_STACK_LINE(413)
		::luxe::Core tmp52 = ::Luxe_obj::core;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(413)
		Dynamic tmp53 = this->windowrestored_dyn();		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(413)
		tmp52->off((int)31,tmp53);
		HX_STACK_LINE(415)
		this->emit((int)6,null());
		HX_STACK_LINE(417)
		::luxe::Core tmp54 = ::Luxe_obj::core;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(417)
		::luxe::debug::SceneDebugView tmp55 = tmp54->debug->get_view(HX_HCSTRING("Scenes","\xc7","\xbd","\x60","\x73"));		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(417)
		::luxe::debug::SceneDebugView _view = tmp55;		HX_STACK_VAR(_view,"_view");
		HX_STACK_LINE(418)
		bool tmp56 = (_view != null());		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(418)
		if ((tmp56)){
			HX_STACK_LINE(419)
			_view->remove_scene(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,destroy,(void))

bool Scene_obj::_do_init( ){
	HX_STACK_FRAME("luxe.Scene","_do_init",0x45b3463f,"luxe.Scene._do_init","luxe/Scene.hx",424,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(426)
	int tmp = this->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(426)
	int _before_count = tmp;		HX_STACK_VAR(_before_count,"_before_count");
	HX_STACK_LINE(428)
	int tmp1 = this->entity_count;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(428)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(428)
	if ((tmp2)){
		HX_STACK_LINE(429)
		::haxe::ds::StringMap tmp3 = this->entities;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(429)
		Dynamic tmp4 = tmp3->iterator();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(429)
		for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp4);  __it->hasNext(); ){
			::luxe::Entity entity = __it->next();
			{
				HX_STACK_LINE(430)
				bool tmp5 = (entity != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(430)
				if ((tmp5)){
					HX_STACK_LINE(431)
					bool tmp6 = entity->inited;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(431)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(431)
					if ((tmp7)){
						HX_STACK_LINE(433)
						entity->init();
						HX_STACK_LINE(433)
						entity->emit((int)2,null());
						HX_STACK_LINE(433)
						bool tmp8 = (entity->component_count > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(433)
						if ((tmp8)){
							HX_STACK_LINE(433)
							::luxe::structural::OrderedMap tmp9 = entity->_components->components;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(433)
							::luxe::structural::OrderedMapIterator tmp10 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(433)
							::luxe::structural::OrderedMapIterator _g = tmp10;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(433)
							while((true)){
								HX_STACK_LINE(433)
								int tmp11 = _g->index;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(433)
								int tmp12 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(433)
								bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(433)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(433)
								if ((tmp14)){
									HX_STACK_LINE(433)
									break;
								}
								HX_STACK_LINE(433)
								::luxe::Component tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(433)
								{
									HX_STACK_LINE(433)
									int tmp16 = (_g->index)++;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(433)
									::String tmp17 = _g->map->_keys->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(433)
									::String key = tmp17;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(433)
									::haxe::ds::StringMap tmp18 = _g->map->map;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(433)
									::String tmp19 = key;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(433)
									::luxe::Component tmp20 = tmp18->get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(433)
									tmp15 = tmp20;
								}
								HX_STACK_LINE(433)
								::luxe::Component _component = tmp15;		HX_STACK_VAR(_component,"_component");
								HX_STACK_LINE(433)
								_component->init();
							}
						}
						HX_STACK_LINE(433)
						int tmp9 = entity->children->length;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(433)
						bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(433)
						if ((tmp10)){
							HX_STACK_LINE(433)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(433)
							Array< ::Dynamic > _g1 = entity->children;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(433)
							while((true)){
								HX_STACK_LINE(433)
								bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(433)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(433)
								if ((tmp12)){
									HX_STACK_LINE(433)
									break;
								}
								HX_STACK_LINE(433)
								::luxe::Entity tmp13 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(433)
								::luxe::Entity _child = tmp13;		HX_STACK_VAR(_child,"_child");
								HX_STACK_LINE(433)
								++(_g);
								HX_STACK_LINE(433)
								_child->_init();
							}
						}
						HX_STACK_LINE(433)
						entity->inited = true;
					}
				}
			}
;
		}
	}
	HX_STACK_LINE(439)
	int tmp3 = this->get_length();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(439)
	int _after_count = tmp3;		HX_STACK_VAR(_after_count,"_after_count");
	HX_STACK_LINE(441)
	bool tmp4 = (_before_count != _after_count);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(441)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,_do_init,return )

Void Scene_obj::init( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","init",0x1cecbb4a,"luxe.Scene.init","luxe/Scene.hx",447,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(449)
		bool keep_going = true;		HX_STACK_VAR(keep_going,"keep_going");
		HX_STACK_LINE(450)
		while((true)){
			HX_STACK_LINE(450)
			bool tmp = keep_going;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(450)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(450)
			if ((tmp1)){
				HX_STACK_LINE(450)
				break;
			}
			HX_STACK_LINE(451)
			bool tmp2 = this->_do_init();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(451)
			keep_going = tmp2;
		}
		HX_STACK_LINE(454)
		this->inited = true;
		HX_STACK_LINE(456)
		this->emit((int)2,null());
		HX_STACK_LINE(458)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,init,(void))

Void Scene_obj::reset( ){
{
		HX_STACK_FRAME("luxe.Scene","reset",0x5ae6fc55,"luxe.Scene.reset","luxe/Scene.hx",463,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(465)
		this->started = false;
		HX_STACK_LINE(467)
		this->emit((int)3,null());
		HX_STACK_LINE(469)
		this->started = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,reset,(void))

Void Scene_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Scene","update",0xadc308c3,"luxe.Scene.update","luxe/Scene.hx",473,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(475)
		::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(475)
		::String tmp1 = this->get_name();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(475)
		::String tmp2 = (HX_HCSTRING("scene.","\x62","\x49","\xcc","\x3e") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(475)
		tmp->debug->start(tmp2,null());
		HX_STACK_LINE(478)
		this->handle_delayed_additions();
		HX_STACK_LINE(480)
		Float tmp3 = dt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(480)
		this->emit((int)4,tmp3);
		HX_STACK_LINE(483)
		int tmp4 = this->entity_count;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(483)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(483)
		if ((tmp5)){
			HX_STACK_LINE(484)
			::haxe::ds::StringMap tmp6 = this->entities;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(484)
			Dynamic tmp7 = tmp6->iterator();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(484)
			for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp7);  __it->hasNext(); ){
				::luxe::Entity entity = __it->next();
				{
					HX_STACK_LINE(485)
					bool tmp8 = (entity != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(485)
					if ((tmp8)){
						HX_STACK_LINE(486)
						bool tmp9 = entity->destroyed;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(486)
						if ((tmp9)){
							HX_STACK_LINE(486)
							Dynamic();
						}
						else{
							HX_STACK_LINE(486)
							bool tmp10 = entity->get_active();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(486)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(486)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(486)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(486)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(486)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(486)
							if ((tmp14)){
								HX_STACK_LINE(486)
								bool tmp16 = entity->inited;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(486)
								bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(486)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(486)
								tmp15 = !(tmp18);
							}
							else{
								HX_STACK_LINE(486)
								tmp15 = true;
							}
							HX_STACK_LINE(486)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(486)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(486)
							if ((tmp16)){
								HX_STACK_LINE(486)
								bool tmp18 = entity->started;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(486)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(486)
								tmp17 = !(tmp19);
							}
							else{
								HX_STACK_LINE(486)
								tmp17 = true;
							}
							HX_STACK_LINE(486)
							if ((tmp17)){
								HX_STACK_LINE(486)
								Dynamic();
							}
							else{
								HX_STACK_LINE(486)
								{
									HX_STACK_LINE(486)
									::phoenix::Transform tmp18 = entity->get_transform();		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(486)
									::phoenix::Transform _this = tmp18;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(486)
									bool tmp19 = (_this->parent != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(486)
									if ((tmp19)){
										HX_STACK_LINE(486)
										bool tmp20 = _this->parent->dirty;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(486)
										if ((tmp20)){
											HX_STACK_LINE(486)
											::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(486)
											bool tmp21 = _this1->dirty;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(486)
											bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(486)
											if ((tmp22)){
												HX_STACK_LINE(486)
												Dynamic();
											}
											else{
												HX_STACK_LINE(486)
												_this1->_cleaning = true;
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													::phoenix::Matrix _this2 = _this1->_pos_matrix;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
														HX_STACK_LINE(486)
														e[(int)0] = (int)1;
														HX_STACK_LINE(486)
														e[(int)4] = (int)0;
														HX_STACK_LINE(486)
														e[(int)8] = (int)0;
														HX_STACK_LINE(486)
														::phoenix::Vector tmp23 = _this1->local->pos;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(486)
														Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(486)
														e[(int)12] = tmp24;
														HX_STACK_LINE(486)
														e[(int)1] = (int)0;
														HX_STACK_LINE(486)
														e[(int)5] = (int)1;
														HX_STACK_LINE(486)
														e[(int)9] = (int)0;
														HX_STACK_LINE(486)
														::phoenix::Vector tmp25 = _this1->local->pos;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(486)
														Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(486)
														e[(int)13] = tmp26;
														HX_STACK_LINE(486)
														e[(int)2] = (int)0;
														HX_STACK_LINE(486)
														e[(int)6] = (int)0;
														HX_STACK_LINE(486)
														e[(int)10] = (int)1;
														HX_STACK_LINE(486)
														::phoenix::Vector tmp27 = _this1->local->pos;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(486)
														Float tmp28 = tmp27->z;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(486)
														e[(int)14] = tmp28;
														HX_STACK_LINE(486)
														e[(int)3] = (int)0;
														HX_STACK_LINE(486)
														e[(int)7] = (int)0;
														HX_STACK_LINE(486)
														e[(int)11] = (int)0;
														HX_STACK_LINE(486)
														e[(int)15] = (int)1;
														HX_STACK_LINE(486)
														_this2;
													}
													HX_STACK_LINE(486)
													_this2;
												}
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													::phoenix::Matrix _this2 = _this1->_rotation_matrix;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(486)
													::phoenix::Quaternion tmp23 = _this1->local->rotation;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(486)
													::phoenix::Quaternion q = tmp23;		HX_STACK_VAR(q,"q");
													HX_STACK_LINE(486)
													Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(486)
													Float tmp24 = (q->x + q->x);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(486)
													Float x2 = tmp24;		HX_STACK_VAR(x2,"x2");
													HX_STACK_LINE(486)
													Float tmp25 = (q->y + q->y);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(486)
													Float y2 = tmp25;		HX_STACK_VAR(y2,"y2");
													HX_STACK_LINE(486)
													Float tmp26 = (q->z + q->z);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(486)
													Float z2 = tmp26;		HX_STACK_VAR(z2,"z2");
													HX_STACK_LINE(486)
													Float tmp27 = (q->x * x2);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(486)
													Float xx = tmp27;		HX_STACK_VAR(xx,"xx");
													HX_STACK_LINE(486)
													Float tmp28 = (q->x * y2);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(486)
													Float xy = tmp28;		HX_STACK_VAR(xy,"xy");
													HX_STACK_LINE(486)
													Float tmp29 = (q->x * z2);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(486)
													Float xz = tmp29;		HX_STACK_VAR(xz,"xz");
													HX_STACK_LINE(486)
													Float tmp30 = (q->y * y2);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(486)
													Float yy = tmp30;		HX_STACK_VAR(yy,"yy");
													HX_STACK_LINE(486)
													Float tmp31 = (q->y * z2);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(486)
													Float yz = tmp31;		HX_STACK_VAR(yz,"yz");
													HX_STACK_LINE(486)
													Float tmp32 = (q->z * z2);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(486)
													Float zz = tmp32;		HX_STACK_VAR(zz,"zz");
													HX_STACK_LINE(486)
													Float tmp33 = (q->w * x2);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(486)
													Float wx = tmp33;		HX_STACK_VAR(wx,"wx");
													HX_STACK_LINE(486)
													Float tmp34 = (q->w * y2);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(486)
													Float wy = tmp34;		HX_STACK_VAR(wy,"wy");
													HX_STACK_LINE(486)
													Float tmp35 = (q->w * z2);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(486)
													Float wz = tmp35;		HX_STACK_VAR(wz,"wz");
													HX_STACK_LINE(486)
													Float tmp36 = (yy + zz);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(486)
													Float tmp37 = ((int)1 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(486)
													te[(int)0] = tmp37;
													HX_STACK_LINE(486)
													Float tmp38 = (xy - wz);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(486)
													te[(int)4] = tmp38;
													HX_STACK_LINE(486)
													Float tmp39 = (xz + wy);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(486)
													te[(int)8] = tmp39;
													HX_STACK_LINE(486)
													Float tmp40 = (xy + wz);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(486)
													te[(int)1] = tmp40;
													HX_STACK_LINE(486)
													Float tmp41 = (xx + zz);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(486)
													Float tmp42 = ((int)1 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(486)
													te[(int)5] = tmp42;
													HX_STACK_LINE(486)
													Float tmp43 = (yz - wx);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(486)
													te[(int)9] = tmp43;
													HX_STACK_LINE(486)
													Float tmp44 = (xz - wy);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(486)
													te[(int)2] = tmp44;
													HX_STACK_LINE(486)
													Float tmp45 = (yz + wx);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(486)
													te[(int)6] = tmp45;
													HX_STACK_LINE(486)
													Float tmp46 = (xx + yy);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(486)
													Float tmp47 = ((int)1 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(486)
													te[(int)10] = tmp47;
													HX_STACK_LINE(486)
													te[(int)3] = (int)0;
													HX_STACK_LINE(486)
													te[(int)7] = (int)0;
													HX_STACK_LINE(486)
													te[(int)11] = (int)0;
													HX_STACK_LINE(486)
													te[(int)12] = (int)0;
													HX_STACK_LINE(486)
													te[(int)13] = (int)0;
													HX_STACK_LINE(486)
													te[(int)14] = (int)0;
													HX_STACK_LINE(486)
													te[(int)15] = (int)1;
													HX_STACK_LINE(486)
													_this2;
												}
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													::phoenix::Matrix _this2 = _this1->_origin_undo_matrix;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
														HX_STACK_LINE(486)
														e[(int)0] = (int)1;
														HX_STACK_LINE(486)
														e[(int)4] = (int)0;
														HX_STACK_LINE(486)
														e[(int)8] = (int)0;
														HX_STACK_LINE(486)
														Float tmp23 = _this1->origin->x;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(486)
														Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(486)
														e[(int)12] = tmp24;
														HX_STACK_LINE(486)
														e[(int)1] = (int)0;
														HX_STACK_LINE(486)
														e[(int)5] = (int)1;
														HX_STACK_LINE(486)
														e[(int)9] = (int)0;
														HX_STACK_LINE(486)
														Float tmp25 = _this1->origin->y;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(486)
														Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(486)
														e[(int)13] = tmp26;
														HX_STACK_LINE(486)
														e[(int)2] = (int)0;
														HX_STACK_LINE(486)
														e[(int)6] = (int)0;
														HX_STACK_LINE(486)
														e[(int)10] = (int)1;
														HX_STACK_LINE(486)
														Float tmp27 = _this1->origin->z;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(486)
														Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(486)
														e[(int)14] = tmp28;
														HX_STACK_LINE(486)
														e[(int)3] = (int)0;
														HX_STACK_LINE(486)
														e[(int)7] = (int)0;
														HX_STACK_LINE(486)
														e[(int)11] = (int)0;
														HX_STACK_LINE(486)
														e[(int)15] = (int)1;
														HX_STACK_LINE(486)
														_this2;
													}
													HX_STACK_LINE(486)
													_this2;
												}
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													::phoenix::Matrix tmp23 = _this1->local->matrix;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(486)
													::phoenix::Matrix _this2 = tmp23;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
														HX_STACK_LINE(486)
														e[(int)0] = (int)1;
														HX_STACK_LINE(486)
														e[(int)4] = (int)0;
														HX_STACK_LINE(486)
														e[(int)8] = (int)0;
														HX_STACK_LINE(486)
														Float tmp24 = _this1->origin->x;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(486)
														e[(int)12] = tmp24;
														HX_STACK_LINE(486)
														e[(int)1] = (int)0;
														HX_STACK_LINE(486)
														e[(int)5] = (int)1;
														HX_STACK_LINE(486)
														e[(int)9] = (int)0;
														HX_STACK_LINE(486)
														Float tmp25 = _this1->origin->y;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(486)
														e[(int)13] = tmp25;
														HX_STACK_LINE(486)
														e[(int)2] = (int)0;
														HX_STACK_LINE(486)
														e[(int)6] = (int)0;
														HX_STACK_LINE(486)
														e[(int)10] = (int)1;
														HX_STACK_LINE(486)
														Float tmp26 = _this1->origin->z;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(486)
														e[(int)14] = tmp26;
														HX_STACK_LINE(486)
														e[(int)3] = (int)0;
														HX_STACK_LINE(486)
														e[(int)7] = (int)0;
														HX_STACK_LINE(486)
														e[(int)11] = (int)0;
														HX_STACK_LINE(486)
														e[(int)15] = (int)1;
														HX_STACK_LINE(486)
														_this2;
													}
													HX_STACK_LINE(486)
													_this2;
												}
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													::phoenix::Matrix tmp23 = _this1->local->matrix;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(486)
													::phoenix::Matrix _this2 = tmp23;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
														HX_STACK_LINE(486)
														Array< Float > be = _this1->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
														HX_STACK_LINE(486)
														Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
														HX_STACK_LINE(486)
														Float tmp24 = ae->__get((int)0);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(486)
														Float a11 = tmp24;		HX_STACK_VAR(a11,"a11");
														HX_STACK_LINE(486)
														Float tmp25 = ae->__get((int)4);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(486)
														Float a12 = tmp25;		HX_STACK_VAR(a12,"a12");
														HX_STACK_LINE(486)
														Float tmp26 = ae->__get((int)8);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(486)
														Float a13 = tmp26;		HX_STACK_VAR(a13,"a13");
														HX_STACK_LINE(486)
														Float tmp27 = ae->__get((int)12);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(486)
														Float a14 = tmp27;		HX_STACK_VAR(a14,"a14");
														HX_STACK_LINE(486)
														Float tmp28 = ae->__get((int)1);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(486)
														Float a21 = tmp28;		HX_STACK_VAR(a21,"a21");
														HX_STACK_LINE(486)
														Float tmp29 = ae->__get((int)5);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(486)
														Float a22 = tmp29;		HX_STACK_VAR(a22,"a22");
														HX_STACK_LINE(486)
														Float tmp30 = ae->__get((int)9);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(486)
														Float a23 = tmp30;		HX_STACK_VAR(a23,"a23");
														HX_STACK_LINE(486)
														Float tmp31 = ae->__get((int)13);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(486)
														Float a24 = tmp31;		HX_STACK_VAR(a24,"a24");
														HX_STACK_LINE(486)
														Float tmp32 = ae->__get((int)2);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(486)
														Float a31 = tmp32;		HX_STACK_VAR(a31,"a31");
														HX_STACK_LINE(486)
														Float tmp33 = ae->__get((int)6);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(486)
														Float a32 = tmp33;		HX_STACK_VAR(a32,"a32");
														HX_STACK_LINE(486)
														Float tmp34 = ae->__get((int)10);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(486)
														Float a33 = tmp34;		HX_STACK_VAR(a33,"a33");
														HX_STACK_LINE(486)
														Float tmp35 = ae->__get((int)14);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(486)
														Float a34 = tmp35;		HX_STACK_VAR(a34,"a34");
														HX_STACK_LINE(486)
														Float tmp36 = ae->__get((int)3);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(486)
														Float a41 = tmp36;		HX_STACK_VAR(a41,"a41");
														HX_STACK_LINE(486)
														Float tmp37 = ae->__get((int)7);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(486)
														Float a42 = tmp37;		HX_STACK_VAR(a42,"a42");
														HX_STACK_LINE(486)
														Float tmp38 = ae->__get((int)11);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(486)
														Float a43 = tmp38;		HX_STACK_VAR(a43,"a43");
														HX_STACK_LINE(486)
														Float tmp39 = ae->__get((int)15);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(486)
														Float a44 = tmp39;		HX_STACK_VAR(a44,"a44");
														HX_STACK_LINE(486)
														Float tmp40 = be->__get((int)0);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(486)
														Float b11 = tmp40;		HX_STACK_VAR(b11,"b11");
														HX_STACK_LINE(486)
														Float tmp41 = be->__get((int)4);		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(486)
														Float b12 = tmp41;		HX_STACK_VAR(b12,"b12");
														HX_STACK_LINE(486)
														Float tmp42 = be->__get((int)8);		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(486)
														Float b13 = tmp42;		HX_STACK_VAR(b13,"b13");
														HX_STACK_LINE(486)
														Float tmp43 = be->__get((int)12);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(486)
														Float b14 = tmp43;		HX_STACK_VAR(b14,"b14");
														HX_STACK_LINE(486)
														Float tmp44 = be->__get((int)1);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(486)
														Float b21 = tmp44;		HX_STACK_VAR(b21,"b21");
														HX_STACK_LINE(486)
														Float tmp45 = be->__get((int)5);		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(486)
														Float b22 = tmp45;		HX_STACK_VAR(b22,"b22");
														HX_STACK_LINE(486)
														Float tmp46 = be->__get((int)9);		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(486)
														Float b23 = tmp46;		HX_STACK_VAR(b23,"b23");
														HX_STACK_LINE(486)
														Float tmp47 = be->__get((int)13);		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(486)
														Float b24 = tmp47;		HX_STACK_VAR(b24,"b24");
														HX_STACK_LINE(486)
														Float tmp48 = be->__get((int)2);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(486)
														Float b31 = tmp48;		HX_STACK_VAR(b31,"b31");
														HX_STACK_LINE(486)
														Float tmp49 = be->__get((int)6);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(486)
														Float b32 = tmp49;		HX_STACK_VAR(b32,"b32");
														HX_STACK_LINE(486)
														Float tmp50 = be->__get((int)10);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(486)
														Float b33 = tmp50;		HX_STACK_VAR(b33,"b33");
														HX_STACK_LINE(486)
														Float tmp51 = be->__get((int)14);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(486)
														Float b34 = tmp51;		HX_STACK_VAR(b34,"b34");
														HX_STACK_LINE(486)
														Float tmp52 = be->__get((int)3);		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(486)
														Float b41 = tmp52;		HX_STACK_VAR(b41,"b41");
														HX_STACK_LINE(486)
														Float tmp53 = be->__get((int)7);		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(486)
														Float b42 = tmp53;		HX_STACK_VAR(b42,"b42");
														HX_STACK_LINE(486)
														Float tmp54 = be->__get((int)11);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(486)
														Float b43 = tmp54;		HX_STACK_VAR(b43,"b43");
														HX_STACK_LINE(486)
														Float tmp55 = be->__get((int)15);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(486)
														Float b44 = tmp55;		HX_STACK_VAR(b44,"b44");
														HX_STACK_LINE(486)
														Float tmp56 = (a11 * b11);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(486)
														Float tmp57 = (a12 * b21);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(486)
														Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(486)
														Float tmp59 = (a13 * b31);		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(486)
														Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(486)
														Float tmp61 = (a14 * b41);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(486)
														Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(486)
														te[(int)0] = tmp62;
														HX_STACK_LINE(486)
														Float tmp63 = (a11 * b12);		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(486)
														Float tmp64 = (a12 * b22);		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(486)
														Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(486)
														Float tmp66 = (a13 * b32);		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(486)
														Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(486)
														Float tmp68 = (a14 * b42);		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(486)
														Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(486)
														te[(int)4] = tmp69;
														HX_STACK_LINE(486)
														Float tmp70 = (a11 * b13);		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(486)
														Float tmp71 = (a12 * b23);		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(486)
														Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(486)
														Float tmp73 = (a13 * b33);		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(486)
														Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(486)
														Float tmp75 = (a14 * b43);		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(486)
														Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(486)
														te[(int)8] = tmp76;
														HX_STACK_LINE(486)
														Float tmp77 = (a11 * b14);		HX_STACK_VAR(tmp77,"tmp77");
														HX_STACK_LINE(486)
														Float tmp78 = (a12 * b24);		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(486)
														Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(486)
														Float tmp80 = (a13 * b34);		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(486)
														Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(486)
														Float tmp82 = (a14 * b44);		HX_STACK_VAR(tmp82,"tmp82");
														HX_STACK_LINE(486)
														Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
														HX_STACK_LINE(486)
														te[(int)12] = tmp83;
														HX_STACK_LINE(486)
														Float tmp84 = (a21 * b11);		HX_STACK_VAR(tmp84,"tmp84");
														HX_STACK_LINE(486)
														Float tmp85 = (a22 * b21);		HX_STACK_VAR(tmp85,"tmp85");
														HX_STACK_LINE(486)
														Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
														HX_STACK_LINE(486)
														Float tmp87 = (a23 * b31);		HX_STACK_VAR(tmp87,"tmp87");
														HX_STACK_LINE(486)
														Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
														HX_STACK_LINE(486)
														Float tmp89 = (a24 * b41);		HX_STACK_VAR(tmp89,"tmp89");
														HX_STACK_LINE(486)
														Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
														HX_STACK_LINE(486)
														te[(int)1] = tmp90;
														HX_STACK_LINE(486)
														Float tmp91 = (a21 * b12);		HX_STACK_VAR(tmp91,"tmp91");
														HX_STACK_LINE(486)
														Float tmp92 = (a22 * b22);		HX_STACK_VAR(tmp92,"tmp92");
														HX_STACK_LINE(486)
														Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
														HX_STACK_LINE(486)
														Float tmp94 = (a23 * b32);		HX_STACK_VAR(tmp94,"tmp94");
														HX_STACK_LINE(486)
														Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
														HX_STACK_LINE(486)
														Float tmp96 = (a24 * b42);		HX_STACK_VAR(tmp96,"tmp96");
														HX_STACK_LINE(486)
														Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
														HX_STACK_LINE(486)
														te[(int)5] = tmp97;
														HX_STACK_LINE(486)
														Float tmp98 = (a21 * b13);		HX_STACK_VAR(tmp98,"tmp98");
														HX_STACK_LINE(486)
														Float tmp99 = (a22 * b23);		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(486)
														Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(486)
														Float tmp101 = (a23 * b33);		HX_STACK_VAR(tmp101,"tmp101");
														HX_STACK_LINE(486)
														Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
														HX_STACK_LINE(486)
														Float tmp103 = (a24 * b43);		HX_STACK_VAR(tmp103,"tmp103");
														HX_STACK_LINE(486)
														Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
														HX_STACK_LINE(486)
														te[(int)9] = tmp104;
														HX_STACK_LINE(486)
														Float tmp105 = (a21 * b14);		HX_STACK_VAR(tmp105,"tmp105");
														HX_STACK_LINE(486)
														Float tmp106 = (a22 * b24);		HX_STACK_VAR(tmp106,"tmp106");
														HX_STACK_LINE(486)
														Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
														HX_STACK_LINE(486)
														Float tmp108 = (a23 * b34);		HX_STACK_VAR(tmp108,"tmp108");
														HX_STACK_LINE(486)
														Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
														HX_STACK_LINE(486)
														Float tmp110 = (a24 * b44);		HX_STACK_VAR(tmp110,"tmp110");
														HX_STACK_LINE(486)
														Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
														HX_STACK_LINE(486)
														te[(int)13] = tmp111;
														HX_STACK_LINE(486)
														Float tmp112 = (a31 * b11);		HX_STACK_VAR(tmp112,"tmp112");
														HX_STACK_LINE(486)
														Float tmp113 = (a32 * b21);		HX_STACK_VAR(tmp113,"tmp113");
														HX_STACK_LINE(486)
														Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
														HX_STACK_LINE(486)
														Float tmp115 = (a33 * b31);		HX_STACK_VAR(tmp115,"tmp115");
														HX_STACK_LINE(486)
														Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
														HX_STACK_LINE(486)
														Float tmp117 = (a34 * b41);		HX_STACK_VAR(tmp117,"tmp117");
														HX_STACK_LINE(486)
														Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
														HX_STACK_LINE(486)
														te[(int)2] = tmp118;
														HX_STACK_LINE(486)
														Float tmp119 = (a31 * b12);		HX_STACK_VAR(tmp119,"tmp119");
														HX_STACK_LINE(486)
														Float tmp120 = (a32 * b22);		HX_STACK_VAR(tmp120,"tmp120");
														HX_STACK_LINE(486)
														Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
														HX_STACK_LINE(486)
														Float tmp122 = (a33 * b32);		HX_STACK_VAR(tmp122,"tmp122");
														HX_STACK_LINE(486)
														Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
														HX_STACK_LINE(486)
														Float tmp124 = (a34 * b42);		HX_STACK_VAR(tmp124,"tmp124");
														HX_STACK_LINE(486)
														Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
														HX_STACK_LINE(486)
														te[(int)6] = tmp125;
														HX_STACK_LINE(486)
														Float tmp126 = (a31 * b13);		HX_STACK_VAR(tmp126,"tmp126");
														HX_STACK_LINE(486)
														Float tmp127 = (a32 * b23);		HX_STACK_VAR(tmp127,"tmp127");
														HX_STACK_LINE(486)
														Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
														HX_STACK_LINE(486)
														Float tmp129 = (a33 * b33);		HX_STACK_VAR(tmp129,"tmp129");
														HX_STACK_LINE(486)
														Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
														HX_STACK_LINE(486)
														Float tmp131 = (a34 * b43);		HX_STACK_VAR(tmp131,"tmp131");
														HX_STACK_LINE(486)
														Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
														HX_STACK_LINE(486)
														te[(int)10] = tmp132;
														HX_STACK_LINE(486)
														Float tmp133 = (a31 * b14);		HX_STACK_VAR(tmp133,"tmp133");
														HX_STACK_LINE(486)
														Float tmp134 = (a32 * b24);		HX_STACK_VAR(tmp134,"tmp134");
														HX_STACK_LINE(486)
														Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
														HX_STACK_LINE(486)
														Float tmp136 = (a33 * b34);		HX_STACK_VAR(tmp136,"tmp136");
														HX_STACK_LINE(486)
														Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
														HX_STACK_LINE(486)
														Float tmp138 = (a34 * b44);		HX_STACK_VAR(tmp138,"tmp138");
														HX_STACK_LINE(486)
														Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
														HX_STACK_LINE(486)
														te[(int)14] = tmp139;
														HX_STACK_LINE(486)
														Float tmp140 = (a41 * b11);		HX_STACK_VAR(tmp140,"tmp140");
														HX_STACK_LINE(486)
														Float tmp141 = (a42 * b21);		HX_STACK_VAR(tmp141,"tmp141");
														HX_STACK_LINE(486)
														Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
														HX_STACK_LINE(486)
														Float tmp143 = (a43 * b31);		HX_STACK_VAR(tmp143,"tmp143");
														HX_STACK_LINE(486)
														Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
														HX_STACK_LINE(486)
														Float tmp145 = (a44 * b41);		HX_STACK_VAR(tmp145,"tmp145");
														HX_STACK_LINE(486)
														Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
														HX_STACK_LINE(486)
														te[(int)3] = tmp146;
														HX_STACK_LINE(486)
														Float tmp147 = (a41 * b12);		HX_STACK_VAR(tmp147,"tmp147");
														HX_STACK_LINE(486)
														Float tmp148 = (a42 * b22);		HX_STACK_VAR(tmp148,"tmp148");
														HX_STACK_LINE(486)
														Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
														HX_STACK_LINE(486)
														Float tmp150 = (a43 * b32);		HX_STACK_VAR(tmp150,"tmp150");
														HX_STACK_LINE(486)
														Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
														HX_STACK_LINE(486)
														Float tmp152 = (a44 * b42);		HX_STACK_VAR(tmp152,"tmp152");
														HX_STACK_LINE(486)
														Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
														HX_STACK_LINE(486)
														te[(int)7] = tmp153;
														HX_STACK_LINE(486)
														Float tmp154 = (a41 * b13);		HX_STACK_VAR(tmp154,"tmp154");
														HX_STACK_LINE(486)
														Float tmp155 = (a42 * b23);		HX_STACK_VAR(tmp155,"tmp155");
														HX_STACK_LINE(486)
														Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
														HX_STACK_LINE(486)
														Float tmp157 = (a43 * b33);		HX_STACK_VAR(tmp157,"tmp157");
														HX_STACK_LINE(486)
														Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
														HX_STACK_LINE(486)
														Float tmp159 = (a44 * b43);		HX_STACK_VAR(tmp159,"tmp159");
														HX_STACK_LINE(486)
														Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
														HX_STACK_LINE(486)
														te[(int)11] = tmp160;
														HX_STACK_LINE(486)
														Float tmp161 = (a41 * b14);		HX_STACK_VAR(tmp161,"tmp161");
														HX_STACK_LINE(486)
														Float tmp162 = (a42 * b24);		HX_STACK_VAR(tmp162,"tmp162");
														HX_STACK_LINE(486)
														Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
														HX_STACK_LINE(486)
														Float tmp164 = (a43 * b34);		HX_STACK_VAR(tmp164,"tmp164");
														HX_STACK_LINE(486)
														Float tmp165 = (tmp163 + tmp164);		HX_STACK_VAR(tmp165,"tmp165");
														HX_STACK_LINE(486)
														Float tmp166 = (a44 * b44);		HX_STACK_VAR(tmp166,"tmp166");
														HX_STACK_LINE(486)
														Float tmp167 = (tmp165 + tmp166);		HX_STACK_VAR(tmp167,"tmp167");
														HX_STACK_LINE(486)
														te[(int)15] = tmp167;
														HX_STACK_LINE(486)
														_this2;
													}
												}
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													::phoenix::Matrix tmp23 = _this1->local->matrix;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(486)
													::phoenix::Matrix _this2 = tmp23;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(486)
													::phoenix::Vector tmp24 = _this1->local->scale;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(486)
													::phoenix::Vector _v = tmp24;		HX_STACK_VAR(_v,"_v");
													HX_STACK_LINE(486)
													Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(486)
													Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
													HX_STACK_LINE(486)
													Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
													HX_STACK_LINE(486)
													Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
													HX_STACK_LINE(486)
													Float tmp25 = _x;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(486)
													hx::MultEq(te[(int)0],tmp25);
													HX_STACK_LINE(486)
													Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(486)
													hx::MultEq(te[(int)4],tmp26);
													HX_STACK_LINE(486)
													Float tmp27 = _z;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(486)
													hx::MultEq(te[(int)8],tmp27);
													HX_STACK_LINE(486)
													Float tmp28 = _x;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(486)
													hx::MultEq(te[(int)1],tmp28);
													HX_STACK_LINE(486)
													Float tmp29 = _y;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(486)
													hx::MultEq(te[(int)5],tmp29);
													HX_STACK_LINE(486)
													Float tmp30 = _z;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(486)
													hx::MultEq(te[(int)9],tmp30);
													HX_STACK_LINE(486)
													Float tmp31 = _x;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(486)
													hx::MultEq(te[(int)2],tmp31);
													HX_STACK_LINE(486)
													Float tmp32 = _y;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(486)
													hx::MultEq(te[(int)6],tmp32);
													HX_STACK_LINE(486)
													Float tmp33 = _z;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(486)
													hx::MultEq(te[(int)10],tmp33);
													HX_STACK_LINE(486)
													Float tmp34 = _x;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(486)
													hx::MultEq(te[(int)3],tmp34);
													HX_STACK_LINE(486)
													Float tmp35 = _y;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(486)
													hx::MultEq(te[(int)7],tmp35);
													HX_STACK_LINE(486)
													Float tmp36 = _z;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(486)
													hx::MultEq(te[(int)11],tmp36);
													HX_STACK_LINE(486)
													_this2;
												}
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													::phoenix::Matrix tmp23 = _this1->local->matrix;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(486)
													::phoenix::Matrix _this2 = tmp23;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(486)
													::phoenix::Vector tmp24 = _this1->local->pos;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(486)
													::phoenix::Vector _v = tmp24;		HX_STACK_VAR(_v,"_v");
													HX_STACK_LINE(486)
													Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(486)
													Float tmp25 = _v->x;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(486)
													te[(int)12] = tmp25;
													HX_STACK_LINE(486)
													Float tmp26 = _v->y;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(486)
													te[(int)13] = tmp26;
													HX_STACK_LINE(486)
													Float tmp27 = _v->z;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(486)
													te[(int)14] = tmp27;
													HX_STACK_LINE(486)
													_this2;
												}
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													::phoenix::Matrix tmp23 = _this1->local->matrix;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(486)
													::phoenix::Matrix _this2 = tmp23;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
														HX_STACK_LINE(486)
														Array< Float > be = _this1->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
														HX_STACK_LINE(486)
														Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
														HX_STACK_LINE(486)
														Float tmp24 = ae->__get((int)0);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(486)
														Float a11 = tmp24;		HX_STACK_VAR(a11,"a11");
														HX_STACK_LINE(486)
														Float tmp25 = ae->__get((int)4);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(486)
														Float a12 = tmp25;		HX_STACK_VAR(a12,"a12");
														HX_STACK_LINE(486)
														Float tmp26 = ae->__get((int)8);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(486)
														Float a13 = tmp26;		HX_STACK_VAR(a13,"a13");
														HX_STACK_LINE(486)
														Float tmp27 = ae->__get((int)12);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(486)
														Float a14 = tmp27;		HX_STACK_VAR(a14,"a14");
														HX_STACK_LINE(486)
														Float tmp28 = ae->__get((int)1);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(486)
														Float a21 = tmp28;		HX_STACK_VAR(a21,"a21");
														HX_STACK_LINE(486)
														Float tmp29 = ae->__get((int)5);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(486)
														Float a22 = tmp29;		HX_STACK_VAR(a22,"a22");
														HX_STACK_LINE(486)
														Float tmp30 = ae->__get((int)9);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(486)
														Float a23 = tmp30;		HX_STACK_VAR(a23,"a23");
														HX_STACK_LINE(486)
														Float tmp31 = ae->__get((int)13);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(486)
														Float a24 = tmp31;		HX_STACK_VAR(a24,"a24");
														HX_STACK_LINE(486)
														Float tmp32 = ae->__get((int)2);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(486)
														Float a31 = tmp32;		HX_STACK_VAR(a31,"a31");
														HX_STACK_LINE(486)
														Float tmp33 = ae->__get((int)6);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(486)
														Float a32 = tmp33;		HX_STACK_VAR(a32,"a32");
														HX_STACK_LINE(486)
														Float tmp34 = ae->__get((int)10);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(486)
														Float a33 = tmp34;		HX_STACK_VAR(a33,"a33");
														HX_STACK_LINE(486)
														Float tmp35 = ae->__get((int)14);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(486)
														Float a34 = tmp35;		HX_STACK_VAR(a34,"a34");
														HX_STACK_LINE(486)
														Float tmp36 = ae->__get((int)3);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(486)
														Float a41 = tmp36;		HX_STACK_VAR(a41,"a41");
														HX_STACK_LINE(486)
														Float tmp37 = ae->__get((int)7);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(486)
														Float a42 = tmp37;		HX_STACK_VAR(a42,"a42");
														HX_STACK_LINE(486)
														Float tmp38 = ae->__get((int)11);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(486)
														Float a43 = tmp38;		HX_STACK_VAR(a43,"a43");
														HX_STACK_LINE(486)
														Float tmp39 = ae->__get((int)15);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(486)
														Float a44 = tmp39;		HX_STACK_VAR(a44,"a44");
														HX_STACK_LINE(486)
														Float tmp40 = be->__get((int)0);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(486)
														Float b11 = tmp40;		HX_STACK_VAR(b11,"b11");
														HX_STACK_LINE(486)
														Float tmp41 = be->__get((int)4);		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(486)
														Float b12 = tmp41;		HX_STACK_VAR(b12,"b12");
														HX_STACK_LINE(486)
														Float tmp42 = be->__get((int)8);		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(486)
														Float b13 = tmp42;		HX_STACK_VAR(b13,"b13");
														HX_STACK_LINE(486)
														Float tmp43 = be->__get((int)12);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(486)
														Float b14 = tmp43;		HX_STACK_VAR(b14,"b14");
														HX_STACK_LINE(486)
														Float tmp44 = be->__get((int)1);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(486)
														Float b21 = tmp44;		HX_STACK_VAR(b21,"b21");
														HX_STACK_LINE(486)
														Float tmp45 = be->__get((int)5);		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(486)
														Float b22 = tmp45;		HX_STACK_VAR(b22,"b22");
														HX_STACK_LINE(486)
														Float tmp46 = be->__get((int)9);		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(486)
														Float b23 = tmp46;		HX_STACK_VAR(b23,"b23");
														HX_STACK_LINE(486)
														Float tmp47 = be->__get((int)13);		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(486)
														Float b24 = tmp47;		HX_STACK_VAR(b24,"b24");
														HX_STACK_LINE(486)
														Float tmp48 = be->__get((int)2);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(486)
														Float b31 = tmp48;		HX_STACK_VAR(b31,"b31");
														HX_STACK_LINE(486)
														Float tmp49 = be->__get((int)6);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(486)
														Float b32 = tmp49;		HX_STACK_VAR(b32,"b32");
														HX_STACK_LINE(486)
														Float tmp50 = be->__get((int)10);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(486)
														Float b33 = tmp50;		HX_STACK_VAR(b33,"b33");
														HX_STACK_LINE(486)
														Float tmp51 = be->__get((int)14);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(486)
														Float b34 = tmp51;		HX_STACK_VAR(b34,"b34");
														HX_STACK_LINE(486)
														Float tmp52 = be->__get((int)3);		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(486)
														Float b41 = tmp52;		HX_STACK_VAR(b41,"b41");
														HX_STACK_LINE(486)
														Float tmp53 = be->__get((int)7);		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(486)
														Float b42 = tmp53;		HX_STACK_VAR(b42,"b42");
														HX_STACK_LINE(486)
														Float tmp54 = be->__get((int)11);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(486)
														Float b43 = tmp54;		HX_STACK_VAR(b43,"b43");
														HX_STACK_LINE(486)
														Float tmp55 = be->__get((int)15);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(486)
														Float b44 = tmp55;		HX_STACK_VAR(b44,"b44");
														HX_STACK_LINE(486)
														Float tmp56 = (a11 * b11);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(486)
														Float tmp57 = (a12 * b21);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(486)
														Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(486)
														Float tmp59 = (a13 * b31);		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(486)
														Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(486)
														Float tmp61 = (a14 * b41);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(486)
														Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(486)
														te[(int)0] = tmp62;
														HX_STACK_LINE(486)
														Float tmp63 = (a11 * b12);		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(486)
														Float tmp64 = (a12 * b22);		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(486)
														Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(486)
														Float tmp66 = (a13 * b32);		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(486)
														Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(486)
														Float tmp68 = (a14 * b42);		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(486)
														Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(486)
														te[(int)4] = tmp69;
														HX_STACK_LINE(486)
														Float tmp70 = (a11 * b13);		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(486)
														Float tmp71 = (a12 * b23);		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(486)
														Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(486)
														Float tmp73 = (a13 * b33);		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(486)
														Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(486)
														Float tmp75 = (a14 * b43);		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(486)
														Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(486)
														te[(int)8] = tmp76;
														HX_STACK_LINE(486)
														Float tmp77 = (a11 * b14);		HX_STACK_VAR(tmp77,"tmp77");
														HX_STACK_LINE(486)
														Float tmp78 = (a12 * b24);		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(486)
														Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(486)
														Float tmp80 = (a13 * b34);		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(486)
														Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(486)
														Float tmp82 = (a14 * b44);		HX_STACK_VAR(tmp82,"tmp82");
														HX_STACK_LINE(486)
														Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
														HX_STACK_LINE(486)
														te[(int)12] = tmp83;
														HX_STACK_LINE(486)
														Float tmp84 = (a21 * b11);		HX_STACK_VAR(tmp84,"tmp84");
														HX_STACK_LINE(486)
														Float tmp85 = (a22 * b21);		HX_STACK_VAR(tmp85,"tmp85");
														HX_STACK_LINE(486)
														Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
														HX_STACK_LINE(486)
														Float tmp87 = (a23 * b31);		HX_STACK_VAR(tmp87,"tmp87");
														HX_STACK_LINE(486)
														Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
														HX_STACK_LINE(486)
														Float tmp89 = (a24 * b41);		HX_STACK_VAR(tmp89,"tmp89");
														HX_STACK_LINE(486)
														Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
														HX_STACK_LINE(486)
														te[(int)1] = tmp90;
														HX_STACK_LINE(486)
														Float tmp91 = (a21 * b12);		HX_STACK_VAR(tmp91,"tmp91");
														HX_STACK_LINE(486)
														Float tmp92 = (a22 * b22);		HX_STACK_VAR(tmp92,"tmp92");
														HX_STACK_LINE(486)
														Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
														HX_STACK_LINE(486)
														Float tmp94 = (a23 * b32);		HX_STACK_VAR(tmp94,"tmp94");
														HX_STACK_LINE(486)
														Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
														HX_STACK_LINE(486)
														Float tmp96 = (a24 * b42);		HX_STACK_VAR(tmp96,"tmp96");
														HX_STACK_LINE(486)
														Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
														HX_STACK_LINE(486)
														te[(int)5] = tmp97;
														HX_STACK_LINE(486)
														Float tmp98 = (a21 * b13);		HX_STACK_VAR(tmp98,"tmp98");
														HX_STACK_LINE(486)
														Float tmp99 = (a22 * b23);		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(486)
														Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(486)
														Float tmp101 = (a23 * b33);		HX_STACK_VAR(tmp101,"tmp101");
														HX_STACK_LINE(486)
														Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
														HX_STACK_LINE(486)
														Float tmp103 = (a24 * b43);		HX_STACK_VAR(tmp103,"tmp103");
														HX_STACK_LINE(486)
														Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
														HX_STACK_LINE(486)
														te[(int)9] = tmp104;
														HX_STACK_LINE(486)
														Float tmp105 = (a21 * b14);		HX_STACK_VAR(tmp105,"tmp105");
														HX_STACK_LINE(486)
														Float tmp106 = (a22 * b24);		HX_STACK_VAR(tmp106,"tmp106");
														HX_STACK_LINE(486)
														Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
														HX_STACK_LINE(486)
														Float tmp108 = (a23 * b34);		HX_STACK_VAR(tmp108,"tmp108");
														HX_STACK_LINE(486)
														Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
														HX_STACK_LINE(486)
														Float tmp110 = (a24 * b44);		HX_STACK_VAR(tmp110,"tmp110");
														HX_STACK_LINE(486)
														Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
														HX_STACK_LINE(486)
														te[(int)13] = tmp111;
														HX_STACK_LINE(486)
														Float tmp112 = (a31 * b11);		HX_STACK_VAR(tmp112,"tmp112");
														HX_STACK_LINE(486)
														Float tmp113 = (a32 * b21);		HX_STACK_VAR(tmp113,"tmp113");
														HX_STACK_LINE(486)
														Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
														HX_STACK_LINE(486)
														Float tmp115 = (a33 * b31);		HX_STACK_VAR(tmp115,"tmp115");
														HX_STACK_LINE(486)
														Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
														HX_STACK_LINE(486)
														Float tmp117 = (a34 * b41);		HX_STACK_VAR(tmp117,"tmp117");
														HX_STACK_LINE(486)
														Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
														HX_STACK_LINE(486)
														te[(int)2] = tmp118;
														HX_STACK_LINE(486)
														Float tmp119 = (a31 * b12);		HX_STACK_VAR(tmp119,"tmp119");
														HX_STACK_LINE(486)
														Float tmp120 = (a32 * b22);		HX_STACK_VAR(tmp120,"tmp120");
														HX_STACK_LINE(486)
														Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
														HX_STACK_LINE(486)
														Float tmp122 = (a33 * b32);		HX_STACK_VAR(tmp122,"tmp122");
														HX_STACK_LINE(486)
														Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
														HX_STACK_LINE(486)
														Float tmp124 = (a34 * b42);		HX_STACK_VAR(tmp124,"tmp124");
														HX_STACK_LINE(486)
														Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
														HX_STACK_LINE(486)
														te[(int)6] = tmp125;
														HX_STACK_LINE(486)
														Float tmp126 = (a31 * b13);		HX_STACK_VAR(tmp126,"tmp126");
														HX_STACK_LINE(486)
														Float tmp127 = (a32 * b23);		HX_STACK_VAR(tmp127,"tmp127");
														HX_STACK_LINE(486)
														Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
														HX_STACK_LINE(486)
														Float tmp129 = (a33 * b33);		HX_STACK_VAR(tmp129,"tmp129");
														HX_STACK_LINE(486)
														Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
														HX_STACK_LINE(486)
														Float tmp131 = (a34 * b43);		HX_STACK_VAR(tmp131,"tmp131");
														HX_STACK_LINE(486)
														Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
														HX_STACK_LINE(486)
														te[(int)10] = tmp132;
														HX_STACK_LINE(486)
														Float tmp133 = (a31 * b14);		HX_STACK_VAR(tmp133,"tmp133");
														HX_STACK_LINE(486)
														Float tmp134 = (a32 * b24);		HX_STACK_VAR(tmp134,"tmp134");
														HX_STACK_LINE(486)
														Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
														HX_STACK_LINE(486)
														Float tmp136 = (a33 * b34);		HX_STACK_VAR(tmp136,"tmp136");
														HX_STACK_LINE(486)
														Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
														HX_STACK_LINE(486)
														Float tmp138 = (a34 * b44);		HX_STACK_VAR(tmp138,"tmp138");
														HX_STACK_LINE(486)
														Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
														HX_STACK_LINE(486)
														te[(int)14] = tmp139;
														HX_STACK_LINE(486)
														Float tmp140 = (a41 * b11);		HX_STACK_VAR(tmp140,"tmp140");
														HX_STACK_LINE(486)
														Float tmp141 = (a42 * b21);		HX_STACK_VAR(tmp141,"tmp141");
														HX_STACK_LINE(486)
														Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
														HX_STACK_LINE(486)
														Float tmp143 = (a43 * b31);		HX_STACK_VAR(tmp143,"tmp143");
														HX_STACK_LINE(486)
														Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
														HX_STACK_LINE(486)
														Float tmp145 = (a44 * b41);		HX_STACK_VAR(tmp145,"tmp145");
														HX_STACK_LINE(486)
														Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
														HX_STACK_LINE(486)
														te[(int)3] = tmp146;
														HX_STACK_LINE(486)
														Float tmp147 = (a41 * b12);		HX_STACK_VAR(tmp147,"tmp147");
														HX_STACK_LINE(486)
														Float tmp148 = (a42 * b22);		HX_STACK_VAR(tmp148,"tmp148");
														HX_STACK_LINE(486)
														Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
														HX_STACK_LINE(486)
														Float tmp150 = (a43 * b32);		HX_STACK_VAR(tmp150,"tmp150");
														HX_STACK_LINE(486)
														Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
														HX_STACK_LINE(486)
														Float tmp152 = (a44 * b42);		HX_STACK_VAR(tmp152,"tmp152");
														HX_STACK_LINE(486)
														Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
														HX_STACK_LINE(486)
														te[(int)7] = tmp153;
														HX_STACK_LINE(486)
														Float tmp154 = (a41 * b13);		HX_STACK_VAR(tmp154,"tmp154");
														HX_STACK_LINE(486)
														Float tmp155 = (a42 * b23);		HX_STACK_VAR(tmp155,"tmp155");
														HX_STACK_LINE(486)
														Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
														HX_STACK_LINE(486)
														Float tmp157 = (a43 * b33);		HX_STACK_VAR(tmp157,"tmp157");
														HX_STACK_LINE(486)
														Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
														HX_STACK_LINE(486)
														Float tmp159 = (a44 * b43);		HX_STACK_VAR(tmp159,"tmp159");
														HX_STACK_LINE(486)
														Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
														HX_STACK_LINE(486)
														te[(int)11] = tmp160;
														HX_STACK_LINE(486)
														Float tmp161 = (a41 * b14);		HX_STACK_VAR(tmp161,"tmp161");
														HX_STACK_LINE(486)
														Float tmp162 = (a42 * b24);		HX_STACK_VAR(tmp162,"tmp162");
														HX_STACK_LINE(486)
														Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
														HX_STACK_LINE(486)
														Float tmp164 = (a43 * b34);		HX_STACK_VAR(tmp164,"tmp164");
														HX_STACK_LINE(486)
														Float tmp165 = (tmp163 + tmp164);		HX_STACK_VAR(tmp165,"tmp165");
														HX_STACK_LINE(486)
														Float tmp166 = (a44 * b44);		HX_STACK_VAR(tmp166,"tmp166");
														HX_STACK_LINE(486)
														Float tmp167 = (tmp165 + tmp166);		HX_STACK_VAR(tmp167,"tmp167");
														HX_STACK_LINE(486)
														te[(int)15] = tmp167;
														HX_STACK_LINE(486)
														_this2;
													}
												}
												HX_STACK_LINE(486)
												bool tmp23 = (_this1->parent != null());		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(486)
												if ((tmp23)){
													HX_STACK_LINE(486)
													::phoenix::Spatial tmp24 = _this1->get_world();		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(486)
													::phoenix::Spatial _this2 = tmp24;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(486)
													::phoenix::Matrix tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														::phoenix::Matrix tmp26;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(486)
														{
															HX_STACK_LINE(486)
															::phoenix::Spatial tmp27 = _this1->get_world();		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(486)
															::phoenix::Spatial _this3 = tmp27;		HX_STACK_VAR(_this3,"_this3");
															HX_STACK_LINE(486)
															tmp26 = _this3->matrix;
														}
														HX_STACK_LINE(486)
														::phoenix::Matrix _this3 = tmp26;		HX_STACK_VAR(_this3,"_this3");
														HX_STACK_LINE(486)
														::phoenix::Matrix tmp27;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(486)
														{
															HX_STACK_LINE(486)
															::phoenix::Spatial tmp28 = _this1->parent->get_world();		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(486)
															::phoenix::Spatial _this4 = tmp28;		HX_STACK_VAR(_this4,"_this4");
															HX_STACK_LINE(486)
															tmp27 = _this4->matrix;
														}
														HX_STACK_LINE(486)
														::phoenix::Matrix _a = tmp27;		HX_STACK_VAR(_a,"_a");
														HX_STACK_LINE(486)
														Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
														HX_STACK_LINE(486)
														::phoenix::Matrix tmp28 = _this1->local->matrix;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(486)
														Array< Float > be = tmp28->elements;		HX_STACK_VAR(be,"be");
														HX_STACK_LINE(486)
														Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
														HX_STACK_LINE(486)
														Float tmp29 = ae->__get((int)0);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(486)
														Float a11 = tmp29;		HX_STACK_VAR(a11,"a11");
														HX_STACK_LINE(486)
														Float tmp30 = ae->__get((int)4);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(486)
														Float a12 = tmp30;		HX_STACK_VAR(a12,"a12");
														HX_STACK_LINE(486)
														Float tmp31 = ae->__get((int)8);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(486)
														Float a13 = tmp31;		HX_STACK_VAR(a13,"a13");
														HX_STACK_LINE(486)
														Float tmp32 = ae->__get((int)12);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(486)
														Float a14 = tmp32;		HX_STACK_VAR(a14,"a14");
														HX_STACK_LINE(486)
														Float tmp33 = ae->__get((int)1);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(486)
														Float a21 = tmp33;		HX_STACK_VAR(a21,"a21");
														HX_STACK_LINE(486)
														Float tmp34 = ae->__get((int)5);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(486)
														Float a22 = tmp34;		HX_STACK_VAR(a22,"a22");
														HX_STACK_LINE(486)
														Float tmp35 = ae->__get((int)9);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(486)
														Float a23 = tmp35;		HX_STACK_VAR(a23,"a23");
														HX_STACK_LINE(486)
														Float tmp36 = ae->__get((int)13);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(486)
														Float a24 = tmp36;		HX_STACK_VAR(a24,"a24");
														HX_STACK_LINE(486)
														Float tmp37 = ae->__get((int)2);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(486)
														Float a31 = tmp37;		HX_STACK_VAR(a31,"a31");
														HX_STACK_LINE(486)
														Float tmp38 = ae->__get((int)6);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(486)
														Float a32 = tmp38;		HX_STACK_VAR(a32,"a32");
														HX_STACK_LINE(486)
														Float tmp39 = ae->__get((int)10);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(486)
														Float a33 = tmp39;		HX_STACK_VAR(a33,"a33");
														HX_STACK_LINE(486)
														Float tmp40 = ae->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(486)
														Float a34 = tmp40;		HX_STACK_VAR(a34,"a34");
														HX_STACK_LINE(486)
														Float tmp41 = ae->__get((int)3);		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(486)
														Float a41 = tmp41;		HX_STACK_VAR(a41,"a41");
														HX_STACK_LINE(486)
														Float tmp42 = ae->__get((int)7);		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(486)
														Float a42 = tmp42;		HX_STACK_VAR(a42,"a42");
														HX_STACK_LINE(486)
														Float tmp43 = ae->__get((int)11);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(486)
														Float a43 = tmp43;		HX_STACK_VAR(a43,"a43");
														HX_STACK_LINE(486)
														Float tmp44 = ae->__get((int)15);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(486)
														Float a44 = tmp44;		HX_STACK_VAR(a44,"a44");
														HX_STACK_LINE(486)
														Float tmp45 = be->__get((int)0);		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(486)
														Float b11 = tmp45;		HX_STACK_VAR(b11,"b11");
														HX_STACK_LINE(486)
														Float tmp46 = be->__get((int)4);		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(486)
														Float b12 = tmp46;		HX_STACK_VAR(b12,"b12");
														HX_STACK_LINE(486)
														Float tmp47 = be->__get((int)8);		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(486)
														Float b13 = tmp47;		HX_STACK_VAR(b13,"b13");
														HX_STACK_LINE(486)
														Float tmp48 = be->__get((int)12);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(486)
														Float b14 = tmp48;		HX_STACK_VAR(b14,"b14");
														HX_STACK_LINE(486)
														Float tmp49 = be->__get((int)1);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(486)
														Float b21 = tmp49;		HX_STACK_VAR(b21,"b21");
														HX_STACK_LINE(486)
														Float tmp50 = be->__get((int)5);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(486)
														Float b22 = tmp50;		HX_STACK_VAR(b22,"b22");
														HX_STACK_LINE(486)
														Float tmp51 = be->__get((int)9);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(486)
														Float b23 = tmp51;		HX_STACK_VAR(b23,"b23");
														HX_STACK_LINE(486)
														Float tmp52 = be->__get((int)13);		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(486)
														Float b24 = tmp52;		HX_STACK_VAR(b24,"b24");
														HX_STACK_LINE(486)
														Float tmp53 = be->__get((int)2);		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(486)
														Float b31 = tmp53;		HX_STACK_VAR(b31,"b31");
														HX_STACK_LINE(486)
														Float tmp54 = be->__get((int)6);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(486)
														Float b32 = tmp54;		HX_STACK_VAR(b32,"b32");
														HX_STACK_LINE(486)
														Float tmp55 = be->__get((int)10);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(486)
														Float b33 = tmp55;		HX_STACK_VAR(b33,"b33");
														HX_STACK_LINE(486)
														Float tmp56 = be->__get((int)14);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(486)
														Float b34 = tmp56;		HX_STACK_VAR(b34,"b34");
														HX_STACK_LINE(486)
														Float tmp57 = be->__get((int)3);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(486)
														Float b41 = tmp57;		HX_STACK_VAR(b41,"b41");
														HX_STACK_LINE(486)
														Float tmp58 = be->__get((int)7);		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(486)
														Float b42 = tmp58;		HX_STACK_VAR(b42,"b42");
														HX_STACK_LINE(486)
														Float tmp59 = be->__get((int)11);		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(486)
														Float b43 = tmp59;		HX_STACK_VAR(b43,"b43");
														HX_STACK_LINE(486)
														Float tmp60 = be->__get((int)15);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(486)
														Float b44 = tmp60;		HX_STACK_VAR(b44,"b44");
														HX_STACK_LINE(486)
														Float tmp61 = (a11 * b11);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(486)
														Float tmp62 = (a12 * b21);		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(486)
														Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(486)
														Float tmp64 = (a13 * b31);		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(486)
														Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(486)
														Float tmp66 = (a14 * b41);		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(486)
														Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(486)
														te[(int)0] = tmp67;
														HX_STACK_LINE(486)
														Float tmp68 = (a11 * b12);		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(486)
														Float tmp69 = (a12 * b22);		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(486)
														Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(486)
														Float tmp71 = (a13 * b32);		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(486)
														Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(486)
														Float tmp73 = (a14 * b42);		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(486)
														Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(486)
														te[(int)4] = tmp74;
														HX_STACK_LINE(486)
														Float tmp75 = (a11 * b13);		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(486)
														Float tmp76 = (a12 * b23);		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(486)
														Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
														HX_STACK_LINE(486)
														Float tmp78 = (a13 * b33);		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(486)
														Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(486)
														Float tmp80 = (a14 * b43);		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(486)
														Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(486)
														te[(int)8] = tmp81;
														HX_STACK_LINE(486)
														Float tmp82 = (a11 * b14);		HX_STACK_VAR(tmp82,"tmp82");
														HX_STACK_LINE(486)
														Float tmp83 = (a12 * b24);		HX_STACK_VAR(tmp83,"tmp83");
														HX_STACK_LINE(486)
														Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
														HX_STACK_LINE(486)
														Float tmp85 = (a13 * b34);		HX_STACK_VAR(tmp85,"tmp85");
														HX_STACK_LINE(486)
														Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
														HX_STACK_LINE(486)
														Float tmp87 = (a14 * b44);		HX_STACK_VAR(tmp87,"tmp87");
														HX_STACK_LINE(486)
														Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
														HX_STACK_LINE(486)
														te[(int)12] = tmp88;
														HX_STACK_LINE(486)
														Float tmp89 = (a21 * b11);		HX_STACK_VAR(tmp89,"tmp89");
														HX_STACK_LINE(486)
														Float tmp90 = (a22 * b21);		HX_STACK_VAR(tmp90,"tmp90");
														HX_STACK_LINE(486)
														Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
														HX_STACK_LINE(486)
														Float tmp92 = (a23 * b31);		HX_STACK_VAR(tmp92,"tmp92");
														HX_STACK_LINE(486)
														Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
														HX_STACK_LINE(486)
														Float tmp94 = (a24 * b41);		HX_STACK_VAR(tmp94,"tmp94");
														HX_STACK_LINE(486)
														Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
														HX_STACK_LINE(486)
														te[(int)1] = tmp95;
														HX_STACK_LINE(486)
														Float tmp96 = (a21 * b12);		HX_STACK_VAR(tmp96,"tmp96");
														HX_STACK_LINE(486)
														Float tmp97 = (a22 * b22);		HX_STACK_VAR(tmp97,"tmp97");
														HX_STACK_LINE(486)
														Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
														HX_STACK_LINE(486)
														Float tmp99 = (a23 * b32);		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(486)
														Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(486)
														Float tmp101 = (a24 * b42);		HX_STACK_VAR(tmp101,"tmp101");
														HX_STACK_LINE(486)
														Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
														HX_STACK_LINE(486)
														te[(int)5] = tmp102;
														HX_STACK_LINE(486)
														Float tmp103 = (a21 * b13);		HX_STACK_VAR(tmp103,"tmp103");
														HX_STACK_LINE(486)
														Float tmp104 = (a22 * b23);		HX_STACK_VAR(tmp104,"tmp104");
														HX_STACK_LINE(486)
														Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
														HX_STACK_LINE(486)
														Float tmp106 = (a23 * b33);		HX_STACK_VAR(tmp106,"tmp106");
														HX_STACK_LINE(486)
														Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
														HX_STACK_LINE(486)
														Float tmp108 = (a24 * b43);		HX_STACK_VAR(tmp108,"tmp108");
														HX_STACK_LINE(486)
														Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
														HX_STACK_LINE(486)
														te[(int)9] = tmp109;
														HX_STACK_LINE(486)
														Float tmp110 = (a21 * b14);		HX_STACK_VAR(tmp110,"tmp110");
														HX_STACK_LINE(486)
														Float tmp111 = (a22 * b24);		HX_STACK_VAR(tmp111,"tmp111");
														HX_STACK_LINE(486)
														Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
														HX_STACK_LINE(486)
														Float tmp113 = (a23 * b34);		HX_STACK_VAR(tmp113,"tmp113");
														HX_STACK_LINE(486)
														Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
														HX_STACK_LINE(486)
														Float tmp115 = (a24 * b44);		HX_STACK_VAR(tmp115,"tmp115");
														HX_STACK_LINE(486)
														Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
														HX_STACK_LINE(486)
														te[(int)13] = tmp116;
														HX_STACK_LINE(486)
														Float tmp117 = (a31 * b11);		HX_STACK_VAR(tmp117,"tmp117");
														HX_STACK_LINE(486)
														Float tmp118 = (a32 * b21);		HX_STACK_VAR(tmp118,"tmp118");
														HX_STACK_LINE(486)
														Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
														HX_STACK_LINE(486)
														Float tmp120 = (a33 * b31);		HX_STACK_VAR(tmp120,"tmp120");
														HX_STACK_LINE(486)
														Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
														HX_STACK_LINE(486)
														Float tmp122 = (a34 * b41);		HX_STACK_VAR(tmp122,"tmp122");
														HX_STACK_LINE(486)
														Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
														HX_STACK_LINE(486)
														te[(int)2] = tmp123;
														HX_STACK_LINE(486)
														Float tmp124 = (a31 * b12);		HX_STACK_VAR(tmp124,"tmp124");
														HX_STACK_LINE(486)
														Float tmp125 = (a32 * b22);		HX_STACK_VAR(tmp125,"tmp125");
														HX_STACK_LINE(486)
														Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
														HX_STACK_LINE(486)
														Float tmp127 = (a33 * b32);		HX_STACK_VAR(tmp127,"tmp127");
														HX_STACK_LINE(486)
														Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
														HX_STACK_LINE(486)
														Float tmp129 = (a34 * b42);		HX_STACK_VAR(tmp129,"tmp129");
														HX_STACK_LINE(486)
														Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
														HX_STACK_LINE(486)
														te[(int)6] = tmp130;
														HX_STACK_LINE(486)
														Float tmp131 = (a31 * b13);		HX_STACK_VAR(tmp131,"tmp131");
														HX_STACK_LINE(486)
														Float tmp132 = (a32 * b23);		HX_STACK_VAR(tmp132,"tmp132");
														HX_STACK_LINE(486)
														Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
														HX_STACK_LINE(486)
														Float tmp134 = (a33 * b33);		HX_STACK_VAR(tmp134,"tmp134");
														HX_STACK_LINE(486)
														Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
														HX_STACK_LINE(486)
														Float tmp136 = (a34 * b43);		HX_STACK_VAR(tmp136,"tmp136");
														HX_STACK_LINE(486)
														Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
														HX_STACK_LINE(486)
														te[(int)10] = tmp137;
														HX_STACK_LINE(486)
														Float tmp138 = (a31 * b14);		HX_STACK_VAR(tmp138,"tmp138");
														HX_STACK_LINE(486)
														Float tmp139 = (a32 * b24);		HX_STACK_VAR(tmp139,"tmp139");
														HX_STACK_LINE(486)
														Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
														HX_STACK_LINE(486)
														Float tmp141 = (a33 * b34);		HX_STACK_VAR(tmp141,"tmp141");
														HX_STACK_LINE(486)
														Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
														HX_STACK_LINE(486)
														Float tmp143 = (a34 * b44);		HX_STACK_VAR(tmp143,"tmp143");
														HX_STACK_LINE(486)
														Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
														HX_STACK_LINE(486)
														te[(int)14] = tmp144;
														HX_STACK_LINE(486)
														Float tmp145 = (a41 * b11);		HX_STACK_VAR(tmp145,"tmp145");
														HX_STACK_LINE(486)
														Float tmp146 = (a42 * b21);		HX_STACK_VAR(tmp146,"tmp146");
														HX_STACK_LINE(486)
														Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
														HX_STACK_LINE(486)
														Float tmp148 = (a43 * b31);		HX_STACK_VAR(tmp148,"tmp148");
														HX_STACK_LINE(486)
														Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
														HX_STACK_LINE(486)
														Float tmp150 = (a44 * b41);		HX_STACK_VAR(tmp150,"tmp150");
														HX_STACK_LINE(486)
														Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
														HX_STACK_LINE(486)
														te[(int)3] = tmp151;
														HX_STACK_LINE(486)
														Float tmp152 = (a41 * b12);		HX_STACK_VAR(tmp152,"tmp152");
														HX_STACK_LINE(486)
														Float tmp153 = (a42 * b22);		HX_STACK_VAR(tmp153,"tmp153");
														HX_STACK_LINE(486)
														Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
														HX_STACK_LINE(486)
														Float tmp155 = (a43 * b32);		HX_STACK_VAR(tmp155,"tmp155");
														HX_STACK_LINE(486)
														Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
														HX_STACK_LINE(486)
														Float tmp157 = (a44 * b42);		HX_STACK_VAR(tmp157,"tmp157");
														HX_STACK_LINE(486)
														Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
														HX_STACK_LINE(486)
														te[(int)7] = tmp158;
														HX_STACK_LINE(486)
														Float tmp159 = (a41 * b13);		HX_STACK_VAR(tmp159,"tmp159");
														HX_STACK_LINE(486)
														Float tmp160 = (a42 * b23);		HX_STACK_VAR(tmp160,"tmp160");
														HX_STACK_LINE(486)
														Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
														HX_STACK_LINE(486)
														Float tmp162 = (a43 * b33);		HX_STACK_VAR(tmp162,"tmp162");
														HX_STACK_LINE(486)
														Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
														HX_STACK_LINE(486)
														Float tmp164 = (a44 * b43);		HX_STACK_VAR(tmp164,"tmp164");
														HX_STACK_LINE(486)
														Float tmp165 = (tmp163 + tmp164);		HX_STACK_VAR(tmp165,"tmp165");
														HX_STACK_LINE(486)
														te[(int)11] = tmp165;
														HX_STACK_LINE(486)
														Float tmp166 = (a41 * b14);		HX_STACK_VAR(tmp166,"tmp166");
														HX_STACK_LINE(486)
														Float tmp167 = (a42 * b24);		HX_STACK_VAR(tmp167,"tmp167");
														HX_STACK_LINE(486)
														Float tmp168 = (tmp166 + tmp167);		HX_STACK_VAR(tmp168,"tmp168");
														HX_STACK_LINE(486)
														Float tmp169 = (a43 * b34);		HX_STACK_VAR(tmp169,"tmp169");
														HX_STACK_LINE(486)
														Float tmp170 = (tmp168 + tmp169);		HX_STACK_VAR(tmp170,"tmp170");
														HX_STACK_LINE(486)
														Float tmp171 = (a44 * b44);		HX_STACK_VAR(tmp171,"tmp171");
														HX_STACK_LINE(486)
														Float tmp172 = (tmp170 + tmp171);		HX_STACK_VAR(tmp172,"tmp172");
														HX_STACK_LINE(486)
														te[(int)15] = tmp172;
														HX_STACK_LINE(486)
														tmp25 = _this3;
													}
													HX_STACK_LINE(486)
													::phoenix::Matrix _m = tmp25;		HX_STACK_VAR(_m,"_m");
													HX_STACK_LINE(486)
													_this2->matrix = _m;
													HX_STACK_LINE(486)
													bool tmp26 = (_m != null());		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(486)
													if ((tmp26)){
														HX_STACK_LINE(486)
														::snow::api::buffers::ArrayBufferView tmp27;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(486)
														{
															HX_STACK_LINE(486)
															cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
															HX_STACK_LINE(486)
															::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
															HX_STACK_LINE(486)
															bool tmp28 = false;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(486)
															if ((tmp28)){
																HX_STACK_LINE(486)
																::snow::api::buffers::ArrayBufferView tmp29 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(486)
																this1 = tmp29;
															}
															else{
																HX_STACK_LINE(486)
																bool tmp29 = (array != null());		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(486)
																if ((tmp29)){
																	HX_STACK_LINE(486)
																	::snow::api::buffers::ArrayBufferView tmp30;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(486)
																	{
																		HX_STACK_LINE(486)
																		::snow::api::buffers::ArrayBufferView tmp31 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(486)
																		::snow::api::buffers::ArrayBufferView _this3 = tmp31;		HX_STACK_VAR(_this3,"_this3");
																		HX_STACK_LINE(486)
																		_this3->byteOffset = (int)0;
																		HX_STACK_LINE(486)
																		_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
																		HX_STACK_LINE(486)
																		int tmp32 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(486)
																		_this3->byteLength = tmp32;
																		HX_STACK_LINE(486)
																		::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(486)
																		{
																			HX_STACK_LINE(486)
																			::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																			HX_STACK_LINE(486)
																			int tmp34 = _this3->byteLength;		HX_STACK_VAR(tmp34,"tmp34");
																			HX_STACK_LINE(486)
																			::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(486)
																			this2 = tmp35;
																			HX_STACK_LINE(486)
																			tmp33 = this2;
																		}
																		HX_STACK_LINE(486)
																		_this3->buffer = tmp33;
																		HX_STACK_LINE(486)
																		_this3->copyFromArray(((Array< Float >)(array)),null());
																		HX_STACK_LINE(486)
																		tmp30 = _this3;
																	}
																	HX_STACK_LINE(486)
																	this1 = tmp30;
																}
																else{
																	HX_STACK_LINE(486)
																	bool tmp30 = false;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(486)
																	if ((tmp30)){
																		HX_STACK_LINE(486)
																		::snow::api::buffers::ArrayBufferView tmp31;		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(486)
																		{
																			HX_STACK_LINE(486)
																			::snow::api::buffers::ArrayBufferView tmp32 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp32,"tmp32");
																			HX_STACK_LINE(486)
																			::snow::api::buffers::ArrayBufferView _this3 = tmp32;		HX_STACK_VAR(_this3,"_this3");
																			HX_STACK_LINE(486)
																			::haxe::io::Bytes tmp33 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp33,"tmp33");
																			HX_STACK_LINE(486)
																			::haxe::io::Bytes srcData = tmp33;		HX_STACK_VAR(srcData,"srcData");
																			HX_STACK_LINE(486)
																			int tmp34 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp34,"tmp34");
																			HX_STACK_LINE(486)
																			int srcLength = tmp34;		HX_STACK_VAR(srcLength,"srcLength");
																			HX_STACK_LINE(486)
																			int tmp35 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(486)
																			int srcByteOffset = tmp35;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
																			HX_STACK_LINE(486)
																			int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(486)
																			int srcElementSize = tmp36;		HX_STACK_VAR(srcElementSize,"srcElementSize");
																			HX_STACK_LINE(486)
																			int elementSize = _this3->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																			HX_STACK_LINE(486)
																			int tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(486)
																			int tmp38 = _this3->type;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(486)
																			bool tmp39 = (tmp37 == tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(486)
																			if ((tmp39)){
																				HX_STACK_LINE(486)
																				int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																				HX_STACK_LINE(486)
																				int tmp40 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(486)
																				int cloneLength = tmp40;		HX_STACK_VAR(cloneLength,"cloneLength");
																				HX_STACK_LINE(486)
																				::haxe::io::Bytes tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																				HX_STACK_LINE(486)
																				{
																					HX_STACK_LINE(486)
																					::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																					HX_STACK_LINE(486)
																					int tmp42 = cloneLength;		HX_STACK_VAR(tmp42,"tmp42");
																					HX_STACK_LINE(486)
																					::haxe::io::Bytes tmp43 = ::haxe::io::Bytes_obj::alloc(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																					HX_STACK_LINE(486)
																					this2 = tmp43;
																					HX_STACK_LINE(486)
																					tmp41 = this2;
																				}
																				HX_STACK_LINE(486)
																				_this3->buffer = tmp41;
																				HX_STACK_LINE(486)
																				::haxe::io::Bytes tmp42 = srcData;		HX_STACK_VAR(tmp42,"tmp42");
																				HX_STACK_LINE(486)
																				int tmp43 = srcByteOffset;		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(486)
																				int tmp44 = cloneLength;		HX_STACK_VAR(tmp44,"tmp44");
																				HX_STACK_LINE(486)
																				_this3->buffer->blit((int)0,tmp42,tmp43,tmp44);
																			}
																			else{
																				HX_STACK_LINE(486)
																				HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
																			}
																			HX_STACK_LINE(486)
																			int tmp40 = (_this3->bytesPerElement * srcLength);		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(486)
																			_this3->byteLength = tmp40;
																			HX_STACK_LINE(486)
																			_this3->byteOffset = (int)0;
																			HX_STACK_LINE(486)
																			_this3->length = srcLength;
																			HX_STACK_LINE(486)
																			tmp31 = _this3;
																		}
																		HX_STACK_LINE(486)
																		this1 = tmp31;
																	}
																	else{
																		HX_STACK_LINE(486)
																		bool tmp31 = false;		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(486)
																		if ((tmp31)){
																			HX_STACK_LINE(486)
																			::snow::api::buffers::ArrayBufferView tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																			HX_STACK_LINE(486)
																			{
																				HX_STACK_LINE(486)
																				::snow::api::buffers::ArrayBufferView tmp33 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp33,"tmp33");
																				HX_STACK_LINE(486)
																				::snow::api::buffers::ArrayBufferView _this3 = tmp33;		HX_STACK_VAR(_this3,"_this3");
																				HX_STACK_LINE(486)
																				bool tmp34 = false;		HX_STACK_VAR(tmp34,"tmp34");
																				HX_STACK_LINE(486)
																				if ((tmp34)){
																					HX_STACK_LINE(486)
																					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																				}
																				HX_STACK_LINE(486)
																				int tmp35 = hx::Mod((int)0,_this3->bytesPerElement);		HX_STACK_VAR(tmp35,"tmp35");
																				HX_STACK_LINE(486)
																				bool tmp36 = (tmp35 != (int)0);		HX_STACK_VAR(tmp36,"tmp36");
																				HX_STACK_LINE(486)
																				if ((tmp36)){
																					HX_STACK_LINE(486)
																					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																				}
																				HX_STACK_LINE(486)
																				int tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(486)
																				int bufferByteLength = tmp37;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																				HX_STACK_LINE(486)
																				int elementSize = _this3->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																				HX_STACK_LINE(486)
																				int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																				HX_STACK_LINE(486)
																				bool tmp38 = true;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(486)
																				if ((tmp38)){
																					HX_STACK_LINE(486)
																					int tmp39 = bufferByteLength;		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(486)
																					newByteLength = tmp39;
																					HX_STACK_LINE(486)
																					int tmp40 = hx::Mod(bufferByteLength,_this3->bytesPerElement);		HX_STACK_VAR(tmp40,"tmp40");
																					HX_STACK_LINE(486)
																					bool tmp41 = (tmp40 != (int)0);		HX_STACK_VAR(tmp41,"tmp41");
																					HX_STACK_LINE(486)
																					if ((tmp41)){
																						HX_STACK_LINE(486)
																						HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																					}
																					HX_STACK_LINE(486)
																					bool tmp42 = (newByteLength < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
																					HX_STACK_LINE(486)
																					if ((tmp42)){
																						HX_STACK_LINE(486)
																						HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																					}
																				}
																				else{
																					HX_STACK_LINE(486)
																					int tmp39 = (null() * _this3->bytesPerElement);		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(486)
																					newByteLength = tmp39;
																					HX_STACK_LINE(486)
																					int tmp40 = newByteLength;		HX_STACK_VAR(tmp40,"tmp40");
																					HX_STACK_LINE(486)
																					int newRange = tmp40;		HX_STACK_VAR(newRange,"newRange");
																					HX_STACK_LINE(486)
																					bool tmp41 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp41,"tmp41");
																					HX_STACK_LINE(486)
																					if ((tmp41)){
																						HX_STACK_LINE(486)
																						HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																					}
																				}
																				HX_STACK_LINE(486)
																				_this3->buffer = null();
																				HX_STACK_LINE(486)
																				_this3->byteOffset = (int)0;
																				HX_STACK_LINE(486)
																				_this3->byteLength = newByteLength;
																				HX_STACK_LINE(486)
																				Float tmp39 = (Float(newByteLength) / Float(_this3->bytesPerElement));		HX_STACK_VAR(tmp39,"tmp39");
																				HX_STACK_LINE(486)
																				int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(486)
																				_this3->length = tmp40;
																				HX_STACK_LINE(486)
																				tmp32 = _this3;
																			}
																			HX_STACK_LINE(486)
																			this1 = tmp32;
																		}
																		else{
																			HX_STACK_LINE(486)
																			HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
																		}
																	}
																}
															}
															HX_STACK_LINE(486)
															tmp27 = this1;
														}
														HX_STACK_LINE(486)
														_this2->floats = tmp27;
													}
													HX_STACK_LINE(486)
													_this2->matrix;
												}
												else{
													HX_STACK_LINE(486)
													::phoenix::Spatial tmp24 = _this1->get_world();		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(486)
													::phoenix::Spatial _this2 = tmp24;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(486)
													::phoenix::Matrix tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														::phoenix::Matrix tmp26 = _this1->local->matrix;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(486)
														Array< Float > te = tmp26->elements;		HX_STACK_VAR(te,"te");
														HX_STACK_LINE(486)
														Float tmp27 = te->__get((int)0);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(486)
														Float tmp28 = te->__get((int)4);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(486)
														Float tmp29 = te->__get((int)8);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(486)
														Float tmp30 = te->__get((int)12);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(486)
														Float tmp31 = te->__get((int)1);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(486)
														Float tmp32 = te->__get((int)5);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(486)
														Float tmp33 = te->__get((int)9);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(486)
														Float tmp34 = te->__get((int)13);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(486)
														Float tmp35 = te->__get((int)2);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(486)
														Float tmp36 = te->__get((int)6);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(486)
														Float tmp37 = te->__get((int)10);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(486)
														Float tmp38 = te->__get((int)14);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(486)
														Float tmp39 = te->__get((int)3);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(486)
														Float tmp40 = te->__get((int)7);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(486)
														Float tmp41 = te->__get((int)11);		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(486)
														Float tmp42 = te->__get((int)15);		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(486)
														tmp25 = ::phoenix::Matrix_obj::__new(tmp27,tmp28,tmp29,tmp30,tmp31,tmp32,tmp33,tmp34,tmp35,tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);
													}
													HX_STACK_LINE(486)
													::phoenix::Matrix _m = tmp25;		HX_STACK_VAR(_m,"_m");
													HX_STACK_LINE(486)
													_this2->matrix = _m;
													HX_STACK_LINE(486)
													bool tmp26 = (_m != null());		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(486)
													if ((tmp26)){
														HX_STACK_LINE(486)
														::snow::api::buffers::ArrayBufferView tmp27;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(486)
														{
															HX_STACK_LINE(486)
															cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
															HX_STACK_LINE(486)
															::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
															HX_STACK_LINE(486)
															bool tmp28 = false;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(486)
															if ((tmp28)){
																HX_STACK_LINE(486)
																::snow::api::buffers::ArrayBufferView tmp29 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(486)
																this1 = tmp29;
															}
															else{
																HX_STACK_LINE(486)
																bool tmp29 = (array != null());		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(486)
																if ((tmp29)){
																	HX_STACK_LINE(486)
																	::snow::api::buffers::ArrayBufferView tmp30;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(486)
																	{
																		HX_STACK_LINE(486)
																		::snow::api::buffers::ArrayBufferView tmp31 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(486)
																		::snow::api::buffers::ArrayBufferView _this3 = tmp31;		HX_STACK_VAR(_this3,"_this3");
																		HX_STACK_LINE(486)
																		_this3->byteOffset = (int)0;
																		HX_STACK_LINE(486)
																		_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
																		HX_STACK_LINE(486)
																		int tmp32 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(486)
																		_this3->byteLength = tmp32;
																		HX_STACK_LINE(486)
																		::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(486)
																		{
																			HX_STACK_LINE(486)
																			::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																			HX_STACK_LINE(486)
																			int tmp34 = _this3->byteLength;		HX_STACK_VAR(tmp34,"tmp34");
																			HX_STACK_LINE(486)
																			::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(486)
																			this2 = tmp35;
																			HX_STACK_LINE(486)
																			tmp33 = this2;
																		}
																		HX_STACK_LINE(486)
																		_this3->buffer = tmp33;
																		HX_STACK_LINE(486)
																		_this3->copyFromArray(((Array< Float >)(array)),null());
																		HX_STACK_LINE(486)
																		tmp30 = _this3;
																	}
																	HX_STACK_LINE(486)
																	this1 = tmp30;
																}
																else{
																	HX_STACK_LINE(486)
																	bool tmp30 = false;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(486)
																	if ((tmp30)){
																		HX_STACK_LINE(486)
																		::snow::api::buffers::ArrayBufferView tmp31;		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(486)
																		{
																			HX_STACK_LINE(486)
																			::snow::api::buffers::ArrayBufferView tmp32 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp32,"tmp32");
																			HX_STACK_LINE(486)
																			::snow::api::buffers::ArrayBufferView _this3 = tmp32;		HX_STACK_VAR(_this3,"_this3");
																			HX_STACK_LINE(486)
																			::haxe::io::Bytes tmp33 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp33,"tmp33");
																			HX_STACK_LINE(486)
																			::haxe::io::Bytes srcData = tmp33;		HX_STACK_VAR(srcData,"srcData");
																			HX_STACK_LINE(486)
																			int tmp34 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp34,"tmp34");
																			HX_STACK_LINE(486)
																			int srcLength = tmp34;		HX_STACK_VAR(srcLength,"srcLength");
																			HX_STACK_LINE(486)
																			int tmp35 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(486)
																			int srcByteOffset = tmp35;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
																			HX_STACK_LINE(486)
																			int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(486)
																			int srcElementSize = tmp36;		HX_STACK_VAR(srcElementSize,"srcElementSize");
																			HX_STACK_LINE(486)
																			int elementSize = _this3->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																			HX_STACK_LINE(486)
																			int tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(486)
																			int tmp38 = _this3->type;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(486)
																			bool tmp39 = (tmp37 == tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(486)
																			if ((tmp39)){
																				HX_STACK_LINE(486)
																				int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																				HX_STACK_LINE(486)
																				int tmp40 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(486)
																				int cloneLength = tmp40;		HX_STACK_VAR(cloneLength,"cloneLength");
																				HX_STACK_LINE(486)
																				::haxe::io::Bytes tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																				HX_STACK_LINE(486)
																				{
																					HX_STACK_LINE(486)
																					::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																					HX_STACK_LINE(486)
																					int tmp42 = cloneLength;		HX_STACK_VAR(tmp42,"tmp42");
																					HX_STACK_LINE(486)
																					::haxe::io::Bytes tmp43 = ::haxe::io::Bytes_obj::alloc(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																					HX_STACK_LINE(486)
																					this2 = tmp43;
																					HX_STACK_LINE(486)
																					tmp41 = this2;
																				}
																				HX_STACK_LINE(486)
																				_this3->buffer = tmp41;
																				HX_STACK_LINE(486)
																				::haxe::io::Bytes tmp42 = srcData;		HX_STACK_VAR(tmp42,"tmp42");
																				HX_STACK_LINE(486)
																				int tmp43 = srcByteOffset;		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(486)
																				int tmp44 = cloneLength;		HX_STACK_VAR(tmp44,"tmp44");
																				HX_STACK_LINE(486)
																				_this3->buffer->blit((int)0,tmp42,tmp43,tmp44);
																			}
																			else{
																				HX_STACK_LINE(486)
																				HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
																			}
																			HX_STACK_LINE(486)
																			int tmp40 = (_this3->bytesPerElement * srcLength);		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(486)
																			_this3->byteLength = tmp40;
																			HX_STACK_LINE(486)
																			_this3->byteOffset = (int)0;
																			HX_STACK_LINE(486)
																			_this3->length = srcLength;
																			HX_STACK_LINE(486)
																			tmp31 = _this3;
																		}
																		HX_STACK_LINE(486)
																		this1 = tmp31;
																	}
																	else{
																		HX_STACK_LINE(486)
																		bool tmp31 = false;		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(486)
																		if ((tmp31)){
																			HX_STACK_LINE(486)
																			::snow::api::buffers::ArrayBufferView tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																			HX_STACK_LINE(486)
																			{
																				HX_STACK_LINE(486)
																				::snow::api::buffers::ArrayBufferView tmp33 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp33,"tmp33");
																				HX_STACK_LINE(486)
																				::snow::api::buffers::ArrayBufferView _this3 = tmp33;		HX_STACK_VAR(_this3,"_this3");
																				HX_STACK_LINE(486)
																				bool tmp34 = false;		HX_STACK_VAR(tmp34,"tmp34");
																				HX_STACK_LINE(486)
																				if ((tmp34)){
																					HX_STACK_LINE(486)
																					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																				}
																				HX_STACK_LINE(486)
																				int tmp35 = hx::Mod((int)0,_this3->bytesPerElement);		HX_STACK_VAR(tmp35,"tmp35");
																				HX_STACK_LINE(486)
																				bool tmp36 = (tmp35 != (int)0);		HX_STACK_VAR(tmp36,"tmp36");
																				HX_STACK_LINE(486)
																				if ((tmp36)){
																					HX_STACK_LINE(486)
																					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																				}
																				HX_STACK_LINE(486)
																				int tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(486)
																				int bufferByteLength = tmp37;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																				HX_STACK_LINE(486)
																				int elementSize = _this3->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																				HX_STACK_LINE(486)
																				int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																				HX_STACK_LINE(486)
																				bool tmp38 = true;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(486)
																				if ((tmp38)){
																					HX_STACK_LINE(486)
																					int tmp39 = bufferByteLength;		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(486)
																					newByteLength = tmp39;
																					HX_STACK_LINE(486)
																					int tmp40 = hx::Mod(bufferByteLength,_this3->bytesPerElement);		HX_STACK_VAR(tmp40,"tmp40");
																					HX_STACK_LINE(486)
																					bool tmp41 = (tmp40 != (int)0);		HX_STACK_VAR(tmp41,"tmp41");
																					HX_STACK_LINE(486)
																					if ((tmp41)){
																						HX_STACK_LINE(486)
																						HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																					}
																					HX_STACK_LINE(486)
																					bool tmp42 = (newByteLength < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
																					HX_STACK_LINE(486)
																					if ((tmp42)){
																						HX_STACK_LINE(486)
																						HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																					}
																				}
																				else{
																					HX_STACK_LINE(486)
																					int tmp39 = (null() * _this3->bytesPerElement);		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(486)
																					newByteLength = tmp39;
																					HX_STACK_LINE(486)
																					int tmp40 = newByteLength;		HX_STACK_VAR(tmp40,"tmp40");
																					HX_STACK_LINE(486)
																					int newRange = tmp40;		HX_STACK_VAR(newRange,"newRange");
																					HX_STACK_LINE(486)
																					bool tmp41 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp41,"tmp41");
																					HX_STACK_LINE(486)
																					if ((tmp41)){
																						HX_STACK_LINE(486)
																						HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																					}
																				}
																				HX_STACK_LINE(486)
																				_this3->buffer = null();
																				HX_STACK_LINE(486)
																				_this3->byteOffset = (int)0;
																				HX_STACK_LINE(486)
																				_this3->byteLength = newByteLength;
																				HX_STACK_LINE(486)
																				Float tmp39 = (Float(newByteLength) / Float(_this3->bytesPerElement));		HX_STACK_VAR(tmp39,"tmp39");
																				HX_STACK_LINE(486)
																				int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(486)
																				_this3->length = tmp40;
																				HX_STACK_LINE(486)
																				tmp32 = _this3;
																			}
																			HX_STACK_LINE(486)
																			this1 = tmp32;
																		}
																		else{
																			HX_STACK_LINE(486)
																			HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
																		}
																	}
																}
															}
															HX_STACK_LINE(486)
															tmp27 = this1;
														}
														HX_STACK_LINE(486)
														_this2->floats = tmp27;
													}
													HX_STACK_LINE(486)
													_this2->matrix;
												}
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													::phoenix::Spatial tmp24 = _this1->get_world();		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(486)
													::phoenix::Spatial _this2 = tmp24;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(486)
													bool tmp25 = _this2->auto_decompose;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(486)
													bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(486)
													bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(486)
													if ((tmp26)){
														HX_STACK_LINE(486)
														tmp27 = false;
													}
													else{
														HX_STACK_LINE(486)
														tmp27 = true;
													}
													HX_STACK_LINE(486)
													if ((tmp27)){
														HX_STACK_LINE(486)
														::phoenix::MatrixTransform tmp28;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(486)
														{
															HX_STACK_LINE(486)
															::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
															HX_STACK_LINE(486)
															::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
															HX_STACK_LINE(486)
															::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
															HX_STACK_LINE(486)
															::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
															HX_STACK_LINE(486)
															Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
															HX_STACK_LINE(486)
															::phoenix::Matrix tmp29 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(486)
															::phoenix::Matrix matrix = tmp29;		HX_STACK_VAR(matrix,"matrix");
															HX_STACK_LINE(486)
															Float tmp30 = te->__get((int)0);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(486)
															Float _ax_x = tmp30;		HX_STACK_VAR(_ax_x,"_ax_x");
															HX_STACK_LINE(486)
															Float tmp31 = te->__get((int)1);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(486)
															Float _ax_y = tmp31;		HX_STACK_VAR(_ax_y,"_ax_y");
															HX_STACK_LINE(486)
															Float tmp32 = te->__get((int)2);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(486)
															Float _ax_z = tmp32;		HX_STACK_VAR(_ax_z,"_ax_z");
															HX_STACK_LINE(486)
															Float tmp33 = te->__get((int)4);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(486)
															Float _ay_x = tmp33;		HX_STACK_VAR(_ay_x,"_ay_x");
															HX_STACK_LINE(486)
															Float tmp34 = te->__get((int)5);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(486)
															Float _ay_y = tmp34;		HX_STACK_VAR(_ay_y,"_ay_y");
															HX_STACK_LINE(486)
															Float tmp35 = te->__get((int)6);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(486)
															Float _ay_z = tmp35;		HX_STACK_VAR(_ay_z,"_ay_z");
															HX_STACK_LINE(486)
															Float tmp36 = te->__get((int)8);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(486)
															Float _az_x = tmp36;		HX_STACK_VAR(_az_x,"_az_x");
															HX_STACK_LINE(486)
															Float tmp37 = te->__get((int)9);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(486)
															Float _az_y = tmp37;		HX_STACK_VAR(_az_y,"_az_y");
															HX_STACK_LINE(486)
															Float tmp38 = te->__get((int)10);		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(486)
															Float _az_z = tmp38;		HX_STACK_VAR(_az_z,"_az_z");
															HX_STACK_LINE(486)
															Float tmp39 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(486)
															Float tmp40 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(486)
															Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(486)
															Float tmp42 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(486)
															Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(486)
															Float tmp44 = ::Math_obj::sqrt(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(486)
															Float _ax_length = tmp44;		HX_STACK_VAR(_ax_length,"_ax_length");
															HX_STACK_LINE(486)
															Float tmp45 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(486)
															Float tmp46 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(486)
															Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(486)
															Float tmp48 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(486)
															Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(486)
															Float tmp50 = ::Math_obj::sqrt(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(486)
															Float _ay_length = tmp50;		HX_STACK_VAR(_ay_length,"_ay_length");
															HX_STACK_LINE(486)
															Float tmp51 = (_az_x * _az_x);		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(486)
															Float tmp52 = (_az_y * _az_y);		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(486)
															Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(486)
															Float tmp54 = (_az_z * _az_z);		HX_STACK_VAR(tmp54,"tmp54");
															HX_STACK_LINE(486)
															Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
															HX_STACK_LINE(486)
															Float tmp56 = ::Math_obj::sqrt(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
															HX_STACK_LINE(486)
															Float _az_length = tmp56;		HX_STACK_VAR(_az_length,"_az_length");
															HX_STACK_LINE(486)
															bool tmp57 = (_quaternion == null());		HX_STACK_VAR(tmp57,"tmp57");
															HX_STACK_LINE(486)
															if ((tmp57)){
																HX_STACK_LINE(486)
																::phoenix::Quaternion tmp58 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp58,"tmp58");
																HX_STACK_LINE(486)
																_quaternion = tmp58;
															}
															HX_STACK_LINE(486)
															bool tmp58 = (_position == null());		HX_STACK_VAR(tmp58,"tmp58");
															HX_STACK_LINE(486)
															if ((tmp58)){
																HX_STACK_LINE(486)
																Float tmp59 = te->__get((int)12);		HX_STACK_VAR(tmp59,"tmp59");
																HX_STACK_LINE(486)
																Float tmp60 = te->__get((int)13);		HX_STACK_VAR(tmp60,"tmp60");
																HX_STACK_LINE(486)
																Float tmp61 = te->__get((int)14);		HX_STACK_VAR(tmp61,"tmp61");
																HX_STACK_LINE(486)
																::phoenix::Vector tmp62 = ::phoenix::Vector_obj::__new(tmp59,tmp60,tmp61,null());		HX_STACK_VAR(tmp62,"tmp62");
																HX_STACK_LINE(486)
																_position = tmp62;
															}
															else{
																HX_STACK_LINE(486)
																{
																	HX_STACK_LINE(486)
																	Float tmp59 = te->__get((int)12);		HX_STACK_VAR(tmp59,"tmp59");
																	HX_STACK_LINE(486)
																	Float _x = tmp59;		HX_STACK_VAR(_x,"_x");
																	HX_STACK_LINE(486)
																	_position->x = _x;
																	HX_STACK_LINE(486)
																	bool tmp60 = _position->_construct;		HX_STACK_VAR(tmp60,"tmp60");
																	HX_STACK_LINE(486)
																	if ((tmp60)){
																		HX_STACK_LINE(486)
																		_position->x;
																	}
																	else{
																		HX_STACK_LINE(486)
																		bool tmp61 = (_position->listen_x != null());		HX_STACK_VAR(tmp61,"tmp61");
																		HX_STACK_LINE(486)
																		bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
																		HX_STACK_LINE(486)
																		if ((tmp61)){
																			HX_STACK_LINE(486)
																			bool tmp63 = _position->ignore_listeners;		HX_STACK_VAR(tmp63,"tmp63");
																			HX_STACK_LINE(486)
																			bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
																			HX_STACK_LINE(486)
																			tmp62 = !(tmp64);
																		}
																		else{
																			HX_STACK_LINE(486)
																			tmp62 = false;
																		}
																		HX_STACK_LINE(486)
																		if ((tmp62)){
																			HX_STACK_LINE(486)
																			Float tmp63 = _x;		HX_STACK_VAR(tmp63,"tmp63");
																			HX_STACK_LINE(486)
																			_position->listen_x(tmp63);
																		}
																		HX_STACK_LINE(486)
																		_position->x;
																	}
																}
																HX_STACK_LINE(486)
																{
																	HX_STACK_LINE(486)
																	Float tmp59 = te->__get((int)13);		HX_STACK_VAR(tmp59,"tmp59");
																	HX_STACK_LINE(486)
																	Float _y = tmp59;		HX_STACK_VAR(_y,"_y");
																	HX_STACK_LINE(486)
																	_position->y = _y;
																	HX_STACK_LINE(486)
																	bool tmp60 = _position->_construct;		HX_STACK_VAR(tmp60,"tmp60");
																	HX_STACK_LINE(486)
																	if ((tmp60)){
																		HX_STACK_LINE(486)
																		_position->y;
																	}
																	else{
																		HX_STACK_LINE(486)
																		bool tmp61 = (_position->listen_y != null());		HX_STACK_VAR(tmp61,"tmp61");
																		HX_STACK_LINE(486)
																		bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
																		HX_STACK_LINE(486)
																		if ((tmp61)){
																			HX_STACK_LINE(486)
																			bool tmp63 = _position->ignore_listeners;		HX_STACK_VAR(tmp63,"tmp63");
																			HX_STACK_LINE(486)
																			bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
																			HX_STACK_LINE(486)
																			tmp62 = !(tmp64);
																		}
																		else{
																			HX_STACK_LINE(486)
																			tmp62 = false;
																		}
																		HX_STACK_LINE(486)
																		if ((tmp62)){
																			HX_STACK_LINE(486)
																			Float tmp63 = _y;		HX_STACK_VAR(tmp63,"tmp63");
																			HX_STACK_LINE(486)
																			_position->listen_y(tmp63);
																		}
																		HX_STACK_LINE(486)
																		_position->y;
																	}
																}
																HX_STACK_LINE(486)
																{
																	HX_STACK_LINE(486)
																	Float tmp59 = te->__get((int)14);		HX_STACK_VAR(tmp59,"tmp59");
																	HX_STACK_LINE(486)
																	Float _z = tmp59;		HX_STACK_VAR(_z,"_z");
																	HX_STACK_LINE(486)
																	_position->z = _z;
																	HX_STACK_LINE(486)
																	bool tmp60 = _position->_construct;		HX_STACK_VAR(tmp60,"tmp60");
																	HX_STACK_LINE(486)
																	if ((tmp60)){
																		HX_STACK_LINE(486)
																		_position->z;
																	}
																	else{
																		HX_STACK_LINE(486)
																		bool tmp61 = (_position->listen_z != null());		HX_STACK_VAR(tmp61,"tmp61");
																		HX_STACK_LINE(486)
																		bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
																		HX_STACK_LINE(486)
																		if ((tmp61)){
																			HX_STACK_LINE(486)
																			bool tmp63 = _position->ignore_listeners;		HX_STACK_VAR(tmp63,"tmp63");
																			HX_STACK_LINE(486)
																			bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
																			HX_STACK_LINE(486)
																			tmp62 = !(tmp64);
																		}
																		else{
																			HX_STACK_LINE(486)
																			tmp62 = false;
																		}
																		HX_STACK_LINE(486)
																		if ((tmp62)){
																			HX_STACK_LINE(486)
																			Float tmp63 = _z;		HX_STACK_VAR(tmp63,"tmp63");
																			HX_STACK_LINE(486)
																			_position->listen_z(tmp63);
																		}
																		HX_STACK_LINE(486)
																		_position->z;
																	}
																}
															}
															HX_STACK_LINE(486)
															bool tmp59 = (_scale == null());		HX_STACK_VAR(tmp59,"tmp59");
															HX_STACK_LINE(486)
															if ((tmp59)){
																HX_STACK_LINE(486)
																::phoenix::Vector tmp60 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp60,"tmp60");
																HX_STACK_LINE(486)
																_scale = tmp60;
															}
															else{
																HX_STACK_LINE(486)
																{
																	HX_STACK_LINE(486)
																	_scale->x = _ax_length;
																	HX_STACK_LINE(486)
																	bool tmp60 = _scale->_construct;		HX_STACK_VAR(tmp60,"tmp60");
																	HX_STACK_LINE(486)
																	if ((tmp60)){
																		HX_STACK_LINE(486)
																		_scale->x;
																	}
																	else{
																		HX_STACK_LINE(486)
																		bool tmp61 = (_scale->listen_x != null());		HX_STACK_VAR(tmp61,"tmp61");
																		HX_STACK_LINE(486)
																		bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
																		HX_STACK_LINE(486)
																		if ((tmp61)){
																			HX_STACK_LINE(486)
																			bool tmp63 = _scale->ignore_listeners;		HX_STACK_VAR(tmp63,"tmp63");
																			HX_STACK_LINE(486)
																			bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
																			HX_STACK_LINE(486)
																			tmp62 = !(tmp64);
																		}
																		else{
																			HX_STACK_LINE(486)
																			tmp62 = false;
																		}
																		HX_STACK_LINE(486)
																		if ((tmp62)){
																			HX_STACK_LINE(486)
																			Float tmp63 = _ax_length;		HX_STACK_VAR(tmp63,"tmp63");
																			HX_STACK_LINE(486)
																			_scale->listen_x(tmp63);
																		}
																		HX_STACK_LINE(486)
																		_scale->x;
																	}
																}
																HX_STACK_LINE(486)
																{
																	HX_STACK_LINE(486)
																	_scale->y = _ay_length;
																	HX_STACK_LINE(486)
																	bool tmp60 = _scale->_construct;		HX_STACK_VAR(tmp60,"tmp60");
																	HX_STACK_LINE(486)
																	if ((tmp60)){
																		HX_STACK_LINE(486)
																		_scale->y;
																	}
																	else{
																		HX_STACK_LINE(486)
																		bool tmp61 = (_scale->listen_y != null());		HX_STACK_VAR(tmp61,"tmp61");
																		HX_STACK_LINE(486)
																		bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
																		HX_STACK_LINE(486)
																		if ((tmp61)){
																			HX_STACK_LINE(486)
																			bool tmp63 = _scale->ignore_listeners;		HX_STACK_VAR(tmp63,"tmp63");
																			HX_STACK_LINE(486)
																			bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
																			HX_STACK_LINE(486)
																			tmp62 = !(tmp64);
																		}
																		else{
																			HX_STACK_LINE(486)
																			tmp62 = false;
																		}
																		HX_STACK_LINE(486)
																		if ((tmp62)){
																			HX_STACK_LINE(486)
																			Float tmp63 = _ay_length;		HX_STACK_VAR(tmp63,"tmp63");
																			HX_STACK_LINE(486)
																			_scale->listen_y(tmp63);
																		}
																		HX_STACK_LINE(486)
																		_scale->y;
																	}
																}
																HX_STACK_LINE(486)
																{
																	HX_STACK_LINE(486)
																	_scale->z = _az_length;
																	HX_STACK_LINE(486)
																	bool tmp60 = _scale->_construct;		HX_STACK_VAR(tmp60,"tmp60");
																	HX_STACK_LINE(486)
																	if ((tmp60)){
																		HX_STACK_LINE(486)
																		_scale->z;
																	}
																	else{
																		HX_STACK_LINE(486)
																		bool tmp61 = (_scale->listen_z != null());		HX_STACK_VAR(tmp61,"tmp61");
																		HX_STACK_LINE(486)
																		bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
																		HX_STACK_LINE(486)
																		if ((tmp61)){
																			HX_STACK_LINE(486)
																			bool tmp63 = _scale->ignore_listeners;		HX_STACK_VAR(tmp63,"tmp63");
																			HX_STACK_LINE(486)
																			bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
																			HX_STACK_LINE(486)
																			tmp62 = !(tmp64);
																		}
																		else{
																			HX_STACK_LINE(486)
																			tmp62 = false;
																		}
																		HX_STACK_LINE(486)
																		if ((tmp62)){
																			HX_STACK_LINE(486)
																			Float tmp63 = _az_length;		HX_STACK_VAR(tmp63,"tmp63");
																			HX_STACK_LINE(486)
																			_scale->listen_z(tmp63);
																		}
																		HX_STACK_LINE(486)
																		_scale->z;
																	}
																}
															}
															HX_STACK_LINE(486)
															matrix->elements = _this3->elements->concat(Array_obj< Float >::__new());
															HX_STACK_LINE(486)
															Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
															HX_STACK_LINE(486)
															Float tmp60 = _ax_length;		HX_STACK_VAR(tmp60,"tmp60");
															HX_STACK_LINE(486)
															hx::DivEq(me[(int)0],tmp60);
															HX_STACK_LINE(486)
															Float tmp61 = _ax_length;		HX_STACK_VAR(tmp61,"tmp61");
															HX_STACK_LINE(486)
															hx::DivEq(me[(int)1],tmp61);
															HX_STACK_LINE(486)
															Float tmp62 = _ax_length;		HX_STACK_VAR(tmp62,"tmp62");
															HX_STACK_LINE(486)
															hx::DivEq(me[(int)2],tmp62);
															HX_STACK_LINE(486)
															Float tmp63 = _ay_length;		HX_STACK_VAR(tmp63,"tmp63");
															HX_STACK_LINE(486)
															hx::DivEq(me[(int)4],tmp63);
															HX_STACK_LINE(486)
															Float tmp64 = _ay_length;		HX_STACK_VAR(tmp64,"tmp64");
															HX_STACK_LINE(486)
															hx::DivEq(me[(int)5],tmp64);
															HX_STACK_LINE(486)
															Float tmp65 = _ay_length;		HX_STACK_VAR(tmp65,"tmp65");
															HX_STACK_LINE(486)
															hx::DivEq(me[(int)6],tmp65);
															HX_STACK_LINE(486)
															Float tmp66 = _az_length;		HX_STACK_VAR(tmp66,"tmp66");
															HX_STACK_LINE(486)
															hx::DivEq(me[(int)8],tmp66);
															HX_STACK_LINE(486)
															Float tmp67 = _az_length;		HX_STACK_VAR(tmp67,"tmp67");
															HX_STACK_LINE(486)
															hx::DivEq(me[(int)9],tmp67);
															HX_STACK_LINE(486)
															Float tmp68 = _az_length;		HX_STACK_VAR(tmp68,"tmp68");
															HX_STACK_LINE(486)
															hx::DivEq(me[(int)10],tmp68);
															HX_STACK_LINE(486)
															::phoenix::Matrix tmp69 = matrix;		HX_STACK_VAR(tmp69,"tmp69");
															HX_STACK_LINE(486)
															_quaternion->setFromRotationMatrix(tmp69);
															HX_STACK_LINE(486)
															bool tmp70 = (_this3->_transform == null());		HX_STACK_VAR(tmp70,"tmp70");
															HX_STACK_LINE(486)
															if ((tmp70)){
																HX_STACK_LINE(486)
																::phoenix::MatrixTransform tmp71 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp71,"tmp71");
																HX_STACK_LINE(486)
																_this3->_transform = tmp71;
															}
															else{
																HX_STACK_LINE(486)
																_this3->_transform->pos = _position;
																HX_STACK_LINE(486)
																_this3->_transform->rotation = _quaternion;
																HX_STACK_LINE(486)
																_this3->_transform->scale = _scale;
															}
															HX_STACK_LINE(486)
															tmp28 = _this3->_transform;
														}
														HX_STACK_LINE(486)
														::phoenix::MatrixTransform _transform = tmp28;		HX_STACK_VAR(_transform,"_transform");
														HX_STACK_LINE(486)
														{
															HX_STACK_LINE(486)
															::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
															HX_STACK_LINE(486)
															_this2->pos = _p;
															HX_STACK_LINE(486)
															bool tmp29 = (_p != null());		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(486)
															if ((tmp29)){
																HX_STACK_LINE(486)
																::phoenix::Vector tmp30 = _this2->pos;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(486)
																Dynamic tmp31 = _this2->_pos_change_dyn();		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(486)
																::phoenix::Vector_obj::Listen(tmp30,tmp31);
																HX_STACK_LINE(486)
																{
																	HX_STACK_LINE(486)
																	bool tmp32 = (_this2->pos_changed != null());		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(486)
																	bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(486)
																	if ((tmp32)){
																		HX_STACK_LINE(486)
																		bool tmp34 = _this2->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(486)
																		bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(486)
																		tmp33 = !(tmp35);
																	}
																	else{
																		HX_STACK_LINE(486)
																		tmp33 = false;
																	}
																	HX_STACK_LINE(486)
																	if ((tmp33)){
																		HX_STACK_LINE(486)
																		::phoenix::Vector tmp34 = _this2->pos;		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(486)
																		_this2->pos_changed(tmp34);
																	}
																}
															}
															HX_STACK_LINE(486)
															_this2->pos;
														}
														HX_STACK_LINE(486)
														{
															HX_STACK_LINE(486)
															::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
															HX_STACK_LINE(486)
															_this2->rotation = _r;
															HX_STACK_LINE(486)
															bool tmp29 = (_r != null());		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(486)
															if ((tmp29)){
																HX_STACK_LINE(486)
																{
																	HX_STACK_LINE(486)
																	::phoenix::Quaternion _q = _this2->rotation;		HX_STACK_VAR(_q,"_q");
																	HX_STACK_LINE(486)
																	Dynamic listener = _this2->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
																	HX_STACK_LINE(486)
																	_q->listen_x = listener;
																	HX_STACK_LINE(486)
																	_q->listen_y = listener;
																	HX_STACK_LINE(486)
																	_q->listen_z = listener;
																	HX_STACK_LINE(486)
																	_q->listen_w = listener;
																}
																HX_STACK_LINE(486)
																{
																	HX_STACK_LINE(486)
																	bool tmp30 = (_this2->rotation_changed != null());		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(486)
																	bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(486)
																	if ((tmp30)){
																		HX_STACK_LINE(486)
																		bool tmp32 = _this2->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(486)
																		bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(486)
																		tmp31 = !(tmp33);
																	}
																	else{
																		HX_STACK_LINE(486)
																		tmp31 = false;
																	}
																	HX_STACK_LINE(486)
																	if ((tmp31)){
																		HX_STACK_LINE(486)
																		::phoenix::Quaternion tmp32 = _this2->rotation;		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(486)
																		_this2->rotation_changed(tmp32);
																	}
																}
															}
															HX_STACK_LINE(486)
															_this2->rotation;
														}
														HX_STACK_LINE(486)
														{
															HX_STACK_LINE(486)
															::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
															HX_STACK_LINE(486)
															_this2->scale = _s;
															HX_STACK_LINE(486)
															bool tmp29 = (_s != null());		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(486)
															if ((tmp29)){
																HX_STACK_LINE(486)
																::phoenix::Vector tmp30 = _this2->scale;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(486)
																Dynamic tmp31 = _this2->_scale_change_dyn();		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(486)
																::phoenix::Vector_obj::Listen(tmp30,tmp31);
																HX_STACK_LINE(486)
																{
																	HX_STACK_LINE(486)
																	bool tmp32 = (_this2->scale_changed != null());		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(486)
																	bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(486)
																	if ((tmp32)){
																		HX_STACK_LINE(486)
																		bool tmp34 = _this2->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(486)
																		bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(486)
																		tmp33 = !(tmp35);
																	}
																	else{
																		HX_STACK_LINE(486)
																		tmp33 = false;
																	}
																	HX_STACK_LINE(486)
																	if ((tmp33)){
																		HX_STACK_LINE(486)
																		::phoenix::Vector tmp34 = _this2->scale;		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(486)
																		_this2->scale_changed(tmp34);
																	}
																}
															}
															HX_STACK_LINE(486)
															_this2->scale;
														}
													}
													HX_STACK_LINE(486)
													_this2;
												}
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													_this1->dirty = false;
													HX_STACK_LINE(486)
													bool tmp24 = _this1->dirty;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(486)
													bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(486)
													bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(486)
													if ((tmp25)){
														HX_STACK_LINE(486)
														bool tmp27 = _this1->_setup;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(486)
														bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(486)
														bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(486)
														tmp26 = !(tmp29);
													}
													else{
														HX_STACK_LINE(486)
														tmp26 = false;
													}
													HX_STACK_LINE(486)
													bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(486)
													bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(486)
													if ((tmp27)){
														HX_STACK_LINE(486)
														tmp28 = (_this1->_dirty_handlers != null());
													}
													else{
														HX_STACK_LINE(486)
														tmp28 = false;
													}
													HX_STACK_LINE(486)
													bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(486)
													if ((tmp28)){
														HX_STACK_LINE(486)
														int tmp30 = _this1->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(486)
														int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(486)
														tmp29 = (tmp31 > (int)0);
													}
													else{
														HX_STACK_LINE(486)
														tmp29 = false;
													}
													HX_STACK_LINE(486)
													if ((tmp29)){
														HX_STACK_LINE(486)
														int _g = (int)0;		HX_STACK_VAR(_g,"_g");
														HX_STACK_LINE(486)
														cpp::ArrayBase _g1 = _this1->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
														HX_STACK_LINE(486)
														while((true)){
															HX_STACK_LINE(486)
															bool tmp30 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(486)
															bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(486)
															if ((tmp31)){
																HX_STACK_LINE(486)
																break;
															}
															HX_STACK_LINE(486)
															Dynamic tmp32 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(486)
															Dynamic _handler = tmp32;		HX_STACK_VAR(_handler,"_handler");
															HX_STACK_LINE(486)
															++(_g);
															HX_STACK_LINE(486)
															bool tmp33 = (_handler != null());		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(486)
															if ((tmp33)){
																HX_STACK_LINE(486)
																::phoenix::Transform tmp34 = _this1;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(486)
																_handler(tmp34).Cast< Void >();
															}
														}
													}
													HX_STACK_LINE(486)
													_this1->dirty;
												}
												HX_STACK_LINE(486)
												_this1->_cleaning = false;
												HX_STACK_LINE(486)
												bool tmp24 = (_this1->_clean_handlers != null());		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(486)
												bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(486)
												if ((tmp24)){
													HX_STACK_LINE(486)
													int tmp26 = _this1->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(486)
													int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(486)
													tmp25 = (tmp27 > (int)0);
												}
												else{
													HX_STACK_LINE(486)
													tmp25 = false;
												}
												HX_STACK_LINE(486)
												if ((tmp25)){
													HX_STACK_LINE(486)
													int _g = (int)0;		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(486)
													cpp::ArrayBase _g1 = _this1->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(486)
													while((true)){
														HX_STACK_LINE(486)
														bool tmp26 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(486)
														bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(486)
														if ((tmp27)){
															HX_STACK_LINE(486)
															break;
														}
														HX_STACK_LINE(486)
														Dynamic tmp28 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(486)
														Dynamic _handler = tmp28;		HX_STACK_VAR(_handler,"_handler");
														HX_STACK_LINE(486)
														++(_g);
														HX_STACK_LINE(486)
														bool tmp29 = (_handler != null());		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(486)
														if ((tmp29)){
															HX_STACK_LINE(486)
															::phoenix::Transform tmp30 = _this1;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(486)
															_handler(tmp30).Cast< Void >();
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(486)
									bool tmp20 = _this->dirty;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(486)
									bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(486)
									if ((tmp20)){
										HX_STACK_LINE(486)
										bool tmp22 = _this->_cleaning;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(486)
										bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(486)
										tmp21 = !(tmp23);
									}
									else{
										HX_STACK_LINE(486)
										tmp21 = false;
									}
									HX_STACK_LINE(486)
									if ((tmp21)){
										HX_STACK_LINE(486)
										bool tmp22 = _this->dirty;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(486)
										bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(486)
										if ((tmp23)){
											HX_STACK_LINE(486)
											Dynamic();
										}
										else{
											HX_STACK_LINE(486)
											_this->_cleaning = true;
											HX_STACK_LINE(486)
											{
												HX_STACK_LINE(486)
												::phoenix::Matrix _this1 = _this->_pos_matrix;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
													HX_STACK_LINE(486)
													e[(int)0] = (int)1;
													HX_STACK_LINE(486)
													e[(int)4] = (int)0;
													HX_STACK_LINE(486)
													e[(int)8] = (int)0;
													HX_STACK_LINE(486)
													::phoenix::Vector tmp24 = _this->local->pos;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(486)
													Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(486)
													e[(int)12] = tmp25;
													HX_STACK_LINE(486)
													e[(int)1] = (int)0;
													HX_STACK_LINE(486)
													e[(int)5] = (int)1;
													HX_STACK_LINE(486)
													e[(int)9] = (int)0;
													HX_STACK_LINE(486)
													::phoenix::Vector tmp26 = _this->local->pos;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(486)
													Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(486)
													e[(int)13] = tmp27;
													HX_STACK_LINE(486)
													e[(int)2] = (int)0;
													HX_STACK_LINE(486)
													e[(int)6] = (int)0;
													HX_STACK_LINE(486)
													e[(int)10] = (int)1;
													HX_STACK_LINE(486)
													::phoenix::Vector tmp28 = _this->local->pos;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(486)
													Float tmp29 = tmp28->z;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(486)
													e[(int)14] = tmp29;
													HX_STACK_LINE(486)
													e[(int)3] = (int)0;
													HX_STACK_LINE(486)
													e[(int)7] = (int)0;
													HX_STACK_LINE(486)
													e[(int)11] = (int)0;
													HX_STACK_LINE(486)
													e[(int)15] = (int)1;
													HX_STACK_LINE(486)
													_this1;
												}
												HX_STACK_LINE(486)
												_this1;
											}
											HX_STACK_LINE(486)
											{
												HX_STACK_LINE(486)
												::phoenix::Matrix _this1 = _this->_rotation_matrix;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(486)
												::phoenix::Quaternion tmp24 = _this->local->rotation;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(486)
												::phoenix::Quaternion q = tmp24;		HX_STACK_VAR(q,"q");
												HX_STACK_LINE(486)
												Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(486)
												Float tmp25 = (q->x + q->x);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(486)
												Float x2 = tmp25;		HX_STACK_VAR(x2,"x2");
												HX_STACK_LINE(486)
												Float tmp26 = (q->y + q->y);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(486)
												Float y2 = tmp26;		HX_STACK_VAR(y2,"y2");
												HX_STACK_LINE(486)
												Float tmp27 = (q->z + q->z);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(486)
												Float z2 = tmp27;		HX_STACK_VAR(z2,"z2");
												HX_STACK_LINE(486)
												Float tmp28 = (q->x * x2);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(486)
												Float xx = tmp28;		HX_STACK_VAR(xx,"xx");
												HX_STACK_LINE(486)
												Float tmp29 = (q->x * y2);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(486)
												Float xy = tmp29;		HX_STACK_VAR(xy,"xy");
												HX_STACK_LINE(486)
												Float tmp30 = (q->x * z2);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(486)
												Float xz = tmp30;		HX_STACK_VAR(xz,"xz");
												HX_STACK_LINE(486)
												Float tmp31 = (q->y * y2);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(486)
												Float yy = tmp31;		HX_STACK_VAR(yy,"yy");
												HX_STACK_LINE(486)
												Float tmp32 = (q->y * z2);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(486)
												Float yz = tmp32;		HX_STACK_VAR(yz,"yz");
												HX_STACK_LINE(486)
												Float tmp33 = (q->z * z2);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(486)
												Float zz = tmp33;		HX_STACK_VAR(zz,"zz");
												HX_STACK_LINE(486)
												Float tmp34 = (q->w * x2);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(486)
												Float wx = tmp34;		HX_STACK_VAR(wx,"wx");
												HX_STACK_LINE(486)
												Float tmp35 = (q->w * y2);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(486)
												Float wy = tmp35;		HX_STACK_VAR(wy,"wy");
												HX_STACK_LINE(486)
												Float tmp36 = (q->w * z2);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(486)
												Float wz = tmp36;		HX_STACK_VAR(wz,"wz");
												HX_STACK_LINE(486)
												Float tmp37 = (yy + zz);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(486)
												Float tmp38 = ((int)1 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(486)
												te[(int)0] = tmp38;
												HX_STACK_LINE(486)
												Float tmp39 = (xy - wz);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(486)
												te[(int)4] = tmp39;
												HX_STACK_LINE(486)
												Float tmp40 = (xz + wy);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(486)
												te[(int)8] = tmp40;
												HX_STACK_LINE(486)
												Float tmp41 = (xy + wz);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(486)
												te[(int)1] = tmp41;
												HX_STACK_LINE(486)
												Float tmp42 = (xx + zz);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(486)
												Float tmp43 = ((int)1 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(486)
												te[(int)5] = tmp43;
												HX_STACK_LINE(486)
												Float tmp44 = (yz - wx);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(486)
												te[(int)9] = tmp44;
												HX_STACK_LINE(486)
												Float tmp45 = (xz - wy);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(486)
												te[(int)2] = tmp45;
												HX_STACK_LINE(486)
												Float tmp46 = (yz + wx);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(486)
												te[(int)6] = tmp46;
												HX_STACK_LINE(486)
												Float tmp47 = (xx + yy);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(486)
												Float tmp48 = ((int)1 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(486)
												te[(int)10] = tmp48;
												HX_STACK_LINE(486)
												te[(int)3] = (int)0;
												HX_STACK_LINE(486)
												te[(int)7] = (int)0;
												HX_STACK_LINE(486)
												te[(int)11] = (int)0;
												HX_STACK_LINE(486)
												te[(int)12] = (int)0;
												HX_STACK_LINE(486)
												te[(int)13] = (int)0;
												HX_STACK_LINE(486)
												te[(int)14] = (int)0;
												HX_STACK_LINE(486)
												te[(int)15] = (int)1;
												HX_STACK_LINE(486)
												_this1;
											}
											HX_STACK_LINE(486)
											{
												HX_STACK_LINE(486)
												::phoenix::Matrix _this1 = _this->_origin_undo_matrix;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
													HX_STACK_LINE(486)
													e[(int)0] = (int)1;
													HX_STACK_LINE(486)
													e[(int)4] = (int)0;
													HX_STACK_LINE(486)
													e[(int)8] = (int)0;
													HX_STACK_LINE(486)
													Float tmp24 = _this->origin->x;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(486)
													Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(486)
													e[(int)12] = tmp25;
													HX_STACK_LINE(486)
													e[(int)1] = (int)0;
													HX_STACK_LINE(486)
													e[(int)5] = (int)1;
													HX_STACK_LINE(486)
													e[(int)9] = (int)0;
													HX_STACK_LINE(486)
													Float tmp26 = _this->origin->y;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(486)
													Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(486)
													e[(int)13] = tmp27;
													HX_STACK_LINE(486)
													e[(int)2] = (int)0;
													HX_STACK_LINE(486)
													e[(int)6] = (int)0;
													HX_STACK_LINE(486)
													e[(int)10] = (int)1;
													HX_STACK_LINE(486)
													Float tmp28 = _this->origin->z;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(486)
													Float tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(486)
													e[(int)14] = tmp29;
													HX_STACK_LINE(486)
													e[(int)3] = (int)0;
													HX_STACK_LINE(486)
													e[(int)7] = (int)0;
													HX_STACK_LINE(486)
													e[(int)11] = (int)0;
													HX_STACK_LINE(486)
													e[(int)15] = (int)1;
													HX_STACK_LINE(486)
													_this1;
												}
												HX_STACK_LINE(486)
												_this1;
											}
											HX_STACK_LINE(486)
											{
												HX_STACK_LINE(486)
												::phoenix::Matrix tmp24 = _this->local->matrix;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(486)
												::phoenix::Matrix _this1 = tmp24;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
													HX_STACK_LINE(486)
													e[(int)0] = (int)1;
													HX_STACK_LINE(486)
													e[(int)4] = (int)0;
													HX_STACK_LINE(486)
													e[(int)8] = (int)0;
													HX_STACK_LINE(486)
													Float tmp25 = _this->origin->x;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(486)
													e[(int)12] = tmp25;
													HX_STACK_LINE(486)
													e[(int)1] = (int)0;
													HX_STACK_LINE(486)
													e[(int)5] = (int)1;
													HX_STACK_LINE(486)
													e[(int)9] = (int)0;
													HX_STACK_LINE(486)
													Float tmp26 = _this->origin->y;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(486)
													e[(int)13] = tmp26;
													HX_STACK_LINE(486)
													e[(int)2] = (int)0;
													HX_STACK_LINE(486)
													e[(int)6] = (int)0;
													HX_STACK_LINE(486)
													e[(int)10] = (int)1;
													HX_STACK_LINE(486)
													Float tmp27 = _this->origin->z;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(486)
													e[(int)14] = tmp27;
													HX_STACK_LINE(486)
													e[(int)3] = (int)0;
													HX_STACK_LINE(486)
													e[(int)7] = (int)0;
													HX_STACK_LINE(486)
													e[(int)11] = (int)0;
													HX_STACK_LINE(486)
													e[(int)15] = (int)1;
													HX_STACK_LINE(486)
													_this1;
												}
												HX_STACK_LINE(486)
												_this1;
											}
											HX_STACK_LINE(486)
											{
												HX_STACK_LINE(486)
												::phoenix::Matrix tmp24 = _this->local->matrix;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(486)
												::phoenix::Matrix _this1 = tmp24;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
													HX_STACK_LINE(486)
													Array< Float > be = _this->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
													HX_STACK_LINE(486)
													Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(486)
													Float tmp25 = ae->__get((int)0);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(486)
													Float a11 = tmp25;		HX_STACK_VAR(a11,"a11");
													HX_STACK_LINE(486)
													Float tmp26 = ae->__get((int)4);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(486)
													Float a12 = tmp26;		HX_STACK_VAR(a12,"a12");
													HX_STACK_LINE(486)
													Float tmp27 = ae->__get((int)8);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(486)
													Float a13 = tmp27;		HX_STACK_VAR(a13,"a13");
													HX_STACK_LINE(486)
													Float tmp28 = ae->__get((int)12);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(486)
													Float a14 = tmp28;		HX_STACK_VAR(a14,"a14");
													HX_STACK_LINE(486)
													Float tmp29 = ae->__get((int)1);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(486)
													Float a21 = tmp29;		HX_STACK_VAR(a21,"a21");
													HX_STACK_LINE(486)
													Float tmp30 = ae->__get((int)5);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(486)
													Float a22 = tmp30;		HX_STACK_VAR(a22,"a22");
													HX_STACK_LINE(486)
													Float tmp31 = ae->__get((int)9);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(486)
													Float a23 = tmp31;		HX_STACK_VAR(a23,"a23");
													HX_STACK_LINE(486)
													Float tmp32 = ae->__get((int)13);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(486)
													Float a24 = tmp32;		HX_STACK_VAR(a24,"a24");
													HX_STACK_LINE(486)
													Float tmp33 = ae->__get((int)2);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(486)
													Float a31 = tmp33;		HX_STACK_VAR(a31,"a31");
													HX_STACK_LINE(486)
													Float tmp34 = ae->__get((int)6);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(486)
													Float a32 = tmp34;		HX_STACK_VAR(a32,"a32");
													HX_STACK_LINE(486)
													Float tmp35 = ae->__get((int)10);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(486)
													Float a33 = tmp35;		HX_STACK_VAR(a33,"a33");
													HX_STACK_LINE(486)
													Float tmp36 = ae->__get((int)14);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(486)
													Float a34 = tmp36;		HX_STACK_VAR(a34,"a34");
													HX_STACK_LINE(486)
													Float tmp37 = ae->__get((int)3);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(486)
													Float a41 = tmp37;		HX_STACK_VAR(a41,"a41");
													HX_STACK_LINE(486)
													Float tmp38 = ae->__get((int)7);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(486)
													Float a42 = tmp38;		HX_STACK_VAR(a42,"a42");
													HX_STACK_LINE(486)
													Float tmp39 = ae->__get((int)11);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(486)
													Float a43 = tmp39;		HX_STACK_VAR(a43,"a43");
													HX_STACK_LINE(486)
													Float tmp40 = ae->__get((int)15);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(486)
													Float a44 = tmp40;		HX_STACK_VAR(a44,"a44");
													HX_STACK_LINE(486)
													Float tmp41 = be->__get((int)0);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(486)
													Float b11 = tmp41;		HX_STACK_VAR(b11,"b11");
													HX_STACK_LINE(486)
													Float tmp42 = be->__get((int)4);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(486)
													Float b12 = tmp42;		HX_STACK_VAR(b12,"b12");
													HX_STACK_LINE(486)
													Float tmp43 = be->__get((int)8);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(486)
													Float b13 = tmp43;		HX_STACK_VAR(b13,"b13");
													HX_STACK_LINE(486)
													Float tmp44 = be->__get((int)12);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(486)
													Float b14 = tmp44;		HX_STACK_VAR(b14,"b14");
													HX_STACK_LINE(486)
													Float tmp45 = be->__get((int)1);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(486)
													Float b21 = tmp45;		HX_STACK_VAR(b21,"b21");
													HX_STACK_LINE(486)
													Float tmp46 = be->__get((int)5);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(486)
													Float b22 = tmp46;		HX_STACK_VAR(b22,"b22");
													HX_STACK_LINE(486)
													Float tmp47 = be->__get((int)9);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(486)
													Float b23 = tmp47;		HX_STACK_VAR(b23,"b23");
													HX_STACK_LINE(486)
													Float tmp48 = be->__get((int)13);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(486)
													Float b24 = tmp48;		HX_STACK_VAR(b24,"b24");
													HX_STACK_LINE(486)
													Float tmp49 = be->__get((int)2);		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(486)
													Float b31 = tmp49;		HX_STACK_VAR(b31,"b31");
													HX_STACK_LINE(486)
													Float tmp50 = be->__get((int)6);		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(486)
													Float b32 = tmp50;		HX_STACK_VAR(b32,"b32");
													HX_STACK_LINE(486)
													Float tmp51 = be->__get((int)10);		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(486)
													Float b33 = tmp51;		HX_STACK_VAR(b33,"b33");
													HX_STACK_LINE(486)
													Float tmp52 = be->__get((int)14);		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(486)
													Float b34 = tmp52;		HX_STACK_VAR(b34,"b34");
													HX_STACK_LINE(486)
													Float tmp53 = be->__get((int)3);		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(486)
													Float b41 = tmp53;		HX_STACK_VAR(b41,"b41");
													HX_STACK_LINE(486)
													Float tmp54 = be->__get((int)7);		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(486)
													Float b42 = tmp54;		HX_STACK_VAR(b42,"b42");
													HX_STACK_LINE(486)
													Float tmp55 = be->__get((int)11);		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(486)
													Float b43 = tmp55;		HX_STACK_VAR(b43,"b43");
													HX_STACK_LINE(486)
													Float tmp56 = be->__get((int)15);		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(486)
													Float b44 = tmp56;		HX_STACK_VAR(b44,"b44");
													HX_STACK_LINE(486)
													Float tmp57 = (a11 * b11);		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(486)
													Float tmp58 = (a12 * b21);		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(486)
													Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(486)
													Float tmp60 = (a13 * b31);		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(486)
													Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(486)
													Float tmp62 = (a14 * b41);		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(486)
													Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(486)
													te[(int)0] = tmp63;
													HX_STACK_LINE(486)
													Float tmp64 = (a11 * b12);		HX_STACK_VAR(tmp64,"tmp64");
													HX_STACK_LINE(486)
													Float tmp65 = (a12 * b22);		HX_STACK_VAR(tmp65,"tmp65");
													HX_STACK_LINE(486)
													Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
													HX_STACK_LINE(486)
													Float tmp67 = (a13 * b32);		HX_STACK_VAR(tmp67,"tmp67");
													HX_STACK_LINE(486)
													Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
													HX_STACK_LINE(486)
													Float tmp69 = (a14 * b42);		HX_STACK_VAR(tmp69,"tmp69");
													HX_STACK_LINE(486)
													Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
													HX_STACK_LINE(486)
													te[(int)4] = tmp70;
													HX_STACK_LINE(486)
													Float tmp71 = (a11 * b13);		HX_STACK_VAR(tmp71,"tmp71");
													HX_STACK_LINE(486)
													Float tmp72 = (a12 * b23);		HX_STACK_VAR(tmp72,"tmp72");
													HX_STACK_LINE(486)
													Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
													HX_STACK_LINE(486)
													Float tmp74 = (a13 * b33);		HX_STACK_VAR(tmp74,"tmp74");
													HX_STACK_LINE(486)
													Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
													HX_STACK_LINE(486)
													Float tmp76 = (a14 * b43);		HX_STACK_VAR(tmp76,"tmp76");
													HX_STACK_LINE(486)
													Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
													HX_STACK_LINE(486)
													te[(int)8] = tmp77;
													HX_STACK_LINE(486)
													Float tmp78 = (a11 * b14);		HX_STACK_VAR(tmp78,"tmp78");
													HX_STACK_LINE(486)
													Float tmp79 = (a12 * b24);		HX_STACK_VAR(tmp79,"tmp79");
													HX_STACK_LINE(486)
													Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
													HX_STACK_LINE(486)
													Float tmp81 = (a13 * b34);		HX_STACK_VAR(tmp81,"tmp81");
													HX_STACK_LINE(486)
													Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
													HX_STACK_LINE(486)
													Float tmp83 = (a14 * b44);		HX_STACK_VAR(tmp83,"tmp83");
													HX_STACK_LINE(486)
													Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
													HX_STACK_LINE(486)
													te[(int)12] = tmp84;
													HX_STACK_LINE(486)
													Float tmp85 = (a21 * b11);		HX_STACK_VAR(tmp85,"tmp85");
													HX_STACK_LINE(486)
													Float tmp86 = (a22 * b21);		HX_STACK_VAR(tmp86,"tmp86");
													HX_STACK_LINE(486)
													Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
													HX_STACK_LINE(486)
													Float tmp88 = (a23 * b31);		HX_STACK_VAR(tmp88,"tmp88");
													HX_STACK_LINE(486)
													Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
													HX_STACK_LINE(486)
													Float tmp90 = (a24 * b41);		HX_STACK_VAR(tmp90,"tmp90");
													HX_STACK_LINE(486)
													Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
													HX_STACK_LINE(486)
													te[(int)1] = tmp91;
													HX_STACK_LINE(486)
													Float tmp92 = (a21 * b12);		HX_STACK_VAR(tmp92,"tmp92");
													HX_STACK_LINE(486)
													Float tmp93 = (a22 * b22);		HX_STACK_VAR(tmp93,"tmp93");
													HX_STACK_LINE(486)
													Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
													HX_STACK_LINE(486)
													Float tmp95 = (a23 * b32);		HX_STACK_VAR(tmp95,"tmp95");
													HX_STACK_LINE(486)
													Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
													HX_STACK_LINE(486)
													Float tmp97 = (a24 * b42);		HX_STACK_VAR(tmp97,"tmp97");
													HX_STACK_LINE(486)
													Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
													HX_STACK_LINE(486)
													te[(int)5] = tmp98;
													HX_STACK_LINE(486)
													Float tmp99 = (a21 * b13);		HX_STACK_VAR(tmp99,"tmp99");
													HX_STACK_LINE(486)
													Float tmp100 = (a22 * b23);		HX_STACK_VAR(tmp100,"tmp100");
													HX_STACK_LINE(486)
													Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
													HX_STACK_LINE(486)
													Float tmp102 = (a23 * b33);		HX_STACK_VAR(tmp102,"tmp102");
													HX_STACK_LINE(486)
													Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
													HX_STACK_LINE(486)
													Float tmp104 = (a24 * b43);		HX_STACK_VAR(tmp104,"tmp104");
													HX_STACK_LINE(486)
													Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
													HX_STACK_LINE(486)
													te[(int)9] = tmp105;
													HX_STACK_LINE(486)
													Float tmp106 = (a21 * b14);		HX_STACK_VAR(tmp106,"tmp106");
													HX_STACK_LINE(486)
													Float tmp107 = (a22 * b24);		HX_STACK_VAR(tmp107,"tmp107");
													HX_STACK_LINE(486)
													Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
													HX_STACK_LINE(486)
													Float tmp109 = (a23 * b34);		HX_STACK_VAR(tmp109,"tmp109");
													HX_STACK_LINE(486)
													Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
													HX_STACK_LINE(486)
													Float tmp111 = (a24 * b44);		HX_STACK_VAR(tmp111,"tmp111");
													HX_STACK_LINE(486)
													Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
													HX_STACK_LINE(486)
													te[(int)13] = tmp112;
													HX_STACK_LINE(486)
													Float tmp113 = (a31 * b11);		HX_STACK_VAR(tmp113,"tmp113");
													HX_STACK_LINE(486)
													Float tmp114 = (a32 * b21);		HX_STACK_VAR(tmp114,"tmp114");
													HX_STACK_LINE(486)
													Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
													HX_STACK_LINE(486)
													Float tmp116 = (a33 * b31);		HX_STACK_VAR(tmp116,"tmp116");
													HX_STACK_LINE(486)
													Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
													HX_STACK_LINE(486)
													Float tmp118 = (a34 * b41);		HX_STACK_VAR(tmp118,"tmp118");
													HX_STACK_LINE(486)
													Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
													HX_STACK_LINE(486)
													te[(int)2] = tmp119;
													HX_STACK_LINE(486)
													Float tmp120 = (a31 * b12);		HX_STACK_VAR(tmp120,"tmp120");
													HX_STACK_LINE(486)
													Float tmp121 = (a32 * b22);		HX_STACK_VAR(tmp121,"tmp121");
													HX_STACK_LINE(486)
													Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
													HX_STACK_LINE(486)
													Float tmp123 = (a33 * b32);		HX_STACK_VAR(tmp123,"tmp123");
													HX_STACK_LINE(486)
													Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
													HX_STACK_LINE(486)
													Float tmp125 = (a34 * b42);		HX_STACK_VAR(tmp125,"tmp125");
													HX_STACK_LINE(486)
													Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
													HX_STACK_LINE(486)
													te[(int)6] = tmp126;
													HX_STACK_LINE(486)
													Float tmp127 = (a31 * b13);		HX_STACK_VAR(tmp127,"tmp127");
													HX_STACK_LINE(486)
													Float tmp128 = (a32 * b23);		HX_STACK_VAR(tmp128,"tmp128");
													HX_STACK_LINE(486)
													Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
													HX_STACK_LINE(486)
													Float tmp130 = (a33 * b33);		HX_STACK_VAR(tmp130,"tmp130");
													HX_STACK_LINE(486)
													Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
													HX_STACK_LINE(486)
													Float tmp132 = (a34 * b43);		HX_STACK_VAR(tmp132,"tmp132");
													HX_STACK_LINE(486)
													Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
													HX_STACK_LINE(486)
													te[(int)10] = tmp133;
													HX_STACK_LINE(486)
													Float tmp134 = (a31 * b14);		HX_STACK_VAR(tmp134,"tmp134");
													HX_STACK_LINE(486)
													Float tmp135 = (a32 * b24);		HX_STACK_VAR(tmp135,"tmp135");
													HX_STACK_LINE(486)
													Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
													HX_STACK_LINE(486)
													Float tmp137 = (a33 * b34);		HX_STACK_VAR(tmp137,"tmp137");
													HX_STACK_LINE(486)
													Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
													HX_STACK_LINE(486)
													Float tmp139 = (a34 * b44);		HX_STACK_VAR(tmp139,"tmp139");
													HX_STACK_LINE(486)
													Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
													HX_STACK_LINE(486)
													te[(int)14] = tmp140;
													HX_STACK_LINE(486)
													Float tmp141 = (a41 * b11);		HX_STACK_VAR(tmp141,"tmp141");
													HX_STACK_LINE(486)
													Float tmp142 = (a42 * b21);		HX_STACK_VAR(tmp142,"tmp142");
													HX_STACK_LINE(486)
													Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
													HX_STACK_LINE(486)
													Float tmp144 = (a43 * b31);		HX_STACK_VAR(tmp144,"tmp144");
													HX_STACK_LINE(486)
													Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
													HX_STACK_LINE(486)
													Float tmp146 = (a44 * b41);		HX_STACK_VAR(tmp146,"tmp146");
													HX_STACK_LINE(486)
													Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
													HX_STACK_LINE(486)
													te[(int)3] = tmp147;
													HX_STACK_LINE(486)
													Float tmp148 = (a41 * b12);		HX_STACK_VAR(tmp148,"tmp148");
													HX_STACK_LINE(486)
													Float tmp149 = (a42 * b22);		HX_STACK_VAR(tmp149,"tmp149");
													HX_STACK_LINE(486)
													Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
													HX_STACK_LINE(486)
													Float tmp151 = (a43 * b32);		HX_STACK_VAR(tmp151,"tmp151");
													HX_STACK_LINE(486)
													Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
													HX_STACK_LINE(486)
													Float tmp153 = (a44 * b42);		HX_STACK_VAR(tmp153,"tmp153");
													HX_STACK_LINE(486)
													Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
													HX_STACK_LINE(486)
													te[(int)7] = tmp154;
													HX_STACK_LINE(486)
													Float tmp155 = (a41 * b13);		HX_STACK_VAR(tmp155,"tmp155");
													HX_STACK_LINE(486)
													Float tmp156 = (a42 * b23);		HX_STACK_VAR(tmp156,"tmp156");
													HX_STACK_LINE(486)
													Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
													HX_STACK_LINE(486)
													Float tmp158 = (a43 * b33);		HX_STACK_VAR(tmp158,"tmp158");
													HX_STACK_LINE(486)
													Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
													HX_STACK_LINE(486)
													Float tmp160 = (a44 * b43);		HX_STACK_VAR(tmp160,"tmp160");
													HX_STACK_LINE(486)
													Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
													HX_STACK_LINE(486)
													te[(int)11] = tmp161;
													HX_STACK_LINE(486)
													Float tmp162 = (a41 * b14);		HX_STACK_VAR(tmp162,"tmp162");
													HX_STACK_LINE(486)
													Float tmp163 = (a42 * b24);		HX_STACK_VAR(tmp163,"tmp163");
													HX_STACK_LINE(486)
													Float tmp164 = (tmp162 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
													HX_STACK_LINE(486)
													Float tmp165 = (a43 * b34);		HX_STACK_VAR(tmp165,"tmp165");
													HX_STACK_LINE(486)
													Float tmp166 = (tmp164 + tmp165);		HX_STACK_VAR(tmp166,"tmp166");
													HX_STACK_LINE(486)
													Float tmp167 = (a44 * b44);		HX_STACK_VAR(tmp167,"tmp167");
													HX_STACK_LINE(486)
													Float tmp168 = (tmp166 + tmp167);		HX_STACK_VAR(tmp168,"tmp168");
													HX_STACK_LINE(486)
													te[(int)15] = tmp168;
													HX_STACK_LINE(486)
													_this1;
												}
											}
											HX_STACK_LINE(486)
											{
												HX_STACK_LINE(486)
												::phoenix::Matrix tmp24 = _this->local->matrix;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(486)
												::phoenix::Matrix _this1 = tmp24;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(486)
												::phoenix::Vector tmp25 = _this->local->scale;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(486)
												::phoenix::Vector _v = tmp25;		HX_STACK_VAR(_v,"_v");
												HX_STACK_LINE(486)
												Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(486)
												Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
												HX_STACK_LINE(486)
												Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
												HX_STACK_LINE(486)
												Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
												HX_STACK_LINE(486)
												Float tmp26 = _x;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(486)
												hx::MultEq(te[(int)0],tmp26);
												HX_STACK_LINE(486)
												Float tmp27 = _y;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(486)
												hx::MultEq(te[(int)4],tmp27);
												HX_STACK_LINE(486)
												Float tmp28 = _z;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(486)
												hx::MultEq(te[(int)8],tmp28);
												HX_STACK_LINE(486)
												Float tmp29 = _x;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(486)
												hx::MultEq(te[(int)1],tmp29);
												HX_STACK_LINE(486)
												Float tmp30 = _y;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(486)
												hx::MultEq(te[(int)5],tmp30);
												HX_STACK_LINE(486)
												Float tmp31 = _z;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(486)
												hx::MultEq(te[(int)9],tmp31);
												HX_STACK_LINE(486)
												Float tmp32 = _x;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(486)
												hx::MultEq(te[(int)2],tmp32);
												HX_STACK_LINE(486)
												Float tmp33 = _y;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(486)
												hx::MultEq(te[(int)6],tmp33);
												HX_STACK_LINE(486)
												Float tmp34 = _z;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(486)
												hx::MultEq(te[(int)10],tmp34);
												HX_STACK_LINE(486)
												Float tmp35 = _x;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(486)
												hx::MultEq(te[(int)3],tmp35);
												HX_STACK_LINE(486)
												Float tmp36 = _y;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(486)
												hx::MultEq(te[(int)7],tmp36);
												HX_STACK_LINE(486)
												Float tmp37 = _z;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(486)
												hx::MultEq(te[(int)11],tmp37);
												HX_STACK_LINE(486)
												_this1;
											}
											HX_STACK_LINE(486)
											{
												HX_STACK_LINE(486)
												::phoenix::Matrix tmp24 = _this->local->matrix;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(486)
												::phoenix::Matrix _this1 = tmp24;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(486)
												::phoenix::Vector tmp25 = _this->local->pos;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(486)
												::phoenix::Vector _v = tmp25;		HX_STACK_VAR(_v,"_v");
												HX_STACK_LINE(486)
												Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(486)
												Float tmp26 = _v->x;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(486)
												te[(int)12] = tmp26;
												HX_STACK_LINE(486)
												Float tmp27 = _v->y;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(486)
												te[(int)13] = tmp27;
												HX_STACK_LINE(486)
												Float tmp28 = _v->z;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(486)
												te[(int)14] = tmp28;
												HX_STACK_LINE(486)
												_this1;
											}
											HX_STACK_LINE(486)
											{
												HX_STACK_LINE(486)
												::phoenix::Matrix tmp24 = _this->local->matrix;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(486)
												::phoenix::Matrix _this1 = tmp24;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
													HX_STACK_LINE(486)
													Array< Float > be = _this->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
													HX_STACK_LINE(486)
													Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(486)
													Float tmp25 = ae->__get((int)0);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(486)
													Float a11 = tmp25;		HX_STACK_VAR(a11,"a11");
													HX_STACK_LINE(486)
													Float tmp26 = ae->__get((int)4);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(486)
													Float a12 = tmp26;		HX_STACK_VAR(a12,"a12");
													HX_STACK_LINE(486)
													Float tmp27 = ae->__get((int)8);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(486)
													Float a13 = tmp27;		HX_STACK_VAR(a13,"a13");
													HX_STACK_LINE(486)
													Float tmp28 = ae->__get((int)12);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(486)
													Float a14 = tmp28;		HX_STACK_VAR(a14,"a14");
													HX_STACK_LINE(486)
													Float tmp29 = ae->__get((int)1);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(486)
													Float a21 = tmp29;		HX_STACK_VAR(a21,"a21");
													HX_STACK_LINE(486)
													Float tmp30 = ae->__get((int)5);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(486)
													Float a22 = tmp30;		HX_STACK_VAR(a22,"a22");
													HX_STACK_LINE(486)
													Float tmp31 = ae->__get((int)9);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(486)
													Float a23 = tmp31;		HX_STACK_VAR(a23,"a23");
													HX_STACK_LINE(486)
													Float tmp32 = ae->__get((int)13);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(486)
													Float a24 = tmp32;		HX_STACK_VAR(a24,"a24");
													HX_STACK_LINE(486)
													Float tmp33 = ae->__get((int)2);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(486)
													Float a31 = tmp33;		HX_STACK_VAR(a31,"a31");
													HX_STACK_LINE(486)
													Float tmp34 = ae->__get((int)6);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(486)
													Float a32 = tmp34;		HX_STACK_VAR(a32,"a32");
													HX_STACK_LINE(486)
													Float tmp35 = ae->__get((int)10);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(486)
													Float a33 = tmp35;		HX_STACK_VAR(a33,"a33");
													HX_STACK_LINE(486)
													Float tmp36 = ae->__get((int)14);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(486)
													Float a34 = tmp36;		HX_STACK_VAR(a34,"a34");
													HX_STACK_LINE(486)
													Float tmp37 = ae->__get((int)3);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(486)
													Float a41 = tmp37;		HX_STACK_VAR(a41,"a41");
													HX_STACK_LINE(486)
													Float tmp38 = ae->__get((int)7);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(486)
													Float a42 = tmp38;		HX_STACK_VAR(a42,"a42");
													HX_STACK_LINE(486)
													Float tmp39 = ae->__get((int)11);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(486)
													Float a43 = tmp39;		HX_STACK_VAR(a43,"a43");
													HX_STACK_LINE(486)
													Float tmp40 = ae->__get((int)15);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(486)
													Float a44 = tmp40;		HX_STACK_VAR(a44,"a44");
													HX_STACK_LINE(486)
													Float tmp41 = be->__get((int)0);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(486)
													Float b11 = tmp41;		HX_STACK_VAR(b11,"b11");
													HX_STACK_LINE(486)
													Float tmp42 = be->__get((int)4);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(486)
													Float b12 = tmp42;		HX_STACK_VAR(b12,"b12");
													HX_STACK_LINE(486)
													Float tmp43 = be->__get((int)8);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(486)
													Float b13 = tmp43;		HX_STACK_VAR(b13,"b13");
													HX_STACK_LINE(486)
													Float tmp44 = be->__get((int)12);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(486)
													Float b14 = tmp44;		HX_STACK_VAR(b14,"b14");
													HX_STACK_LINE(486)
													Float tmp45 = be->__get((int)1);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(486)
													Float b21 = tmp45;		HX_STACK_VAR(b21,"b21");
													HX_STACK_LINE(486)
													Float tmp46 = be->__get((int)5);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(486)
													Float b22 = tmp46;		HX_STACK_VAR(b22,"b22");
													HX_STACK_LINE(486)
													Float tmp47 = be->__get((int)9);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(486)
													Float b23 = tmp47;		HX_STACK_VAR(b23,"b23");
													HX_STACK_LINE(486)
													Float tmp48 = be->__get((int)13);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(486)
													Float b24 = tmp48;		HX_STACK_VAR(b24,"b24");
													HX_STACK_LINE(486)
													Float tmp49 = be->__get((int)2);		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(486)
													Float b31 = tmp49;		HX_STACK_VAR(b31,"b31");
													HX_STACK_LINE(486)
													Float tmp50 = be->__get((int)6);		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(486)
													Float b32 = tmp50;		HX_STACK_VAR(b32,"b32");
													HX_STACK_LINE(486)
													Float tmp51 = be->__get((int)10);		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(486)
													Float b33 = tmp51;		HX_STACK_VAR(b33,"b33");
													HX_STACK_LINE(486)
													Float tmp52 = be->__get((int)14);		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(486)
													Float b34 = tmp52;		HX_STACK_VAR(b34,"b34");
													HX_STACK_LINE(486)
													Float tmp53 = be->__get((int)3);		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(486)
													Float b41 = tmp53;		HX_STACK_VAR(b41,"b41");
													HX_STACK_LINE(486)
													Float tmp54 = be->__get((int)7);		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(486)
													Float b42 = tmp54;		HX_STACK_VAR(b42,"b42");
													HX_STACK_LINE(486)
													Float tmp55 = be->__get((int)11);		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(486)
													Float b43 = tmp55;		HX_STACK_VAR(b43,"b43");
													HX_STACK_LINE(486)
													Float tmp56 = be->__get((int)15);		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(486)
													Float b44 = tmp56;		HX_STACK_VAR(b44,"b44");
													HX_STACK_LINE(486)
													Float tmp57 = (a11 * b11);		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(486)
													Float tmp58 = (a12 * b21);		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(486)
													Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(486)
													Float tmp60 = (a13 * b31);		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(486)
													Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(486)
													Float tmp62 = (a14 * b41);		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(486)
													Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(486)
													te[(int)0] = tmp63;
													HX_STACK_LINE(486)
													Float tmp64 = (a11 * b12);		HX_STACK_VAR(tmp64,"tmp64");
													HX_STACK_LINE(486)
													Float tmp65 = (a12 * b22);		HX_STACK_VAR(tmp65,"tmp65");
													HX_STACK_LINE(486)
													Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
													HX_STACK_LINE(486)
													Float tmp67 = (a13 * b32);		HX_STACK_VAR(tmp67,"tmp67");
													HX_STACK_LINE(486)
													Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
													HX_STACK_LINE(486)
													Float tmp69 = (a14 * b42);		HX_STACK_VAR(tmp69,"tmp69");
													HX_STACK_LINE(486)
													Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
													HX_STACK_LINE(486)
													te[(int)4] = tmp70;
													HX_STACK_LINE(486)
													Float tmp71 = (a11 * b13);		HX_STACK_VAR(tmp71,"tmp71");
													HX_STACK_LINE(486)
													Float tmp72 = (a12 * b23);		HX_STACK_VAR(tmp72,"tmp72");
													HX_STACK_LINE(486)
													Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
													HX_STACK_LINE(486)
													Float tmp74 = (a13 * b33);		HX_STACK_VAR(tmp74,"tmp74");
													HX_STACK_LINE(486)
													Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
													HX_STACK_LINE(486)
													Float tmp76 = (a14 * b43);		HX_STACK_VAR(tmp76,"tmp76");
													HX_STACK_LINE(486)
													Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
													HX_STACK_LINE(486)
													te[(int)8] = tmp77;
													HX_STACK_LINE(486)
													Float tmp78 = (a11 * b14);		HX_STACK_VAR(tmp78,"tmp78");
													HX_STACK_LINE(486)
													Float tmp79 = (a12 * b24);		HX_STACK_VAR(tmp79,"tmp79");
													HX_STACK_LINE(486)
													Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
													HX_STACK_LINE(486)
													Float tmp81 = (a13 * b34);		HX_STACK_VAR(tmp81,"tmp81");
													HX_STACK_LINE(486)
													Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
													HX_STACK_LINE(486)
													Float tmp83 = (a14 * b44);		HX_STACK_VAR(tmp83,"tmp83");
													HX_STACK_LINE(486)
													Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
													HX_STACK_LINE(486)
													te[(int)12] = tmp84;
													HX_STACK_LINE(486)
													Float tmp85 = (a21 * b11);		HX_STACK_VAR(tmp85,"tmp85");
													HX_STACK_LINE(486)
													Float tmp86 = (a22 * b21);		HX_STACK_VAR(tmp86,"tmp86");
													HX_STACK_LINE(486)
													Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
													HX_STACK_LINE(486)
													Float tmp88 = (a23 * b31);		HX_STACK_VAR(tmp88,"tmp88");
													HX_STACK_LINE(486)
													Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
													HX_STACK_LINE(486)
													Float tmp90 = (a24 * b41);		HX_STACK_VAR(tmp90,"tmp90");
													HX_STACK_LINE(486)
													Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
													HX_STACK_LINE(486)
													te[(int)1] = tmp91;
													HX_STACK_LINE(486)
													Float tmp92 = (a21 * b12);		HX_STACK_VAR(tmp92,"tmp92");
													HX_STACK_LINE(486)
													Float tmp93 = (a22 * b22);		HX_STACK_VAR(tmp93,"tmp93");
													HX_STACK_LINE(486)
													Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
													HX_STACK_LINE(486)
													Float tmp95 = (a23 * b32);		HX_STACK_VAR(tmp95,"tmp95");
													HX_STACK_LINE(486)
													Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
													HX_STACK_LINE(486)
													Float tmp97 = (a24 * b42);		HX_STACK_VAR(tmp97,"tmp97");
													HX_STACK_LINE(486)
													Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
													HX_STACK_LINE(486)
													te[(int)5] = tmp98;
													HX_STACK_LINE(486)
													Float tmp99 = (a21 * b13);		HX_STACK_VAR(tmp99,"tmp99");
													HX_STACK_LINE(486)
													Float tmp100 = (a22 * b23);		HX_STACK_VAR(tmp100,"tmp100");
													HX_STACK_LINE(486)
													Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
													HX_STACK_LINE(486)
													Float tmp102 = (a23 * b33);		HX_STACK_VAR(tmp102,"tmp102");
													HX_STACK_LINE(486)
													Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
													HX_STACK_LINE(486)
													Float tmp104 = (a24 * b43);		HX_STACK_VAR(tmp104,"tmp104");
													HX_STACK_LINE(486)
													Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
													HX_STACK_LINE(486)
													te[(int)9] = tmp105;
													HX_STACK_LINE(486)
													Float tmp106 = (a21 * b14);		HX_STACK_VAR(tmp106,"tmp106");
													HX_STACK_LINE(486)
													Float tmp107 = (a22 * b24);		HX_STACK_VAR(tmp107,"tmp107");
													HX_STACK_LINE(486)
													Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
													HX_STACK_LINE(486)
													Float tmp109 = (a23 * b34);		HX_STACK_VAR(tmp109,"tmp109");
													HX_STACK_LINE(486)
													Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
													HX_STACK_LINE(486)
													Float tmp111 = (a24 * b44);		HX_STACK_VAR(tmp111,"tmp111");
													HX_STACK_LINE(486)
													Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
													HX_STACK_LINE(486)
													te[(int)13] = tmp112;
													HX_STACK_LINE(486)
													Float tmp113 = (a31 * b11);		HX_STACK_VAR(tmp113,"tmp113");
													HX_STACK_LINE(486)
													Float tmp114 = (a32 * b21);		HX_STACK_VAR(tmp114,"tmp114");
													HX_STACK_LINE(486)
													Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
													HX_STACK_LINE(486)
													Float tmp116 = (a33 * b31);		HX_STACK_VAR(tmp116,"tmp116");
													HX_STACK_LINE(486)
													Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
													HX_STACK_LINE(486)
													Float tmp118 = (a34 * b41);		HX_STACK_VAR(tmp118,"tmp118");
													HX_STACK_LINE(486)
													Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
													HX_STACK_LINE(486)
													te[(int)2] = tmp119;
													HX_STACK_LINE(486)
													Float tmp120 = (a31 * b12);		HX_STACK_VAR(tmp120,"tmp120");
													HX_STACK_LINE(486)
													Float tmp121 = (a32 * b22);		HX_STACK_VAR(tmp121,"tmp121");
													HX_STACK_LINE(486)
													Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
													HX_STACK_LINE(486)
													Float tmp123 = (a33 * b32);		HX_STACK_VAR(tmp123,"tmp123");
													HX_STACK_LINE(486)
													Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
													HX_STACK_LINE(486)
													Float tmp125 = (a34 * b42);		HX_STACK_VAR(tmp125,"tmp125");
													HX_STACK_LINE(486)
													Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
													HX_STACK_LINE(486)
													te[(int)6] = tmp126;
													HX_STACK_LINE(486)
													Float tmp127 = (a31 * b13);		HX_STACK_VAR(tmp127,"tmp127");
													HX_STACK_LINE(486)
													Float tmp128 = (a32 * b23);		HX_STACK_VAR(tmp128,"tmp128");
													HX_STACK_LINE(486)
													Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
													HX_STACK_LINE(486)
													Float tmp130 = (a33 * b33);		HX_STACK_VAR(tmp130,"tmp130");
													HX_STACK_LINE(486)
													Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
													HX_STACK_LINE(486)
													Float tmp132 = (a34 * b43);		HX_STACK_VAR(tmp132,"tmp132");
													HX_STACK_LINE(486)
													Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
													HX_STACK_LINE(486)
													te[(int)10] = tmp133;
													HX_STACK_LINE(486)
													Float tmp134 = (a31 * b14);		HX_STACK_VAR(tmp134,"tmp134");
													HX_STACK_LINE(486)
													Float tmp135 = (a32 * b24);		HX_STACK_VAR(tmp135,"tmp135");
													HX_STACK_LINE(486)
													Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
													HX_STACK_LINE(486)
													Float tmp137 = (a33 * b34);		HX_STACK_VAR(tmp137,"tmp137");
													HX_STACK_LINE(486)
													Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
													HX_STACK_LINE(486)
													Float tmp139 = (a34 * b44);		HX_STACK_VAR(tmp139,"tmp139");
													HX_STACK_LINE(486)
													Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
													HX_STACK_LINE(486)
													te[(int)14] = tmp140;
													HX_STACK_LINE(486)
													Float tmp141 = (a41 * b11);		HX_STACK_VAR(tmp141,"tmp141");
													HX_STACK_LINE(486)
													Float tmp142 = (a42 * b21);		HX_STACK_VAR(tmp142,"tmp142");
													HX_STACK_LINE(486)
													Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
													HX_STACK_LINE(486)
													Float tmp144 = (a43 * b31);		HX_STACK_VAR(tmp144,"tmp144");
													HX_STACK_LINE(486)
													Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
													HX_STACK_LINE(486)
													Float tmp146 = (a44 * b41);		HX_STACK_VAR(tmp146,"tmp146");
													HX_STACK_LINE(486)
													Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
													HX_STACK_LINE(486)
													te[(int)3] = tmp147;
													HX_STACK_LINE(486)
													Float tmp148 = (a41 * b12);		HX_STACK_VAR(tmp148,"tmp148");
													HX_STACK_LINE(486)
													Float tmp149 = (a42 * b22);		HX_STACK_VAR(tmp149,"tmp149");
													HX_STACK_LINE(486)
													Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
													HX_STACK_LINE(486)
													Float tmp151 = (a43 * b32);		HX_STACK_VAR(tmp151,"tmp151");
													HX_STACK_LINE(486)
													Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
													HX_STACK_LINE(486)
													Float tmp153 = (a44 * b42);		HX_STACK_VAR(tmp153,"tmp153");
													HX_STACK_LINE(486)
													Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
													HX_STACK_LINE(486)
													te[(int)7] = tmp154;
													HX_STACK_LINE(486)
													Float tmp155 = (a41 * b13);		HX_STACK_VAR(tmp155,"tmp155");
													HX_STACK_LINE(486)
													Float tmp156 = (a42 * b23);		HX_STACK_VAR(tmp156,"tmp156");
													HX_STACK_LINE(486)
													Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
													HX_STACK_LINE(486)
													Float tmp158 = (a43 * b33);		HX_STACK_VAR(tmp158,"tmp158");
													HX_STACK_LINE(486)
													Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
													HX_STACK_LINE(486)
													Float tmp160 = (a44 * b43);		HX_STACK_VAR(tmp160,"tmp160");
													HX_STACK_LINE(486)
													Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
													HX_STACK_LINE(486)
													te[(int)11] = tmp161;
													HX_STACK_LINE(486)
													Float tmp162 = (a41 * b14);		HX_STACK_VAR(tmp162,"tmp162");
													HX_STACK_LINE(486)
													Float tmp163 = (a42 * b24);		HX_STACK_VAR(tmp163,"tmp163");
													HX_STACK_LINE(486)
													Float tmp164 = (tmp162 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
													HX_STACK_LINE(486)
													Float tmp165 = (a43 * b34);		HX_STACK_VAR(tmp165,"tmp165");
													HX_STACK_LINE(486)
													Float tmp166 = (tmp164 + tmp165);		HX_STACK_VAR(tmp166,"tmp166");
													HX_STACK_LINE(486)
													Float tmp167 = (a44 * b44);		HX_STACK_VAR(tmp167,"tmp167");
													HX_STACK_LINE(486)
													Float tmp168 = (tmp166 + tmp167);		HX_STACK_VAR(tmp168,"tmp168");
													HX_STACK_LINE(486)
													te[(int)15] = tmp168;
													HX_STACK_LINE(486)
													_this1;
												}
											}
											HX_STACK_LINE(486)
											bool tmp24 = (_this->parent != null());		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(486)
											if ((tmp24)){
												HX_STACK_LINE(486)
												::phoenix::Spatial tmp25 = _this->get_world();		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(486)
												::phoenix::Spatial _this1 = tmp25;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(486)
												::phoenix::Matrix tmp26;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													::phoenix::Matrix tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														::phoenix::Spatial tmp28 = _this->get_world();		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(486)
														::phoenix::Spatial _this2 = tmp28;		HX_STACK_VAR(_this2,"_this2");
														HX_STACK_LINE(486)
														tmp27 = _this2->matrix;
													}
													HX_STACK_LINE(486)
													::phoenix::Matrix _this2 = tmp27;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(486)
													::phoenix::Matrix tmp28;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														::phoenix::Spatial tmp29 = _this->parent->get_world();		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(486)
														::phoenix::Spatial _this3 = tmp29;		HX_STACK_VAR(_this3,"_this3");
														HX_STACK_LINE(486)
														tmp28 = _this3->matrix;
													}
													HX_STACK_LINE(486)
													::phoenix::Matrix _a = tmp28;		HX_STACK_VAR(_a,"_a");
													HX_STACK_LINE(486)
													Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
													HX_STACK_LINE(486)
													::phoenix::Matrix tmp29 = _this->local->matrix;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(486)
													Array< Float > be = tmp29->elements;		HX_STACK_VAR(be,"be");
													HX_STACK_LINE(486)
													Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(486)
													Float tmp30 = ae->__get((int)0);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(486)
													Float a11 = tmp30;		HX_STACK_VAR(a11,"a11");
													HX_STACK_LINE(486)
													Float tmp31 = ae->__get((int)4);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(486)
													Float a12 = tmp31;		HX_STACK_VAR(a12,"a12");
													HX_STACK_LINE(486)
													Float tmp32 = ae->__get((int)8);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(486)
													Float a13 = tmp32;		HX_STACK_VAR(a13,"a13");
													HX_STACK_LINE(486)
													Float tmp33 = ae->__get((int)12);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(486)
													Float a14 = tmp33;		HX_STACK_VAR(a14,"a14");
													HX_STACK_LINE(486)
													Float tmp34 = ae->__get((int)1);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(486)
													Float a21 = tmp34;		HX_STACK_VAR(a21,"a21");
													HX_STACK_LINE(486)
													Float tmp35 = ae->__get((int)5);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(486)
													Float a22 = tmp35;		HX_STACK_VAR(a22,"a22");
													HX_STACK_LINE(486)
													Float tmp36 = ae->__get((int)9);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(486)
													Float a23 = tmp36;		HX_STACK_VAR(a23,"a23");
													HX_STACK_LINE(486)
													Float tmp37 = ae->__get((int)13);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(486)
													Float a24 = tmp37;		HX_STACK_VAR(a24,"a24");
													HX_STACK_LINE(486)
													Float tmp38 = ae->__get((int)2);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(486)
													Float a31 = tmp38;		HX_STACK_VAR(a31,"a31");
													HX_STACK_LINE(486)
													Float tmp39 = ae->__get((int)6);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(486)
													Float a32 = tmp39;		HX_STACK_VAR(a32,"a32");
													HX_STACK_LINE(486)
													Float tmp40 = ae->__get((int)10);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(486)
													Float a33 = tmp40;		HX_STACK_VAR(a33,"a33");
													HX_STACK_LINE(486)
													Float tmp41 = ae->__get((int)14);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(486)
													Float a34 = tmp41;		HX_STACK_VAR(a34,"a34");
													HX_STACK_LINE(486)
													Float tmp42 = ae->__get((int)3);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(486)
													Float a41 = tmp42;		HX_STACK_VAR(a41,"a41");
													HX_STACK_LINE(486)
													Float tmp43 = ae->__get((int)7);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(486)
													Float a42 = tmp43;		HX_STACK_VAR(a42,"a42");
													HX_STACK_LINE(486)
													Float tmp44 = ae->__get((int)11);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(486)
													Float a43 = tmp44;		HX_STACK_VAR(a43,"a43");
													HX_STACK_LINE(486)
													Float tmp45 = ae->__get((int)15);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(486)
													Float a44 = tmp45;		HX_STACK_VAR(a44,"a44");
													HX_STACK_LINE(486)
													Float tmp46 = be->__get((int)0);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(486)
													Float b11 = tmp46;		HX_STACK_VAR(b11,"b11");
													HX_STACK_LINE(486)
													Float tmp47 = be->__get((int)4);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(486)
													Float b12 = tmp47;		HX_STACK_VAR(b12,"b12");
													HX_STACK_LINE(486)
													Float tmp48 = be->__get((int)8);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(486)
													Float b13 = tmp48;		HX_STACK_VAR(b13,"b13");
													HX_STACK_LINE(486)
													Float tmp49 = be->__get((int)12);		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(486)
													Float b14 = tmp49;		HX_STACK_VAR(b14,"b14");
													HX_STACK_LINE(486)
													Float tmp50 = be->__get((int)1);		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(486)
													Float b21 = tmp50;		HX_STACK_VAR(b21,"b21");
													HX_STACK_LINE(486)
													Float tmp51 = be->__get((int)5);		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(486)
													Float b22 = tmp51;		HX_STACK_VAR(b22,"b22");
													HX_STACK_LINE(486)
													Float tmp52 = be->__get((int)9);		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(486)
													Float b23 = tmp52;		HX_STACK_VAR(b23,"b23");
													HX_STACK_LINE(486)
													Float tmp53 = be->__get((int)13);		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(486)
													Float b24 = tmp53;		HX_STACK_VAR(b24,"b24");
													HX_STACK_LINE(486)
													Float tmp54 = be->__get((int)2);		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(486)
													Float b31 = tmp54;		HX_STACK_VAR(b31,"b31");
													HX_STACK_LINE(486)
													Float tmp55 = be->__get((int)6);		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(486)
													Float b32 = tmp55;		HX_STACK_VAR(b32,"b32");
													HX_STACK_LINE(486)
													Float tmp56 = be->__get((int)10);		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(486)
													Float b33 = tmp56;		HX_STACK_VAR(b33,"b33");
													HX_STACK_LINE(486)
													Float tmp57 = be->__get((int)14);		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(486)
													Float b34 = tmp57;		HX_STACK_VAR(b34,"b34");
													HX_STACK_LINE(486)
													Float tmp58 = be->__get((int)3);		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(486)
													Float b41 = tmp58;		HX_STACK_VAR(b41,"b41");
													HX_STACK_LINE(486)
													Float tmp59 = be->__get((int)7);		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(486)
													Float b42 = tmp59;		HX_STACK_VAR(b42,"b42");
													HX_STACK_LINE(486)
													Float tmp60 = be->__get((int)11);		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(486)
													Float b43 = tmp60;		HX_STACK_VAR(b43,"b43");
													HX_STACK_LINE(486)
													Float tmp61 = be->__get((int)15);		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(486)
													Float b44 = tmp61;		HX_STACK_VAR(b44,"b44");
													HX_STACK_LINE(486)
													Float tmp62 = (a11 * b11);		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(486)
													Float tmp63 = (a12 * b21);		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(486)
													Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
													HX_STACK_LINE(486)
													Float tmp65 = (a13 * b31);		HX_STACK_VAR(tmp65,"tmp65");
													HX_STACK_LINE(486)
													Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
													HX_STACK_LINE(486)
													Float tmp67 = (a14 * b41);		HX_STACK_VAR(tmp67,"tmp67");
													HX_STACK_LINE(486)
													Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
													HX_STACK_LINE(486)
													te[(int)0] = tmp68;
													HX_STACK_LINE(486)
													Float tmp69 = (a11 * b12);		HX_STACK_VAR(tmp69,"tmp69");
													HX_STACK_LINE(486)
													Float tmp70 = (a12 * b22);		HX_STACK_VAR(tmp70,"tmp70");
													HX_STACK_LINE(486)
													Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
													HX_STACK_LINE(486)
													Float tmp72 = (a13 * b32);		HX_STACK_VAR(tmp72,"tmp72");
													HX_STACK_LINE(486)
													Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
													HX_STACK_LINE(486)
													Float tmp74 = (a14 * b42);		HX_STACK_VAR(tmp74,"tmp74");
													HX_STACK_LINE(486)
													Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
													HX_STACK_LINE(486)
													te[(int)4] = tmp75;
													HX_STACK_LINE(486)
													Float tmp76 = (a11 * b13);		HX_STACK_VAR(tmp76,"tmp76");
													HX_STACK_LINE(486)
													Float tmp77 = (a12 * b23);		HX_STACK_VAR(tmp77,"tmp77");
													HX_STACK_LINE(486)
													Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
													HX_STACK_LINE(486)
													Float tmp79 = (a13 * b33);		HX_STACK_VAR(tmp79,"tmp79");
													HX_STACK_LINE(486)
													Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
													HX_STACK_LINE(486)
													Float tmp81 = (a14 * b43);		HX_STACK_VAR(tmp81,"tmp81");
													HX_STACK_LINE(486)
													Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
													HX_STACK_LINE(486)
													te[(int)8] = tmp82;
													HX_STACK_LINE(486)
													Float tmp83 = (a11 * b14);		HX_STACK_VAR(tmp83,"tmp83");
													HX_STACK_LINE(486)
													Float tmp84 = (a12 * b24);		HX_STACK_VAR(tmp84,"tmp84");
													HX_STACK_LINE(486)
													Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
													HX_STACK_LINE(486)
													Float tmp86 = (a13 * b34);		HX_STACK_VAR(tmp86,"tmp86");
													HX_STACK_LINE(486)
													Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
													HX_STACK_LINE(486)
													Float tmp88 = (a14 * b44);		HX_STACK_VAR(tmp88,"tmp88");
													HX_STACK_LINE(486)
													Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
													HX_STACK_LINE(486)
													te[(int)12] = tmp89;
													HX_STACK_LINE(486)
													Float tmp90 = (a21 * b11);		HX_STACK_VAR(tmp90,"tmp90");
													HX_STACK_LINE(486)
													Float tmp91 = (a22 * b21);		HX_STACK_VAR(tmp91,"tmp91");
													HX_STACK_LINE(486)
													Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
													HX_STACK_LINE(486)
													Float tmp93 = (a23 * b31);		HX_STACK_VAR(tmp93,"tmp93");
													HX_STACK_LINE(486)
													Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
													HX_STACK_LINE(486)
													Float tmp95 = (a24 * b41);		HX_STACK_VAR(tmp95,"tmp95");
													HX_STACK_LINE(486)
													Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
													HX_STACK_LINE(486)
													te[(int)1] = tmp96;
													HX_STACK_LINE(486)
													Float tmp97 = (a21 * b12);		HX_STACK_VAR(tmp97,"tmp97");
													HX_STACK_LINE(486)
													Float tmp98 = (a22 * b22);		HX_STACK_VAR(tmp98,"tmp98");
													HX_STACK_LINE(486)
													Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
													HX_STACK_LINE(486)
													Float tmp100 = (a23 * b32);		HX_STACK_VAR(tmp100,"tmp100");
													HX_STACK_LINE(486)
													Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
													HX_STACK_LINE(486)
													Float tmp102 = (a24 * b42);		HX_STACK_VAR(tmp102,"tmp102");
													HX_STACK_LINE(486)
													Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
													HX_STACK_LINE(486)
													te[(int)5] = tmp103;
													HX_STACK_LINE(486)
													Float tmp104 = (a21 * b13);		HX_STACK_VAR(tmp104,"tmp104");
													HX_STACK_LINE(486)
													Float tmp105 = (a22 * b23);		HX_STACK_VAR(tmp105,"tmp105");
													HX_STACK_LINE(486)
													Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
													HX_STACK_LINE(486)
													Float tmp107 = (a23 * b33);		HX_STACK_VAR(tmp107,"tmp107");
													HX_STACK_LINE(486)
													Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
													HX_STACK_LINE(486)
													Float tmp109 = (a24 * b43);		HX_STACK_VAR(tmp109,"tmp109");
													HX_STACK_LINE(486)
													Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
													HX_STACK_LINE(486)
													te[(int)9] = tmp110;
													HX_STACK_LINE(486)
													Float tmp111 = (a21 * b14);		HX_STACK_VAR(tmp111,"tmp111");
													HX_STACK_LINE(486)
													Float tmp112 = (a22 * b24);		HX_STACK_VAR(tmp112,"tmp112");
													HX_STACK_LINE(486)
													Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
													HX_STACK_LINE(486)
													Float tmp114 = (a23 * b34);		HX_STACK_VAR(tmp114,"tmp114");
													HX_STACK_LINE(486)
													Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
													HX_STACK_LINE(486)
													Float tmp116 = (a24 * b44);		HX_STACK_VAR(tmp116,"tmp116");
													HX_STACK_LINE(486)
													Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
													HX_STACK_LINE(486)
													te[(int)13] = tmp117;
													HX_STACK_LINE(486)
													Float tmp118 = (a31 * b11);		HX_STACK_VAR(tmp118,"tmp118");
													HX_STACK_LINE(486)
													Float tmp119 = (a32 * b21);		HX_STACK_VAR(tmp119,"tmp119");
													HX_STACK_LINE(486)
													Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
													HX_STACK_LINE(486)
													Float tmp121 = (a33 * b31);		HX_STACK_VAR(tmp121,"tmp121");
													HX_STACK_LINE(486)
													Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
													HX_STACK_LINE(486)
													Float tmp123 = (a34 * b41);		HX_STACK_VAR(tmp123,"tmp123");
													HX_STACK_LINE(486)
													Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
													HX_STACK_LINE(486)
													te[(int)2] = tmp124;
													HX_STACK_LINE(486)
													Float tmp125 = (a31 * b12);		HX_STACK_VAR(tmp125,"tmp125");
													HX_STACK_LINE(486)
													Float tmp126 = (a32 * b22);		HX_STACK_VAR(tmp126,"tmp126");
													HX_STACK_LINE(486)
													Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
													HX_STACK_LINE(486)
													Float tmp128 = (a33 * b32);		HX_STACK_VAR(tmp128,"tmp128");
													HX_STACK_LINE(486)
													Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
													HX_STACK_LINE(486)
													Float tmp130 = (a34 * b42);		HX_STACK_VAR(tmp130,"tmp130");
													HX_STACK_LINE(486)
													Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
													HX_STACK_LINE(486)
													te[(int)6] = tmp131;
													HX_STACK_LINE(486)
													Float tmp132 = (a31 * b13);		HX_STACK_VAR(tmp132,"tmp132");
													HX_STACK_LINE(486)
													Float tmp133 = (a32 * b23);		HX_STACK_VAR(tmp133,"tmp133");
													HX_STACK_LINE(486)
													Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
													HX_STACK_LINE(486)
													Float tmp135 = (a33 * b33);		HX_STACK_VAR(tmp135,"tmp135");
													HX_STACK_LINE(486)
													Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
													HX_STACK_LINE(486)
													Float tmp137 = (a34 * b43);		HX_STACK_VAR(tmp137,"tmp137");
													HX_STACK_LINE(486)
													Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
													HX_STACK_LINE(486)
													te[(int)10] = tmp138;
													HX_STACK_LINE(486)
													Float tmp139 = (a31 * b14);		HX_STACK_VAR(tmp139,"tmp139");
													HX_STACK_LINE(486)
													Float tmp140 = (a32 * b24);		HX_STACK_VAR(tmp140,"tmp140");
													HX_STACK_LINE(486)
													Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
													HX_STACK_LINE(486)
													Float tmp142 = (a33 * b34);		HX_STACK_VAR(tmp142,"tmp142");
													HX_STACK_LINE(486)
													Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
													HX_STACK_LINE(486)
													Float tmp144 = (a34 * b44);		HX_STACK_VAR(tmp144,"tmp144");
													HX_STACK_LINE(486)
													Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
													HX_STACK_LINE(486)
													te[(int)14] = tmp145;
													HX_STACK_LINE(486)
													Float tmp146 = (a41 * b11);		HX_STACK_VAR(tmp146,"tmp146");
													HX_STACK_LINE(486)
													Float tmp147 = (a42 * b21);		HX_STACK_VAR(tmp147,"tmp147");
													HX_STACK_LINE(486)
													Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
													HX_STACK_LINE(486)
													Float tmp149 = (a43 * b31);		HX_STACK_VAR(tmp149,"tmp149");
													HX_STACK_LINE(486)
													Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
													HX_STACK_LINE(486)
													Float tmp151 = (a44 * b41);		HX_STACK_VAR(tmp151,"tmp151");
													HX_STACK_LINE(486)
													Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
													HX_STACK_LINE(486)
													te[(int)3] = tmp152;
													HX_STACK_LINE(486)
													Float tmp153 = (a41 * b12);		HX_STACK_VAR(tmp153,"tmp153");
													HX_STACK_LINE(486)
													Float tmp154 = (a42 * b22);		HX_STACK_VAR(tmp154,"tmp154");
													HX_STACK_LINE(486)
													Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
													HX_STACK_LINE(486)
													Float tmp156 = (a43 * b32);		HX_STACK_VAR(tmp156,"tmp156");
													HX_STACK_LINE(486)
													Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
													HX_STACK_LINE(486)
													Float tmp158 = (a44 * b42);		HX_STACK_VAR(tmp158,"tmp158");
													HX_STACK_LINE(486)
													Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
													HX_STACK_LINE(486)
													te[(int)7] = tmp159;
													HX_STACK_LINE(486)
													Float tmp160 = (a41 * b13);		HX_STACK_VAR(tmp160,"tmp160");
													HX_STACK_LINE(486)
													Float tmp161 = (a42 * b23);		HX_STACK_VAR(tmp161,"tmp161");
													HX_STACK_LINE(486)
													Float tmp162 = (tmp160 + tmp161);		HX_STACK_VAR(tmp162,"tmp162");
													HX_STACK_LINE(486)
													Float tmp163 = (a43 * b33);		HX_STACK_VAR(tmp163,"tmp163");
													HX_STACK_LINE(486)
													Float tmp164 = (tmp162 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
													HX_STACK_LINE(486)
													Float tmp165 = (a44 * b43);		HX_STACK_VAR(tmp165,"tmp165");
													HX_STACK_LINE(486)
													Float tmp166 = (tmp164 + tmp165);		HX_STACK_VAR(tmp166,"tmp166");
													HX_STACK_LINE(486)
													te[(int)11] = tmp166;
													HX_STACK_LINE(486)
													Float tmp167 = (a41 * b14);		HX_STACK_VAR(tmp167,"tmp167");
													HX_STACK_LINE(486)
													Float tmp168 = (a42 * b24);		HX_STACK_VAR(tmp168,"tmp168");
													HX_STACK_LINE(486)
													Float tmp169 = (tmp167 + tmp168);		HX_STACK_VAR(tmp169,"tmp169");
													HX_STACK_LINE(486)
													Float tmp170 = (a43 * b34);		HX_STACK_VAR(tmp170,"tmp170");
													HX_STACK_LINE(486)
													Float tmp171 = (tmp169 + tmp170);		HX_STACK_VAR(tmp171,"tmp171");
													HX_STACK_LINE(486)
													Float tmp172 = (a44 * b44);		HX_STACK_VAR(tmp172,"tmp172");
													HX_STACK_LINE(486)
													Float tmp173 = (tmp171 + tmp172);		HX_STACK_VAR(tmp173,"tmp173");
													HX_STACK_LINE(486)
													te[(int)15] = tmp173;
													HX_STACK_LINE(486)
													tmp26 = _this2;
												}
												HX_STACK_LINE(486)
												::phoenix::Matrix _m = tmp26;		HX_STACK_VAR(_m,"_m");
												HX_STACK_LINE(486)
												_this1->matrix = _m;
												HX_STACK_LINE(486)
												bool tmp27 = (_m != null());		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(486)
												if ((tmp27)){
													HX_STACK_LINE(486)
													::snow::api::buffers::ArrayBufferView tmp28;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														cpp::ArrayBase array = _this1->matrix->elements;		HX_STACK_VAR(array,"array");
														HX_STACK_LINE(486)
														::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(486)
														bool tmp29 = false;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(486)
														if ((tmp29)){
															HX_STACK_LINE(486)
															::snow::api::buffers::ArrayBufferView tmp30 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(486)
															this1 = tmp30;
														}
														else{
															HX_STACK_LINE(486)
															bool tmp30 = (array != null());		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(486)
															if ((tmp30)){
																HX_STACK_LINE(486)
																::snow::api::buffers::ArrayBufferView tmp31;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(486)
																{
																	HX_STACK_LINE(486)
																	::snow::api::buffers::ArrayBufferView tmp32 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(486)
																	::snow::api::buffers::ArrayBufferView _this2 = tmp32;		HX_STACK_VAR(_this2,"_this2");
																	HX_STACK_LINE(486)
																	_this2->byteOffset = (int)0;
																	HX_STACK_LINE(486)
																	_this2->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
																	HX_STACK_LINE(486)
																	int tmp33 = (_this2->length * _this2->bytesPerElement);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(486)
																	_this2->byteLength = tmp33;
																	HX_STACK_LINE(486)
																	::haxe::io::Bytes tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(486)
																	{
																		HX_STACK_LINE(486)
																		::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																		HX_STACK_LINE(486)
																		int tmp35 = _this2->byteLength;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(486)
																		::haxe::io::Bytes tmp36 = ::haxe::io::Bytes_obj::alloc(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(486)
																		this2 = tmp36;
																		HX_STACK_LINE(486)
																		tmp34 = this2;
																	}
																	HX_STACK_LINE(486)
																	_this2->buffer = tmp34;
																	HX_STACK_LINE(486)
																	_this2->copyFromArray(((Array< Float >)(array)),null());
																	HX_STACK_LINE(486)
																	tmp31 = _this2;
																}
																HX_STACK_LINE(486)
																this1 = tmp31;
															}
															else{
																HX_STACK_LINE(486)
																bool tmp31 = false;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(486)
																if ((tmp31)){
																	HX_STACK_LINE(486)
																	::snow::api::buffers::ArrayBufferView tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(486)
																	{
																		HX_STACK_LINE(486)
																		::snow::api::buffers::ArrayBufferView tmp33 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(486)
																		::snow::api::buffers::ArrayBufferView _this2 = tmp33;		HX_STACK_VAR(_this2,"_this2");
																		HX_STACK_LINE(486)
																		::haxe::io::Bytes tmp34 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(486)
																		::haxe::io::Bytes srcData = tmp34;		HX_STACK_VAR(srcData,"srcData");
																		HX_STACK_LINE(486)
																		int tmp35 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(486)
																		int srcLength = tmp35;		HX_STACK_VAR(srcLength,"srcLength");
																		HX_STACK_LINE(486)
																		int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(486)
																		int srcByteOffset = tmp36;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
																		HX_STACK_LINE(486)
																		int tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(486)
																		int srcElementSize = tmp37;		HX_STACK_VAR(srcElementSize,"srcElementSize");
																		HX_STACK_LINE(486)
																		int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																		HX_STACK_LINE(486)
																		int tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(486)
																		int tmp39 = _this2->type;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(486)
																		bool tmp40 = (tmp38 == tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(486)
																		if ((tmp40)){
																			HX_STACK_LINE(486)
																			int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																			HX_STACK_LINE(486)
																			int tmp41 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(486)
																			int cloneLength = tmp41;		HX_STACK_VAR(cloneLength,"cloneLength");
																			HX_STACK_LINE(486)
																			::haxe::io::Bytes tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(486)
																			{
																				HX_STACK_LINE(486)
																				::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																				HX_STACK_LINE(486)
																				int tmp43 = cloneLength;		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(486)
																				::haxe::io::Bytes tmp44 = ::haxe::io::Bytes_obj::alloc(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																				HX_STACK_LINE(486)
																				this2 = tmp44;
																				HX_STACK_LINE(486)
																				tmp42 = this2;
																			}
																			HX_STACK_LINE(486)
																			_this2->buffer = tmp42;
																			HX_STACK_LINE(486)
																			::haxe::io::Bytes tmp43 = srcData;		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(486)
																			int tmp44 = srcByteOffset;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(486)
																			int tmp45 = cloneLength;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(486)
																			_this2->buffer->blit((int)0,tmp43,tmp44,tmp45);
																		}
																		else{
																			HX_STACK_LINE(486)
																			HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
																		}
																		HX_STACK_LINE(486)
																		int tmp41 = (_this2->bytesPerElement * srcLength);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(486)
																		_this2->byteLength = tmp41;
																		HX_STACK_LINE(486)
																		_this2->byteOffset = (int)0;
																		HX_STACK_LINE(486)
																		_this2->length = srcLength;
																		HX_STACK_LINE(486)
																		tmp32 = _this2;
																	}
																	HX_STACK_LINE(486)
																	this1 = tmp32;
																}
																else{
																	HX_STACK_LINE(486)
																	bool tmp32 = false;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(486)
																	if ((tmp32)){
																		HX_STACK_LINE(486)
																		::snow::api::buffers::ArrayBufferView tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(486)
																		{
																			HX_STACK_LINE(486)
																			::snow::api::buffers::ArrayBufferView tmp34 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp34,"tmp34");
																			HX_STACK_LINE(486)
																			::snow::api::buffers::ArrayBufferView _this2 = tmp34;		HX_STACK_VAR(_this2,"_this2");
																			HX_STACK_LINE(486)
																			bool tmp35 = false;		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(486)
																			if ((tmp35)){
																				HX_STACK_LINE(486)
																				HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																			}
																			HX_STACK_LINE(486)
																			int tmp36 = hx::Mod((int)0,_this2->bytesPerElement);		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(486)
																			bool tmp37 = (tmp36 != (int)0);		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(486)
																			if ((tmp37)){
																				HX_STACK_LINE(486)
																				HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																			}
																			HX_STACK_LINE(486)
																			int tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(486)
																			int bufferByteLength = tmp38;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																			HX_STACK_LINE(486)
																			int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																			HX_STACK_LINE(486)
																			int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																			HX_STACK_LINE(486)
																			bool tmp39 = true;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(486)
																			if ((tmp39)){
																				HX_STACK_LINE(486)
																				int tmp40 = bufferByteLength;		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(486)
																				newByteLength = tmp40;
																				HX_STACK_LINE(486)
																				int tmp41 = hx::Mod(bufferByteLength,_this2->bytesPerElement);		HX_STACK_VAR(tmp41,"tmp41");
																				HX_STACK_LINE(486)
																				bool tmp42 = (tmp41 != (int)0);		HX_STACK_VAR(tmp42,"tmp42");
																				HX_STACK_LINE(486)
																				if ((tmp42)){
																					HX_STACK_LINE(486)
																					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																				}
																				HX_STACK_LINE(486)
																				bool tmp43 = (newByteLength < (int)0);		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(486)
																				if ((tmp43)){
																					HX_STACK_LINE(486)
																					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																				}
																			}
																			else{
																				HX_STACK_LINE(486)
																				int tmp40 = (null() * _this2->bytesPerElement);		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(486)
																				newByteLength = tmp40;
																				HX_STACK_LINE(486)
																				int tmp41 = newByteLength;		HX_STACK_VAR(tmp41,"tmp41");
																				HX_STACK_LINE(486)
																				int newRange = tmp41;		HX_STACK_VAR(newRange,"newRange");
																				HX_STACK_LINE(486)
																				bool tmp42 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp42,"tmp42");
																				HX_STACK_LINE(486)
																				if ((tmp42)){
																					HX_STACK_LINE(486)
																					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																				}
																			}
																			HX_STACK_LINE(486)
																			_this2->buffer = null();
																			HX_STACK_LINE(486)
																			_this2->byteOffset = (int)0;
																			HX_STACK_LINE(486)
																			_this2->byteLength = newByteLength;
																			HX_STACK_LINE(486)
																			Float tmp40 = (Float(newByteLength) / Float(_this2->bytesPerElement));		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(486)
																			int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(486)
																			_this2->length = tmp41;
																			HX_STACK_LINE(486)
																			tmp33 = _this2;
																		}
																		HX_STACK_LINE(486)
																		this1 = tmp33;
																	}
																	else{
																		HX_STACK_LINE(486)
																		HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
																	}
																}
															}
														}
														HX_STACK_LINE(486)
														tmp28 = this1;
													}
													HX_STACK_LINE(486)
													_this1->floats = tmp28;
												}
												HX_STACK_LINE(486)
												_this1->matrix;
											}
											else{
												HX_STACK_LINE(486)
												::phoenix::Spatial tmp25 = _this->get_world();		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(486)
												::phoenix::Spatial _this1 = tmp25;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(486)
												::phoenix::Matrix tmp26;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(486)
												{
													HX_STACK_LINE(486)
													::phoenix::Matrix tmp27 = _this->local->matrix;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(486)
													Array< Float > te = tmp27->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(486)
													Float tmp28 = te->__get((int)0);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(486)
													Float tmp29 = te->__get((int)4);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(486)
													Float tmp30 = te->__get((int)8);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(486)
													Float tmp31 = te->__get((int)12);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(486)
													Float tmp32 = te->__get((int)1);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(486)
													Float tmp33 = te->__get((int)5);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(486)
													Float tmp34 = te->__get((int)9);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(486)
													Float tmp35 = te->__get((int)13);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(486)
													Float tmp36 = te->__get((int)2);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(486)
													Float tmp37 = te->__get((int)6);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(486)
													Float tmp38 = te->__get((int)10);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(486)
													Float tmp39 = te->__get((int)14);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(486)
													Float tmp40 = te->__get((int)3);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(486)
													Float tmp41 = te->__get((int)7);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(486)
													Float tmp42 = te->__get((int)11);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(486)
													Float tmp43 = te->__get((int)15);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(486)
													tmp26 = ::phoenix::Matrix_obj::__new(tmp28,tmp29,tmp30,tmp31,tmp32,tmp33,tmp34,tmp35,tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42,tmp43);
												}
												HX_STACK_LINE(486)
												::phoenix::Matrix _m = tmp26;		HX_STACK_VAR(_m,"_m");
												HX_STACK_LINE(486)
												_this1->matrix = _m;
												HX_STACK_LINE(486)
												bool tmp27 = (_m != null());		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(486)
												if ((tmp27)){
													HX_STACK_LINE(486)
													::snow::api::buffers::ArrayBufferView tmp28;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														cpp::ArrayBase array = _this1->matrix->elements;		HX_STACK_VAR(array,"array");
														HX_STACK_LINE(486)
														::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(486)
														bool tmp29 = false;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(486)
														if ((tmp29)){
															HX_STACK_LINE(486)
															::snow::api::buffers::ArrayBufferView tmp30 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(486)
															this1 = tmp30;
														}
														else{
															HX_STACK_LINE(486)
															bool tmp30 = (array != null());		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(486)
															if ((tmp30)){
																HX_STACK_LINE(486)
																::snow::api::buffers::ArrayBufferView tmp31;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(486)
																{
																	HX_STACK_LINE(486)
																	::snow::api::buffers::ArrayBufferView tmp32 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(486)
																	::snow::api::buffers::ArrayBufferView _this2 = tmp32;		HX_STACK_VAR(_this2,"_this2");
																	HX_STACK_LINE(486)
																	_this2->byteOffset = (int)0;
																	HX_STACK_LINE(486)
																	_this2->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
																	HX_STACK_LINE(486)
																	int tmp33 = (_this2->length * _this2->bytesPerElement);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(486)
																	_this2->byteLength = tmp33;
																	HX_STACK_LINE(486)
																	::haxe::io::Bytes tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(486)
																	{
																		HX_STACK_LINE(486)
																		::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																		HX_STACK_LINE(486)
																		int tmp35 = _this2->byteLength;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(486)
																		::haxe::io::Bytes tmp36 = ::haxe::io::Bytes_obj::alloc(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(486)
																		this2 = tmp36;
																		HX_STACK_LINE(486)
																		tmp34 = this2;
																	}
																	HX_STACK_LINE(486)
																	_this2->buffer = tmp34;
																	HX_STACK_LINE(486)
																	_this2->copyFromArray(((Array< Float >)(array)),null());
																	HX_STACK_LINE(486)
																	tmp31 = _this2;
																}
																HX_STACK_LINE(486)
																this1 = tmp31;
															}
															else{
																HX_STACK_LINE(486)
																bool tmp31 = false;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(486)
																if ((tmp31)){
																	HX_STACK_LINE(486)
																	::snow::api::buffers::ArrayBufferView tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(486)
																	{
																		HX_STACK_LINE(486)
																		::snow::api::buffers::ArrayBufferView tmp33 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(486)
																		::snow::api::buffers::ArrayBufferView _this2 = tmp33;		HX_STACK_VAR(_this2,"_this2");
																		HX_STACK_LINE(486)
																		::haxe::io::Bytes tmp34 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(486)
																		::haxe::io::Bytes srcData = tmp34;		HX_STACK_VAR(srcData,"srcData");
																		HX_STACK_LINE(486)
																		int tmp35 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(486)
																		int srcLength = tmp35;		HX_STACK_VAR(srcLength,"srcLength");
																		HX_STACK_LINE(486)
																		int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(486)
																		int srcByteOffset = tmp36;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
																		HX_STACK_LINE(486)
																		int tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(486)
																		int srcElementSize = tmp37;		HX_STACK_VAR(srcElementSize,"srcElementSize");
																		HX_STACK_LINE(486)
																		int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																		HX_STACK_LINE(486)
																		int tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(486)
																		int tmp39 = _this2->type;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(486)
																		bool tmp40 = (tmp38 == tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(486)
																		if ((tmp40)){
																			HX_STACK_LINE(486)
																			int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																			HX_STACK_LINE(486)
																			int tmp41 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(486)
																			int cloneLength = tmp41;		HX_STACK_VAR(cloneLength,"cloneLength");
																			HX_STACK_LINE(486)
																			::haxe::io::Bytes tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(486)
																			{
																				HX_STACK_LINE(486)
																				::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																				HX_STACK_LINE(486)
																				int tmp43 = cloneLength;		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(486)
																				::haxe::io::Bytes tmp44 = ::haxe::io::Bytes_obj::alloc(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																				HX_STACK_LINE(486)
																				this2 = tmp44;
																				HX_STACK_LINE(486)
																				tmp42 = this2;
																			}
																			HX_STACK_LINE(486)
																			_this2->buffer = tmp42;
																			HX_STACK_LINE(486)
																			::haxe::io::Bytes tmp43 = srcData;		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(486)
																			int tmp44 = srcByteOffset;		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(486)
																			int tmp45 = cloneLength;		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(486)
																			_this2->buffer->blit((int)0,tmp43,tmp44,tmp45);
																		}
																		else{
																			HX_STACK_LINE(486)
																			HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
																		}
																		HX_STACK_LINE(486)
																		int tmp41 = (_this2->bytesPerElement * srcLength);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(486)
																		_this2->byteLength = tmp41;
																		HX_STACK_LINE(486)
																		_this2->byteOffset = (int)0;
																		HX_STACK_LINE(486)
																		_this2->length = srcLength;
																		HX_STACK_LINE(486)
																		tmp32 = _this2;
																	}
																	HX_STACK_LINE(486)
																	this1 = tmp32;
																}
																else{
																	HX_STACK_LINE(486)
																	bool tmp32 = false;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(486)
																	if ((tmp32)){
																		HX_STACK_LINE(486)
																		::snow::api::buffers::ArrayBufferView tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(486)
																		{
																			HX_STACK_LINE(486)
																			::snow::api::buffers::ArrayBufferView tmp34 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp34,"tmp34");
																			HX_STACK_LINE(486)
																			::snow::api::buffers::ArrayBufferView _this2 = tmp34;		HX_STACK_VAR(_this2,"_this2");
																			HX_STACK_LINE(486)
																			bool tmp35 = false;		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(486)
																			if ((tmp35)){
																				HX_STACK_LINE(486)
																				HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																			}
																			HX_STACK_LINE(486)
																			int tmp36 = hx::Mod((int)0,_this2->bytesPerElement);		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(486)
																			bool tmp37 = (tmp36 != (int)0);		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(486)
																			if ((tmp37)){
																				HX_STACK_LINE(486)
																				HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																			}
																			HX_STACK_LINE(486)
																			int tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(486)
																			int bufferByteLength = tmp38;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																			HX_STACK_LINE(486)
																			int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																			HX_STACK_LINE(486)
																			int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																			HX_STACK_LINE(486)
																			bool tmp39 = true;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(486)
																			if ((tmp39)){
																				HX_STACK_LINE(486)
																				int tmp40 = bufferByteLength;		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(486)
																				newByteLength = tmp40;
																				HX_STACK_LINE(486)
																				int tmp41 = hx::Mod(bufferByteLength,_this2->bytesPerElement);		HX_STACK_VAR(tmp41,"tmp41");
																				HX_STACK_LINE(486)
																				bool tmp42 = (tmp41 != (int)0);		HX_STACK_VAR(tmp42,"tmp42");
																				HX_STACK_LINE(486)
																				if ((tmp42)){
																					HX_STACK_LINE(486)
																					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																				}
																				HX_STACK_LINE(486)
																				bool tmp43 = (newByteLength < (int)0);		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(486)
																				if ((tmp43)){
																					HX_STACK_LINE(486)
																					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																				}
																			}
																			else{
																				HX_STACK_LINE(486)
																				int tmp40 = (null() * _this2->bytesPerElement);		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(486)
																				newByteLength = tmp40;
																				HX_STACK_LINE(486)
																				int tmp41 = newByteLength;		HX_STACK_VAR(tmp41,"tmp41");
																				HX_STACK_LINE(486)
																				int newRange = tmp41;		HX_STACK_VAR(newRange,"newRange");
																				HX_STACK_LINE(486)
																				bool tmp42 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp42,"tmp42");
																				HX_STACK_LINE(486)
																				if ((tmp42)){
																					HX_STACK_LINE(486)
																					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																				}
																			}
																			HX_STACK_LINE(486)
																			_this2->buffer = null();
																			HX_STACK_LINE(486)
																			_this2->byteOffset = (int)0;
																			HX_STACK_LINE(486)
																			_this2->byteLength = newByteLength;
																			HX_STACK_LINE(486)
																			Float tmp40 = (Float(newByteLength) / Float(_this2->bytesPerElement));		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(486)
																			int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(486)
																			_this2->length = tmp41;
																			HX_STACK_LINE(486)
																			tmp33 = _this2;
																		}
																		HX_STACK_LINE(486)
																		this1 = tmp33;
																	}
																	else{
																		HX_STACK_LINE(486)
																		HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
																	}
																}
															}
														}
														HX_STACK_LINE(486)
														tmp28 = this1;
													}
													HX_STACK_LINE(486)
													_this1->floats = tmp28;
												}
												HX_STACK_LINE(486)
												_this1->matrix;
											}
											HX_STACK_LINE(486)
											{
												HX_STACK_LINE(486)
												::phoenix::Spatial tmp25 = _this->get_world();		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(486)
												::phoenix::Spatial _this1 = tmp25;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(486)
												bool tmp26 = _this1->auto_decompose;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(486)
												bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(486)
												bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(486)
												if ((tmp27)){
													HX_STACK_LINE(486)
													tmp28 = false;
												}
												else{
													HX_STACK_LINE(486)
													tmp28 = true;
												}
												HX_STACK_LINE(486)
												if ((tmp28)){
													HX_STACK_LINE(486)
													::phoenix::MatrixTransform tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
														HX_STACK_LINE(486)
														::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
														HX_STACK_LINE(486)
														::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
														HX_STACK_LINE(486)
														::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
														HX_STACK_LINE(486)
														Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
														HX_STACK_LINE(486)
														::phoenix::Matrix tmp30 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(486)
														::phoenix::Matrix matrix = tmp30;		HX_STACK_VAR(matrix,"matrix");
														HX_STACK_LINE(486)
														Float tmp31 = te->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(486)
														Float _ax_x = tmp31;		HX_STACK_VAR(_ax_x,"_ax_x");
														HX_STACK_LINE(486)
														Float tmp32 = te->__get((int)1);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(486)
														Float _ax_y = tmp32;		HX_STACK_VAR(_ax_y,"_ax_y");
														HX_STACK_LINE(486)
														Float tmp33 = te->__get((int)2);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(486)
														Float _ax_z = tmp33;		HX_STACK_VAR(_ax_z,"_ax_z");
														HX_STACK_LINE(486)
														Float tmp34 = te->__get((int)4);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(486)
														Float _ay_x = tmp34;		HX_STACK_VAR(_ay_x,"_ay_x");
														HX_STACK_LINE(486)
														Float tmp35 = te->__get((int)5);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(486)
														Float _ay_y = tmp35;		HX_STACK_VAR(_ay_y,"_ay_y");
														HX_STACK_LINE(486)
														Float tmp36 = te->__get((int)6);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(486)
														Float _ay_z = tmp36;		HX_STACK_VAR(_ay_z,"_ay_z");
														HX_STACK_LINE(486)
														Float tmp37 = te->__get((int)8);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(486)
														Float _az_x = tmp37;		HX_STACK_VAR(_az_x,"_az_x");
														HX_STACK_LINE(486)
														Float tmp38 = te->__get((int)9);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(486)
														Float _az_y = tmp38;		HX_STACK_VAR(_az_y,"_az_y");
														HX_STACK_LINE(486)
														Float tmp39 = te->__get((int)10);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(486)
														Float _az_z = tmp39;		HX_STACK_VAR(_az_z,"_az_z");
														HX_STACK_LINE(486)
														Float tmp40 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(486)
														Float tmp41 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(486)
														Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(486)
														Float tmp43 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(486)
														Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(486)
														Float tmp45 = ::Math_obj::sqrt(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(486)
														Float _ax_length = tmp45;		HX_STACK_VAR(_ax_length,"_ax_length");
														HX_STACK_LINE(486)
														Float tmp46 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(486)
														Float tmp47 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(486)
														Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(486)
														Float tmp49 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(486)
														Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(486)
														Float tmp51 = ::Math_obj::sqrt(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(486)
														Float _ay_length = tmp51;		HX_STACK_VAR(_ay_length,"_ay_length");
														HX_STACK_LINE(486)
														Float tmp52 = (_az_x * _az_x);		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(486)
														Float tmp53 = (_az_y * _az_y);		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(486)
														Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(486)
														Float tmp55 = (_az_z * _az_z);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(486)
														Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(486)
														Float tmp57 = ::Math_obj::sqrt(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(486)
														Float _az_length = tmp57;		HX_STACK_VAR(_az_length,"_az_length");
														HX_STACK_LINE(486)
														bool tmp58 = (_quaternion == null());		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(486)
														if ((tmp58)){
															HX_STACK_LINE(486)
															::phoenix::Quaternion tmp59 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp59,"tmp59");
															HX_STACK_LINE(486)
															_quaternion = tmp59;
														}
														HX_STACK_LINE(486)
														bool tmp59 = (_position == null());		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(486)
														if ((tmp59)){
															HX_STACK_LINE(486)
															Float tmp60 = te->__get((int)12);		HX_STACK_VAR(tmp60,"tmp60");
															HX_STACK_LINE(486)
															Float tmp61 = te->__get((int)13);		HX_STACK_VAR(tmp61,"tmp61");
															HX_STACK_LINE(486)
															Float tmp62 = te->__get((int)14);		HX_STACK_VAR(tmp62,"tmp62");
															HX_STACK_LINE(486)
															::phoenix::Vector tmp63 = ::phoenix::Vector_obj::__new(tmp60,tmp61,tmp62,null());		HX_STACK_VAR(tmp63,"tmp63");
															HX_STACK_LINE(486)
															_position = tmp63;
														}
														else{
															HX_STACK_LINE(486)
															{
																HX_STACK_LINE(486)
																Float tmp60 = te->__get((int)12);		HX_STACK_VAR(tmp60,"tmp60");
																HX_STACK_LINE(486)
																Float _x = tmp60;		HX_STACK_VAR(_x,"_x");
																HX_STACK_LINE(486)
																_position->x = _x;
																HX_STACK_LINE(486)
																bool tmp61 = _position->_construct;		HX_STACK_VAR(tmp61,"tmp61");
																HX_STACK_LINE(486)
																if ((tmp61)){
																	HX_STACK_LINE(486)
																	_position->x;
																}
																else{
																	HX_STACK_LINE(486)
																	bool tmp62 = (_position->listen_x != null());		HX_STACK_VAR(tmp62,"tmp62");
																	HX_STACK_LINE(486)
																	bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
																	HX_STACK_LINE(486)
																	if ((tmp62)){
																		HX_STACK_LINE(486)
																		bool tmp64 = _position->ignore_listeners;		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(486)
																		bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
																		HX_STACK_LINE(486)
																		tmp63 = !(tmp65);
																	}
																	else{
																		HX_STACK_LINE(486)
																		tmp63 = false;
																	}
																	HX_STACK_LINE(486)
																	if ((tmp63)){
																		HX_STACK_LINE(486)
																		Float tmp64 = _x;		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(486)
																		_position->listen_x(tmp64);
																	}
																	HX_STACK_LINE(486)
																	_position->x;
																}
															}
															HX_STACK_LINE(486)
															{
																HX_STACK_LINE(486)
																Float tmp60 = te->__get((int)13);		HX_STACK_VAR(tmp60,"tmp60");
																HX_STACK_LINE(486)
																Float _y = tmp60;		HX_STACK_VAR(_y,"_y");
																HX_STACK_LINE(486)
																_position->y = _y;
																HX_STACK_LINE(486)
																bool tmp61 = _position->_construct;		HX_STACK_VAR(tmp61,"tmp61");
																HX_STACK_LINE(486)
																if ((tmp61)){
																	HX_STACK_LINE(486)
																	_position->y;
																}
																else{
																	HX_STACK_LINE(486)
																	bool tmp62 = (_position->listen_y != null());		HX_STACK_VAR(tmp62,"tmp62");
																	HX_STACK_LINE(486)
																	bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
																	HX_STACK_LINE(486)
																	if ((tmp62)){
																		HX_STACK_LINE(486)
																		bool tmp64 = _position->ignore_listeners;		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(486)
																		bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
																		HX_STACK_LINE(486)
																		tmp63 = !(tmp65);
																	}
																	else{
																		HX_STACK_LINE(486)
																		tmp63 = false;
																	}
																	HX_STACK_LINE(486)
																	if ((tmp63)){
																		HX_STACK_LINE(486)
																		Float tmp64 = _y;		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(486)
																		_position->listen_y(tmp64);
																	}
																	HX_STACK_LINE(486)
																	_position->y;
																}
															}
															HX_STACK_LINE(486)
															{
																HX_STACK_LINE(486)
																Float tmp60 = te->__get((int)14);		HX_STACK_VAR(tmp60,"tmp60");
																HX_STACK_LINE(486)
																Float _z = tmp60;		HX_STACK_VAR(_z,"_z");
																HX_STACK_LINE(486)
																_position->z = _z;
																HX_STACK_LINE(486)
																bool tmp61 = _position->_construct;		HX_STACK_VAR(tmp61,"tmp61");
																HX_STACK_LINE(486)
																if ((tmp61)){
																	HX_STACK_LINE(486)
																	_position->z;
																}
																else{
																	HX_STACK_LINE(486)
																	bool tmp62 = (_position->listen_z != null());		HX_STACK_VAR(tmp62,"tmp62");
																	HX_STACK_LINE(486)
																	bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
																	HX_STACK_LINE(486)
																	if ((tmp62)){
																		HX_STACK_LINE(486)
																		bool tmp64 = _position->ignore_listeners;		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(486)
																		bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
																		HX_STACK_LINE(486)
																		tmp63 = !(tmp65);
																	}
																	else{
																		HX_STACK_LINE(486)
																		tmp63 = false;
																	}
																	HX_STACK_LINE(486)
																	if ((tmp63)){
																		HX_STACK_LINE(486)
																		Float tmp64 = _z;		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(486)
																		_position->listen_z(tmp64);
																	}
																	HX_STACK_LINE(486)
																	_position->z;
																}
															}
														}
														HX_STACK_LINE(486)
														bool tmp60 = (_scale == null());		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(486)
														if ((tmp60)){
															HX_STACK_LINE(486)
															::phoenix::Vector tmp61 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp61,"tmp61");
															HX_STACK_LINE(486)
															_scale = tmp61;
														}
														else{
															HX_STACK_LINE(486)
															{
																HX_STACK_LINE(486)
																_scale->x = _ax_length;
																HX_STACK_LINE(486)
																bool tmp61 = _scale->_construct;		HX_STACK_VAR(tmp61,"tmp61");
																HX_STACK_LINE(486)
																if ((tmp61)){
																	HX_STACK_LINE(486)
																	_scale->x;
																}
																else{
																	HX_STACK_LINE(486)
																	bool tmp62 = (_scale->listen_x != null());		HX_STACK_VAR(tmp62,"tmp62");
																	HX_STACK_LINE(486)
																	bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
																	HX_STACK_LINE(486)
																	if ((tmp62)){
																		HX_STACK_LINE(486)
																		bool tmp64 = _scale->ignore_listeners;		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(486)
																		bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
																		HX_STACK_LINE(486)
																		tmp63 = !(tmp65);
																	}
																	else{
																		HX_STACK_LINE(486)
																		tmp63 = false;
																	}
																	HX_STACK_LINE(486)
																	if ((tmp63)){
																		HX_STACK_LINE(486)
																		Float tmp64 = _ax_length;		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(486)
																		_scale->listen_x(tmp64);
																	}
																	HX_STACK_LINE(486)
																	_scale->x;
																}
															}
															HX_STACK_LINE(486)
															{
																HX_STACK_LINE(486)
																_scale->y = _ay_length;
																HX_STACK_LINE(486)
																bool tmp61 = _scale->_construct;		HX_STACK_VAR(tmp61,"tmp61");
																HX_STACK_LINE(486)
																if ((tmp61)){
																	HX_STACK_LINE(486)
																	_scale->y;
																}
																else{
																	HX_STACK_LINE(486)
																	bool tmp62 = (_scale->listen_y != null());		HX_STACK_VAR(tmp62,"tmp62");
																	HX_STACK_LINE(486)
																	bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
																	HX_STACK_LINE(486)
																	if ((tmp62)){
																		HX_STACK_LINE(486)
																		bool tmp64 = _scale->ignore_listeners;		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(486)
																		bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
																		HX_STACK_LINE(486)
																		tmp63 = !(tmp65);
																	}
																	else{
																		HX_STACK_LINE(486)
																		tmp63 = false;
																	}
																	HX_STACK_LINE(486)
																	if ((tmp63)){
																		HX_STACK_LINE(486)
																		Float tmp64 = _ay_length;		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(486)
																		_scale->listen_y(tmp64);
																	}
																	HX_STACK_LINE(486)
																	_scale->y;
																}
															}
															HX_STACK_LINE(486)
															{
																HX_STACK_LINE(486)
																_scale->z = _az_length;
																HX_STACK_LINE(486)
																bool tmp61 = _scale->_construct;		HX_STACK_VAR(tmp61,"tmp61");
																HX_STACK_LINE(486)
																if ((tmp61)){
																	HX_STACK_LINE(486)
																	_scale->z;
																}
																else{
																	HX_STACK_LINE(486)
																	bool tmp62 = (_scale->listen_z != null());		HX_STACK_VAR(tmp62,"tmp62");
																	HX_STACK_LINE(486)
																	bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
																	HX_STACK_LINE(486)
																	if ((tmp62)){
																		HX_STACK_LINE(486)
																		bool tmp64 = _scale->ignore_listeners;		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(486)
																		bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
																		HX_STACK_LINE(486)
																		tmp63 = !(tmp65);
																	}
																	else{
																		HX_STACK_LINE(486)
																		tmp63 = false;
																	}
																	HX_STACK_LINE(486)
																	if ((tmp63)){
																		HX_STACK_LINE(486)
																		Float tmp64 = _az_length;		HX_STACK_VAR(tmp64,"tmp64");
																		HX_STACK_LINE(486)
																		_scale->listen_z(tmp64);
																	}
																	HX_STACK_LINE(486)
																	_scale->z;
																}
															}
														}
														HX_STACK_LINE(486)
														matrix->elements = _this2->elements->concat(Array_obj< Float >::__new());
														HX_STACK_LINE(486)
														Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
														HX_STACK_LINE(486)
														Float tmp61 = _ax_length;		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(486)
														hx::DivEq(me[(int)0],tmp61);
														HX_STACK_LINE(486)
														Float tmp62 = _ax_length;		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(486)
														hx::DivEq(me[(int)1],tmp62);
														HX_STACK_LINE(486)
														Float tmp63 = _ax_length;		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(486)
														hx::DivEq(me[(int)2],tmp63);
														HX_STACK_LINE(486)
														Float tmp64 = _ay_length;		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(486)
														hx::DivEq(me[(int)4],tmp64);
														HX_STACK_LINE(486)
														Float tmp65 = _ay_length;		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(486)
														hx::DivEq(me[(int)5],tmp65);
														HX_STACK_LINE(486)
														Float tmp66 = _ay_length;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(486)
														hx::DivEq(me[(int)6],tmp66);
														HX_STACK_LINE(486)
														Float tmp67 = _az_length;		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(486)
														hx::DivEq(me[(int)8],tmp67);
														HX_STACK_LINE(486)
														Float tmp68 = _az_length;		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(486)
														hx::DivEq(me[(int)9],tmp68);
														HX_STACK_LINE(486)
														Float tmp69 = _az_length;		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(486)
														hx::DivEq(me[(int)10],tmp69);
														HX_STACK_LINE(486)
														::phoenix::Matrix tmp70 = matrix;		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(486)
														_quaternion->setFromRotationMatrix(tmp70);
														HX_STACK_LINE(486)
														bool tmp71 = (_this2->_transform == null());		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(486)
														if ((tmp71)){
															HX_STACK_LINE(486)
															::phoenix::MatrixTransform tmp72 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp72,"tmp72");
															HX_STACK_LINE(486)
															_this2->_transform = tmp72;
														}
														else{
															HX_STACK_LINE(486)
															_this2->_transform->pos = _position;
															HX_STACK_LINE(486)
															_this2->_transform->rotation = _quaternion;
															HX_STACK_LINE(486)
															_this2->_transform->scale = _scale;
														}
														HX_STACK_LINE(486)
														tmp29 = _this2->_transform;
													}
													HX_STACK_LINE(486)
													::phoenix::MatrixTransform _transform = tmp29;		HX_STACK_VAR(_transform,"_transform");
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
														HX_STACK_LINE(486)
														_this1->pos = _p;
														HX_STACK_LINE(486)
														bool tmp30 = (_p != null());		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(486)
														if ((tmp30)){
															HX_STACK_LINE(486)
															::phoenix::Vector tmp31 = _this1->pos;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(486)
															Dynamic tmp32 = _this1->_pos_change_dyn();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(486)
															::phoenix::Vector_obj::Listen(tmp31,tmp32);
															HX_STACK_LINE(486)
															{
																HX_STACK_LINE(486)
																bool tmp33 = (_this1->pos_changed != null());		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(486)
																bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(486)
																if ((tmp33)){
																	HX_STACK_LINE(486)
																	bool tmp35 = _this1->ignore_listeners;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(486)
																	bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(486)
																	tmp34 = !(tmp36);
																}
																else{
																	HX_STACK_LINE(486)
																	tmp34 = false;
																}
																HX_STACK_LINE(486)
																if ((tmp34)){
																	HX_STACK_LINE(486)
																	::phoenix::Vector tmp35 = _this1->pos;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(486)
																	_this1->pos_changed(tmp35);
																}
															}
														}
														HX_STACK_LINE(486)
														_this1->pos;
													}
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
														HX_STACK_LINE(486)
														_this1->rotation = _r;
														HX_STACK_LINE(486)
														bool tmp30 = (_r != null());		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(486)
														if ((tmp30)){
															HX_STACK_LINE(486)
															{
																HX_STACK_LINE(486)
																::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
																HX_STACK_LINE(486)
																Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
																HX_STACK_LINE(486)
																_q->listen_x = listener;
																HX_STACK_LINE(486)
																_q->listen_y = listener;
																HX_STACK_LINE(486)
																_q->listen_z = listener;
																HX_STACK_LINE(486)
																_q->listen_w = listener;
															}
															HX_STACK_LINE(486)
															{
																HX_STACK_LINE(486)
																bool tmp31 = (_this1->rotation_changed != null());		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(486)
																bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(486)
																if ((tmp31)){
																	HX_STACK_LINE(486)
																	bool tmp33 = _this1->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(486)
																	bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(486)
																	tmp32 = !(tmp34);
																}
																else{
																	HX_STACK_LINE(486)
																	tmp32 = false;
																}
																HX_STACK_LINE(486)
																if ((tmp32)){
																	HX_STACK_LINE(486)
																	::phoenix::Quaternion tmp33 = _this1->rotation;		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(486)
																	_this1->rotation_changed(tmp33);
																}
															}
														}
														HX_STACK_LINE(486)
														_this1->rotation;
													}
													HX_STACK_LINE(486)
													{
														HX_STACK_LINE(486)
														::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
														HX_STACK_LINE(486)
														_this1->scale = _s;
														HX_STACK_LINE(486)
														bool tmp30 = (_s != null());		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(486)
														if ((tmp30)){
															HX_STACK_LINE(486)
															::phoenix::Vector tmp31 = _this1->scale;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(486)
															Dynamic tmp32 = _this1->_scale_change_dyn();		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(486)
															::phoenix::Vector_obj::Listen(tmp31,tmp32);
															HX_STACK_LINE(486)
															{
																HX_STACK_LINE(486)
																bool tmp33 = (_this1->scale_changed != null());		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(486)
																bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(486)
																if ((tmp33)){
																	HX_STACK_LINE(486)
																	bool tmp35 = _this1->ignore_listeners;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(486)
																	bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(486)
																	tmp34 = !(tmp36);
																}
																else{
																	HX_STACK_LINE(486)
																	tmp34 = false;
																}
																HX_STACK_LINE(486)
																if ((tmp34)){
																	HX_STACK_LINE(486)
																	::phoenix::Vector tmp35 = _this1->scale;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(486)
																	_this1->scale_changed(tmp35);
																}
															}
														}
														HX_STACK_LINE(486)
														_this1->scale;
													}
												}
												HX_STACK_LINE(486)
												_this1;
											}
											HX_STACK_LINE(486)
											{
												HX_STACK_LINE(486)
												_this->dirty = false;
												HX_STACK_LINE(486)
												bool tmp25 = _this->dirty;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(486)
												bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(486)
												bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(486)
												if ((tmp26)){
													HX_STACK_LINE(486)
													bool tmp28 = _this->_setup;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(486)
													bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(486)
													bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(486)
													tmp27 = !(tmp30);
												}
												else{
													HX_STACK_LINE(486)
													tmp27 = false;
												}
												HX_STACK_LINE(486)
												bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(486)
												bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(486)
												if ((tmp28)){
													HX_STACK_LINE(486)
													tmp29 = (_this->_dirty_handlers != null());
												}
												else{
													HX_STACK_LINE(486)
													tmp29 = false;
												}
												HX_STACK_LINE(486)
												bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(486)
												if ((tmp29)){
													HX_STACK_LINE(486)
													int tmp31 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(486)
													int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(486)
													tmp30 = (tmp32 > (int)0);
												}
												else{
													HX_STACK_LINE(486)
													tmp30 = false;
												}
												HX_STACK_LINE(486)
												if ((tmp30)){
													HX_STACK_LINE(486)
													int _g = (int)0;		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(486)
													cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(486)
													while((true)){
														HX_STACK_LINE(486)
														bool tmp31 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(486)
														bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(486)
														if ((tmp32)){
															HX_STACK_LINE(486)
															break;
														}
														HX_STACK_LINE(486)
														Dynamic tmp33 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(486)
														Dynamic _handler = tmp33;		HX_STACK_VAR(_handler,"_handler");
														HX_STACK_LINE(486)
														++(_g);
														HX_STACK_LINE(486)
														bool tmp34 = (_handler != null());		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(486)
														if ((tmp34)){
															HX_STACK_LINE(486)
															::phoenix::Transform tmp35 = _this;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(486)
															_handler(tmp35).Cast< Void >();
														}
													}
												}
												HX_STACK_LINE(486)
												_this->dirty;
											}
											HX_STACK_LINE(486)
											_this->_cleaning = false;
											HX_STACK_LINE(486)
											bool tmp25 = (_this->_clean_handlers != null());		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(486)
											bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(486)
											if ((tmp25)){
												HX_STACK_LINE(486)
												int tmp27 = _this->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(486)
												int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(486)
												tmp26 = (tmp28 > (int)0);
											}
											else{
												HX_STACK_LINE(486)
												tmp26 = false;
											}
											HX_STACK_LINE(486)
											if ((tmp26)){
												HX_STACK_LINE(486)
												int _g = (int)0;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(486)
												cpp::ArrayBase _g1 = _this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(486)
												while((true)){
													HX_STACK_LINE(486)
													bool tmp27 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(486)
													bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(486)
													if ((tmp28)){
														HX_STACK_LINE(486)
														break;
													}
													HX_STACK_LINE(486)
													Dynamic tmp29 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(486)
													Dynamic _handler = tmp29;		HX_STACK_VAR(_handler,"_handler");
													HX_STACK_LINE(486)
													++(_g);
													HX_STACK_LINE(486)
													bool tmp30 = (_handler != null());		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(486)
													if ((tmp30)){
														HX_STACK_LINE(486)
														::phoenix::Transform tmp31 = _this;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(486)
														_handler(tmp31).Cast< Void >();
													}
												}
											}
										}
									}
								}
								HX_STACK_LINE(486)
								Float tmp18 = dt;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(486)
								entity->update(tmp18);
								HX_STACK_LINE(486)
								bool tmp19 = (entity->events != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(486)
								if ((tmp19)){
									HX_STACK_LINE(486)
									entity->events->process();
								}
								HX_STACK_LINE(486)
								bool tmp20 = (entity->component_count > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(486)
								if ((tmp20)){
									HX_STACK_LINE(486)
									::luxe::structural::OrderedMap tmp21 = entity->_components->components;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(486)
									::luxe::structural::OrderedMapIterator tmp22 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(486)
									::luxe::structural::OrderedMapIterator _g = tmp22;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(486)
									while((true)){
										HX_STACK_LINE(486)
										int tmp23 = _g->index;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(486)
										int tmp24 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(486)
										bool tmp25 = (tmp23 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(486)
										bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(486)
										if ((tmp26)){
											HX_STACK_LINE(486)
											break;
										}
										HX_STACK_LINE(486)
										::luxe::Component tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(486)
										{
											HX_STACK_LINE(486)
											int tmp28 = (_g->index)++;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(486)
											::String tmp29 = _g->map->_keys->__GetItem(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(486)
											::String key = tmp29;		HX_STACK_VAR(key,"key");
											HX_STACK_LINE(486)
											::haxe::ds::StringMap tmp30 = _g->map->map;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(486)
											::String tmp31 = key;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(486)
											::luxe::Component tmp32 = tmp30->get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(486)
											tmp27 = tmp32;
										}
										HX_STACK_LINE(486)
										::luxe::Component _component = tmp27;		HX_STACK_VAR(_component,"_component");
										HX_STACK_LINE(486)
										Float tmp28 = dt;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(486)
										_component->update(tmp28);
									}
								}
								HX_STACK_LINE(486)
								int tmp21 = entity->children->length;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(486)
								bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(486)
								if ((tmp22)){
									HX_STACK_LINE(486)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(486)
									Array< ::Dynamic > _g1 = entity->children;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(486)
									while((true)){
										HX_STACK_LINE(486)
										bool tmp23 = (_g < _g1->length);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(486)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(486)
										if ((tmp24)){
											HX_STACK_LINE(486)
											break;
										}
										HX_STACK_LINE(486)
										::luxe::Entity tmp25 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(486)
										::luxe::Entity _child = tmp25;		HX_STACK_VAR(_child,"_child");
										HX_STACK_LINE(486)
										++(_g);
										HX_STACK_LINE(486)
										Float tmp26 = dt;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(486)
										_child->_update(tmp26);
									}
								}
							}
						}
					}
				}
;
			}
		}
		HX_STACK_LINE(491)
		::luxe::Core tmp6 = ::Luxe_obj::core;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(491)
		::String tmp7 = this->get_name();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(491)
		::String tmp8 = (HX_HCSTRING("scene.","\x62","\x49","\xcc","\x3e") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(491)
		tmp6->debug->end(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,update,(void))

Void Scene_obj::handle_delayed_additions( ){
{
		HX_STACK_FRAME("luxe.Scene","handle_delayed_additions",0xbf640c7d,"luxe.Scene.handle_delayed_additions","luxe/Scene.hx",495,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(497)
		int tmp = this->_delayed_init_entities->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(497)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(497)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(497)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(497)
		if ((tmp2)){
			HX_STACK_LINE(497)
			int tmp4 = this->_delayed_reset_entities->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(497)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(497)
			tmp3 = (tmp5 != (int)0);
		}
		else{
			HX_STACK_LINE(497)
			tmp3 = true;
		}
		HX_STACK_LINE(497)
		if ((tmp3)){
			HX_STACK_LINE(138)
			Dynamic();
		}
		HX_STACK_LINE(501)
		int tmp4 = this->_delayed_init_entities->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(501)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(501)
		if ((tmp5)){
			HX_STACK_LINE(502)
			{
				HX_STACK_LINE(502)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(502)
				Array< ::Dynamic > _g1 = this->_delayed_init_entities;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(502)
				while((true)){
					HX_STACK_LINE(502)
					bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(502)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(502)
					if ((tmp7)){
						HX_STACK_LINE(502)
						break;
					}
					HX_STACK_LINE(502)
					::luxe::Entity tmp8 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(502)
					::luxe::Entity entity = tmp8;		HX_STACK_VAR(entity,"entity");
					HX_STACK_LINE(502)
					++(_g);
					HX_STACK_LINE(503)
					bool tmp9 = entity->inited;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(503)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(503)
					if ((tmp10)){
						HX_STACK_LINE(505)
						entity->init();
						HX_STACK_LINE(505)
						entity->emit((int)2,null());
						HX_STACK_LINE(505)
						bool tmp11 = (entity->component_count > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(505)
						if ((tmp11)){
							HX_STACK_LINE(505)
							::luxe::structural::OrderedMap tmp12 = entity->_components->components;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(505)
							::luxe::structural::OrderedMapIterator tmp13 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(505)
							::luxe::structural::OrderedMapIterator _g2 = tmp13;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(505)
							while((true)){
								HX_STACK_LINE(505)
								int tmp14 = _g2->index;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(505)
								int tmp15 = _g2->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(505)
								bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(505)
								bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(505)
								if ((tmp17)){
									HX_STACK_LINE(505)
									break;
								}
								HX_STACK_LINE(505)
								::luxe::Component tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(505)
								{
									HX_STACK_LINE(505)
									int tmp19 = (_g2->index)++;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(505)
									::String tmp20 = _g2->map->_keys->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(505)
									::String key = tmp20;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(505)
									::haxe::ds::StringMap tmp21 = _g2->map->map;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(505)
									::String tmp22 = key;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(505)
									::luxe::Component tmp23 = tmp21->get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(505)
									tmp18 = tmp23;
								}
								HX_STACK_LINE(505)
								::luxe::Component _component = tmp18;		HX_STACK_VAR(_component,"_component");
								HX_STACK_LINE(505)
								_component->init();
							}
						}
						HX_STACK_LINE(505)
						int tmp12 = entity->children->length;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(505)
						bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(505)
						if ((tmp13)){
							HX_STACK_LINE(505)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(505)
							Array< ::Dynamic > _g11 = entity->children;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(505)
							while((true)){
								HX_STACK_LINE(505)
								bool tmp14 = (_g2 < _g11->length);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(505)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(505)
								if ((tmp15)){
									HX_STACK_LINE(505)
									break;
								}
								HX_STACK_LINE(505)
								::luxe::Entity tmp16 = _g11->__get(_g2).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(505)
								::luxe::Entity _child = tmp16;		HX_STACK_VAR(_child,"_child");
								HX_STACK_LINE(505)
								++(_g2);
								HX_STACK_LINE(505)
								_child->_init();
							}
						}
						HX_STACK_LINE(505)
						entity->inited = true;
					}
					else{
						HX_STACK_LINE(138)
						Dynamic();
					}
				}
			}
			HX_STACK_LINE(510)
			int tmp6 = this->_delayed_init_entities->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(510)
			this->_delayed_init_entities->splice((int)0,tmp6);
		}
		HX_STACK_LINE(513)
		int tmp6 = this->_delayed_reset_entities->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(513)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(513)
		if ((tmp7)){
			HX_STACK_LINE(514)
			{
				HX_STACK_LINE(514)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(514)
				Array< ::Dynamic > _g1 = this->_delayed_reset_entities;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(514)
				while((true)){
					HX_STACK_LINE(514)
					bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(514)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(514)
					if ((tmp9)){
						HX_STACK_LINE(514)
						break;
					}
					HX_STACK_LINE(514)
					::luxe::Entity tmp10 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(514)
					::luxe::Entity entity = tmp10;		HX_STACK_VAR(entity,"entity");
					HX_STACK_LINE(514)
					++(_g);
					HX_STACK_LINE(516)
					{
						HX_STACK_LINE(516)
						entity->onreset();
						HX_STACK_LINE(516)
						entity->emit((int)3,null());
						HX_STACK_LINE(516)
						bool tmp11 = (entity->component_count > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(516)
						if ((tmp11)){
							HX_STACK_LINE(516)
							::luxe::structural::OrderedMap tmp12 = entity->_components->components;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(516)
							::luxe::structural::OrderedMapIterator tmp13 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(516)
							::luxe::structural::OrderedMapIterator _g2 = tmp13;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(516)
							while((true)){
								HX_STACK_LINE(516)
								int tmp14 = _g2->index;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(516)
								int tmp15 = _g2->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(516)
								bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(516)
								bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(516)
								if ((tmp17)){
									HX_STACK_LINE(516)
									break;
								}
								HX_STACK_LINE(516)
								::luxe::Component tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(516)
								{
									HX_STACK_LINE(516)
									int tmp19 = (_g2->index)++;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(516)
									::String tmp20 = _g2->map->_keys->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(516)
									::String key = tmp20;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(516)
									::haxe::ds::StringMap tmp21 = _g2->map->map;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(516)
									::String tmp22 = key;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(516)
									::luxe::Component tmp23 = tmp21->get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(516)
									tmp18 = tmp23;
								}
								HX_STACK_LINE(516)
								::luxe::Component _component = tmp18;		HX_STACK_VAR(_component,"_component");
								HX_STACK_LINE(516)
								_component->onreset();
							}
						}
						HX_STACK_LINE(516)
						int tmp12 = entity->children->length;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(516)
						bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(516)
						if ((tmp13)){
							HX_STACK_LINE(516)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(516)
							Array< ::Dynamic > _g11 = entity->children;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(516)
							while((true)){
								HX_STACK_LINE(516)
								bool tmp14 = (_g2 < _g11->length);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(516)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(516)
								if ((tmp15)){
									HX_STACK_LINE(516)
									break;
								}
								HX_STACK_LINE(516)
								::luxe::Entity tmp16 = _g11->__get(_g2).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(516)
								::luxe::Entity _child = tmp16;		HX_STACK_VAR(_child,"_child");
								HX_STACK_LINE(516)
								++(_g2);
								HX_STACK_LINE(516)
								_child->_reset(null());
								HX_STACK_LINE(516)
								Dynamic();
							}
						}
						HX_STACK_LINE(516)
						{
							HX_STACK_LINE(516)
							Float _rate = entity->fixed_rate;		HX_STACK_VAR(_rate,"_rate");
							HX_STACK_LINE(516)
							{
								HX_STACK_LINE(516)
								bool tmp14 = (entity->fixed_rate_timer != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(516)
								if ((tmp14)){
									HX_STACK_LINE(516)
									entity->fixed_rate_timer->stop();
									HX_STACK_LINE(516)
									entity->fixed_rate_timer = null();
								}
							}
							HX_STACK_LINE(516)
							bool tmp14 = (_rate != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(516)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(516)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(516)
							if ((tmp15)){
								HX_STACK_LINE(516)
								::luxe::Entity tmp17 = entity->get_parent();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(516)
								::luxe::Entity tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(516)
								::luxe::Entity tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(516)
								tmp16 = (tmp19 == null());
							}
							else{
								HX_STACK_LINE(516)
								tmp16 = false;
							}
							HX_STACK_LINE(516)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(516)
							if ((tmp16)){
								HX_STACK_LINE(516)
								bool tmp18 = entity->destroyed;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(516)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(516)
								tmp17 = !(tmp19);
							}
							else{
								HX_STACK_LINE(516)
								tmp17 = false;
							}
							HX_STACK_LINE(516)
							if ((tmp17)){
								HX_STACK_LINE(516)
								::snow::api::Timer tmp18 = ::snow::api::Timer_obj::__new(_rate);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(516)
								entity->fixed_rate_timer = tmp18;
								HX_STACK_LINE(516)
								entity->fixed_rate_timer->run = entity->_fixed_update_dyn();
							}
						}
						HX_STACK_LINE(516)
						entity->started = true;
					}
				}
			}
			HX_STACK_LINE(518)
			int tmp8 = this->_delayed_reset_entities->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(518)
			this->_delayed_reset_entities->splice((int)0,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,handle_delayed_additions,(void))

int Scene_obj::get_length( ){
	HX_STACK_FRAME("luxe.Scene","get_length",0x88bd6c69,"luxe.Scene.get_length","luxe/Scene.hx",523,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(525)
	::haxe::ds::StringMap tmp = this->entities;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(525)
	Dynamic tmp1 = ((Dynamic)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(525)
	int tmp2 = ::Lambda_obj::count(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(525)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_length,return )

::String Scene_obj::toString( ){
	HX_STACK_FRAME("luxe.Scene","toString",0xab9df5e6,"luxe.Scene.toString","luxe/Scene.hx",529,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(531)
	::String tmp = this->get_name();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(531)
	::String tmp1 = (HX_HCSTRING("luxe Scene: ","\x68","\x44","\x23","\xa6") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(531)
	::String tmp2 = (tmp1 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(531)
	int tmp3 = this->get_length();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(531)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(531)
	::String tmp5 = (tmp4 + HX_HCSTRING(" entities / id: ","\xb1","\x20","\xb8","\xc4"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(531)
	::String tmp6 = this->get_id();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(531)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(531)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,toString,return )


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(entities,"entities");
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_delayed_init_entities,"_delayed_init_entities");
	HX_MARK_MEMBER_NAME(_delayed_reset_entities,"_delayed_reset_entities");
	HX_MARK_MEMBER_NAME(_has_changed,"_has_changed");
	HX_MARK_MEMBER_NAME(entity_count,"entity_count");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entities,"entities");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_delayed_init_entities,"_delayed_init_entities");
	HX_VISIT_MEMBER_NAME(_delayed_reset_entities,"_delayed_reset_entities");
	HX_VISIT_MEMBER_NAME(_has_changed,"_has_changed");
	HX_VISIT_MEMBER_NAME(entity_count,"entity_count");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Scene_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"touchup") ) { return touchup_dyn(); }
		if (HX_FIELD_EQ(inName,"inputup") ) { return inputup_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { return entities; }
		if (HX_FIELD_EQ(inName,"_destroy") ) { return _destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_do_init") ) { return _do_init_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"prerender") ) { return prerender_dyn(); }
		if (HX_FIELD_EQ(inName,"textinput") ) { return textinput_dyn(); }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"touchdown") ) { return touchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"touchmove") ) { return touchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepadup") ) { return gamepadup_dyn(); }
		if (HX_FIELD_EQ(inName,"inputdown") ) { return inputdown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postrender") ) { return postrender_dyn(); }
		if (HX_FIELD_EQ(inName,"mousewheel") ) { return mousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gamepadaxis") ) { return gamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepaddown") ) { return gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"windowmoved") ) { return windowmoved_dyn(); }
		if (HX_FIELD_EQ(inName,"windowsized") ) { return windowsized_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_has_changed") ) { return _has_changed; }
		if (HX_FIELD_EQ(inName,"entity_count") ) { return entity_count; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepaddevice") ) { return gamepaddevice_dyn(); }
		if (HX_FIELD_EQ(inName,"windowresized") ) { return windowresized_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_named_like") ) { return get_named_like_dyn(); }
		if (HX_FIELD_EQ(inName,"windowrestored") ) { return windowrestored_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"windowminimized") ) { return windowminimized_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_delayed_init_entities") ) { return _delayed_init_entities; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_delayed_reset_entities") ) { return _delayed_reset_entities; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"handle_duplicate_warning") ) { return handle_duplicate_warning_dyn(); }
		if (HX_FIELD_EQ(inName,"handle_delayed_additions") ) { return handle_delayed_additions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { entities=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_has_changed") ) { _has_changed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"entity_count") ) { entity_count=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_delayed_init_entities") ) { _delayed_init_entities=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_delayed_reset_entities") ) { _delayed_reset_entities=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Scene_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("entities","\x41","\x96","\x95","\x92"));
	outFields->push(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"));
	outFields->push(HX_HCSTRING("started","\x41","\x29","\x1b","\x35"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("_delayed_init_entities","\x34","\xe8","\x4b","\xde"));
	outFields->push(HX_HCSTRING("_delayed_reset_entities","\xcd","\x49","\xde","\xfc"));
	outFields->push(HX_HCSTRING("_has_changed","\xd0","\xe1","\x93","\x65"));
	outFields->push(HX_HCSTRING("entity_count","\x73","\x1b","\xa6","\xcf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Scene_obj,entities),HX_HCSTRING("entities","\x41","\x96","\x95","\x92")},
	{hx::fsBool,(int)offsetof(Scene_obj,inited),HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97")},
	{hx::fsBool,(int)offsetof(Scene_obj,started),HX_HCSTRING("started","\x41","\x29","\x1b","\x35")},
	{hx::fsInt,(int)offsetof(Scene_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,_delayed_init_entities),HX_HCSTRING("_delayed_init_entities","\x34","\xe8","\x4b","\xde")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,_delayed_reset_entities),HX_HCSTRING("_delayed_reset_entities","\xcd","\x49","\xde","\xfc")},
	{hx::fsBool,(int)offsetof(Scene_obj,_has_changed),HX_HCSTRING("_has_changed","\xd0","\xe1","\x93","\x65")},
	{hx::fsInt,(int)offsetof(Scene_obj,entity_count),HX_HCSTRING("entity_count","\x73","\x1b","\xa6","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("entities","\x41","\x96","\x95","\x92"),
	HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"),
	HX_HCSTRING("started","\x41","\x29","\x1b","\x35"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("_delayed_init_entities","\x34","\xe8","\x4b","\xde"),
	HX_HCSTRING("_delayed_reset_entities","\xcd","\x49","\xde","\xfc"),
	HX_HCSTRING("_has_changed","\xd0","\xe1","\x93","\x65"),
	HX_HCSTRING("handle_duplicate_warning","\xd1","\x8a","\x7d","\x4b"),
	HX_HCSTRING("entity_count","\x73","\x1b","\xa6","\xcf"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("get_named_like","\x26","\x8b","\x54","\xbc"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("prerender","\xb9","\x07","\x36","\x2f"),
	HX_HCSTRING("postrender","\xb6","\x77","\xcd","\x25"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("keyup","\xba","\xd5","\xfe","\xde"),
	HX_HCSTRING("textinput","\x3d","\xe4","\xdd","\xc3"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54"),
	HX_HCSTRING("mouseup","\xc0","\x0f","\x73","\xc0"),
	HX_HCSTRING("mousemove","\xb6","\x6f","\xdc","\x09"),
	HX_HCSTRING("touchdown","\xa1","\x5b","\x01","\x1d"),
	HX_HCSTRING("touchup","\xda","\x2b","\xf8","\xd8"),
	HX_HCSTRING("touchmove","\x50","\x46","\xf4","\x22"),
	HX_HCSTRING("gamepadaxis","\xc2","\x61","\xf2","\xe5"),
	HX_HCSTRING("gamepadup","\x3c","\x71","\x38","\x5f"),
	HX_HCSTRING("gamepaddown","\x83","\x3d","\xe7","\xe7"),
	HX_HCSTRING("gamepaddevice","\xf7","\x6b","\xa5","\x5b"),
	HX_HCSTRING("windowmoved","\x43","\xf2","\x0a","\x6a"),
	HX_HCSTRING("windowresized","\x00","\x26","\x3a","\x51"),
	HX_HCSTRING("windowsized","\x93","\x2e","\x7e","\xda"),
	HX_HCSTRING("windowminimized","\x96","\x69","\x37","\x2d"),
	HX_HCSTRING("windowrestored","\x46","\x01","\xd4","\x0f"),
	HX_HCSTRING("inputdown","\x6c","\x89","\xbf","\x1e"),
	HX_HCSTRING("inputup","\xe5","\xc0","\x1e","\xd4"),
	HX_HCSTRING("_destroy","\x7b","\x86","\x3e","\x5e"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("_do_init","\x05","\x21","\x84","\xd2"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("handle_delayed_additions","\x43","\x53","\x9d","\xd5"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#endif

hx::Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Scene_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Scene_obj >;
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
