#include <hxcpp.h>

#include "hxMath.h"
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

Void Entity_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.Entity","new",0x3aab5f6d,"luxe.Entity.new","luxe/Entity.hx",22,0x55caa482)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(244)
	this->component_count = (int)0;
	HX_STACK_LINE(45)
	this->active = true;
	HX_STACK_LINE(39)
	this->fixed_rate = ((Float)0);
	HX_STACK_LINE(36)
	this->started = false;
	HX_STACK_LINE(34)
	this->inited = false;
	HX_STACK_LINE(32)
	this->destroyed = false;
	HX_STACK_LINE(130)
	super::__construct(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"),null());
	HX_STACK_LINE(133)
	{
		HX_STACK_LINE(133)
		::luxe::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		::String tmp = _g->get_name();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::String tmp1 = this->get_id();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		::String tmp2 = (HX_HCSTRING(".","\x2e","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		::String tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		_g->set_name(tmp3);
	}
	HX_STACK_LINE(135)
	this->options = _options;
	HX_STACK_LINE(139)
	::luxe::components::Components tmp = ::luxe::components::Components_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	this->_components = tmp;
	HX_STACK_LINE(140)
	this->children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(141)
	::luxe::Events tmp1 = ::luxe::Events_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	this->events = tmp1;
	HX_STACK_LINE(143)
	Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	if ((tmp3)){
		HX_STACK_LINE(143)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		tmp4 = (tmp6->__Field(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"), hx::paccDynamic ) != null());
	}
	else{
		HX_STACK_LINE(143)
		tmp4 = false;
	}
	HX_STACK_LINE(143)
	if ((tmp4)){
		HX_STACK_LINE(144)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(144)
		this->set_transform(tmp5->__Field(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"), hx::paccDynamic ));
	}
	else{
		HX_STACK_LINE(146)
		::phoenix::Transform tmp5 = ::phoenix::Transform_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		this->set_transform(tmp5);
	}
	HX_STACK_LINE(150)
	{
		HX_STACK_LINE(150)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(150)
		bool tmp6 = (_this->_pos_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(150)
		if ((tmp6)){
			HX_STACK_LINE(150)
			_this->_pos_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(150)
		Dynamic tmp7 = this->set_pos_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(150)
		_this->_pos_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(151)
	{
		HX_STACK_LINE(151)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(151)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(151)
		bool tmp6 = (_this->_scale_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(151)
		if ((tmp6)){
			HX_STACK_LINE(151)
			_this->_scale_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(151)
		Dynamic tmp7 = this->set_scale_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(151)
		_this->_scale_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(152)
	{
		HX_STACK_LINE(152)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(152)
		bool tmp6 = (_this->_origin_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(152)
		if ((tmp6)){
			HX_STACK_LINE(152)
			_this->_origin_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(152)
		Dynamic tmp7 = this->set_origin_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(152)
		_this->_origin_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(153)
		bool tmp6 = (_this->_parent_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		if ((tmp6)){
			HX_STACK_LINE(153)
			_this->_parent_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(153)
		Dynamic tmp7 = this->set_parent_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(153)
		_this->_parent_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(154)
		bool tmp6 = (_this->_rotation_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		if ((tmp6)){
			HX_STACK_LINE(154)
			_this->_rotation_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(154)
		Dynamic tmp7 = this->set_rotation_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		_this->_rotation_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(156)
	Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(156)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(156)
	if ((tmp6)){
		HX_STACK_LINE(160)
		{
			HX_STACK_LINE(160)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			bool tmp8 = (tmp7->__Field(HX_HCSTRING("name_unique","\xc5","\xe1","\x83","\x6f"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(160)
			if ((tmp8)){
				HX_STACK_LINE(160)
				Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(160)
				tmp9->__FieldRef(HX_HCSTRING("name_unique","\xc5","\xe1","\x83","\x6f")) = false;
			}
			HX_STACK_LINE(160)
			Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(160)
			tmp9->__Field(HX_HCSTRING("name_unique","\xc5","\xe1","\x83","\x6f"), hx::paccDynamic );
		}
		HX_STACK_LINE(162)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(162)
		bool tmp8 = (tmp7->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(162)
		if ((tmp8)){
			HX_STACK_LINE(163)
			Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(163)
			this->set_name(tmp9->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));
			HX_STACK_LINE(164)
			Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(164)
			if ((tmp10->__Field(HX_HCSTRING("name_unique","\xc5","\xe1","\x83","\x6f"), hx::paccDynamic ))){
				HX_STACK_LINE(165)
				::luxe::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(165)
				::String tmp11 = _g->get_name();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(165)
				::String tmp12 = this->get_id();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(165)
				::String tmp13 = (HX_HCSTRING(".","\x2e","\x00","\x00","\x00") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(165)
				::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(165)
				_g->set_name(tmp14);
			}
		}
		HX_STACK_LINE(170)
		Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(170)
		bool tmp10 = (tmp9->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(170)
		if ((tmp10)){
			HX_STACK_LINE(171)
			Dynamic tmp11 = this->options;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(171)
			::phoenix::Vector _op = tmp11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_op,"_op");
			HX_STACK_LINE(172)
			::phoenix::Vector tmp12 = ::phoenix::Vector_obj::__new(_op->x,_op->y,_op->z,_op->w);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(172)
			this->set_pos(tmp12);
		}
		HX_STACK_LINE(175)
		Dynamic tmp11 = this->options;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(175)
		bool tmp12 = (tmp11->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(175)
		if ((tmp12)){
			HX_STACK_LINE(176)
			Dynamic tmp13 = this->options;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(176)
			::phoenix::Vector _os = tmp13->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(_os,"_os");
			HX_STACK_LINE(177)
			::phoenix::Vector tmp14 = ::phoenix::Vector_obj::__new(_os->x,_os->y,_os->z,_os->w);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(177)
			this->set_scale(tmp14);
		}
		HX_STACK_LINE(184)
		bool _should_add = true;		HX_STACK_VAR(_should_add,"_should_add");
		HX_STACK_LINE(186)
		Dynamic tmp13 = this->options;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(186)
		bool tmp14 = (tmp13->__Field(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(186)
		if ((tmp14)){
			HX_STACK_LINE(187)
			Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(187)
			bool tmp16 = (tmp15->__Field(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(187)
			if ((tmp16)){
				HX_STACK_LINE(188)
				_should_add = false;
				HX_STACK_LINE(171)
				Dynamic();
			}
		}
		HX_STACK_LINE(193)
		Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(193)
		bool tmp16 = (tmp15->__Field(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(193)
		if ((tmp16)){
			HX_STACK_LINE(195)
			_should_add = false;
			HX_STACK_LINE(196)
			Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(196)
			this->set_parent(tmp17->__Field(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"), hx::paccDynamic ));
			HX_STACK_LINE(171)
			Dynamic();
		}
		HX_STACK_LINE(201)
		bool tmp17 = _should_add;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(201)
		if ((tmp17)){
			HX_STACK_LINE(203)
			Dynamic tmp18 = this->options;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(203)
			bool tmp19 = (tmp18->__Field(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(203)
			if ((tmp19)){
				HX_STACK_LINE(204)
				Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(204)
				this->set_scene(tmp20->__Field(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"), hx::paccDynamic ));
				HX_STACK_LINE(171)
				Dynamic();
			}
			else{
				HX_STACK_LINE(207)
				::luxe::Scene tmp20 = ::Luxe_obj::scene;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(207)
				this->set_scene(tmp20);
				HX_STACK_LINE(171)
				Dynamic();
			}
		}
	}
	else{
		HX_STACK_LINE(215)
		::luxe::Scene tmp7 = ::Luxe_obj::scene;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(215)
		this->set_scene(tmp7);
		HX_STACK_LINE(171)
		Dynamic();
	}
	HX_STACK_LINE(223)
	::luxe::Scene tmp7 = this->get_scene();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(223)
	bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(223)
	if ((tmp8)){
		HX_STACK_LINE(227)
		::luxe::Scene tmp9 = this->get_scene();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(227)
		tmp9->add(hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(171)
		Dynamic();
	}
	HX_STACK_LINE(171)
	Dynamic();
}
;
	return null();
}

//Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Entity_obj::init( ){
{
		HX_STACK_FRAME("luxe.Entity","init",0x1800d763,"luxe.Entity.init","luxe/Entity.hx",67,0x55caa482)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,init,(void))

Void Entity_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Entity","update",0xab291d1c,"luxe.Entity.update","luxe/Entity.hx",69,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,update,(void))

Void Entity_obj::onfixedupdate( Float rate){
{
		HX_STACK_FRAME("luxe.Entity","onfixedupdate",0xe3a5550b,"luxe.Entity.onfixedupdate","luxe/Entity.hx",71,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rate,"rate")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onfixedupdate,(void))

Void Entity_obj::onreset( ){
{
		HX_STACK_FRAME("luxe.Entity","onreset",0x64d911dd,"luxe.Entity.onreset","luxe/Entity.hx",74,0x55caa482)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,onreset,(void))

Void Entity_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Entity","ondestroy",0xde639488,"luxe.Entity.ondestroy","luxe/Entity.hx",76,0x55caa482)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,ondestroy,(void))

Void Entity_obj::onkeyup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onkeyup",0x5d0f9dc8,"luxe.Entity.onkeyup","luxe/Entity.hx",79,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onkeyup,(void))

Void Entity_obj::onkeydown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onkeydown",0x6b4ba50f,"luxe.Entity.onkeydown","luxe/Entity.hx",81,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onkeydown,(void))

Void Entity_obj::ontextinput( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ontextinput",0xbd8ecb4b,"luxe.Entity.ontextinput","luxe/Entity.hx",83,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontextinput,(void))

Void Entity_obj::oninputdown( ::String name,Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","oninputdown",0x1870707a,"luxe.Entity.oninputdown","luxe/Entity.hx",86,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,oninputdown,(void))

Void Entity_obj::oninputup( ::String name,Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","oninputup",0x8dfc2873,"luxe.Entity.oninputup","luxe/Entity.hx",88,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,oninputup,(void))

Void Entity_obj::onmousedown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onmousedown",0xfd9a6c15,"luxe.Entity.onmousedown","luxe/Entity.hx",91,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmousedown,(void))

Void Entity_obj::onmouseup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onmouseup",0x7a50774e,"luxe.Entity.onmouseup","luxe/Entity.hx",93,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmouseup,(void))

Void Entity_obj::onmousemove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onmousemove",0x038d56c4,"luxe.Entity.onmousemove","luxe/Entity.hx",95,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmousemove,(void))

Void Entity_obj::onmousewheel( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onmousewheel",0xd572fd88,"luxe.Entity.onmousewheel","luxe/Entity.hx",97,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmousewheel,(void))

Void Entity_obj::ontouchdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ontouchdown",0x16b242af,"luxe.Entity.ontouchdown","luxe/Entity.hx",100,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontouchdown,(void))

Void Entity_obj::ontouchup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ontouchup",0x92d59368,"luxe.Entity.ontouchup","luxe/Entity.hx",102,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontouchup,(void))

Void Entity_obj::ontouchmove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ontouchmove",0x1ca52d5e,"luxe.Entity.ontouchmove","luxe/Entity.hx",104,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontouchmove,(void))

Void Entity_obj::ongamepadup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepadup",0x58e9584a,"luxe.Entity.ongamepadup","luxe/Entity.hx",107,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepadup,(void))

Void Entity_obj::ongamepaddown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepaddown",0x5cea8411,"luxe.Entity.ongamepaddown","luxe/Entity.hx",109,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepaddown,(void))

Void Entity_obj::ongamepadaxis( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepadaxis",0x5af5a850,"luxe.Entity.ongamepadaxis","luxe/Entity.hx",111,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepadaxis,(void))

Void Entity_obj::ongamepaddevice( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepaddevice",0x8cf1f205,"luxe.Entity.ongamepaddevice","luxe/Entity.hx",113,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepaddevice,(void))

Void Entity_obj::onwindowmoved( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowmoved",0xdf0e38d1,"luxe.Entity.onwindowmoved","luxe/Entity.hx",116,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowmoved,(void))

Void Entity_obj::onwindowresized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowresized",0x8286ac0e,"luxe.Entity.onwindowresized","luxe/Entity.hx",118,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowresized,(void))

Void Entity_obj::onwindowsized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowsized",0x4f817521,"luxe.Entity.onwindowsized","luxe/Entity.hx",120,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowsized,(void))

Void Entity_obj::onwindowminimized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowminimized",0xaf3c0f24,"luxe.Entity.onwindowminimized","luxe/Entity.hx",122,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowminimized,(void))

Void Entity_obj::onwindowrestored( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowrestored",0x017cc778,"luxe.Entity.onwindowrestored","luxe/Entity.hx",124,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowrestored,(void))

Dynamic Entity_obj::add( Dynamic _component){
	HX_STACK_FRAME("luxe.Entity","add",0x3aa1812e,"luxe.Entity.add","luxe/Entity.hx",245,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_component,"_component")
	HX_STACK_LINE(246)
	(this->component_count)++;
	HX_STACK_LINE(247)
	::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	Dynamic tmp1 = _component;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	Dynamic tmp2 = tmp->add(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(247)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,add,return )

bool Entity_obj::remove( ::String _name){
	HX_STACK_FRAME("luxe.Entity","remove",0x28ac3357,"luxe.Entity.remove","luxe/Entity.hx",251,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(252)
	(this->component_count)--;
	HX_STACK_LINE(253)
	::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	bool tmp2 = tmp->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(253)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,remove,return )

Dynamic Entity_obj::get( ::String _name,Dynamic __o__in_children){
Dynamic _in_children = __o__in_children.Default(false);
	HX_STACK_FRAME("luxe.Entity","get",0x3aa60fa3,"luxe.Entity.get","luxe/Entity.hx",257,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_in_children,"_in_children")
{
		HX_STACK_LINE(258)
		::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		Dynamic tmp2 = _in_children;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		Dynamic tmp3 = tmp->get(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,get,return )

cpp::ArrayBase Entity_obj::get_any( ::String _name,Dynamic __o__in_children,Dynamic __o__first_only){
Dynamic _in_children = __o__in_children.Default(false);
Dynamic _first_only = __o__first_only.Default(true);
	HX_STACK_FRAME("luxe.Entity","get_any",0xa1bf5d10,"luxe.Entity.get_any","luxe/Entity.hx",262,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_in_children,"_in_children")
	HX_STACK_ARG(_first_only,"_first_only")
{
		HX_STACK_LINE(263)
		::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		Dynamic tmp2 = _in_children;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(263)
		Dynamic tmp3 = _first_only;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(263)
		return tmp->get_any(tmp1,tmp2,tmp3);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,get_any,return )

bool Entity_obj::has( ::String _name){
	HX_STACK_FRAME("luxe.Entity","has",0x3aa6ce67,"luxe.Entity.has","luxe/Entity.hx",267,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(268)
	::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	bool tmp2 = tmp->has(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(268)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,has,return )

Void Entity_obj::_init( ){
{
		HX_STACK_FRAME("luxe.Entity","_init",0x236f833c,"luxe.Entity._init","luxe/Entity.hx",276,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(283)
		this->init();
		HX_STACK_LINE(286)
		this->emit((int)2,null());
		HX_STACK_LINE(288)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		if ((tmp1)){
			HX_STACK_LINE(290)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(290)
			::luxe::structural::OrderedMap tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(290)
			::luxe::structural::OrderedMapIterator tmp4 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(290)
			::luxe::structural::OrderedMapIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(290)
			while((true)){
				HX_STACK_LINE(290)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(290)
				int tmp6 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(290)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(290)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(290)
				if ((tmp8)){
					HX_STACK_LINE(290)
					break;
				}
				HX_STACK_LINE(290)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(290)
				{
					HX_STACK_LINE(290)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(290)
					::String tmp11 = _g->map->_keys->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(290)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(290)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(290)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(290)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(290)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(290)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(292)
				_component->init();
			}
		}
		HX_STACK_LINE(297)
		int tmp2 = this->children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(297)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(297)
		if ((tmp3)){
			HX_STACK_LINE(298)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(298)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(298)
			while((true)){
				HX_STACK_LINE(298)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(298)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(298)
				if ((tmp5)){
					HX_STACK_LINE(298)
					break;
				}
				HX_STACK_LINE(298)
				::luxe::Entity tmp6 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(298)
				::luxe::Entity _child = tmp6;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(298)
				++(_g);
				HX_STACK_LINE(300)
				_child->_init();
			}
		}
		HX_STACK_LINE(305)
		this->inited = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_init,(void))

Void Entity_obj::_reset( Dynamic _){
{
		HX_STACK_FRAME("luxe.Entity","_reset",0x06d32823,"luxe.Entity._reset","luxe/Entity.hx",310,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(315)
		this->onreset();
		HX_STACK_LINE(317)
		this->emit((int)3,null());
		HX_STACK_LINE(319)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		if ((tmp1)){
			HX_STACK_LINE(320)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(320)
			::luxe::structural::OrderedMap tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(320)
			::luxe::structural::OrderedMapIterator tmp4 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(320)
			::luxe::structural::OrderedMapIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(320)
			while((true)){
				HX_STACK_LINE(320)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(320)
				int tmp6 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(320)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(320)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(320)
				if ((tmp8)){
					HX_STACK_LINE(320)
					break;
				}
				HX_STACK_LINE(320)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(320)
				{
					HX_STACK_LINE(320)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(320)
					::String tmp11 = _g->map->_keys->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(320)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(320)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(320)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(320)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(320)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(320)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(322)
				_component->onreset();
			}
		}
		HX_STACK_LINE(327)
		int tmp2 = this->children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(327)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(327)
		if ((tmp3)){
			HX_STACK_LINE(328)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(328)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(328)
			while((true)){
				HX_STACK_LINE(328)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(328)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(328)
				if ((tmp5)){
					HX_STACK_LINE(328)
					break;
				}
				HX_STACK_LINE(328)
				::luxe::Entity tmp6 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(328)
				::luxe::Entity _child = tmp6;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(328)
				++(_g);
				HX_STACK_LINE(329)
				Dynamic tmp7 = _;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(329)
				_child->_reset(tmp7);
				HX_STACK_LINE(138)
				Dynamic();
			}
		}
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			Float tmp4 = this->fixed_rate;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(335)
			Float _rate = tmp4;		HX_STACK_VAR(_rate,"_rate");
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				::snow::api::Timer tmp5 = this->fixed_rate_timer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(335)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(335)
				if ((tmp6)){
					HX_STACK_LINE(335)
					::snow::api::Timer tmp7 = this->fixed_rate_timer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(335)
					tmp7->stop();
					HX_STACK_LINE(335)
					this->fixed_rate_timer = null();
				}
			}
			HX_STACK_LINE(335)
			bool tmp5 = (_rate != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(335)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(335)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(335)
			if ((tmp6)){
				HX_STACK_LINE(335)
				::luxe::Entity tmp8 = this->get_parent();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(335)
				::luxe::Entity tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(335)
				::luxe::Entity tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(335)
				tmp7 = (tmp10 == null());
			}
			else{
				HX_STACK_LINE(335)
				tmp7 = false;
			}
			HX_STACK_LINE(335)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(335)
			if ((tmp7)){
				HX_STACK_LINE(335)
				bool tmp9 = this->destroyed;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(335)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(335)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(335)
				tmp8 = !(tmp11);
			}
			else{
				HX_STACK_LINE(335)
				tmp8 = false;
			}
			HX_STACK_LINE(335)
			if ((tmp8)){
				HX_STACK_LINE(335)
				::snow::api::Timer tmp9 = ::snow::api::Timer_obj::__new(_rate);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(335)
				this->fixed_rate_timer = tmp9;
				HX_STACK_LINE(335)
				Dynamic tmp10 = this->_fixed_update_dyn();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(335)
				::snow::api::Timer tmp11 = this->fixed_rate_timer;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(335)
				tmp11->run = tmp10;
			}
		}
		HX_STACK_LINE(338)
		this->started = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_reset,(void))

Void Entity_obj::destroy( Dynamic __o__from_parent){
Dynamic _from_parent = __o__from_parent.Default(false);
	HX_STACK_FRAME("luxe.Entity","destroy",0x9f86c687,"luxe.Entity.destroy","luxe/Entity.hx",343,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_from_parent,"_from_parent")
{
		HX_STACK_LINE(348)
		int tmp = this->children->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(348)
		if ((tmp1)){
			HX_STACK_LINE(349)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(349)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(349)
			while((true)){
				HX_STACK_LINE(349)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(349)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(349)
				if ((tmp3)){
					HX_STACK_LINE(349)
					break;
				}
				HX_STACK_LINE(349)
				::luxe::Entity tmp4 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(349)
				::luxe::Entity _child = tmp4;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(349)
				++(_g);
				HX_STACK_LINE(351)
				_child->destroy(true);
			}
		}
		HX_STACK_LINE(356)
		this->children = null();
		HX_STACK_LINE(357)
		this->children = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(359)
		int tmp2 = this->component_count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(359)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(359)
		if ((tmp3)){
			HX_STACK_LINE(360)
			::luxe::components::Components tmp4 = this->_components;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(360)
			::luxe::structural::OrderedMap tmp5 = tmp4->components;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(360)
			::luxe::structural::OrderedMapIterator tmp6 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(360)
			::luxe::structural::OrderedMapIterator _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(360)
			while((true)){
				HX_STACK_LINE(360)
				int tmp7 = _g->index;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(360)
				int tmp8 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(360)
				bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(360)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(360)
				if ((tmp10)){
					HX_STACK_LINE(360)
					break;
				}
				HX_STACK_LINE(360)
				::luxe::Component tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(360)
				{
					HX_STACK_LINE(360)
					int tmp12 = (_g->index)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(360)
					::String tmp13 = _g->map->_keys->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(360)
					::String key = tmp13;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(360)
					::haxe::ds::StringMap tmp14 = _g->map->map;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(360)
					::String tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(360)
					::luxe::Component tmp16 = tmp14->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(360)
					tmp11 = tmp16;
				}
				HX_STACK_LINE(360)
				::luxe::Component _component = tmp11;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(362)
				_component->onremoved();
				HX_STACK_LINE(363)
				_component->ondestroy();
			}
		}
		HX_STACK_LINE(368)
		this->emit((int)6,null());
		HX_STACK_LINE(370)
		this->ondestroy();
		HX_STACK_LINE(373)
		::luxe::Entity tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(373)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(373)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(373)
		if ((tmp5)){
			HX_STACK_LINE(373)
			Dynamic tmp7 = _from_parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(373)
			Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(373)
			tmp6 = !(tmp8);
		}
		else{
			HX_STACK_LINE(373)
			tmp6 = false;
		}
		HX_STACK_LINE(373)
		if ((tmp6)){
			HX_STACK_LINE(375)
			::luxe::Entity tmp7 = this->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(375)
			tmp7->_remove_child(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			::snow::api::Timer tmp7 = this->fixed_rate_timer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(379)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(379)
			if ((tmp8)){
				HX_STACK_LINE(379)
				::snow::api::Timer tmp9 = this->fixed_rate_timer;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(379)
				tmp9->stop();
				HX_STACK_LINE(379)
				this->fixed_rate_timer = null();
			}
		}
		HX_STACK_LINE(382)
		this->destroyed = true;
		HX_STACK_LINE(383)
		this->inited = false;
		HX_STACK_LINE(384)
		this->started = false;
		HX_STACK_LINE(389)
		::luxe::Scene tmp7 = this->get_scene();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(389)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(389)
		if ((tmp8)){
			HX_STACK_LINE(390)
			::luxe::Scene tmp9 = this->get_scene();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(390)
			tmp9->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(394)
		::luxe::Events tmp9 = this->events;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(394)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(394)
		if ((tmp10)){
			HX_STACK_LINE(395)
			::luxe::Events tmp11 = this->events;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(395)
			tmp11->destroy();
			HX_STACK_LINE(396)
			this->events = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,destroy,(void))

Void Entity_obj::_update( Float dt){
{
		HX_STACK_FRAME("luxe.Entity","_update",0x707d3135,"luxe.Entity._update","luxe/Entity.hx",402,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(404)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(404)
		if ((tmp)){
			HX_STACK_LINE(406)
			return null();
		}
		HX_STACK_LINE(409)
		bool tmp1 = this->get_active();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(409)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(409)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(409)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(409)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(409)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(409)
		if ((tmp5)){
			HX_STACK_LINE(409)
			bool tmp7 = this->inited;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(409)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(409)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(409)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(409)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(409)
			tmp6 = !(tmp11);
		}
		else{
			HX_STACK_LINE(409)
			tmp6 = true;
		}
		HX_STACK_LINE(409)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(409)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(409)
		if ((tmp7)){
			HX_STACK_LINE(409)
			bool tmp9 = this->started;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(409)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(409)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(409)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(409)
			tmp8 = true;
		}
		HX_STACK_LINE(409)
		if ((tmp8)){
			HX_STACK_LINE(410)
			return null();
		}
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			::phoenix::Transform tmp9 = this->get_transform();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(416)
			::phoenix::Transform _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(416)
			bool tmp10 = (_this->parent != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(416)
			if ((tmp10)){
				HX_STACK_LINE(416)
				bool tmp11 = _this->parent->dirty;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(416)
				if ((tmp11)){
					HX_STACK_LINE(416)
					::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(416)
					bool tmp12 = _this1->dirty;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(416)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(416)
					if ((tmp13)){
						HX_STACK_LINE(416)
						Dynamic();
					}
					else{
						HX_STACK_LINE(416)
						_this1->_cleaning = true;
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::phoenix::Matrix _this2 = _this1->_pos_matrix;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(416)
								e[(int)0] = (int)1;
								HX_STACK_LINE(416)
								e[(int)4] = (int)0;
								HX_STACK_LINE(416)
								e[(int)8] = (int)0;
								HX_STACK_LINE(416)
								::phoenix::Vector tmp14 = _this1->local->pos;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(416)
								Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(416)
								e[(int)12] = tmp15;
								HX_STACK_LINE(416)
								e[(int)1] = (int)0;
								HX_STACK_LINE(416)
								e[(int)5] = (int)1;
								HX_STACK_LINE(416)
								e[(int)9] = (int)0;
								HX_STACK_LINE(416)
								::phoenix::Vector tmp16 = _this1->local->pos;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(416)
								Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(416)
								e[(int)13] = tmp17;
								HX_STACK_LINE(416)
								e[(int)2] = (int)0;
								HX_STACK_LINE(416)
								e[(int)6] = (int)0;
								HX_STACK_LINE(416)
								e[(int)10] = (int)1;
								HX_STACK_LINE(416)
								::phoenix::Vector tmp18 = _this1->local->pos;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(416)
								Float tmp19 = tmp18->z;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(416)
								e[(int)14] = tmp19;
								HX_STACK_LINE(416)
								e[(int)3] = (int)0;
								HX_STACK_LINE(416)
								e[(int)7] = (int)0;
								HX_STACK_LINE(416)
								e[(int)11] = (int)0;
								HX_STACK_LINE(416)
								e[(int)15] = (int)1;
								HX_STACK_LINE(416)
								_this2;
							}
							HX_STACK_LINE(416)
							_this2;
						}
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::phoenix::Matrix _this2 = _this1->_rotation_matrix;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(416)
							::phoenix::Quaternion tmp14 = _this1->local->rotation;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(416)
							::phoenix::Quaternion q = tmp14;		HX_STACK_VAR(q,"q");
							HX_STACK_LINE(416)
							Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(416)
							Float tmp15 = (q->x + q->x);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(416)
							Float x2 = tmp15;		HX_STACK_VAR(x2,"x2");
							HX_STACK_LINE(416)
							Float tmp16 = (q->y + q->y);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(416)
							Float y2 = tmp16;		HX_STACK_VAR(y2,"y2");
							HX_STACK_LINE(416)
							Float tmp17 = (q->z + q->z);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(416)
							Float z2 = tmp17;		HX_STACK_VAR(z2,"z2");
							HX_STACK_LINE(416)
							Float tmp18 = (q->x * x2);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(416)
							Float xx = tmp18;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(416)
							Float tmp19 = (q->x * y2);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(416)
							Float xy = tmp19;		HX_STACK_VAR(xy,"xy");
							HX_STACK_LINE(416)
							Float tmp20 = (q->x * z2);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(416)
							Float xz = tmp20;		HX_STACK_VAR(xz,"xz");
							HX_STACK_LINE(416)
							Float tmp21 = (q->y * y2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(416)
							Float yy = tmp21;		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(416)
							Float tmp22 = (q->y * z2);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(416)
							Float yz = tmp22;		HX_STACK_VAR(yz,"yz");
							HX_STACK_LINE(416)
							Float tmp23 = (q->z * z2);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(416)
							Float zz = tmp23;		HX_STACK_VAR(zz,"zz");
							HX_STACK_LINE(416)
							Float tmp24 = (q->w * x2);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(416)
							Float wx = tmp24;		HX_STACK_VAR(wx,"wx");
							HX_STACK_LINE(416)
							Float tmp25 = (q->w * y2);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(416)
							Float wy = tmp25;		HX_STACK_VAR(wy,"wy");
							HX_STACK_LINE(416)
							Float tmp26 = (q->w * z2);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(416)
							Float wz = tmp26;		HX_STACK_VAR(wz,"wz");
							HX_STACK_LINE(416)
							Float tmp27 = (yy + zz);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(416)
							Float tmp28 = ((int)1 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(416)
							te[(int)0] = tmp28;
							HX_STACK_LINE(416)
							Float tmp29 = (xy - wz);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(416)
							te[(int)4] = tmp29;
							HX_STACK_LINE(416)
							Float tmp30 = (xz + wy);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(416)
							te[(int)8] = tmp30;
							HX_STACK_LINE(416)
							Float tmp31 = (xy + wz);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(416)
							te[(int)1] = tmp31;
							HX_STACK_LINE(416)
							Float tmp32 = (xx + zz);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(416)
							Float tmp33 = ((int)1 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(416)
							te[(int)5] = tmp33;
							HX_STACK_LINE(416)
							Float tmp34 = (yz - wx);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(416)
							te[(int)9] = tmp34;
							HX_STACK_LINE(416)
							Float tmp35 = (xz - wy);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(416)
							te[(int)2] = tmp35;
							HX_STACK_LINE(416)
							Float tmp36 = (yz + wx);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(416)
							te[(int)6] = tmp36;
							HX_STACK_LINE(416)
							Float tmp37 = (xx + yy);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(416)
							Float tmp38 = ((int)1 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(416)
							te[(int)10] = tmp38;
							HX_STACK_LINE(416)
							te[(int)3] = (int)0;
							HX_STACK_LINE(416)
							te[(int)7] = (int)0;
							HX_STACK_LINE(416)
							te[(int)11] = (int)0;
							HX_STACK_LINE(416)
							te[(int)12] = (int)0;
							HX_STACK_LINE(416)
							te[(int)13] = (int)0;
							HX_STACK_LINE(416)
							te[(int)14] = (int)0;
							HX_STACK_LINE(416)
							te[(int)15] = (int)1;
							HX_STACK_LINE(416)
							_this2;
						}
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::phoenix::Matrix _this2 = _this1->_origin_undo_matrix;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(416)
								e[(int)0] = (int)1;
								HX_STACK_LINE(416)
								e[(int)4] = (int)0;
								HX_STACK_LINE(416)
								e[(int)8] = (int)0;
								HX_STACK_LINE(416)
								Float tmp14 = _this1->origin->x;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(416)
								Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(416)
								e[(int)12] = tmp15;
								HX_STACK_LINE(416)
								e[(int)1] = (int)0;
								HX_STACK_LINE(416)
								e[(int)5] = (int)1;
								HX_STACK_LINE(416)
								e[(int)9] = (int)0;
								HX_STACK_LINE(416)
								Float tmp16 = _this1->origin->y;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(416)
								Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(416)
								e[(int)13] = tmp17;
								HX_STACK_LINE(416)
								e[(int)2] = (int)0;
								HX_STACK_LINE(416)
								e[(int)6] = (int)0;
								HX_STACK_LINE(416)
								e[(int)10] = (int)1;
								HX_STACK_LINE(416)
								Float tmp18 = _this1->origin->z;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(416)
								Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(416)
								e[(int)14] = tmp19;
								HX_STACK_LINE(416)
								e[(int)3] = (int)0;
								HX_STACK_LINE(416)
								e[(int)7] = (int)0;
								HX_STACK_LINE(416)
								e[(int)11] = (int)0;
								HX_STACK_LINE(416)
								e[(int)15] = (int)1;
								HX_STACK_LINE(416)
								_this2;
							}
							HX_STACK_LINE(416)
							_this2;
						}
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(416)
							::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(416)
								e[(int)0] = (int)1;
								HX_STACK_LINE(416)
								e[(int)4] = (int)0;
								HX_STACK_LINE(416)
								e[(int)8] = (int)0;
								HX_STACK_LINE(416)
								Float tmp15 = _this1->origin->x;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(416)
								e[(int)12] = tmp15;
								HX_STACK_LINE(416)
								e[(int)1] = (int)0;
								HX_STACK_LINE(416)
								e[(int)5] = (int)1;
								HX_STACK_LINE(416)
								e[(int)9] = (int)0;
								HX_STACK_LINE(416)
								Float tmp16 = _this1->origin->y;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(416)
								e[(int)13] = tmp16;
								HX_STACK_LINE(416)
								e[(int)2] = (int)0;
								HX_STACK_LINE(416)
								e[(int)6] = (int)0;
								HX_STACK_LINE(416)
								e[(int)10] = (int)1;
								HX_STACK_LINE(416)
								Float tmp17 = _this1->origin->z;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(416)
								e[(int)14] = tmp17;
								HX_STACK_LINE(416)
								e[(int)3] = (int)0;
								HX_STACK_LINE(416)
								e[(int)7] = (int)0;
								HX_STACK_LINE(416)
								e[(int)11] = (int)0;
								HX_STACK_LINE(416)
								e[(int)15] = (int)1;
								HX_STACK_LINE(416)
								_this2;
							}
							HX_STACK_LINE(416)
							_this2;
						}
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(416)
							::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
								HX_STACK_LINE(416)
								Array< Float > be = _this1->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
								HX_STACK_LINE(416)
								Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(416)
								Float tmp15 = ae->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(416)
								Float a11 = tmp15;		HX_STACK_VAR(a11,"a11");
								HX_STACK_LINE(416)
								Float tmp16 = ae->__get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(416)
								Float a12 = tmp16;		HX_STACK_VAR(a12,"a12");
								HX_STACK_LINE(416)
								Float tmp17 = ae->__get((int)8);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(416)
								Float a13 = tmp17;		HX_STACK_VAR(a13,"a13");
								HX_STACK_LINE(416)
								Float tmp18 = ae->__get((int)12);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(416)
								Float a14 = tmp18;		HX_STACK_VAR(a14,"a14");
								HX_STACK_LINE(416)
								Float tmp19 = ae->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(416)
								Float a21 = tmp19;		HX_STACK_VAR(a21,"a21");
								HX_STACK_LINE(416)
								Float tmp20 = ae->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(416)
								Float a22 = tmp20;		HX_STACK_VAR(a22,"a22");
								HX_STACK_LINE(416)
								Float tmp21 = ae->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(416)
								Float a23 = tmp21;		HX_STACK_VAR(a23,"a23");
								HX_STACK_LINE(416)
								Float tmp22 = ae->__get((int)13);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(416)
								Float a24 = tmp22;		HX_STACK_VAR(a24,"a24");
								HX_STACK_LINE(416)
								Float tmp23 = ae->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(416)
								Float a31 = tmp23;		HX_STACK_VAR(a31,"a31");
								HX_STACK_LINE(416)
								Float tmp24 = ae->__get((int)6);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(416)
								Float a32 = tmp24;		HX_STACK_VAR(a32,"a32");
								HX_STACK_LINE(416)
								Float tmp25 = ae->__get((int)10);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(416)
								Float a33 = tmp25;		HX_STACK_VAR(a33,"a33");
								HX_STACK_LINE(416)
								Float tmp26 = ae->__get((int)14);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(416)
								Float a34 = tmp26;		HX_STACK_VAR(a34,"a34");
								HX_STACK_LINE(416)
								Float tmp27 = ae->__get((int)3);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(416)
								Float a41 = tmp27;		HX_STACK_VAR(a41,"a41");
								HX_STACK_LINE(416)
								Float tmp28 = ae->__get((int)7);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(416)
								Float a42 = tmp28;		HX_STACK_VAR(a42,"a42");
								HX_STACK_LINE(416)
								Float tmp29 = ae->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(416)
								Float a43 = tmp29;		HX_STACK_VAR(a43,"a43");
								HX_STACK_LINE(416)
								Float tmp30 = ae->__get((int)15);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(416)
								Float a44 = tmp30;		HX_STACK_VAR(a44,"a44");
								HX_STACK_LINE(416)
								Float tmp31 = be->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(416)
								Float b11 = tmp31;		HX_STACK_VAR(b11,"b11");
								HX_STACK_LINE(416)
								Float tmp32 = be->__get((int)4);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(416)
								Float b12 = tmp32;		HX_STACK_VAR(b12,"b12");
								HX_STACK_LINE(416)
								Float tmp33 = be->__get((int)8);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(416)
								Float b13 = tmp33;		HX_STACK_VAR(b13,"b13");
								HX_STACK_LINE(416)
								Float tmp34 = be->__get((int)12);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(416)
								Float b14 = tmp34;		HX_STACK_VAR(b14,"b14");
								HX_STACK_LINE(416)
								Float tmp35 = be->__get((int)1);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(416)
								Float b21 = tmp35;		HX_STACK_VAR(b21,"b21");
								HX_STACK_LINE(416)
								Float tmp36 = be->__get((int)5);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(416)
								Float b22 = tmp36;		HX_STACK_VAR(b22,"b22");
								HX_STACK_LINE(416)
								Float tmp37 = be->__get((int)9);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(416)
								Float b23 = tmp37;		HX_STACK_VAR(b23,"b23");
								HX_STACK_LINE(416)
								Float tmp38 = be->__get((int)13);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(416)
								Float b24 = tmp38;		HX_STACK_VAR(b24,"b24");
								HX_STACK_LINE(416)
								Float tmp39 = be->__get((int)2);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(416)
								Float b31 = tmp39;		HX_STACK_VAR(b31,"b31");
								HX_STACK_LINE(416)
								Float tmp40 = be->__get((int)6);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(416)
								Float b32 = tmp40;		HX_STACK_VAR(b32,"b32");
								HX_STACK_LINE(416)
								Float tmp41 = be->__get((int)10);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(416)
								Float b33 = tmp41;		HX_STACK_VAR(b33,"b33");
								HX_STACK_LINE(416)
								Float tmp42 = be->__get((int)14);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(416)
								Float b34 = tmp42;		HX_STACK_VAR(b34,"b34");
								HX_STACK_LINE(416)
								Float tmp43 = be->__get((int)3);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(416)
								Float b41 = tmp43;		HX_STACK_VAR(b41,"b41");
								HX_STACK_LINE(416)
								Float tmp44 = be->__get((int)7);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(416)
								Float b42 = tmp44;		HX_STACK_VAR(b42,"b42");
								HX_STACK_LINE(416)
								Float tmp45 = be->__get((int)11);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(416)
								Float b43 = tmp45;		HX_STACK_VAR(b43,"b43");
								HX_STACK_LINE(416)
								Float tmp46 = be->__get((int)15);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(416)
								Float b44 = tmp46;		HX_STACK_VAR(b44,"b44");
								HX_STACK_LINE(416)
								Float tmp47 = (a11 * b11);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(416)
								Float tmp48 = (a12 * b21);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(416)
								Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(416)
								Float tmp50 = (a13 * b31);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(416)
								Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(416)
								Float tmp52 = (a14 * b41);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(416)
								Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(416)
								te[(int)0] = tmp53;
								HX_STACK_LINE(416)
								Float tmp54 = (a11 * b12);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(416)
								Float tmp55 = (a12 * b22);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(416)
								Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(416)
								Float tmp57 = (a13 * b32);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(416)
								Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(416)
								Float tmp59 = (a14 * b42);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(416)
								Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(416)
								te[(int)4] = tmp60;
								HX_STACK_LINE(416)
								Float tmp61 = (a11 * b13);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(416)
								Float tmp62 = (a12 * b23);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(416)
								Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(416)
								Float tmp64 = (a13 * b33);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(416)
								Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(416)
								Float tmp66 = (a14 * b43);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(416)
								Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(416)
								te[(int)8] = tmp67;
								HX_STACK_LINE(416)
								Float tmp68 = (a11 * b14);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(416)
								Float tmp69 = (a12 * b24);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(416)
								Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(416)
								Float tmp71 = (a13 * b34);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(416)
								Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(416)
								Float tmp73 = (a14 * b44);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(416)
								Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(416)
								te[(int)12] = tmp74;
								HX_STACK_LINE(416)
								Float tmp75 = (a21 * b11);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(416)
								Float tmp76 = (a22 * b21);		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(416)
								Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(416)
								Float tmp78 = (a23 * b31);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(416)
								Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(416)
								Float tmp80 = (a24 * b41);		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(416)
								Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(416)
								te[(int)1] = tmp81;
								HX_STACK_LINE(416)
								Float tmp82 = (a21 * b12);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(416)
								Float tmp83 = (a22 * b22);		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(416)
								Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(416)
								Float tmp85 = (a23 * b32);		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(416)
								Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(416)
								Float tmp87 = (a24 * b42);		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(416)
								Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(416)
								te[(int)5] = tmp88;
								HX_STACK_LINE(416)
								Float tmp89 = (a21 * b13);		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(416)
								Float tmp90 = (a22 * b23);		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(416)
								Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(416)
								Float tmp92 = (a23 * b33);		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(416)
								Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(416)
								Float tmp94 = (a24 * b43);		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(416)
								Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(416)
								te[(int)9] = tmp95;
								HX_STACK_LINE(416)
								Float tmp96 = (a21 * b14);		HX_STACK_VAR(tmp96,"tmp96");
								HX_STACK_LINE(416)
								Float tmp97 = (a22 * b24);		HX_STACK_VAR(tmp97,"tmp97");
								HX_STACK_LINE(416)
								Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
								HX_STACK_LINE(416)
								Float tmp99 = (a23 * b34);		HX_STACK_VAR(tmp99,"tmp99");
								HX_STACK_LINE(416)
								Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
								HX_STACK_LINE(416)
								Float tmp101 = (a24 * b44);		HX_STACK_VAR(tmp101,"tmp101");
								HX_STACK_LINE(416)
								Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(416)
								te[(int)13] = tmp102;
								HX_STACK_LINE(416)
								Float tmp103 = (a31 * b11);		HX_STACK_VAR(tmp103,"tmp103");
								HX_STACK_LINE(416)
								Float tmp104 = (a32 * b21);		HX_STACK_VAR(tmp104,"tmp104");
								HX_STACK_LINE(416)
								Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
								HX_STACK_LINE(416)
								Float tmp106 = (a33 * b31);		HX_STACK_VAR(tmp106,"tmp106");
								HX_STACK_LINE(416)
								Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(416)
								Float tmp108 = (a34 * b41);		HX_STACK_VAR(tmp108,"tmp108");
								HX_STACK_LINE(416)
								Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
								HX_STACK_LINE(416)
								te[(int)2] = tmp109;
								HX_STACK_LINE(416)
								Float tmp110 = (a31 * b12);		HX_STACK_VAR(tmp110,"tmp110");
								HX_STACK_LINE(416)
								Float tmp111 = (a32 * b22);		HX_STACK_VAR(tmp111,"tmp111");
								HX_STACK_LINE(416)
								Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
								HX_STACK_LINE(416)
								Float tmp113 = (a33 * b32);		HX_STACK_VAR(tmp113,"tmp113");
								HX_STACK_LINE(416)
								Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(416)
								Float tmp115 = (a34 * b42);		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(416)
								Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(416)
								te[(int)6] = tmp116;
								HX_STACK_LINE(416)
								Float tmp117 = (a31 * b13);		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(416)
								Float tmp118 = (a32 * b23);		HX_STACK_VAR(tmp118,"tmp118");
								HX_STACK_LINE(416)
								Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
								HX_STACK_LINE(416)
								Float tmp120 = (a33 * b33);		HX_STACK_VAR(tmp120,"tmp120");
								HX_STACK_LINE(416)
								Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
								HX_STACK_LINE(416)
								Float tmp122 = (a34 * b43);		HX_STACK_VAR(tmp122,"tmp122");
								HX_STACK_LINE(416)
								Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
								HX_STACK_LINE(416)
								te[(int)10] = tmp123;
								HX_STACK_LINE(416)
								Float tmp124 = (a31 * b14);		HX_STACK_VAR(tmp124,"tmp124");
								HX_STACK_LINE(416)
								Float tmp125 = (a32 * b24);		HX_STACK_VAR(tmp125,"tmp125");
								HX_STACK_LINE(416)
								Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
								HX_STACK_LINE(416)
								Float tmp127 = (a33 * b34);		HX_STACK_VAR(tmp127,"tmp127");
								HX_STACK_LINE(416)
								Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
								HX_STACK_LINE(416)
								Float tmp129 = (a34 * b44);		HX_STACK_VAR(tmp129,"tmp129");
								HX_STACK_LINE(416)
								Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
								HX_STACK_LINE(416)
								te[(int)14] = tmp130;
								HX_STACK_LINE(416)
								Float tmp131 = (a41 * b11);		HX_STACK_VAR(tmp131,"tmp131");
								HX_STACK_LINE(416)
								Float tmp132 = (a42 * b21);		HX_STACK_VAR(tmp132,"tmp132");
								HX_STACK_LINE(416)
								Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
								HX_STACK_LINE(416)
								Float tmp134 = (a43 * b31);		HX_STACK_VAR(tmp134,"tmp134");
								HX_STACK_LINE(416)
								Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
								HX_STACK_LINE(416)
								Float tmp136 = (a44 * b41);		HX_STACK_VAR(tmp136,"tmp136");
								HX_STACK_LINE(416)
								Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
								HX_STACK_LINE(416)
								te[(int)3] = tmp137;
								HX_STACK_LINE(416)
								Float tmp138 = (a41 * b12);		HX_STACK_VAR(tmp138,"tmp138");
								HX_STACK_LINE(416)
								Float tmp139 = (a42 * b22);		HX_STACK_VAR(tmp139,"tmp139");
								HX_STACK_LINE(416)
								Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
								HX_STACK_LINE(416)
								Float tmp141 = (a43 * b32);		HX_STACK_VAR(tmp141,"tmp141");
								HX_STACK_LINE(416)
								Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
								HX_STACK_LINE(416)
								Float tmp143 = (a44 * b42);		HX_STACK_VAR(tmp143,"tmp143");
								HX_STACK_LINE(416)
								Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
								HX_STACK_LINE(416)
								te[(int)7] = tmp144;
								HX_STACK_LINE(416)
								Float tmp145 = (a41 * b13);		HX_STACK_VAR(tmp145,"tmp145");
								HX_STACK_LINE(416)
								Float tmp146 = (a42 * b23);		HX_STACK_VAR(tmp146,"tmp146");
								HX_STACK_LINE(416)
								Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
								HX_STACK_LINE(416)
								Float tmp148 = (a43 * b33);		HX_STACK_VAR(tmp148,"tmp148");
								HX_STACK_LINE(416)
								Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
								HX_STACK_LINE(416)
								Float tmp150 = (a44 * b43);		HX_STACK_VAR(tmp150,"tmp150");
								HX_STACK_LINE(416)
								Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
								HX_STACK_LINE(416)
								te[(int)11] = tmp151;
								HX_STACK_LINE(416)
								Float tmp152 = (a41 * b14);		HX_STACK_VAR(tmp152,"tmp152");
								HX_STACK_LINE(416)
								Float tmp153 = (a42 * b24);		HX_STACK_VAR(tmp153,"tmp153");
								HX_STACK_LINE(416)
								Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
								HX_STACK_LINE(416)
								Float tmp155 = (a43 * b34);		HX_STACK_VAR(tmp155,"tmp155");
								HX_STACK_LINE(416)
								Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
								HX_STACK_LINE(416)
								Float tmp157 = (a44 * b44);		HX_STACK_VAR(tmp157,"tmp157");
								HX_STACK_LINE(416)
								Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
								HX_STACK_LINE(416)
								te[(int)15] = tmp158;
								HX_STACK_LINE(416)
								_this2;
							}
						}
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(416)
							::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(416)
							::phoenix::Vector tmp15 = _this1->local->scale;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(416)
							::phoenix::Vector _v = tmp15;		HX_STACK_VAR(_v,"_v");
							HX_STACK_LINE(416)
							Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(416)
							Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(416)
							Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(416)
							Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(416)
							Float tmp16 = _x;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(416)
							hx::MultEq(te[(int)0],tmp16);
							HX_STACK_LINE(416)
							Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(416)
							hx::MultEq(te[(int)4],tmp17);
							HX_STACK_LINE(416)
							Float tmp18 = _z;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(416)
							hx::MultEq(te[(int)8],tmp18);
							HX_STACK_LINE(416)
							Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(416)
							hx::MultEq(te[(int)1],tmp19);
							HX_STACK_LINE(416)
							Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(416)
							hx::MultEq(te[(int)5],tmp20);
							HX_STACK_LINE(416)
							Float tmp21 = _z;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(416)
							hx::MultEq(te[(int)9],tmp21);
							HX_STACK_LINE(416)
							Float tmp22 = _x;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(416)
							hx::MultEq(te[(int)2],tmp22);
							HX_STACK_LINE(416)
							Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(416)
							hx::MultEq(te[(int)6],tmp23);
							HX_STACK_LINE(416)
							Float tmp24 = _z;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(416)
							hx::MultEq(te[(int)10],tmp24);
							HX_STACK_LINE(416)
							Float tmp25 = _x;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(416)
							hx::MultEq(te[(int)3],tmp25);
							HX_STACK_LINE(416)
							Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(416)
							hx::MultEq(te[(int)7],tmp26);
							HX_STACK_LINE(416)
							Float tmp27 = _z;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(416)
							hx::MultEq(te[(int)11],tmp27);
							HX_STACK_LINE(416)
							_this2;
						}
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(416)
							::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(416)
							::phoenix::Vector tmp15 = _this1->local->pos;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(416)
							::phoenix::Vector _v = tmp15;		HX_STACK_VAR(_v,"_v");
							HX_STACK_LINE(416)
							Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(416)
							Float tmp16 = _v->x;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(416)
							te[(int)12] = tmp16;
							HX_STACK_LINE(416)
							Float tmp17 = _v->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(416)
							te[(int)13] = tmp17;
							HX_STACK_LINE(416)
							Float tmp18 = _v->z;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(416)
							te[(int)14] = tmp18;
							HX_STACK_LINE(416)
							_this2;
						}
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(416)
							::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
								HX_STACK_LINE(416)
								Array< Float > be = _this1->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
								HX_STACK_LINE(416)
								Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(416)
								Float tmp15 = ae->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(416)
								Float a11 = tmp15;		HX_STACK_VAR(a11,"a11");
								HX_STACK_LINE(416)
								Float tmp16 = ae->__get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(416)
								Float a12 = tmp16;		HX_STACK_VAR(a12,"a12");
								HX_STACK_LINE(416)
								Float tmp17 = ae->__get((int)8);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(416)
								Float a13 = tmp17;		HX_STACK_VAR(a13,"a13");
								HX_STACK_LINE(416)
								Float tmp18 = ae->__get((int)12);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(416)
								Float a14 = tmp18;		HX_STACK_VAR(a14,"a14");
								HX_STACK_LINE(416)
								Float tmp19 = ae->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(416)
								Float a21 = tmp19;		HX_STACK_VAR(a21,"a21");
								HX_STACK_LINE(416)
								Float tmp20 = ae->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(416)
								Float a22 = tmp20;		HX_STACK_VAR(a22,"a22");
								HX_STACK_LINE(416)
								Float tmp21 = ae->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(416)
								Float a23 = tmp21;		HX_STACK_VAR(a23,"a23");
								HX_STACK_LINE(416)
								Float tmp22 = ae->__get((int)13);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(416)
								Float a24 = tmp22;		HX_STACK_VAR(a24,"a24");
								HX_STACK_LINE(416)
								Float tmp23 = ae->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(416)
								Float a31 = tmp23;		HX_STACK_VAR(a31,"a31");
								HX_STACK_LINE(416)
								Float tmp24 = ae->__get((int)6);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(416)
								Float a32 = tmp24;		HX_STACK_VAR(a32,"a32");
								HX_STACK_LINE(416)
								Float tmp25 = ae->__get((int)10);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(416)
								Float a33 = tmp25;		HX_STACK_VAR(a33,"a33");
								HX_STACK_LINE(416)
								Float tmp26 = ae->__get((int)14);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(416)
								Float a34 = tmp26;		HX_STACK_VAR(a34,"a34");
								HX_STACK_LINE(416)
								Float tmp27 = ae->__get((int)3);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(416)
								Float a41 = tmp27;		HX_STACK_VAR(a41,"a41");
								HX_STACK_LINE(416)
								Float tmp28 = ae->__get((int)7);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(416)
								Float a42 = tmp28;		HX_STACK_VAR(a42,"a42");
								HX_STACK_LINE(416)
								Float tmp29 = ae->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(416)
								Float a43 = tmp29;		HX_STACK_VAR(a43,"a43");
								HX_STACK_LINE(416)
								Float tmp30 = ae->__get((int)15);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(416)
								Float a44 = tmp30;		HX_STACK_VAR(a44,"a44");
								HX_STACK_LINE(416)
								Float tmp31 = be->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(416)
								Float b11 = tmp31;		HX_STACK_VAR(b11,"b11");
								HX_STACK_LINE(416)
								Float tmp32 = be->__get((int)4);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(416)
								Float b12 = tmp32;		HX_STACK_VAR(b12,"b12");
								HX_STACK_LINE(416)
								Float tmp33 = be->__get((int)8);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(416)
								Float b13 = tmp33;		HX_STACK_VAR(b13,"b13");
								HX_STACK_LINE(416)
								Float tmp34 = be->__get((int)12);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(416)
								Float b14 = tmp34;		HX_STACK_VAR(b14,"b14");
								HX_STACK_LINE(416)
								Float tmp35 = be->__get((int)1);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(416)
								Float b21 = tmp35;		HX_STACK_VAR(b21,"b21");
								HX_STACK_LINE(416)
								Float tmp36 = be->__get((int)5);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(416)
								Float b22 = tmp36;		HX_STACK_VAR(b22,"b22");
								HX_STACK_LINE(416)
								Float tmp37 = be->__get((int)9);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(416)
								Float b23 = tmp37;		HX_STACK_VAR(b23,"b23");
								HX_STACK_LINE(416)
								Float tmp38 = be->__get((int)13);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(416)
								Float b24 = tmp38;		HX_STACK_VAR(b24,"b24");
								HX_STACK_LINE(416)
								Float tmp39 = be->__get((int)2);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(416)
								Float b31 = tmp39;		HX_STACK_VAR(b31,"b31");
								HX_STACK_LINE(416)
								Float tmp40 = be->__get((int)6);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(416)
								Float b32 = tmp40;		HX_STACK_VAR(b32,"b32");
								HX_STACK_LINE(416)
								Float tmp41 = be->__get((int)10);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(416)
								Float b33 = tmp41;		HX_STACK_VAR(b33,"b33");
								HX_STACK_LINE(416)
								Float tmp42 = be->__get((int)14);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(416)
								Float b34 = tmp42;		HX_STACK_VAR(b34,"b34");
								HX_STACK_LINE(416)
								Float tmp43 = be->__get((int)3);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(416)
								Float b41 = tmp43;		HX_STACK_VAR(b41,"b41");
								HX_STACK_LINE(416)
								Float tmp44 = be->__get((int)7);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(416)
								Float b42 = tmp44;		HX_STACK_VAR(b42,"b42");
								HX_STACK_LINE(416)
								Float tmp45 = be->__get((int)11);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(416)
								Float b43 = tmp45;		HX_STACK_VAR(b43,"b43");
								HX_STACK_LINE(416)
								Float tmp46 = be->__get((int)15);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(416)
								Float b44 = tmp46;		HX_STACK_VAR(b44,"b44");
								HX_STACK_LINE(416)
								Float tmp47 = (a11 * b11);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(416)
								Float tmp48 = (a12 * b21);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(416)
								Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(416)
								Float tmp50 = (a13 * b31);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(416)
								Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(416)
								Float tmp52 = (a14 * b41);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(416)
								Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(416)
								te[(int)0] = tmp53;
								HX_STACK_LINE(416)
								Float tmp54 = (a11 * b12);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(416)
								Float tmp55 = (a12 * b22);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(416)
								Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(416)
								Float tmp57 = (a13 * b32);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(416)
								Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(416)
								Float tmp59 = (a14 * b42);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(416)
								Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(416)
								te[(int)4] = tmp60;
								HX_STACK_LINE(416)
								Float tmp61 = (a11 * b13);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(416)
								Float tmp62 = (a12 * b23);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(416)
								Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(416)
								Float tmp64 = (a13 * b33);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(416)
								Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(416)
								Float tmp66 = (a14 * b43);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(416)
								Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(416)
								te[(int)8] = tmp67;
								HX_STACK_LINE(416)
								Float tmp68 = (a11 * b14);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(416)
								Float tmp69 = (a12 * b24);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(416)
								Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(416)
								Float tmp71 = (a13 * b34);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(416)
								Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(416)
								Float tmp73 = (a14 * b44);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(416)
								Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(416)
								te[(int)12] = tmp74;
								HX_STACK_LINE(416)
								Float tmp75 = (a21 * b11);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(416)
								Float tmp76 = (a22 * b21);		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(416)
								Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(416)
								Float tmp78 = (a23 * b31);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(416)
								Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(416)
								Float tmp80 = (a24 * b41);		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(416)
								Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(416)
								te[(int)1] = tmp81;
								HX_STACK_LINE(416)
								Float tmp82 = (a21 * b12);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(416)
								Float tmp83 = (a22 * b22);		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(416)
								Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(416)
								Float tmp85 = (a23 * b32);		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(416)
								Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(416)
								Float tmp87 = (a24 * b42);		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(416)
								Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(416)
								te[(int)5] = tmp88;
								HX_STACK_LINE(416)
								Float tmp89 = (a21 * b13);		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(416)
								Float tmp90 = (a22 * b23);		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(416)
								Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(416)
								Float tmp92 = (a23 * b33);		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(416)
								Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(416)
								Float tmp94 = (a24 * b43);		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(416)
								Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(416)
								te[(int)9] = tmp95;
								HX_STACK_LINE(416)
								Float tmp96 = (a21 * b14);		HX_STACK_VAR(tmp96,"tmp96");
								HX_STACK_LINE(416)
								Float tmp97 = (a22 * b24);		HX_STACK_VAR(tmp97,"tmp97");
								HX_STACK_LINE(416)
								Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
								HX_STACK_LINE(416)
								Float tmp99 = (a23 * b34);		HX_STACK_VAR(tmp99,"tmp99");
								HX_STACK_LINE(416)
								Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
								HX_STACK_LINE(416)
								Float tmp101 = (a24 * b44);		HX_STACK_VAR(tmp101,"tmp101");
								HX_STACK_LINE(416)
								Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(416)
								te[(int)13] = tmp102;
								HX_STACK_LINE(416)
								Float tmp103 = (a31 * b11);		HX_STACK_VAR(tmp103,"tmp103");
								HX_STACK_LINE(416)
								Float tmp104 = (a32 * b21);		HX_STACK_VAR(tmp104,"tmp104");
								HX_STACK_LINE(416)
								Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
								HX_STACK_LINE(416)
								Float tmp106 = (a33 * b31);		HX_STACK_VAR(tmp106,"tmp106");
								HX_STACK_LINE(416)
								Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(416)
								Float tmp108 = (a34 * b41);		HX_STACK_VAR(tmp108,"tmp108");
								HX_STACK_LINE(416)
								Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
								HX_STACK_LINE(416)
								te[(int)2] = tmp109;
								HX_STACK_LINE(416)
								Float tmp110 = (a31 * b12);		HX_STACK_VAR(tmp110,"tmp110");
								HX_STACK_LINE(416)
								Float tmp111 = (a32 * b22);		HX_STACK_VAR(tmp111,"tmp111");
								HX_STACK_LINE(416)
								Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
								HX_STACK_LINE(416)
								Float tmp113 = (a33 * b32);		HX_STACK_VAR(tmp113,"tmp113");
								HX_STACK_LINE(416)
								Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(416)
								Float tmp115 = (a34 * b42);		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(416)
								Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(416)
								te[(int)6] = tmp116;
								HX_STACK_LINE(416)
								Float tmp117 = (a31 * b13);		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(416)
								Float tmp118 = (a32 * b23);		HX_STACK_VAR(tmp118,"tmp118");
								HX_STACK_LINE(416)
								Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
								HX_STACK_LINE(416)
								Float tmp120 = (a33 * b33);		HX_STACK_VAR(tmp120,"tmp120");
								HX_STACK_LINE(416)
								Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
								HX_STACK_LINE(416)
								Float tmp122 = (a34 * b43);		HX_STACK_VAR(tmp122,"tmp122");
								HX_STACK_LINE(416)
								Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
								HX_STACK_LINE(416)
								te[(int)10] = tmp123;
								HX_STACK_LINE(416)
								Float tmp124 = (a31 * b14);		HX_STACK_VAR(tmp124,"tmp124");
								HX_STACK_LINE(416)
								Float tmp125 = (a32 * b24);		HX_STACK_VAR(tmp125,"tmp125");
								HX_STACK_LINE(416)
								Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
								HX_STACK_LINE(416)
								Float tmp127 = (a33 * b34);		HX_STACK_VAR(tmp127,"tmp127");
								HX_STACK_LINE(416)
								Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
								HX_STACK_LINE(416)
								Float tmp129 = (a34 * b44);		HX_STACK_VAR(tmp129,"tmp129");
								HX_STACK_LINE(416)
								Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
								HX_STACK_LINE(416)
								te[(int)14] = tmp130;
								HX_STACK_LINE(416)
								Float tmp131 = (a41 * b11);		HX_STACK_VAR(tmp131,"tmp131");
								HX_STACK_LINE(416)
								Float tmp132 = (a42 * b21);		HX_STACK_VAR(tmp132,"tmp132");
								HX_STACK_LINE(416)
								Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
								HX_STACK_LINE(416)
								Float tmp134 = (a43 * b31);		HX_STACK_VAR(tmp134,"tmp134");
								HX_STACK_LINE(416)
								Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
								HX_STACK_LINE(416)
								Float tmp136 = (a44 * b41);		HX_STACK_VAR(tmp136,"tmp136");
								HX_STACK_LINE(416)
								Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
								HX_STACK_LINE(416)
								te[(int)3] = tmp137;
								HX_STACK_LINE(416)
								Float tmp138 = (a41 * b12);		HX_STACK_VAR(tmp138,"tmp138");
								HX_STACK_LINE(416)
								Float tmp139 = (a42 * b22);		HX_STACK_VAR(tmp139,"tmp139");
								HX_STACK_LINE(416)
								Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
								HX_STACK_LINE(416)
								Float tmp141 = (a43 * b32);		HX_STACK_VAR(tmp141,"tmp141");
								HX_STACK_LINE(416)
								Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
								HX_STACK_LINE(416)
								Float tmp143 = (a44 * b42);		HX_STACK_VAR(tmp143,"tmp143");
								HX_STACK_LINE(416)
								Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
								HX_STACK_LINE(416)
								te[(int)7] = tmp144;
								HX_STACK_LINE(416)
								Float tmp145 = (a41 * b13);		HX_STACK_VAR(tmp145,"tmp145");
								HX_STACK_LINE(416)
								Float tmp146 = (a42 * b23);		HX_STACK_VAR(tmp146,"tmp146");
								HX_STACK_LINE(416)
								Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
								HX_STACK_LINE(416)
								Float tmp148 = (a43 * b33);		HX_STACK_VAR(tmp148,"tmp148");
								HX_STACK_LINE(416)
								Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
								HX_STACK_LINE(416)
								Float tmp150 = (a44 * b43);		HX_STACK_VAR(tmp150,"tmp150");
								HX_STACK_LINE(416)
								Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
								HX_STACK_LINE(416)
								te[(int)11] = tmp151;
								HX_STACK_LINE(416)
								Float tmp152 = (a41 * b14);		HX_STACK_VAR(tmp152,"tmp152");
								HX_STACK_LINE(416)
								Float tmp153 = (a42 * b24);		HX_STACK_VAR(tmp153,"tmp153");
								HX_STACK_LINE(416)
								Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
								HX_STACK_LINE(416)
								Float tmp155 = (a43 * b34);		HX_STACK_VAR(tmp155,"tmp155");
								HX_STACK_LINE(416)
								Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
								HX_STACK_LINE(416)
								Float tmp157 = (a44 * b44);		HX_STACK_VAR(tmp157,"tmp157");
								HX_STACK_LINE(416)
								Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
								HX_STACK_LINE(416)
								te[(int)15] = tmp158;
								HX_STACK_LINE(416)
								_this2;
							}
						}
						HX_STACK_LINE(416)
						bool tmp14 = (_this1->parent != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(416)
						if ((tmp14)){
							HX_STACK_LINE(416)
							::phoenix::Spatial tmp15 = _this1->get_world();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(416)
							::phoenix::Spatial _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(416)
							::phoenix::Matrix tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								::phoenix::Matrix tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									::phoenix::Spatial tmp18 = _this1->get_world();		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(416)
									::phoenix::Spatial _this3 = tmp18;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(416)
									tmp17 = _this3->matrix;
								}
								HX_STACK_LINE(416)
								::phoenix::Matrix _this3 = tmp17;		HX_STACK_VAR(_this3,"_this3");
								HX_STACK_LINE(416)
								::phoenix::Matrix tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									::phoenix::Spatial tmp19 = _this1->parent->get_world();		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(416)
									::phoenix::Spatial _this4 = tmp19;		HX_STACK_VAR(_this4,"_this4");
									HX_STACK_LINE(416)
									tmp18 = _this4->matrix;
								}
								HX_STACK_LINE(416)
								::phoenix::Matrix _a = tmp18;		HX_STACK_VAR(_a,"_a");
								HX_STACK_LINE(416)
								Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
								HX_STACK_LINE(416)
								::phoenix::Matrix tmp19 = _this1->local->matrix;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(416)
								Array< Float > be = tmp19->elements;		HX_STACK_VAR(be,"be");
								HX_STACK_LINE(416)
								Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(416)
								Float tmp20 = ae->__get((int)0);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(416)
								Float a11 = tmp20;		HX_STACK_VAR(a11,"a11");
								HX_STACK_LINE(416)
								Float tmp21 = ae->__get((int)4);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(416)
								Float a12 = tmp21;		HX_STACK_VAR(a12,"a12");
								HX_STACK_LINE(416)
								Float tmp22 = ae->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(416)
								Float a13 = tmp22;		HX_STACK_VAR(a13,"a13");
								HX_STACK_LINE(416)
								Float tmp23 = ae->__get((int)12);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(416)
								Float a14 = tmp23;		HX_STACK_VAR(a14,"a14");
								HX_STACK_LINE(416)
								Float tmp24 = ae->__get((int)1);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(416)
								Float a21 = tmp24;		HX_STACK_VAR(a21,"a21");
								HX_STACK_LINE(416)
								Float tmp25 = ae->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(416)
								Float a22 = tmp25;		HX_STACK_VAR(a22,"a22");
								HX_STACK_LINE(416)
								Float tmp26 = ae->__get((int)9);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(416)
								Float a23 = tmp26;		HX_STACK_VAR(a23,"a23");
								HX_STACK_LINE(416)
								Float tmp27 = ae->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(416)
								Float a24 = tmp27;		HX_STACK_VAR(a24,"a24");
								HX_STACK_LINE(416)
								Float tmp28 = ae->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(416)
								Float a31 = tmp28;		HX_STACK_VAR(a31,"a31");
								HX_STACK_LINE(416)
								Float tmp29 = ae->__get((int)6);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(416)
								Float a32 = tmp29;		HX_STACK_VAR(a32,"a32");
								HX_STACK_LINE(416)
								Float tmp30 = ae->__get((int)10);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(416)
								Float a33 = tmp30;		HX_STACK_VAR(a33,"a33");
								HX_STACK_LINE(416)
								Float tmp31 = ae->__get((int)14);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(416)
								Float a34 = tmp31;		HX_STACK_VAR(a34,"a34");
								HX_STACK_LINE(416)
								Float tmp32 = ae->__get((int)3);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(416)
								Float a41 = tmp32;		HX_STACK_VAR(a41,"a41");
								HX_STACK_LINE(416)
								Float tmp33 = ae->__get((int)7);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(416)
								Float a42 = tmp33;		HX_STACK_VAR(a42,"a42");
								HX_STACK_LINE(416)
								Float tmp34 = ae->__get((int)11);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(416)
								Float a43 = tmp34;		HX_STACK_VAR(a43,"a43");
								HX_STACK_LINE(416)
								Float tmp35 = ae->__get((int)15);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(416)
								Float a44 = tmp35;		HX_STACK_VAR(a44,"a44");
								HX_STACK_LINE(416)
								Float tmp36 = be->__get((int)0);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(416)
								Float b11 = tmp36;		HX_STACK_VAR(b11,"b11");
								HX_STACK_LINE(416)
								Float tmp37 = be->__get((int)4);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(416)
								Float b12 = tmp37;		HX_STACK_VAR(b12,"b12");
								HX_STACK_LINE(416)
								Float tmp38 = be->__get((int)8);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(416)
								Float b13 = tmp38;		HX_STACK_VAR(b13,"b13");
								HX_STACK_LINE(416)
								Float tmp39 = be->__get((int)12);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(416)
								Float b14 = tmp39;		HX_STACK_VAR(b14,"b14");
								HX_STACK_LINE(416)
								Float tmp40 = be->__get((int)1);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(416)
								Float b21 = tmp40;		HX_STACK_VAR(b21,"b21");
								HX_STACK_LINE(416)
								Float tmp41 = be->__get((int)5);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(416)
								Float b22 = tmp41;		HX_STACK_VAR(b22,"b22");
								HX_STACK_LINE(416)
								Float tmp42 = be->__get((int)9);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(416)
								Float b23 = tmp42;		HX_STACK_VAR(b23,"b23");
								HX_STACK_LINE(416)
								Float tmp43 = be->__get((int)13);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(416)
								Float b24 = tmp43;		HX_STACK_VAR(b24,"b24");
								HX_STACK_LINE(416)
								Float tmp44 = be->__get((int)2);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(416)
								Float b31 = tmp44;		HX_STACK_VAR(b31,"b31");
								HX_STACK_LINE(416)
								Float tmp45 = be->__get((int)6);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(416)
								Float b32 = tmp45;		HX_STACK_VAR(b32,"b32");
								HX_STACK_LINE(416)
								Float tmp46 = be->__get((int)10);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(416)
								Float b33 = tmp46;		HX_STACK_VAR(b33,"b33");
								HX_STACK_LINE(416)
								Float tmp47 = be->__get((int)14);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(416)
								Float b34 = tmp47;		HX_STACK_VAR(b34,"b34");
								HX_STACK_LINE(416)
								Float tmp48 = be->__get((int)3);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(416)
								Float b41 = tmp48;		HX_STACK_VAR(b41,"b41");
								HX_STACK_LINE(416)
								Float tmp49 = be->__get((int)7);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(416)
								Float b42 = tmp49;		HX_STACK_VAR(b42,"b42");
								HX_STACK_LINE(416)
								Float tmp50 = be->__get((int)11);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(416)
								Float b43 = tmp50;		HX_STACK_VAR(b43,"b43");
								HX_STACK_LINE(416)
								Float tmp51 = be->__get((int)15);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(416)
								Float b44 = tmp51;		HX_STACK_VAR(b44,"b44");
								HX_STACK_LINE(416)
								Float tmp52 = (a11 * b11);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(416)
								Float tmp53 = (a12 * b21);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(416)
								Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(416)
								Float tmp55 = (a13 * b31);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(416)
								Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(416)
								Float tmp57 = (a14 * b41);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(416)
								Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(416)
								te[(int)0] = tmp58;
								HX_STACK_LINE(416)
								Float tmp59 = (a11 * b12);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(416)
								Float tmp60 = (a12 * b22);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(416)
								Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(416)
								Float tmp62 = (a13 * b32);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(416)
								Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(416)
								Float tmp64 = (a14 * b42);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(416)
								Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(416)
								te[(int)4] = tmp65;
								HX_STACK_LINE(416)
								Float tmp66 = (a11 * b13);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(416)
								Float tmp67 = (a12 * b23);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(416)
								Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(416)
								Float tmp69 = (a13 * b33);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(416)
								Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(416)
								Float tmp71 = (a14 * b43);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(416)
								Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(416)
								te[(int)8] = tmp72;
								HX_STACK_LINE(416)
								Float tmp73 = (a11 * b14);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(416)
								Float tmp74 = (a12 * b24);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(416)
								Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(416)
								Float tmp76 = (a13 * b34);		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(416)
								Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(416)
								Float tmp78 = (a14 * b44);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(416)
								Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(416)
								te[(int)12] = tmp79;
								HX_STACK_LINE(416)
								Float tmp80 = (a21 * b11);		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(416)
								Float tmp81 = (a22 * b21);		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(416)
								Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(416)
								Float tmp83 = (a23 * b31);		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(416)
								Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(416)
								Float tmp85 = (a24 * b41);		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(416)
								Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(416)
								te[(int)1] = tmp86;
								HX_STACK_LINE(416)
								Float tmp87 = (a21 * b12);		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(416)
								Float tmp88 = (a22 * b22);		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(416)
								Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(416)
								Float tmp90 = (a23 * b32);		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(416)
								Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(416)
								Float tmp92 = (a24 * b42);		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(416)
								Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(416)
								te[(int)5] = tmp93;
								HX_STACK_LINE(416)
								Float tmp94 = (a21 * b13);		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(416)
								Float tmp95 = (a22 * b23);		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(416)
								Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
								HX_STACK_LINE(416)
								Float tmp97 = (a23 * b33);		HX_STACK_VAR(tmp97,"tmp97");
								HX_STACK_LINE(416)
								Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
								HX_STACK_LINE(416)
								Float tmp99 = (a24 * b43);		HX_STACK_VAR(tmp99,"tmp99");
								HX_STACK_LINE(416)
								Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
								HX_STACK_LINE(416)
								te[(int)9] = tmp100;
								HX_STACK_LINE(416)
								Float tmp101 = (a21 * b14);		HX_STACK_VAR(tmp101,"tmp101");
								HX_STACK_LINE(416)
								Float tmp102 = (a22 * b24);		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(416)
								Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
								HX_STACK_LINE(416)
								Float tmp104 = (a23 * b34);		HX_STACK_VAR(tmp104,"tmp104");
								HX_STACK_LINE(416)
								Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
								HX_STACK_LINE(416)
								Float tmp106 = (a24 * b44);		HX_STACK_VAR(tmp106,"tmp106");
								HX_STACK_LINE(416)
								Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(416)
								te[(int)13] = tmp107;
								HX_STACK_LINE(416)
								Float tmp108 = (a31 * b11);		HX_STACK_VAR(tmp108,"tmp108");
								HX_STACK_LINE(416)
								Float tmp109 = (a32 * b21);		HX_STACK_VAR(tmp109,"tmp109");
								HX_STACK_LINE(416)
								Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
								HX_STACK_LINE(416)
								Float tmp111 = (a33 * b31);		HX_STACK_VAR(tmp111,"tmp111");
								HX_STACK_LINE(416)
								Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
								HX_STACK_LINE(416)
								Float tmp113 = (a34 * b41);		HX_STACK_VAR(tmp113,"tmp113");
								HX_STACK_LINE(416)
								Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(416)
								te[(int)2] = tmp114;
								HX_STACK_LINE(416)
								Float tmp115 = (a31 * b12);		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(416)
								Float tmp116 = (a32 * b22);		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(416)
								Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(416)
								Float tmp118 = (a33 * b32);		HX_STACK_VAR(tmp118,"tmp118");
								HX_STACK_LINE(416)
								Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
								HX_STACK_LINE(416)
								Float tmp120 = (a34 * b42);		HX_STACK_VAR(tmp120,"tmp120");
								HX_STACK_LINE(416)
								Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
								HX_STACK_LINE(416)
								te[(int)6] = tmp121;
								HX_STACK_LINE(416)
								Float tmp122 = (a31 * b13);		HX_STACK_VAR(tmp122,"tmp122");
								HX_STACK_LINE(416)
								Float tmp123 = (a32 * b23);		HX_STACK_VAR(tmp123,"tmp123");
								HX_STACK_LINE(416)
								Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
								HX_STACK_LINE(416)
								Float tmp125 = (a33 * b33);		HX_STACK_VAR(tmp125,"tmp125");
								HX_STACK_LINE(416)
								Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
								HX_STACK_LINE(416)
								Float tmp127 = (a34 * b43);		HX_STACK_VAR(tmp127,"tmp127");
								HX_STACK_LINE(416)
								Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
								HX_STACK_LINE(416)
								te[(int)10] = tmp128;
								HX_STACK_LINE(416)
								Float tmp129 = (a31 * b14);		HX_STACK_VAR(tmp129,"tmp129");
								HX_STACK_LINE(416)
								Float tmp130 = (a32 * b24);		HX_STACK_VAR(tmp130,"tmp130");
								HX_STACK_LINE(416)
								Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
								HX_STACK_LINE(416)
								Float tmp132 = (a33 * b34);		HX_STACK_VAR(tmp132,"tmp132");
								HX_STACK_LINE(416)
								Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
								HX_STACK_LINE(416)
								Float tmp134 = (a34 * b44);		HX_STACK_VAR(tmp134,"tmp134");
								HX_STACK_LINE(416)
								Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
								HX_STACK_LINE(416)
								te[(int)14] = tmp135;
								HX_STACK_LINE(416)
								Float tmp136 = (a41 * b11);		HX_STACK_VAR(tmp136,"tmp136");
								HX_STACK_LINE(416)
								Float tmp137 = (a42 * b21);		HX_STACK_VAR(tmp137,"tmp137");
								HX_STACK_LINE(416)
								Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
								HX_STACK_LINE(416)
								Float tmp139 = (a43 * b31);		HX_STACK_VAR(tmp139,"tmp139");
								HX_STACK_LINE(416)
								Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
								HX_STACK_LINE(416)
								Float tmp141 = (a44 * b41);		HX_STACK_VAR(tmp141,"tmp141");
								HX_STACK_LINE(416)
								Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
								HX_STACK_LINE(416)
								te[(int)3] = tmp142;
								HX_STACK_LINE(416)
								Float tmp143 = (a41 * b12);		HX_STACK_VAR(tmp143,"tmp143");
								HX_STACK_LINE(416)
								Float tmp144 = (a42 * b22);		HX_STACK_VAR(tmp144,"tmp144");
								HX_STACK_LINE(416)
								Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
								HX_STACK_LINE(416)
								Float tmp146 = (a43 * b32);		HX_STACK_VAR(tmp146,"tmp146");
								HX_STACK_LINE(416)
								Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
								HX_STACK_LINE(416)
								Float tmp148 = (a44 * b42);		HX_STACK_VAR(tmp148,"tmp148");
								HX_STACK_LINE(416)
								Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
								HX_STACK_LINE(416)
								te[(int)7] = tmp149;
								HX_STACK_LINE(416)
								Float tmp150 = (a41 * b13);		HX_STACK_VAR(tmp150,"tmp150");
								HX_STACK_LINE(416)
								Float tmp151 = (a42 * b23);		HX_STACK_VAR(tmp151,"tmp151");
								HX_STACK_LINE(416)
								Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
								HX_STACK_LINE(416)
								Float tmp153 = (a43 * b33);		HX_STACK_VAR(tmp153,"tmp153");
								HX_STACK_LINE(416)
								Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
								HX_STACK_LINE(416)
								Float tmp155 = (a44 * b43);		HX_STACK_VAR(tmp155,"tmp155");
								HX_STACK_LINE(416)
								Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
								HX_STACK_LINE(416)
								te[(int)11] = tmp156;
								HX_STACK_LINE(416)
								Float tmp157 = (a41 * b14);		HX_STACK_VAR(tmp157,"tmp157");
								HX_STACK_LINE(416)
								Float tmp158 = (a42 * b24);		HX_STACK_VAR(tmp158,"tmp158");
								HX_STACK_LINE(416)
								Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
								HX_STACK_LINE(416)
								Float tmp160 = (a43 * b34);		HX_STACK_VAR(tmp160,"tmp160");
								HX_STACK_LINE(416)
								Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
								HX_STACK_LINE(416)
								Float tmp162 = (a44 * b44);		HX_STACK_VAR(tmp162,"tmp162");
								HX_STACK_LINE(416)
								Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
								HX_STACK_LINE(416)
								te[(int)15] = tmp163;
								HX_STACK_LINE(416)
								tmp16 = _this3;
							}
							HX_STACK_LINE(416)
							::phoenix::Matrix _m = tmp16;		HX_STACK_VAR(_m,"_m");
							HX_STACK_LINE(416)
							_this2->matrix = _m;
							HX_STACK_LINE(416)
							bool tmp17 = (_m != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(416)
							if ((tmp17)){
								HX_STACK_LINE(416)
								::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
									HX_STACK_LINE(416)
									::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(416)
									bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(416)
									if ((tmp19)){
										HX_STACK_LINE(416)
										::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(416)
										this1 = tmp20;
									}
									else{
										HX_STACK_LINE(416)
										bool tmp20 = (array != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(416)
										if ((tmp20)){
											HX_STACK_LINE(416)
											::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(416)
											{
												HX_STACK_LINE(416)
												::snow::api::buffers::ArrayBufferView tmp22 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(416)
												::snow::api::buffers::ArrayBufferView _this3 = tmp22;		HX_STACK_VAR(_this3,"_this3");
												HX_STACK_LINE(416)
												_this3->byteOffset = (int)0;
												HX_STACK_LINE(416)
												_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
												HX_STACK_LINE(416)
												int tmp23 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(416)
												_this3->byteLength = tmp23;
												HX_STACK_LINE(416)
												::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(416)
												{
													HX_STACK_LINE(416)
													::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(416)
													int tmp25 = _this3->byteLength;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(416)
													::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(416)
													this2 = tmp26;
													HX_STACK_LINE(416)
													tmp24 = this2;
												}
												HX_STACK_LINE(416)
												_this3->buffer = tmp24;
												HX_STACK_LINE(416)
												_this3->copyFromArray(((Array< Float >)(array)),null());
												HX_STACK_LINE(416)
												tmp21 = _this3;
											}
											HX_STACK_LINE(416)
											this1 = tmp21;
										}
										else{
											HX_STACK_LINE(416)
											bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(416)
											if ((tmp21)){
												HX_STACK_LINE(416)
												::snow::api::buffers::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(416)
												{
													HX_STACK_LINE(416)
													::snow::api::buffers::ArrayBufferView tmp23 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(416)
													::snow::api::buffers::ArrayBufferView _this3 = tmp23;		HX_STACK_VAR(_this3,"_this3");
													HX_STACK_LINE(416)
													::haxe::io::Bytes tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(416)
													::haxe::io::Bytes srcData = tmp24;		HX_STACK_VAR(srcData,"srcData");
													HX_STACK_LINE(416)
													int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(416)
													int srcLength = tmp25;		HX_STACK_VAR(srcLength,"srcLength");
													HX_STACK_LINE(416)
													int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(416)
													int srcByteOffset = tmp26;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
													HX_STACK_LINE(416)
													int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(416)
													int srcElementSize = tmp27;		HX_STACK_VAR(srcElementSize,"srcElementSize");
													HX_STACK_LINE(416)
													int elementSize = _this3->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(416)
													int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(416)
													int tmp29 = _this3->type;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(416)
													bool tmp30 = (tmp28 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(416)
													if ((tmp30)){
														HX_STACK_LINE(416)
														int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
														HX_STACK_LINE(416)
														int tmp31 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(416)
														int cloneLength = tmp31;		HX_STACK_VAR(cloneLength,"cloneLength");
														HX_STACK_LINE(416)
														::haxe::io::Bytes tmp32;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(416)
														{
															HX_STACK_LINE(416)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(416)
															int tmp33 = cloneLength;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(416)
															::haxe::io::Bytes tmp34 = ::haxe::io::Bytes_obj::alloc(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(416)
															this2 = tmp34;
															HX_STACK_LINE(416)
															tmp32 = this2;
														}
														HX_STACK_LINE(416)
														_this3->buffer = tmp32;
														HX_STACK_LINE(416)
														::haxe::io::Bytes tmp33 = srcData;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(416)
														int tmp34 = srcByteOffset;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(416)
														int tmp35 = cloneLength;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(416)
														_this3->buffer->blit((int)0,tmp33,tmp34,tmp35);
													}
													else{
														HX_STACK_LINE(416)
														HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
													}
													HX_STACK_LINE(416)
													int tmp31 = (_this3->bytesPerElement * srcLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(416)
													_this3->byteLength = tmp31;
													HX_STACK_LINE(416)
													_this3->byteOffset = (int)0;
													HX_STACK_LINE(416)
													_this3->length = srcLength;
													HX_STACK_LINE(416)
													tmp22 = _this3;
												}
												HX_STACK_LINE(416)
												this1 = tmp22;
											}
											else{
												HX_STACK_LINE(416)
												bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(416)
												if ((tmp22)){
													HX_STACK_LINE(416)
													::snow::api::buffers::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(416)
													{
														HX_STACK_LINE(416)
														::snow::api::buffers::ArrayBufferView tmp24 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(416)
														::snow::api::buffers::ArrayBufferView _this3 = tmp24;		HX_STACK_VAR(_this3,"_this3");
														HX_STACK_LINE(416)
														bool tmp25 = false;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(416)
														if ((tmp25)){
															HX_STACK_LINE(416)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
														HX_STACK_LINE(416)
														int tmp26 = hx::Mod((int)0,_this3->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(416)
														bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(416)
														if ((tmp27)){
															HX_STACK_LINE(416)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
														HX_STACK_LINE(416)
														int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(416)
														int bufferByteLength = tmp28;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
														HX_STACK_LINE(416)
														int elementSize = _this3->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
														HX_STACK_LINE(416)
														int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
														HX_STACK_LINE(416)
														bool tmp29 = true;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(416)
														if ((tmp29)){
															HX_STACK_LINE(416)
															int tmp30 = bufferByteLength;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(416)
															newByteLength = tmp30;
															HX_STACK_LINE(416)
															int tmp31 = hx::Mod(bufferByteLength,_this3->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(416)
															bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(416)
															if ((tmp32)){
																HX_STACK_LINE(416)
																HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
															}
															HX_STACK_LINE(416)
															bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(416)
															if ((tmp33)){
																HX_STACK_LINE(416)
																HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
															}
														}
														else{
															HX_STACK_LINE(416)
															int tmp30 = (null() * _this3->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(416)
															newByteLength = tmp30;
															HX_STACK_LINE(416)
															int tmp31 = newByteLength;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(416)
															int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
															HX_STACK_LINE(416)
															bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(416)
															if ((tmp32)){
																HX_STACK_LINE(416)
																HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
															}
														}
														HX_STACK_LINE(416)
														_this3->buffer = null();
														HX_STACK_LINE(416)
														_this3->byteOffset = (int)0;
														HX_STACK_LINE(416)
														_this3->byteLength = newByteLength;
														HX_STACK_LINE(416)
														Float tmp30 = (Float(newByteLength) / Float(_this3->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(416)
														int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(416)
														_this3->length = tmp31;
														HX_STACK_LINE(416)
														tmp23 = _this3;
													}
													HX_STACK_LINE(416)
													this1 = tmp23;
												}
												else{
													HX_STACK_LINE(416)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
												}
											}
										}
									}
									HX_STACK_LINE(416)
									tmp18 = this1;
								}
								HX_STACK_LINE(416)
								_this2->floats = tmp18;
							}
							HX_STACK_LINE(416)
							_this2->matrix;
						}
						else{
							HX_STACK_LINE(416)
							::phoenix::Spatial tmp15 = _this1->get_world();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(416)
							::phoenix::Spatial _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(416)
							::phoenix::Matrix tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								::phoenix::Matrix tmp17 = _this1->local->matrix;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(416)
								Array< Float > te = tmp17->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(416)
								Float tmp18 = te->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(416)
								Float tmp19 = te->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(416)
								Float tmp20 = te->__get((int)8);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(416)
								Float tmp21 = te->__get((int)12);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(416)
								Float tmp22 = te->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(416)
								Float tmp23 = te->__get((int)5);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(416)
								Float tmp24 = te->__get((int)9);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(416)
								Float tmp25 = te->__get((int)13);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(416)
								Float tmp26 = te->__get((int)2);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(416)
								Float tmp27 = te->__get((int)6);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(416)
								Float tmp28 = te->__get((int)10);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(416)
								Float tmp29 = te->__get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(416)
								Float tmp30 = te->__get((int)3);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(416)
								Float tmp31 = te->__get((int)7);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(416)
								Float tmp32 = te->__get((int)11);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(416)
								Float tmp33 = te->__get((int)15);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(416)
								tmp16 = ::phoenix::Matrix_obj::__new(tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31,tmp32,tmp33);
							}
							HX_STACK_LINE(416)
							::phoenix::Matrix _m = tmp16;		HX_STACK_VAR(_m,"_m");
							HX_STACK_LINE(416)
							_this2->matrix = _m;
							HX_STACK_LINE(416)
							bool tmp17 = (_m != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(416)
							if ((tmp17)){
								HX_STACK_LINE(416)
								::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
									HX_STACK_LINE(416)
									::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(416)
									bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(416)
									if ((tmp19)){
										HX_STACK_LINE(416)
										::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(416)
										this1 = tmp20;
									}
									else{
										HX_STACK_LINE(416)
										bool tmp20 = (array != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(416)
										if ((tmp20)){
											HX_STACK_LINE(416)
											::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(416)
											{
												HX_STACK_LINE(416)
												::snow::api::buffers::ArrayBufferView tmp22 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(416)
												::snow::api::buffers::ArrayBufferView _this3 = tmp22;		HX_STACK_VAR(_this3,"_this3");
												HX_STACK_LINE(416)
												_this3->byteOffset = (int)0;
												HX_STACK_LINE(416)
												_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
												HX_STACK_LINE(416)
												int tmp23 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(416)
												_this3->byteLength = tmp23;
												HX_STACK_LINE(416)
												::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(416)
												{
													HX_STACK_LINE(416)
													::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(416)
													int tmp25 = _this3->byteLength;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(416)
													::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(416)
													this2 = tmp26;
													HX_STACK_LINE(416)
													tmp24 = this2;
												}
												HX_STACK_LINE(416)
												_this3->buffer = tmp24;
												HX_STACK_LINE(416)
												_this3->copyFromArray(((Array< Float >)(array)),null());
												HX_STACK_LINE(416)
												tmp21 = _this3;
											}
											HX_STACK_LINE(416)
											this1 = tmp21;
										}
										else{
											HX_STACK_LINE(416)
											bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(416)
											if ((tmp21)){
												HX_STACK_LINE(416)
												::snow::api::buffers::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(416)
												{
													HX_STACK_LINE(416)
													::snow::api::buffers::ArrayBufferView tmp23 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(416)
													::snow::api::buffers::ArrayBufferView _this3 = tmp23;		HX_STACK_VAR(_this3,"_this3");
													HX_STACK_LINE(416)
													::haxe::io::Bytes tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(416)
													::haxe::io::Bytes srcData = tmp24;		HX_STACK_VAR(srcData,"srcData");
													HX_STACK_LINE(416)
													int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(416)
													int srcLength = tmp25;		HX_STACK_VAR(srcLength,"srcLength");
													HX_STACK_LINE(416)
													int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(416)
													int srcByteOffset = tmp26;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
													HX_STACK_LINE(416)
													int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(416)
													int srcElementSize = tmp27;		HX_STACK_VAR(srcElementSize,"srcElementSize");
													HX_STACK_LINE(416)
													int elementSize = _this3->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(416)
													int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(416)
													int tmp29 = _this3->type;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(416)
													bool tmp30 = (tmp28 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(416)
													if ((tmp30)){
														HX_STACK_LINE(416)
														int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
														HX_STACK_LINE(416)
														int tmp31 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(416)
														int cloneLength = tmp31;		HX_STACK_VAR(cloneLength,"cloneLength");
														HX_STACK_LINE(416)
														::haxe::io::Bytes tmp32;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(416)
														{
															HX_STACK_LINE(416)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(416)
															int tmp33 = cloneLength;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(416)
															::haxe::io::Bytes tmp34 = ::haxe::io::Bytes_obj::alloc(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(416)
															this2 = tmp34;
															HX_STACK_LINE(416)
															tmp32 = this2;
														}
														HX_STACK_LINE(416)
														_this3->buffer = tmp32;
														HX_STACK_LINE(416)
														::haxe::io::Bytes tmp33 = srcData;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(416)
														int tmp34 = srcByteOffset;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(416)
														int tmp35 = cloneLength;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(416)
														_this3->buffer->blit((int)0,tmp33,tmp34,tmp35);
													}
													else{
														HX_STACK_LINE(416)
														HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
													}
													HX_STACK_LINE(416)
													int tmp31 = (_this3->bytesPerElement * srcLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(416)
													_this3->byteLength = tmp31;
													HX_STACK_LINE(416)
													_this3->byteOffset = (int)0;
													HX_STACK_LINE(416)
													_this3->length = srcLength;
													HX_STACK_LINE(416)
													tmp22 = _this3;
												}
												HX_STACK_LINE(416)
												this1 = tmp22;
											}
											else{
												HX_STACK_LINE(416)
												bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(416)
												if ((tmp22)){
													HX_STACK_LINE(416)
													::snow::api::buffers::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(416)
													{
														HX_STACK_LINE(416)
														::snow::api::buffers::ArrayBufferView tmp24 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(416)
														::snow::api::buffers::ArrayBufferView _this3 = tmp24;		HX_STACK_VAR(_this3,"_this3");
														HX_STACK_LINE(416)
														bool tmp25 = false;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(416)
														if ((tmp25)){
															HX_STACK_LINE(416)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
														HX_STACK_LINE(416)
														int tmp26 = hx::Mod((int)0,_this3->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(416)
														bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(416)
														if ((tmp27)){
															HX_STACK_LINE(416)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
														HX_STACK_LINE(416)
														int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(416)
														int bufferByteLength = tmp28;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
														HX_STACK_LINE(416)
														int elementSize = _this3->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
														HX_STACK_LINE(416)
														int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
														HX_STACK_LINE(416)
														bool tmp29 = true;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(416)
														if ((tmp29)){
															HX_STACK_LINE(416)
															int tmp30 = bufferByteLength;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(416)
															newByteLength = tmp30;
															HX_STACK_LINE(416)
															int tmp31 = hx::Mod(bufferByteLength,_this3->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(416)
															bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(416)
															if ((tmp32)){
																HX_STACK_LINE(416)
																HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
															}
															HX_STACK_LINE(416)
															bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(416)
															if ((tmp33)){
																HX_STACK_LINE(416)
																HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
															}
														}
														else{
															HX_STACK_LINE(416)
															int tmp30 = (null() * _this3->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(416)
															newByteLength = tmp30;
															HX_STACK_LINE(416)
															int tmp31 = newByteLength;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(416)
															int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
															HX_STACK_LINE(416)
															bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(416)
															if ((tmp32)){
																HX_STACK_LINE(416)
																HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
															}
														}
														HX_STACK_LINE(416)
														_this3->buffer = null();
														HX_STACK_LINE(416)
														_this3->byteOffset = (int)0;
														HX_STACK_LINE(416)
														_this3->byteLength = newByteLength;
														HX_STACK_LINE(416)
														Float tmp30 = (Float(newByteLength) / Float(_this3->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(416)
														int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(416)
														_this3->length = tmp31;
														HX_STACK_LINE(416)
														tmp23 = _this3;
													}
													HX_STACK_LINE(416)
													this1 = tmp23;
												}
												else{
													HX_STACK_LINE(416)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
												}
											}
										}
									}
									HX_STACK_LINE(416)
									tmp18 = this1;
								}
								HX_STACK_LINE(416)
								_this2->floats = tmp18;
							}
							HX_STACK_LINE(416)
							_this2->matrix;
						}
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::phoenix::Spatial tmp15 = _this1->get_world();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(416)
							::phoenix::Spatial _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(416)
							bool tmp16 = _this2->auto_decompose;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(416)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(416)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(416)
							if ((tmp17)){
								HX_STACK_LINE(416)
								tmp18 = false;
							}
							else{
								HX_STACK_LINE(416)
								tmp18 = true;
							}
							HX_STACK_LINE(416)
							if ((tmp18)){
								HX_STACK_LINE(416)
								::phoenix::MatrixTransform tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
									HX_STACK_LINE(416)
									::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
									HX_STACK_LINE(416)
									::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
									HX_STACK_LINE(416)
									::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
									HX_STACK_LINE(416)
									Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(416)
									::phoenix::Matrix tmp20 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(416)
									::phoenix::Matrix matrix = tmp20;		HX_STACK_VAR(matrix,"matrix");
									HX_STACK_LINE(416)
									Float tmp21 = te->__get((int)0);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(416)
									Float _ax_x = tmp21;		HX_STACK_VAR(_ax_x,"_ax_x");
									HX_STACK_LINE(416)
									Float tmp22 = te->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(416)
									Float _ax_y = tmp22;		HX_STACK_VAR(_ax_y,"_ax_y");
									HX_STACK_LINE(416)
									Float tmp23 = te->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(416)
									Float _ax_z = tmp23;		HX_STACK_VAR(_ax_z,"_ax_z");
									HX_STACK_LINE(416)
									Float tmp24 = te->__get((int)4);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(416)
									Float _ay_x = tmp24;		HX_STACK_VAR(_ay_x,"_ay_x");
									HX_STACK_LINE(416)
									Float tmp25 = te->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(416)
									Float _ay_y = tmp25;		HX_STACK_VAR(_ay_y,"_ay_y");
									HX_STACK_LINE(416)
									Float tmp26 = te->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(416)
									Float _ay_z = tmp26;		HX_STACK_VAR(_ay_z,"_ay_z");
									HX_STACK_LINE(416)
									Float tmp27 = te->__get((int)8);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(416)
									Float _az_x = tmp27;		HX_STACK_VAR(_az_x,"_az_x");
									HX_STACK_LINE(416)
									Float tmp28 = te->__get((int)9);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(416)
									Float _az_y = tmp28;		HX_STACK_VAR(_az_y,"_az_y");
									HX_STACK_LINE(416)
									Float tmp29 = te->__get((int)10);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(416)
									Float _az_z = tmp29;		HX_STACK_VAR(_az_z,"_az_z");
									HX_STACK_LINE(416)
									Float tmp30 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(416)
									Float tmp31 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(416)
									Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(416)
									Float tmp33 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(416)
									Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(416)
									Float tmp35 = ::Math_obj::sqrt(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(416)
									Float _ax_length = tmp35;		HX_STACK_VAR(_ax_length,"_ax_length");
									HX_STACK_LINE(416)
									Float tmp36 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(416)
									Float tmp37 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(416)
									Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(416)
									Float tmp39 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(416)
									Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(416)
									Float tmp41 = ::Math_obj::sqrt(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(416)
									Float _ay_length = tmp41;		HX_STACK_VAR(_ay_length,"_ay_length");
									HX_STACK_LINE(416)
									Float tmp42 = (_az_x * _az_x);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(416)
									Float tmp43 = (_az_y * _az_y);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(416)
									Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(416)
									Float tmp45 = (_az_z * _az_z);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(416)
									Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(416)
									Float tmp47 = ::Math_obj::sqrt(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(416)
									Float _az_length = tmp47;		HX_STACK_VAR(_az_length,"_az_length");
									HX_STACK_LINE(416)
									bool tmp48 = (_quaternion == null());		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(416)
									if ((tmp48)){
										HX_STACK_LINE(416)
										::phoenix::Quaternion tmp49 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(416)
										_quaternion = tmp49;
									}
									HX_STACK_LINE(416)
									bool tmp49 = (_position == null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(416)
									if ((tmp49)){
										HX_STACK_LINE(416)
										Float tmp50 = te->__get((int)12);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(416)
										Float tmp51 = te->__get((int)13);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(416)
										Float tmp52 = te->__get((int)14);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(416)
										::phoenix::Vector tmp53 = ::phoenix::Vector_obj::__new(tmp50,tmp51,tmp52,null());		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(416)
										_position = tmp53;
									}
									else{
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											Float tmp50 = te->__get((int)12);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(416)
											Float _x = tmp50;		HX_STACK_VAR(_x,"_x");
											HX_STACK_LINE(416)
											_position->x = _x;
											HX_STACK_LINE(416)
											bool tmp51 = _position->_construct;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(416)
											if ((tmp51)){
												HX_STACK_LINE(416)
												_position->x;
											}
											else{
												HX_STACK_LINE(416)
												bool tmp52 = (_position->listen_x != null());		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(416)
												bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(416)
												if ((tmp52)){
													HX_STACK_LINE(416)
													bool tmp54 = _position->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(416)
													bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(416)
													tmp53 = !(tmp55);
												}
												else{
													HX_STACK_LINE(416)
													tmp53 = false;
												}
												HX_STACK_LINE(416)
												if ((tmp53)){
													HX_STACK_LINE(416)
													Float tmp54 = _x;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(416)
													_position->listen_x(tmp54);
												}
												HX_STACK_LINE(416)
												_position->x;
											}
										}
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											Float tmp50 = te->__get((int)13);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(416)
											Float _y = tmp50;		HX_STACK_VAR(_y,"_y");
											HX_STACK_LINE(416)
											_position->y = _y;
											HX_STACK_LINE(416)
											bool tmp51 = _position->_construct;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(416)
											if ((tmp51)){
												HX_STACK_LINE(416)
												_position->y;
											}
											else{
												HX_STACK_LINE(416)
												bool tmp52 = (_position->listen_y != null());		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(416)
												bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(416)
												if ((tmp52)){
													HX_STACK_LINE(416)
													bool tmp54 = _position->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(416)
													bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(416)
													tmp53 = !(tmp55);
												}
												else{
													HX_STACK_LINE(416)
													tmp53 = false;
												}
												HX_STACK_LINE(416)
												if ((tmp53)){
													HX_STACK_LINE(416)
													Float tmp54 = _y;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(416)
													_position->listen_y(tmp54);
												}
												HX_STACK_LINE(416)
												_position->y;
											}
										}
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											Float tmp50 = te->__get((int)14);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(416)
											Float _z = tmp50;		HX_STACK_VAR(_z,"_z");
											HX_STACK_LINE(416)
											_position->z = _z;
											HX_STACK_LINE(416)
											bool tmp51 = _position->_construct;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(416)
											if ((tmp51)){
												HX_STACK_LINE(416)
												_position->z;
											}
											else{
												HX_STACK_LINE(416)
												bool tmp52 = (_position->listen_z != null());		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(416)
												bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(416)
												if ((tmp52)){
													HX_STACK_LINE(416)
													bool tmp54 = _position->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(416)
													bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(416)
													tmp53 = !(tmp55);
												}
												else{
													HX_STACK_LINE(416)
													tmp53 = false;
												}
												HX_STACK_LINE(416)
												if ((tmp53)){
													HX_STACK_LINE(416)
													Float tmp54 = _z;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(416)
													_position->listen_z(tmp54);
												}
												HX_STACK_LINE(416)
												_position->z;
											}
										}
									}
									HX_STACK_LINE(416)
									bool tmp50 = (_scale == null());		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(416)
									if ((tmp50)){
										HX_STACK_LINE(416)
										::phoenix::Vector tmp51 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(416)
										_scale = tmp51;
									}
									else{
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											_scale->x = _ax_length;
											HX_STACK_LINE(416)
											bool tmp51 = _scale->_construct;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(416)
											if ((tmp51)){
												HX_STACK_LINE(416)
												_scale->x;
											}
											else{
												HX_STACK_LINE(416)
												bool tmp52 = (_scale->listen_x != null());		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(416)
												bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(416)
												if ((tmp52)){
													HX_STACK_LINE(416)
													bool tmp54 = _scale->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(416)
													bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(416)
													tmp53 = !(tmp55);
												}
												else{
													HX_STACK_LINE(416)
													tmp53 = false;
												}
												HX_STACK_LINE(416)
												if ((tmp53)){
													HX_STACK_LINE(416)
													Float tmp54 = _ax_length;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(416)
													_scale->listen_x(tmp54);
												}
												HX_STACK_LINE(416)
												_scale->x;
											}
										}
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											_scale->y = _ay_length;
											HX_STACK_LINE(416)
											bool tmp51 = _scale->_construct;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(416)
											if ((tmp51)){
												HX_STACK_LINE(416)
												_scale->y;
											}
											else{
												HX_STACK_LINE(416)
												bool tmp52 = (_scale->listen_y != null());		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(416)
												bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(416)
												if ((tmp52)){
													HX_STACK_LINE(416)
													bool tmp54 = _scale->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(416)
													bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(416)
													tmp53 = !(tmp55);
												}
												else{
													HX_STACK_LINE(416)
													tmp53 = false;
												}
												HX_STACK_LINE(416)
												if ((tmp53)){
													HX_STACK_LINE(416)
													Float tmp54 = _ay_length;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(416)
													_scale->listen_y(tmp54);
												}
												HX_STACK_LINE(416)
												_scale->y;
											}
										}
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											_scale->z = _az_length;
											HX_STACK_LINE(416)
											bool tmp51 = _scale->_construct;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(416)
											if ((tmp51)){
												HX_STACK_LINE(416)
												_scale->z;
											}
											else{
												HX_STACK_LINE(416)
												bool tmp52 = (_scale->listen_z != null());		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(416)
												bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(416)
												if ((tmp52)){
													HX_STACK_LINE(416)
													bool tmp54 = _scale->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(416)
													bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(416)
													tmp53 = !(tmp55);
												}
												else{
													HX_STACK_LINE(416)
													tmp53 = false;
												}
												HX_STACK_LINE(416)
												if ((tmp53)){
													HX_STACK_LINE(416)
													Float tmp54 = _az_length;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(416)
													_scale->listen_z(tmp54);
												}
												HX_STACK_LINE(416)
												_scale->z;
											}
										}
									}
									HX_STACK_LINE(416)
									matrix->elements = _this3->elements->concat(Array_obj< Float >::__new());
									HX_STACK_LINE(416)
									Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
									HX_STACK_LINE(416)
									Float tmp51 = _ax_length;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(416)
									hx::DivEq(me[(int)0],tmp51);
									HX_STACK_LINE(416)
									Float tmp52 = _ax_length;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(416)
									hx::DivEq(me[(int)1],tmp52);
									HX_STACK_LINE(416)
									Float tmp53 = _ax_length;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(416)
									hx::DivEq(me[(int)2],tmp53);
									HX_STACK_LINE(416)
									Float tmp54 = _ay_length;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(416)
									hx::DivEq(me[(int)4],tmp54);
									HX_STACK_LINE(416)
									Float tmp55 = _ay_length;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(416)
									hx::DivEq(me[(int)5],tmp55);
									HX_STACK_LINE(416)
									Float tmp56 = _ay_length;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(416)
									hx::DivEq(me[(int)6],tmp56);
									HX_STACK_LINE(416)
									Float tmp57 = _az_length;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(416)
									hx::DivEq(me[(int)8],tmp57);
									HX_STACK_LINE(416)
									Float tmp58 = _az_length;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(416)
									hx::DivEq(me[(int)9],tmp58);
									HX_STACK_LINE(416)
									Float tmp59 = _az_length;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(416)
									hx::DivEq(me[(int)10],tmp59);
									HX_STACK_LINE(416)
									::phoenix::Matrix tmp60 = matrix;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(416)
									_quaternion->setFromRotationMatrix(tmp60);
									HX_STACK_LINE(416)
									bool tmp61 = (_this3->_transform == null());		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(416)
									if ((tmp61)){
										HX_STACK_LINE(416)
										::phoenix::MatrixTransform tmp62 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(416)
										_this3->_transform = tmp62;
									}
									else{
										HX_STACK_LINE(416)
										_this3->_transform->pos = _position;
										HX_STACK_LINE(416)
										_this3->_transform->rotation = _quaternion;
										HX_STACK_LINE(416)
										_this3->_transform->scale = _scale;
									}
									HX_STACK_LINE(416)
									tmp19 = _this3->_transform;
								}
								HX_STACK_LINE(416)
								::phoenix::MatrixTransform _transform = tmp19;		HX_STACK_VAR(_transform,"_transform");
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
									HX_STACK_LINE(416)
									_this2->pos = _p;
									HX_STACK_LINE(416)
									bool tmp20 = (_p != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(416)
									if ((tmp20)){
										HX_STACK_LINE(416)
										::phoenix::Vector tmp21 = _this2->pos;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(416)
										Dynamic tmp22 = _this2->_pos_change_dyn();		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(416)
										::phoenix::Vector_obj::Listen(tmp21,tmp22);
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											bool tmp23 = (_this2->pos_changed != null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(416)
											bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(416)
											if ((tmp23)){
												HX_STACK_LINE(416)
												bool tmp25 = _this2->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(416)
												bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(416)
												tmp24 = !(tmp26);
											}
											else{
												HX_STACK_LINE(416)
												tmp24 = false;
											}
											HX_STACK_LINE(416)
											if ((tmp24)){
												HX_STACK_LINE(416)
												::phoenix::Vector tmp25 = _this2->pos;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(416)
												_this2->pos_changed(tmp25);
											}
										}
									}
									HX_STACK_LINE(416)
									_this2->pos;
								}
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
									HX_STACK_LINE(416)
									_this2->rotation = _r;
									HX_STACK_LINE(416)
									bool tmp20 = (_r != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(416)
									if ((tmp20)){
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											::phoenix::Quaternion _q = _this2->rotation;		HX_STACK_VAR(_q,"_q");
											HX_STACK_LINE(416)
											Dynamic listener = _this2->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
											HX_STACK_LINE(416)
											_q->listen_x = listener;
											HX_STACK_LINE(416)
											_q->listen_y = listener;
											HX_STACK_LINE(416)
											_q->listen_z = listener;
											HX_STACK_LINE(416)
											_q->listen_w = listener;
										}
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											bool tmp21 = (_this2->rotation_changed != null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(416)
											bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(416)
											if ((tmp21)){
												HX_STACK_LINE(416)
												bool tmp23 = _this2->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(416)
												bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(416)
												tmp22 = !(tmp24);
											}
											else{
												HX_STACK_LINE(416)
												tmp22 = false;
											}
											HX_STACK_LINE(416)
											if ((tmp22)){
												HX_STACK_LINE(416)
												::phoenix::Quaternion tmp23 = _this2->rotation;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(416)
												_this2->rotation_changed(tmp23);
											}
										}
									}
									HX_STACK_LINE(416)
									_this2->rotation;
								}
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
									HX_STACK_LINE(416)
									_this2->scale = _s;
									HX_STACK_LINE(416)
									bool tmp20 = (_s != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(416)
									if ((tmp20)){
										HX_STACK_LINE(416)
										::phoenix::Vector tmp21 = _this2->scale;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(416)
										Dynamic tmp22 = _this2->_scale_change_dyn();		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(416)
										::phoenix::Vector_obj::Listen(tmp21,tmp22);
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											bool tmp23 = (_this2->scale_changed != null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(416)
											bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(416)
											if ((tmp23)){
												HX_STACK_LINE(416)
												bool tmp25 = _this2->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(416)
												bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(416)
												tmp24 = !(tmp26);
											}
											else{
												HX_STACK_LINE(416)
												tmp24 = false;
											}
											HX_STACK_LINE(416)
											if ((tmp24)){
												HX_STACK_LINE(416)
												::phoenix::Vector tmp25 = _this2->scale;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(416)
												_this2->scale_changed(tmp25);
											}
										}
									}
									HX_STACK_LINE(416)
									_this2->scale;
								}
							}
							HX_STACK_LINE(416)
							_this2;
						}
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							_this1->dirty = false;
							HX_STACK_LINE(416)
							bool tmp15 = _this1->dirty;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(416)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(416)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(416)
							if ((tmp16)){
								HX_STACK_LINE(416)
								bool tmp18 = _this1->_setup;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(416)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(416)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(416)
								tmp17 = !(tmp20);
							}
							else{
								HX_STACK_LINE(416)
								tmp17 = false;
							}
							HX_STACK_LINE(416)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(416)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(416)
							if ((tmp18)){
								HX_STACK_LINE(416)
								tmp19 = (_this1->_dirty_handlers != null());
							}
							else{
								HX_STACK_LINE(416)
								tmp19 = false;
							}
							HX_STACK_LINE(416)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(416)
							if ((tmp19)){
								HX_STACK_LINE(416)
								int tmp21 = _this1->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(416)
								int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(416)
								tmp20 = (tmp22 > (int)0);
							}
							else{
								HX_STACK_LINE(416)
								tmp20 = false;
							}
							HX_STACK_LINE(416)
							if ((tmp20)){
								HX_STACK_LINE(416)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(416)
								cpp::ArrayBase _g1 = _this1->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(416)
								while((true)){
									HX_STACK_LINE(416)
									bool tmp21 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(416)
									bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(416)
									if ((tmp22)){
										HX_STACK_LINE(416)
										break;
									}
									HX_STACK_LINE(416)
									Dynamic tmp23 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(416)
									Dynamic _handler = tmp23;		HX_STACK_VAR(_handler,"_handler");
									HX_STACK_LINE(416)
									++(_g);
									HX_STACK_LINE(416)
									bool tmp24 = (_handler != null());		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(416)
									if ((tmp24)){
										HX_STACK_LINE(416)
										::phoenix::Transform tmp25 = _this1;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(416)
										_handler(tmp25).Cast< Void >();
									}
								}
							}
							HX_STACK_LINE(416)
							_this1->dirty;
						}
						HX_STACK_LINE(416)
						_this1->_cleaning = false;
						HX_STACK_LINE(416)
						bool tmp15 = (_this1->_clean_handlers != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(416)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(416)
						if ((tmp15)){
							HX_STACK_LINE(416)
							int tmp17 = _this1->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(416)
							int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(416)
							tmp16 = (tmp18 > (int)0);
						}
						else{
							HX_STACK_LINE(416)
							tmp16 = false;
						}
						HX_STACK_LINE(416)
						if ((tmp16)){
							HX_STACK_LINE(416)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(416)
							cpp::ArrayBase _g1 = _this1->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(416)
							while((true)){
								HX_STACK_LINE(416)
								bool tmp17 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(416)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(416)
								if ((tmp18)){
									HX_STACK_LINE(416)
									break;
								}
								HX_STACK_LINE(416)
								Dynamic tmp19 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(416)
								Dynamic _handler = tmp19;		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(416)
								++(_g);
								HX_STACK_LINE(416)
								bool tmp20 = (_handler != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(416)
								if ((tmp20)){
									HX_STACK_LINE(416)
									::phoenix::Transform tmp21 = _this1;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(416)
									_handler(tmp21).Cast< Void >();
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(416)
			bool tmp11 = _this->dirty;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(416)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(416)
			if ((tmp11)){
				HX_STACK_LINE(416)
				bool tmp13 = _this->_cleaning;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(416)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(416)
				tmp12 = !(tmp14);
			}
			else{
				HX_STACK_LINE(416)
				tmp12 = false;
			}
			HX_STACK_LINE(416)
			if ((tmp12)){
				HX_STACK_LINE(416)
				bool tmp13 = _this->dirty;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(416)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(416)
				if ((tmp14)){
					HX_STACK_LINE(416)
					Dynamic();
				}
				else{
					HX_STACK_LINE(416)
					_this->_cleaning = true;
					HX_STACK_LINE(416)
					{
						HX_STACK_LINE(416)
						::phoenix::Matrix _this1 = _this->_pos_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(416)
							e[(int)0] = (int)1;
							HX_STACK_LINE(416)
							e[(int)4] = (int)0;
							HX_STACK_LINE(416)
							e[(int)8] = (int)0;
							HX_STACK_LINE(416)
							::phoenix::Vector tmp15 = _this->local->pos;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(416)
							Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(416)
							e[(int)12] = tmp16;
							HX_STACK_LINE(416)
							e[(int)1] = (int)0;
							HX_STACK_LINE(416)
							e[(int)5] = (int)1;
							HX_STACK_LINE(416)
							e[(int)9] = (int)0;
							HX_STACK_LINE(416)
							::phoenix::Vector tmp17 = _this->local->pos;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(416)
							Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(416)
							e[(int)13] = tmp18;
							HX_STACK_LINE(416)
							e[(int)2] = (int)0;
							HX_STACK_LINE(416)
							e[(int)6] = (int)0;
							HX_STACK_LINE(416)
							e[(int)10] = (int)1;
							HX_STACK_LINE(416)
							::phoenix::Vector tmp19 = _this->local->pos;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(416)
							Float tmp20 = tmp19->z;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(416)
							e[(int)14] = tmp20;
							HX_STACK_LINE(416)
							e[(int)3] = (int)0;
							HX_STACK_LINE(416)
							e[(int)7] = (int)0;
							HX_STACK_LINE(416)
							e[(int)11] = (int)0;
							HX_STACK_LINE(416)
							e[(int)15] = (int)1;
							HX_STACK_LINE(416)
							_this1;
						}
						HX_STACK_LINE(416)
						_this1;
					}
					HX_STACK_LINE(416)
					{
						HX_STACK_LINE(416)
						::phoenix::Matrix _this1 = _this->_rotation_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(416)
						::phoenix::Quaternion tmp15 = _this->local->rotation;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(416)
						::phoenix::Quaternion q = tmp15;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(416)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(416)
						Float tmp16 = (q->x + q->x);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(416)
						Float x2 = tmp16;		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(416)
						Float tmp17 = (q->y + q->y);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(416)
						Float y2 = tmp17;		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(416)
						Float tmp18 = (q->z + q->z);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(416)
						Float z2 = tmp18;		HX_STACK_VAR(z2,"z2");
						HX_STACK_LINE(416)
						Float tmp19 = (q->x * x2);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(416)
						Float xx = tmp19;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(416)
						Float tmp20 = (q->x * y2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(416)
						Float xy = tmp20;		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(416)
						Float tmp21 = (q->x * z2);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(416)
						Float xz = tmp21;		HX_STACK_VAR(xz,"xz");
						HX_STACK_LINE(416)
						Float tmp22 = (q->y * y2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(416)
						Float yy = tmp22;		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(416)
						Float tmp23 = (q->y * z2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(416)
						Float yz = tmp23;		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(416)
						Float tmp24 = (q->z * z2);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(416)
						Float zz = tmp24;		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(416)
						Float tmp25 = (q->w * x2);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(416)
						Float wx = tmp25;		HX_STACK_VAR(wx,"wx");
						HX_STACK_LINE(416)
						Float tmp26 = (q->w * y2);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(416)
						Float wy = tmp26;		HX_STACK_VAR(wy,"wy");
						HX_STACK_LINE(416)
						Float tmp27 = (q->w * z2);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(416)
						Float wz = tmp27;		HX_STACK_VAR(wz,"wz");
						HX_STACK_LINE(416)
						Float tmp28 = (yy + zz);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(416)
						Float tmp29 = ((int)1 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(416)
						te[(int)0] = tmp29;
						HX_STACK_LINE(416)
						Float tmp30 = (xy - wz);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(416)
						te[(int)4] = tmp30;
						HX_STACK_LINE(416)
						Float tmp31 = (xz + wy);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(416)
						te[(int)8] = tmp31;
						HX_STACK_LINE(416)
						Float tmp32 = (xy + wz);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(416)
						te[(int)1] = tmp32;
						HX_STACK_LINE(416)
						Float tmp33 = (xx + zz);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(416)
						Float tmp34 = ((int)1 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(416)
						te[(int)5] = tmp34;
						HX_STACK_LINE(416)
						Float tmp35 = (yz - wx);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(416)
						te[(int)9] = tmp35;
						HX_STACK_LINE(416)
						Float tmp36 = (xz - wy);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(416)
						te[(int)2] = tmp36;
						HX_STACK_LINE(416)
						Float tmp37 = (yz + wx);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(416)
						te[(int)6] = tmp37;
						HX_STACK_LINE(416)
						Float tmp38 = (xx + yy);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(416)
						Float tmp39 = ((int)1 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(416)
						te[(int)10] = tmp39;
						HX_STACK_LINE(416)
						te[(int)3] = (int)0;
						HX_STACK_LINE(416)
						te[(int)7] = (int)0;
						HX_STACK_LINE(416)
						te[(int)11] = (int)0;
						HX_STACK_LINE(416)
						te[(int)12] = (int)0;
						HX_STACK_LINE(416)
						te[(int)13] = (int)0;
						HX_STACK_LINE(416)
						te[(int)14] = (int)0;
						HX_STACK_LINE(416)
						te[(int)15] = (int)1;
						HX_STACK_LINE(416)
						_this1;
					}
					HX_STACK_LINE(416)
					{
						HX_STACK_LINE(416)
						::phoenix::Matrix _this1 = _this->_origin_undo_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(416)
							e[(int)0] = (int)1;
							HX_STACK_LINE(416)
							e[(int)4] = (int)0;
							HX_STACK_LINE(416)
							e[(int)8] = (int)0;
							HX_STACK_LINE(416)
							Float tmp15 = _this->origin->x;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(416)
							Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(416)
							e[(int)12] = tmp16;
							HX_STACK_LINE(416)
							e[(int)1] = (int)0;
							HX_STACK_LINE(416)
							e[(int)5] = (int)1;
							HX_STACK_LINE(416)
							e[(int)9] = (int)0;
							HX_STACK_LINE(416)
							Float tmp17 = _this->origin->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(416)
							Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(416)
							e[(int)13] = tmp18;
							HX_STACK_LINE(416)
							e[(int)2] = (int)0;
							HX_STACK_LINE(416)
							e[(int)6] = (int)0;
							HX_STACK_LINE(416)
							e[(int)10] = (int)1;
							HX_STACK_LINE(416)
							Float tmp19 = _this->origin->z;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(416)
							Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(416)
							e[(int)14] = tmp20;
							HX_STACK_LINE(416)
							e[(int)3] = (int)0;
							HX_STACK_LINE(416)
							e[(int)7] = (int)0;
							HX_STACK_LINE(416)
							e[(int)11] = (int)0;
							HX_STACK_LINE(416)
							e[(int)15] = (int)1;
							HX_STACK_LINE(416)
							_this1;
						}
						HX_STACK_LINE(416)
						_this1;
					}
					HX_STACK_LINE(416)
					{
						HX_STACK_LINE(416)
						::phoenix::Matrix tmp15 = _this->local->matrix;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(416)
						::phoenix::Matrix _this1 = tmp15;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(416)
							e[(int)0] = (int)1;
							HX_STACK_LINE(416)
							e[(int)4] = (int)0;
							HX_STACK_LINE(416)
							e[(int)8] = (int)0;
							HX_STACK_LINE(416)
							Float tmp16 = _this->origin->x;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(416)
							e[(int)12] = tmp16;
							HX_STACK_LINE(416)
							e[(int)1] = (int)0;
							HX_STACK_LINE(416)
							e[(int)5] = (int)1;
							HX_STACK_LINE(416)
							e[(int)9] = (int)0;
							HX_STACK_LINE(416)
							Float tmp17 = _this->origin->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(416)
							e[(int)13] = tmp17;
							HX_STACK_LINE(416)
							e[(int)2] = (int)0;
							HX_STACK_LINE(416)
							e[(int)6] = (int)0;
							HX_STACK_LINE(416)
							e[(int)10] = (int)1;
							HX_STACK_LINE(416)
							Float tmp18 = _this->origin->z;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(416)
							e[(int)14] = tmp18;
							HX_STACK_LINE(416)
							e[(int)3] = (int)0;
							HX_STACK_LINE(416)
							e[(int)7] = (int)0;
							HX_STACK_LINE(416)
							e[(int)11] = (int)0;
							HX_STACK_LINE(416)
							e[(int)15] = (int)1;
							HX_STACK_LINE(416)
							_this1;
						}
						HX_STACK_LINE(416)
						_this1;
					}
					HX_STACK_LINE(416)
					{
						HX_STACK_LINE(416)
						::phoenix::Matrix tmp15 = _this->local->matrix;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(416)
						::phoenix::Matrix _this1 = tmp15;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(416)
							Array< Float > be = _this->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(416)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(416)
							Float tmp16 = ae->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(416)
							Float a11 = tmp16;		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(416)
							Float tmp17 = ae->__get((int)4);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(416)
							Float a12 = tmp17;		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(416)
							Float tmp18 = ae->__get((int)8);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(416)
							Float a13 = tmp18;		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(416)
							Float tmp19 = ae->__get((int)12);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(416)
							Float a14 = tmp19;		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(416)
							Float tmp20 = ae->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(416)
							Float a21 = tmp20;		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(416)
							Float tmp21 = ae->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(416)
							Float a22 = tmp21;		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(416)
							Float tmp22 = ae->__get((int)9);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(416)
							Float a23 = tmp22;		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(416)
							Float tmp23 = ae->__get((int)13);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(416)
							Float a24 = tmp23;		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(416)
							Float tmp24 = ae->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(416)
							Float a31 = tmp24;		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(416)
							Float tmp25 = ae->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(416)
							Float a32 = tmp25;		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(416)
							Float tmp26 = ae->__get((int)10);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(416)
							Float a33 = tmp26;		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(416)
							Float tmp27 = ae->__get((int)14);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(416)
							Float a34 = tmp27;		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(416)
							Float tmp28 = ae->__get((int)3);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(416)
							Float a41 = tmp28;		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(416)
							Float tmp29 = ae->__get((int)7);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(416)
							Float a42 = tmp29;		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(416)
							Float tmp30 = ae->__get((int)11);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(416)
							Float a43 = tmp30;		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(416)
							Float tmp31 = ae->__get((int)15);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(416)
							Float a44 = tmp31;		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(416)
							Float tmp32 = be->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(416)
							Float b11 = tmp32;		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(416)
							Float tmp33 = be->__get((int)4);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(416)
							Float b12 = tmp33;		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(416)
							Float tmp34 = be->__get((int)8);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(416)
							Float b13 = tmp34;		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(416)
							Float tmp35 = be->__get((int)12);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(416)
							Float b14 = tmp35;		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(416)
							Float tmp36 = be->__get((int)1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(416)
							Float b21 = tmp36;		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(416)
							Float tmp37 = be->__get((int)5);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(416)
							Float b22 = tmp37;		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(416)
							Float tmp38 = be->__get((int)9);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(416)
							Float b23 = tmp38;		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(416)
							Float tmp39 = be->__get((int)13);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(416)
							Float b24 = tmp39;		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(416)
							Float tmp40 = be->__get((int)2);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(416)
							Float b31 = tmp40;		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(416)
							Float tmp41 = be->__get((int)6);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(416)
							Float b32 = tmp41;		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(416)
							Float tmp42 = be->__get((int)10);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(416)
							Float b33 = tmp42;		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(416)
							Float tmp43 = be->__get((int)14);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(416)
							Float b34 = tmp43;		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(416)
							Float tmp44 = be->__get((int)3);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(416)
							Float b41 = tmp44;		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(416)
							Float tmp45 = be->__get((int)7);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(416)
							Float b42 = tmp45;		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(416)
							Float tmp46 = be->__get((int)11);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(416)
							Float b43 = tmp46;		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(416)
							Float tmp47 = be->__get((int)15);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(416)
							Float b44 = tmp47;		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(416)
							Float tmp48 = (a11 * b11);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(416)
							Float tmp49 = (a12 * b21);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(416)
							Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(416)
							Float tmp51 = (a13 * b31);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(416)
							Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(416)
							Float tmp53 = (a14 * b41);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(416)
							Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(416)
							te[(int)0] = tmp54;
							HX_STACK_LINE(416)
							Float tmp55 = (a11 * b12);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(416)
							Float tmp56 = (a12 * b22);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(416)
							Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(416)
							Float tmp58 = (a13 * b32);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(416)
							Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(416)
							Float tmp60 = (a14 * b42);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(416)
							Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(416)
							te[(int)4] = tmp61;
							HX_STACK_LINE(416)
							Float tmp62 = (a11 * b13);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(416)
							Float tmp63 = (a12 * b23);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(416)
							Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(416)
							Float tmp65 = (a13 * b33);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(416)
							Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(416)
							Float tmp67 = (a14 * b43);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(416)
							Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(416)
							te[(int)8] = tmp68;
							HX_STACK_LINE(416)
							Float tmp69 = (a11 * b14);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(416)
							Float tmp70 = (a12 * b24);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(416)
							Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(416)
							Float tmp72 = (a13 * b34);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(416)
							Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(416)
							Float tmp74 = (a14 * b44);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(416)
							Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(416)
							te[(int)12] = tmp75;
							HX_STACK_LINE(416)
							Float tmp76 = (a21 * b11);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(416)
							Float tmp77 = (a22 * b21);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(416)
							Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(416)
							Float tmp79 = (a23 * b31);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(416)
							Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(416)
							Float tmp81 = (a24 * b41);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(416)
							Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(416)
							te[(int)1] = tmp82;
							HX_STACK_LINE(416)
							Float tmp83 = (a21 * b12);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(416)
							Float tmp84 = (a22 * b22);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(416)
							Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(416)
							Float tmp86 = (a23 * b32);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(416)
							Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(416)
							Float tmp88 = (a24 * b42);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(416)
							Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(416)
							te[(int)5] = tmp89;
							HX_STACK_LINE(416)
							Float tmp90 = (a21 * b13);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(416)
							Float tmp91 = (a22 * b23);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(416)
							Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(416)
							Float tmp93 = (a23 * b33);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(416)
							Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(416)
							Float tmp95 = (a24 * b43);		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(416)
							Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(416)
							te[(int)9] = tmp96;
							HX_STACK_LINE(416)
							Float tmp97 = (a21 * b14);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(416)
							Float tmp98 = (a22 * b24);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(416)
							Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(416)
							Float tmp100 = (a23 * b34);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(416)
							Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(416)
							Float tmp102 = (a24 * b44);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(416)
							Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(416)
							te[(int)13] = tmp103;
							HX_STACK_LINE(416)
							Float tmp104 = (a31 * b11);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(416)
							Float tmp105 = (a32 * b21);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(416)
							Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(416)
							Float tmp107 = (a33 * b31);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(416)
							Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(416)
							Float tmp109 = (a34 * b41);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(416)
							Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(416)
							te[(int)2] = tmp110;
							HX_STACK_LINE(416)
							Float tmp111 = (a31 * b12);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(416)
							Float tmp112 = (a32 * b22);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(416)
							Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(416)
							Float tmp114 = (a33 * b32);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(416)
							Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(416)
							Float tmp116 = (a34 * b42);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(416)
							Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(416)
							te[(int)6] = tmp117;
							HX_STACK_LINE(416)
							Float tmp118 = (a31 * b13);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(416)
							Float tmp119 = (a32 * b23);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(416)
							Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(416)
							Float tmp121 = (a33 * b33);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(416)
							Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(416)
							Float tmp123 = (a34 * b43);		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(416)
							Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(416)
							te[(int)10] = tmp124;
							HX_STACK_LINE(416)
							Float tmp125 = (a31 * b14);		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(416)
							Float tmp126 = (a32 * b24);		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(416)
							Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(416)
							Float tmp128 = (a33 * b34);		HX_STACK_VAR(tmp128,"tmp128");
							HX_STACK_LINE(416)
							Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(416)
							Float tmp130 = (a34 * b44);		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(416)
							Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(416)
							te[(int)14] = tmp131;
							HX_STACK_LINE(416)
							Float tmp132 = (a41 * b11);		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(416)
							Float tmp133 = (a42 * b21);		HX_STACK_VAR(tmp133,"tmp133");
							HX_STACK_LINE(416)
							Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
							HX_STACK_LINE(416)
							Float tmp135 = (a43 * b31);		HX_STACK_VAR(tmp135,"tmp135");
							HX_STACK_LINE(416)
							Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
							HX_STACK_LINE(416)
							Float tmp137 = (a44 * b41);		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(416)
							Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(416)
							te[(int)3] = tmp138;
							HX_STACK_LINE(416)
							Float tmp139 = (a41 * b12);		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(416)
							Float tmp140 = (a42 * b22);		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(416)
							Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
							HX_STACK_LINE(416)
							Float tmp142 = (a43 * b32);		HX_STACK_VAR(tmp142,"tmp142");
							HX_STACK_LINE(416)
							Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
							HX_STACK_LINE(416)
							Float tmp144 = (a44 * b42);		HX_STACK_VAR(tmp144,"tmp144");
							HX_STACK_LINE(416)
							Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
							HX_STACK_LINE(416)
							te[(int)7] = tmp145;
							HX_STACK_LINE(416)
							Float tmp146 = (a41 * b13);		HX_STACK_VAR(tmp146,"tmp146");
							HX_STACK_LINE(416)
							Float tmp147 = (a42 * b23);		HX_STACK_VAR(tmp147,"tmp147");
							HX_STACK_LINE(416)
							Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
							HX_STACK_LINE(416)
							Float tmp149 = (a43 * b33);		HX_STACK_VAR(tmp149,"tmp149");
							HX_STACK_LINE(416)
							Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
							HX_STACK_LINE(416)
							Float tmp151 = (a44 * b43);		HX_STACK_VAR(tmp151,"tmp151");
							HX_STACK_LINE(416)
							Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
							HX_STACK_LINE(416)
							te[(int)11] = tmp152;
							HX_STACK_LINE(416)
							Float tmp153 = (a41 * b14);		HX_STACK_VAR(tmp153,"tmp153");
							HX_STACK_LINE(416)
							Float tmp154 = (a42 * b24);		HX_STACK_VAR(tmp154,"tmp154");
							HX_STACK_LINE(416)
							Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
							HX_STACK_LINE(416)
							Float tmp156 = (a43 * b34);		HX_STACK_VAR(tmp156,"tmp156");
							HX_STACK_LINE(416)
							Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
							HX_STACK_LINE(416)
							Float tmp158 = (a44 * b44);		HX_STACK_VAR(tmp158,"tmp158");
							HX_STACK_LINE(416)
							Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
							HX_STACK_LINE(416)
							te[(int)15] = tmp159;
							HX_STACK_LINE(416)
							_this1;
						}
					}
					HX_STACK_LINE(416)
					{
						HX_STACK_LINE(416)
						::phoenix::Matrix tmp15 = _this->local->matrix;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(416)
						::phoenix::Matrix _this1 = tmp15;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(416)
						::phoenix::Vector tmp16 = _this->local->scale;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(416)
						::phoenix::Vector _v = tmp16;		HX_STACK_VAR(_v,"_v");
						HX_STACK_LINE(416)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(416)
						Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(416)
						Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(416)
						Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(416)
						Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(416)
						hx::MultEq(te[(int)0],tmp17);
						HX_STACK_LINE(416)
						Float tmp18 = _y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(416)
						hx::MultEq(te[(int)4],tmp18);
						HX_STACK_LINE(416)
						Float tmp19 = _z;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(416)
						hx::MultEq(te[(int)8],tmp19);
						HX_STACK_LINE(416)
						Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(416)
						hx::MultEq(te[(int)1],tmp20);
						HX_STACK_LINE(416)
						Float tmp21 = _y;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(416)
						hx::MultEq(te[(int)5],tmp21);
						HX_STACK_LINE(416)
						Float tmp22 = _z;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(416)
						hx::MultEq(te[(int)9],tmp22);
						HX_STACK_LINE(416)
						Float tmp23 = _x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(416)
						hx::MultEq(te[(int)2],tmp23);
						HX_STACK_LINE(416)
						Float tmp24 = _y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(416)
						hx::MultEq(te[(int)6],tmp24);
						HX_STACK_LINE(416)
						Float tmp25 = _z;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(416)
						hx::MultEq(te[(int)10],tmp25);
						HX_STACK_LINE(416)
						Float tmp26 = _x;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(416)
						hx::MultEq(te[(int)3],tmp26);
						HX_STACK_LINE(416)
						Float tmp27 = _y;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(416)
						hx::MultEq(te[(int)7],tmp27);
						HX_STACK_LINE(416)
						Float tmp28 = _z;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(416)
						hx::MultEq(te[(int)11],tmp28);
						HX_STACK_LINE(416)
						_this1;
					}
					HX_STACK_LINE(416)
					{
						HX_STACK_LINE(416)
						::phoenix::Matrix tmp15 = _this->local->matrix;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(416)
						::phoenix::Matrix _this1 = tmp15;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(416)
						::phoenix::Vector tmp16 = _this->local->pos;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(416)
						::phoenix::Vector _v = tmp16;		HX_STACK_VAR(_v,"_v");
						HX_STACK_LINE(416)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(416)
						Float tmp17 = _v->x;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(416)
						te[(int)12] = tmp17;
						HX_STACK_LINE(416)
						Float tmp18 = _v->y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(416)
						te[(int)13] = tmp18;
						HX_STACK_LINE(416)
						Float tmp19 = _v->z;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(416)
						te[(int)14] = tmp19;
						HX_STACK_LINE(416)
						_this1;
					}
					HX_STACK_LINE(416)
					{
						HX_STACK_LINE(416)
						::phoenix::Matrix tmp15 = _this->local->matrix;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(416)
						::phoenix::Matrix _this1 = tmp15;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(416)
							Array< Float > be = _this->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(416)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(416)
							Float tmp16 = ae->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(416)
							Float a11 = tmp16;		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(416)
							Float tmp17 = ae->__get((int)4);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(416)
							Float a12 = tmp17;		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(416)
							Float tmp18 = ae->__get((int)8);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(416)
							Float a13 = tmp18;		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(416)
							Float tmp19 = ae->__get((int)12);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(416)
							Float a14 = tmp19;		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(416)
							Float tmp20 = ae->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(416)
							Float a21 = tmp20;		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(416)
							Float tmp21 = ae->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(416)
							Float a22 = tmp21;		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(416)
							Float tmp22 = ae->__get((int)9);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(416)
							Float a23 = tmp22;		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(416)
							Float tmp23 = ae->__get((int)13);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(416)
							Float a24 = tmp23;		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(416)
							Float tmp24 = ae->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(416)
							Float a31 = tmp24;		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(416)
							Float tmp25 = ae->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(416)
							Float a32 = tmp25;		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(416)
							Float tmp26 = ae->__get((int)10);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(416)
							Float a33 = tmp26;		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(416)
							Float tmp27 = ae->__get((int)14);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(416)
							Float a34 = tmp27;		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(416)
							Float tmp28 = ae->__get((int)3);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(416)
							Float a41 = tmp28;		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(416)
							Float tmp29 = ae->__get((int)7);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(416)
							Float a42 = tmp29;		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(416)
							Float tmp30 = ae->__get((int)11);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(416)
							Float a43 = tmp30;		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(416)
							Float tmp31 = ae->__get((int)15);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(416)
							Float a44 = tmp31;		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(416)
							Float tmp32 = be->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(416)
							Float b11 = tmp32;		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(416)
							Float tmp33 = be->__get((int)4);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(416)
							Float b12 = tmp33;		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(416)
							Float tmp34 = be->__get((int)8);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(416)
							Float b13 = tmp34;		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(416)
							Float tmp35 = be->__get((int)12);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(416)
							Float b14 = tmp35;		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(416)
							Float tmp36 = be->__get((int)1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(416)
							Float b21 = tmp36;		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(416)
							Float tmp37 = be->__get((int)5);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(416)
							Float b22 = tmp37;		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(416)
							Float tmp38 = be->__get((int)9);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(416)
							Float b23 = tmp38;		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(416)
							Float tmp39 = be->__get((int)13);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(416)
							Float b24 = tmp39;		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(416)
							Float tmp40 = be->__get((int)2);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(416)
							Float b31 = tmp40;		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(416)
							Float tmp41 = be->__get((int)6);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(416)
							Float b32 = tmp41;		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(416)
							Float tmp42 = be->__get((int)10);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(416)
							Float b33 = tmp42;		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(416)
							Float tmp43 = be->__get((int)14);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(416)
							Float b34 = tmp43;		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(416)
							Float tmp44 = be->__get((int)3);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(416)
							Float b41 = tmp44;		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(416)
							Float tmp45 = be->__get((int)7);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(416)
							Float b42 = tmp45;		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(416)
							Float tmp46 = be->__get((int)11);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(416)
							Float b43 = tmp46;		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(416)
							Float tmp47 = be->__get((int)15);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(416)
							Float b44 = tmp47;		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(416)
							Float tmp48 = (a11 * b11);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(416)
							Float tmp49 = (a12 * b21);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(416)
							Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(416)
							Float tmp51 = (a13 * b31);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(416)
							Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(416)
							Float tmp53 = (a14 * b41);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(416)
							Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(416)
							te[(int)0] = tmp54;
							HX_STACK_LINE(416)
							Float tmp55 = (a11 * b12);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(416)
							Float tmp56 = (a12 * b22);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(416)
							Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(416)
							Float tmp58 = (a13 * b32);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(416)
							Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(416)
							Float tmp60 = (a14 * b42);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(416)
							Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(416)
							te[(int)4] = tmp61;
							HX_STACK_LINE(416)
							Float tmp62 = (a11 * b13);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(416)
							Float tmp63 = (a12 * b23);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(416)
							Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(416)
							Float tmp65 = (a13 * b33);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(416)
							Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(416)
							Float tmp67 = (a14 * b43);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(416)
							Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(416)
							te[(int)8] = tmp68;
							HX_STACK_LINE(416)
							Float tmp69 = (a11 * b14);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(416)
							Float tmp70 = (a12 * b24);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(416)
							Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(416)
							Float tmp72 = (a13 * b34);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(416)
							Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(416)
							Float tmp74 = (a14 * b44);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(416)
							Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(416)
							te[(int)12] = tmp75;
							HX_STACK_LINE(416)
							Float tmp76 = (a21 * b11);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(416)
							Float tmp77 = (a22 * b21);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(416)
							Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(416)
							Float tmp79 = (a23 * b31);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(416)
							Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(416)
							Float tmp81 = (a24 * b41);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(416)
							Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(416)
							te[(int)1] = tmp82;
							HX_STACK_LINE(416)
							Float tmp83 = (a21 * b12);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(416)
							Float tmp84 = (a22 * b22);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(416)
							Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(416)
							Float tmp86 = (a23 * b32);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(416)
							Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(416)
							Float tmp88 = (a24 * b42);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(416)
							Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(416)
							te[(int)5] = tmp89;
							HX_STACK_LINE(416)
							Float tmp90 = (a21 * b13);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(416)
							Float tmp91 = (a22 * b23);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(416)
							Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(416)
							Float tmp93 = (a23 * b33);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(416)
							Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(416)
							Float tmp95 = (a24 * b43);		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(416)
							Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(416)
							te[(int)9] = tmp96;
							HX_STACK_LINE(416)
							Float tmp97 = (a21 * b14);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(416)
							Float tmp98 = (a22 * b24);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(416)
							Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(416)
							Float tmp100 = (a23 * b34);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(416)
							Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(416)
							Float tmp102 = (a24 * b44);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(416)
							Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(416)
							te[(int)13] = tmp103;
							HX_STACK_LINE(416)
							Float tmp104 = (a31 * b11);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(416)
							Float tmp105 = (a32 * b21);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(416)
							Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(416)
							Float tmp107 = (a33 * b31);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(416)
							Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(416)
							Float tmp109 = (a34 * b41);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(416)
							Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(416)
							te[(int)2] = tmp110;
							HX_STACK_LINE(416)
							Float tmp111 = (a31 * b12);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(416)
							Float tmp112 = (a32 * b22);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(416)
							Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(416)
							Float tmp114 = (a33 * b32);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(416)
							Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(416)
							Float tmp116 = (a34 * b42);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(416)
							Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(416)
							te[(int)6] = tmp117;
							HX_STACK_LINE(416)
							Float tmp118 = (a31 * b13);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(416)
							Float tmp119 = (a32 * b23);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(416)
							Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(416)
							Float tmp121 = (a33 * b33);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(416)
							Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(416)
							Float tmp123 = (a34 * b43);		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(416)
							Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(416)
							te[(int)10] = tmp124;
							HX_STACK_LINE(416)
							Float tmp125 = (a31 * b14);		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(416)
							Float tmp126 = (a32 * b24);		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(416)
							Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(416)
							Float tmp128 = (a33 * b34);		HX_STACK_VAR(tmp128,"tmp128");
							HX_STACK_LINE(416)
							Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(416)
							Float tmp130 = (a34 * b44);		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(416)
							Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(416)
							te[(int)14] = tmp131;
							HX_STACK_LINE(416)
							Float tmp132 = (a41 * b11);		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(416)
							Float tmp133 = (a42 * b21);		HX_STACK_VAR(tmp133,"tmp133");
							HX_STACK_LINE(416)
							Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
							HX_STACK_LINE(416)
							Float tmp135 = (a43 * b31);		HX_STACK_VAR(tmp135,"tmp135");
							HX_STACK_LINE(416)
							Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
							HX_STACK_LINE(416)
							Float tmp137 = (a44 * b41);		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(416)
							Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(416)
							te[(int)3] = tmp138;
							HX_STACK_LINE(416)
							Float tmp139 = (a41 * b12);		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(416)
							Float tmp140 = (a42 * b22);		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(416)
							Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
							HX_STACK_LINE(416)
							Float tmp142 = (a43 * b32);		HX_STACK_VAR(tmp142,"tmp142");
							HX_STACK_LINE(416)
							Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
							HX_STACK_LINE(416)
							Float tmp144 = (a44 * b42);		HX_STACK_VAR(tmp144,"tmp144");
							HX_STACK_LINE(416)
							Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
							HX_STACK_LINE(416)
							te[(int)7] = tmp145;
							HX_STACK_LINE(416)
							Float tmp146 = (a41 * b13);		HX_STACK_VAR(tmp146,"tmp146");
							HX_STACK_LINE(416)
							Float tmp147 = (a42 * b23);		HX_STACK_VAR(tmp147,"tmp147");
							HX_STACK_LINE(416)
							Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
							HX_STACK_LINE(416)
							Float tmp149 = (a43 * b33);		HX_STACK_VAR(tmp149,"tmp149");
							HX_STACK_LINE(416)
							Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
							HX_STACK_LINE(416)
							Float tmp151 = (a44 * b43);		HX_STACK_VAR(tmp151,"tmp151");
							HX_STACK_LINE(416)
							Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
							HX_STACK_LINE(416)
							te[(int)11] = tmp152;
							HX_STACK_LINE(416)
							Float tmp153 = (a41 * b14);		HX_STACK_VAR(tmp153,"tmp153");
							HX_STACK_LINE(416)
							Float tmp154 = (a42 * b24);		HX_STACK_VAR(tmp154,"tmp154");
							HX_STACK_LINE(416)
							Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
							HX_STACK_LINE(416)
							Float tmp156 = (a43 * b34);		HX_STACK_VAR(tmp156,"tmp156");
							HX_STACK_LINE(416)
							Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
							HX_STACK_LINE(416)
							Float tmp158 = (a44 * b44);		HX_STACK_VAR(tmp158,"tmp158");
							HX_STACK_LINE(416)
							Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
							HX_STACK_LINE(416)
							te[(int)15] = tmp159;
							HX_STACK_LINE(416)
							_this1;
						}
					}
					HX_STACK_LINE(416)
					bool tmp15 = (_this->parent != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(416)
					if ((tmp15)){
						HX_STACK_LINE(416)
						::phoenix::Spatial tmp16 = _this->get_world();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(416)
						::phoenix::Spatial _this1 = tmp16;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(416)
						::phoenix::Matrix tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::phoenix::Matrix tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								::phoenix::Spatial tmp19 = _this->get_world();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(416)
								::phoenix::Spatial _this2 = tmp19;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(416)
								tmp18 = _this2->matrix;
							}
							HX_STACK_LINE(416)
							::phoenix::Matrix _this2 = tmp18;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(416)
							::phoenix::Matrix tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								::phoenix::Spatial tmp20 = _this->parent->get_world();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(416)
								::phoenix::Spatial _this3 = tmp20;		HX_STACK_VAR(_this3,"_this3");
								HX_STACK_LINE(416)
								tmp19 = _this3->matrix;
							}
							HX_STACK_LINE(416)
							::phoenix::Matrix _a = tmp19;		HX_STACK_VAR(_a,"_a");
							HX_STACK_LINE(416)
							Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(416)
							::phoenix::Matrix tmp20 = _this->local->matrix;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(416)
							Array< Float > be = tmp20->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(416)
							Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(416)
							Float tmp21 = ae->__get((int)0);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(416)
							Float a11 = tmp21;		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(416)
							Float tmp22 = ae->__get((int)4);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(416)
							Float a12 = tmp22;		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(416)
							Float tmp23 = ae->__get((int)8);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(416)
							Float a13 = tmp23;		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(416)
							Float tmp24 = ae->__get((int)12);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(416)
							Float a14 = tmp24;		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(416)
							Float tmp25 = ae->__get((int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(416)
							Float a21 = tmp25;		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(416)
							Float tmp26 = ae->__get((int)5);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(416)
							Float a22 = tmp26;		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(416)
							Float tmp27 = ae->__get((int)9);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(416)
							Float a23 = tmp27;		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(416)
							Float tmp28 = ae->__get((int)13);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(416)
							Float a24 = tmp28;		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(416)
							Float tmp29 = ae->__get((int)2);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(416)
							Float a31 = tmp29;		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(416)
							Float tmp30 = ae->__get((int)6);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(416)
							Float a32 = tmp30;		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(416)
							Float tmp31 = ae->__get((int)10);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(416)
							Float a33 = tmp31;		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(416)
							Float tmp32 = ae->__get((int)14);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(416)
							Float a34 = tmp32;		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(416)
							Float tmp33 = ae->__get((int)3);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(416)
							Float a41 = tmp33;		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(416)
							Float tmp34 = ae->__get((int)7);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(416)
							Float a42 = tmp34;		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(416)
							Float tmp35 = ae->__get((int)11);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(416)
							Float a43 = tmp35;		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(416)
							Float tmp36 = ae->__get((int)15);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(416)
							Float a44 = tmp36;		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(416)
							Float tmp37 = be->__get((int)0);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(416)
							Float b11 = tmp37;		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(416)
							Float tmp38 = be->__get((int)4);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(416)
							Float b12 = tmp38;		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(416)
							Float tmp39 = be->__get((int)8);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(416)
							Float b13 = tmp39;		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(416)
							Float tmp40 = be->__get((int)12);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(416)
							Float b14 = tmp40;		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(416)
							Float tmp41 = be->__get((int)1);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(416)
							Float b21 = tmp41;		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(416)
							Float tmp42 = be->__get((int)5);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(416)
							Float b22 = tmp42;		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(416)
							Float tmp43 = be->__get((int)9);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(416)
							Float b23 = tmp43;		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(416)
							Float tmp44 = be->__get((int)13);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(416)
							Float b24 = tmp44;		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(416)
							Float tmp45 = be->__get((int)2);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(416)
							Float b31 = tmp45;		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(416)
							Float tmp46 = be->__get((int)6);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(416)
							Float b32 = tmp46;		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(416)
							Float tmp47 = be->__get((int)10);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(416)
							Float b33 = tmp47;		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(416)
							Float tmp48 = be->__get((int)14);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(416)
							Float b34 = tmp48;		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(416)
							Float tmp49 = be->__get((int)3);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(416)
							Float b41 = tmp49;		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(416)
							Float tmp50 = be->__get((int)7);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(416)
							Float b42 = tmp50;		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(416)
							Float tmp51 = be->__get((int)11);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(416)
							Float b43 = tmp51;		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(416)
							Float tmp52 = be->__get((int)15);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(416)
							Float b44 = tmp52;		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(416)
							Float tmp53 = (a11 * b11);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(416)
							Float tmp54 = (a12 * b21);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(416)
							Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(416)
							Float tmp56 = (a13 * b31);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(416)
							Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(416)
							Float tmp58 = (a14 * b41);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(416)
							Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(416)
							te[(int)0] = tmp59;
							HX_STACK_LINE(416)
							Float tmp60 = (a11 * b12);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(416)
							Float tmp61 = (a12 * b22);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(416)
							Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(416)
							Float tmp63 = (a13 * b32);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(416)
							Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(416)
							Float tmp65 = (a14 * b42);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(416)
							Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(416)
							te[(int)4] = tmp66;
							HX_STACK_LINE(416)
							Float tmp67 = (a11 * b13);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(416)
							Float tmp68 = (a12 * b23);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(416)
							Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(416)
							Float tmp70 = (a13 * b33);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(416)
							Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(416)
							Float tmp72 = (a14 * b43);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(416)
							Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(416)
							te[(int)8] = tmp73;
							HX_STACK_LINE(416)
							Float tmp74 = (a11 * b14);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(416)
							Float tmp75 = (a12 * b24);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(416)
							Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(416)
							Float tmp77 = (a13 * b34);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(416)
							Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(416)
							Float tmp79 = (a14 * b44);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(416)
							Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(416)
							te[(int)12] = tmp80;
							HX_STACK_LINE(416)
							Float tmp81 = (a21 * b11);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(416)
							Float tmp82 = (a22 * b21);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(416)
							Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(416)
							Float tmp84 = (a23 * b31);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(416)
							Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(416)
							Float tmp86 = (a24 * b41);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(416)
							Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(416)
							te[(int)1] = tmp87;
							HX_STACK_LINE(416)
							Float tmp88 = (a21 * b12);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(416)
							Float tmp89 = (a22 * b22);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(416)
							Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(416)
							Float tmp91 = (a23 * b32);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(416)
							Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(416)
							Float tmp93 = (a24 * b42);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(416)
							Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(416)
							te[(int)5] = tmp94;
							HX_STACK_LINE(416)
							Float tmp95 = (a21 * b13);		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(416)
							Float tmp96 = (a22 * b23);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(416)
							Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(416)
							Float tmp98 = (a23 * b33);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(416)
							Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(416)
							Float tmp100 = (a24 * b43);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(416)
							Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(416)
							te[(int)9] = tmp101;
							HX_STACK_LINE(416)
							Float tmp102 = (a21 * b14);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(416)
							Float tmp103 = (a22 * b24);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(416)
							Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(416)
							Float tmp105 = (a23 * b34);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(416)
							Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(416)
							Float tmp107 = (a24 * b44);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(416)
							Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(416)
							te[(int)13] = tmp108;
							HX_STACK_LINE(416)
							Float tmp109 = (a31 * b11);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(416)
							Float tmp110 = (a32 * b21);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(416)
							Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(416)
							Float tmp112 = (a33 * b31);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(416)
							Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(416)
							Float tmp114 = (a34 * b41);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(416)
							Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(416)
							te[(int)2] = tmp115;
							HX_STACK_LINE(416)
							Float tmp116 = (a31 * b12);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(416)
							Float tmp117 = (a32 * b22);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(416)
							Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(416)
							Float tmp119 = (a33 * b32);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(416)
							Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(416)
							Float tmp121 = (a34 * b42);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(416)
							Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(416)
							te[(int)6] = tmp122;
							HX_STACK_LINE(416)
							Float tmp123 = (a31 * b13);		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(416)
							Float tmp124 = (a32 * b23);		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(416)
							Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(416)
							Float tmp126 = (a33 * b33);		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(416)
							Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(416)
							Float tmp128 = (a34 * b43);		HX_STACK_VAR(tmp128,"tmp128");
							HX_STACK_LINE(416)
							Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(416)
							te[(int)10] = tmp129;
							HX_STACK_LINE(416)
							Float tmp130 = (a31 * b14);		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(416)
							Float tmp131 = (a32 * b24);		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(416)
							Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(416)
							Float tmp133 = (a33 * b34);		HX_STACK_VAR(tmp133,"tmp133");
							HX_STACK_LINE(416)
							Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
							HX_STACK_LINE(416)
							Float tmp135 = (a34 * b44);		HX_STACK_VAR(tmp135,"tmp135");
							HX_STACK_LINE(416)
							Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
							HX_STACK_LINE(416)
							te[(int)14] = tmp136;
							HX_STACK_LINE(416)
							Float tmp137 = (a41 * b11);		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(416)
							Float tmp138 = (a42 * b21);		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(416)
							Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(416)
							Float tmp140 = (a43 * b31);		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(416)
							Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
							HX_STACK_LINE(416)
							Float tmp142 = (a44 * b41);		HX_STACK_VAR(tmp142,"tmp142");
							HX_STACK_LINE(416)
							Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
							HX_STACK_LINE(416)
							te[(int)3] = tmp143;
							HX_STACK_LINE(416)
							Float tmp144 = (a41 * b12);		HX_STACK_VAR(tmp144,"tmp144");
							HX_STACK_LINE(416)
							Float tmp145 = (a42 * b22);		HX_STACK_VAR(tmp145,"tmp145");
							HX_STACK_LINE(416)
							Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
							HX_STACK_LINE(416)
							Float tmp147 = (a43 * b32);		HX_STACK_VAR(tmp147,"tmp147");
							HX_STACK_LINE(416)
							Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
							HX_STACK_LINE(416)
							Float tmp149 = (a44 * b42);		HX_STACK_VAR(tmp149,"tmp149");
							HX_STACK_LINE(416)
							Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
							HX_STACK_LINE(416)
							te[(int)7] = tmp150;
							HX_STACK_LINE(416)
							Float tmp151 = (a41 * b13);		HX_STACK_VAR(tmp151,"tmp151");
							HX_STACK_LINE(416)
							Float tmp152 = (a42 * b23);		HX_STACK_VAR(tmp152,"tmp152");
							HX_STACK_LINE(416)
							Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
							HX_STACK_LINE(416)
							Float tmp154 = (a43 * b33);		HX_STACK_VAR(tmp154,"tmp154");
							HX_STACK_LINE(416)
							Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
							HX_STACK_LINE(416)
							Float tmp156 = (a44 * b43);		HX_STACK_VAR(tmp156,"tmp156");
							HX_STACK_LINE(416)
							Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
							HX_STACK_LINE(416)
							te[(int)11] = tmp157;
							HX_STACK_LINE(416)
							Float tmp158 = (a41 * b14);		HX_STACK_VAR(tmp158,"tmp158");
							HX_STACK_LINE(416)
							Float tmp159 = (a42 * b24);		HX_STACK_VAR(tmp159,"tmp159");
							HX_STACK_LINE(416)
							Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
							HX_STACK_LINE(416)
							Float tmp161 = (a43 * b34);		HX_STACK_VAR(tmp161,"tmp161");
							HX_STACK_LINE(416)
							Float tmp162 = (tmp160 + tmp161);		HX_STACK_VAR(tmp162,"tmp162");
							HX_STACK_LINE(416)
							Float tmp163 = (a44 * b44);		HX_STACK_VAR(tmp163,"tmp163");
							HX_STACK_LINE(416)
							Float tmp164 = (tmp162 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
							HX_STACK_LINE(416)
							te[(int)15] = tmp164;
							HX_STACK_LINE(416)
							tmp17 = _this2;
						}
						HX_STACK_LINE(416)
						::phoenix::Matrix _m = tmp17;		HX_STACK_VAR(_m,"_m");
						HX_STACK_LINE(416)
						_this1->matrix = _m;
						HX_STACK_LINE(416)
						bool tmp18 = (_m != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(416)
						if ((tmp18)){
							HX_STACK_LINE(416)
							::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								cpp::ArrayBase array = _this1->matrix->elements;		HX_STACK_VAR(array,"array");
								HX_STACK_LINE(416)
								::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(416)
								bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(416)
								if ((tmp20)){
									HX_STACK_LINE(416)
									::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(416)
									this1 = tmp21;
								}
								else{
									HX_STACK_LINE(416)
									bool tmp21 = (array != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(416)
									if ((tmp21)){
										HX_STACK_LINE(416)
										::snow::api::buffers::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											::snow::api::buffers::ArrayBufferView tmp23 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(416)
											::snow::api::buffers::ArrayBufferView _this2 = tmp23;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(416)
											_this2->byteOffset = (int)0;
											HX_STACK_LINE(416)
											_this2->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
											HX_STACK_LINE(416)
											int tmp24 = (_this2->length * _this2->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(416)
											_this2->byteLength = tmp24;
											HX_STACK_LINE(416)
											::haxe::io::Bytes tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(416)
											{
												HX_STACK_LINE(416)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(416)
												int tmp26 = _this2->byteLength;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(416)
												::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(416)
												this2 = tmp27;
												HX_STACK_LINE(416)
												tmp25 = this2;
											}
											HX_STACK_LINE(416)
											_this2->buffer = tmp25;
											HX_STACK_LINE(416)
											_this2->copyFromArray(((Array< Float >)(array)),null());
											HX_STACK_LINE(416)
											tmp22 = _this2;
										}
										HX_STACK_LINE(416)
										this1 = tmp22;
									}
									else{
										HX_STACK_LINE(416)
										bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(416)
										if ((tmp22)){
											HX_STACK_LINE(416)
											::snow::api::buffers::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(416)
											{
												HX_STACK_LINE(416)
												::snow::api::buffers::ArrayBufferView tmp24 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(416)
												::snow::api::buffers::ArrayBufferView _this2 = tmp24;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(416)
												::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(416)
												::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
												HX_STACK_LINE(416)
												int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(416)
												int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
												HX_STACK_LINE(416)
												int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(416)
												int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
												HX_STACK_LINE(416)
												int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(416)
												int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
												HX_STACK_LINE(416)
												int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(416)
												int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(416)
												int tmp30 = _this2->type;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(416)
												bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(416)
												if ((tmp31)){
													HX_STACK_LINE(416)
													int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
													HX_STACK_LINE(416)
													int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(416)
													int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
													HX_STACK_LINE(416)
													::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(416)
													{
														HX_STACK_LINE(416)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(416)
														int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(416)
														::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(416)
														this2 = tmp35;
														HX_STACK_LINE(416)
														tmp33 = this2;
													}
													HX_STACK_LINE(416)
													_this2->buffer = tmp33;
													HX_STACK_LINE(416)
													::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(416)
													int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(416)
													int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(416)
													_this2->buffer->blit((int)0,tmp34,tmp35,tmp36);
												}
												else{
													HX_STACK_LINE(416)
													HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
												}
												HX_STACK_LINE(416)
												int tmp32 = (_this2->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(416)
												_this2->byteLength = tmp32;
												HX_STACK_LINE(416)
												_this2->byteOffset = (int)0;
												HX_STACK_LINE(416)
												_this2->length = srcLength;
												HX_STACK_LINE(416)
												tmp23 = _this2;
											}
											HX_STACK_LINE(416)
											this1 = tmp23;
										}
										else{
											HX_STACK_LINE(416)
											bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(416)
											if ((tmp23)){
												HX_STACK_LINE(416)
												::snow::api::buffers::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(416)
												{
													HX_STACK_LINE(416)
													::snow::api::buffers::ArrayBufferView tmp25 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(416)
													::snow::api::buffers::ArrayBufferView _this2 = tmp25;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(416)
													bool tmp26 = false;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(416)
													if ((tmp26)){
														HX_STACK_LINE(416)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(416)
													int tmp27 = hx::Mod((int)0,_this2->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(416)
													bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(416)
													if ((tmp28)){
														HX_STACK_LINE(416)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(416)
													int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(416)
													int bufferByteLength = tmp29;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
													HX_STACK_LINE(416)
													int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(416)
													int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
													HX_STACK_LINE(416)
													bool tmp30 = true;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(416)
													if ((tmp30)){
														HX_STACK_LINE(416)
														int tmp31 = bufferByteLength;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(416)
														newByteLength = tmp31;
														HX_STACK_LINE(416)
														int tmp32 = hx::Mod(bufferByteLength,_this2->bytesPerElement);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(416)
														bool tmp33 = (tmp32 != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(416)
														if ((tmp33)){
															HX_STACK_LINE(416)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
														HX_STACK_LINE(416)
														bool tmp34 = (newByteLength < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(416)
														if ((tmp34)){
															HX_STACK_LINE(416)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													else{
														HX_STACK_LINE(416)
														int tmp31 = (null() * _this2->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(416)
														newByteLength = tmp31;
														HX_STACK_LINE(416)
														int tmp32 = newByteLength;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(416)
														int newRange = tmp32;		HX_STACK_VAR(newRange,"newRange");
														HX_STACK_LINE(416)
														bool tmp33 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(416)
														if ((tmp33)){
															HX_STACK_LINE(416)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													HX_STACK_LINE(416)
													_this2->buffer = null();
													HX_STACK_LINE(416)
													_this2->byteOffset = (int)0;
													HX_STACK_LINE(416)
													_this2->byteLength = newByteLength;
													HX_STACK_LINE(416)
													Float tmp31 = (Float(newByteLength) / Float(_this2->bytesPerElement));		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(416)
													int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(416)
													_this2->length = tmp32;
													HX_STACK_LINE(416)
													tmp24 = _this2;
												}
												HX_STACK_LINE(416)
												this1 = tmp24;
											}
											else{
												HX_STACK_LINE(416)
												HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
											}
										}
									}
								}
								HX_STACK_LINE(416)
								tmp19 = this1;
							}
							HX_STACK_LINE(416)
							_this1->floats = tmp19;
						}
						HX_STACK_LINE(416)
						_this1->matrix;
					}
					else{
						HX_STACK_LINE(416)
						::phoenix::Spatial tmp16 = _this->get_world();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(416)
						::phoenix::Spatial _this1 = tmp16;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(416)
						::phoenix::Matrix tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::phoenix::Matrix tmp18 = _this->local->matrix;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(416)
							Array< Float > te = tmp18->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(416)
							Float tmp19 = te->__get((int)0);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(416)
							Float tmp20 = te->__get((int)4);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(416)
							Float tmp21 = te->__get((int)8);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(416)
							Float tmp22 = te->__get((int)12);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(416)
							Float tmp23 = te->__get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(416)
							Float tmp24 = te->__get((int)5);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(416)
							Float tmp25 = te->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(416)
							Float tmp26 = te->__get((int)13);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(416)
							Float tmp27 = te->__get((int)2);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(416)
							Float tmp28 = te->__get((int)6);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(416)
							Float tmp29 = te->__get((int)10);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(416)
							Float tmp30 = te->__get((int)14);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(416)
							Float tmp31 = te->__get((int)3);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(416)
							Float tmp32 = te->__get((int)7);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(416)
							Float tmp33 = te->__get((int)11);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(416)
							Float tmp34 = te->__get((int)15);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(416)
							tmp17 = ::phoenix::Matrix_obj::__new(tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31,tmp32,tmp33,tmp34);
						}
						HX_STACK_LINE(416)
						::phoenix::Matrix _m = tmp17;		HX_STACK_VAR(_m,"_m");
						HX_STACK_LINE(416)
						_this1->matrix = _m;
						HX_STACK_LINE(416)
						bool tmp18 = (_m != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(416)
						if ((tmp18)){
							HX_STACK_LINE(416)
							::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								cpp::ArrayBase array = _this1->matrix->elements;		HX_STACK_VAR(array,"array");
								HX_STACK_LINE(416)
								::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(416)
								bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(416)
								if ((tmp20)){
									HX_STACK_LINE(416)
									::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(416)
									this1 = tmp21;
								}
								else{
									HX_STACK_LINE(416)
									bool tmp21 = (array != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(416)
									if ((tmp21)){
										HX_STACK_LINE(416)
										::snow::api::buffers::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											::snow::api::buffers::ArrayBufferView tmp23 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(416)
											::snow::api::buffers::ArrayBufferView _this2 = tmp23;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(416)
											_this2->byteOffset = (int)0;
											HX_STACK_LINE(416)
											_this2->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
											HX_STACK_LINE(416)
											int tmp24 = (_this2->length * _this2->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(416)
											_this2->byteLength = tmp24;
											HX_STACK_LINE(416)
											::haxe::io::Bytes tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(416)
											{
												HX_STACK_LINE(416)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(416)
												int tmp26 = _this2->byteLength;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(416)
												::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(416)
												this2 = tmp27;
												HX_STACK_LINE(416)
												tmp25 = this2;
											}
											HX_STACK_LINE(416)
											_this2->buffer = tmp25;
											HX_STACK_LINE(416)
											_this2->copyFromArray(((Array< Float >)(array)),null());
											HX_STACK_LINE(416)
											tmp22 = _this2;
										}
										HX_STACK_LINE(416)
										this1 = tmp22;
									}
									else{
										HX_STACK_LINE(416)
										bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(416)
										if ((tmp22)){
											HX_STACK_LINE(416)
											::snow::api::buffers::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(416)
											{
												HX_STACK_LINE(416)
												::snow::api::buffers::ArrayBufferView tmp24 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(416)
												::snow::api::buffers::ArrayBufferView _this2 = tmp24;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(416)
												::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(416)
												::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
												HX_STACK_LINE(416)
												int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(416)
												int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
												HX_STACK_LINE(416)
												int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(416)
												int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
												HX_STACK_LINE(416)
												int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(416)
												int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
												HX_STACK_LINE(416)
												int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(416)
												int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(416)
												int tmp30 = _this2->type;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(416)
												bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(416)
												if ((tmp31)){
													HX_STACK_LINE(416)
													int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
													HX_STACK_LINE(416)
													int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(416)
													int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
													HX_STACK_LINE(416)
													::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(416)
													{
														HX_STACK_LINE(416)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(416)
														int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(416)
														::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(416)
														this2 = tmp35;
														HX_STACK_LINE(416)
														tmp33 = this2;
													}
													HX_STACK_LINE(416)
													_this2->buffer = tmp33;
													HX_STACK_LINE(416)
													::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(416)
													int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(416)
													int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(416)
													_this2->buffer->blit((int)0,tmp34,tmp35,tmp36);
												}
												else{
													HX_STACK_LINE(416)
													HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
												}
												HX_STACK_LINE(416)
												int tmp32 = (_this2->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(416)
												_this2->byteLength = tmp32;
												HX_STACK_LINE(416)
												_this2->byteOffset = (int)0;
												HX_STACK_LINE(416)
												_this2->length = srcLength;
												HX_STACK_LINE(416)
												tmp23 = _this2;
											}
											HX_STACK_LINE(416)
											this1 = tmp23;
										}
										else{
											HX_STACK_LINE(416)
											bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(416)
											if ((tmp23)){
												HX_STACK_LINE(416)
												::snow::api::buffers::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(416)
												{
													HX_STACK_LINE(416)
													::snow::api::buffers::ArrayBufferView tmp25 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(416)
													::snow::api::buffers::ArrayBufferView _this2 = tmp25;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(416)
													bool tmp26 = false;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(416)
													if ((tmp26)){
														HX_STACK_LINE(416)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(416)
													int tmp27 = hx::Mod((int)0,_this2->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(416)
													bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(416)
													if ((tmp28)){
														HX_STACK_LINE(416)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(416)
													int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(416)
													int bufferByteLength = tmp29;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
													HX_STACK_LINE(416)
													int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(416)
													int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
													HX_STACK_LINE(416)
													bool tmp30 = true;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(416)
													if ((tmp30)){
														HX_STACK_LINE(416)
														int tmp31 = bufferByteLength;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(416)
														newByteLength = tmp31;
														HX_STACK_LINE(416)
														int tmp32 = hx::Mod(bufferByteLength,_this2->bytesPerElement);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(416)
														bool tmp33 = (tmp32 != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(416)
														if ((tmp33)){
															HX_STACK_LINE(416)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
														HX_STACK_LINE(416)
														bool tmp34 = (newByteLength < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(416)
														if ((tmp34)){
															HX_STACK_LINE(416)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													else{
														HX_STACK_LINE(416)
														int tmp31 = (null() * _this2->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(416)
														newByteLength = tmp31;
														HX_STACK_LINE(416)
														int tmp32 = newByteLength;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(416)
														int newRange = tmp32;		HX_STACK_VAR(newRange,"newRange");
														HX_STACK_LINE(416)
														bool tmp33 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(416)
														if ((tmp33)){
															HX_STACK_LINE(416)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													HX_STACK_LINE(416)
													_this2->buffer = null();
													HX_STACK_LINE(416)
													_this2->byteOffset = (int)0;
													HX_STACK_LINE(416)
													_this2->byteLength = newByteLength;
													HX_STACK_LINE(416)
													Float tmp31 = (Float(newByteLength) / Float(_this2->bytesPerElement));		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(416)
													int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(416)
													_this2->length = tmp32;
													HX_STACK_LINE(416)
													tmp24 = _this2;
												}
												HX_STACK_LINE(416)
												this1 = tmp24;
											}
											else{
												HX_STACK_LINE(416)
												HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
											}
										}
									}
								}
								HX_STACK_LINE(416)
								tmp19 = this1;
							}
							HX_STACK_LINE(416)
							_this1->floats = tmp19;
						}
						HX_STACK_LINE(416)
						_this1->matrix;
					}
					HX_STACK_LINE(416)
					{
						HX_STACK_LINE(416)
						::phoenix::Spatial tmp16 = _this->get_world();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(416)
						::phoenix::Spatial _this1 = tmp16;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(416)
						bool tmp17 = _this1->auto_decompose;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(416)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(416)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(416)
						if ((tmp18)){
							HX_STACK_LINE(416)
							tmp19 = false;
						}
						else{
							HX_STACK_LINE(416)
							tmp19 = true;
						}
						HX_STACK_LINE(416)
						if ((tmp19)){
							HX_STACK_LINE(416)
							::phoenix::MatrixTransform tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(416)
								::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
								HX_STACK_LINE(416)
								::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
								HX_STACK_LINE(416)
								::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
								HX_STACK_LINE(416)
								Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(416)
								::phoenix::Matrix tmp21 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(416)
								::phoenix::Matrix matrix = tmp21;		HX_STACK_VAR(matrix,"matrix");
								HX_STACK_LINE(416)
								Float tmp22 = te->__get((int)0);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(416)
								Float _ax_x = tmp22;		HX_STACK_VAR(_ax_x,"_ax_x");
								HX_STACK_LINE(416)
								Float tmp23 = te->__get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(416)
								Float _ax_y = tmp23;		HX_STACK_VAR(_ax_y,"_ax_y");
								HX_STACK_LINE(416)
								Float tmp24 = te->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(416)
								Float _ax_z = tmp24;		HX_STACK_VAR(_ax_z,"_ax_z");
								HX_STACK_LINE(416)
								Float tmp25 = te->__get((int)4);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(416)
								Float _ay_x = tmp25;		HX_STACK_VAR(_ay_x,"_ay_x");
								HX_STACK_LINE(416)
								Float tmp26 = te->__get((int)5);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(416)
								Float _ay_y = tmp26;		HX_STACK_VAR(_ay_y,"_ay_y");
								HX_STACK_LINE(416)
								Float tmp27 = te->__get((int)6);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(416)
								Float _ay_z = tmp27;		HX_STACK_VAR(_ay_z,"_ay_z");
								HX_STACK_LINE(416)
								Float tmp28 = te->__get((int)8);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(416)
								Float _az_x = tmp28;		HX_STACK_VAR(_az_x,"_az_x");
								HX_STACK_LINE(416)
								Float tmp29 = te->__get((int)9);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(416)
								Float _az_y = tmp29;		HX_STACK_VAR(_az_y,"_az_y");
								HX_STACK_LINE(416)
								Float tmp30 = te->__get((int)10);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(416)
								Float _az_z = tmp30;		HX_STACK_VAR(_az_z,"_az_z");
								HX_STACK_LINE(416)
								Float tmp31 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(416)
								Float tmp32 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(416)
								Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(416)
								Float tmp34 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(416)
								Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(416)
								Float tmp36 = ::Math_obj::sqrt(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(416)
								Float _ax_length = tmp36;		HX_STACK_VAR(_ax_length,"_ax_length");
								HX_STACK_LINE(416)
								Float tmp37 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(416)
								Float tmp38 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(416)
								Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(416)
								Float tmp40 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(416)
								Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(416)
								Float tmp42 = ::Math_obj::sqrt(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(416)
								Float _ay_length = tmp42;		HX_STACK_VAR(_ay_length,"_ay_length");
								HX_STACK_LINE(416)
								Float tmp43 = (_az_x * _az_x);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(416)
								Float tmp44 = (_az_y * _az_y);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(416)
								Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(416)
								Float tmp46 = (_az_z * _az_z);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(416)
								Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(416)
								Float tmp48 = ::Math_obj::sqrt(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(416)
								Float _az_length = tmp48;		HX_STACK_VAR(_az_length,"_az_length");
								HX_STACK_LINE(416)
								bool tmp49 = (_quaternion == null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(416)
								if ((tmp49)){
									HX_STACK_LINE(416)
									::phoenix::Quaternion tmp50 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(416)
									_quaternion = tmp50;
								}
								HX_STACK_LINE(416)
								bool tmp50 = (_position == null());		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(416)
								if ((tmp50)){
									HX_STACK_LINE(416)
									Float tmp51 = te->__get((int)12);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(416)
									Float tmp52 = te->__get((int)13);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(416)
									Float tmp53 = te->__get((int)14);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(416)
									::phoenix::Vector tmp54 = ::phoenix::Vector_obj::__new(tmp51,tmp52,tmp53,null());		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(416)
									_position = tmp54;
								}
								else{
									HX_STACK_LINE(416)
									{
										HX_STACK_LINE(416)
										Float tmp51 = te->__get((int)12);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(416)
										Float _x = tmp51;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(416)
										_position->x = _x;
										HX_STACK_LINE(416)
										bool tmp52 = _position->_construct;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(416)
										if ((tmp52)){
											HX_STACK_LINE(416)
											_position->x;
										}
										else{
											HX_STACK_LINE(416)
											bool tmp53 = (_position->listen_x != null());		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(416)
											bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(416)
											if ((tmp53)){
												HX_STACK_LINE(416)
												bool tmp55 = _position->ignore_listeners;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(416)
												bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(416)
												tmp54 = !(tmp56);
											}
											else{
												HX_STACK_LINE(416)
												tmp54 = false;
											}
											HX_STACK_LINE(416)
											if ((tmp54)){
												HX_STACK_LINE(416)
												Float tmp55 = _x;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(416)
												_position->listen_x(tmp55);
											}
											HX_STACK_LINE(416)
											_position->x;
										}
									}
									HX_STACK_LINE(416)
									{
										HX_STACK_LINE(416)
										Float tmp51 = te->__get((int)13);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(416)
										Float _y = tmp51;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(416)
										_position->y = _y;
										HX_STACK_LINE(416)
										bool tmp52 = _position->_construct;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(416)
										if ((tmp52)){
											HX_STACK_LINE(416)
											_position->y;
										}
										else{
											HX_STACK_LINE(416)
											bool tmp53 = (_position->listen_y != null());		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(416)
											bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(416)
											if ((tmp53)){
												HX_STACK_LINE(416)
												bool tmp55 = _position->ignore_listeners;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(416)
												bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(416)
												tmp54 = !(tmp56);
											}
											else{
												HX_STACK_LINE(416)
												tmp54 = false;
											}
											HX_STACK_LINE(416)
											if ((tmp54)){
												HX_STACK_LINE(416)
												Float tmp55 = _y;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(416)
												_position->listen_y(tmp55);
											}
											HX_STACK_LINE(416)
											_position->y;
										}
									}
									HX_STACK_LINE(416)
									{
										HX_STACK_LINE(416)
										Float tmp51 = te->__get((int)14);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(416)
										Float _z = tmp51;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(416)
										_position->z = _z;
										HX_STACK_LINE(416)
										bool tmp52 = _position->_construct;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(416)
										if ((tmp52)){
											HX_STACK_LINE(416)
											_position->z;
										}
										else{
											HX_STACK_LINE(416)
											bool tmp53 = (_position->listen_z != null());		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(416)
											bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(416)
											if ((tmp53)){
												HX_STACK_LINE(416)
												bool tmp55 = _position->ignore_listeners;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(416)
												bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(416)
												tmp54 = !(tmp56);
											}
											else{
												HX_STACK_LINE(416)
												tmp54 = false;
											}
											HX_STACK_LINE(416)
											if ((tmp54)){
												HX_STACK_LINE(416)
												Float tmp55 = _z;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(416)
												_position->listen_z(tmp55);
											}
											HX_STACK_LINE(416)
											_position->z;
										}
									}
								}
								HX_STACK_LINE(416)
								bool tmp51 = (_scale == null());		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(416)
								if ((tmp51)){
									HX_STACK_LINE(416)
									::phoenix::Vector tmp52 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(416)
									_scale = tmp52;
								}
								else{
									HX_STACK_LINE(416)
									{
										HX_STACK_LINE(416)
										_scale->x = _ax_length;
										HX_STACK_LINE(416)
										bool tmp52 = _scale->_construct;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(416)
										if ((tmp52)){
											HX_STACK_LINE(416)
											_scale->x;
										}
										else{
											HX_STACK_LINE(416)
											bool tmp53 = (_scale->listen_x != null());		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(416)
											bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(416)
											if ((tmp53)){
												HX_STACK_LINE(416)
												bool tmp55 = _scale->ignore_listeners;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(416)
												bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(416)
												tmp54 = !(tmp56);
											}
											else{
												HX_STACK_LINE(416)
												tmp54 = false;
											}
											HX_STACK_LINE(416)
											if ((tmp54)){
												HX_STACK_LINE(416)
												Float tmp55 = _ax_length;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(416)
												_scale->listen_x(tmp55);
											}
											HX_STACK_LINE(416)
											_scale->x;
										}
									}
									HX_STACK_LINE(416)
									{
										HX_STACK_LINE(416)
										_scale->y = _ay_length;
										HX_STACK_LINE(416)
										bool tmp52 = _scale->_construct;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(416)
										if ((tmp52)){
											HX_STACK_LINE(416)
											_scale->y;
										}
										else{
											HX_STACK_LINE(416)
											bool tmp53 = (_scale->listen_y != null());		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(416)
											bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(416)
											if ((tmp53)){
												HX_STACK_LINE(416)
												bool tmp55 = _scale->ignore_listeners;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(416)
												bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(416)
												tmp54 = !(tmp56);
											}
											else{
												HX_STACK_LINE(416)
												tmp54 = false;
											}
											HX_STACK_LINE(416)
											if ((tmp54)){
												HX_STACK_LINE(416)
												Float tmp55 = _ay_length;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(416)
												_scale->listen_y(tmp55);
											}
											HX_STACK_LINE(416)
											_scale->y;
										}
									}
									HX_STACK_LINE(416)
									{
										HX_STACK_LINE(416)
										_scale->z = _az_length;
										HX_STACK_LINE(416)
										bool tmp52 = _scale->_construct;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(416)
										if ((tmp52)){
											HX_STACK_LINE(416)
											_scale->z;
										}
										else{
											HX_STACK_LINE(416)
											bool tmp53 = (_scale->listen_z != null());		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(416)
											bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(416)
											if ((tmp53)){
												HX_STACK_LINE(416)
												bool tmp55 = _scale->ignore_listeners;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(416)
												bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(416)
												tmp54 = !(tmp56);
											}
											else{
												HX_STACK_LINE(416)
												tmp54 = false;
											}
											HX_STACK_LINE(416)
											if ((tmp54)){
												HX_STACK_LINE(416)
												Float tmp55 = _az_length;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(416)
												_scale->listen_z(tmp55);
											}
											HX_STACK_LINE(416)
											_scale->z;
										}
									}
								}
								HX_STACK_LINE(416)
								matrix->elements = _this2->elements->concat(Array_obj< Float >::__new());
								HX_STACK_LINE(416)
								Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
								HX_STACK_LINE(416)
								Float tmp52 = _ax_length;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(416)
								hx::DivEq(me[(int)0],tmp52);
								HX_STACK_LINE(416)
								Float tmp53 = _ax_length;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(416)
								hx::DivEq(me[(int)1],tmp53);
								HX_STACK_LINE(416)
								Float tmp54 = _ax_length;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(416)
								hx::DivEq(me[(int)2],tmp54);
								HX_STACK_LINE(416)
								Float tmp55 = _ay_length;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(416)
								hx::DivEq(me[(int)4],tmp55);
								HX_STACK_LINE(416)
								Float tmp56 = _ay_length;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(416)
								hx::DivEq(me[(int)5],tmp56);
								HX_STACK_LINE(416)
								Float tmp57 = _ay_length;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(416)
								hx::DivEq(me[(int)6],tmp57);
								HX_STACK_LINE(416)
								Float tmp58 = _az_length;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(416)
								hx::DivEq(me[(int)8],tmp58);
								HX_STACK_LINE(416)
								Float tmp59 = _az_length;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(416)
								hx::DivEq(me[(int)9],tmp59);
								HX_STACK_LINE(416)
								Float tmp60 = _az_length;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(416)
								hx::DivEq(me[(int)10],tmp60);
								HX_STACK_LINE(416)
								::phoenix::Matrix tmp61 = matrix;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(416)
								_quaternion->setFromRotationMatrix(tmp61);
								HX_STACK_LINE(416)
								bool tmp62 = (_this2->_transform == null());		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(416)
								if ((tmp62)){
									HX_STACK_LINE(416)
									::phoenix::MatrixTransform tmp63 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(416)
									_this2->_transform = tmp63;
								}
								else{
									HX_STACK_LINE(416)
									_this2->_transform->pos = _position;
									HX_STACK_LINE(416)
									_this2->_transform->rotation = _quaternion;
									HX_STACK_LINE(416)
									_this2->_transform->scale = _scale;
								}
								HX_STACK_LINE(416)
								tmp20 = _this2->_transform;
							}
							HX_STACK_LINE(416)
							::phoenix::MatrixTransform _transform = tmp20;		HX_STACK_VAR(_transform,"_transform");
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
								HX_STACK_LINE(416)
								_this1->pos = _p;
								HX_STACK_LINE(416)
								bool tmp21 = (_p != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(416)
								if ((tmp21)){
									HX_STACK_LINE(416)
									::phoenix::Vector tmp22 = _this1->pos;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(416)
									Dynamic tmp23 = _this1->_pos_change_dyn();		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(416)
									::phoenix::Vector_obj::Listen(tmp22,tmp23);
									HX_STACK_LINE(416)
									{
										HX_STACK_LINE(416)
										bool tmp24 = (_this1->pos_changed != null());		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(416)
										bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(416)
										if ((tmp24)){
											HX_STACK_LINE(416)
											bool tmp26 = _this1->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(416)
											bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(416)
											tmp25 = !(tmp27);
										}
										else{
											HX_STACK_LINE(416)
											tmp25 = false;
										}
										HX_STACK_LINE(416)
										if ((tmp25)){
											HX_STACK_LINE(416)
											::phoenix::Vector tmp26 = _this1->pos;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(416)
											_this1->pos_changed(tmp26);
										}
									}
								}
								HX_STACK_LINE(416)
								_this1->pos;
							}
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
								HX_STACK_LINE(416)
								_this1->rotation = _r;
								HX_STACK_LINE(416)
								bool tmp21 = (_r != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(416)
								if ((tmp21)){
									HX_STACK_LINE(416)
									{
										HX_STACK_LINE(416)
										::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
										HX_STACK_LINE(416)
										Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
										HX_STACK_LINE(416)
										_q->listen_x = listener;
										HX_STACK_LINE(416)
										_q->listen_y = listener;
										HX_STACK_LINE(416)
										_q->listen_z = listener;
										HX_STACK_LINE(416)
										_q->listen_w = listener;
									}
									HX_STACK_LINE(416)
									{
										HX_STACK_LINE(416)
										bool tmp22 = (_this1->rotation_changed != null());		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(416)
										bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(416)
										if ((tmp22)){
											HX_STACK_LINE(416)
											bool tmp24 = _this1->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(416)
											bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(416)
											tmp23 = !(tmp25);
										}
										else{
											HX_STACK_LINE(416)
											tmp23 = false;
										}
										HX_STACK_LINE(416)
										if ((tmp23)){
											HX_STACK_LINE(416)
											::phoenix::Quaternion tmp24 = _this1->rotation;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(416)
											_this1->rotation_changed(tmp24);
										}
									}
								}
								HX_STACK_LINE(416)
								_this1->rotation;
							}
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
								HX_STACK_LINE(416)
								_this1->scale = _s;
								HX_STACK_LINE(416)
								bool tmp21 = (_s != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(416)
								if ((tmp21)){
									HX_STACK_LINE(416)
									::phoenix::Vector tmp22 = _this1->scale;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(416)
									Dynamic tmp23 = _this1->_scale_change_dyn();		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(416)
									::phoenix::Vector_obj::Listen(tmp22,tmp23);
									HX_STACK_LINE(416)
									{
										HX_STACK_LINE(416)
										bool tmp24 = (_this1->scale_changed != null());		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(416)
										bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(416)
										if ((tmp24)){
											HX_STACK_LINE(416)
											bool tmp26 = _this1->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(416)
											bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(416)
											tmp25 = !(tmp27);
										}
										else{
											HX_STACK_LINE(416)
											tmp25 = false;
										}
										HX_STACK_LINE(416)
										if ((tmp25)){
											HX_STACK_LINE(416)
											::phoenix::Vector tmp26 = _this1->scale;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(416)
											_this1->scale_changed(tmp26);
										}
									}
								}
								HX_STACK_LINE(416)
								_this1->scale;
							}
						}
						HX_STACK_LINE(416)
						_this1;
					}
					HX_STACK_LINE(416)
					{
						HX_STACK_LINE(416)
						_this->dirty = false;
						HX_STACK_LINE(416)
						bool tmp16 = _this->dirty;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(416)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(416)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(416)
						if ((tmp17)){
							HX_STACK_LINE(416)
							bool tmp19 = _this->_setup;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(416)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(416)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(416)
							tmp18 = !(tmp21);
						}
						else{
							HX_STACK_LINE(416)
							tmp18 = false;
						}
						HX_STACK_LINE(416)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(416)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(416)
						if ((tmp19)){
							HX_STACK_LINE(416)
							tmp20 = (_this->_dirty_handlers != null());
						}
						else{
							HX_STACK_LINE(416)
							tmp20 = false;
						}
						HX_STACK_LINE(416)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(416)
						if ((tmp20)){
							HX_STACK_LINE(416)
							int tmp22 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(416)
							int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(416)
							tmp21 = (tmp23 > (int)0);
						}
						else{
							HX_STACK_LINE(416)
							tmp21 = false;
						}
						HX_STACK_LINE(416)
						if ((tmp21)){
							HX_STACK_LINE(416)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(416)
							cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(416)
							while((true)){
								HX_STACK_LINE(416)
								bool tmp22 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(416)
								bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(416)
								if ((tmp23)){
									HX_STACK_LINE(416)
									break;
								}
								HX_STACK_LINE(416)
								Dynamic tmp24 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(416)
								Dynamic _handler = tmp24;		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(416)
								++(_g);
								HX_STACK_LINE(416)
								bool tmp25 = (_handler != null());		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(416)
								if ((tmp25)){
									HX_STACK_LINE(416)
									::phoenix::Transform tmp26 = _this;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(416)
									_handler(tmp26).Cast< Void >();
								}
							}
						}
						HX_STACK_LINE(416)
						_this->dirty;
					}
					HX_STACK_LINE(416)
					_this->_cleaning = false;
					HX_STACK_LINE(416)
					bool tmp16 = (_this->_clean_handlers != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(416)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(416)
					if ((tmp16)){
						HX_STACK_LINE(416)
						int tmp18 = _this->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(416)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(416)
						tmp17 = (tmp19 > (int)0);
					}
					else{
						HX_STACK_LINE(416)
						tmp17 = false;
					}
					HX_STACK_LINE(416)
					if ((tmp17)){
						HX_STACK_LINE(416)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(416)
						cpp::ArrayBase _g1 = _this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(416)
						while((true)){
							HX_STACK_LINE(416)
							bool tmp18 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(416)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(416)
							if ((tmp19)){
								HX_STACK_LINE(416)
								break;
							}
							HX_STACK_LINE(416)
							Dynamic tmp20 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(416)
							Dynamic _handler = tmp20;		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(416)
							++(_g);
							HX_STACK_LINE(416)
							bool tmp21 = (_handler != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(416)
							if ((tmp21)){
								HX_STACK_LINE(416)
								::phoenix::Transform tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(416)
								_handler(tmp22).Cast< Void >();
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(419)
		Float tmp9 = dt;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(419)
		this->update(tmp9);
		HX_STACK_LINE(421)
		::luxe::Events tmp10 = this->events;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(421)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(421)
		if ((tmp11)){
			HX_STACK_LINE(423)
			::luxe::Events tmp12 = this->events;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(423)
			tmp12->process();
		}
		HX_STACK_LINE(427)
		int tmp12 = this->component_count;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(427)
		bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(427)
		if ((tmp13)){
			HX_STACK_LINE(428)
			::luxe::components::Components tmp14 = this->_components;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(428)
			::luxe::structural::OrderedMap tmp15 = tmp14->components;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(428)
			::luxe::structural::OrderedMapIterator tmp16 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(428)
			::luxe::structural::OrderedMapIterator _g = tmp16;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(428)
			while((true)){
				HX_STACK_LINE(428)
				int tmp17 = _g->index;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(428)
				int tmp18 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(428)
				bool tmp19 = (tmp17 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(428)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(428)
				if ((tmp20)){
					HX_STACK_LINE(428)
					break;
				}
				HX_STACK_LINE(428)
				::luxe::Component tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					int tmp22 = (_g->index)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(428)
					::String tmp23 = _g->map->_keys->__GetItem(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(428)
					::String key = tmp23;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(428)
					::haxe::ds::StringMap tmp24 = _g->map->map;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(428)
					::String tmp25 = key;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(428)
					::luxe::Component tmp26 = tmp24->get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(428)
					tmp21 = tmp26;
				}
				HX_STACK_LINE(428)
				::luxe::Component _component = tmp21;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(429)
				Float tmp22 = dt;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(429)
				_component->update(tmp22);
			}
		}
		HX_STACK_LINE(434)
		int tmp14 = this->children->length;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(434)
		bool tmp15 = (tmp14 > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(434)
		if ((tmp15)){
			HX_STACK_LINE(435)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(435)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(435)
			while((true)){
				HX_STACK_LINE(435)
				bool tmp16 = (_g < _g1->length);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(435)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(435)
				if ((tmp17)){
					HX_STACK_LINE(435)
					break;
				}
				HX_STACK_LINE(435)
				::luxe::Entity tmp18 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(435)
				::luxe::Entity _child = tmp18;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(435)
				++(_g);
				HX_STACK_LINE(436)
				Float tmp19 = dt;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(436)
				_child->_update(tmp19);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_update,(void))

Void Entity_obj::_fixed_update( ){
{
		HX_STACK_FRAME("luxe.Entity","_fixed_update",0x8f91c8e0,"luxe.Entity._fixed_update","luxe/Entity.hx",445,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(447)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(447)
		if ((tmp)){
			HX_STACK_LINE(448)
			return null();
		}
		HX_STACK_LINE(451)
		bool tmp1 = this->get_active();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(451)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(451)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(451)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(451)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(451)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(451)
		if ((tmp5)){
			HX_STACK_LINE(451)
			bool tmp7 = this->inited;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(451)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(451)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(451)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(451)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(451)
			tmp6 = !(tmp11);
		}
		else{
			HX_STACK_LINE(451)
			tmp6 = true;
		}
		HX_STACK_LINE(451)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(451)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(451)
		if ((tmp7)){
			HX_STACK_LINE(451)
			bool tmp9 = this->started;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(451)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(451)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(451)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(451)
			tmp8 = true;
		}
		HX_STACK_LINE(451)
		if ((tmp8)){
			HX_STACK_LINE(452)
			return null();
		}
		HX_STACK_LINE(457)
		this->emit((int)5,null());
		HX_STACK_LINE(459)
		Float tmp9 = this->fixed_rate;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(459)
		this->onfixedupdate(tmp9);
		HX_STACK_LINE(461)
		int tmp10 = this->component_count;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(461)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(461)
		if ((tmp11)){
			HX_STACK_LINE(462)
			::luxe::components::Components tmp12 = this->_components;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(462)
			::luxe::structural::OrderedMap tmp13 = tmp12->components;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(462)
			::luxe::structural::OrderedMapIterator tmp14 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(462)
			::luxe::structural::OrderedMapIterator _g = tmp14;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(462)
			while((true)){
				HX_STACK_LINE(462)
				int tmp15 = _g->index;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(462)
				int tmp16 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(462)
				bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(462)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(462)
				if ((tmp18)){
					HX_STACK_LINE(462)
					break;
				}
				HX_STACK_LINE(462)
				::luxe::Component tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(462)
				{
					HX_STACK_LINE(462)
					int tmp20 = (_g->index)++;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(462)
					::String tmp21 = _g->map->_keys->__GetItem(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(462)
					::String key = tmp21;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(462)
					::haxe::ds::StringMap tmp22 = _g->map->map;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(462)
					::String tmp23 = key;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(462)
					::luxe::Component tmp24 = tmp22->get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(462)
					tmp19 = tmp24;
				}
				HX_STACK_LINE(462)
				::luxe::Component _component = tmp19;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(463)
				Float tmp20 = this->fixed_rate;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(463)
				_component->onfixedupdate(tmp20);
			}
		}
		HX_STACK_LINE(467)
		int tmp12 = this->children->length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(467)
		bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(467)
		if ((tmp13)){
			HX_STACK_LINE(468)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(468)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(468)
			while((true)){
				HX_STACK_LINE(468)
				bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(468)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(468)
				if ((tmp15)){
					HX_STACK_LINE(468)
					break;
				}
				HX_STACK_LINE(468)
				::luxe::Entity tmp16 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(468)
				::luxe::Entity _child = tmp16;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(468)
				++(_g);
				HX_STACK_LINE(469)
				_child->_fixed_update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_fixed_update,(void))

::luxe::Emitter Entity_obj::_find_emit_source( Dynamic __o__from_unlisten){
Dynamic _from_unlisten = __o__from_unlisten.Default(false);
	HX_STACK_FRAME("luxe.Entity","_find_emit_source",0x482d2e6d,"luxe.Entity._find_emit_source","luxe/Entity.hx",477,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_from_unlisten,"_from_unlisten")
{
		HX_STACK_LINE(479)
		::luxe::Scene source = null();		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(481)
		::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(481)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(481)
		if ((tmp1)){
			HX_STACK_LINE(483)
			::luxe::Scene tmp2 = this->get_scene();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(483)
			source = tmp2;
		}
		else{
			HX_STACK_LINE(485)
			::luxe::Entity tmp2 = this->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(485)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(485)
			if ((tmp3)){
				HX_STACK_LINE(487)
				bool looking = true;		HX_STACK_VAR(looking,"looking");
				HX_STACK_LINE(489)
				while((true)){
					HX_STACK_LINE(489)
					bool tmp4 = looking;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(489)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(489)
					if ((tmp5)){
						HX_STACK_LINE(489)
						break;
					}
					HX_STACK_LINE(492)
					::luxe::Entity tmp6 = this->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(492)
					::luxe::Scene tmp7 = tmp6->get_scene();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(492)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(492)
					if ((tmp8)){
						HX_STACK_LINE(494)
						::luxe::Entity tmp9 = this->get_parent();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(494)
						::luxe::Entity tmp10 = tmp9->get_parent();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(494)
						bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(494)
						if ((tmp11)){
							HX_STACK_LINE(495)
							Dynamic tmp12 = _from_unlisten;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(495)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(495)
							if ((tmp13)){
								HX_STACK_LINE(496)
								::String tmp14 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(496)
								Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),496,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(496)
								::haxe::Log_obj::trace(tmp14,tmp15);
							}
							HX_STACK_LINE(498)
							looking = false;
							HX_STACK_LINE(499)
							break;
						}
						else{
						}
					}
					else{
						HX_STACK_LINE(507)
						::luxe::Entity tmp9 = this->get_parent();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(507)
						::luxe::Scene tmp10 = tmp9->get_scene();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(507)
						source = tmp10;
						HX_STACK_LINE(508)
						looking = false;
						HX_STACK_LINE(509)
						break;
					}
				}
			}
			else{
				HX_STACK_LINE(516)
				Dynamic tmp4 = _from_unlisten;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(516)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(516)
				if ((tmp5)){
					HX_STACK_LINE(517)
					::String tmp6 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(517)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),517,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(517)
					::haxe::Log_obj::trace(tmp6,tmp7);
				}
			}
		}
		HX_STACK_LINE(521)
		::luxe::Scene tmp2 = source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(521)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_find_emit_source,return )

Void Entity_obj::_listen( int _event,Dynamic _handler,Dynamic __o__self){
Dynamic _self = __o__self.Default(false);
	HX_STACK_FRAME("luxe.Entity","_listen",0xd9717373,"luxe.Entity._listen","luxe/Entity.hx",526,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_ARG(_self,"_self")
{
		HX_STACK_LINE(536)
		Dynamic tmp = _self;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(536)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(536)
		if ((tmp1)){
			HX_STACK_LINE(537)
			int tmp2 = _event;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(537)
			Dynamic tmp3 = _handler;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(537)
			this->on(tmp2,tmp3);
		}
		HX_STACK_LINE(540)
		::luxe::Scene tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			::luxe::Scene source = null();		HX_STACK_VAR(source,"source");
			HX_STACK_LINE(540)
			::luxe::Scene tmp3 = this->get_scene();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(540)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(540)
			if ((tmp4)){
				HX_STACK_LINE(540)
				::luxe::Scene tmp5 = this->get_scene();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(540)
				source = tmp5;
			}
			else{
				HX_STACK_LINE(540)
				::luxe::Entity tmp5 = this->get_parent();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(540)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(540)
				if ((tmp6)){
					HX_STACK_LINE(540)
					bool looking = true;		HX_STACK_VAR(looking,"looking");
					HX_STACK_LINE(540)
					while((true)){
						HX_STACK_LINE(540)
						bool tmp7 = looking;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(540)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(540)
						if ((tmp8)){
							HX_STACK_LINE(540)
							break;
						}
						HX_STACK_LINE(540)
						::luxe::Entity tmp9 = this->get_parent();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(540)
						::luxe::Scene tmp10 = tmp9->get_scene();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(540)
						bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(540)
						if ((tmp11)){
							HX_STACK_LINE(540)
							::luxe::Entity tmp12 = this->get_parent();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(540)
							::luxe::Entity tmp13 = tmp12->get_parent();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(540)
							bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(540)
							if ((tmp14)){
								HX_STACK_LINE(540)
								bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(540)
								if ((tmp15)){
									HX_STACK_LINE(540)
									::String tmp16 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(540)
									Dynamic tmp17 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),496,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(540)
									::haxe::Log_obj::trace(tmp16,tmp17);
								}
								HX_STACK_LINE(540)
								looking = false;
								HX_STACK_LINE(540)
								break;
							}
							else{
							}
						}
						else{
							HX_STACK_LINE(540)
							::luxe::Entity tmp12 = this->get_parent();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(540)
							::luxe::Scene tmp13 = tmp12->get_scene();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(540)
							source = tmp13;
							HX_STACK_LINE(540)
							looking = false;
							HX_STACK_LINE(540)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(540)
					bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(540)
					if ((tmp7)){
						HX_STACK_LINE(540)
						::String tmp8 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(540)
						Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),517,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(540)
						::haxe::Log_obj::trace(tmp8,tmp9);
					}
				}
			}
			HX_STACK_LINE(540)
			tmp2 = source;
		}
		HX_STACK_LINE(540)
		::luxe::Emitter source = ((::luxe::Emitter)(tmp2));		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(544)
		bool tmp3 = (source != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(544)
		if ((tmp3)){
			HX_STACK_LINE(545)
			int tmp4 = _event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(545)
			switch( (int)(tmp4)){
				case (int)11: {
					HX_STACK_LINE(547)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(547)
					Dynamic tmp6 = this->_keyup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(547)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(548)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(548)
					Dynamic tmp6 = this->_keydown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(548)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(549)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(549)
					Dynamic tmp6 = this->_textinput_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(549)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(551)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(551)
					Dynamic tmp6 = this->_mousedown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(551)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(552)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(552)
					Dynamic tmp6 = this->_mouseup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(552)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(553)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(553)
					Dynamic tmp6 = this->_mousemove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(553)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(554)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(554)
					Dynamic tmp6 = this->_mousewheel_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(554)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)19: {
					HX_STACK_LINE(556)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(556)
					Dynamic tmp6 = this->_touchdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(556)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)20: {
					HX_STACK_LINE(557)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(557)
					Dynamic tmp6 = this->_touchup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(557)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)21: {
					HX_STACK_LINE(558)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(558)
					Dynamic tmp6 = this->_touchmove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(558)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(560)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(560)
					Dynamic tmp6 = this->_inputup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(560)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(561)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(561)
					Dynamic tmp6 = this->_inputdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(561)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)23: {
					HX_STACK_LINE(563)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(563)
					Dynamic tmp6 = this->_gamepaddown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(563)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)24: {
					HX_STACK_LINE(564)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(564)
					Dynamic tmp6 = this->_gamepadup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(564)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)22: {
					HX_STACK_LINE(565)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(565)
					Dynamic tmp6 = this->_gamepadaxis_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(565)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)25: {
					HX_STACK_LINE(566)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(566)
					Dynamic tmp6 = this->_gamepaddevice_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(566)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(568)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(568)
					Dynamic tmp6 = this->_windowmoved_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(568)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)28: {
					HX_STACK_LINE(569)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(569)
					Dynamic tmp6 = this->_windowresized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(569)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)29: {
					HX_STACK_LINE(570)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(570)
					Dynamic tmp6 = this->_windowsized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(570)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)30: {
					HX_STACK_LINE(571)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(571)
					Dynamic tmp6 = this->_windowminimized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(571)
					source->on(tmp5,tmp6);
				}
				;break;
				case (int)31: {
					HX_STACK_LINE(572)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(572)
					Dynamic tmp6 = this->_windowrestored_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(572)
					source->on(tmp5,tmp6);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,_listen,(void))

Void Entity_obj::_unlisten( int _event,Dynamic _handler,Dynamic __o__self){
Dynamic _self = __o__self.Default(false);
	HX_STACK_FRAME("luxe.Entity","_unlisten",0xe95ac58c,"luxe.Entity._unlisten","luxe/Entity.hx",582,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_ARG(_self,"_self")
{
		HX_STACK_LINE(584)
		::luxe::Scene tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(584)
		{
			HX_STACK_LINE(584)
			::luxe::Scene source = null();		HX_STACK_VAR(source,"source");
			HX_STACK_LINE(584)
			::luxe::Scene tmp1 = this->get_scene();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(584)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(584)
			if ((tmp2)){
				HX_STACK_LINE(584)
				::luxe::Scene tmp3 = this->get_scene();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(584)
				source = tmp3;
			}
			else{
				HX_STACK_LINE(584)
				::luxe::Entity tmp3 = this->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(584)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(584)
				if ((tmp4)){
					HX_STACK_LINE(584)
					bool looking = true;		HX_STACK_VAR(looking,"looking");
					HX_STACK_LINE(584)
					while((true)){
						HX_STACK_LINE(584)
						bool tmp5 = looking;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(584)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(584)
						if ((tmp6)){
							HX_STACK_LINE(584)
							break;
						}
						HX_STACK_LINE(584)
						::luxe::Entity tmp7 = this->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(584)
						::luxe::Scene tmp8 = tmp7->get_scene();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(584)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(584)
						if ((tmp9)){
							HX_STACK_LINE(584)
							::luxe::Entity tmp10 = this->get_parent();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(584)
							::luxe::Entity tmp11 = tmp10->get_parent();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(584)
							bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(584)
							if ((tmp12)){
								HX_STACK_LINE(584)
								bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(584)
								if ((tmp13)){
									HX_STACK_LINE(584)
									::String tmp14 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(584)
									Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),496,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(584)
									::haxe::Log_obj::trace(tmp14,tmp15);
								}
								HX_STACK_LINE(584)
								looking = false;
								HX_STACK_LINE(584)
								break;
							}
							else{
							}
						}
						else{
							HX_STACK_LINE(584)
							::luxe::Entity tmp10 = this->get_parent();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(584)
							::luxe::Scene tmp11 = tmp10->get_scene();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(584)
							source = tmp11;
							HX_STACK_LINE(584)
							looking = false;
							HX_STACK_LINE(584)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(584)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(584)
					if ((tmp5)){
						HX_STACK_LINE(584)
						::String tmp6 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(584)
						Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),517,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(584)
						::haxe::Log_obj::trace(tmp6,tmp7);
					}
				}
			}
			HX_STACK_LINE(584)
			tmp = source;
		}
		HX_STACK_LINE(584)
		::luxe::Emitter source = ((::luxe::Emitter)(tmp));		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(588)
		Dynamic tmp1 = _self;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(588)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(588)
		if ((tmp2)){
			HX_STACK_LINE(589)
			int tmp3 = _event;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(589)
			Dynamic tmp4 = _handler;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(589)
			this->off(tmp3,tmp4);
		}
		HX_STACK_LINE(592)
		bool tmp3 = (source != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(592)
		if ((tmp3)){
			HX_STACK_LINE(593)
			int tmp4 = _event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(593)
			switch( (int)(tmp4)){
				case (int)11: {
					HX_STACK_LINE(595)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(595)
					Dynamic tmp6 = this->_keyup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(595)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(596)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(596)
					Dynamic tmp6 = this->_keydown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(596)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(597)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(597)
					Dynamic tmp6 = this->_textinput_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(597)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(599)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(599)
					Dynamic tmp6 = this->_mousedown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(599)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(600)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(600)
					Dynamic tmp6 = this->_mouseup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(600)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(601)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(601)
					Dynamic tmp6 = this->_mousemove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(601)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(602)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(602)
					Dynamic tmp6 = this->_mousewheel_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(602)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)19: {
					HX_STACK_LINE(604)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(604)
					Dynamic tmp6 = this->_touchdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(604)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)20: {
					HX_STACK_LINE(605)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(605)
					Dynamic tmp6 = this->_touchup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(605)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)21: {
					HX_STACK_LINE(606)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(606)
					Dynamic tmp6 = this->_touchmove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(606)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(608)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(608)
					Dynamic tmp6 = this->_inputup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(608)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(609)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(609)
					Dynamic tmp6 = this->_inputdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(609)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)23: {
					HX_STACK_LINE(611)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(611)
					Dynamic tmp6 = this->_gamepaddown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(611)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)24: {
					HX_STACK_LINE(612)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(612)
					Dynamic tmp6 = this->_gamepadup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(612)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)22: {
					HX_STACK_LINE(613)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(613)
					Dynamic tmp6 = this->_gamepadaxis_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(613)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)25: {
					HX_STACK_LINE(614)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(614)
					Dynamic tmp6 = this->_gamepaddevice_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(614)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(616)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(616)
					Dynamic tmp6 = this->_windowmoved_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(616)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)28: {
					HX_STACK_LINE(617)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(617)
					Dynamic tmp6 = this->_windowresized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(617)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)29: {
					HX_STACK_LINE(618)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(618)
					Dynamic tmp6 = this->_windowsized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(618)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)30: {
					HX_STACK_LINE(619)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(619)
					Dynamic tmp6 = this->_windowminimized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(619)
					source->off(tmp5,tmp6);
				}
				;break;
				case (int)31: {
					HX_STACK_LINE(620)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(620)
					Dynamic tmp6 = this->_windowrestored_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(620)
					source->off(tmp5,tmp6);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,_unlisten,(void))

Void Entity_obj::_detach_scene( ){
{
		HX_STACK_FRAME("luxe.Entity","_detach_scene",0xe66c124c,"luxe.Entity._detach_scene","luxe/Entity.hx",630,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(632)
		::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(632)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(632)
		if ((tmp1)){
			HX_STACK_LINE(634)
			::luxe::Scene tmp2 = this->get_scene();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(634)
			Dynamic tmp3 = this->_reset_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(634)
			tmp2->off((int)3,tmp3);
			HX_STACK_LINE(635)
			::luxe::Scene tmp4 = this->get_scene();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(635)
			Dynamic tmp5 = this->destroy_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(635)
			tmp4->off((int)6,tmp5);
			HX_STACK_LINE(638)
			::luxe::Scene tmp6 = this->get_scene();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(638)
			Dynamic tmp7 = this->_keyup_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(638)
			tmp6->off((int)11,tmp7);
			HX_STACK_LINE(639)
			::luxe::Scene tmp8 = this->get_scene();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(639)
			Dynamic tmp9 = this->_keydown_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(639)
			tmp8->off((int)10,tmp9);
			HX_STACK_LINE(640)
			::luxe::Scene tmp10 = this->get_scene();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(640)
			Dynamic tmp11 = this->_textinput_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(640)
			tmp10->off((int)12,tmp11);
			HX_STACK_LINE(641)
			::luxe::Scene tmp12 = this->get_scene();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(641)
			Dynamic tmp13 = this->_mousedown_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(641)
			tmp12->off((int)15,tmp13);
			HX_STACK_LINE(642)
			::luxe::Scene tmp14 = this->get_scene();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(642)
			Dynamic tmp15 = this->_mouseup_dyn();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(642)
			tmp14->off((int)16,tmp15);
			HX_STACK_LINE(643)
			::luxe::Scene tmp16 = this->get_scene();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(643)
			Dynamic tmp17 = this->_mousemove_dyn();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(643)
			tmp16->off((int)17,tmp17);
			HX_STACK_LINE(644)
			::luxe::Scene tmp18 = this->get_scene();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(644)
			Dynamic tmp19 = this->_mousewheel_dyn();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(644)
			tmp18->off((int)18,tmp19);
			HX_STACK_LINE(645)
			::luxe::Scene tmp20 = this->get_scene();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(645)
			Dynamic tmp21 = this->_touchdown_dyn();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(645)
			tmp20->off((int)19,tmp21);
			HX_STACK_LINE(646)
			::luxe::Scene tmp22 = this->get_scene();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(646)
			Dynamic tmp23 = this->_touchup_dyn();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(646)
			tmp22->off((int)20,tmp23);
			HX_STACK_LINE(647)
			::luxe::Scene tmp24 = this->get_scene();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(647)
			Dynamic tmp25 = this->_touchmove_dyn();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(647)
			tmp24->off((int)21,tmp25);
			HX_STACK_LINE(648)
			::luxe::Scene tmp26 = this->get_scene();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(648)
			Dynamic tmp27 = this->_inputup_dyn();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(648)
			tmp26->off((int)14,tmp27);
			HX_STACK_LINE(649)
			::luxe::Scene tmp28 = this->get_scene();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(649)
			Dynamic tmp29 = this->_inputdown_dyn();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(649)
			tmp28->off((int)13,tmp29);
			HX_STACK_LINE(650)
			::luxe::Scene tmp30 = this->get_scene();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(650)
			Dynamic tmp31 = this->_gamepaddown_dyn();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(650)
			tmp30->off((int)23,tmp31);
			HX_STACK_LINE(651)
			::luxe::Scene tmp32 = this->get_scene();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(651)
			Dynamic tmp33 = this->_gamepadup_dyn();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(651)
			tmp32->off((int)24,tmp33);
			HX_STACK_LINE(652)
			::luxe::Scene tmp34 = this->get_scene();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(652)
			Dynamic tmp35 = this->_gamepadaxis_dyn();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(652)
			tmp34->off((int)22,tmp35);
			HX_STACK_LINE(653)
			::luxe::Scene tmp36 = this->get_scene();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(653)
			Dynamic tmp37 = this->_gamepaddevice_dyn();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(653)
			tmp36->off((int)25,tmp37);
			HX_STACK_LINE(654)
			::luxe::Scene tmp38 = this->get_scene();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(654)
			Dynamic tmp39 = this->_windowmoved_dyn();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(654)
			tmp38->off((int)27,tmp39);
			HX_STACK_LINE(655)
			::luxe::Scene tmp40 = this->get_scene();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(655)
			Dynamic tmp41 = this->_windowresized_dyn();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(655)
			tmp40->off((int)28,tmp41);
			HX_STACK_LINE(656)
			::luxe::Scene tmp42 = this->get_scene();		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(656)
			Dynamic tmp43 = this->_windowsized_dyn();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(656)
			tmp42->off((int)29,tmp43);
			HX_STACK_LINE(657)
			::luxe::Scene tmp44 = this->get_scene();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(657)
			Dynamic tmp45 = this->_windowminimized_dyn();		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(657)
			tmp44->off((int)30,tmp45);
			HX_STACK_LINE(658)
			::luxe::Scene tmp46 = this->get_scene();		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(658)
			Dynamic tmp47 = this->_windowrestored_dyn();		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(658)
			tmp46->off((int)31,tmp47);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_detach_scene,(void))

Void Entity_obj::_attach_scene( ){
{
		HX_STACK_FRAME("luxe.Entity","_attach_scene",0xae36123e,"luxe.Entity._attach_scene","luxe/Entity.hx",664,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(666)
		::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(666)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(666)
		if ((tmp1)){
			HX_STACK_LINE(667)
			::luxe::Scene tmp2 = this->get_scene();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(667)
			Dynamic tmp3 = this->_reset_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(667)
			tmp2->on((int)3,tmp3);
			HX_STACK_LINE(668)
			::luxe::Scene tmp4 = this->get_scene();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(668)
			Dynamic tmp5 = this->destroy_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(668)
			tmp4->on((int)6,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_attach_scene,(void))

Void Entity_obj::_keyup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_keyup",0xff09b40e,"luxe.Entity._keyup","luxe/Entity.hx",675,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(677)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(677)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(677)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(677)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(677)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(677)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(677)
		if ((tmp4)){
			HX_STACK_LINE(677)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(677)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(677)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(677)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(677)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(677)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(677)
			tmp5 = true;
		}
		HX_STACK_LINE(677)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(677)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(677)
		if ((tmp6)){
			HX_STACK_LINE(677)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(677)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(677)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(677)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(677)
			tmp7 = true;
		}
		HX_STACK_LINE(677)
		if ((tmp7)){
			HX_STACK_LINE(678)
			return null();
		}
		HX_STACK_LINE(683)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(683)
		this->onkeyup(tmp8);
		HX_STACK_LINE(684)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(684)
		this->emit((int)11,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_keyup,(void))

Void Entity_obj::_keydown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_keydown",0x10ac58d5,"luxe.Entity._keydown","luxe/Entity.hx",688,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(690)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(690)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(690)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(690)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(690)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(690)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(690)
		if ((tmp4)){
			HX_STACK_LINE(690)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(690)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(690)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(690)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(690)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(690)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(690)
			tmp5 = true;
		}
		HX_STACK_LINE(690)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(690)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(690)
		if ((tmp6)){
			HX_STACK_LINE(690)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(690)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(690)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(690)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(690)
			tmp7 = true;
		}
		HX_STACK_LINE(690)
		if ((tmp7)){
			HX_STACK_LINE(691)
			return null();
		}
		HX_STACK_LINE(696)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(696)
		this->onkeydown(tmp8);
		HX_STACK_LINE(697)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(697)
		this->emit((int)10,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_keydown,(void))

Void Entity_obj::_textinput( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_textinput",0x03587c91,"luxe.Entity._textinput","luxe/Entity.hx",701,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(703)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(703)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(703)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(703)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(703)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(703)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(703)
		if ((tmp4)){
			HX_STACK_LINE(703)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(703)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(703)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(703)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(703)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(703)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(703)
			tmp5 = true;
		}
		HX_STACK_LINE(703)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(703)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(703)
		if ((tmp6)){
			HX_STACK_LINE(703)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(703)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(703)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(703)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(703)
			tmp7 = true;
		}
		HX_STACK_LINE(703)
		if ((tmp7)){
			HX_STACK_LINE(704)
			return null();
		}
		HX_STACK_LINE(709)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(709)
		this->ontextinput(tmp8);
		HX_STACK_LINE(710)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(710)
		this->emit((int)12,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_textinput,(void))

Void Entity_obj::_mousedown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_mousedown",0x43641d5b,"luxe.Entity._mousedown","luxe/Entity.hx",717,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(719)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(719)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(719)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(719)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(719)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(719)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(719)
		if ((tmp4)){
			HX_STACK_LINE(719)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(719)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(719)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(719)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(719)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(719)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(719)
			tmp5 = true;
		}
		HX_STACK_LINE(719)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(719)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(719)
		if ((tmp6)){
			HX_STACK_LINE(719)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(719)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(719)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(719)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(719)
			tmp7 = true;
		}
		HX_STACK_LINE(719)
		if ((tmp7)){
			HX_STACK_LINE(720)
			return null();
		}
		HX_STACK_LINE(725)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(725)
		this->onmousedown(tmp8);
		HX_STACK_LINE(726)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(726)
		this->emit((int)15,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mousedown,(void))

Void Entity_obj::_mouseup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_mouseup",0x1fb12b14,"luxe.Entity._mouseup","luxe/Entity.hx",731,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(733)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(733)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(733)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(733)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(733)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(733)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(733)
		if ((tmp4)){
			HX_STACK_LINE(733)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(733)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(733)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(733)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(733)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(733)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(733)
			tmp5 = true;
		}
		HX_STACK_LINE(733)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(733)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(733)
		if ((tmp6)){
			HX_STACK_LINE(733)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(733)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(733)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(733)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(733)
			tmp7 = true;
		}
		HX_STACK_LINE(733)
		if ((tmp7)){
			HX_STACK_LINE(734)
			return null();
		}
		HX_STACK_LINE(739)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(739)
		this->onmouseup(tmp8);
		HX_STACK_LINE(740)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(740)
		this->emit((int)16,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mouseup,(void))

Void Entity_obj::_mousewheel( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_mousewheel",0xa0246982,"luxe.Entity._mousewheel","luxe/Entity.hx",744,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(746)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(746)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(746)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(746)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(746)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(746)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(746)
		if ((tmp4)){
			HX_STACK_LINE(746)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(746)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(746)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(746)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(746)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(746)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(746)
			tmp5 = true;
		}
		HX_STACK_LINE(746)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(746)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(746)
		if ((tmp6)){
			HX_STACK_LINE(746)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(746)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(746)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(746)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(746)
			tmp7 = true;
		}
		HX_STACK_LINE(746)
		if ((tmp7)){
			HX_STACK_LINE(747)
			return null();
		}
		HX_STACK_LINE(752)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(752)
		this->onmousewheel(tmp8);
		HX_STACK_LINE(753)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(753)
		this->emit((int)18,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mousewheel,(void))

Void Entity_obj::_mousemove( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_mousemove",0x4957080a,"luxe.Entity._mousemove","luxe/Entity.hx",757,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(759)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(759)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(759)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(759)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(759)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(759)
		if ((tmp4)){
			HX_STACK_LINE(759)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(759)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(759)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(759)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(759)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(759)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(759)
			tmp5 = true;
		}
		HX_STACK_LINE(759)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(759)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(759)
		if ((tmp6)){
			HX_STACK_LINE(759)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(759)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(759)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(759)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(759)
			tmp7 = true;
		}
		HX_STACK_LINE(759)
		if ((tmp7)){
			HX_STACK_LINE(760)
			return null();
		}
		HX_STACK_LINE(765)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(765)
		this->onmousemove(tmp8);
		HX_STACK_LINE(766)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(766)
		this->emit((int)17,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mousemove,(void))

Void Entity_obj::_touchdown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_touchdown",0x5c7bf3f5,"luxe.Entity._touchdown","luxe/Entity.hx",771,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(773)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(773)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(773)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(773)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(773)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(773)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(773)
		if ((tmp4)){
			HX_STACK_LINE(773)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(773)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(773)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(773)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(773)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(773)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(773)
			tmp5 = true;
		}
		HX_STACK_LINE(773)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(773)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(773)
		if ((tmp6)){
			HX_STACK_LINE(773)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(773)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(773)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(773)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(773)
			tmp7 = true;
		}
		HX_STACK_LINE(773)
		if ((tmp7)){
			HX_STACK_LINE(774)
			return null();
		}
		HX_STACK_LINE(779)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(779)
		this->ontouchdown(tmp8);
		HX_STACK_LINE(780)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(780)
		this->emit((int)19,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_touchdown,(void))

Void Entity_obj::_touchup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_touchup",0x3836472e,"luxe.Entity._touchup","luxe/Entity.hx",784,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(786)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(786)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(786)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(786)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(786)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(786)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(786)
		if ((tmp4)){
			HX_STACK_LINE(786)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(786)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(786)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(786)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(786)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(786)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(786)
			tmp5 = true;
		}
		HX_STACK_LINE(786)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(786)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(786)
		if ((tmp6)){
			HX_STACK_LINE(786)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(786)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(786)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(786)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(786)
			tmp7 = true;
		}
		HX_STACK_LINE(786)
		if ((tmp7)){
			HX_STACK_LINE(787)
			return null();
		}
		HX_STACK_LINE(792)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(792)
		this->ontouchup(tmp8);
		HX_STACK_LINE(793)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(793)
		this->emit((int)20,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_touchup,(void))

Void Entity_obj::_touchmove( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_touchmove",0x626edea4,"luxe.Entity._touchmove","luxe/Entity.hx",797,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(799)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(799)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(799)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(799)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(799)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(799)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(799)
		if ((tmp4)){
			HX_STACK_LINE(799)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(799)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(799)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(799)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(799)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(799)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(799)
			tmp5 = true;
		}
		HX_STACK_LINE(799)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(799)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(799)
		if ((tmp6)){
			HX_STACK_LINE(799)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(799)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(799)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(799)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(799)
			tmp7 = true;
		}
		HX_STACK_LINE(799)
		if ((tmp7)){
			HX_STACK_LINE(800)
			return null();
		}
		HX_STACK_LINE(805)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(805)
		this->ontouchmove(tmp8);
		HX_STACK_LINE(806)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(806)
		this->emit((int)21,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_touchmove,(void))

Void Entity_obj::_gamepadaxis( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepadaxis",0xeb82b716,"luxe.Entity._gamepadaxis","luxe/Entity.hx",811,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(813)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(813)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(813)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(813)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(813)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(813)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(813)
		if ((tmp4)){
			HX_STACK_LINE(813)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(813)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(813)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(813)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(813)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(813)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(813)
			tmp5 = true;
		}
		HX_STACK_LINE(813)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(813)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(813)
		if ((tmp6)){
			HX_STACK_LINE(813)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(813)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(813)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(813)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(813)
			tmp7 = true;
		}
		HX_STACK_LINE(813)
		if ((tmp7)){
			HX_STACK_LINE(814)
			return null();
		}
		HX_STACK_LINE(819)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(819)
		this->ongamepadaxis(tmp8);
		HX_STACK_LINE(820)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(820)
		this->emit((int)22,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepadaxis,(void))

Void Entity_obj::_gamepaddown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepaddown",0xed7792d7,"luxe.Entity._gamepaddown","luxe/Entity.hx",824,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(826)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(826)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(826)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(826)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(826)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(826)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(826)
		if ((tmp4)){
			HX_STACK_LINE(826)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(826)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(826)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(826)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(826)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(826)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(826)
			tmp5 = true;
		}
		HX_STACK_LINE(826)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(826)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(826)
		if ((tmp6)){
			HX_STACK_LINE(826)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(826)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(826)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(826)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(826)
			tmp7 = true;
		}
		HX_STACK_LINE(826)
		if ((tmp7)){
			HX_STACK_LINE(827)
			return null();
		}
		HX_STACK_LINE(832)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(832)
		this->ongamepaddown(tmp8);
		HX_STACK_LINE(833)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(833)
		this->emit((int)23,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepaddown,(void))

Void Entity_obj::_gamepadup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepadup",0x9eb30990,"luxe.Entity._gamepadup","luxe/Entity.hx",837,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(839)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(839)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(839)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(839)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(839)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(839)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(839)
		if ((tmp4)){
			HX_STACK_LINE(839)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(839)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(839)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(839)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(839)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(839)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(839)
			tmp5 = true;
		}
		HX_STACK_LINE(839)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(839)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(839)
		if ((tmp6)){
			HX_STACK_LINE(839)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(839)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(839)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(839)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(839)
			tmp7 = true;
		}
		HX_STACK_LINE(839)
		if ((tmp7)){
			HX_STACK_LINE(840)
			return null();
		}
		HX_STACK_LINE(845)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(845)
		this->ongamepadup(tmp8);
		HX_STACK_LINE(846)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(846)
		this->emit((int)24,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepadup,(void))

Void Entity_obj::_gamepaddevice( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepaddevice",0x25f4be4b,"luxe.Entity._gamepaddevice","luxe/Entity.hx",850,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(852)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(852)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(852)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(852)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(852)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(852)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(852)
		if ((tmp4)){
			HX_STACK_LINE(852)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(852)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(852)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(852)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(852)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(852)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(852)
			tmp5 = true;
		}
		HX_STACK_LINE(852)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(852)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(852)
		if ((tmp6)){
			HX_STACK_LINE(852)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(852)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(852)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(852)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(852)
			tmp7 = true;
		}
		HX_STACK_LINE(852)
		if ((tmp7)){
			HX_STACK_LINE(853)
			return null();
		}
		HX_STACK_LINE(858)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(858)
		this->ongamepaddevice(tmp8);
		HX_STACK_LINE(859)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(859)
		this->emit((int)25,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepaddevice,(void))

Void Entity_obj::_windowmoved( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowmoved",0x6f9b4797,"luxe.Entity._windowmoved","luxe/Entity.hx",865,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(867)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(867)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(867)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(867)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(867)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(867)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(867)
		if ((tmp4)){
			HX_STACK_LINE(867)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(867)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(867)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(867)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(867)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(867)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(867)
			tmp5 = true;
		}
		HX_STACK_LINE(867)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(867)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(867)
		if ((tmp6)){
			HX_STACK_LINE(867)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(867)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(867)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(867)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(867)
			tmp7 = true;
		}
		HX_STACK_LINE(867)
		if ((tmp7)){
			HX_STACK_LINE(868)
			return null();
		}
		HX_STACK_LINE(873)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(873)
		this->onwindowmoved(tmp8);
		HX_STACK_LINE(874)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(874)
		this->emit((int)27,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowmoved,(void))

Void Entity_obj::_windowresized( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowresized",0x1b897854,"luxe.Entity._windowresized","luxe/Entity.hx",878,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(880)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(880)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(880)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(880)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(880)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(880)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(880)
		if ((tmp4)){
			HX_STACK_LINE(880)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(880)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(880)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(880)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(880)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(880)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(880)
			tmp5 = true;
		}
		HX_STACK_LINE(880)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(880)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(880)
		if ((tmp6)){
			HX_STACK_LINE(880)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(880)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(880)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(880)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(880)
			tmp7 = true;
		}
		HX_STACK_LINE(880)
		if ((tmp7)){
			HX_STACK_LINE(881)
			return null();
		}
		HX_STACK_LINE(886)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(886)
		this->onwindowresized(tmp8);
		HX_STACK_LINE(887)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(887)
		this->emit((int)28,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowresized,(void))

Void Entity_obj::_windowsized( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowsized",0xe00e83e7,"luxe.Entity._windowsized","luxe/Entity.hx",891,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(893)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(893)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(893)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(893)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(893)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(893)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(893)
		if ((tmp4)){
			HX_STACK_LINE(893)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(893)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(893)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(893)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(893)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(893)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(893)
			tmp5 = true;
		}
		HX_STACK_LINE(893)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(893)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(893)
		if ((tmp6)){
			HX_STACK_LINE(893)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(893)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(893)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(893)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(893)
			tmp7 = true;
		}
		HX_STACK_LINE(893)
		if ((tmp7)){
			HX_STACK_LINE(894)
			return null();
		}
		HX_STACK_LINE(899)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(899)
		this->onwindowsized(tmp8);
		HX_STACK_LINE(900)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(900)
		this->emit((int)29,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowsized,(void))

Void Entity_obj::_windowminimized( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowminimized",0xa7bef8ea,"luxe.Entity._windowminimized","luxe/Entity.hx",904,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(906)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(906)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(906)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(906)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(906)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(906)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(906)
		if ((tmp4)){
			HX_STACK_LINE(906)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(906)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(906)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(906)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(906)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(906)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(906)
			tmp5 = true;
		}
		HX_STACK_LINE(906)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(906)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(906)
		if ((tmp6)){
			HX_STACK_LINE(906)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(906)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(906)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(906)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(906)
			tmp7 = true;
		}
		HX_STACK_LINE(906)
		if ((tmp7)){
			HX_STACK_LINE(907)
			return null();
		}
		HX_STACK_LINE(912)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(912)
		this->onwindowminimized(tmp8);
		HX_STACK_LINE(913)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(913)
		this->emit((int)30,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowminimized,(void))

Void Entity_obj::_windowrestored( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowrestored",0x4aecb872,"luxe.Entity._windowrestored","luxe/Entity.hx",917,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(919)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(919)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(919)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(919)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(919)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(919)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(919)
		if ((tmp4)){
			HX_STACK_LINE(919)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(919)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(919)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(919)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(919)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(919)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(919)
			tmp5 = true;
		}
		HX_STACK_LINE(919)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(919)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(919)
		if ((tmp6)){
			HX_STACK_LINE(919)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(919)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(919)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(919)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(919)
			tmp7 = true;
		}
		HX_STACK_LINE(919)
		if ((tmp7)){
			HX_STACK_LINE(920)
			return null();
		}
		HX_STACK_LINE(925)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(925)
		this->onwindowrestored(tmp8);
		HX_STACK_LINE(926)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(926)
		this->emit((int)31,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowrestored,(void))

Void Entity_obj::_inputdown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_inputdown",0x5e3a21c0,"luxe.Entity._inputdown","luxe/Entity.hx",932,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(934)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(934)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(934)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(934)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(934)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(934)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(934)
		if ((tmp4)){
			HX_STACK_LINE(934)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(934)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(934)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(934)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(934)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(934)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(934)
			tmp5 = true;
		}
		HX_STACK_LINE(934)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(934)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(934)
		if ((tmp6)){
			HX_STACK_LINE(934)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(934)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(934)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(934)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(934)
			tmp7 = true;
		}
		HX_STACK_LINE(934)
		if ((tmp7)){
			HX_STACK_LINE(935)
			return null();
		}
		HX_STACK_LINE(940)
		::String tmp8 = _event->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(940)
		Dynamic tmp9 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(940)
		this->oninputdown(tmp8,tmp9);
		HX_STACK_LINE(941)
		Dynamic tmp10 = _event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(941)
		this->emit((int)13,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_inputdown,(void))

Void Entity_obj::_inputup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_inputup",0x335cdc39,"luxe.Entity._inputup","luxe/Entity.hx",945,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(947)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(947)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(947)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(947)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(947)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(947)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(947)
		if ((tmp4)){
			HX_STACK_LINE(947)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(947)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(947)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(947)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(947)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(947)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(947)
			tmp5 = true;
		}
		HX_STACK_LINE(947)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(947)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(947)
		if ((tmp6)){
			HX_STACK_LINE(947)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(947)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(947)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(947)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(947)
			tmp7 = true;
		}
		HX_STACK_LINE(947)
		if ((tmp7)){
			HX_STACK_LINE(948)
			return null();
		}
		HX_STACK_LINE(953)
		::String tmp8 = _event->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(953)
		Dynamic tmp9 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(953)
		this->oninputup(tmp8,tmp9);
		HX_STACK_LINE(954)
		Dynamic tmp10 = _event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(954)
		this->emit((int)14,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_inputup,(void))

Float Entity_obj::get_fixed_rate( ){
	HX_STACK_FRAME("luxe.Entity","get_fixed_rate",0x56a59b27,"luxe.Entity.get_fixed_rate","luxe/Entity.hx",961,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(963)
	Float tmp = this->fixed_rate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(963)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_fixed_rate,return )

Float Entity_obj::set_fixed_rate( Float _rate){
	HX_STACK_FRAME("luxe.Entity","set_fixed_rate",0x76c5839b,"luxe.Entity.set_fixed_rate","luxe/Entity.hx",967,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_rate,"_rate")
	HX_STACK_LINE(969)
	this->fixed_rate = _rate;
	HX_STACK_LINE(971)
	bool tmp = this->started;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(971)
	if ((tmp)){
		HX_STACK_LINE(972)
		{
			HX_STACK_LINE(972)
			::snow::api::Timer tmp1 = this->fixed_rate_timer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(972)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(972)
			if ((tmp2)){
				HX_STACK_LINE(972)
				::snow::api::Timer tmp3 = this->fixed_rate_timer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(972)
				tmp3->stop();
				HX_STACK_LINE(972)
				this->fixed_rate_timer = null();
			}
		}
		HX_STACK_LINE(972)
		bool tmp1 = (_rate != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(972)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(972)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(972)
		if ((tmp2)){
			HX_STACK_LINE(972)
			::luxe::Entity tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(972)
			::luxe::Entity tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(972)
			::luxe::Entity tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(972)
			tmp3 = (tmp6 == null());
		}
		else{
			HX_STACK_LINE(972)
			tmp3 = false;
		}
		HX_STACK_LINE(972)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(972)
		if ((tmp3)){
			HX_STACK_LINE(972)
			bool tmp5 = this->destroyed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(972)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(972)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(972)
			tmp4 = !(tmp7);
		}
		else{
			HX_STACK_LINE(972)
			tmp4 = false;
		}
		HX_STACK_LINE(972)
		if ((tmp4)){
			HX_STACK_LINE(972)
			::snow::api::Timer tmp5 = ::snow::api::Timer_obj::__new(_rate);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(972)
			this->fixed_rate_timer = tmp5;
			HX_STACK_LINE(972)
			Dynamic tmp6 = this->_fixed_update_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(972)
			::snow::api::Timer tmp7 = this->fixed_rate_timer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(972)
			tmp7->run = tmp6;
		}
	}
	HX_STACK_LINE(975)
	Float tmp1 = this->fixed_rate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(975)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_fixed_rate,return )

Void Entity_obj::_stop_fixed_rate_timer( ){
{
		HX_STACK_FRAME("luxe.Entity","_stop_fixed_rate_timer",0xf4198482,"luxe.Entity._stop_fixed_rate_timer","luxe/Entity.hx",979,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(981)
		::snow::api::Timer tmp = this->fixed_rate_timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(981)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(981)
		if ((tmp1)){
			HX_STACK_LINE(982)
			::snow::api::Timer tmp2 = this->fixed_rate_timer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(982)
			tmp2->stop();
			HX_STACK_LINE(983)
			this->fixed_rate_timer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_stop_fixed_rate_timer,(void))

Void Entity_obj::_set_fixed_rate_timer( Float _rate){
{
		HX_STACK_FRAME("luxe.Entity","_set_fixed_rate_timer",0x33475eba,"luxe.Entity._set_fixed_rate_timer","luxe/Entity.hx",988,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rate,"_rate")
		HX_STACK_LINE(990)
		{
			HX_STACK_LINE(990)
			::snow::api::Timer tmp = this->fixed_rate_timer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(990)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(990)
			if ((tmp1)){
				HX_STACK_LINE(990)
				::snow::api::Timer tmp2 = this->fixed_rate_timer;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(990)
				tmp2->stop();
				HX_STACK_LINE(990)
				this->fixed_rate_timer = null();
			}
		}
		HX_STACK_LINE(995)
		bool tmp = (_rate != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(995)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(995)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(995)
		if ((tmp1)){
			HX_STACK_LINE(995)
			::luxe::Entity tmp3 = this->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(995)
			::luxe::Entity tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(995)
			::luxe::Entity tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(995)
			tmp2 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(995)
			tmp2 = false;
		}
		HX_STACK_LINE(995)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(995)
		if ((tmp2)){
			HX_STACK_LINE(995)
			bool tmp4 = this->destroyed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(995)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(995)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(995)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(995)
			tmp3 = false;
		}
		HX_STACK_LINE(995)
		if ((tmp3)){
			HX_STACK_LINE(996)
			::snow::api::Timer tmp4 = ::snow::api::Timer_obj::__new(_rate);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(996)
			this->fixed_rate_timer = tmp4;
			HX_STACK_LINE(997)
			Dynamic tmp5 = this->_fixed_update_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(997)
			::snow::api::Timer tmp6 = this->fixed_rate_timer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(997)
			tmp6->run = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_set_fixed_rate_timer,(void))

::luxe::structural::OrderedMap Entity_obj::get_components( ){
	HX_STACK_FRAME("luxe.Entity","get_components",0x5c119f72,"luxe.Entity.get_components","luxe/Entity.hx",1004,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1005)
	::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1005)
	::luxe::structural::OrderedMap tmp1 = tmp->components;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1005)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_components,return )

Void Entity_obj::_add_child( ::luxe::Entity child){
{
		HX_STACK_FRAME("luxe.Entity","_add_child",0x04ab4a12,"luxe.Entity._add_child","luxe/Entity.hx",1011,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(1013)
		::luxe::Entity tmp = child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1013)
		this->children->push(tmp);
		HX_STACK_LINE(1018)
		::luxe::Scene tmp1 = child->get_scene();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1018)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1018)
		if ((tmp2)){
			HX_STACK_LINE(1020)
			::luxe::Scene tmp3 = child->get_scene();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1020)
			::luxe::Entity tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1020)
			bool tmp5 = tmp3->remove(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1020)
			bool removed = tmp5;		HX_STACK_VAR(removed,"removed");
		}
		else{
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_add_child,(void))

Void Entity_obj::_remove_child( ::luxe::Entity child){
{
		HX_STACK_FRAME("luxe.Entity","_remove_child",0x54f46c4d,"luxe.Entity._remove_child","luxe/Entity.hx",1028,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(1030)
		::luxe::Entity tmp = child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1030)
		this->children->remove(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_remove_child,(void))

Void Entity_obj::set_pos_from_transform( ::phoenix::Vector _pos){
{
		HX_STACK_FRAME("luxe.Entity","set_pos_from_transform",0x2a7e6b72,"luxe.Entity.set_pos_from_transform","luxe/Entity.hx",1036,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_LINE(1039)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1039)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1039)
		if ((tmp1)){
			HX_STACK_LINE(1040)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1040)
			::luxe::structural::OrderedMap tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1040)
			::luxe::structural::OrderedMapIterator tmp4 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1040)
			::luxe::structural::OrderedMapIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1040)
			while((true)){
				HX_STACK_LINE(1040)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1040)
				int tmp6 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1040)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1040)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1040)
				if ((tmp8)){
					HX_STACK_LINE(1040)
					break;
				}
				HX_STACK_LINE(1040)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1040)
				{
					HX_STACK_LINE(1040)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1040)
					::String tmp11 = _g->map->_keys->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1040)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1040)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1040)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1040)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1040)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1040)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1041)
				::phoenix::Vector tmp10 = _pos;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1041)
				_component->entity_pos_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_pos_from_transform,(void))

Void Entity_obj::set_rotation_from_transform( ::phoenix::Quaternion _rotation){
{
		HX_STACK_FRAME("luxe.Entity","set_rotation_from_transform",0xf7a74368,"luxe.Entity.set_rotation_from_transform","luxe/Entity.hx",1047,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rotation,"_rotation")
		HX_STACK_LINE(1050)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1050)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1050)
		if ((tmp1)){
			HX_STACK_LINE(1051)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1051)
			::luxe::structural::OrderedMap tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1051)
			::luxe::structural::OrderedMapIterator tmp4 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1051)
			::luxe::structural::OrderedMapIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1051)
			while((true)){
				HX_STACK_LINE(1051)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1051)
				int tmp6 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1051)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1051)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1051)
				if ((tmp8)){
					HX_STACK_LINE(1051)
					break;
				}
				HX_STACK_LINE(1051)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1051)
				{
					HX_STACK_LINE(1051)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1051)
					::String tmp11 = _g->map->_keys->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1051)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1051)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1051)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1051)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1051)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1051)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1052)
				::phoenix::Quaternion tmp10 = _rotation;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1052)
				_component->entity_rotation_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_rotation_from_transform,(void))

Void Entity_obj::set_scale_from_transform( ::phoenix::Vector _scale){
{
		HX_STACK_FRAME("luxe.Entity","set_scale_from_transform",0x0154d33c,"luxe.Entity.set_scale_from_transform","luxe/Entity.hx",1058,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(1061)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1061)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1061)
		if ((tmp1)){
			HX_STACK_LINE(1062)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1062)
			::luxe::structural::OrderedMap tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1062)
			::luxe::structural::OrderedMapIterator tmp4 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1062)
			::luxe::structural::OrderedMapIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1062)
			while((true)){
				HX_STACK_LINE(1062)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1062)
				int tmp6 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1062)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1062)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1062)
				if ((tmp8)){
					HX_STACK_LINE(1062)
					break;
				}
				HX_STACK_LINE(1062)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1062)
				{
					HX_STACK_LINE(1062)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1062)
					::String tmp11 = _g->map->_keys->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1062)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1062)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1062)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1062)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1062)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1062)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1063)
				::phoenix::Vector tmp10 = _scale;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1063)
				_component->entity_scale_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_scale_from_transform,(void))

Void Entity_obj::set_origin_from_transform( ::phoenix::Vector _origin){
{
		HX_STACK_FRAME("luxe.Entity","set_origin_from_transform",0x1a1cb7c0,"luxe.Entity.set_origin_from_transform","luxe/Entity.hx",1069,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_origin,"_origin")
		HX_STACK_LINE(1072)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1072)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1072)
		if ((tmp1)){
			HX_STACK_LINE(1073)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1073)
			::luxe::structural::OrderedMap tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1073)
			::luxe::structural::OrderedMapIterator tmp4 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1073)
			::luxe::structural::OrderedMapIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1073)
			while((true)){
				HX_STACK_LINE(1073)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1073)
				int tmp6 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1073)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1073)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1073)
				if ((tmp8)){
					HX_STACK_LINE(1073)
					break;
				}
				HX_STACK_LINE(1073)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1073)
				{
					HX_STACK_LINE(1073)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1073)
					::String tmp11 = _g->map->_keys->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1073)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1073)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1073)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1073)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1073)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1073)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1074)
				::phoenix::Vector tmp10 = _origin;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1074)
				_component->entity_origin_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_origin_from_transform,(void))

Void Entity_obj::set_parent_from_transform( ::phoenix::Transform _parent){
{
		HX_STACK_FRAME("luxe.Entity","set_parent_from_transform",0xc1ab18fc,"luxe.Entity.set_parent_from_transform","luxe/Entity.hx",1080,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parent,"_parent")
		HX_STACK_LINE(1083)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1083)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1083)
		if ((tmp1)){
			HX_STACK_LINE(1084)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1084)
			::luxe::structural::OrderedMap tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1084)
			::luxe::structural::OrderedMapIterator tmp4 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1084)
			::luxe::structural::OrderedMapIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1084)
			while((true)){
				HX_STACK_LINE(1084)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1084)
				int tmp6 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1084)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1084)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1084)
				if ((tmp8)){
					HX_STACK_LINE(1084)
					break;
				}
				HX_STACK_LINE(1084)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1084)
				{
					HX_STACK_LINE(1084)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1084)
					::String tmp11 = _g->map->_keys->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1084)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1084)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1084)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1084)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1084)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1084)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1085)
				::phoenix::Transform tmp10 = _parent;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1085)
				_component->entity_parent_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_parent_from_transform,(void))

::phoenix::Vector Entity_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.Entity","set_pos",0x94cc50c4,"luxe.Entity.set_pos","luxe/Entity.hx",1093,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(1095)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1095)
	{
		HX_STACK_LINE(1095)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1095)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1095)
		{
			HX_STACK_LINE(1095)
			::phoenix::Spatial _this1 = _this->local;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1095)
			_this1->pos = _p;
			HX_STACK_LINE(1095)
			bool tmp2 = (_p != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1095)
			if ((tmp2)){
				HX_STACK_LINE(1095)
				::phoenix::Vector tmp3 = _this1->pos;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1095)
				Dynamic tmp4 = _this1->_pos_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1095)
				::phoenix::Vector_obj::Listen(tmp3,tmp4);
				HX_STACK_LINE(1095)
				{
					HX_STACK_LINE(1095)
					bool tmp5 = (_this1->pos_changed != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1095)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1095)
					if ((tmp5)){
						HX_STACK_LINE(1095)
						bool tmp7 = _this1->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1095)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1095)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(1095)
						tmp6 = false;
					}
					HX_STACK_LINE(1095)
					if ((tmp6)){
						HX_STACK_LINE(1095)
						::phoenix::Vector tmp7 = _this1->pos;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1095)
						_this1->pos_changed(tmp7);
					}
				}
			}
			HX_STACK_LINE(1095)
			tmp = _this1->pos;
		}
	}
	HX_STACK_LINE(1095)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_pos,return )

::phoenix::Vector Entity_obj::get_pos( ){
	HX_STACK_FRAME("luxe.Entity","get_pos",0xa1cabfb8,"luxe.Entity.get_pos","luxe/Entity.hx",1099,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1101)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1101)
	{
		HX_STACK_LINE(1101)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1101)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1101)
		tmp = _this->local->pos;
	}
	HX_STACK_LINE(1101)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_pos,return )

::phoenix::Quaternion Entity_obj::set_rotation( ::phoenix::Quaternion _r){
	HX_STACK_FRAME("luxe.Entity","set_rotation",0x721fbc0e,"luxe.Entity.set_rotation","luxe/Entity.hx",1107,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(1109)
	::phoenix::Quaternion tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1109)
	{
		HX_STACK_LINE(1109)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1109)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1109)
		{
			HX_STACK_LINE(1109)
			::phoenix::Spatial _this1 = _this->local;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1109)
			_this1->rotation = _r;
			HX_STACK_LINE(1109)
			bool tmp2 = (_r != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1109)
			if ((tmp2)){
				HX_STACK_LINE(1109)
				{
					HX_STACK_LINE(1109)
					::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
					HX_STACK_LINE(1109)
					Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(1109)
					_q->listen_x = listener;
					HX_STACK_LINE(1109)
					_q->listen_y = listener;
					HX_STACK_LINE(1109)
					_q->listen_z = listener;
					HX_STACK_LINE(1109)
					_q->listen_w = listener;
				}
				HX_STACK_LINE(1109)
				{
					HX_STACK_LINE(1109)
					bool tmp3 = (_this1->rotation_changed != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1109)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1109)
					if ((tmp3)){
						HX_STACK_LINE(1109)
						bool tmp5 = _this1->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1109)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1109)
						tmp4 = !(tmp6);
					}
					else{
						HX_STACK_LINE(1109)
						tmp4 = false;
					}
					HX_STACK_LINE(1109)
					if ((tmp4)){
						HX_STACK_LINE(1109)
						::phoenix::Quaternion tmp5 = _this1->rotation;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1109)
						_this1->rotation_changed(tmp5);
					}
				}
			}
			HX_STACK_LINE(1109)
			tmp = _this1->rotation;
		}
	}
	HX_STACK_LINE(1109)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_rotation,return )

::phoenix::Quaternion Entity_obj::get_rotation( ){
	HX_STACK_FRAME("luxe.Entity","get_rotation",0x5d26989a,"luxe.Entity.get_rotation","luxe/Entity.hx",1113,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1115)
	::phoenix::Quaternion tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1115)
	{
		HX_STACK_LINE(1115)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1115)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1115)
		tmp = _this->local->rotation;
	}
	HX_STACK_LINE(1115)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_rotation,return )

::phoenix::Vector Entity_obj::set_scale( ::phoenix::Vector _s){
	HX_STACK_FRAME("luxe.Entity","set_scale",0x4f4cedba,"luxe.Entity.set_scale","luxe/Entity.hx",1121,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(1123)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1123)
	{
		HX_STACK_LINE(1123)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1123)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1123)
		{
			HX_STACK_LINE(1123)
			::phoenix::Spatial _this1 = _this->local;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1123)
			_this1->scale = _s;
			HX_STACK_LINE(1123)
			bool tmp2 = (_s != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1123)
			if ((tmp2)){
				HX_STACK_LINE(1123)
				::phoenix::Vector tmp3 = _this1->scale;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1123)
				Dynamic tmp4 = _this1->_scale_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1123)
				::phoenix::Vector_obj::Listen(tmp3,tmp4);
				HX_STACK_LINE(1123)
				{
					HX_STACK_LINE(1123)
					bool tmp5 = (_this1->scale_changed != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1123)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1123)
					if ((tmp5)){
						HX_STACK_LINE(1123)
						bool tmp7 = _this1->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1123)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1123)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(1123)
						tmp6 = false;
					}
					HX_STACK_LINE(1123)
					if ((tmp6)){
						HX_STACK_LINE(1123)
						::phoenix::Vector tmp7 = _this1->scale;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1123)
						_this1->scale_changed(tmp7);
					}
				}
			}
			HX_STACK_LINE(1123)
			tmp = _this1->scale;
		}
	}
	HX_STACK_LINE(1123)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_scale,return )

::phoenix::Vector Entity_obj::get_scale( ){
	HX_STACK_FRAME("luxe.Entity","get_scale",0x6bfc01ae,"luxe.Entity.get_scale","luxe/Entity.hx",1127,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1129)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1129)
	{
		HX_STACK_LINE(1129)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1129)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1129)
		tmp = _this->local->scale;
	}
	HX_STACK_LINE(1129)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_scale,return )

::phoenix::Vector Entity_obj::set_origin( ::phoenix::Vector _origin){
	HX_STACK_FRAME("luxe.Entity","set_origin",0x22de44b6,"luxe.Entity.set_origin","luxe/Entity.hx",1135,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_origin,"_origin")
	HX_STACK_LINE(1137)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1137)
	{
		HX_STACK_LINE(1137)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1137)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1137)
		{
			HX_STACK_LINE(1137)
			_this->dirty = true;
			HX_STACK_LINE(1137)
			bool tmp2 = _this->dirty;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1137)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1137)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1137)
			if ((tmp3)){
				HX_STACK_LINE(1137)
				bool tmp5 = _this->_setup;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1137)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1137)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1137)
				tmp4 = !(tmp7);
			}
			else{
				HX_STACK_LINE(1137)
				tmp4 = false;
			}
			HX_STACK_LINE(1137)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1137)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1137)
			if ((tmp5)){
				HX_STACK_LINE(1137)
				tmp6 = (_this->_dirty_handlers != null());
			}
			else{
				HX_STACK_LINE(1137)
				tmp6 = false;
			}
			HX_STACK_LINE(1137)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1137)
			if ((tmp6)){
				HX_STACK_LINE(1137)
				int tmp8 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1137)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1137)
				tmp7 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(1137)
				tmp7 = false;
			}
			HX_STACK_LINE(1137)
			if ((tmp7)){
				HX_STACK_LINE(1137)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1137)
				cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1137)
				while((true)){
					HX_STACK_LINE(1137)
					bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1137)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1137)
					if ((tmp9)){
						HX_STACK_LINE(1137)
						break;
					}
					HX_STACK_LINE(1137)
					Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1137)
					Dynamic _handler = tmp10;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(1137)
					++(_g);
					HX_STACK_LINE(1137)
					bool tmp11 = (_handler != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1137)
					if ((tmp11)){
						HX_STACK_LINE(1137)
						::phoenix::Transform tmp12 = _this;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1137)
						_handler(tmp12).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(1137)
			_this->dirty;
		}
		HX_STACK_LINE(1137)
		_this->origin = _origin;
		HX_STACK_LINE(1137)
		bool tmp2 = (_this->_origin_handlers != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1137)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1137)
		if ((tmp2)){
			HX_STACK_LINE(1137)
			int tmp4 = _this->_origin_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1137)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1137)
			tmp3 = (tmp5 > (int)0);
		}
		else{
			HX_STACK_LINE(1137)
			tmp3 = false;
		}
		HX_STACK_LINE(1137)
		if ((tmp3)){
			HX_STACK_LINE(1137)
			::phoenix::Vector _origin1 = _this->origin;		HX_STACK_VAR(_origin1,"_origin1");
			HX_STACK_LINE(1137)
			{
				HX_STACK_LINE(1137)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1137)
				cpp::ArrayBase _g1 = _this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1137)
				while((true)){
					HX_STACK_LINE(1137)
					bool tmp4 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1137)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1137)
					if ((tmp5)){
						HX_STACK_LINE(1137)
						break;
					}
					HX_STACK_LINE(1137)
					Dynamic tmp6 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1137)
					Dynamic _handler = tmp6;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(1137)
					++(_g);
					HX_STACK_LINE(1137)
					bool tmp7 = (_handler != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1137)
					if ((tmp7)){
						HX_STACK_LINE(1137)
						::phoenix::Vector tmp8 = _origin1;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1137)
						_handler(tmp8).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(1137)
		tmp = _this->origin;
	}
	HX_STACK_LINE(1137)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_origin,return )

::phoenix::Vector Entity_obj::get_origin( ){
	HX_STACK_FRAME("luxe.Entity","get_origin",0x1f60a642,"luxe.Entity.get_origin","luxe/Entity.hx",1142,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1144)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1144)
	{
		HX_STACK_LINE(1144)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1144)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1144)
		tmp = _this->origin;
	}
	HX_STACK_LINE(1144)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_origin,return )

::phoenix::Transform Entity_obj::set_transform( ::phoenix::Transform _transform){
	HX_STACK_FRAME("luxe.Entity","set_transform",0x4248a49c,"luxe.Entity.set_transform","luxe/Entity.hx",1150,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_transform,"_transform")
	HX_STACK_LINE(1152)
	::phoenix::Transform tmp = this->transform = _transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1152)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_transform,return )

::phoenix::Transform Entity_obj::get_transform( ){
	HX_STACK_FRAME("luxe.Entity","get_transform",0xfd42c290,"luxe.Entity.get_transform","luxe/Entity.hx",1157,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1159)
	::phoenix::Transform tmp = this->transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1159)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_transform,return )

::luxe::Entity Entity_obj::set_parent( ::luxe::Entity other){
	HX_STACK_FRAME("luxe.Entity","set_parent",0xc55b2ffa,"luxe.Entity.set_parent","luxe/Entity.hx",1165,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(1167)
	{
		HX_STACK_LINE(1167)
		bool tmp = (other != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1167)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1167)
		if ((tmp1)){
			HX_STACK_LINE(1167)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::assertion(HX_HCSTRING("other != this (Entity setting itself as parent makes no sense)","\x41","\x45","\x5a","\xc4"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1167)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(1173)
	::luxe::Entity tmp = this->get_parent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1173)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1173)
	if ((tmp1)){
		HX_STACK_LINE(1174)
		::luxe::Entity tmp2 = this->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1174)
		tmp2->_remove_child(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(1178)
	this->parent = other;
	HX_STACK_LINE(1182)
	::luxe::Entity tmp2 = this->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1182)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1182)
	if ((tmp3)){
		HX_STACK_LINE(1183)
		::luxe::Entity tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1183)
		tmp4->_add_child(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(1184)
		{
			HX_STACK_LINE(1184)
			::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1184)
			::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1184)
			::luxe::Entity tmp6 = this->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1184)
			::phoenix::Transform tmp7 = tmp6->get_transform();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1184)
			::phoenix::Transform _p = tmp7;		HX_STACK_VAR(_p,"_p");
			HX_STACK_LINE(1184)
			{
				HX_STACK_LINE(1184)
				_this->dirty = true;
				HX_STACK_LINE(1184)
				bool tmp8 = _this->dirty;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1184)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1184)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1184)
				if ((tmp9)){
					HX_STACK_LINE(1184)
					bool tmp11 = _this->_setup;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1184)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1184)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1184)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(1184)
					tmp10 = false;
				}
				HX_STACK_LINE(1184)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1184)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1184)
				if ((tmp11)){
					HX_STACK_LINE(1184)
					tmp12 = (_this->_dirty_handlers != null());
				}
				else{
					HX_STACK_LINE(1184)
					tmp12 = false;
				}
				HX_STACK_LINE(1184)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1184)
				if ((tmp12)){
					HX_STACK_LINE(1184)
					int tmp14 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1184)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1184)
					tmp13 = (tmp15 > (int)0);
				}
				else{
					HX_STACK_LINE(1184)
					tmp13 = false;
				}
				HX_STACK_LINE(1184)
				if ((tmp13)){
					HX_STACK_LINE(1184)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1184)
					cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1184)
					while((true)){
						HX_STACK_LINE(1184)
						bool tmp14 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1184)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1184)
						if ((tmp15)){
							HX_STACK_LINE(1184)
							break;
						}
						HX_STACK_LINE(1184)
						Dynamic tmp16 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1184)
						Dynamic _handler = tmp16;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(1184)
						++(_g);
						HX_STACK_LINE(1184)
						bool tmp17 = (_handler != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1184)
						if ((tmp17)){
							HX_STACK_LINE(1184)
							::phoenix::Transform tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1184)
							_handler(tmp18).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(1184)
				_this->dirty;
			}
			HX_STACK_LINE(1184)
			bool tmp8 = (_this->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1184)
			if ((tmp8)){
				HX_STACK_LINE(1184)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(1184)
				bool tmp9 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1184)
				if ((tmp9)){
					HX_STACK_LINE(1184)
					false;
				}
				else{
					HX_STACK_LINE(1184)
					Dynamic tmp10 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1184)
					_this1->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp10);
				}
			}
			HX_STACK_LINE(1184)
			_this->parent = _p;
			HX_STACK_LINE(1184)
			bool tmp9 = (_this->_parent_handlers != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1184)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1184)
			if ((tmp9)){
				HX_STACK_LINE(1184)
				int tmp11 = _this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1184)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1184)
				tmp10 = (tmp12 > (int)0);
			}
			else{
				HX_STACK_LINE(1184)
				tmp10 = false;
			}
			HX_STACK_LINE(1184)
			if ((tmp10)){
				HX_STACK_LINE(1184)
				::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
				HX_STACK_LINE(1184)
				{
					HX_STACK_LINE(1184)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1184)
					cpp::ArrayBase _g1 = _this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1184)
					while((true)){
						HX_STACK_LINE(1184)
						bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1184)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1184)
						if ((tmp12)){
							HX_STACK_LINE(1184)
							break;
						}
						HX_STACK_LINE(1184)
						Dynamic tmp13 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1184)
						Dynamic _handler = tmp13;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(1184)
						++(_g);
						HX_STACK_LINE(1184)
						bool tmp14 = (_handler != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1184)
						if ((tmp14)){
							HX_STACK_LINE(1184)
							::phoenix::Transform tmp15 = _parent;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1184)
							_handler(tmp15).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(1184)
			bool tmp11 = (_this->parent != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1184)
			if ((tmp11)){
				HX_STACK_LINE(1184)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(1184)
				bool tmp12 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1184)
				if ((tmp12)){
					HX_STACK_LINE(1184)
					_this1->_clean_handlers = cpp::ArrayBase_obj::__new();
				}
				HX_STACK_LINE(1184)
				Dynamic tmp13 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1184)
				_this1->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp13);
			}
			HX_STACK_LINE(1184)
			_this->parent;
		}
	}
	else{
		HX_STACK_LINE(1186)
		::phoenix::Transform tmp4 = this->get_transform();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1186)
		::phoenix::Transform _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1186)
		{
			HX_STACK_LINE(1186)
			_this->dirty = true;
			HX_STACK_LINE(1186)
			bool tmp5 = _this->dirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1186)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1186)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1186)
			if ((tmp6)){
				HX_STACK_LINE(1186)
				bool tmp8 = _this->_setup;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1186)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1186)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1186)
				tmp7 = !(tmp10);
			}
			else{
				HX_STACK_LINE(1186)
				tmp7 = false;
			}
			HX_STACK_LINE(1186)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1186)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1186)
			if ((tmp8)){
				HX_STACK_LINE(1186)
				tmp9 = (_this->_dirty_handlers != null());
			}
			else{
				HX_STACK_LINE(1186)
				tmp9 = false;
			}
			HX_STACK_LINE(1186)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1186)
			if ((tmp9)){
				HX_STACK_LINE(1186)
				int tmp11 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1186)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1186)
				tmp10 = (tmp12 > (int)0);
			}
			else{
				HX_STACK_LINE(1186)
				tmp10 = false;
			}
			HX_STACK_LINE(1186)
			if ((tmp10)){
				HX_STACK_LINE(1186)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1186)
				cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1186)
				while((true)){
					HX_STACK_LINE(1186)
					bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1186)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1186)
					if ((tmp12)){
						HX_STACK_LINE(1186)
						break;
					}
					HX_STACK_LINE(1186)
					Dynamic tmp13 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1186)
					Dynamic _handler = tmp13;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(1186)
					++(_g);
					HX_STACK_LINE(1186)
					bool tmp14 = (_handler != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1186)
					if ((tmp14)){
						HX_STACK_LINE(1186)
						::phoenix::Transform tmp15 = _this;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1186)
						_handler(tmp15).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(1186)
			_this->dirty;
		}
		HX_STACK_LINE(1186)
		bool tmp5 = (_this->parent != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1186)
		if ((tmp5)){
			HX_STACK_LINE(1186)
			::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1186)
			bool tmp6 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1186)
			if ((tmp6)){
				HX_STACK_LINE(1186)
				false;
			}
			else{
				HX_STACK_LINE(1186)
				Dynamic tmp7 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1186)
				_this1->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp7);
			}
		}
		HX_STACK_LINE(1186)
		_this->parent = null();
		HX_STACK_LINE(1186)
		bool tmp6 = (_this->_parent_handlers != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1186)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1186)
		if ((tmp6)){
			HX_STACK_LINE(1186)
			int tmp8 = _this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1186)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1186)
			tmp7 = (tmp9 > (int)0);
		}
		else{
			HX_STACK_LINE(1186)
			tmp7 = false;
		}
		HX_STACK_LINE(1186)
		if ((tmp7)){
			HX_STACK_LINE(1186)
			::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
			HX_STACK_LINE(1186)
			{
				HX_STACK_LINE(1186)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1186)
				cpp::ArrayBase _g1 = _this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1186)
				while((true)){
					HX_STACK_LINE(1186)
					bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1186)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1186)
					if ((tmp9)){
						HX_STACK_LINE(1186)
						break;
					}
					HX_STACK_LINE(1186)
					Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1186)
					Dynamic _handler = tmp10;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(1186)
					++(_g);
					HX_STACK_LINE(1186)
					bool tmp11 = (_handler != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1186)
					if ((tmp11)){
						HX_STACK_LINE(1186)
						::phoenix::Transform tmp12 = _parent;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1186)
						_handler(tmp12).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(1186)
		bool tmp8 = (_this->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1186)
		if ((tmp8)){
			HX_STACK_LINE(1186)
			::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1186)
			bool tmp9 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1186)
			if ((tmp9)){
				HX_STACK_LINE(1186)
				_this1->_clean_handlers = cpp::ArrayBase_obj::__new();
			}
			HX_STACK_LINE(1186)
			Dynamic tmp10 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1186)
			_this1->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
		}
		HX_STACK_LINE(1186)
		_this->parent;
	}
	HX_STACK_LINE(1189)
	::luxe::Entity tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1189)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_parent,return )

