#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_debug_Inspector
#include <luxe/debug/Inspector.h>
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
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
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
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
namespace luxe{
namespace debug{

Void Inspector_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.debug.Inspector","new",0x11b57a36,"luxe.debug.Inspector.new","luxe/debug/Inspector.hx",33,0x41b2cfbc)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(35)
	this->title = HX_HCSTRING("Inspector","\xd7","\xd9","\xe1","\x99");
	HX_STACK_LINE(36)
	::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	this->font = tmp->font;
	HX_STACK_LINE(37)
	::luxe::Core tmp1 = ::Luxe_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	int tmp2 = tmp1->screen->get_w();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	Float tmp3 = (tmp2 * ((Float)0.2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	int tmp6 = tmp5->screen->get_h();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	Float tmp7 = (tmp6 * ((Float)0.6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(37)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(37)
	::phoenix::Vector tmp9 = ::phoenix::Vector_obj::__new(tmp4,tmp8,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(37)
	this->set_size(tmp9);
	HX_STACK_LINE(38)
	::luxe::Core tmp10 = ::Luxe_obj::core;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(38)
	int tmp11 = tmp10->screen->get_w();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(38)
	Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(38)
	::phoenix::Vector tmp13 = this->size;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(38)
	Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(38)
	Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(38)
	Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(38)
	::luxe::Core tmp17 = ::Luxe_obj::core;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(38)
	int tmp18 = tmp17->screen->get_h();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(38)
	Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(38)
	::phoenix::Vector tmp20 = this->size;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(38)
	Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(38)
	Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(38)
	Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(38)
	::phoenix::Vector tmp24 = ::phoenix::Vector_obj::__new(tmp16,tmp23,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(38)
	this->set_pos(tmp24);
	HX_STACK_LINE(41)
	::phoenix::Renderer tmp25 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(41)
	this->_batcher = tmp25->batcher;
	HX_STACK_LINE(43)
	bool tmp26 = (_options != null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(43)
	if ((tmp26)){
		HX_STACK_LINE(45)
		bool tmp27 = (_options->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(45)
		if ((tmp27)){
			HX_STACK_LINE(45)
			this->title = _options->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic );
		}
		HX_STACK_LINE(46)
		bool tmp28 = (_options->__Field(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(46)
		if ((tmp28)){
			HX_STACK_LINE(46)
			this->font = _options->__Field(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"), hx::paccDynamic );
		}
		HX_STACK_LINE(47)
		bool tmp29 = (_options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(47)
		if ((tmp29)){
			HX_STACK_LINE(47)
			::phoenix::Vector tmp30 = _options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(47)
			this->set_pos(tmp30);
		}
		HX_STACK_LINE(48)
		bool tmp30 = (_options->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(48)
		if ((tmp30)){
			HX_STACK_LINE(48)
			::phoenix::Vector tmp31 = _options->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(48)
			this->set_size(tmp31);
		}
		HX_STACK_LINE(49)
		bool tmp31 = (_options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(49)
		if ((tmp31)){
			HX_STACK_LINE(49)
			this->_batcher = _options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
		}
	}
}
;
	return null();
}

//Inspector_obj::~Inspector_obj() { }

Dynamic Inspector_obj::__CreateEmpty() { return  new Inspector_obj; }
hx::ObjectPtr< Inspector_obj > Inspector_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Inspector_obj > _result_ = new Inspector_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Inspector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Inspector_obj > _result_ = new Inspector_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Inspector_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.debug.Inspector","refresh",0xb2cb26b1,"luxe.debug.Inspector.refresh","luxe/debug/Inspector.hx",55,0x41b2cfbc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		::luxe::Sprite tmp = this->_window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		if ((tmp1)){
			HX_STACK_LINE(57)
			this->_create_window();
		}
		HX_STACK_LINE(60)
		Dynamic tmp2 = this->onrefresh_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		if ((tmp3)){
			HX_STACK_LINE(61)
			this->onrefresh();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,refresh,(void))

Void Inspector_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.Inspector","show",0x7065c667,"luxe.debug.Inspector.show","luxe/debug/Inspector.hx",65,0x41b2cfbc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		this->refresh();
		HX_STACK_LINE(67)
		::luxe::Sprite tmp = this->_window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		tmp->set_visible(true);
		HX_STACK_LINE(68)
		::luxe::Text tmp1 = this->_title_text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		tmp1->set_visible(true);
		HX_STACK_LINE(69)
		::luxe::Text tmp2 = this->_version_text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		tmp2->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,show,(void))

Void Inspector_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.Inspector","hide",0x6921262c,"luxe.debug.Inspector.hide","luxe/debug/Inspector.hx",71,0x41b2cfbc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		::luxe::Sprite tmp = this->_window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		tmp->set_visible(false);
		HX_STACK_LINE(73)
		::luxe::Text tmp1 = this->_title_text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		tmp1->set_visible(false);
		HX_STACK_LINE(74)
		::luxe::Text tmp2 = this->_version_text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		tmp2->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,hide,(void))

::phoenix::Vector Inspector_obj::set_size( ::phoenix::Vector _size){
	HX_STACK_FRAME("luxe.debug.Inspector","set_size",0xa9c4a428,"luxe.debug.Inspector.set_size","luxe/debug/Inspector.hx",77,0x41b2cfbc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_size,"_size")
	HX_STACK_LINE(79)
	::phoenix::Vector tmp = this->size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	if ((tmp1)){
		HX_STACK_LINE(79)
		::luxe::Sprite tmp3 = this->_window;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		::luxe::Sprite tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		tmp2 = (tmp4 != null());
	}
	else{
		HX_STACK_LINE(79)
		tmp2 = false;
	}
	HX_STACK_LINE(79)
	if ((tmp2)){
		HX_STACK_LINE(80)
		::luxe::Sprite tmp3 = this->_window;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		::phoenix::Vector tmp4 = _size;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		tmp3->set_size(tmp4);
		HX_STACK_LINE(81)
		::luxe::Sprite tmp5 = this->_window;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		tmp5->geometry->set_dirty(true);
	}
	HX_STACK_LINE(84)
	::luxe::Text tmp3 = this->_version_text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(84)
	if ((tmp4)){
		HX_STACK_LINE(85)
		::luxe::Text tmp5 = this->_version_text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		::phoenix::Vector tmp6 = this->pos;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(85)
		Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		Float tmp8 = (_size->x - (int)14);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(85)
		::phoenix::Vector tmp10 = this->pos;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(85)
		Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(85)
		Float tmp12 = (tmp11 + (int)6);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(85)
		::phoenix::Vector tmp13 = ::phoenix::Vector_obj::__new(tmp9,tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(85)
		tmp5->set_pos(tmp13);
	}
	HX_STACK_LINE(88)
	::phoenix::Vector tmp5 = this->size = _size;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(88)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Inspector_obj,set_size,return )

::phoenix::Vector Inspector_obj::set_pos( ::phoenix::Vector _pos){
	HX_STACK_FRAME("luxe.debug.Inspector","set_pos",0xdf76040d,"luxe.debug.Inspector.set_pos","luxe/debug/Inspector.hx",91,0x41b2cfbc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pos,"_pos")
	HX_STACK_LINE(93)
	::phoenix::Vector tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	if ((tmp1)){
		HX_STACK_LINE(93)
		::luxe::Sprite tmp3 = this->_window;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		::luxe::Sprite tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		tmp2 = (tmp4 != null());
	}
	else{
		HX_STACK_LINE(93)
		tmp2 = false;
	}
	HX_STACK_LINE(93)
	if ((tmp2)){
		HX_STACK_LINE(94)
		::luxe::Sprite tmp3 = this->_window;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		::phoenix::Vector tmp4 = _pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		tmp3->set_pos(tmp4);
		HX_STACK_LINE(95)
		::luxe::Sprite tmp5 = this->_window;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		tmp5->geometry->set_dirty(true);
	}
	HX_STACK_LINE(98)
	::luxe::Text tmp3 = this->_title_text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(98)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(98)
	if ((tmp4)){
		HX_STACK_LINE(99)
		::luxe::Text tmp5 = this->_title_text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		Float tmp6 = (_pos->x + (int)14);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		Float tmp7 = (_pos->y + (int)6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(99)
		::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(tmp6,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		tmp5->set_pos(tmp8);
	}
	HX_STACK_LINE(102)
	::luxe::Text tmp5 = this->_version_text;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(102)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(102)
	if ((tmp6)){
		HX_STACK_LINE(103)
		::luxe::Text tmp7 = this->_version_text;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(103)
		Float tmp8 = _pos->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(103)
		::phoenix::Vector tmp9 = this->size;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(103)
		Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(103)
		Float tmp11 = (tmp10 - (int)14);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(103)
		Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(103)
		Float tmp13 = (_pos->y + (int)6);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(103)
		::phoenix::Vector tmp14 = ::phoenix::Vector_obj::__new(tmp12,tmp13,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(103)
		tmp7->set_pos(tmp14);
	}
	HX_STACK_LINE(106)
	::phoenix::Vector tmp7 = this->pos = _pos;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(106)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Inspector_obj,set_pos,return )

Void Inspector_obj::_create_window( ){
{
		HX_STACK_FRAME("luxe.debug.Inspector","_create_window",0x87e9e03e,"luxe.debug.Inspector._create_window","luxe/debug/Inspector.hx",109,0x41b2cfbc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		::luxe::Sprite tmp = this->_window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		if ((tmp1)){
			HX_STACK_LINE(113)
			::luxe::Sprite tmp2 = this->_window;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(113)
			tmp2->destroy(null());
		}
		HX_STACK_LINE(119)
		::phoenix::Color tmp2 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		::phoenix::Color tmp3 = tmp2->rgb((int)1447449);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		::phoenix::Vector tmp4 = this->size;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		::phoenix::Vector tmp5 = this->pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		::phoenix::Batcher tmp6 = this->_batcher;		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Vector &tmp5,::phoenix::Batcher &tmp6,::phoenix::Vector &tmp4,::phoenix::Color &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/Inspector.hx",116,0x41b2cfbc)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f") , false,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.1),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp3,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp4,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp6,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(116)
		Dynamic tmp7 = _Function_1_1::Block(tmp5,tmp6,tmp4,tmp3);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(116)
		::luxe::Sprite tmp8 = ::luxe::Sprite_obj::__new(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(116)
		this->_window = tmp8;
		HX_STACK_LINE(126)
		::luxe::Sprite tmp9 = this->_window;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(126)
		tmp9->geometry->id = HX_HCSTRING("debug.Inspector","\xfc","\xfb","\x99","\xc1");
		HX_STACK_LINE(129)
		::luxe::Sprite tmp10 = this->_window;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(129)
		tmp10->set_locked(true);
		HX_STACK_LINE(133)
		::phoenix::Batcher tmp11 = this->_batcher;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(136)
		::phoenix::Color tmp12 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(136)
		::phoenix::Color tmp13 = tmp12->rgb((int)16121979);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(137)
		::phoenix::Vector tmp14 = this->pos;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(137)
		Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(137)
		Float tmp16 = (tmp15 + (int)14);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(137)
		::phoenix::Vector tmp17 = this->pos;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(137)
		Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(137)
		Float tmp19 = (tmp18 + (int)6);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(137)
		::phoenix::Vector tmp20 = ::phoenix::Vector_obj::__new(tmp16,tmp19,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(139)
		::phoenix::BitmapFont tmp21 = this->font;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(140)
		::String tmp22 = this->title;		HX_STACK_VAR(tmp22,"tmp22");
		struct _Function_1_2{
			inline static Dynamic Block( ::String &tmp22,::phoenix::Color &tmp13,::phoenix::Vector &tmp20,::phoenix::Batcher &tmp11,::phoenix::BitmapFont &tmp21){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/Inspector.hx",131,0x41b2cfbc)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("debug.title","\x3d","\x01","\x84","\x48"),false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp11,false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.2),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp13,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp20,false);
					__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , (int)0,false);
					__result->Add(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43") , tmp21,false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp22,false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , ((Dynamic)((int)15)),false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(131)
		Dynamic tmp23 = _Function_1_2::Block(tmp22,tmp13,tmp20,tmp11,tmp21);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(131)
		::luxe::Text tmp24 = ::luxe::Text_obj::__new(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(131)
		this->_title_text = tmp24;
		HX_STACK_LINE(147)
		::phoenix::Batcher tmp25 = this->_batcher;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(150)
		::phoenix::Color tmp26 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(150)
		::phoenix::Color tmp27 = tmp26->rgb((int)3355443);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(151)
		::phoenix::Vector tmp28 = this->pos;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(151)
		Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(151)
		::phoenix::Vector tmp30 = this->size;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(151)
		Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(151)
		Float tmp32 = (tmp31 - (int)14);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(151)
		Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(151)
		::phoenix::Vector tmp34 = this->pos;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(151)
		Float tmp35 = tmp34->y;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(151)
		Float tmp36 = (tmp35 + (int)6);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(151)
		::phoenix::Vector tmp37 = ::phoenix::Vector_obj::__new(tmp33,tmp36,null(),null());		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(153)
		::phoenix::BitmapFont tmp38 = this->font;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(154)
		::String tmp39 = ::Luxe_obj::build;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(154)
		::String tmp40 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		struct _Function_1_3{
			inline static Dynamic Block( ::phoenix::BitmapFont &tmp38,::String &tmp40,::phoenix::Batcher &tmp25,::phoenix::Color &tmp27,::phoenix::Vector &tmp37){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/Inspector.hx",145,0x41b2cfbc)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("debug.version","\xfd","\xc5","\x08","\x0a"),false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp25,false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.2),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp27,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp37,false);
					__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , (int)1,false);
					__result->Add(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43") , tmp38,false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp40,false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , ((Dynamic)((int)16)),false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(145)
		Dynamic tmp41 = _Function_1_3::Block(tmp38,tmp40,tmp25,tmp27,tmp37);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(145)
		::luxe::Text tmp42 = ::luxe::Text_obj::__new(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(145)
		this->_version_text = tmp42;
		HX_STACK_LINE(159)
		::luxe::Text tmp43 = this->_title_text;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(159)
		::phoenix::geometry::Geometry tmp44 = tmp43->geometry;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(159)
		bool tmp45 = (tmp44 != null());		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(159)
		if ((tmp45)){
			HX_STACK_LINE(160)
			::luxe::Text tmp46 = this->_title_text;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(160)
			tmp46->geometry->id = HX_HCSTRING("debug.title.text","\x7e","\xdd","\x85","\xe1");
		}
		HX_STACK_LINE(163)
		::luxe::Text tmp46 = this->_version_text;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(163)
		::phoenix::geometry::Geometry tmp47 = tmp46->geometry;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(163)
		bool tmp48 = (tmp47 != null());		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(163)
		if ((tmp48)){
			HX_STACK_LINE(164)
			::luxe::Text tmp49 = this->_version_text;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(164)
			tmp49->geometry->id = HX_HCSTRING("debug.version.text","\xbe","\xe0","\xbf","\xd8");
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,_create_window,(void))


Inspector_obj::Inspector_obj()
{
}

void Inspector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Inspector);
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(_title_text,"_title_text");
	HX_MARK_MEMBER_NAME(_version_text,"_version_text");
	HX_MARK_MEMBER_NAME(_window,"_window");
	HX_MARK_MEMBER_NAME(onrefresh,"onrefresh");
	HX_MARK_MEMBER_NAME(_batcher,"_batcher");
	HX_MARK_END_CLASS();
}

void Inspector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(_title_text,"_title_text");
	HX_VISIT_MEMBER_NAME(_version_text,"_version_text");
	HX_VISIT_MEMBER_NAME(_window,"_window");
	HX_VISIT_MEMBER_NAME(onrefresh,"onrefresh");
	HX_VISIT_MEMBER_NAME(_batcher,"_batcher");
}

Dynamic Inspector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return title; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_window") ) { return _window; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_batcher") ) { return _batcher; }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onrefresh") ) { return onrefresh; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_title_text") ) { return _title_text; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_version_text") ) { return _version_text; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_create_window") ) { return _create_window_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Inspector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return set_pos(inValue);pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::phoenix::BitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue);size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_window") ) { _window=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_batcher") ) { _batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onrefresh") ) { onrefresh=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_title_text") ) { _title_text=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_version_text") ) { _version_text=inValue.Cast< ::luxe::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Inspector_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Inspector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("_title_text","\x13","\x59","\x4c","\x51"));
	outFields->push(HX_HCSTRING("_version_text","\x53","\xdd","\xd2","\xe4"));
	outFields->push(HX_HCSTRING("_window","\x8f","\xa5","\x03","\xc1"));
	outFields->push(HX_HCSTRING("_batcher","\x28","\x7c","\xc8","\xf9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Inspector_obj,title),HX_HCSTRING("title","\x98","\x15","\x3b","\x10")},
	{hx::fsObject /*::phoenix::BitmapFont*/ ,(int)offsetof(Inspector_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Inspector_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Inspector_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(Inspector_obj,_title_text),HX_HCSTRING("_title_text","\x13","\x59","\x4c","\x51")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(Inspector_obj,_version_text),HX_HCSTRING("_version_text","\x53","\xdd","\xd2","\xe4")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Inspector_obj,_window),HX_HCSTRING("_window","\x8f","\xa5","\x03","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Inspector_obj,onrefresh),HX_HCSTRING("onrefresh","\x9c","\x6a","\x7a","\xf7")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(Inspector_obj,_batcher),HX_HCSTRING("_batcher","\x28","\x7c","\xc8","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("title","\x98","\x15","\x3b","\x10"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("_title_text","\x13","\x59","\x4c","\x51"),
	HX_HCSTRING("_version_text","\x53","\xdd","\xd2","\xe4"),
	HX_HCSTRING("_window","\x8f","\xa5","\x03","\xc1"),
	HX_HCSTRING("onrefresh","\x9c","\x6a","\x7a","\xf7"),
	HX_HCSTRING("_batcher","\x28","\x7c","\xc8","\xf9"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("_create_window","\x54","\x46","\x47","\x1a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Inspector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Inspector_obj::__mClass,"__mClass");
};

#endif

hx::Class Inspector_obj::__mClass;

void Inspector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug.Inspector","\x44","\xe7","\xba","\x56");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Inspector_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Inspector_obj >;
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
} // end namespace debug
