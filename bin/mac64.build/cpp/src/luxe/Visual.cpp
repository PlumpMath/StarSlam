#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
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
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
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
namespace luxe{

Void Visual_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.Visual","new",0x85b8018a,"luxe.Visual.new","luxe/Visual.hx",22,0xe3547505)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(279)
	this->ignore_texture_on_geometry_change = false;
	HX_STACK_LINE(126)
	this->_creating_geometry = false;
	HX_STACK_LINE(53)
	this->_has_custom_origin = false;
	HX_STACK_LINE(46)
	this->radians = ((Float)0.0);
	HX_STACK_LINE(42)
	this->group = (int)0;
	HX_STACK_LINE(40)
	this->depth = ((Float)0.0);
	HX_STACK_LINE(38)
	this->visible = true;
	HX_STACK_LINE(30)
	this->locked = false;
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		if ((tmp)){
			HX_STACK_LINE(58)
			::luxe::DebugError tmp1 = ::luxe::DebugError_obj::null_assertion(HX_HCSTRING("_options was null (Visual requires non-null options)","\x6b","\x1b","\x08","\xb8"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(58)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(62)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	this->_rotation_euler = tmp;
	HX_STACK_LINE(63)
	::phoenix::Quaternion tmp1 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	this->_rotation_quat = tmp1;
	HX_STACK_LINE(66)
	Dynamic tmp2 = _options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	super::__construct(tmp2);
	HX_STACK_LINE(69)
	::phoenix::Color tmp3 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	this->set_color(tmp3);
	HX_STACK_LINE(70)
	::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	this->set_size(tmp4);
	HX_STACK_LINE(73)
	Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(73)
	bool tmp6 = (tmp5->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(73)
	if ((tmp6)){
		HX_STACK_LINE(74)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(74)
		this->set_texture(tmp7->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic ));
	}
	HX_STACK_LINE(77)
	Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(77)
	bool tmp8 = (tmp7->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(77)
	if ((tmp8)){
		HX_STACK_LINE(78)
		Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(78)
		this->set_shader(tmp9->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic ));
	}
	HX_STACK_LINE(81)
	Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(81)
	bool tmp10 = (tmp9->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(81)
	if ((tmp10)){
		HX_STACK_LINE(82)
		Dynamic tmp11 = this->options;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(82)
		this->set_color(tmp11->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ));
	}
	HX_STACK_LINE(85)
	Dynamic tmp11 = this->options;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(85)
	bool tmp12 = (tmp11->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(85)
	if ((tmp12)){
		HX_STACK_LINE(86)
		Dynamic tmp13 = this->options;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(86)
		this->set_depth(tmp13->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic ));
	}
	HX_STACK_LINE(89)
	Dynamic tmp13 = this->options;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(89)
	bool tmp14 = (tmp13->__Field(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(89)
	if ((tmp14)){
		HX_STACK_LINE(90)
		Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(90)
		this->set_group(tmp15->__Field(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"), hx::paccDynamic ));
	}
	HX_STACK_LINE(93)
	Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(93)
	bool tmp16 = (tmp15->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(93)
	if ((tmp16)){
		HX_STACK_LINE(94)
		Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(94)
		this->set_visible(tmp17->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ));
	}
	HX_STACK_LINE(100)
	Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(100)
	bool tmp18 = (tmp17->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(100)
	if ((tmp18)){
		HX_STACK_LINE(102)
		Dynamic tmp19 = this->options;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(102)
		this->set_size(tmp19->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic ));
		HX_STACK_LINE(104)
		this->_create_geometry();
	}
	else{
		HX_STACK_LINE(109)
		::phoenix::Texture tmp19 = this->texture;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(109)
		bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(109)
		if ((tmp20)){
			HX_STACK_LINE(111)
			::phoenix::Texture tmp21 = this->texture;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(111)
			int tmp22 = tmp21->width;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(111)
			::phoenix::Texture tmp23 = this->texture;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(111)
			int tmp24 = tmp23->height;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(111)
			::phoenix::Vector tmp25 = ::phoenix::Vector_obj::__new(tmp22,tmp24,null(),null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(111)
			this->set_size(tmp25);
			HX_STACK_LINE(112)
			this->_create_geometry();
		}
		else{
			HX_STACK_LINE(117)
			::phoenix::Vector tmp21 = ::phoenix::Vector_obj::__new((int)64,(int)64,null(),null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(117)
			this->set_size(tmp21);
			HX_STACK_LINE(118)
			this->_create_geometry();
		}
	}
}
;
	return null();
}

//Visual_obj::~Visual_obj() { }

Dynamic Visual_obj::__CreateEmpty() { return  new Visual_obj; }
hx::ObjectPtr< Visual_obj > Visual_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Visual_obj > _result_ = new Visual_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Visual_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Visual_obj > _result_ = new Visual_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Visual_obj::_create_geometry( ){
{
		HX_STACK_FRAME("luxe.Visual","_create_geometry",0x0dc0f2ac,"luxe.Visual._create_geometry","luxe/Visual.hx",127,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		bool tmp1 = (tmp->__Field(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		if ((tmp1)){
			HX_STACK_LINE(132)
			Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			bool tmp3 = (tmp2->__Field(HX_HCSTRING("no_geometry","\xb0","\x09","\x1b","\xda"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(132)
			if ((tmp4)){
				HX_STACK_LINE(132)
				Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(132)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(132)
				tmp5 = (tmp7->__Field(HX_HCSTRING("no_geometry","\xb0","\x09","\x1b","\xda"), hx::paccDynamic ) == false);
			}
			else{
				HX_STACK_LINE(132)
				tmp5 = true;
			}
			HX_STACK_LINE(132)
			if ((tmp5)){
				HX_STACK_LINE(134)
				this->_creating_geometry = true;
				HX_STACK_LINE(136)
				::phoenix::Batcher _batcher = null();		HX_STACK_VAR(_batcher,"_batcher");
				HX_STACK_LINE(137)
				Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(137)
				bool tmp7 = (tmp6->__Field(HX_HCSTRING("no_batcher_add","\x0b","\x25","\xc3","\x59"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(137)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(137)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(137)
				if ((tmp8)){
					HX_STACK_LINE(137)
					Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(137)
					Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(137)
					tmp9 = (tmp11->__Field(HX_HCSTRING("no_batcher_add","\x0b","\x25","\xc3","\x59"), hx::paccDynamic ) == false);
				}
				else{
					HX_STACK_LINE(137)
					tmp9 = true;
				}
				HX_STACK_LINE(137)
				if ((tmp9)){
					HX_STACK_LINE(138)
					Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(138)
					bool tmp11 = (tmp10->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(138)
					if ((tmp11)){
						HX_STACK_LINE(139)
						Dynamic tmp12 = this->options;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(139)
						_batcher = tmp12->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
					}
					else{
						HX_STACK_LINE(141)
						::phoenix::Renderer tmp12 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(141)
						_batcher = tmp12->batcher;
					}
				}
				HX_STACK_LINE(146)
				::String tmp10 = this->get_name();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(146)
				::String tmp11 = (tmp10 + HX_HCSTRING(".visual","\x6e","\x79","\x67","\x68"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(149)
				::phoenix::Vector tmp12 = this->size;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(149)
				Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(150)
				::phoenix::Vector tmp14 = this->size;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(150)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(151)
				::phoenix::Vector tmp16 = ::phoenix::Vector_obj::__new((int)1,(int)1,(int)1,null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(152)
				::phoenix::Texture tmp17 = this->texture;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(153)
				::phoenix::Color tmp18 = this->color;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(154)
				::phoenix::Shader tmp19 = this->shader;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(155)
				::phoenix::Batcher tmp20 = _batcher;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(156)
				Dynamic tmp21 = this->options;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(156)
				bool tmp22 = (tmp21->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(156)
				Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(156)
				if ((tmp22)){
					HX_STACK_LINE(156)
					tmp23 = (int)0;
				}
				else{
					HX_STACK_LINE(156)
					Dynamic tmp24 = this->options;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(156)
					tmp23 = tmp24->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );
				}
				HX_STACK_LINE(157)
				Dynamic tmp24 = this->options;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(157)
				bool tmp25 = (tmp24->__Field(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(157)
				Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(157)
				if ((tmp25)){
					HX_STACK_LINE(157)
					tmp26 = (int)0;
				}
				else{
					HX_STACK_LINE(157)
					Dynamic tmp27 = this->options;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(157)
					tmp26 = tmp27->__Field(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"), hx::paccDynamic );
				}
				HX_STACK_LINE(158)
				Dynamic tmp27 = this->options;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(158)
				bool tmp28 = (tmp27->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(158)
				Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(158)
				if ((tmp28)){
					HX_STACK_LINE(158)
					tmp29 = this->visible;
				}
				else{
					HX_STACK_LINE(158)
					Dynamic tmp30 = this->options;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(158)
					tmp29 = tmp30->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );
				}
				struct _Function_3_1{
					inline static Dynamic Block( Float &tmp13,::phoenix::Texture &tmp17,::phoenix::Batcher &tmp20,::String &tmp11,::phoenix::Shader &tmp19,Dynamic &tmp23,Dynamic &tmp26,Float &tmp15,::phoenix::Vector &tmp16,::phoenix::Color &tmp18,Dynamic &tmp29){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Visual.hx",145,0xe3547505)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp11,false);
							__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
							__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
							__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp13,false);
							__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp15,false);
							__result->Add(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78") , tmp16,false);
							__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , tmp17,false);
							__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp18,false);
							__result->Add(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d") , tmp19,false);
							__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp20,false);
							__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp23,false);
							__result->Add(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99") , tmp26,false);
							__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp29,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(145)
				Dynamic tmp30 = _Function_3_1::Block(tmp13,tmp17,tmp20,tmp11,tmp19,tmp23,tmp26,tmp15,tmp16,tmp18,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(145)
				::phoenix::geometry::QuadGeometry tmp31 = ::phoenix::geometry::QuadGeometry_obj::__new(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(145)
				this->set_geometry(tmp31);
				HX_STACK_LINE(161)
				this->_creating_geometry = false;
				HX_STACK_LINE(164)
				this->on_geometry_created();
			}
		}
		else{
			HX_STACK_LINE(170)
			Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(170)
			this->set_geometry(tmp2->__Field(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"), hx::paccDynamic ));
		}
		HX_STACK_LINE(175)
		::phoenix::geometry::Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		if ((tmp3)){
			HX_STACK_LINE(176)
			::String tmp4 = this->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			::String tmp5 = (tmp4 + HX_HCSTRING(".visual","\x6e","\x79","\x67","\x68"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			::phoenix::geometry::Geometry tmp6 = this->geometry;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			tmp6->id = tmp5;
			HX_STACK_LINE(177)
			::String tmp7 = this->get_name();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(177)
			::String tmp8 = (tmp7 + HX_HCSTRING(".visual.transform","\x6c","\x86","\x5f","\xe2"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(177)
			::phoenix::geometry::Geometry tmp9 = this->geometry;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(177)
			tmp9->transform->id = tmp8;
		}
		HX_STACK_LINE(181)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(181)
		bool tmp5 = (tmp4->__Field(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(181)
		if ((tmp5)){
			HX_STACK_LINE(182)
			this->_has_custom_origin = true;
			HX_STACK_LINE(183)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(183)
			this->set_origin(tmp6->__Field(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"), hx::paccDynamic ));
		}
		HX_STACK_LINE(187)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(187)
		bool tmp7 = (tmp6->__Field(HX_HCSTRING("rotation_z","\xf9","\xdb","\x7e","\xe4"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(187)
		if ((tmp7)){
			HX_STACK_LINE(188)
			Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(188)
			this->set_rotation_z(tmp8->__Field(HX_HCSTRING("rotation_z","\xf9","\xdb","\x7e","\xe4"), hx::paccDynamic ));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Visual_obj,_create_geometry,(void))

Void Visual_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Visual","ondestroy",0x45842a65,"luxe.Visual.ondestroy","luxe/Visual.hx",193,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_LINE(196)
		::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		if ((tmp1)){
			HX_STACK_LINE(196)
			::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(196)
			::phoenix::geometry::Geometry tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			tmp2 = tmp4->added;
		}
		else{
			HX_STACK_LINE(196)
			tmp2 = false;
		}
		HX_STACK_LINE(196)
		if ((tmp2)){
			HX_STACK_LINE(197)
			::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(197)
			tmp3->drop(true);
		}
		HX_STACK_LINE(201)
		this->set_geometry(null());
		HX_STACK_LINE(202)
		this->set_texture(null());
	}
return null();
}


Void Visual_obj::on_geometry_created( ){
{
		HX_STACK_FRAME("luxe.Visual","on_geometry_created",0x622713a5,"luxe.Visual.on_geometry_created","luxe/Visual.hx",206,0xe3547505)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Visual_obj,on_geometry_created,(void))

bool Visual_obj::set_visible( bool _v){
	HX_STACK_FRAME("luxe.Visual","set_visible",0x8da44abf,"luxe.Visual.set_visible","luxe/Visual.hx",214,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(216)
	this->visible = _v;
	HX_STACK_LINE(219)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(219)
	if ((tmp1)){
		HX_STACK_LINE(220)
		::phoenix::geometry::Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		bool tmp3 = this->visible;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		tmp2->set_visible(tmp3);
	}
	HX_STACK_LINE(223)
	bool tmp2 = this->visible;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(223)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_visible,return )

Float Visual_obj::set_depth( Float _v){
	HX_STACK_FRAME("luxe.Visual","set_depth",0x14c8a610,"luxe.Visual.set_depth","luxe/Visual.hx",227,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(229)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	if ((tmp1)){
		HX_STACK_LINE(230)
		::phoenix::geometry::Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		Float tmp3 = _v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(230)
		tmp2->set_depth(tmp3);
	}
	HX_STACK_LINE(233)
	Float tmp2 = this->depth = _v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_depth,return )

int Visual_obj::set_group( int _v){
	HX_STACK_FRAME("luxe.Visual","set_group",0xd793684c,"luxe.Visual.set_group","luxe/Visual.hx",237,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(239)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	if ((tmp1)){
		HX_STACK_LINE(240)
		::phoenix::geometry::Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		int tmp3 = _v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		tmp2->set_group(tmp3);
	}
	HX_STACK_LINE(243)
	int tmp2 = this->group = _v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(243)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_group,return )

::phoenix::Color Visual_obj::set_color( ::phoenix::Color _c){
	HX_STACK_FRAME("luxe.Visual","set_color",0x87fb2670,"luxe.Visual.set_color","luxe/Visual.hx",249,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(251)
	::phoenix::Color tmp = this->color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(251)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	if ((tmp1)){
		HX_STACK_LINE(251)
		::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		::phoenix::geometry::Geometry tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		tmp2 = (tmp4 != null());
	}
	else{
		HX_STACK_LINE(251)
		tmp2 = false;
	}
	HX_STACK_LINE(251)
	if ((tmp2)){
		HX_STACK_LINE(252)
		::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		::phoenix::Color tmp4 = _c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(252)
		tmp3->set_color(tmp4);
	}
	HX_STACK_LINE(255)
	::phoenix::Color tmp3 = this->color = _c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(255)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_color,return )

::phoenix::Texture Visual_obj::set_texture( ::phoenix::Texture _t){
	HX_STACK_FRAME("luxe.Visual","set_texture",0x89609b28,"luxe.Visual.set_texture","luxe/Visual.hx",259,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(261)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(261)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(261)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(261)
	if ((tmp1)){
		HX_STACK_LINE(261)
		::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(261)
		::phoenix::geometry::Geometry tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(261)
		::phoenix::Texture tmp5 = tmp4->get_texture();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(261)
		::phoenix::Texture tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(261)
		::phoenix::Texture tmp7 = _t;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(261)
		tmp2 = (tmp6 != tmp7);
	}
	else{
		HX_STACK_LINE(261)
		tmp2 = false;
	}
	HX_STACK_LINE(261)
	if ((tmp2)){
		HX_STACK_LINE(262)
		::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		::phoenix::Texture tmp4 = _t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		tmp3->set_texture(tmp4);
	}
	HX_STACK_LINE(265)
	::phoenix::Texture tmp3 = this->texture = _t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(265)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_texture,return )

::phoenix::Shader Visual_obj::set_shader( ::phoenix::Shader _s){
	HX_STACK_FRAME("luxe.Visual","set_shader",0xca607578,"luxe.Visual.set_shader","luxe/Visual.hx",268,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(270)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(270)
	if ((tmp1)){
		HX_STACK_LINE(270)
		::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(270)
		::phoenix::geometry::Geometry tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(270)
		::phoenix::Shader tmp5 = tmp4->get_shader();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(270)
		::phoenix::Shader tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(270)
		::phoenix::Shader tmp7 = _s;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(270)
		tmp2 = (tmp6 != tmp7);
	}
	else{
		HX_STACK_LINE(270)
		tmp2 = false;
	}
	HX_STACK_LINE(270)
	if ((tmp2)){
		HX_STACK_LINE(271)
		::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		::phoenix::Shader tmp4 = _s;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(271)
		tmp3->set_shader(tmp4);
	}
	HX_STACK_LINE(274)
	::phoenix::Shader tmp3 = this->shader = _s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(274)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_shader,return )

::phoenix::geometry::Geometry Visual_obj::set_geometry( ::phoenix::geometry::Geometry _g){
	HX_STACK_FRAME("luxe.Visual","set_geometry",0x180133c5,"luxe.Visual.set_geometry","luxe/Visual.hx",281,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_g,"_g")
	HX_STACK_LINE(284)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	::phoenix::geometry::Geometry tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(284)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(284)
	if ((tmp2)){
		HX_STACK_LINE(285)
		::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(285)
		return tmp3;
	}
	HX_STACK_LINE(289)
	::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(289)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(289)
	if ((tmp4)){
		HX_STACK_LINE(290)
		::phoenix::geometry::Geometry tmp5 = this->geometry;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(290)
		tmp5->drop(null());
	}
	HX_STACK_LINE(294)
	this->geometry = _g;
	HX_STACK_LINE(297)
	::phoenix::geometry::Geometry tmp5 = this->geometry;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(297)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(297)
	if ((tmp6)){
		HX_STACK_LINE(300)
		{
			HX_STACK_LINE(300)
			::phoenix::geometry::Geometry tmp7 = this->geometry;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(300)
			::phoenix::Transform _this = tmp7->transform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(300)
			::phoenix::Transform tmp8 = this->get_transform();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(300)
			::phoenix::Transform _p = tmp8;		HX_STACK_VAR(_p,"_p");
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(300)
				_this->dirty = true;
				HX_STACK_LINE(300)
				bool tmp9 = _this->dirty;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(300)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(300)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(300)
				if ((tmp10)){
					HX_STACK_LINE(300)
					bool tmp12 = _this->_setup;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(300)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(300)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(300)
					tmp11 = !(tmp14);
				}
				else{
					HX_STACK_LINE(300)
					tmp11 = false;
				}
				HX_STACK_LINE(300)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(300)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(300)
				if ((tmp12)){
					HX_STACK_LINE(300)
					tmp13 = (_this->_dirty_handlers != null());
				}
				else{
					HX_STACK_LINE(300)
					tmp13 = false;
				}
				HX_STACK_LINE(300)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(300)
				if ((tmp13)){
					HX_STACK_LINE(300)
					int tmp15 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(300)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(300)
					tmp14 = (tmp16 > (int)0);
				}
				else{
					HX_STACK_LINE(300)
					tmp14 = false;
				}
				HX_STACK_LINE(300)
				if ((tmp14)){
					HX_STACK_LINE(300)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(300)
					cpp::ArrayBase _g11 = _this->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(300)
					while((true)){
						HX_STACK_LINE(300)
						bool tmp15 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(300)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(300)
						if ((tmp16)){
							HX_STACK_LINE(300)
							break;
						}
						HX_STACK_LINE(300)
						Dynamic tmp17 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(300)
						Dynamic _handler = tmp17;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(300)
						++(_g1);
						HX_STACK_LINE(300)
						bool tmp18 = (_handler != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(300)
						if ((tmp18)){
							HX_STACK_LINE(300)
							::phoenix::Transform tmp19 = _this;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(300)
							_handler(tmp19).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(300)
				_this->dirty;
			}
			HX_STACK_LINE(300)
			bool tmp9 = (_this->parent != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(300)
			if ((tmp9)){
				HX_STACK_LINE(300)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(300)
				bool tmp10 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(300)
				if ((tmp10)){
					HX_STACK_LINE(300)
					false;
				}
				else{
					HX_STACK_LINE(300)
					Dynamic tmp11 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(300)
					_this1->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp11);
				}
			}
			HX_STACK_LINE(300)
			_this->parent = _p;
			HX_STACK_LINE(300)
			bool tmp10 = (_this->_parent_handlers != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(300)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(300)
			if ((tmp10)){
				HX_STACK_LINE(300)
				int tmp12 = _this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(300)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(300)
				tmp11 = (tmp13 > (int)0);
			}
			else{
				HX_STACK_LINE(300)
				tmp11 = false;
			}
			HX_STACK_LINE(300)
			if ((tmp11)){
				HX_STACK_LINE(300)
				::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
				HX_STACK_LINE(300)
				{
					HX_STACK_LINE(300)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(300)
					cpp::ArrayBase _g11 = _this->_parent_handlers;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(300)
					while((true)){
						HX_STACK_LINE(300)
						bool tmp12 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(300)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(300)
						if ((tmp13)){
							HX_STACK_LINE(300)
							break;
						}
						HX_STACK_LINE(300)
						Dynamic tmp14 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(300)
						Dynamic _handler = tmp14;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(300)
						++(_g1);
						HX_STACK_LINE(300)
						bool tmp15 = (_handler != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(300)
						if ((tmp15)){
							HX_STACK_LINE(300)
							::phoenix::Transform tmp16 = _parent;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(300)
							_handler(tmp16).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(300)
			bool tmp12 = (_this->parent != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(300)
			if ((tmp12)){
				HX_STACK_LINE(300)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(300)
				bool tmp13 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(300)
				if ((tmp13)){
					HX_STACK_LINE(300)
					_this1->_clean_handlers = cpp::ArrayBase_obj::__new();
				}
				HX_STACK_LINE(300)
				Dynamic tmp14 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(300)
				_this1->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
			}
			HX_STACK_LINE(300)
			_this->parent;
		}
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(309)
			bool tmp7 = this->_creating_geometry;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(309)
			bool tmp8 = (tmp7 == false);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(309)
			if ((tmp8)){
				HX_STACK_LINE(311)
				::phoenix::geometry::Geometry tmp9 = this->geometry;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(311)
				::phoenix::Color tmp10 = this->color;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(311)
				tmp9->set_color(tmp10);
				HX_STACK_LINE(312)
				::phoenix::geometry::Geometry tmp11 = this->geometry;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(312)
				int tmp12 = this->group;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(312)
				tmp11->set_group(tmp12);
				HX_STACK_LINE(313)
				::phoenix::geometry::Geometry tmp13 = this->geometry;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(313)
				Float tmp14 = this->depth;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(313)
				tmp13->set_depth(tmp14);
				HX_STACK_LINE(314)
				::phoenix::geometry::Geometry tmp15 = this->geometry;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(314)
				bool tmp16 = this->visible;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(314)
				tmp15->set_visible(tmp16);
				HX_STACK_LINE(317)
				bool tmp17 = this->ignore_texture_on_geometry_change;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(317)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(317)
				if ((tmp18)){
				}
			}
		}
	}
	HX_STACK_LINE(326)
	::phoenix::geometry::Geometry tmp7 = this->geometry;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(326)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_geometry,return )

Void Visual_obj::set_parent_from_transform( ::phoenix::Transform _parent){
{
		HX_STACK_FRAME("luxe.Visual","set_parent_from_transform",0x5e81f8d9,"luxe.Visual.set_parent_from_transform","luxe/Visual.hx",333,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parent,"_parent")
		HX_STACK_LINE(335)
		::phoenix::Transform tmp = _parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		this->super::set_parent_from_transform(tmp);
		HX_STACK_LINE(337)
		::phoenix::geometry::Geometry tmp1 = this->geometry;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(337)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(337)
		if ((tmp2)){
			HX_STACK_LINE(339)
			::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			::phoenix::Transform _this = tmp3->transform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(339)
			::phoenix::Transform tmp4 = this->get_transform();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(339)
			::phoenix::Transform _p = tmp4;		HX_STACK_VAR(_p,"_p");
			HX_STACK_LINE(339)
			{
				HX_STACK_LINE(339)
				_this->dirty = true;
				HX_STACK_LINE(339)
				bool tmp5 = _this->dirty;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(339)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(339)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(339)
				if ((tmp6)){
					HX_STACK_LINE(339)
					bool tmp8 = _this->_setup;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(339)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(339)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(339)
					tmp7 = !(tmp10);
				}
				else{
					HX_STACK_LINE(339)
					tmp7 = false;
				}
				HX_STACK_LINE(339)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(339)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(339)
				if ((tmp8)){
					HX_STACK_LINE(339)
					tmp9 = (_this->_dirty_handlers != null());
				}
				else{
					HX_STACK_LINE(339)
					tmp9 = false;
				}
				HX_STACK_LINE(339)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(339)
				if ((tmp9)){
					HX_STACK_LINE(339)
					int tmp11 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(339)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(339)
					tmp10 = (tmp12 > (int)0);
				}
				else{
					HX_STACK_LINE(339)
					tmp10 = false;
				}
				HX_STACK_LINE(339)
				if ((tmp10)){
					HX_STACK_LINE(339)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(339)
					cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(339)
					while((true)){
						HX_STACK_LINE(339)
						bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(339)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(339)
						if ((tmp12)){
							HX_STACK_LINE(339)
							break;
						}
						HX_STACK_LINE(339)
						Dynamic tmp13 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(339)
						Dynamic _handler = tmp13;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(339)
						++(_g);
						HX_STACK_LINE(339)
						bool tmp14 = (_handler != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(339)
						if ((tmp14)){
							HX_STACK_LINE(339)
							::phoenix::Transform tmp15 = _this;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(339)
							_handler(tmp15).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(339)
				_this->dirty;
			}
			HX_STACK_LINE(339)
			bool tmp5 = (_this->parent != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(339)
			if ((tmp5)){
				HX_STACK_LINE(339)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(339)
				bool tmp6 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(339)
				if ((tmp6)){
					HX_STACK_LINE(339)
					false;
				}
				else{
					HX_STACK_LINE(339)
					Dynamic tmp7 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(339)
					_this1->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp7);
				}
			}
			HX_STACK_LINE(339)
			_this->parent = _p;
			HX_STACK_LINE(339)
			bool tmp6 = (_this->_parent_handlers != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(339)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(339)
			if ((tmp6)){
				HX_STACK_LINE(339)
				int tmp8 = _this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(339)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(339)
				tmp7 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(339)
				tmp7 = false;
			}
			HX_STACK_LINE(339)
			if ((tmp7)){
				HX_STACK_LINE(339)
				::phoenix::Transform _parent1 = _this->parent;		HX_STACK_VAR(_parent1,"_parent1");
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(339)
					cpp::ArrayBase _g1 = _this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(339)
					while((true)){
						HX_STACK_LINE(339)
						bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(339)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(339)
						if ((tmp9)){
							HX_STACK_LINE(339)
							break;
						}
						HX_STACK_LINE(339)
						Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(339)
						Dynamic _handler = tmp10;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(339)
						++(_g);
						HX_STACK_LINE(339)
						bool tmp11 = (_handler != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(339)
						if ((tmp11)){
							HX_STACK_LINE(339)
							::phoenix::Transform tmp12 = _parent1;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(339)
							_handler(tmp12).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(339)
			bool tmp8 = (_this->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(339)
			if ((tmp8)){
				HX_STACK_LINE(339)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(339)
				bool tmp9 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(339)
				if ((tmp9)){
					HX_STACK_LINE(339)
					_this1->_clean_handlers = cpp::ArrayBase_obj::__new();
				}
				HX_STACK_LINE(339)
				Dynamic tmp10 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(339)
				_this1->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
			}
			HX_STACK_LINE(339)
			_this->parent;
		}
	}
return null();
}


Void Visual_obj::set_rotation_from_transform( ::phoenix::Quaternion _rotation){
{
		HX_STACK_FRAME("luxe.Visual","set_rotation_from_transform",0x9fdb9485,"luxe.Visual.set_rotation_from_transform","luxe/Visual.hx",344,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rotation,"_rotation")
		HX_STACK_LINE(346)
		::phoenix::Quaternion tmp = _rotation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		this->super::set_rotation_from_transform(tmp);
		HX_STACK_LINE(349)
		{
			HX_STACK_LINE(349)
			::phoenix::Vector tmp1 = this->_rotation_euler;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(349)
			::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(349)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(349)
			Float tmp2 = (_rotation->x * _rotation->x);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(349)
			Float sqx = tmp2;		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(349)
			Float tmp3 = (_rotation->y * _rotation->y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(349)
			Float sqy = tmp3;		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(349)
			Float tmp4 = (_rotation->z * _rotation->z);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(349)
			Float sqz = tmp4;		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(349)
			Float tmp5 = (_rotation->w * _rotation->w);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(349)
			Float sqw = tmp5;		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(349)
			Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(349)
			Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(349)
			Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(349)
			bool tmp6 = (order == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(349)
			if ((tmp6)){
				HX_STACK_LINE(349)
				Float tmp7 = (_rotation->x * _rotation->w);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(349)
				Float tmp8 = (_rotation->y * _rotation->z);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(349)
				Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(349)
				Float tmp10 = ((int)2 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(349)
				Float tmp11 = (sqw - sqx);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(349)
				Float tmp12 = sqy;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(349)
				Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(349)
				Float tmp14 = sqz;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(349)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(349)
				Float tmp16 = ::Math_obj::atan2(tmp10,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(349)
				_x = tmp16;
				HX_STACK_LINE(349)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(349)
				{
					HX_STACK_LINE(349)
					Float tmp18 = (_rotation->x * _rotation->z);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(349)
					Float tmp19 = (_rotation->y * _rotation->w);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(349)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(349)
					Float tmp21 = ((int)2 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(349)
					Float value = tmp21;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(349)
					bool tmp22 = (value < (int)-1);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(349)
					if ((tmp22)){
						HX_STACK_LINE(349)
						tmp17 = (int)-1;
					}
					else{
						HX_STACK_LINE(349)
						bool tmp23 = (value > (int)1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(349)
						if ((tmp23)){
							HX_STACK_LINE(349)
							tmp17 = (int)1;
						}
						else{
							HX_STACK_LINE(349)
							tmp17 = value;
						}
					}
				}
				HX_STACK_LINE(349)
				Float tmp18 = ::Math_obj::asin(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(349)
				_y = tmp18;
				HX_STACK_LINE(349)
				Float tmp19 = (_rotation->z * _rotation->w);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(349)
				Float tmp20 = (_rotation->x * _rotation->y);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(349)
				Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(349)
				Float tmp22 = ((int)2 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(349)
				Float tmp23 = (sqw + sqx);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(349)
				Float tmp24 = sqy;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(349)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(349)
				Float tmp26 = sqz;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(349)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(349)
				Float tmp28 = ::Math_obj::atan2(tmp22,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(349)
				_z = tmp28;
			}
			else{
				HX_STACK_LINE(349)
				bool tmp7 = (order == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(349)
				if ((tmp7)){
					HX_STACK_LINE(349)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(349)
					{
						HX_STACK_LINE(349)
						Float tmp9 = (_rotation->x * _rotation->w);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(349)
						Float tmp10 = (_rotation->y * _rotation->z);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(349)
						Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(349)
						Float tmp12 = ((int)2 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(349)
						Float value = tmp12;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(349)
						bool tmp13 = (value < (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(349)
						if ((tmp13)){
							HX_STACK_LINE(349)
							tmp8 = (int)-1;
						}
						else{
							HX_STACK_LINE(349)
							bool tmp14 = (value > (int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(349)
							if ((tmp14)){
								HX_STACK_LINE(349)
								tmp8 = (int)1;
							}
							else{
								HX_STACK_LINE(349)
								tmp8 = value;
							}
						}
					}
					HX_STACK_LINE(349)
					Float tmp9 = ::Math_obj::asin(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(349)
					_x = tmp9;
					HX_STACK_LINE(349)
					Float tmp10 = (_rotation->x * _rotation->z);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(349)
					Float tmp11 = (_rotation->y * _rotation->w);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(349)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(349)
					Float tmp13 = ((int)2 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(349)
					Float tmp14 = (sqw - sqx);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(349)
					Float tmp15 = sqy;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(349)
					Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(349)
					Float tmp17 = sqz;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(349)
					Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(349)
					Float tmp19 = ::Math_obj::atan2(tmp13,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(349)
					_y = tmp19;
					HX_STACK_LINE(349)
					Float tmp20 = (_rotation->x * _rotation->y);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(349)
					Float tmp21 = (_rotation->z * _rotation->w);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(349)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(349)
					Float tmp23 = ((int)2 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(349)
					Float tmp24 = (sqw - sqx);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(349)
					Float tmp25 = sqy;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(349)
					Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(349)
					Float tmp27 = sqz;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(349)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(349)
					Float tmp29 = ::Math_obj::atan2(tmp23,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(349)
					_z = tmp29;
				}
				else{
					HX_STACK_LINE(349)
					bool tmp8 = (order == (int)2);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(349)
					if ((tmp8)){
						HX_STACK_LINE(349)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(349)
						{
							HX_STACK_LINE(349)
							Float tmp10 = (_rotation->x * _rotation->w);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(349)
							Float tmp11 = (_rotation->y * _rotation->z);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(349)
							Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(349)
							Float tmp13 = ((int)2 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(349)
							Float value = tmp13;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(349)
							bool tmp14 = (value < (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(349)
							if ((tmp14)){
								HX_STACK_LINE(349)
								tmp9 = (int)-1;
							}
							else{
								HX_STACK_LINE(349)
								bool tmp15 = (value > (int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(349)
								if ((tmp15)){
									HX_STACK_LINE(349)
									tmp9 = (int)1;
								}
								else{
									HX_STACK_LINE(349)
									tmp9 = value;
								}
							}
						}
						HX_STACK_LINE(349)
						Float tmp10 = ::Math_obj::asin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(349)
						_x = tmp10;
						HX_STACK_LINE(349)
						Float tmp11 = (_rotation->y * _rotation->w);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(349)
						Float tmp12 = (_rotation->z * _rotation->x);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(349)
						Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(349)
						Float tmp14 = ((int)2 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(349)
						Float tmp15 = (sqw - sqx);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(349)
						Float tmp16 = sqy;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(349)
						Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(349)
						Float tmp18 = sqz;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(349)
						Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(349)
						Float tmp20 = ::Math_obj::atan2(tmp14,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(349)
						_y = tmp20;
						HX_STACK_LINE(349)
						Float tmp21 = (_rotation->z * _rotation->w);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(349)
						Float tmp22 = (_rotation->x * _rotation->y);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(349)
						Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(349)
						Float tmp24 = ((int)2 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(349)
						Float tmp25 = (sqw - sqx);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(349)
						Float tmp26 = sqy;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(349)
						Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(349)
						Float tmp28 = sqz;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(349)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(349)
						Float tmp30 = ::Math_obj::atan2(tmp24,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(349)
						_z = tmp30;
					}
					else{
						HX_STACK_LINE(349)
						bool tmp9 = (order == (int)3);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(349)
						if ((tmp9)){
							HX_STACK_LINE(349)
							Float tmp10 = (_rotation->x * _rotation->w);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(349)
							Float tmp11 = (_rotation->z * _rotation->y);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(349)
							Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(349)
							Float tmp13 = ((int)2 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(349)
							Float tmp14 = (sqw - sqx);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(349)
							Float tmp15 = sqy;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(349)
							Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(349)
							Float tmp17 = sqz;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(349)
							Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(349)
							Float tmp19 = ::Math_obj::atan2(tmp13,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(349)
							_x = tmp19;
							HX_STACK_LINE(349)
							Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(349)
							{
								HX_STACK_LINE(349)
								Float tmp21 = (_rotation->y * _rotation->w);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(349)
								Float tmp22 = (_rotation->x * _rotation->z);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(349)
								Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(349)
								Float tmp24 = ((int)2 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(349)
								Float value = tmp24;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(349)
								bool tmp25 = (value < (int)-1);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(349)
								if ((tmp25)){
									HX_STACK_LINE(349)
									tmp20 = (int)-1;
								}
								else{
									HX_STACK_LINE(349)
									bool tmp26 = (value > (int)1);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(349)
									if ((tmp26)){
										HX_STACK_LINE(349)
										tmp20 = (int)1;
									}
									else{
										HX_STACK_LINE(349)
										tmp20 = value;
									}
								}
							}
							HX_STACK_LINE(349)
							Float tmp21 = ::Math_obj::asin(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(349)
							_y = tmp21;
							HX_STACK_LINE(349)
							Float tmp22 = (_rotation->x * _rotation->y);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(349)
							Float tmp23 = (_rotation->z * _rotation->w);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(349)
							Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(349)
							Float tmp25 = ((int)2 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(349)
							Float tmp26 = (sqw + sqx);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(349)
							Float tmp27 = sqy;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(349)
							Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(349)
							Float tmp29 = sqz;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(349)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(349)
							Float tmp31 = ::Math_obj::atan2(tmp25,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(349)
							_z = tmp31;
						}
						else{
							HX_STACK_LINE(349)
							bool tmp10 = (order == (int)4);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(349)
							if ((tmp10)){
								HX_STACK_LINE(349)
								Float tmp11 = (_rotation->x * _rotation->w);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(349)
								Float tmp12 = (_rotation->z * _rotation->y);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(349)
								Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(349)
								Float tmp14 = ((int)2 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(349)
								Float tmp15 = (sqw - sqx);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(349)
								Float tmp16 = sqy;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(349)
								Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(349)
								Float tmp18 = sqz;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(349)
								Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(349)
								Float tmp20 = ::Math_obj::atan2(tmp14,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(349)
								_x = tmp20;
								HX_STACK_LINE(349)
								Float tmp21 = (_rotation->y * _rotation->w);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(349)
								Float tmp22 = (_rotation->x * _rotation->z);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(349)
								Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(349)
								Float tmp24 = ((int)2 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(349)
								Float tmp25 = (sqw + sqx);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(349)
								Float tmp26 = sqy;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(349)
								Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(349)
								Float tmp28 = sqz;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(349)
								Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(349)
								Float tmp30 = ::Math_obj::atan2(tmp24,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(349)
								_y = tmp30;
								HX_STACK_LINE(349)
								Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(349)
								{
									HX_STACK_LINE(349)
									Float tmp32 = (_rotation->x * _rotation->y);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(349)
									Float tmp33 = (_rotation->z * _rotation->w);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(349)
									Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(349)
									Float tmp35 = ((int)2 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(349)
									Float value = tmp35;		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(349)
									bool tmp36 = (value < (int)-1);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(349)
									if ((tmp36)){
										HX_STACK_LINE(349)
										tmp31 = (int)-1;
									}
									else{
										HX_STACK_LINE(349)
										bool tmp37 = (value > (int)1);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(349)
										if ((tmp37)){
											HX_STACK_LINE(349)
											tmp31 = (int)1;
										}
										else{
											HX_STACK_LINE(349)
											tmp31 = value;
										}
									}
								}
								HX_STACK_LINE(349)
								Float tmp32 = ::Math_obj::asin(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(349)
								_z = tmp32;
							}
							else{
								HX_STACK_LINE(349)
								bool tmp11 = (order == (int)5);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(349)
								if ((tmp11)){
									HX_STACK_LINE(349)
									Float tmp12 = (_rotation->x * _rotation->w);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(349)
									Float tmp13 = (_rotation->y * _rotation->z);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(349)
									Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(349)
									Float tmp15 = ((int)2 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(349)
									Float tmp16 = (sqw - sqx);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(349)
									Float tmp17 = sqy;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(349)
									Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(349)
									Float tmp19 = sqz;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(349)
									Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(349)
									Float tmp21 = ::Math_obj::atan2(tmp15,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(349)
									_x = tmp21;
									HX_STACK_LINE(349)
									Float tmp22 = (_rotation->x * _rotation->z);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(349)
									Float tmp23 = (_rotation->y * _rotation->w);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(349)
									Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(349)
									Float tmp25 = ((int)2 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(349)
									Float tmp26 = (sqw + sqx);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(349)
									Float tmp27 = sqy;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(349)
									Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(349)
									Float tmp29 = sqz;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(349)
									Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(349)
									Float tmp31 = ::Math_obj::atan2(tmp25,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(349)
									_y = tmp31;
									HX_STACK_LINE(349)
									Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(349)
									{
										HX_STACK_LINE(349)
										Float tmp33 = (_rotation->z * _rotation->w);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(349)
										Float tmp34 = (_rotation->x * _rotation->y);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(349)
										Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(349)
										Float tmp36 = ((int)2 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(349)
										Float value = tmp36;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(349)
										bool tmp37 = (value < (int)-1);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(349)
										if ((tmp37)){
											HX_STACK_LINE(349)
											tmp32 = (int)-1;
										}
										else{
											HX_STACK_LINE(349)
											bool tmp38 = (value > (int)1);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(349)
											if ((tmp38)){
												HX_STACK_LINE(349)
												tmp32 = (int)1;
											}
											else{
												HX_STACK_LINE(349)
												tmp32 = value;
											}
										}
									}
									HX_STACK_LINE(349)
									Float tmp33 = ::Math_obj::asin(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(349)
									_z = tmp33;
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(349)
			{
				HX_STACK_LINE(349)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(349)
				_this->ignore_listeners = true;
				HX_STACK_LINE(349)
				{
					HX_STACK_LINE(349)
					_this->x = _x;
					HX_STACK_LINE(349)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(349)
					if ((tmp7)){
						HX_STACK_LINE(349)
						_this->x;
					}
					else{
						HX_STACK_LINE(349)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(349)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(349)
						if ((tmp8)){
							HX_STACK_LINE(349)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(349)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(349)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(349)
							tmp9 = false;
						}
						HX_STACK_LINE(349)
						if ((tmp9)){
							HX_STACK_LINE(349)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(349)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(349)
						_this->x;
					}
				}
				HX_STACK_LINE(349)
				{
					HX_STACK_LINE(349)
					_this->y = _y;
					HX_STACK_LINE(349)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(349)
					if ((tmp7)){
						HX_STACK_LINE(349)
						_this->y;
					}
					else{
						HX_STACK_LINE(349)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(349)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(349)
						if ((tmp8)){
							HX_STACK_LINE(349)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(349)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(349)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(349)
							tmp9 = false;
						}
						HX_STACK_LINE(349)
						if ((tmp9)){
							HX_STACK_LINE(349)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(349)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(349)
						_this->y;
					}
				}
				HX_STACK_LINE(349)
				{
					HX_STACK_LINE(349)
					_this->z = _z;
					HX_STACK_LINE(349)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(349)
					if ((tmp7)){
						HX_STACK_LINE(349)
						_this->z;
					}
					else{
						HX_STACK_LINE(349)
						bool tmp8 = (_this->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(349)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(349)
						if ((tmp8)){
							HX_STACK_LINE(349)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(349)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(349)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(349)
							tmp9 = false;
						}
						HX_STACK_LINE(349)
						if ((tmp9)){
							HX_STACK_LINE(349)
							Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(349)
							_this->listen_z(tmp10);
						}
						HX_STACK_LINE(349)
						_this->z;
					}
				}
				HX_STACK_LINE(349)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(349)
				bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(349)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(349)
				if ((tmp7)){
					HX_STACK_LINE(349)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(349)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(349)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(349)
					tmp8 = false;
				}
				HX_STACK_LINE(349)
				if ((tmp8)){
					HX_STACK_LINE(349)
					Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(349)
					_this->listen_x(tmp9);
				}
				HX_STACK_LINE(349)
				bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(349)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(349)
				if ((tmp9)){
					HX_STACK_LINE(349)
					bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(349)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(349)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(349)
					tmp10 = false;
				}
				HX_STACK_LINE(349)
				if ((tmp10)){
					HX_STACK_LINE(349)
					Float tmp11 = _this->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(349)
					_this->listen_y(tmp11);
				}
				HX_STACK_LINE(349)
				bool tmp11 = (_this->listen_z != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(349)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(349)
				if ((tmp11)){
					HX_STACK_LINE(349)
					bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(349)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(349)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(349)
					tmp12 = false;
				}
				HX_STACK_LINE(349)
				if ((tmp12)){
					HX_STACK_LINE(349)
					Float tmp13 = _this->z;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(349)
					_this->listen_z(tmp13);
				}
				HX_STACK_LINE(349)
				_this;
			}
			HX_STACK_LINE(349)
			_this;
		}
		HX_STACK_LINE(350)
		::phoenix::Quaternion tmp1 = this->_rotation_quat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		::phoenix::Quaternion tmp2 = _rotation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		tmp1->copy(tmp2);
	}
return null();
}


::phoenix::Vector Visual_obj::set_size( ::phoenix::Vector _v){
	HX_STACK_FRAME("luxe.Visual","set_size",0x32330c54,"luxe.Visual.set_size","luxe/Visual.hx",356,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(358)
	this->size = _v;
	HX_STACK_LINE(360)
	::phoenix::Vector tmp = this->size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(360)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(360)
	if ((tmp1)){
		HX_STACK_LINE(361)
		::phoenix::Vector tmp2 = this->size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(361)
		Dynamic tmp3 = this->_size_change_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(361)
		::phoenix::Vector_obj::Listen(tmp2,tmp3);
	}
	HX_STACK_LINE(363)
	::phoenix::Vector tmp2 = this->size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(363)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_size,return )

Float Visual_obj::get_rotation_z( ){
	HX_STACK_FRAME("luxe.Visual","get_rotation_z",0x34f3cf58,"luxe.Visual.get_rotation_z","luxe/Visual.hx",369,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(371)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(371)
	{
		HX_STACK_LINE(371)
		Float tmp1 = this->get_radians();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(371)
		Float radians = tmp1;		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(371)
		tmp = (radians * ((Float)57.2957795130823797));
	}
	HX_STACK_LINE(371)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Visual_obj,get_rotation_z,return )

Float Visual_obj::set_rotation_z( Float _degrees){
	HX_STACK_FRAME("luxe.Visual","set_rotation_z",0x5513b7cc,"luxe.Visual.set_rotation_z","luxe/Visual.hx",375,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_degrees,"_degrees")
	HX_STACK_LINE(377)
	Float tmp = (_degrees * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(377)
	this->set_radians(tmp);
	HX_STACK_LINE(379)
	Float tmp1 = _degrees;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(379)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_rotation_z,return )

Float Visual_obj::set_radians( Float _r){
	HX_STACK_FRAME("luxe.Visual","set_radians",0x117018bf,"luxe.Visual.set_radians","luxe/Visual.hx",383,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(385)
	{
		HX_STACK_LINE(385)
		::phoenix::Vector tmp = this->_rotation_euler;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(385)
		_this->z = _r;
		HX_STACK_LINE(385)
		bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		if ((tmp1)){
			HX_STACK_LINE(385)
			_this->z;
		}
		else{
			HX_STACK_LINE(385)
			bool tmp2 = (_this->listen_z != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(385)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(385)
			if ((tmp2)){
				HX_STACK_LINE(385)
				bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(385)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(385)
				tmp3 = !(tmp5);
			}
			else{
				HX_STACK_LINE(385)
				tmp3 = false;
			}
			HX_STACK_LINE(385)
			if ((tmp3)){
				HX_STACK_LINE(385)
				Float tmp4 = _r;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(385)
				_this->listen_z(tmp4);
			}
			HX_STACK_LINE(385)
			_this->z;
		}
	}
	HX_STACK_LINE(386)
	::phoenix::Quaternion tmp = this->_rotation_quat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(386)
	::phoenix::Vector tmp1 = this->_rotation_euler;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(386)
	tmp->setFromEuler(tmp1,null());
	HX_STACK_LINE(388)
	::phoenix::Quaternion tmp2 = this->_rotation_quat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(388)
	::phoenix::Quaternion tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(388)
	this->set_rotation(tmp3);
	HX_STACK_LINE(390)
	Float tmp4 = this->radians = _r;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(390)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_radians,return )

Float Visual_obj::get_radians( ){
	HX_STACK_FRAME("luxe.Visual","get_radians",0x070311b3,"luxe.Visual.get_radians","luxe/Visual.hx",394,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(395)
	Float tmp = this->radians;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(395)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Visual_obj,get_radians,return )

bool Visual_obj::set_locked( bool _l){
	HX_STACK_FRAME("luxe.Visual","set_locked",0x0706bb5d,"luxe.Visual.set_locked","luxe/Visual.hx",400,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_l,"_l")
	HX_STACK_LINE(402)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(402)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(402)
	if ((tmp1)){
		HX_STACK_LINE(403)
		::phoenix::geometry::Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(403)
		bool tmp3 = _l;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(403)
		tmp2->set_locked(tmp3);
	}
	HX_STACK_LINE(406)
	bool tmp2 = this->locked = _l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(406)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_locked,return )

::phoenix::Rectangle Visual_obj::set_clip_rect( ::phoenix::Rectangle _val){
	HX_STACK_FRAME("luxe.Visual","set_clip_rect",0xf17507c0,"luxe.Visual.set_clip_rect","luxe/Visual.hx",413,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(415)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(415)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(415)
	if ((tmp1)){
		HX_STACK_LINE(416)
		::phoenix::geometry::Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(416)
		::phoenix::Rectangle tmp3 = _val;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(416)
		tmp2->set_clip_rect(tmp3);
	}
	HX_STACK_LINE(419)
	::phoenix::Rectangle tmp2 = this->clip_rect = _val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(419)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_clip_rect,return )

Void Visual_obj::_size_change( Float _v){
{
		HX_STACK_FRAME("luxe.Visual","_size_change",0xe1a11405,"luxe.Visual._size_change","luxe/Visual.hx",425,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_v,"_v")
		HX_STACK_LINE(425)
		::phoenix::Vector tmp = this->size;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(425)
		this->set_size(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,_size_change,(void))

Void Visual_obj::init( ){
{
		HX_STACK_FRAME("luxe.Visual","init",0x78020ea6,"luxe.Visual.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}



Visual_obj::Visual_obj()
{
}

void Visual_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Visual);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(geometry,"geometry");
	HX_MARK_MEMBER_NAME(locked,"locked");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(clip_rect,"clip_rect");
	HX_MARK_MEMBER_NAME(radians,"radians");
	HX_MARK_MEMBER_NAME(_rotation_euler,"_rotation_euler");
	HX_MARK_MEMBER_NAME(_rotation_quat,"_rotation_quat");
	HX_MARK_MEMBER_NAME(_has_custom_origin,"_has_custom_origin");
	HX_MARK_MEMBER_NAME(_creating_geometry,"_creating_geometry");
	HX_MARK_MEMBER_NAME(ignore_texture_on_geometry_change,"ignore_texture_on_geometry_change");
	::luxe::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Visual_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(geometry,"geometry");
	HX_VISIT_MEMBER_NAME(locked,"locked");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(clip_rect,"clip_rect");
	HX_VISIT_MEMBER_NAME(radians,"radians");
	HX_VISIT_MEMBER_NAME(_rotation_euler,"_rotation_euler");
	HX_VISIT_MEMBER_NAME(_rotation_quat,"_rotation_quat");
	HX_VISIT_MEMBER_NAME(_has_custom_origin,"_has_custom_origin");
	HX_VISIT_MEMBER_NAME(_creating_geometry,"_creating_geometry");
	HX_VISIT_MEMBER_NAME(ignore_texture_on_geometry_change,"ignore_texture_on_geometry_change");
	::luxe::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Visual_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locked") ) { return locked; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"radians") ) { return inCallProp == hx::paccAlways ? get_radians() : radians; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { return geometry; }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { return clip_rect; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rotation_z") ) { if (inCallProp == hx::paccAlways) return get_rotation_z(); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"set_locked") ) { return set_locked_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_radians") ) { return set_radians_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radians") ) { return get_radians_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_geometry") ) { return set_geometry_dyn(); }
		if (HX_FIELD_EQ(inName,"_size_change") ) { return _size_change_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_clip_rect") ) { return set_clip_rect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rotation_quat") ) { return _rotation_quat; }
		if (HX_FIELD_EQ(inName,"get_rotation_z") ) { return get_rotation_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation_z") ) { return set_rotation_z_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rotation_euler") ) { return _rotation_euler; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_create_geometry") ) { return _create_geometry_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_has_custom_origin") ) { return _has_custom_origin; }
		if (HX_FIELD_EQ(inName,"_creating_geometry") ) { return _creating_geometry; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"on_geometry_created") ) { return on_geometry_created_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"set_parent_from_transform") ) { return set_parent_from_transform_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"set_rotation_from_transform") ) { return set_rotation_from_transform_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"ignore_texture_on_geometry_change") ) { return ignore_texture_on_geometry_change; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Visual_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue);size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue);color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == hx::paccAlways) return set_depth(inValue);depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp == hx::paccAlways) return set_group(inValue);group=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locked") ) { if (inCallProp == hx::paccAlways) return set_locked(inValue);locked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == hx::paccAlways) return set_shader(inValue);shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == hx::paccAlways) return set_texture(inValue);texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radians") ) { if (inCallProp == hx::paccAlways) return set_radians(inValue);radians=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { if (inCallProp == hx::paccAlways) return set_geometry(inValue);geometry=inValue.Cast< ::phoenix::geometry::Geometry >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { if (inCallProp == hx::paccAlways) return set_clip_rect(inValue);clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rotation_z") ) { if (inCallProp == hx::paccAlways) return set_rotation_z(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rotation_quat") ) { _rotation_quat=inValue.Cast< ::phoenix::Quaternion >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rotation_euler") ) { _rotation_euler=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_has_custom_origin") ) { _has_custom_origin=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_creating_geometry") ) { _creating_geometry=inValue.Cast< bool >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"ignore_texture_on_geometry_change") ) { ignore_texture_on_geometry_change=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Visual_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Visual_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"));
	outFields->push(HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"));
	outFields->push(HX_HCSTRING("radians","\x72","\x46","\xf0","\x26"));
	outFields->push(HX_HCSTRING("rotation_z","\xf9","\xdb","\x7e","\xe4"));
	outFields->push(HX_HCSTRING("_rotation_euler","\x07","\x29","\xed","\x9a"));
	outFields->push(HX_HCSTRING("_rotation_quat","\xf9","\x46","\x4a","\x1d"));
	outFields->push(HX_HCSTRING("_has_custom_origin","\xd0","\xa9","\xf2","\x40"));
	outFields->push(HX_HCSTRING("_creating_geometry","\x79","\xe8","\x48","\x20"));
	outFields->push(HX_HCSTRING("ignore_texture_on_geometry_change","\xae","\x6f","\xe7","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Visual_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*::phoenix::geometry::Geometry*/ ,(int)offsetof(Visual_obj,geometry),HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2")},
	{hx::fsBool,(int)offsetof(Visual_obj,locked),HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Visual_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(Visual_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Visual_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsBool,(int)offsetof(Visual_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsFloat,(int)offsetof(Visual_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsInt,(int)offsetof(Visual_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Visual_obj,clip_rect),HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89")},
	{hx::fsFloat,(int)offsetof(Visual_obj,radians),HX_HCSTRING("radians","\x72","\x46","\xf0","\x26")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Visual_obj,_rotation_euler),HX_HCSTRING("_rotation_euler","\x07","\x29","\xed","\x9a")},
	{hx::fsObject /*::phoenix::Quaternion*/ ,(int)offsetof(Visual_obj,_rotation_quat),HX_HCSTRING("_rotation_quat","\xf9","\x46","\x4a","\x1d")},
	{hx::fsBool,(int)offsetof(Visual_obj,_has_custom_origin),HX_HCSTRING("_has_custom_origin","\xd0","\xa9","\xf2","\x40")},
	{hx::fsBool,(int)offsetof(Visual_obj,_creating_geometry),HX_HCSTRING("_creating_geometry","\x79","\xe8","\x48","\x20")},
	{hx::fsBool,(int)offsetof(Visual_obj,ignore_texture_on_geometry_change),HX_HCSTRING("ignore_texture_on_geometry_change","\xae","\x6f","\xe7","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"),
	HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"),
	HX_HCSTRING("radians","\x72","\x46","\xf0","\x26"),
	HX_HCSTRING("_rotation_euler","\x07","\x29","\xed","\x9a"),
	HX_HCSTRING("_rotation_quat","\xf9","\x46","\x4a","\x1d"),
	HX_HCSTRING("_has_custom_origin","\xd0","\xa9","\xf2","\x40"),
	HX_HCSTRING("_creating_geometry","\x79","\xe8","\x48","\x20"),
	HX_HCSTRING("_create_geometry","\x16","\x16","\x40","\x04"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("on_geometry_created","\x7b","\x6e","\x90","\xad"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("set_depth","\x66","\x39","\x24","\xfe"),
	HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_texture","\xfe","\x2f","\x48","\x2f"),
	HX_HCSTRING("set_shader","\x62","\xcd","\x25","\x11"),
	HX_HCSTRING("ignore_texture_on_geometry_change","\xae","\x6f","\xe7","\x0f"),
	HX_HCSTRING("set_geometry","\x2f","\xda","\xbb","\x9c"),
	HX_HCSTRING("set_parent_from_transform","\x2f","\x18","\x5c","\xed"),
	HX_HCSTRING("set_rotation_from_transform","\x5b","\xb5","\xfc","\x30"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("get_rotation_z","\x42","\x64","\x74","\x5a"),
	HX_HCSTRING("set_rotation_z","\xb6","\x4c","\x94","\x7a"),
	HX_HCSTRING("set_radians","\x95","\xad","\x57","\xb7"),
	HX_HCSTRING("get_radians","\x89","\xa6","\xea","\xac"),
	HX_HCSTRING("set_locked","\x47","\x13","\xcc","\x4d"),
	HX_HCSTRING("set_clip_rect","\x16","\xfe","\x0b","\x90"),
	HX_HCSTRING("_size_change","\x6f","\xba","\x5b","\x66"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Visual_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Visual_obj::__mClass,"__mClass");
};

#endif

hx::Class Visual_obj::__mClass;

void Visual_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Visual","\x98","\x34","\xea","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Visual_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Visual_obj >;
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