::luxe::Entity Entity_obj::get_parent( ){
	HX_STACK_FRAME("luxe.Entity","get_parent",0xc1dd9186,"luxe.Entity.get_parent","luxe/Entity.hx",1193,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1195)
	::luxe::Entity tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1195)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_parent,return )

::luxe::Scene Entity_obj::set_scene( ::luxe::Scene _scene){
	HX_STACK_FRAME("luxe.Entity","set_scene",0x4f4ff87c,"luxe.Entity.set_scene","luxe/Entity.hx",1201,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_scene,"_scene")
	HX_STACK_LINE(1203)
	this->_detach_scene();
	HX_STACK_LINE(1205)
	this->scene = _scene;
	HX_STACK_LINE(1207)
	this->_attach_scene();
	HX_STACK_LINE(1209)
	::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1209)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_scene,return )

::luxe::Scene Entity_obj::get_scene( ){
	HX_STACK_FRAME("luxe.Entity","get_scene",0x6bff0c70,"luxe.Entity.get_scene","luxe/Entity.hx",1213,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1215)
	::luxe::Scene tmp = this->scene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1215)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_scene,return )

::String Entity_obj::set_name( ::String _name){
	HX_STACK_FRAME("luxe.Entity","set_name",0x9c9d491b,"luxe.Entity.set_name","luxe/Entity.hx",1221,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(1223)
	{
		HX_STACK_LINE(1223)
		bool tmp = (_name == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1223)
		if ((tmp)){
			HX_STACK_LINE(1223)
			::luxe::DebugError tmp1 = ::luxe::DebugError_obj::null_assertion(HX_HCSTRING("_name was null","\x94","\x35","\xd3","\x43"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1223)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(1225)
	::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1225)
	::luxe::Scene _scene = tmp;		HX_STACK_VAR(_scene,"_scene");
	HX_STACK_LINE(1227)
	bool tmp1 = (_scene != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1227)
	if ((tmp1)){
		HX_STACK_LINE(1228)
		{
			HX_STACK_LINE(1228)
			::String tmp2 = this->get_name();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1228)
			::String key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(1228)
			::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1228)
			_scene->entities->remove(tmp3);
		}
		HX_STACK_LINE(1229)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1229)
		_scene->entities->set(tmp2,hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(1230)
		{
			HX_STACK_LINE(1230)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1230)
			bool tmp4 = _scene->entities->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1230)
			if ((tmp4)){
				HX_STACK_LINE(1230)
				::String tmp5 = _scene->get_name();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1230)
				::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1230)
				::String tmp7 = (tmp6 + HX_HCSTRING(" / adding a second entity named ","\x25","\x7f","\xee","\xd9"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1230)
				::String tmp8 = _name;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1230)
				::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1230)
				::String tmp10 = (tmp9 + HX_HCSTRING("!\n                This will replace the existing one, possibly leaving the previous one in limbo.","\x8a","\x82","\xfa","\x6f"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1230)
				::String tmp11 = (HX_HCSTRING("    i / scene / ","\xcd","\x27","\xce","\x13") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1230)
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),91,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("handle_duplicate_warning","\xd1","\x8a","\x7d","\x4b"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1230)
				::haxe::Log_obj::trace(tmp11,tmp12);
			}
		}
		HX_STACK_LINE(1231)
		_scene->_has_changed = true;
	}
	HX_STACK_LINE(1234)
	::String tmp2 = this->name = _name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1234)
	return tmp2;
}


bool Entity_obj::set_active( bool _active){
	HX_STACK_FRAME("luxe.Entity","set_active",0xee236c96,"luxe.Entity.set_active","luxe/Entity.hx",1240,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_active,"_active")
	HX_STACK_LINE(1242)
	bool tmp = this->active = _active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1242)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_active,return )

bool Entity_obj::get_active( ){
	HX_STACK_FRAME("luxe.Entity","get_active",0xeaa5ce22,"luxe.Entity.get_active","luxe/Entity.hx",1246,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1248)
	bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1248)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_active,return )


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(fixed_rate,"fixed_rate");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(_components,"_components");
	HX_MARK_MEMBER_NAME(fixed_rate_timer,"fixed_rate_timer");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(component_count,"component_count");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(fixed_rate,"fixed_rate");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(_components,"_components");
	HX_VISIT_MEMBER_NAME(fixed_rate_timer,"fixed_rate_timer");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(component_count,"component_count");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Entity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return get_pos(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return inCallProp == hx::paccAlways ? get_scene() : scene; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return get_scale(); }
		if (HX_FIELD_EQ(inName,"_init") ) { return _init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return events; }
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"parent") ) { return inCallProp == hx::paccAlways ? get_parent() : parent; }
		if (HX_FIELD_EQ(inName,"active") ) { return inCallProp == hx::paccAlways ? get_active() : active; }
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp == hx::paccAlways) return get_origin(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_reset") ) { return _reset_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyup") ) { return _keyup_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"onreset") ) { return onreset_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		if (HX_FIELD_EQ(inName,"get_any") ) { return get_any_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		if (HX_FIELD_EQ(inName,"_listen") ) { return _listen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"_keydown") ) { return _keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"_mouseup") ) { return _mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchup") ) { return _touchup_dyn(); }
		if (HX_FIELD_EQ(inName,"_inputup") ) { return _inputup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { return destroyed; }
		if (HX_FIELD_EQ(inName,"transform") ) { return inCallProp == hx::paccAlways ? get_transform() : transform; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputup") ) { return oninputup_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		if (HX_FIELD_EQ(inName,"_unlisten") ) { return _unlisten_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scene") ) { return set_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return get_scene_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { if (inCallProp == hx::paccAlways) return get_components(); }
		if (HX_FIELD_EQ(inName,"fixed_rate") ) { return inCallProp == hx::paccAlways ? get_fixed_rate() : fixed_rate; }
		if (HX_FIELD_EQ(inName,"_textinput") ) { return _textinput_dyn(); }
		if (HX_FIELD_EQ(inName,"_mousedown") ) { return _mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"_mousemove") ) { return _mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchdown") ) { return _touchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchmove") ) { return _touchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"_gamepadup") ) { return _gamepadup_dyn(); }
		if (HX_FIELD_EQ(inName,"_inputdown") ) { return _inputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"_add_child") ) { return _add_child_dyn(); }
		if (HX_FIELD_EQ(inName,"set_origin") ) { return set_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_origin") ) { return get_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		if (HX_FIELD_EQ(inName,"get_active") ) { return get_active_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_components") ) { return _components; }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputdown") ) { return oninputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		if (HX_FIELD_EQ(inName,"_mousewheel") ) { return _mousewheel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"_gamepadaxis") ) { return _gamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"_gamepaddown") ) { return _gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"_windowmoved") ) { return _windowmoved_dyn(); }
		if (HX_FIELD_EQ(inName,"_windowsized") ) { return _windowsized_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onfixedupdate") ) { return onfixedupdate_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"onwindowmoved") ) { return onwindowmoved_dyn(); }
		if (HX_FIELD_EQ(inName,"onwindowsized") ) { return onwindowsized_dyn(); }
		if (HX_FIELD_EQ(inName,"_fixed_update") ) { return _fixed_update_dyn(); }
		if (HX_FIELD_EQ(inName,"_detach_scene") ) { return _detach_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"_attach_scene") ) { return _attach_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"_remove_child") ) { return _remove_child_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_gamepaddevice") ) { return _gamepaddevice_dyn(); }
		if (HX_FIELD_EQ(inName,"_windowresized") ) { return _windowresized_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fixed_rate") ) { return get_fixed_rate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fixed_rate") ) { return set_fixed_rate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_components") ) { return get_components_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		if (HX_FIELD_EQ(inName,"onwindowresized") ) { return onwindowresized_dyn(); }
		if (HX_FIELD_EQ(inName,"component_count") ) { return component_count; }
		if (HX_FIELD_EQ(inName,"_windowrestored") ) { return _windowrestored_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fixed_rate_timer") ) { return fixed_rate_timer; }
		if (HX_FIELD_EQ(inName,"onwindowrestored") ) { return onwindowrestored_dyn(); }
		if (HX_FIELD_EQ(inName,"_windowminimized") ) { return _windowminimized_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onwindowminimized") ) { return onwindowminimized_dyn(); }
		if (HX_FIELD_EQ(inName,"_find_emit_source") ) { return _find_emit_source_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_set_fixed_rate_timer") ) { return _set_fixed_rate_timer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_stop_fixed_rate_timer") ) { return _stop_fixed_rate_timer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos_from_transform") ) { return set_pos_from_transform_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_scale_from_transform") ) { return set_scale_from_transform_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"set_origin_from_transform") ) { return set_origin_from_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent_from_transform") ) { return set_parent_from_transform_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"set_rotation_from_transform") ) { return set_rotation_from_transform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return set_pos(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { if (inCallProp == hx::paccAlways) return set_scene(inValue);scene=inValue.Cast< ::luxe::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return set_scale(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::luxe::Events >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == hx::paccAlways) return set_parent(inValue);parent=inValue.Cast< ::luxe::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == hx::paccAlways) return set_active(inValue);active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp == hx::paccAlways) return set_origin(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return set_transform(inValue);transform=inValue.Cast< ::phoenix::Transform >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fixed_rate") ) { if (inCallProp == hx::paccAlways) return set_fixed_rate(inValue);fixed_rate=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_components") ) { _components=inValue.Cast< ::luxe::components::Components >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"component_count") ) { component_count=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fixed_rate_timer") ) { fixed_rate_timer=inValue.Cast< ::snow::api::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Entity_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a"));
	outFields->push(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"));
	outFields->push(HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	outFields->push(HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"));
	outFields->push(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"));
	outFields->push(HX_HCSTRING("started","\x41","\x29","\x1b","\x35"));
	outFields->push(HX_HCSTRING("fixed_rate","\xcb","\xb0","\xb2","\x54"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	outFields->push(HX_HCSTRING("_components","\x35","\x82","\xa8","\x2c"));
	outFields->push(HX_HCSTRING("fixed_rate_timer","\x11","\xe2","\x78","\xad"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("component_count","\x8d","\x28","\x8b","\xe8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Events*/ ,(int)offsetof(Entity_obj,events),HX_HCSTRING("events","\x19","\x4f","\x6a","\x96")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Entity_obj,children),HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{hx::fsBool,(int)offsetof(Entity_obj,destroyed),HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4")},
	{hx::fsBool,(int)offsetof(Entity_obj,inited),HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97")},
	{hx::fsBool,(int)offsetof(Entity_obj,started),HX_HCSTRING("started","\x41","\x29","\x1b","\x35")},
	{hx::fsFloat,(int)offsetof(Entity_obj,fixed_rate),HX_HCSTRING("fixed_rate","\xcb","\xb0","\xb2","\x54")},
	{hx::fsObject /*::luxe::Entity*/ ,(int)offsetof(Entity_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::luxe::Scene*/ ,(int)offsetof(Entity_obj,scene),HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78")},
	{hx::fsBool,(int)offsetof(Entity_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsObject /*::phoenix::Transform*/ ,(int)offsetof(Entity_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{hx::fsObject /*::luxe::components::Components*/ ,(int)offsetof(Entity_obj,_components),HX_HCSTRING("_components","\x35","\x82","\xa8","\x2c")},
	{hx::fsObject /*::snow::api::Timer*/ ,(int)offsetof(Entity_obj,fixed_rate_timer),HX_HCSTRING("fixed_rate_timer","\x11","\xe2","\x78","\xad")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Entity_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsInt,(int)offsetof(Entity_obj,component_count),HX_HCSTRING("component_count","\x8d","\x28","\x8b","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"),
	HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"),
	HX_HCSTRING("started","\x41","\x29","\x1b","\x35"),
	HX_HCSTRING("fixed_rate","\xcb","\xb0","\xb2","\x54"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("_components","\x35","\x82","\xa8","\x2c"),
	HX_HCSTRING("fixed_rate_timer","\x11","\xe2","\x78","\xad"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onfixedupdate","\xbe","\x93","\x59","\xed"),
	HX_HCSTRING("onreset","\x50","\x78","\xd8","\xe9"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("ontextinput","\x3e","\xe7","\x4d","\x44"),
	HX_HCSTRING("oninputdown","\x6d","\x8c","\x2f","\x9f"),
	HX_HCSTRING("oninputup","\xa6","\x51","\x78","\xde"),
	HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"),
	HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("ontouchdown","\xa2","\x5e","\x71","\x9d"),
	HX_HCSTRING("ontouchup","\x9b","\xbc","\x51","\xe3"),
	HX_HCSTRING("ontouchmove","\x51","\x49","\x64","\xa3"),
	HX_HCSTRING("ongamepadup","\x3d","\x74","\xa8","\xdf"),
	HX_HCSTRING("ongamepaddown","\xc4","\xc2","\x9e","\x66"),
	HX_HCSTRING("ongamepadaxis","\x03","\xe7","\xa9","\x64"),
	HX_HCSTRING("ongamepaddevice","\x78","\x83","\x39","\x9b"),
	HX_HCSTRING("onwindowmoved","\x84","\x77","\xc2","\xe8"),
	HX_HCSTRING("onwindowresized","\x81","\x3d","\xce","\x90"),
	HX_HCSTRING("onwindowsized","\xd4","\xb3","\x35","\x59"),
	HX_HCSTRING("onwindowminimized","\x57","\x23","\xa1","\x8b"),
	HX_HCSTRING("onwindowrestored","\xa5","\x7a","\xd4","\x71"),
	HX_HCSTRING("component_count","\x8d","\x28","\x8b","\xe8"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("get_any","\x83","\xc3","\xbe","\x26"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"),
	HX_HCSTRING("_reset","\x10","\x91","\xaf","\xe2"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5"),
	HX_HCSTRING("_fixed_update","\x93","\x07","\x46","\x99"),
	HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"),
	HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"),
	HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"),
	HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"),
	HX_HCSTRING("_attach_scene","\xf1","\x50","\xea","\xb7"),
	HX_HCSTRING("_keyup","\xfb","\x1c","\xe6","\xda"),
	HX_HCSTRING("_keydown","\x02","\x97","\x26","\xeb"),
	HX_HCSTRING("_textinput","\xfe","\x5f","\x80","\x1f"),
	HX_HCSTRING("_mousedown","\xc8","\x00","\x8c","\x5f"),
	HX_HCSTRING("_mouseup","\x41","\x69","\x2b","\xfa"),
	HX_HCSTRING("_mousewheel","\x75","\x85","\xe3","\x26"),
	HX_HCSTRING("_mousemove","\x77","\xeb","\x7e","\x65"),
	HX_HCSTRING("_touchdown","\x62","\xd7","\xa3","\x78"),
	HX_HCSTRING("_touchup","\x5b","\x85","\xb0","\x12"),
	HX_HCSTRING("_touchmove","\x11","\xc2","\x96","\x7e"),
	HX_HCSTRING("_gamepadaxis","\xc3","\x0f","\xfc","\x4b"),
	HX_HCSTRING("_gamepaddown","\x84","\xeb","\xf0","\x4d"),
	HX_HCSTRING("_gamepadup","\xfd","\xec","\xda","\xba"),
	HX_HCSTRING("_gamepaddevice","\x38","\x5c","\xf7","\x99"),
	HX_HCSTRING("_windowmoved","\x44","\xa0","\x14","\xd0"),
	HX_HCSTRING("_windowresized","\x41","\x16","\x8c","\x8f"),
	HX_HCSTRING("_windowsized","\x94","\xdc","\x87","\x40"),
	HX_HCSTRING("_windowminimized","\x17","\xac","\x16","\x18"),
	HX_HCSTRING("_windowrestored","\xe5","\x49","\x34","\x59"),
	HX_HCSTRING("_inputdown","\x2d","\x05","\x62","\x7a"),
	HX_HCSTRING("_inputup","\x66","\x1a","\xd7","\x0d"),
	HX_HCSTRING("get_fixed_rate","\x14","\x39","\xa8","\xca"),
	HX_HCSTRING("set_fixed_rate","\x88","\x21","\xc8","\xea"),
	HX_HCSTRING("_stop_fixed_rate_timer","\x6f","\x57","\xff","\x90"),
	HX_HCSTRING("_set_fixed_rate_timer","\x6d","\x08","\x36","\x07"),
	HX_HCSTRING("get_components","\x5f","\x3d","\x14","\xd0"),
	HX_HCSTRING("_add_child","\x7f","\x2d","\xd3","\x20"),
	HX_HCSTRING("_remove_child","\x00","\xab","\xa8","\x5e"),
	HX_HCSTRING("set_pos_from_transform","\x5f","\x3e","\x64","\xc7"),
	HX_HCSTRING("set_rotation_from_transform","\x5b","\xb5","\xfc","\x30"),
	HX_HCSTRING("set_scale_from_transform","\x69","\xfb","\x86","\x01"),
	HX_HCSTRING("set_origin_from_transform","\xf3","\xb6","\xcd","\x45"),
	HX_HCSTRING("set_parent_from_transform","\x2f","\x18","\x5c","\xed"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("get_pos","\x2b","\x26","\xca","\x26"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_scale","\xed","\x16","\xc9","\x9f"),
	HX_HCSTRING("get_scale","\xe1","\x2a","\x78","\xbc"),
	HX_HCSTRING("set_origin","\x23","\x28","\x06","\x3f"),
	HX_HCSTRING("get_origin","\xaf","\x89","\x88","\x3b"),
	HX_HCSTRING("set_transform","\x4f","\xe3","\xfc","\x4b"),
	HX_HCSTRING("get_transform","\x43","\x01","\xf7","\x06"),
	HX_HCSTRING("set_parent","\x67","\x13","\x83","\xe1"),
	HX_HCSTRING("get_parent","\xf3","\x74","\x05","\xde"),
	HX_HCSTRING("set_scene","\xaf","\x21","\xcc","\x9f"),
	HX_HCSTRING("get_scene","\xa3","\x35","\x7b","\xbc"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("set_active","\x03","\x50","\x4b","\x0a"),
	HX_HCSTRING("get_active","\x8f","\xb1","\xcd","\x06"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#endif

hx::Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Entity_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Entity_obj >;
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
