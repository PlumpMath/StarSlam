#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
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
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
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
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_Core
#include <snow/core/native/Core.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLBO
#include <snow/modules/opengl/native/GLBO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
namespace phoenix{
namespace geometry{

Void Geometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.Geometry","new",0xf65473e1,"phoenix.geometry.Geometry.new","phoenix/geometry/Geometry.hx",36,0xdab136cf)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(87)
	this->dirty = false;
	HX_STACK_LINE(86)
	this->locked = false;
	HX_STACK_LINE(85)
	this->immediate = false;
	HX_STACK_LINE(84)
	this->visible = true;
	HX_STACK_LINE(81)
	this->dirty_clip = false;
	HX_STACK_LINE(80)
	this->dirty_depth = false;
	HX_STACK_LINE(79)
	this->dirty_group = false;
	HX_STACK_LINE(78)
	this->dirty_shader = false;
	HX_STACK_LINE(77)
	this->dirty_texture = false;
	HX_STACK_LINE(76)
	this->dirty_primitive_type = false;
	HX_STACK_LINE(74)
	this->shadow_clip = false;
	HX_STACK_LINE(73)
	this->shadow_depth = ((Float)0.0);
	HX_STACK_LINE(72)
	this->shadow_group = (int)0;
	HX_STACK_LINE(59)
	this->id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(58)
	this->uuid = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(57)
	this->dropped = false;
	HX_STACK_LINE(52)
	this->added = false;
	HX_STACK_LINE(45)
	this->submitted = false;
	HX_STACK_LINE(104)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	::String tmp1 = tmp->uniqueid(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	this->uuid = tmp1;
	HX_STACK_LINE(105)
	::String tmp2 = this->uuid;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	this->id = tmp2;
	HX_STACK_LINE(107)
	this->vertices = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(108)
	::phoenix::geometry::GeometryState tmp3 = ::phoenix::geometry::GeometryState_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	this->state = tmp3;
	HX_STACK_LINE(109)
	this->batchers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(112)
	::phoenix::Transform tmp4 = ::phoenix::Transform_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	this->transform = tmp4;
	HX_STACK_LINE(115)
	::phoenix::Vector tmp5 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(115)
	this->_final_vert_position = tmp5;
	HX_STACK_LINE(118)
	this->set_clip_rect(null());
	HX_STACK_LINE(119)
	this->set_clip(false);
	HX_STACK_LINE(122)
	bool _do_add = true;		HX_STACK_VAR(_do_add,"_do_add");
	HX_STACK_LINE(124)
	bool tmp6 = (options != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(124)
	if ((tmp6)){
		HX_STACK_LINE(126)
		::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			bool tmp8 = (options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(126)
			if ((tmp8)){
				HX_STACK_LINE(126)
				::String tmp9 = this->uuid;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(126)
				options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = tmp9;
			}
			HX_STACK_LINE(126)
			tmp7 = options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
		}
		HX_STACK_LINE(126)
		this->id = tmp7;
		HX_STACK_LINE(127)
		::phoenix::Color tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			bool tmp9 = (options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(127)
			if ((tmp9)){
				HX_STACK_LINE(127)
				::phoenix::Color tmp10 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(127)
				options->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = tmp10;
			}
			HX_STACK_LINE(127)
			tmp8 = options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
		}
		HX_STACK_LINE(127)
		this->set_color(tmp8);
		HX_STACK_LINE(128)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			bool tmp10 = (options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(128)
			if ((tmp10)){
				HX_STACK_LINE(128)
				options->__FieldRef(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")) = true;
			}
			HX_STACK_LINE(128)
			tmp9 = options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );
		}
		HX_STACK_LINE(128)
		this->set_visible(tmp9);
		HX_STACK_LINE(129)
		Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			bool tmp11 = (options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(129)
			if ((tmp11)){
				HX_STACK_LINE(129)
				options->__FieldRef(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf")) = false;
			}
			HX_STACK_LINE(129)
			tmp10 = options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic );
		}
		HX_STACK_LINE(129)
		this->immediate = tmp10;
		HX_STACK_LINE(130)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			bool tmp12 = (options->__Field(HX_HCSTRING("no_batcher_add","\x0b","\x25","\xc3","\x59"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(130)
			if ((tmp12)){
				HX_STACK_LINE(130)
				options->__FieldRef(HX_HCSTRING("no_batcher_add","\x0b","\x25","\xc3","\x59")) = true;
			}
			HX_STACK_LINE(130)
			tmp11 = options->__Field(HX_HCSTRING("no_batcher_add","\x0b","\x25","\xc3","\x59"), hx::paccDynamic );
		}
		HX_STACK_LINE(130)
		_do_add = tmp11;
		HX_STACK_LINE(132)
		::phoenix::geometry::GeometryState tmp12 = this->state;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(132)
		Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			bool tmp14 = (options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(132)
			if ((tmp14)){
				HX_STACK_LINE(132)
				::phoenix::geometry::GeometryState tmp15 = this->state;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(132)
				options->__FieldRef(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")) = tmp15->depth;
			}
			HX_STACK_LINE(132)
			tmp13 = options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );
		}
		HX_STACK_LINE(132)
		tmp12->set_depth(tmp13);
		HX_STACK_LINE(133)
		::phoenix::geometry::GeometryState tmp14 = this->state;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(133)
		Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			bool tmp16 = (options->__Field(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(133)
			if ((tmp16)){
				HX_STACK_LINE(133)
				::phoenix::geometry::GeometryState tmp17 = this->state;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(133)
				options->__FieldRef(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")) = tmp17->group;
			}
			HX_STACK_LINE(133)
			tmp15 = options->__Field(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"), hx::paccDynamic );
		}
		HX_STACK_LINE(133)
		tmp14->set_group(tmp15);
		HX_STACK_LINE(134)
		::phoenix::geometry::GeometryState tmp16 = this->state;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(134)
		::phoenix::Texture tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			bool tmp18 = (options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(134)
			if ((tmp18)){
				HX_STACK_LINE(134)
				::phoenix::geometry::GeometryState tmp19 = this->state;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(134)
				options->__FieldRef(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")) = tmp19->texture;
			}
			HX_STACK_LINE(134)
			tmp17 = options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic );
		}
		HX_STACK_LINE(134)
		tmp16->set_texture(tmp17);
		HX_STACK_LINE(135)
		::phoenix::geometry::GeometryState tmp18 = this->state;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(135)
		::phoenix::Rectangle tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			bool tmp20 = (options->__Field(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(135)
			if ((tmp20)){
				HX_STACK_LINE(135)
				::phoenix::geometry::GeometryState tmp21 = this->state;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(135)
				options->__FieldRef(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89")) = tmp21->clip_rect;
			}
			HX_STACK_LINE(135)
			tmp19 = options->__Field(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"), hx::paccDynamic );
		}
		HX_STACK_LINE(135)
		tmp18->set_clip_rect(tmp19);
		HX_STACK_LINE(136)
		::phoenix::geometry::GeometryState tmp20 = this->state;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(136)
		Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			bool tmp22 = (options->__Field(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(136)
			if ((tmp22)){
				HX_STACK_LINE(136)
				::phoenix::geometry::GeometryState tmp23 = this->state;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(136)
				options->__FieldRef(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")) = tmp23->primitive_type;
			}
			HX_STACK_LINE(136)
			tmp21 = options->__Field(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"), hx::paccDynamic );
		}
		HX_STACK_LINE(136)
		tmp20->set_primitive_type(tmp21);
		HX_STACK_LINE(137)
		::phoenix::geometry::GeometryState tmp22 = this->state;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(137)
		::phoenix::Shader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			bool tmp24 = (options->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(137)
			if ((tmp24)){
				HX_STACK_LINE(137)
				::phoenix::geometry::GeometryState tmp25 = this->state;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(137)
				options->__FieldRef(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")) = tmp25->shader;
			}
			HX_STACK_LINE(137)
			tmp23 = options->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
		}
		HX_STACK_LINE(137)
		tmp22->set_shader(tmp23);
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::phoenix::Vector tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				bool tmp25 = (options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(139)
				if ((tmp25)){
					HX_STACK_LINE(139)
					::phoenix::Transform tmp26 = this->transform;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(139)
					::phoenix::Vector tmp27 = tmp26->local->pos;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(139)
					options->__FieldRef(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")) = tmp27;
				}
				HX_STACK_LINE(139)
				tmp24 = options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );
			}
			HX_STACK_LINE(139)
			::phoenix::Vector value = tmp24;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				::phoenix::Transform tmp25 = this->transform;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(139)
				::phoenix::Spatial _this = tmp25->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(139)
				_this->pos = value;
				HX_STACK_LINE(139)
				bool tmp26 = (value != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(139)
				if ((tmp26)){
					HX_STACK_LINE(139)
					::phoenix::Vector tmp27 = _this->pos;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(139)
					Dynamic tmp28 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(139)
					::phoenix::Vector_obj::Listen(tmp27,tmp28);
					HX_STACK_LINE(139)
					{
						HX_STACK_LINE(139)
						bool tmp29 = (_this->pos_changed != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(139)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(139)
						if ((tmp29)){
							HX_STACK_LINE(139)
							bool tmp31 = _this->ignore_listeners;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(139)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(139)
							tmp30 = !(tmp32);
						}
						else{
							HX_STACK_LINE(139)
							tmp30 = false;
						}
						HX_STACK_LINE(139)
						if ((tmp30)){
							HX_STACK_LINE(139)
							::phoenix::Vector tmp31 = _this->pos;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(139)
							_this->pos_changed(tmp31);
						}
					}
				}
				HX_STACK_LINE(139)
				_this->pos;
			}
		}
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			::phoenix::Quaternion tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				bool tmp25 = (options->__Field(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(140)
				if ((tmp25)){
					HX_STACK_LINE(140)
					::phoenix::Transform tmp26 = this->transform;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(140)
					::phoenix::Quaternion tmp27 = tmp26->local->rotation;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(140)
					options->__FieldRef(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")) = tmp27;
				}
				HX_STACK_LINE(140)
				tmp24 = options->__Field(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"), hx::paccDynamic );
			}
			HX_STACK_LINE(140)
			::phoenix::Quaternion value = tmp24;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				::phoenix::Transform tmp25 = this->transform;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(140)
				::phoenix::Spatial _this = tmp25->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(140)
				_this->rotation = value;
				HX_STACK_LINE(140)
				bool tmp26 = (value != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(140)
				if ((tmp26)){
					HX_STACK_LINE(140)
					{
						HX_STACK_LINE(140)
						::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
						HX_STACK_LINE(140)
						Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(140)
						_q->listen_x = listener;
						HX_STACK_LINE(140)
						_q->listen_y = listener;
						HX_STACK_LINE(140)
						_q->listen_z = listener;
						HX_STACK_LINE(140)
						_q->listen_w = listener;
					}
					HX_STACK_LINE(140)
					{
						HX_STACK_LINE(140)
						bool tmp27 = (_this->rotation_changed != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(140)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(140)
						if ((tmp27)){
							HX_STACK_LINE(140)
							bool tmp29 = _this->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(140)
							bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(140)
							tmp28 = !(tmp30);
						}
						else{
							HX_STACK_LINE(140)
							tmp28 = false;
						}
						HX_STACK_LINE(140)
						if ((tmp28)){
							HX_STACK_LINE(140)
							::phoenix::Quaternion tmp29 = _this->rotation;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(140)
							_this->rotation_changed(tmp29);
						}
					}
				}
				HX_STACK_LINE(140)
				_this->rotation;
			}
		}
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			::phoenix::Vector tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				bool tmp25 = (options->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(141)
				if ((tmp25)){
					HX_STACK_LINE(141)
					::phoenix::Transform tmp26 = this->transform;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(141)
					::phoenix::Vector tmp27 = tmp26->local->scale;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(141)
					options->__FieldRef(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")) = tmp27;
				}
				HX_STACK_LINE(141)
				tmp24 = options->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );
			}
			HX_STACK_LINE(141)
			::phoenix::Vector value = tmp24;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				::phoenix::Transform tmp25 = this->transform;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(141)
				::phoenix::Spatial _this = tmp25->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(141)
				_this->scale = value;
				HX_STACK_LINE(141)
				bool tmp26 = (value != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(141)
				if ((tmp26)){
					HX_STACK_LINE(141)
					::phoenix::Vector tmp27 = _this->scale;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(141)
					Dynamic tmp28 = _this->_scale_change_dyn();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(141)
					::phoenix::Vector_obj::Listen(tmp27,tmp28);
					HX_STACK_LINE(141)
					{
						HX_STACK_LINE(141)
						bool tmp29 = (_this->scale_changed != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(141)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(141)
						if ((tmp29)){
							HX_STACK_LINE(141)
							bool tmp31 = _this->ignore_listeners;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(141)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(141)
							tmp30 = !(tmp32);
						}
						else{
							HX_STACK_LINE(141)
							tmp30 = false;
						}
						HX_STACK_LINE(141)
						if ((tmp30)){
							HX_STACK_LINE(141)
							::phoenix::Vector tmp31 = _this->scale;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(141)
							_this->scale_changed(tmp31);
						}
					}
				}
				HX_STACK_LINE(141)
				_this->scale;
			}
		}
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			::phoenix::Transform tmp24 = this->transform;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(142)
			::phoenix::Transform _this = tmp24;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(142)
			::phoenix::Vector tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				bool tmp26 = (options->__Field(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(142)
				if ((tmp26)){
					HX_STACK_LINE(142)
					::phoenix::Transform tmp27 = this->transform;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(142)
					options->__FieldRef(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b")) = tmp27->origin;
				}
				HX_STACK_LINE(142)
				tmp25 = options->__Field(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"), hx::paccDynamic );
			}
			HX_STACK_LINE(142)
			::phoenix::Vector o = tmp25;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				_this->dirty = true;
				HX_STACK_LINE(142)
				bool tmp26 = _this->dirty;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(142)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(142)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(142)
				if ((tmp27)){
					HX_STACK_LINE(142)
					bool tmp29 = _this->_setup;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(142)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(142)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(142)
					tmp28 = !(tmp31);
				}
				else{
					HX_STACK_LINE(142)
					tmp28 = false;
				}
				HX_STACK_LINE(142)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(142)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(142)
				if ((tmp29)){
					HX_STACK_LINE(142)
					tmp30 = (_this->_dirty_handlers != null());
				}
				else{
					HX_STACK_LINE(142)
					tmp30 = false;
				}
				HX_STACK_LINE(142)
				bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(142)
				if ((tmp30)){
					HX_STACK_LINE(142)
					int tmp32 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(142)
					int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(142)
					tmp31 = (tmp33 > (int)0);
				}
				else{
					HX_STACK_LINE(142)
					tmp31 = false;
				}
				HX_STACK_LINE(142)
				if ((tmp31)){
					HX_STACK_LINE(142)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(142)
					cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(142)
					while((true)){
						HX_STACK_LINE(142)
						bool tmp32 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(142)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(142)
						if ((tmp33)){
							HX_STACK_LINE(142)
							break;
						}
						HX_STACK_LINE(142)
						Dynamic tmp34 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(142)
						Dynamic _handler = tmp34;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(142)
						++(_g);
						HX_STACK_LINE(142)
						bool tmp35 = (_handler != null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(142)
						if ((tmp35)){
							HX_STACK_LINE(142)
							::phoenix::Transform tmp36 = _this;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(142)
							_handler(tmp36).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(142)
				_this->dirty;
			}
			HX_STACK_LINE(142)
			_this->origin = o;
			HX_STACK_LINE(142)
			bool tmp26 = (_this->_origin_handlers != null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(142)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(142)
			if ((tmp26)){
				HX_STACK_LINE(142)
				int tmp28 = _this->_origin_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(142)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(142)
				tmp27 = (tmp29 > (int)0);
			}
			else{
				HX_STACK_LINE(142)
				tmp27 = false;
			}
			HX_STACK_LINE(142)
			if ((tmp27)){
				HX_STACK_LINE(142)
				::phoenix::Vector _origin = _this->origin;		HX_STACK_VAR(_origin,"_origin");
				HX_STACK_LINE(142)
				{
					HX_STACK_LINE(142)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(142)
					cpp::ArrayBase _g1 = _this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(142)
					while((true)){
						HX_STACK_LINE(142)
						bool tmp28 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(142)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(142)
						if ((tmp29)){
							HX_STACK_LINE(142)
							break;
						}
						HX_STACK_LINE(142)
						Dynamic tmp30 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(142)
						Dynamic _handler = tmp30;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(142)
						++(_g);
						HX_STACK_LINE(142)
						bool tmp31 = (_handler != null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(142)
						if ((tmp31)){
							HX_STACK_LINE(142)
							::phoenix::Vector tmp32 = _origin;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(142)
							_handler(tmp32).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(142)
			_this->origin;
		}
	}
	else{
		HX_STACK_LINE(147)
		::phoenix::Color tmp7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		this->set_color(tmp7);
	}
	HX_STACK_LINE(151)
	(::phoenix::geometry::Geometry_obj::_sequence_key)++;
	HX_STACK_LINE(153)
	::phoenix::geometry::GeometryKey tmp7 = ::phoenix::geometry::GeometryKey_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(153)
	this->key = tmp7;
	HX_STACK_LINE(155)
	::String tmp8 = this->uuid;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(155)
	::phoenix::geometry::GeometryKey tmp9 = this->key;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(155)
	tmp9->uuid = tmp8;
	HX_STACK_LINE(156)
	::snow::core::native::Core tmp10 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(156)
	Float tmp11 = tmp10->timestamp();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(156)
	::phoenix::geometry::GeometryKey tmp12 = this->key;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(156)
	tmp12->timestamp = tmp11;
	HX_STACK_LINE(157)
	int tmp13 = ::phoenix::geometry::Geometry_obj::_sequence_key;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(157)
	::phoenix::geometry::GeometryKey tmp14 = this->key;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(157)
	tmp14->sequence = tmp13;
	HX_STACK_LINE(158)
	::phoenix::geometry::GeometryState tmp15 = this->state;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(158)
	::phoenix::geometry::GeometryKey tmp16 = this->key;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(158)
	tmp16->primitive_type = tmp15->primitive_type;
	HX_STACK_LINE(159)
	::phoenix::geometry::GeometryState tmp17 = this->state;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(159)
	::phoenix::geometry::GeometryKey tmp18 = this->key;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(159)
	tmp18->texture = tmp17->texture;
	HX_STACK_LINE(160)
	::phoenix::geometry::GeometryState tmp19 = this->state;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(160)
	::phoenix::geometry::GeometryKey tmp20 = this->key;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(160)
	tmp20->shader = tmp19->shader;
	HX_STACK_LINE(161)
	::phoenix::geometry::GeometryState tmp21 = this->state;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(161)
	::phoenix::geometry::GeometryKey tmp22 = this->key;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(161)
	tmp22->group = tmp21->group;
	HX_STACK_LINE(162)
	::phoenix::geometry::GeometryState tmp23 = this->state;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(162)
	::phoenix::geometry::GeometryKey tmp24 = this->key;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(162)
	tmp24->depth = tmp23->depth;
	HX_STACK_LINE(163)
	::phoenix::geometry::GeometryState tmp25 = this->state;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(163)
	::phoenix::geometry::GeometryKey tmp26 = this->key;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(163)
	tmp26->clip = tmp25->clip;
	HX_STACK_LINE(165)
	::String tmp27 = this->uuid;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(165)
	::phoenix::Transform tmp28 = this->transform;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(165)
	tmp28->id = tmp27;
	HX_STACK_LINE(166)
	::String tmp29 = this->id;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(166)
	::phoenix::Transform tmp30 = this->transform;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(166)
	tmp30->name = tmp29;
	HX_STACK_LINE(170)
	bool tmp31 = (options != null());		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(170)
	bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(170)
	bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(170)
	if ((tmp32)){
		HX_STACK_LINE(170)
		tmp33 = (options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) != null());
	}
	else{
		HX_STACK_LINE(170)
		tmp33 = false;
	}
	HX_STACK_LINE(170)
	bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(170)
	if ((tmp33)){
		HX_STACK_LINE(170)
		tmp34 = _do_add;
	}
	else{
		HX_STACK_LINE(170)
		tmp34 = false;
	}
	HX_STACK_LINE(170)
	if ((tmp34)){
		HX_STACK_LINE(171)
		options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),null());
	}
}
;
	return null();
}

//Geometry_obj::~Geometry_obj() { }

Dynamic Geometry_obj::__CreateEmpty() { return  new Geometry_obj; }
hx::ObjectPtr< Geometry_obj > Geometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< Geometry_obj > _result_ = new Geometry_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic Geometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Geometry_obj > _result_ = new Geometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Geometry_obj::key_string( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","key_string",0xdbf2f150,"phoenix.geometry.Geometry.key_string","phoenix/geometry/Geometry.hx",176,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	::phoenix::geometry::GeometryKey tmp = this->key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	Float tmp1 = tmp->timestamp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	::String tmp2 = (HX_HCSTRING("ts: ","\xe5","\x35","\x04","\x4d") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(179)
	::String tmp3 = (tmp2 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(179)
	::String tmp4 = (tmp3 + HX_HCSTRING("sequence: ","\x27","\x23","\x22","\xd5"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(180)
	::phoenix::geometry::GeometryKey tmp5 = this->key;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(180)
	int tmp6 = tmp5->sequence;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(179)
	::String tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(179)
	::String tmp8 = (tmp7 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(179)
	::String tmp9 = (tmp8 + HX_HCSTRING("primitive_type: ","\xb8","\xc3","\xde","\xd5"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(181)
	::phoenix::geometry::GeometryKey tmp10 = this->key;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(181)
	int tmp11 = tmp10->primitive_type;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(179)
	::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(179)
	::String tmp13 = (tmp12 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(179)
	::String tmp14 = (tmp13 + HX_HCSTRING("texture: ","\x41","\x28","\x49","\xaf"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(182)
	::phoenix::geometry::GeometryKey tmp15 = this->key;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(182)
	::phoenix::Texture tmp16 = tmp15->texture;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(182)
	bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(182)
	::String tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(182)
	if ((tmp17)){
		HX_STACK_LINE(182)
		tmp18 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
	}
	else{
		HX_STACK_LINE(182)
		::phoenix::geometry::GeometryKey tmp19 = this->key;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(182)
		tmp18 = tmp19->texture->id;
	}
	HX_STACK_LINE(179)
	::String tmp19 = (tmp14 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(179)
	::String tmp20 = (tmp19 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(179)
	::String tmp21 = (tmp20 + HX_HCSTRING("shader: ","\x0b","\xc5","\x2a","\x36"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(183)
	::phoenix::geometry::GeometryKey tmp22 = this->key;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(183)
	::phoenix::Shader tmp23 = tmp22->shader;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(183)
	bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(183)
	::String tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(183)
	if ((tmp24)){
		HX_STACK_LINE(183)
		tmp25 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
	}
	else{
		HX_STACK_LINE(183)
		::phoenix::geometry::GeometryKey tmp26 = this->key;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(183)
		tmp25 = tmp26->shader->id;
	}
	HX_STACK_LINE(179)
	::String tmp26 = (tmp21 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(179)
	::String tmp27 = (tmp26 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(179)
	::String tmp28 = (tmp27 + HX_HCSTRING("group: ","\xa5","\x73","\xf7","\x86"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(184)
	::phoenix::geometry::GeometryKey tmp29 = this->key;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(184)
	int tmp30 = tmp29->group;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(179)
	::String tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(179)
	::String tmp32 = (tmp31 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(179)
	::String tmp33 = (tmp32 + HX_HCSTRING("depth: ","\x69","\xaa","\x4a","\x6a"));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(185)
	::phoenix::geometry::GeometryKey tmp34 = this->key;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(185)
	Float tmp35 = tmp34->depth;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(179)
	::String tmp36 = (tmp33 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(179)
	::String tmp37 = (tmp36 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(179)
	::String tmp38 = (tmp37 + HX_HCSTRING("clip: ","\x76","\xf5","\x57","\x0a"));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(186)
	::phoenix::geometry::GeometryKey tmp39 = this->key;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(186)
	bool tmp40 = tmp39->clip;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(186)
	::String tmp41 = ::Std_obj::string(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(179)
	::String tmp42 = (tmp38 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(178)
	return tmp42;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,key_string,return )

Void Geometry_obj::refresh_key( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","refresh_key",0x4060be7c,"phoenix.geometry.Geometry.refresh_key","phoenix/geometry/Geometry.hx",190,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		::String tmp = this->uuid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		::phoenix::geometry::GeometryKey tmp1 = this->key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		tmp1->uuid = tmp;
		HX_STACK_LINE(195)
		::snow::core::native::Core tmp2 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		Float tmp3 = tmp2->timestamp();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		::phoenix::geometry::GeometryKey tmp4 = this->key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		tmp4->timestamp = tmp3;
		HX_STACK_LINE(196)
		int tmp5 = ::phoenix::geometry::Geometry_obj::_sequence_key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		::phoenix::geometry::GeometryKey tmp6 = this->key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(196)
		tmp6->sequence = tmp5;
		HX_STACK_LINE(197)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		::phoenix::geometry::GeometryKey tmp8 = this->key;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(197)
		tmp8->primitive_type = tmp7->primitive_type;
		HX_STACK_LINE(198)
		::phoenix::geometry::GeometryState tmp9 = this->state;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(198)
		::phoenix::geometry::GeometryKey tmp10 = this->key;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(198)
		tmp10->texture = tmp9->texture;
		HX_STACK_LINE(199)
		::phoenix::geometry::GeometryState tmp11 = this->state;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(199)
		::phoenix::geometry::GeometryKey tmp12 = this->key;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(199)
		tmp12->shader = tmp11->shader;
		HX_STACK_LINE(200)
		::phoenix::geometry::GeometryState tmp13 = this->state;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(200)
		::phoenix::geometry::GeometryKey tmp14 = this->key;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(200)
		tmp14->group = tmp13->group;
		HX_STACK_LINE(201)
		::phoenix::geometry::GeometryState tmp15 = this->state;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(201)
		::phoenix::geometry::GeometryKey tmp16 = this->key;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(201)
		tmp16->depth = tmp15->depth;
		HX_STACK_LINE(202)
		::phoenix::geometry::GeometryState tmp17 = this->state;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(202)
		::phoenix::geometry::GeometryKey tmp18 = this->key;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(202)
		tmp18->clip = tmp17->clip;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,refresh_key,(void))

Void Geometry_obj::str( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","str",0xf6584c32,"phoenix.geometry.Geometry.str","phoenix/geometry/Geometry.hx",206,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(207)
		::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		bool tmp1 = tmp->log;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		if ((tmp2)){
			HX_STACK_LINE(207)
			return null();
		}
		HX_STACK_LINE(208)
		::String tmp3 = this->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		::String tmp4 = (HX_HCSTRING("\t\tgeometry ; ","\x53","\xf8","\xa3","\x08") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(208)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Geometry.hx","\x2c","\x13","\x62","\x29"),208,HX_HCSTRING("phoenix.geometry.Geometry","\x6f","\xef","\x7a","\x64"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(208)
		::haxe::Log_obj::trace(tmp4,tmp5);
		HX_STACK_LINE(209)
		::phoenix::geometry::GeometryState tmp6 = this->state;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(209)
		tmp6->log = true;
		HX_STACK_LINE(210)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(210)
		tmp7->str();
		HX_STACK_LINE(211)
		::phoenix::geometry::GeometryState tmp8 = this->state;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(211)
		tmp8->log = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,str,(void))

Void Geometry_obj::drop( Dynamic __o_remove){
Dynamic remove = __o_remove.Default(true);
	HX_STACK_FRAME("phoenix.geometry.Geometry","drop",0x8cfea58e,"phoenix.geometry.Geometry.drop","phoenix/geometry/Geometry.hx",214,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(remove,"remove")
{
		HX_STACK_LINE(216)
		Dynamic tmp = remove;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		if ((tmp)){
			HX_STACK_LINE(216)
			tmp1 = this->added;
		}
		else{
			HX_STACK_LINE(216)
			tmp1 = false;
		}
		HX_STACK_LINE(216)
		if ((tmp1)){
			HX_STACK_LINE(218)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(218)
			Array< ::Dynamic > _g1 = this->batchers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(218)
			while((true)){
				HX_STACK_LINE(218)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(218)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(218)
				if ((tmp3)){
					HX_STACK_LINE(218)
					break;
				}
				HX_STACK_LINE(218)
				::phoenix::Batcher tmp4 = _g1->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(218)
				::phoenix::Batcher b = tmp4;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(218)
				++(_g);
				HX_STACK_LINE(219)
				b->remove(hx::ObjectPtr<OBJ_>(this),true);
			}
		}
		HX_STACK_LINE(224)
		::phoenix::Transform tmp2 = this->transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(224)
		if ((tmp3)){
			HX_STACK_LINE(225)
			::phoenix::Transform tmp4 = this->transform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(225)
			tmp4->destroy();
			HX_STACK_LINE(226)
			this->transform = null();
		}
		HX_STACK_LINE(229)
		this->dropped = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,drop,(void))

Void Geometry_obj::add( ::phoenix::geometry::Vertex v){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","add",0xf64a95a2,"phoenix.geometry.Geometry.add","phoenix/geometry/Geometry.hx",233,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(235)
		::phoenix::geometry::Vertex tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		this->vertices->push(tmp);
		HX_STACK_LINE(237)
		int tmp1 = this->vertices->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		::phoenix::Renderer tmp2 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		int tmp3 = tmp2->batcher->max_verts;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(237)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(237)
		if ((tmp4)){
			HX_STACK_LINE(238)
			::String tmp5 = this->id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(238)
			::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(238)
			::String tmp7 = (tmp6 + HX_HCSTRING(" / Currently a single geometry cannot exceed the maximum vert count of ","\xe7","\x77","\x43","\xfa"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(238)
			::phoenix::Renderer tmp8 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(238)
			int tmp9 = tmp8->batcher->max_verts;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(238)
			::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(238)
			HX_STACK_DO_THROW(tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,add,(void))

Void Geometry_obj::remove( ::phoenix::geometry::Vertex v){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","remove",0xe1945f63,"phoenix.geometry.Geometry.remove","phoenix/geometry/Geometry.hx",243,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(245)
		::phoenix::geometry::Vertex tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		this->vertices->remove(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,remove,(void))

Void Geometry_obj::batch( int vert_index,int tcoord_index,int color_index,int normal_index,::snow::api::buffers::ArrayBufferView vertlist,::snow::api::buffers::ArrayBufferView tcoordlist,::snow::api::buffers::ArrayBufferView colorlist,::snow::api::buffers::ArrayBufferView normallist){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","batch",0x9fcc2d7b,"phoenix.geometry.Geometry.batch","phoenix/geometry/Geometry.hx",253,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vert_index,"vert_index")
		HX_STACK_ARG(tcoord_index,"tcoord_index")
		HX_STACK_ARG(color_index,"color_index")
		HX_STACK_ARG(normal_index,"normal_index")
		HX_STACK_ARG(vertlist,"vertlist")
		HX_STACK_ARG(tcoordlist,"tcoordlist")
		HX_STACK_ARG(colorlist,"colorlist")
		HX_STACK_ARG(normallist,"normallist")
		HX_STACK_LINE(253)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(253)
		Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(253)
		while((true)){
			HX_STACK_LINE(253)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(253)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(253)
			if ((tmp1)){
				HX_STACK_LINE(253)
				break;
			}
			HX_STACK_LINE(253)
			::phoenix::geometry::Vertex tmp2 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(253)
			::phoenix::geometry::Vertex v = tmp2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(253)
			++(_g);
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(256)
				::phoenix::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(256)
				Float tmp4 = v->pos->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(256)
				Float _x = tmp4;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(256)
				Float tmp5 = v->pos->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(256)
				Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(256)
				Float tmp6 = v->pos->z;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(256)
				Float _z = tmp6;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(256)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(256)
				_this->ignore_listeners = true;
				HX_STACK_LINE(256)
				{
					HX_STACK_LINE(256)
					_this->x = _x;
					HX_STACK_LINE(256)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(256)
					if ((tmp7)){
						HX_STACK_LINE(256)
						_this->x;
					}
					else{
						HX_STACK_LINE(256)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(256)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(256)
						if ((tmp8)){
							HX_STACK_LINE(256)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(256)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(256)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(256)
							tmp9 = false;
						}
						HX_STACK_LINE(256)
						if ((tmp9)){
							HX_STACK_LINE(256)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(256)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(256)
						_this->x;
					}
				}
				HX_STACK_LINE(256)
				{
					HX_STACK_LINE(256)
					_this->y = _y;
					HX_STACK_LINE(256)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(256)
					if ((tmp7)){
						HX_STACK_LINE(256)
						_this->y;
					}
					else{
						HX_STACK_LINE(256)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(256)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(256)
						if ((tmp8)){
							HX_STACK_LINE(256)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(256)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(256)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(256)
							tmp9 = false;
						}
						HX_STACK_LINE(256)
						if ((tmp9)){
							HX_STACK_LINE(256)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(256)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(256)
						_this->y;
					}
				}
				HX_STACK_LINE(256)
				{
					HX_STACK_LINE(256)
					_this->z = _z;
					HX_STACK_LINE(256)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(256)
					if ((tmp7)){
						HX_STACK_LINE(256)
						_this->z;
					}
					else{
						HX_STACK_LINE(256)
						bool tmp8 = (_this->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(256)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(256)
						if ((tmp8)){
							HX_STACK_LINE(256)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(256)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(256)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(256)
							tmp9 = false;
						}
						HX_STACK_LINE(256)
						if ((tmp9)){
							HX_STACK_LINE(256)
							Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(256)
							_this->listen_z(tmp10);
						}
						HX_STACK_LINE(256)
						_this->z;
					}
				}
				HX_STACK_LINE(256)
				Float tmp7 = v->pos->w;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(256)
				_this->w = tmp7;
				HX_STACK_LINE(256)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(256)
				bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(256)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(256)
				if ((tmp8)){
					HX_STACK_LINE(256)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(256)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(256)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(256)
					tmp9 = false;
				}
				HX_STACK_LINE(256)
				if ((tmp9)){
					HX_STACK_LINE(256)
					Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(256)
					_this->listen_x(tmp10);
				}
				HX_STACK_LINE(256)
				bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(256)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(256)
				if ((tmp10)){
					HX_STACK_LINE(256)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(256)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(256)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(256)
					tmp11 = false;
				}
				HX_STACK_LINE(256)
				if ((tmp11)){
					HX_STACK_LINE(256)
					Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(256)
					_this->listen_y(tmp12);
				}
				HX_STACK_LINE(256)
				bool tmp12 = (_this->listen_z != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(256)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(256)
				if ((tmp12)){
					HX_STACK_LINE(256)
					bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(256)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(256)
					tmp13 = !(tmp15);
				}
				else{
					HX_STACK_LINE(256)
					tmp13 = false;
				}
				HX_STACK_LINE(256)
				if ((tmp13)){
					HX_STACK_LINE(256)
					Float tmp14 = _this->z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(256)
					_this->listen_z(tmp14);
				}
				HX_STACK_LINE(256)
				_this;
			}
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(258)
				::phoenix::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(258)
				::phoenix::Matrix tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					::phoenix::Spatial tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						::phoenix::Transform tmp6 = this->transform;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(258)
						::phoenix::Transform _this1 = tmp6;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(258)
						bool tmp7 = _this1->_destroying;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(258)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(258)
						if ((tmp8)){
							HX_STACK_LINE(258)
							bool tmp9 = (_this1->parent != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(258)
							if ((tmp9)){
								HX_STACK_LINE(258)
								bool tmp10 = _this1->parent->dirty;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(258)
								if ((tmp10)){
									HX_STACK_LINE(258)
									::phoenix::Transform _this2 = _this1->parent;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(258)
									bool tmp11 = _this2->dirty;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(258)
									bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(258)
									if ((tmp12)){
										HX_STACK_LINE(258)
										Dynamic();
									}
									else{
										HX_STACK_LINE(258)
										_this2->_cleaning = true;
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Matrix _this3 = _this2->_pos_matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(258)
												e[(int)0] = (int)1;
												HX_STACK_LINE(258)
												e[(int)4] = (int)0;
												HX_STACK_LINE(258)
												e[(int)8] = (int)0;
												HX_STACK_LINE(258)
												::phoenix::Vector tmp13 = _this2->local->pos;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(258)
												Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(258)
												e[(int)12] = tmp14;
												HX_STACK_LINE(258)
												e[(int)1] = (int)0;
												HX_STACK_LINE(258)
												e[(int)5] = (int)1;
												HX_STACK_LINE(258)
												e[(int)9] = (int)0;
												HX_STACK_LINE(258)
												::phoenix::Vector tmp15 = _this2->local->pos;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(258)
												Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(258)
												e[(int)13] = tmp16;
												HX_STACK_LINE(258)
												e[(int)2] = (int)0;
												HX_STACK_LINE(258)
												e[(int)6] = (int)0;
												HX_STACK_LINE(258)
												e[(int)10] = (int)1;
												HX_STACK_LINE(258)
												::phoenix::Vector tmp17 = _this2->local->pos;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(258)
												Float tmp18 = tmp17->z;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(258)
												e[(int)14] = tmp18;
												HX_STACK_LINE(258)
												e[(int)3] = (int)0;
												HX_STACK_LINE(258)
												e[(int)7] = (int)0;
												HX_STACK_LINE(258)
												e[(int)11] = (int)0;
												HX_STACK_LINE(258)
												e[(int)15] = (int)1;
												HX_STACK_LINE(258)
												_this3;
											}
											HX_STACK_LINE(258)
											_this3;
										}
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Matrix _this3 = _this2->_rotation_matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(258)
											::phoenix::Quaternion tmp13 = _this2->local->rotation;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(258)
											::phoenix::Quaternion q = tmp13;		HX_STACK_VAR(q,"q");
											HX_STACK_LINE(258)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(258)
											Float tmp14 = (q->x + q->x);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(258)
											Float x2 = tmp14;		HX_STACK_VAR(x2,"x2");
											HX_STACK_LINE(258)
											Float tmp15 = (q->y + q->y);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(258)
											Float y2 = tmp15;		HX_STACK_VAR(y2,"y2");
											HX_STACK_LINE(258)
											Float tmp16 = (q->z + q->z);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(258)
											Float z2 = tmp16;		HX_STACK_VAR(z2,"z2");
											HX_STACK_LINE(258)
											Float tmp17 = (q->x * x2);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(258)
											Float xx = tmp17;		HX_STACK_VAR(xx,"xx");
											HX_STACK_LINE(258)
											Float tmp18 = (q->x * y2);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(258)
											Float xy = tmp18;		HX_STACK_VAR(xy,"xy");
											HX_STACK_LINE(258)
											Float tmp19 = (q->x * z2);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(258)
											Float xz = tmp19;		HX_STACK_VAR(xz,"xz");
											HX_STACK_LINE(258)
											Float tmp20 = (q->y * y2);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(258)
											Float yy = tmp20;		HX_STACK_VAR(yy,"yy");
											HX_STACK_LINE(258)
											Float tmp21 = (q->y * z2);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(258)
											Float yz = tmp21;		HX_STACK_VAR(yz,"yz");
											HX_STACK_LINE(258)
											Float tmp22 = (q->z * z2);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(258)
											Float zz = tmp22;		HX_STACK_VAR(zz,"zz");
											HX_STACK_LINE(258)
											Float tmp23 = (q->w * x2);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(258)
											Float wx = tmp23;		HX_STACK_VAR(wx,"wx");
											HX_STACK_LINE(258)
											Float tmp24 = (q->w * y2);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(258)
											Float wy = tmp24;		HX_STACK_VAR(wy,"wy");
											HX_STACK_LINE(258)
											Float tmp25 = (q->w * z2);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(258)
											Float wz = tmp25;		HX_STACK_VAR(wz,"wz");
											HX_STACK_LINE(258)
											Float tmp26 = (yy + zz);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(258)
											Float tmp27 = ((int)1 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(258)
											te[(int)0] = tmp27;
											HX_STACK_LINE(258)
											Float tmp28 = (xy - wz);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(258)
											te[(int)4] = tmp28;
											HX_STACK_LINE(258)
											Float tmp29 = (xz + wy);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(258)
											te[(int)8] = tmp29;
											HX_STACK_LINE(258)
											Float tmp30 = (xy + wz);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(258)
											te[(int)1] = tmp30;
											HX_STACK_LINE(258)
											Float tmp31 = (xx + zz);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(258)
											Float tmp32 = ((int)1 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(258)
											te[(int)5] = tmp32;
											HX_STACK_LINE(258)
											Float tmp33 = (yz - wx);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(258)
											te[(int)9] = tmp33;
											HX_STACK_LINE(258)
											Float tmp34 = (xz - wy);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(258)
											te[(int)2] = tmp34;
											HX_STACK_LINE(258)
											Float tmp35 = (yz + wx);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(258)
											te[(int)6] = tmp35;
											HX_STACK_LINE(258)
											Float tmp36 = (xx + yy);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(258)
											Float tmp37 = ((int)1 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(258)
											te[(int)10] = tmp37;
											HX_STACK_LINE(258)
											te[(int)3] = (int)0;
											HX_STACK_LINE(258)
											te[(int)7] = (int)0;
											HX_STACK_LINE(258)
											te[(int)11] = (int)0;
											HX_STACK_LINE(258)
											te[(int)12] = (int)0;
											HX_STACK_LINE(258)
											te[(int)13] = (int)0;
											HX_STACK_LINE(258)
											te[(int)14] = (int)0;
											HX_STACK_LINE(258)
											te[(int)15] = (int)1;
											HX_STACK_LINE(258)
											_this3;
										}
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Matrix _this3 = _this2->_origin_undo_matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(258)
												e[(int)0] = (int)1;
												HX_STACK_LINE(258)
												e[(int)4] = (int)0;
												HX_STACK_LINE(258)
												e[(int)8] = (int)0;
												HX_STACK_LINE(258)
												Float tmp13 = _this2->origin->x;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(258)
												Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(258)
												e[(int)12] = tmp14;
												HX_STACK_LINE(258)
												e[(int)1] = (int)0;
												HX_STACK_LINE(258)
												e[(int)5] = (int)1;
												HX_STACK_LINE(258)
												e[(int)9] = (int)0;
												HX_STACK_LINE(258)
												Float tmp15 = _this2->origin->y;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(258)
												Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(258)
												e[(int)13] = tmp16;
												HX_STACK_LINE(258)
												e[(int)2] = (int)0;
												HX_STACK_LINE(258)
												e[(int)6] = (int)0;
												HX_STACK_LINE(258)
												e[(int)10] = (int)1;
												HX_STACK_LINE(258)
												Float tmp17 = _this2->origin->z;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(258)
												Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(258)
												e[(int)14] = tmp18;
												HX_STACK_LINE(258)
												e[(int)3] = (int)0;
												HX_STACK_LINE(258)
												e[(int)7] = (int)0;
												HX_STACK_LINE(258)
												e[(int)11] = (int)0;
												HX_STACK_LINE(258)
												e[(int)15] = (int)1;
												HX_STACK_LINE(258)
												_this3;
											}
											HX_STACK_LINE(258)
											_this3;
										}
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Matrix tmp13 = _this2->local->matrix;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(258)
											::phoenix::Matrix _this3 = tmp13;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(258)
												e[(int)0] = (int)1;
												HX_STACK_LINE(258)
												e[(int)4] = (int)0;
												HX_STACK_LINE(258)
												e[(int)8] = (int)0;
												HX_STACK_LINE(258)
												Float tmp14 = _this2->origin->x;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(258)
												e[(int)12] = tmp14;
												HX_STACK_LINE(258)
												e[(int)1] = (int)0;
												HX_STACK_LINE(258)
												e[(int)5] = (int)1;
												HX_STACK_LINE(258)
												e[(int)9] = (int)0;
												HX_STACK_LINE(258)
												Float tmp15 = _this2->origin->y;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(258)
												e[(int)13] = tmp15;
												HX_STACK_LINE(258)
												e[(int)2] = (int)0;
												HX_STACK_LINE(258)
												e[(int)6] = (int)0;
												HX_STACK_LINE(258)
												e[(int)10] = (int)1;
												HX_STACK_LINE(258)
												Float tmp16 = _this2->origin->z;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(258)
												e[(int)14] = tmp16;
												HX_STACK_LINE(258)
												e[(int)3] = (int)0;
												HX_STACK_LINE(258)
												e[(int)7] = (int)0;
												HX_STACK_LINE(258)
												e[(int)11] = (int)0;
												HX_STACK_LINE(258)
												e[(int)15] = (int)1;
												HX_STACK_LINE(258)
												_this3;
											}
											HX_STACK_LINE(258)
											_this3;
										}
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Matrix tmp13 = _this2->local->matrix;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(258)
											::phoenix::Matrix _this3 = tmp13;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(258)
												Array< Float > be = _this2->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(258)
												Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(258)
												Float tmp14 = ae->__get((int)0);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(258)
												Float a11 = tmp14;		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(258)
												Float tmp15 = ae->__get((int)4);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(258)
												Float a12 = tmp15;		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(258)
												Float tmp16 = ae->__get((int)8);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(258)
												Float a13 = tmp16;		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(258)
												Float tmp17 = ae->__get((int)12);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(258)
												Float a14 = tmp17;		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(258)
												Float tmp18 = ae->__get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(258)
												Float a21 = tmp18;		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(258)
												Float tmp19 = ae->__get((int)5);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(258)
												Float a22 = tmp19;		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(258)
												Float tmp20 = ae->__get((int)9);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(258)
												Float a23 = tmp20;		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(258)
												Float tmp21 = ae->__get((int)13);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(258)
												Float a24 = tmp21;		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(258)
												Float tmp22 = ae->__get((int)2);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(258)
												Float a31 = tmp22;		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(258)
												Float tmp23 = ae->__get((int)6);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(258)
												Float a32 = tmp23;		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(258)
												Float tmp24 = ae->__get((int)10);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(258)
												Float a33 = tmp24;		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(258)
												Float tmp25 = ae->__get((int)14);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(258)
												Float a34 = tmp25;		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(258)
												Float tmp26 = ae->__get((int)3);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(258)
												Float a41 = tmp26;		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(258)
												Float tmp27 = ae->__get((int)7);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(258)
												Float a42 = tmp27;		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(258)
												Float tmp28 = ae->__get((int)11);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(258)
												Float a43 = tmp28;		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(258)
												Float tmp29 = ae->__get((int)15);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(258)
												Float a44 = tmp29;		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(258)
												Float tmp30 = be->__get((int)0);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(258)
												Float b11 = tmp30;		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(258)
												Float tmp31 = be->__get((int)4);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(258)
												Float b12 = tmp31;		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(258)
												Float tmp32 = be->__get((int)8);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(258)
												Float b13 = tmp32;		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(258)
												Float tmp33 = be->__get((int)12);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(258)
												Float b14 = tmp33;		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(258)
												Float tmp34 = be->__get((int)1);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(258)
												Float b21 = tmp34;		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(258)
												Float tmp35 = be->__get((int)5);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(258)
												Float b22 = tmp35;		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(258)
												Float tmp36 = be->__get((int)9);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(258)
												Float b23 = tmp36;		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(258)
												Float tmp37 = be->__get((int)13);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(258)
												Float b24 = tmp37;		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(258)
												Float tmp38 = be->__get((int)2);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(258)
												Float b31 = tmp38;		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(258)
												Float tmp39 = be->__get((int)6);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(258)
												Float b32 = tmp39;		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(258)
												Float tmp40 = be->__get((int)10);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(258)
												Float b33 = tmp40;		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(258)
												Float tmp41 = be->__get((int)14);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(258)
												Float b34 = tmp41;		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(258)
												Float tmp42 = be->__get((int)3);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(258)
												Float b41 = tmp42;		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(258)
												Float tmp43 = be->__get((int)7);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(258)
												Float b42 = tmp43;		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(258)
												Float tmp44 = be->__get((int)11);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(258)
												Float b43 = tmp44;		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(258)
												Float tmp45 = be->__get((int)15);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(258)
												Float b44 = tmp45;		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(258)
												Float tmp46 = (a11 * b11);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(258)
												Float tmp47 = (a12 * b21);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(258)
												Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(258)
												Float tmp49 = (a13 * b31);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(258)
												Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(258)
												Float tmp51 = (a14 * b41);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(258)
												Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(258)
												te[(int)0] = tmp52;
												HX_STACK_LINE(258)
												Float tmp53 = (a11 * b12);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(258)
												Float tmp54 = (a12 * b22);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(258)
												Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(258)
												Float tmp56 = (a13 * b32);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(258)
												Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(258)
												Float tmp58 = (a14 * b42);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(258)
												Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(258)
												te[(int)4] = tmp59;
												HX_STACK_LINE(258)
												Float tmp60 = (a11 * b13);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(258)
												Float tmp61 = (a12 * b23);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(258)
												Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(258)
												Float tmp63 = (a13 * b33);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(258)
												Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(258)
												Float tmp65 = (a14 * b43);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(258)
												Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(258)
												te[(int)8] = tmp66;
												HX_STACK_LINE(258)
												Float tmp67 = (a11 * b14);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(258)
												Float tmp68 = (a12 * b24);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(258)
												Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(258)
												Float tmp70 = (a13 * b34);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(258)
												Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(258)
												Float tmp72 = (a14 * b44);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(258)
												Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(258)
												te[(int)12] = tmp73;
												HX_STACK_LINE(258)
												Float tmp74 = (a21 * b11);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(258)
												Float tmp75 = (a22 * b21);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(258)
												Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(258)
												Float tmp77 = (a23 * b31);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(258)
												Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(258)
												Float tmp79 = (a24 * b41);		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(258)
												Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(258)
												te[(int)1] = tmp80;
												HX_STACK_LINE(258)
												Float tmp81 = (a21 * b12);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(258)
												Float tmp82 = (a22 * b22);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(258)
												Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(258)
												Float tmp84 = (a23 * b32);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(258)
												Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(258)
												Float tmp86 = (a24 * b42);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(258)
												Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(258)
												te[(int)5] = tmp87;
												HX_STACK_LINE(258)
												Float tmp88 = (a21 * b13);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(258)
												Float tmp89 = (a22 * b23);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(258)
												Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(258)
												Float tmp91 = (a23 * b33);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(258)
												Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(258)
												Float tmp93 = (a24 * b43);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(258)
												Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(258)
												te[(int)9] = tmp94;
												HX_STACK_LINE(258)
												Float tmp95 = (a21 * b14);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(258)
												Float tmp96 = (a22 * b24);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(258)
												Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(258)
												Float tmp98 = (a23 * b34);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(258)
												Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(258)
												Float tmp100 = (a24 * b44);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(258)
												Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(258)
												te[(int)13] = tmp101;
												HX_STACK_LINE(258)
												Float tmp102 = (a31 * b11);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(258)
												Float tmp103 = (a32 * b21);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(258)
												Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(258)
												Float tmp105 = (a33 * b31);		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(258)
												Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(258)
												Float tmp107 = (a34 * b41);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(258)
												Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(258)
												te[(int)2] = tmp108;
												HX_STACK_LINE(258)
												Float tmp109 = (a31 * b12);		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(258)
												Float tmp110 = (a32 * b22);		HX_STACK_VAR(tmp110,"tmp110");
												HX_STACK_LINE(258)
												Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
												HX_STACK_LINE(258)
												Float tmp112 = (a33 * b32);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(258)
												Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
												HX_STACK_LINE(258)
												Float tmp114 = (a34 * b42);		HX_STACK_VAR(tmp114,"tmp114");
												HX_STACK_LINE(258)
												Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
												HX_STACK_LINE(258)
												te[(int)6] = tmp115;
												HX_STACK_LINE(258)
												Float tmp116 = (a31 * b13);		HX_STACK_VAR(tmp116,"tmp116");
												HX_STACK_LINE(258)
												Float tmp117 = (a32 * b23);		HX_STACK_VAR(tmp117,"tmp117");
												HX_STACK_LINE(258)
												Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
												HX_STACK_LINE(258)
												Float tmp119 = (a33 * b33);		HX_STACK_VAR(tmp119,"tmp119");
												HX_STACK_LINE(258)
												Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
												HX_STACK_LINE(258)
												Float tmp121 = (a34 * b43);		HX_STACK_VAR(tmp121,"tmp121");
												HX_STACK_LINE(258)
												Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
												HX_STACK_LINE(258)
												te[(int)10] = tmp122;
												HX_STACK_LINE(258)
												Float tmp123 = (a31 * b14);		HX_STACK_VAR(tmp123,"tmp123");
												HX_STACK_LINE(258)
												Float tmp124 = (a32 * b24);		HX_STACK_VAR(tmp124,"tmp124");
												HX_STACK_LINE(258)
												Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
												HX_STACK_LINE(258)
												Float tmp126 = (a33 * b34);		HX_STACK_VAR(tmp126,"tmp126");
												HX_STACK_LINE(258)
												Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
												HX_STACK_LINE(258)
												Float tmp128 = (a34 * b44);		HX_STACK_VAR(tmp128,"tmp128");
												HX_STACK_LINE(258)
												Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
												HX_STACK_LINE(258)
												te[(int)14] = tmp129;
												HX_STACK_LINE(258)
												Float tmp130 = (a41 * b11);		HX_STACK_VAR(tmp130,"tmp130");
												HX_STACK_LINE(258)
												Float tmp131 = (a42 * b21);		HX_STACK_VAR(tmp131,"tmp131");
												HX_STACK_LINE(258)
												Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
												HX_STACK_LINE(258)
												Float tmp133 = (a43 * b31);		HX_STACK_VAR(tmp133,"tmp133");
												HX_STACK_LINE(258)
												Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
												HX_STACK_LINE(258)
												Float tmp135 = (a44 * b41);		HX_STACK_VAR(tmp135,"tmp135");
												HX_STACK_LINE(258)
												Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
												HX_STACK_LINE(258)
												te[(int)3] = tmp136;
												HX_STACK_LINE(258)
												Float tmp137 = (a41 * b12);		HX_STACK_VAR(tmp137,"tmp137");
												HX_STACK_LINE(258)
												Float tmp138 = (a42 * b22);		HX_STACK_VAR(tmp138,"tmp138");
												HX_STACK_LINE(258)
												Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
												HX_STACK_LINE(258)
												Float tmp140 = (a43 * b32);		HX_STACK_VAR(tmp140,"tmp140");
												HX_STACK_LINE(258)
												Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
												HX_STACK_LINE(258)
												Float tmp142 = (a44 * b42);		HX_STACK_VAR(tmp142,"tmp142");
												HX_STACK_LINE(258)
												Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
												HX_STACK_LINE(258)
												te[(int)7] = tmp143;
												HX_STACK_LINE(258)
												Float tmp144 = (a41 * b13);		HX_STACK_VAR(tmp144,"tmp144");
												HX_STACK_LINE(258)
												Float tmp145 = (a42 * b23);		HX_STACK_VAR(tmp145,"tmp145");
												HX_STACK_LINE(258)
												Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
												HX_STACK_LINE(258)
												Float tmp147 = (a43 * b33);		HX_STACK_VAR(tmp147,"tmp147");
												HX_STACK_LINE(258)
												Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
												HX_STACK_LINE(258)
												Float tmp149 = (a44 * b43);		HX_STACK_VAR(tmp149,"tmp149");
												HX_STACK_LINE(258)
												Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
												HX_STACK_LINE(258)
												te[(int)11] = tmp150;
												HX_STACK_LINE(258)
												Float tmp151 = (a41 * b14);		HX_STACK_VAR(tmp151,"tmp151");
												HX_STACK_LINE(258)
												Float tmp152 = (a42 * b24);		HX_STACK_VAR(tmp152,"tmp152");
												HX_STACK_LINE(258)
												Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
												HX_STACK_LINE(258)
												Float tmp154 = (a43 * b34);		HX_STACK_VAR(tmp154,"tmp154");
												HX_STACK_LINE(258)
												Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
												HX_STACK_LINE(258)
												Float tmp156 = (a44 * b44);		HX_STACK_VAR(tmp156,"tmp156");
												HX_STACK_LINE(258)
												Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
												HX_STACK_LINE(258)
												te[(int)15] = tmp157;
												HX_STACK_LINE(258)
												_this3;
											}
										}
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Matrix tmp13 = _this2->local->matrix;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(258)
											::phoenix::Matrix _this3 = tmp13;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(258)
											::phoenix::Vector tmp14 = _this2->local->scale;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(258)
											::phoenix::Vector _v = tmp14;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(258)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(258)
											Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
											HX_STACK_LINE(258)
											Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
											HX_STACK_LINE(258)
											Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
											HX_STACK_LINE(258)
											Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(258)
											hx::MultEq(te[(int)0],tmp15);
											HX_STACK_LINE(258)
											Float tmp16 = _y;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(258)
											hx::MultEq(te[(int)4],tmp16);
											HX_STACK_LINE(258)
											Float tmp17 = _z;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(258)
											hx::MultEq(te[(int)8],tmp17);
											HX_STACK_LINE(258)
											Float tmp18 = _x;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(258)
											hx::MultEq(te[(int)1],tmp18);
											HX_STACK_LINE(258)
											Float tmp19 = _y;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(258)
											hx::MultEq(te[(int)5],tmp19);
											HX_STACK_LINE(258)
											Float tmp20 = _z;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(258)
											hx::MultEq(te[(int)9],tmp20);
											HX_STACK_LINE(258)
											Float tmp21 = _x;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(258)
											hx::MultEq(te[(int)2],tmp21);
											HX_STACK_LINE(258)
											Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(258)
											hx::MultEq(te[(int)6],tmp22);
											HX_STACK_LINE(258)
											Float tmp23 = _z;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(258)
											hx::MultEq(te[(int)10],tmp23);
											HX_STACK_LINE(258)
											Float tmp24 = _x;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(258)
											hx::MultEq(te[(int)3],tmp24);
											HX_STACK_LINE(258)
											Float tmp25 = _y;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(258)
											hx::MultEq(te[(int)7],tmp25);
											HX_STACK_LINE(258)
											Float tmp26 = _z;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(258)
											hx::MultEq(te[(int)11],tmp26);
											HX_STACK_LINE(258)
											_this3;
										}
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Matrix tmp13 = _this2->local->matrix;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(258)
											::phoenix::Matrix _this3 = tmp13;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(258)
											::phoenix::Vector tmp14 = _this2->local->pos;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(258)
											::phoenix::Vector _v = tmp14;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(258)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(258)
											Float tmp15 = _v->x;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(258)
											te[(int)12] = tmp15;
											HX_STACK_LINE(258)
											Float tmp16 = _v->y;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(258)
											te[(int)13] = tmp16;
											HX_STACK_LINE(258)
											Float tmp17 = _v->z;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(258)
											te[(int)14] = tmp17;
											HX_STACK_LINE(258)
											_this3;
										}
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Matrix tmp13 = _this2->local->matrix;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(258)
											::phoenix::Matrix _this3 = tmp13;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(258)
												Array< Float > be = _this2->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(258)
												Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(258)
												Float tmp14 = ae->__get((int)0);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(258)
												Float a11 = tmp14;		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(258)
												Float tmp15 = ae->__get((int)4);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(258)
												Float a12 = tmp15;		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(258)
												Float tmp16 = ae->__get((int)8);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(258)
												Float a13 = tmp16;		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(258)
												Float tmp17 = ae->__get((int)12);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(258)
												Float a14 = tmp17;		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(258)
												Float tmp18 = ae->__get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(258)
												Float a21 = tmp18;		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(258)
												Float tmp19 = ae->__get((int)5);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(258)
												Float a22 = tmp19;		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(258)
												Float tmp20 = ae->__get((int)9);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(258)
												Float a23 = tmp20;		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(258)
												Float tmp21 = ae->__get((int)13);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(258)
												Float a24 = tmp21;		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(258)
												Float tmp22 = ae->__get((int)2);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(258)
												Float a31 = tmp22;		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(258)
												Float tmp23 = ae->__get((int)6);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(258)
												Float a32 = tmp23;		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(258)
												Float tmp24 = ae->__get((int)10);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(258)
												Float a33 = tmp24;		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(258)
												Float tmp25 = ae->__get((int)14);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(258)
												Float a34 = tmp25;		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(258)
												Float tmp26 = ae->__get((int)3);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(258)
												Float a41 = tmp26;		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(258)
												Float tmp27 = ae->__get((int)7);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(258)
												Float a42 = tmp27;		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(258)
												Float tmp28 = ae->__get((int)11);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(258)
												Float a43 = tmp28;		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(258)
												Float tmp29 = ae->__get((int)15);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(258)
												Float a44 = tmp29;		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(258)
												Float tmp30 = be->__get((int)0);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(258)
												Float b11 = tmp30;		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(258)
												Float tmp31 = be->__get((int)4);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(258)
												Float b12 = tmp31;		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(258)
												Float tmp32 = be->__get((int)8);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(258)
												Float b13 = tmp32;		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(258)
												Float tmp33 = be->__get((int)12);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(258)
												Float b14 = tmp33;		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(258)
												Float tmp34 = be->__get((int)1);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(258)
												Float b21 = tmp34;		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(258)
												Float tmp35 = be->__get((int)5);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(258)
												Float b22 = tmp35;		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(258)
												Float tmp36 = be->__get((int)9);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(258)
												Float b23 = tmp36;		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(258)
												Float tmp37 = be->__get((int)13);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(258)
												Float b24 = tmp37;		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(258)
												Float tmp38 = be->__get((int)2);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(258)
												Float b31 = tmp38;		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(258)
												Float tmp39 = be->__get((int)6);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(258)
												Float b32 = tmp39;		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(258)
												Float tmp40 = be->__get((int)10);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(258)
												Float b33 = tmp40;		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(258)
												Float tmp41 = be->__get((int)14);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(258)
												Float b34 = tmp41;		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(258)
												Float tmp42 = be->__get((int)3);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(258)
												Float b41 = tmp42;		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(258)
												Float tmp43 = be->__get((int)7);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(258)
												Float b42 = tmp43;		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(258)
												Float tmp44 = be->__get((int)11);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(258)
												Float b43 = tmp44;		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(258)
												Float tmp45 = be->__get((int)15);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(258)
												Float b44 = tmp45;		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(258)
												Float tmp46 = (a11 * b11);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(258)
												Float tmp47 = (a12 * b21);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(258)
												Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(258)
												Float tmp49 = (a13 * b31);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(258)
												Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(258)
												Float tmp51 = (a14 * b41);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(258)
												Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(258)
												te[(int)0] = tmp52;
												HX_STACK_LINE(258)
												Float tmp53 = (a11 * b12);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(258)
												Float tmp54 = (a12 * b22);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(258)
												Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(258)
												Float tmp56 = (a13 * b32);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(258)
												Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(258)
												Float tmp58 = (a14 * b42);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(258)
												Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(258)
												te[(int)4] = tmp59;
												HX_STACK_LINE(258)
												Float tmp60 = (a11 * b13);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(258)
												Float tmp61 = (a12 * b23);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(258)
												Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(258)
												Float tmp63 = (a13 * b33);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(258)
												Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(258)
												Float tmp65 = (a14 * b43);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(258)
												Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(258)
												te[(int)8] = tmp66;
												HX_STACK_LINE(258)
												Float tmp67 = (a11 * b14);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(258)
												Float tmp68 = (a12 * b24);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(258)
												Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(258)
												Float tmp70 = (a13 * b34);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(258)
												Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(258)
												Float tmp72 = (a14 * b44);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(258)
												Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(258)
												te[(int)12] = tmp73;
												HX_STACK_LINE(258)
												Float tmp74 = (a21 * b11);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(258)
												Float tmp75 = (a22 * b21);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(258)
												Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(258)
												Float tmp77 = (a23 * b31);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(258)
												Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(258)
												Float tmp79 = (a24 * b41);		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(258)
												Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(258)
												te[(int)1] = tmp80;
												HX_STACK_LINE(258)
												Float tmp81 = (a21 * b12);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(258)
												Float tmp82 = (a22 * b22);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(258)
												Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(258)
												Float tmp84 = (a23 * b32);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(258)
												Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(258)
												Float tmp86 = (a24 * b42);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(258)
												Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(258)
												te[(int)5] = tmp87;
												HX_STACK_LINE(258)
												Float tmp88 = (a21 * b13);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(258)
												Float tmp89 = (a22 * b23);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(258)
												Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(258)
												Float tmp91 = (a23 * b33);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(258)
												Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(258)
												Float tmp93 = (a24 * b43);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(258)
												Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(258)
												te[(int)9] = tmp94;
												HX_STACK_LINE(258)
												Float tmp95 = (a21 * b14);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(258)
												Float tmp96 = (a22 * b24);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(258)
												Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(258)
												Float tmp98 = (a23 * b34);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(258)
												Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(258)
												Float tmp100 = (a24 * b44);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(258)
												Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(258)
												te[(int)13] = tmp101;
												HX_STACK_LINE(258)
												Float tmp102 = (a31 * b11);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(258)
												Float tmp103 = (a32 * b21);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(258)
												Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(258)
												Float tmp105 = (a33 * b31);		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(258)
												Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(258)
												Float tmp107 = (a34 * b41);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(258)
												Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(258)
												te[(int)2] = tmp108;
												HX_STACK_LINE(258)
												Float tmp109 = (a31 * b12);		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(258)
												Float tmp110 = (a32 * b22);		HX_STACK_VAR(tmp110,"tmp110");
												HX_STACK_LINE(258)
												Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
												HX_STACK_LINE(258)
												Float tmp112 = (a33 * b32);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(258)
												Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
												HX_STACK_LINE(258)
												Float tmp114 = (a34 * b42);		HX_STACK_VAR(tmp114,"tmp114");
												HX_STACK_LINE(258)
												Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
												HX_STACK_LINE(258)
												te[(int)6] = tmp115;
												HX_STACK_LINE(258)
												Float tmp116 = (a31 * b13);		HX_STACK_VAR(tmp116,"tmp116");
												HX_STACK_LINE(258)
												Float tmp117 = (a32 * b23);		HX_STACK_VAR(tmp117,"tmp117");
												HX_STACK_LINE(258)
												Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
												HX_STACK_LINE(258)
												Float tmp119 = (a33 * b33);		HX_STACK_VAR(tmp119,"tmp119");
												HX_STACK_LINE(258)
												Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
												HX_STACK_LINE(258)
												Float tmp121 = (a34 * b43);		HX_STACK_VAR(tmp121,"tmp121");
												HX_STACK_LINE(258)
												Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
												HX_STACK_LINE(258)
												te[(int)10] = tmp122;
												HX_STACK_LINE(258)
												Float tmp123 = (a31 * b14);		HX_STACK_VAR(tmp123,"tmp123");
												HX_STACK_LINE(258)
												Float tmp124 = (a32 * b24);		HX_STACK_VAR(tmp124,"tmp124");
												HX_STACK_LINE(258)
												Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
												HX_STACK_LINE(258)
												Float tmp126 = (a33 * b34);		HX_STACK_VAR(tmp126,"tmp126");
												HX_STACK_LINE(258)
												Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
												HX_STACK_LINE(258)
												Float tmp128 = (a34 * b44);		HX_STACK_VAR(tmp128,"tmp128");
												HX_STACK_LINE(258)
												Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
												HX_STACK_LINE(258)
												te[(int)14] = tmp129;
												HX_STACK_LINE(258)
												Float tmp130 = (a41 * b11);		HX_STACK_VAR(tmp130,"tmp130");
												HX_STACK_LINE(258)
												Float tmp131 = (a42 * b21);		HX_STACK_VAR(tmp131,"tmp131");
												HX_STACK_LINE(258)
												Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
												HX_STACK_LINE(258)
												Float tmp133 = (a43 * b31);		HX_STACK_VAR(tmp133,"tmp133");
												HX_STACK_LINE(258)
												Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
												HX_STACK_LINE(258)
												Float tmp135 = (a44 * b41);		HX_STACK_VAR(tmp135,"tmp135");
												HX_STACK_LINE(258)
												Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
												HX_STACK_LINE(258)
												te[(int)3] = tmp136;
												HX_STACK_LINE(258)
												Float tmp137 = (a41 * b12);		HX_STACK_VAR(tmp137,"tmp137");
												HX_STACK_LINE(258)
												Float tmp138 = (a42 * b22);		HX_STACK_VAR(tmp138,"tmp138");
												HX_STACK_LINE(258)
												Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
												HX_STACK_LINE(258)
												Float tmp140 = (a43 * b32);		HX_STACK_VAR(tmp140,"tmp140");
												HX_STACK_LINE(258)
												Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
												HX_STACK_LINE(258)
												Float tmp142 = (a44 * b42);		HX_STACK_VAR(tmp142,"tmp142");
												HX_STACK_LINE(258)
												Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
												HX_STACK_LINE(258)
												te[(int)7] = tmp143;
												HX_STACK_LINE(258)
												Float tmp144 = (a41 * b13);		HX_STACK_VAR(tmp144,"tmp144");
												HX_STACK_LINE(258)
												Float tmp145 = (a42 * b23);		HX_STACK_VAR(tmp145,"tmp145");
												HX_STACK_LINE(258)
												Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
												HX_STACK_LINE(258)
												Float tmp147 = (a43 * b33);		HX_STACK_VAR(tmp147,"tmp147");
												HX_STACK_LINE(258)
												Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
												HX_STACK_LINE(258)
												Float tmp149 = (a44 * b43);		HX_STACK_VAR(tmp149,"tmp149");
												HX_STACK_LINE(258)
												Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
												HX_STACK_LINE(258)
												te[(int)11] = tmp150;
												HX_STACK_LINE(258)
												Float tmp151 = (a41 * b14);		HX_STACK_VAR(tmp151,"tmp151");
												HX_STACK_LINE(258)
												Float tmp152 = (a42 * b24);		HX_STACK_VAR(tmp152,"tmp152");
												HX_STACK_LINE(258)
												Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
												HX_STACK_LINE(258)
												Float tmp154 = (a43 * b34);		HX_STACK_VAR(tmp154,"tmp154");
												HX_STACK_LINE(258)
												Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
												HX_STACK_LINE(258)
												Float tmp156 = (a44 * b44);		HX_STACK_VAR(tmp156,"tmp156");
												HX_STACK_LINE(258)
												Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
												HX_STACK_LINE(258)
												te[(int)15] = tmp157;
												HX_STACK_LINE(258)
												_this3;
											}
										}
										HX_STACK_LINE(258)
										bool tmp13 = (_this2->parent != null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(258)
										if ((tmp13)){
											HX_STACK_LINE(258)
											::phoenix::Spatial tmp14 = _this2->get_world();		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(258)
											::phoenix::Spatial _this3 = tmp14;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(258)
											::phoenix::Matrix tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												::phoenix::Matrix tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													::phoenix::Spatial tmp17 = _this2->get_world();		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(258)
													::phoenix::Spatial _this4 = tmp17;		HX_STACK_VAR(_this4,"_this4");
													HX_STACK_LINE(258)
													tmp16 = _this4->matrix;
												}
												HX_STACK_LINE(258)
												::phoenix::Matrix _this4 = tmp16;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(258)
												::phoenix::Matrix tmp17;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													::phoenix::Spatial tmp18 = _this2->parent->get_world();		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(258)
													::phoenix::Spatial _this5 = tmp18;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(258)
													tmp17 = _this5->matrix;
												}
												HX_STACK_LINE(258)
												::phoenix::Matrix _a = tmp17;		HX_STACK_VAR(_a,"_a");
												HX_STACK_LINE(258)
												Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(258)
												::phoenix::Matrix tmp18 = _this2->local->matrix;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(258)
												Array< Float > be = tmp18->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(258)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(258)
												Float tmp19 = ae->__get((int)0);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(258)
												Float a11 = tmp19;		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(258)
												Float tmp20 = ae->__get((int)4);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(258)
												Float a12 = tmp20;		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(258)
												Float tmp21 = ae->__get((int)8);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(258)
												Float a13 = tmp21;		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(258)
												Float tmp22 = ae->__get((int)12);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(258)
												Float a14 = tmp22;		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(258)
												Float tmp23 = ae->__get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(258)
												Float a21 = tmp23;		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(258)
												Float tmp24 = ae->__get((int)5);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(258)
												Float a22 = tmp24;		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(258)
												Float tmp25 = ae->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(258)
												Float a23 = tmp25;		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(258)
												Float tmp26 = ae->__get((int)13);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(258)
												Float a24 = tmp26;		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(258)
												Float tmp27 = ae->__get((int)2);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(258)
												Float a31 = tmp27;		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(258)
												Float tmp28 = ae->__get((int)6);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(258)
												Float a32 = tmp28;		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(258)
												Float tmp29 = ae->__get((int)10);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(258)
												Float a33 = tmp29;		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(258)
												Float tmp30 = ae->__get((int)14);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(258)
												Float a34 = tmp30;		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(258)
												Float tmp31 = ae->__get((int)3);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(258)
												Float a41 = tmp31;		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(258)
												Float tmp32 = ae->__get((int)7);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(258)
												Float a42 = tmp32;		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(258)
												Float tmp33 = ae->__get((int)11);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(258)
												Float a43 = tmp33;		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(258)
												Float tmp34 = ae->__get((int)15);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(258)
												Float a44 = tmp34;		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(258)
												Float tmp35 = be->__get((int)0);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(258)
												Float b11 = tmp35;		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(258)
												Float tmp36 = be->__get((int)4);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(258)
												Float b12 = tmp36;		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(258)
												Float tmp37 = be->__get((int)8);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(258)
												Float b13 = tmp37;		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(258)
												Float tmp38 = be->__get((int)12);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(258)
												Float b14 = tmp38;		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(258)
												Float tmp39 = be->__get((int)1);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(258)
												Float b21 = tmp39;		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(258)
												Float tmp40 = be->__get((int)5);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(258)
												Float b22 = tmp40;		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(258)
												Float tmp41 = be->__get((int)9);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(258)
												Float b23 = tmp41;		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(258)
												Float tmp42 = be->__get((int)13);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(258)
												Float b24 = tmp42;		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(258)
												Float tmp43 = be->__get((int)2);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(258)
												Float b31 = tmp43;		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(258)
												Float tmp44 = be->__get((int)6);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(258)
												Float b32 = tmp44;		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(258)
												Float tmp45 = be->__get((int)10);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(258)
												Float b33 = tmp45;		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(258)
												Float tmp46 = be->__get((int)14);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(258)
												Float b34 = tmp46;		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(258)
												Float tmp47 = be->__get((int)3);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(258)
												Float b41 = tmp47;		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(258)
												Float tmp48 = be->__get((int)7);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(258)
												Float b42 = tmp48;		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(258)
												Float tmp49 = be->__get((int)11);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(258)
												Float b43 = tmp49;		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(258)
												Float tmp50 = be->__get((int)15);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(258)
												Float b44 = tmp50;		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(258)
												Float tmp51 = (a11 * b11);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(258)
												Float tmp52 = (a12 * b21);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(258)
												Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(258)
												Float tmp54 = (a13 * b31);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(258)
												Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(258)
												Float tmp56 = (a14 * b41);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(258)
												Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(258)
												te[(int)0] = tmp57;
												HX_STACK_LINE(258)
												Float tmp58 = (a11 * b12);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(258)
												Float tmp59 = (a12 * b22);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(258)
												Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(258)
												Float tmp61 = (a13 * b32);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(258)
												Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(258)
												Float tmp63 = (a14 * b42);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(258)
												Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(258)
												te[(int)4] = tmp64;
												HX_STACK_LINE(258)
												Float tmp65 = (a11 * b13);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(258)
												Float tmp66 = (a12 * b23);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(258)
												Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(258)
												Float tmp68 = (a13 * b33);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(258)
												Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(258)
												Float tmp70 = (a14 * b43);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(258)
												Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(258)
												te[(int)8] = tmp71;
												HX_STACK_LINE(258)
												Float tmp72 = (a11 * b14);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(258)
												Float tmp73 = (a12 * b24);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(258)
												Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(258)
												Float tmp75 = (a13 * b34);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(258)
												Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(258)
												Float tmp77 = (a14 * b44);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(258)
												Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(258)
												te[(int)12] = tmp78;
												HX_STACK_LINE(258)
												Float tmp79 = (a21 * b11);		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(258)
												Float tmp80 = (a22 * b21);		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(258)
												Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(258)
												Float tmp82 = (a23 * b31);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(258)
												Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(258)
												Float tmp84 = (a24 * b41);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(258)
												Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(258)
												te[(int)1] = tmp85;
												HX_STACK_LINE(258)
												Float tmp86 = (a21 * b12);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(258)
												Float tmp87 = (a22 * b22);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(258)
												Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(258)
												Float tmp89 = (a23 * b32);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(258)
												Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(258)
												Float tmp91 = (a24 * b42);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(258)
												Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(258)
												te[(int)5] = tmp92;
												HX_STACK_LINE(258)
												Float tmp93 = (a21 * b13);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(258)
												Float tmp94 = (a22 * b23);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(258)
												Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(258)
												Float tmp96 = (a23 * b33);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(258)
												Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(258)
												Float tmp98 = (a24 * b43);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(258)
												Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(258)
												te[(int)9] = tmp99;
												HX_STACK_LINE(258)
												Float tmp100 = (a21 * b14);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(258)
												Float tmp101 = (a22 * b24);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(258)
												Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(258)
												Float tmp103 = (a23 * b34);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(258)
												Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(258)
												Float tmp105 = (a24 * b44);		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(258)
												Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(258)
												te[(int)13] = tmp106;
												HX_STACK_LINE(258)
												Float tmp107 = (a31 * b11);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(258)
												Float tmp108 = (a32 * b21);		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(258)
												Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(258)
												Float tmp110 = (a33 * b31);		HX_STACK_VAR(tmp110,"tmp110");
												HX_STACK_LINE(258)
												Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
												HX_STACK_LINE(258)
												Float tmp112 = (a34 * b41);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(258)
												Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
												HX_STACK_LINE(258)
												te[(int)2] = tmp113;
												HX_STACK_LINE(258)
												Float tmp114 = (a31 * b12);		HX_STACK_VAR(tmp114,"tmp114");
												HX_STACK_LINE(258)
												Float tmp115 = (a32 * b22);		HX_STACK_VAR(tmp115,"tmp115");
												HX_STACK_LINE(258)
												Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
												HX_STACK_LINE(258)
												Float tmp117 = (a33 * b32);		HX_STACK_VAR(tmp117,"tmp117");
												HX_STACK_LINE(258)
												Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
												HX_STACK_LINE(258)
												Float tmp119 = (a34 * b42);		HX_STACK_VAR(tmp119,"tmp119");
												HX_STACK_LINE(258)
												Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
												HX_STACK_LINE(258)
												te[(int)6] = tmp120;
												HX_STACK_LINE(258)
												Float tmp121 = (a31 * b13);		HX_STACK_VAR(tmp121,"tmp121");
												HX_STACK_LINE(258)
												Float tmp122 = (a32 * b23);		HX_STACK_VAR(tmp122,"tmp122");
												HX_STACK_LINE(258)
												Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
												HX_STACK_LINE(258)
												Float tmp124 = (a33 * b33);		HX_STACK_VAR(tmp124,"tmp124");
												HX_STACK_LINE(258)
												Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
												HX_STACK_LINE(258)
												Float tmp126 = (a34 * b43);		HX_STACK_VAR(tmp126,"tmp126");
												HX_STACK_LINE(258)
												Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
												HX_STACK_LINE(258)
												te[(int)10] = tmp127;
												HX_STACK_LINE(258)
												Float tmp128 = (a31 * b14);		HX_STACK_VAR(tmp128,"tmp128");
												HX_STACK_LINE(258)
												Float tmp129 = (a32 * b24);		HX_STACK_VAR(tmp129,"tmp129");
												HX_STACK_LINE(258)
												Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
												HX_STACK_LINE(258)
												Float tmp131 = (a33 * b34);		HX_STACK_VAR(tmp131,"tmp131");
												HX_STACK_LINE(258)
												Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
												HX_STACK_LINE(258)
												Float tmp133 = (a34 * b44);		HX_STACK_VAR(tmp133,"tmp133");
												HX_STACK_LINE(258)
												Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
												HX_STACK_LINE(258)
												te[(int)14] = tmp134;
												HX_STACK_LINE(258)
												Float tmp135 = (a41 * b11);		HX_STACK_VAR(tmp135,"tmp135");
												HX_STACK_LINE(258)
												Float tmp136 = (a42 * b21);		HX_STACK_VAR(tmp136,"tmp136");
												HX_STACK_LINE(258)
												Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
												HX_STACK_LINE(258)
												Float tmp138 = (a43 * b31);		HX_STACK_VAR(tmp138,"tmp138");
												HX_STACK_LINE(258)
												Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
												HX_STACK_LINE(258)
												Float tmp140 = (a44 * b41);		HX_STACK_VAR(tmp140,"tmp140");
												HX_STACK_LINE(258)
												Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
												HX_STACK_LINE(258)
												te[(int)3] = tmp141;
												HX_STACK_LINE(258)
												Float tmp142 = (a41 * b12);		HX_STACK_VAR(tmp142,"tmp142");
												HX_STACK_LINE(258)
												Float tmp143 = (a42 * b22);		HX_STACK_VAR(tmp143,"tmp143");
												HX_STACK_LINE(258)
												Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
												HX_STACK_LINE(258)
												Float tmp145 = (a43 * b32);		HX_STACK_VAR(tmp145,"tmp145");
												HX_STACK_LINE(258)
												Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
												HX_STACK_LINE(258)
												Float tmp147 = (a44 * b42);		HX_STACK_VAR(tmp147,"tmp147");
												HX_STACK_LINE(258)
												Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
												HX_STACK_LINE(258)
												te[(int)7] = tmp148;
												HX_STACK_LINE(258)
												Float tmp149 = (a41 * b13);		HX_STACK_VAR(tmp149,"tmp149");
												HX_STACK_LINE(258)
												Float tmp150 = (a42 * b23);		HX_STACK_VAR(tmp150,"tmp150");
												HX_STACK_LINE(258)
												Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
												HX_STACK_LINE(258)
												Float tmp152 = (a43 * b33);		HX_STACK_VAR(tmp152,"tmp152");
												HX_STACK_LINE(258)
												Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
												HX_STACK_LINE(258)
												Float tmp154 = (a44 * b43);		HX_STACK_VAR(tmp154,"tmp154");
												HX_STACK_LINE(258)
												Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
												HX_STACK_LINE(258)
												te[(int)11] = tmp155;
												HX_STACK_LINE(258)
												Float tmp156 = (a41 * b14);		HX_STACK_VAR(tmp156,"tmp156");
												HX_STACK_LINE(258)
												Float tmp157 = (a42 * b24);		HX_STACK_VAR(tmp157,"tmp157");
												HX_STACK_LINE(258)
												Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
												HX_STACK_LINE(258)
												Float tmp159 = (a43 * b34);		HX_STACK_VAR(tmp159,"tmp159");
												HX_STACK_LINE(258)
												Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
												HX_STACK_LINE(258)
												Float tmp161 = (a44 * b44);		HX_STACK_VAR(tmp161,"tmp161");
												HX_STACK_LINE(258)
												Float tmp162 = (tmp160 + tmp161);		HX_STACK_VAR(tmp162,"tmp162");
												HX_STACK_LINE(258)
												te[(int)15] = tmp162;
												HX_STACK_LINE(258)
												tmp15 = _this4;
											}
											HX_STACK_LINE(258)
											::phoenix::Matrix _m = tmp15;		HX_STACK_VAR(_m,"_m");
											HX_STACK_LINE(258)
											_this3->matrix = _m;
											HX_STACK_LINE(258)
											bool tmp16 = (_m != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(258)
											if ((tmp16)){
												HX_STACK_LINE(258)
												::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													cpp::ArrayBase array = _this3->matrix->elements;		HX_STACK_VAR(array,"array");
													HX_STACK_LINE(258)
													::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(258)
													bool tmp18 = (array != null());		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(258)
													if ((tmp18)){
														HX_STACK_LINE(258)
														::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(258)
														{
															HX_STACK_LINE(258)
															::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(258)
															::snow::api::buffers::ArrayBufferView _this4 = tmp20;		HX_STACK_VAR(_this4,"_this4");
															HX_STACK_LINE(258)
															_this4->byteOffset = (int)0;
															HX_STACK_LINE(258)
															_this4->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
															HX_STACK_LINE(258)
															int tmp21 = (_this4->length * _this4->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(258)
															_this4->byteLength = tmp21;
															HX_STACK_LINE(258)
															::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(258)
															{
																HX_STACK_LINE(258)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(258)
																int tmp23 = _this4->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(258)
																::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(258)
																this2 = tmp24;
																HX_STACK_LINE(258)
																tmp22 = this2;
															}
															HX_STACK_LINE(258)
															_this4->buffer = tmp22;
															HX_STACK_LINE(258)
															_this4->copyFromArray(((Array< Float >)(array)),null());
															HX_STACK_LINE(258)
															tmp19 = _this4;
														}
														HX_STACK_LINE(258)
														this1 = tmp19;
													}
													else{
														HX_STACK_LINE(258)
														HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
													}
													HX_STACK_LINE(258)
													tmp17 = this1;
												}
												HX_STACK_LINE(258)
												_this3->floats = tmp17;
											}
											HX_STACK_LINE(258)
											_this3->matrix;
										}
										else{
											HX_STACK_LINE(258)
											::phoenix::Spatial tmp14 = _this2->get_world();		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(258)
											::phoenix::Spatial _this3 = tmp14;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(258)
											::phoenix::Matrix tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												::phoenix::Matrix tmp16 = _this2->local->matrix;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(258)
												Array< Float > te = tmp16->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(258)
												Float tmp17 = te->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(258)
												Float tmp18 = te->__get((int)4);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(258)
												Float tmp19 = te->__get((int)8);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(258)
												Float tmp20 = te->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(258)
												Float tmp21 = te->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(258)
												Float tmp22 = te->__get((int)5);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(258)
												Float tmp23 = te->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(258)
												Float tmp24 = te->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(258)
												Float tmp25 = te->__get((int)2);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(258)
												Float tmp26 = te->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(258)
												Float tmp27 = te->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(258)
												Float tmp28 = te->__get((int)14);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(258)
												Float tmp29 = te->__get((int)3);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(258)
												Float tmp30 = te->__get((int)7);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(258)
												Float tmp31 = te->__get((int)11);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(258)
												Float tmp32 = te->__get((int)15);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(258)
												tmp15 = ::phoenix::Matrix_obj::__new(tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31,tmp32);
											}
											HX_STACK_LINE(258)
											::phoenix::Matrix _m = tmp15;		HX_STACK_VAR(_m,"_m");
											HX_STACK_LINE(258)
											_this3->matrix = _m;
											HX_STACK_LINE(258)
											bool tmp16 = (_m != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(258)
											if ((tmp16)){
												HX_STACK_LINE(258)
												::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													cpp::ArrayBase array = _this3->matrix->elements;		HX_STACK_VAR(array,"array");
													HX_STACK_LINE(258)
													::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(258)
													bool tmp18 = (array != null());		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(258)
													if ((tmp18)){
														HX_STACK_LINE(258)
														::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(258)
														{
															HX_STACK_LINE(258)
															::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(258)
															::snow::api::buffers::ArrayBufferView _this4 = tmp20;		HX_STACK_VAR(_this4,"_this4");
															HX_STACK_LINE(258)
															_this4->byteOffset = (int)0;
															HX_STACK_LINE(258)
															_this4->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
															HX_STACK_LINE(258)
															int tmp21 = (_this4->length * _this4->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(258)
															_this4->byteLength = tmp21;
															HX_STACK_LINE(258)
															::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(258)
															{
																HX_STACK_LINE(258)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(258)
																int tmp23 = _this4->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(258)
																::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(258)
																this2 = tmp24;
																HX_STACK_LINE(258)
																tmp22 = this2;
															}
															HX_STACK_LINE(258)
															_this4->buffer = tmp22;
															HX_STACK_LINE(258)
															_this4->copyFromArray(((Array< Float >)(array)),null());
															HX_STACK_LINE(258)
															tmp19 = _this4;
														}
														HX_STACK_LINE(258)
														this1 = tmp19;
													}
													else{
														HX_STACK_LINE(258)
														HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
													}
													HX_STACK_LINE(258)
													tmp17 = this1;
												}
												HX_STACK_LINE(258)
												_this3->floats = tmp17;
											}
											HX_STACK_LINE(258)
											_this3->matrix;
										}
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Spatial tmp14 = _this2->get_world();		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(258)
											::phoenix::Spatial _this3 = tmp14;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(258)
											bool tmp15 = _this3->auto_decompose;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(258)
											if ((tmp15)){
												HX_STACK_LINE(258)
												::phoenix::MatrixTransform tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
													HX_STACK_LINE(258)
													::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
													HX_STACK_LINE(258)
													::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
													HX_STACK_LINE(258)
													::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
													HX_STACK_LINE(258)
													Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(258)
													::phoenix::Matrix tmp17 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(258)
													::phoenix::Matrix matrix = tmp17;		HX_STACK_VAR(matrix,"matrix");
													HX_STACK_LINE(258)
													Float tmp18 = te->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(258)
													Float _ax_x = tmp18;		HX_STACK_VAR(_ax_x,"_ax_x");
													HX_STACK_LINE(258)
													Float tmp19 = te->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(258)
													Float _ax_y = tmp19;		HX_STACK_VAR(_ax_y,"_ax_y");
													HX_STACK_LINE(258)
													Float tmp20 = te->__get((int)2);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(258)
													Float _ax_z = tmp20;		HX_STACK_VAR(_ax_z,"_ax_z");
													HX_STACK_LINE(258)
													Float tmp21 = te->__get((int)4);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(258)
													Float _ay_x = tmp21;		HX_STACK_VAR(_ay_x,"_ay_x");
													HX_STACK_LINE(258)
													Float tmp22 = te->__get((int)5);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(258)
													Float _ay_y = tmp22;		HX_STACK_VAR(_ay_y,"_ay_y");
													HX_STACK_LINE(258)
													Float tmp23 = te->__get((int)6);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(258)
													Float _ay_z = tmp23;		HX_STACK_VAR(_ay_z,"_ay_z");
													HX_STACK_LINE(258)
													Float tmp24 = te->__get((int)8);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(258)
													Float _az_x = tmp24;		HX_STACK_VAR(_az_x,"_az_x");
													HX_STACK_LINE(258)
													Float tmp25 = te->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(258)
													Float _az_y = tmp25;		HX_STACK_VAR(_az_y,"_az_y");
													HX_STACK_LINE(258)
													Float tmp26 = te->__get((int)10);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(258)
													Float _az_z = tmp26;		HX_STACK_VAR(_az_z,"_az_z");
													HX_STACK_LINE(258)
													Float tmp27 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(258)
													Float tmp28 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(258)
													Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(258)
													Float tmp30 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(258)
													Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(258)
													Float tmp32 = ::Math_obj::sqrt(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(258)
													Float _ax_length = tmp32;		HX_STACK_VAR(_ax_length,"_ax_length");
													HX_STACK_LINE(258)
													Float tmp33 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(258)
													Float tmp34 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(258)
													Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(258)
													Float tmp36 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(258)
													Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(258)
													Float tmp38 = ::Math_obj::sqrt(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(258)
													Float _ay_length = tmp38;		HX_STACK_VAR(_ay_length,"_ay_length");
													HX_STACK_LINE(258)
													Float tmp39 = (_az_x * _az_x);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(258)
													Float tmp40 = (_az_y * _az_y);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(258)
													Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(258)
													Float tmp42 = (_az_z * _az_z);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(258)
													Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(258)
													Float tmp44 = ::Math_obj::sqrt(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(258)
													Float _az_length = tmp44;		HX_STACK_VAR(_az_length,"_az_length");
													HX_STACK_LINE(258)
													bool tmp45 = (_quaternion == null());		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(258)
													if ((tmp45)){
														HX_STACK_LINE(258)
														::phoenix::Quaternion tmp46 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(258)
														_quaternion = tmp46;
													}
													HX_STACK_LINE(258)
													bool tmp46 = (_position == null());		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(258)
													if ((tmp46)){
														HX_STACK_LINE(258)
														Float tmp47 = te->__get((int)12);		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(258)
														Float tmp48 = te->__get((int)13);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(258)
														Float tmp49 = te->__get((int)14);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(258)
														::phoenix::Vector tmp50 = ::phoenix::Vector_obj::__new(tmp47,tmp48,tmp49,null());		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(258)
														_position = tmp50;
													}
													else{
														HX_STACK_LINE(258)
														{
															HX_STACK_LINE(258)
															Float tmp47 = te->__get((int)12);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(258)
															Float _x = tmp47;		HX_STACK_VAR(_x,"_x");
															HX_STACK_LINE(258)
															_position->x = _x;
															HX_STACK_LINE(258)
															bool tmp48 = _position->_construct;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(258)
															if ((tmp48)){
																HX_STACK_LINE(258)
																_position->x;
															}
															else{
																HX_STACK_LINE(258)
																bool tmp49 = (_position->listen_x != null());		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(258)
																bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(258)
																if ((tmp49)){
																	HX_STACK_LINE(258)
																	bool tmp51 = _position->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(258)
																	bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(258)
																	tmp50 = !(tmp52);
																}
																else{
																	HX_STACK_LINE(258)
																	tmp50 = false;
																}
																HX_STACK_LINE(258)
																if ((tmp50)){
																	HX_STACK_LINE(258)
																	Float tmp51 = _x;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(258)
																	_position->listen_x(tmp51);
																}
																HX_STACK_LINE(258)
																_position->x;
															}
														}
														HX_STACK_LINE(258)
														{
															HX_STACK_LINE(258)
															Float tmp47 = te->__get((int)13);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(258)
															Float _y = tmp47;		HX_STACK_VAR(_y,"_y");
															HX_STACK_LINE(258)
															_position->y = _y;
															HX_STACK_LINE(258)
															bool tmp48 = _position->_construct;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(258)
															if ((tmp48)){
																HX_STACK_LINE(258)
																_position->y;
															}
															else{
																HX_STACK_LINE(258)
																bool tmp49 = (_position->listen_y != null());		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(258)
																bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(258)
																if ((tmp49)){
																	HX_STACK_LINE(258)
																	bool tmp51 = _position->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(258)
																	bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(258)
																	tmp50 = !(tmp52);
																}
																else{
																	HX_STACK_LINE(258)
																	tmp50 = false;
																}
																HX_STACK_LINE(258)
																if ((tmp50)){
																	HX_STACK_LINE(258)
																	Float tmp51 = _y;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(258)
																	_position->listen_y(tmp51);
																}
																HX_STACK_LINE(258)
																_position->y;
															}
														}
														HX_STACK_LINE(258)
														{
															HX_STACK_LINE(258)
															Float tmp47 = te->__get((int)14);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(258)
															Float _z = tmp47;		HX_STACK_VAR(_z,"_z");
															HX_STACK_LINE(258)
															_position->z = _z;
															HX_STACK_LINE(258)
															bool tmp48 = _position->_construct;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(258)
															if ((tmp48)){
																HX_STACK_LINE(258)
																_position->z;
															}
															else{
																HX_STACK_LINE(258)
																bool tmp49 = (_position->listen_z != null());		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(258)
																bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(258)
																if ((tmp49)){
																	HX_STACK_LINE(258)
																	bool tmp51 = _position->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(258)
																	bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(258)
																	tmp50 = !(tmp52);
																}
																else{
																	HX_STACK_LINE(258)
																	tmp50 = false;
																}
																HX_STACK_LINE(258)
																if ((tmp50)){
																	HX_STACK_LINE(258)
																	Float tmp51 = _z;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(258)
																	_position->listen_z(tmp51);
																}
																HX_STACK_LINE(258)
																_position->z;
															}
														}
													}
													HX_STACK_LINE(258)
													bool tmp47 = (_scale == null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(258)
													if ((tmp47)){
														HX_STACK_LINE(258)
														::phoenix::Vector tmp48 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(258)
														_scale = tmp48;
													}
													else{
														HX_STACK_LINE(258)
														{
															HX_STACK_LINE(258)
															_scale->x = _ax_length;
															HX_STACK_LINE(258)
															bool tmp48 = _scale->_construct;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(258)
															if ((tmp48)){
																HX_STACK_LINE(258)
																_scale->x;
															}
															else{
																HX_STACK_LINE(258)
																bool tmp49 = (_scale->listen_x != null());		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(258)
																bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(258)
																if ((tmp49)){
																	HX_STACK_LINE(258)
																	bool tmp51 = _scale->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(258)
																	bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(258)
																	tmp50 = !(tmp52);
																}
																else{
																	HX_STACK_LINE(258)
																	tmp50 = false;
																}
																HX_STACK_LINE(258)
																if ((tmp50)){
																	HX_STACK_LINE(258)
																	Float tmp51 = _ax_length;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(258)
																	_scale->listen_x(tmp51);
																}
																HX_STACK_LINE(258)
																_scale->x;
															}
														}
														HX_STACK_LINE(258)
														{
															HX_STACK_LINE(258)
															_scale->y = _ay_length;
															HX_STACK_LINE(258)
															bool tmp48 = _scale->_construct;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(258)
															if ((tmp48)){
																HX_STACK_LINE(258)
																_scale->y;
															}
															else{
																HX_STACK_LINE(258)
																bool tmp49 = (_scale->listen_y != null());		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(258)
																bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(258)
																if ((tmp49)){
																	HX_STACK_LINE(258)
																	bool tmp51 = _scale->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(258)
																	bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(258)
																	tmp50 = !(tmp52);
																}
																else{
																	HX_STACK_LINE(258)
																	tmp50 = false;
																}
																HX_STACK_LINE(258)
																if ((tmp50)){
																	HX_STACK_LINE(258)
																	Float tmp51 = _ay_length;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(258)
																	_scale->listen_y(tmp51);
																}
																HX_STACK_LINE(258)
																_scale->y;
															}
														}
														HX_STACK_LINE(258)
														{
															HX_STACK_LINE(258)
															_scale->z = _az_length;
															HX_STACK_LINE(258)
															bool tmp48 = _scale->_construct;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(258)
															if ((tmp48)){
																HX_STACK_LINE(258)
																_scale->z;
															}
															else{
																HX_STACK_LINE(258)
																bool tmp49 = (_scale->listen_z != null());		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(258)
																bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(258)
																if ((tmp49)){
																	HX_STACK_LINE(258)
																	bool tmp51 = _scale->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(258)
																	bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(258)
																	tmp50 = !(tmp52);
																}
																else{
																	HX_STACK_LINE(258)
																	tmp50 = false;
																}
																HX_STACK_LINE(258)
																if ((tmp50)){
																	HX_STACK_LINE(258)
																	Float tmp51 = _az_length;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(258)
																	_scale->listen_z(tmp51);
																}
																HX_STACK_LINE(258)
																_scale->z;
															}
														}
													}
													HX_STACK_LINE(258)
													matrix->elements = _this4->elements->concat(Array_obj< Float >::__new());
													HX_STACK_LINE(258)
													Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
													HX_STACK_LINE(258)
													Float tmp48 = _ax_length;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(258)
													hx::DivEq(me[(int)0],tmp48);
													HX_STACK_LINE(258)
													Float tmp49 = _ax_length;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(258)
													hx::DivEq(me[(int)1],tmp49);
													HX_STACK_LINE(258)
													Float tmp50 = _ax_length;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(258)
													hx::DivEq(me[(int)2],tmp50);
													HX_STACK_LINE(258)
													Float tmp51 = _ay_length;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(258)
													hx::DivEq(me[(int)4],tmp51);
													HX_STACK_LINE(258)
													Float tmp52 = _ay_length;		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(258)
													hx::DivEq(me[(int)5],tmp52);
													HX_STACK_LINE(258)
													Float tmp53 = _ay_length;		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(258)
													hx::DivEq(me[(int)6],tmp53);
													HX_STACK_LINE(258)
													Float tmp54 = _az_length;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(258)
													hx::DivEq(me[(int)8],tmp54);
													HX_STACK_LINE(258)
													Float tmp55 = _az_length;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(258)
													hx::DivEq(me[(int)9],tmp55);
													HX_STACK_LINE(258)
													Float tmp56 = _az_length;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(258)
													hx::DivEq(me[(int)10],tmp56);
													HX_STACK_LINE(258)
													::phoenix::Matrix tmp57 = matrix;		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(258)
													_quaternion->setFromRotationMatrix(tmp57);
													HX_STACK_LINE(258)
													bool tmp58 = (_this4->_transform == null());		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(258)
													if ((tmp58)){
														HX_STACK_LINE(258)
														::phoenix::MatrixTransform tmp59 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(258)
														_this4->_transform = tmp59;
													}
													else{
														HX_STACK_LINE(258)
														_this4->_transform->pos = _position;
														HX_STACK_LINE(258)
														_this4->_transform->rotation = _quaternion;
														HX_STACK_LINE(258)
														_this4->_transform->scale = _scale;
													}
													HX_STACK_LINE(258)
													tmp16 = _this4->_transform;
												}
												HX_STACK_LINE(258)
												::phoenix::MatrixTransform _transform = tmp16;		HX_STACK_VAR(_transform,"_transform");
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
													HX_STACK_LINE(258)
													_this3->pos = _p;
													HX_STACK_LINE(258)
													bool tmp17 = (_p != null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(258)
													if ((tmp17)){
														HX_STACK_LINE(258)
														::phoenix::Vector tmp18 = _this3->pos;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(258)
														Dynamic tmp19 = _this3->_pos_change_dyn();		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(258)
														::phoenix::Vector_obj::Listen(tmp18,tmp19);
														HX_STACK_LINE(258)
														bool tmp20 = (_this3->pos_changed != null());		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(258)
														bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(258)
														if ((tmp20)){
															HX_STACK_LINE(258)
															bool tmp22 = _this3->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(258)
															bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(258)
															tmp21 = !(tmp23);
														}
														else{
															HX_STACK_LINE(258)
															tmp21 = false;
														}
														HX_STACK_LINE(258)
														if ((tmp21)){
															HX_STACK_LINE(258)
															::phoenix::Vector tmp22 = _this3->pos;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(258)
															_this3->pos_changed(tmp22);
														}
													}
													HX_STACK_LINE(258)
													_this3->pos;
												}
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
													HX_STACK_LINE(258)
													_this3->rotation = _r;
													HX_STACK_LINE(258)
													bool tmp17 = (_r != null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(258)
													if ((tmp17)){
														HX_STACK_LINE(258)
														{
															HX_STACK_LINE(258)
															::phoenix::Quaternion _q = _this3->rotation;		HX_STACK_VAR(_q,"_q");
															HX_STACK_LINE(258)
															Dynamic listener = _this3->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
															HX_STACK_LINE(258)
															_q->listen_x = listener;
															HX_STACK_LINE(258)
															_q->listen_y = listener;
															HX_STACK_LINE(258)
															_q->listen_z = listener;
															HX_STACK_LINE(258)
															_q->listen_w = listener;
														}
														HX_STACK_LINE(258)
														bool tmp18 = (_this3->rotation_changed != null());		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(258)
														bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(258)
														if ((tmp18)){
															HX_STACK_LINE(258)
															bool tmp20 = _this3->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(258)
															bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(258)
															tmp19 = !(tmp21);
														}
														else{
															HX_STACK_LINE(258)
															tmp19 = false;
														}
														HX_STACK_LINE(258)
														if ((tmp19)){
															HX_STACK_LINE(258)
															::phoenix::Quaternion tmp20 = _this3->rotation;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(258)
															_this3->rotation_changed(tmp20);
														}
													}
													HX_STACK_LINE(258)
													_this3->rotation;
												}
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
													HX_STACK_LINE(258)
													_this3->scale = _s;
													HX_STACK_LINE(258)
													bool tmp17 = (_s != null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(258)
													if ((tmp17)){
														HX_STACK_LINE(258)
														::phoenix::Vector tmp18 = _this3->scale;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(258)
														Dynamic tmp19 = _this3->_scale_change_dyn();		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(258)
														::phoenix::Vector_obj::Listen(tmp18,tmp19);
														HX_STACK_LINE(258)
														bool tmp20 = (_this3->scale_changed != null());		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(258)
														bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(258)
														if ((tmp20)){
															HX_STACK_LINE(258)
															bool tmp22 = _this3->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(258)
															bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(258)
															tmp21 = !(tmp23);
														}
														else{
															HX_STACK_LINE(258)
															tmp21 = false;
														}
														HX_STACK_LINE(258)
														if ((tmp21)){
															HX_STACK_LINE(258)
															::phoenix::Vector tmp22 = _this3->scale;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(258)
															_this3->scale_changed(tmp22);
														}
													}
													HX_STACK_LINE(258)
													_this3->scale;
												}
											}
											HX_STACK_LINE(258)
											_this3;
										}
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											_this2->dirty = false;
											HX_STACK_LINE(258)
											bool tmp14 = _this2->dirty;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(258)
											bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(258)
											bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(258)
											if ((tmp15)){
												HX_STACK_LINE(258)
												bool tmp17 = _this2->_setup;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(258)
												bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(258)
												bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(258)
												tmp16 = !(tmp19);
											}
											else{
												HX_STACK_LINE(258)
												tmp16 = false;
											}
											HX_STACK_LINE(258)
											bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(258)
											bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(258)
											if ((tmp17)){
												HX_STACK_LINE(258)
												tmp18 = (_this2->_dirty_handlers != null());
											}
											else{
												HX_STACK_LINE(258)
												tmp18 = false;
											}
											HX_STACK_LINE(258)
											bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(258)
											if ((tmp18)){
												HX_STACK_LINE(258)
												int tmp20 = _this2->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(258)
												int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(258)
												tmp19 = (tmp21 > (int)0);
											}
											else{
												HX_STACK_LINE(258)
												tmp19 = false;
											}
											HX_STACK_LINE(258)
											if ((tmp19)){
												HX_STACK_LINE(258)
												int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(258)
												cpp::ArrayBase _g11 = _this2->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(258)
												while((true)){
													HX_STACK_LINE(258)
													bool tmp20 = (_g2 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(258)
													bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(258)
													if ((tmp21)){
														HX_STACK_LINE(258)
														break;
													}
													HX_STACK_LINE(258)
													Dynamic tmp22 = _g11->__GetItem(_g2);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(258)
													Dynamic _handler = tmp22;		HX_STACK_VAR(_handler,"_handler");
													HX_STACK_LINE(258)
													++(_g2);
													HX_STACK_LINE(258)
													bool tmp23 = (_handler != null());		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(258)
													if ((tmp23)){
														HX_STACK_LINE(258)
														::phoenix::Transform tmp24 = _this2;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(258)
														_handler(tmp24).Cast< Void >();
													}
												}
											}
											HX_STACK_LINE(258)
											_this2->dirty;
										}
										HX_STACK_LINE(258)
										_this2->_cleaning = false;
										HX_STACK_LINE(258)
										bool tmp14 = (_this2->_clean_handlers != null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(258)
										bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(258)
										if ((tmp14)){
											HX_STACK_LINE(258)
											int tmp16 = _this2->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(258)
											int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(258)
											tmp15 = (tmp17 > (int)0);
										}
										else{
											HX_STACK_LINE(258)
											tmp15 = false;
										}
										HX_STACK_LINE(258)
										if ((tmp15)){
											HX_STACK_LINE(258)
											int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(258)
											cpp::ArrayBase _g11 = _this2->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(258)
											while((true)){
												HX_STACK_LINE(258)
												bool tmp16 = (_g2 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(258)
												bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(258)
												if ((tmp17)){
													HX_STACK_LINE(258)
													break;
												}
												HX_STACK_LINE(258)
												Dynamic tmp18 = _g11->__GetItem(_g2);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(258)
												Dynamic _handler = tmp18;		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(258)
												++(_g2);
												HX_STACK_LINE(258)
												bool tmp19 = (_handler != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(258)
												if ((tmp19)){
													HX_STACK_LINE(258)
													::phoenix::Transform tmp20 = _this2;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(258)
													_handler(tmp20).Cast< Void >();
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(258)
							bool tmp10 = _this1->dirty;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(258)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(258)
							if ((tmp10)){
								HX_STACK_LINE(258)
								bool tmp12 = _this1->_cleaning;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(258)
								bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(258)
								tmp11 = !(tmp13);
							}
							else{
								HX_STACK_LINE(258)
								tmp11 = false;
							}
							HX_STACK_LINE(258)
							if ((tmp11)){
								HX_STACK_LINE(258)
								bool tmp12 = _this1->dirty;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(258)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(258)
								if ((tmp13)){
									HX_STACK_LINE(258)
									Dynamic();
								}
								else{
									HX_STACK_LINE(258)
									_this1->_cleaning = true;
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Matrix _this2 = _this1->_pos_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(258)
											e[(int)0] = (int)1;
											HX_STACK_LINE(258)
											e[(int)4] = (int)0;
											HX_STACK_LINE(258)
											e[(int)8] = (int)0;
											HX_STACK_LINE(258)
											::phoenix::Vector tmp14 = _this1->local->pos;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(258)
											Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(258)
											e[(int)12] = tmp15;
											HX_STACK_LINE(258)
											e[(int)1] = (int)0;
											HX_STACK_LINE(258)
											e[(int)5] = (int)1;
											HX_STACK_LINE(258)
											e[(int)9] = (int)0;
											HX_STACK_LINE(258)
											::phoenix::Vector tmp16 = _this1->local->pos;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(258)
											Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(258)
											e[(int)13] = tmp17;
											HX_STACK_LINE(258)
											e[(int)2] = (int)0;
											HX_STACK_LINE(258)
											e[(int)6] = (int)0;
											HX_STACK_LINE(258)
											e[(int)10] = (int)1;
											HX_STACK_LINE(258)
											::phoenix::Vector tmp18 = _this1->local->pos;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(258)
											Float tmp19 = tmp18->z;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(258)
											e[(int)14] = tmp19;
											HX_STACK_LINE(258)
											e[(int)3] = (int)0;
											HX_STACK_LINE(258)
											e[(int)7] = (int)0;
											HX_STACK_LINE(258)
											e[(int)11] = (int)0;
											HX_STACK_LINE(258)
											e[(int)15] = (int)1;
											HX_STACK_LINE(258)
											_this2;
										}
										HX_STACK_LINE(258)
										_this2;
									}
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Matrix _this2 = _this1->_rotation_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(258)
										::phoenix::Quaternion tmp14 = _this1->local->rotation;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(258)
										::phoenix::Quaternion q = tmp14;		HX_STACK_VAR(q,"q");
										HX_STACK_LINE(258)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(258)
										Float tmp15 = (q->x + q->x);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(258)
										Float x2 = tmp15;		HX_STACK_VAR(x2,"x2");
										HX_STACK_LINE(258)
										Float tmp16 = (q->y + q->y);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(258)
										Float y2 = tmp16;		HX_STACK_VAR(y2,"y2");
										HX_STACK_LINE(258)
										Float tmp17 = (q->z + q->z);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(258)
										Float z2 = tmp17;		HX_STACK_VAR(z2,"z2");
										HX_STACK_LINE(258)
										Float tmp18 = (q->x * x2);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(258)
										Float xx = tmp18;		HX_STACK_VAR(xx,"xx");
										HX_STACK_LINE(258)
										Float tmp19 = (q->x * y2);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(258)
										Float xy = tmp19;		HX_STACK_VAR(xy,"xy");
										HX_STACK_LINE(258)
										Float tmp20 = (q->x * z2);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(258)
										Float xz = tmp20;		HX_STACK_VAR(xz,"xz");
										HX_STACK_LINE(258)
										Float tmp21 = (q->y * y2);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(258)
										Float yy = tmp21;		HX_STACK_VAR(yy,"yy");
										HX_STACK_LINE(258)
										Float tmp22 = (q->y * z2);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(258)
										Float yz = tmp22;		HX_STACK_VAR(yz,"yz");
										HX_STACK_LINE(258)
										Float tmp23 = (q->z * z2);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(258)
										Float zz = tmp23;		HX_STACK_VAR(zz,"zz");
										HX_STACK_LINE(258)
										Float tmp24 = (q->w * x2);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(258)
										Float wx = tmp24;		HX_STACK_VAR(wx,"wx");
										HX_STACK_LINE(258)
										Float tmp25 = (q->w * y2);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(258)
										Float wy = tmp25;		HX_STACK_VAR(wy,"wy");
										HX_STACK_LINE(258)
										Float tmp26 = (q->w * z2);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(258)
										Float wz = tmp26;		HX_STACK_VAR(wz,"wz");
										HX_STACK_LINE(258)
										Float tmp27 = (yy + zz);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(258)
										Float tmp28 = ((int)1 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(258)
										te[(int)0] = tmp28;
										HX_STACK_LINE(258)
										Float tmp29 = (xy - wz);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(258)
										te[(int)4] = tmp29;
										HX_STACK_LINE(258)
										Float tmp30 = (xz + wy);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(258)
										te[(int)8] = tmp30;
										HX_STACK_LINE(258)
										Float tmp31 = (xy + wz);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(258)
										te[(int)1] = tmp31;
										HX_STACK_LINE(258)
										Float tmp32 = (xx + zz);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(258)
										Float tmp33 = ((int)1 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(258)
										te[(int)5] = tmp33;
										HX_STACK_LINE(258)
										Float tmp34 = (yz - wx);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(258)
										te[(int)9] = tmp34;
										HX_STACK_LINE(258)
										Float tmp35 = (xz - wy);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(258)
										te[(int)2] = tmp35;
										HX_STACK_LINE(258)
										Float tmp36 = (yz + wx);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(258)
										te[(int)6] = tmp36;
										HX_STACK_LINE(258)
										Float tmp37 = (xx + yy);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(258)
										Float tmp38 = ((int)1 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(258)
										te[(int)10] = tmp38;
										HX_STACK_LINE(258)
										te[(int)3] = (int)0;
										HX_STACK_LINE(258)
										te[(int)7] = (int)0;
										HX_STACK_LINE(258)
										te[(int)11] = (int)0;
										HX_STACK_LINE(258)
										te[(int)12] = (int)0;
										HX_STACK_LINE(258)
										te[(int)13] = (int)0;
										HX_STACK_LINE(258)
										te[(int)14] = (int)0;
										HX_STACK_LINE(258)
										te[(int)15] = (int)1;
										HX_STACK_LINE(258)
										_this2;
									}
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Matrix _this2 = _this1->_origin_undo_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(258)
											e[(int)0] = (int)1;
											HX_STACK_LINE(258)
											e[(int)4] = (int)0;
											HX_STACK_LINE(258)
											e[(int)8] = (int)0;
											HX_STACK_LINE(258)
											Float tmp14 = _this1->origin->x;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(258)
											Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(258)
											e[(int)12] = tmp15;
											HX_STACK_LINE(258)
											e[(int)1] = (int)0;
											HX_STACK_LINE(258)
											e[(int)5] = (int)1;
											HX_STACK_LINE(258)
											e[(int)9] = (int)0;
											HX_STACK_LINE(258)
											Float tmp16 = _this1->origin->y;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(258)
											Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(258)
											e[(int)13] = tmp17;
											HX_STACK_LINE(258)
											e[(int)2] = (int)0;
											HX_STACK_LINE(258)
											e[(int)6] = (int)0;
											HX_STACK_LINE(258)
											e[(int)10] = (int)1;
											HX_STACK_LINE(258)
											Float tmp18 = _this1->origin->z;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(258)
											Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(258)
											e[(int)14] = tmp19;
											HX_STACK_LINE(258)
											e[(int)3] = (int)0;
											HX_STACK_LINE(258)
											e[(int)7] = (int)0;
											HX_STACK_LINE(258)
											e[(int)11] = (int)0;
											HX_STACK_LINE(258)
											e[(int)15] = (int)1;
											HX_STACK_LINE(258)
											_this2;
										}
										HX_STACK_LINE(258)
										_this2;
									}
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(258)
										::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(258)
											e[(int)0] = (int)1;
											HX_STACK_LINE(258)
											e[(int)4] = (int)0;
											HX_STACK_LINE(258)
											e[(int)8] = (int)0;
											HX_STACK_LINE(258)
											Float tmp15 = _this1->origin->x;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(258)
											e[(int)12] = tmp15;
											HX_STACK_LINE(258)
											e[(int)1] = (int)0;
											HX_STACK_LINE(258)
											e[(int)5] = (int)1;
											HX_STACK_LINE(258)
											e[(int)9] = (int)0;
											HX_STACK_LINE(258)
											Float tmp16 = _this1->origin->y;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(258)
											e[(int)13] = tmp16;
											HX_STACK_LINE(258)
											e[(int)2] = (int)0;
											HX_STACK_LINE(258)
											e[(int)6] = (int)0;
											HX_STACK_LINE(258)
											e[(int)10] = (int)1;
											HX_STACK_LINE(258)
											Float tmp17 = _this1->origin->z;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(258)
											e[(int)14] = tmp17;
											HX_STACK_LINE(258)
											e[(int)3] = (int)0;
											HX_STACK_LINE(258)
											e[(int)7] = (int)0;
											HX_STACK_LINE(258)
											e[(int)11] = (int)0;
											HX_STACK_LINE(258)
											e[(int)15] = (int)1;
											HX_STACK_LINE(258)
											_this2;
										}
										HX_STACK_LINE(258)
										_this2;
									}
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(258)
										::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(258)
											Array< Float > be = _this1->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(258)
											Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(258)
											Float tmp15 = ae->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(258)
											Float a11 = tmp15;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(258)
											Float tmp16 = ae->__get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(258)
											Float a12 = tmp16;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(258)
											Float tmp17 = ae->__get((int)8);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(258)
											Float a13 = tmp17;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(258)
											Float tmp18 = ae->__get((int)12);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(258)
											Float a14 = tmp18;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(258)
											Float tmp19 = ae->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(258)
											Float a21 = tmp19;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(258)
											Float tmp20 = ae->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(258)
											Float a22 = tmp20;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(258)
											Float tmp21 = ae->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(258)
											Float a23 = tmp21;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(258)
											Float tmp22 = ae->__get((int)13);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(258)
											Float a24 = tmp22;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(258)
											Float tmp23 = ae->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(258)
											Float a31 = tmp23;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(258)
											Float tmp24 = ae->__get((int)6);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(258)
											Float a32 = tmp24;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(258)
											Float tmp25 = ae->__get((int)10);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(258)
											Float a33 = tmp25;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(258)
											Float tmp26 = ae->__get((int)14);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(258)
											Float a34 = tmp26;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(258)
											Float tmp27 = ae->__get((int)3);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(258)
											Float a41 = tmp27;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(258)
											Float tmp28 = ae->__get((int)7);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(258)
											Float a42 = tmp28;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(258)
											Float tmp29 = ae->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(258)
											Float a43 = tmp29;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(258)
											Float tmp30 = ae->__get((int)15);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(258)
											Float a44 = tmp30;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(258)
											Float tmp31 = be->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(258)
											Float b11 = tmp31;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(258)
											Float tmp32 = be->__get((int)4);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(258)
											Float b12 = tmp32;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(258)
											Float tmp33 = be->__get((int)8);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(258)
											Float b13 = tmp33;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(258)
											Float tmp34 = be->__get((int)12);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(258)
											Float b14 = tmp34;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(258)
											Float tmp35 = be->__get((int)1);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(258)
											Float b21 = tmp35;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(258)
											Float tmp36 = be->__get((int)5);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(258)
											Float b22 = tmp36;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(258)
											Float tmp37 = be->__get((int)9);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(258)
											Float b23 = tmp37;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(258)
											Float tmp38 = be->__get((int)13);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(258)
											Float b24 = tmp38;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(258)
											Float tmp39 = be->__get((int)2);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(258)
											Float b31 = tmp39;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(258)
											Float tmp40 = be->__get((int)6);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(258)
											Float b32 = tmp40;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(258)
											Float tmp41 = be->__get((int)10);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(258)
											Float b33 = tmp41;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(258)
											Float tmp42 = be->__get((int)14);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(258)
											Float b34 = tmp42;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(258)
											Float tmp43 = be->__get((int)3);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(258)
											Float b41 = tmp43;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(258)
											Float tmp44 = be->__get((int)7);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(258)
											Float b42 = tmp44;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(258)
											Float tmp45 = be->__get((int)11);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(258)
											Float b43 = tmp45;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(258)
											Float tmp46 = be->__get((int)15);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(258)
											Float b44 = tmp46;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(258)
											Float tmp47 = (a11 * b11);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(258)
											Float tmp48 = (a12 * b21);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(258)
											Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(258)
											Float tmp50 = (a13 * b31);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(258)
											Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(258)
											Float tmp52 = (a14 * b41);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(258)
											Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(258)
											te[(int)0] = tmp53;
											HX_STACK_LINE(258)
											Float tmp54 = (a11 * b12);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(258)
											Float tmp55 = (a12 * b22);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(258)
											Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(258)
											Float tmp57 = (a13 * b32);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(258)
											Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(258)
											Float tmp59 = (a14 * b42);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(258)
											Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(258)
											te[(int)4] = tmp60;
											HX_STACK_LINE(258)
											Float tmp61 = (a11 * b13);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(258)
											Float tmp62 = (a12 * b23);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(258)
											Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(258)
											Float tmp64 = (a13 * b33);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(258)
											Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(258)
											Float tmp66 = (a14 * b43);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(258)
											Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(258)
											te[(int)8] = tmp67;
											HX_STACK_LINE(258)
											Float tmp68 = (a11 * b14);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(258)
											Float tmp69 = (a12 * b24);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(258)
											Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(258)
											Float tmp71 = (a13 * b34);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(258)
											Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(258)
											Float tmp73 = (a14 * b44);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(258)
											Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(258)
											te[(int)12] = tmp74;
											HX_STACK_LINE(258)
											Float tmp75 = (a21 * b11);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(258)
											Float tmp76 = (a22 * b21);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(258)
											Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(258)
											Float tmp78 = (a23 * b31);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(258)
											Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(258)
											Float tmp80 = (a24 * b41);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(258)
											Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(258)
											te[(int)1] = tmp81;
											HX_STACK_LINE(258)
											Float tmp82 = (a21 * b12);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(258)
											Float tmp83 = (a22 * b22);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(258)
											Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(258)
											Float tmp85 = (a23 * b32);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(258)
											Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(258)
											Float tmp87 = (a24 * b42);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(258)
											Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(258)
											te[(int)5] = tmp88;
											HX_STACK_LINE(258)
											Float tmp89 = (a21 * b13);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(258)
											Float tmp90 = (a22 * b23);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(258)
											Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(258)
											Float tmp92 = (a23 * b33);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(258)
											Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(258)
											Float tmp94 = (a24 * b43);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(258)
											Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(258)
											te[(int)9] = tmp95;
											HX_STACK_LINE(258)
											Float tmp96 = (a21 * b14);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(258)
											Float tmp97 = (a22 * b24);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(258)
											Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(258)
											Float tmp99 = (a23 * b34);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(258)
											Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(258)
											Float tmp101 = (a24 * b44);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(258)
											Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(258)
											te[(int)13] = tmp102;
											HX_STACK_LINE(258)
											Float tmp103 = (a31 * b11);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(258)
											Float tmp104 = (a32 * b21);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(258)
											Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(258)
											Float tmp106 = (a33 * b31);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(258)
											Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(258)
											Float tmp108 = (a34 * b41);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(258)
											Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(258)
											te[(int)2] = tmp109;
											HX_STACK_LINE(258)
											Float tmp110 = (a31 * b12);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(258)
											Float tmp111 = (a32 * b22);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(258)
											Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(258)
											Float tmp113 = (a33 * b32);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(258)
											Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(258)
											Float tmp115 = (a34 * b42);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(258)
											Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(258)
											te[(int)6] = tmp116;
											HX_STACK_LINE(258)
											Float tmp117 = (a31 * b13);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(258)
											Float tmp118 = (a32 * b23);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(258)
											Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(258)
											Float tmp120 = (a33 * b33);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(258)
											Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(258)
											Float tmp122 = (a34 * b43);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(258)
											Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(258)
											te[(int)10] = tmp123;
											HX_STACK_LINE(258)
											Float tmp124 = (a31 * b14);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(258)
											Float tmp125 = (a32 * b24);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(258)
											Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(258)
											Float tmp127 = (a33 * b34);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(258)
											Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(258)
											Float tmp129 = (a34 * b44);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(258)
											Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(258)
											te[(int)14] = tmp130;
											HX_STACK_LINE(258)
											Float tmp131 = (a41 * b11);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(258)
											Float tmp132 = (a42 * b21);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(258)
											Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(258)
											Float tmp134 = (a43 * b31);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(258)
											Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(258)
											Float tmp136 = (a44 * b41);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(258)
											Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(258)
											te[(int)3] = tmp137;
											HX_STACK_LINE(258)
											Float tmp138 = (a41 * b12);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(258)
											Float tmp139 = (a42 * b22);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(258)
											Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(258)
											Float tmp141 = (a43 * b32);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(258)
											Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(258)
											Float tmp143 = (a44 * b42);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(258)
											Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(258)
											te[(int)7] = tmp144;
											HX_STACK_LINE(258)
											Float tmp145 = (a41 * b13);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(258)
											Float tmp146 = (a42 * b23);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(258)
											Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(258)
											Float tmp148 = (a43 * b33);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(258)
											Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(258)
											Float tmp150 = (a44 * b43);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(258)
											Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(258)
											te[(int)11] = tmp151;
											HX_STACK_LINE(258)
											Float tmp152 = (a41 * b14);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(258)
											Float tmp153 = (a42 * b24);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(258)
											Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(258)
											Float tmp155 = (a43 * b34);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(258)
											Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
											HX_STACK_LINE(258)
											Float tmp157 = (a44 * b44);		HX_STACK_VAR(tmp157,"tmp157");
											HX_STACK_LINE(258)
											Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(258)
											te[(int)15] = tmp158;
											HX_STACK_LINE(258)
											_this2;
										}
									}
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(258)
										::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(258)
										::phoenix::Vector tmp15 = _this1->local->scale;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(258)
										::phoenix::Vector _v = tmp15;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(258)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(258)
										Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(258)
										Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(258)
										Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(258)
										Float tmp16 = _x;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(258)
										hx::MultEq(te[(int)0],tmp16);
										HX_STACK_LINE(258)
										Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(258)
										hx::MultEq(te[(int)4],tmp17);
										HX_STACK_LINE(258)
										Float tmp18 = _z;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(258)
										hx::MultEq(te[(int)8],tmp18);
										HX_STACK_LINE(258)
										Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(258)
										hx::MultEq(te[(int)1],tmp19);
										HX_STACK_LINE(258)
										Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(258)
										hx::MultEq(te[(int)5],tmp20);
										HX_STACK_LINE(258)
										Float tmp21 = _z;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(258)
										hx::MultEq(te[(int)9],tmp21);
										HX_STACK_LINE(258)
										Float tmp22 = _x;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(258)
										hx::MultEq(te[(int)2],tmp22);
										HX_STACK_LINE(258)
										Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(258)
										hx::MultEq(te[(int)6],tmp23);
										HX_STACK_LINE(258)
										Float tmp24 = _z;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(258)
										hx::MultEq(te[(int)10],tmp24);
										HX_STACK_LINE(258)
										Float tmp25 = _x;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(258)
										hx::MultEq(te[(int)3],tmp25);
										HX_STACK_LINE(258)
										Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(258)
										hx::MultEq(te[(int)7],tmp26);
										HX_STACK_LINE(258)
										Float tmp27 = _z;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(258)
										hx::MultEq(te[(int)11],tmp27);
										HX_STACK_LINE(258)
										_this2;
									}
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(258)
										::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(258)
										::phoenix::Vector tmp15 = _this1->local->pos;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(258)
										::phoenix::Vector _v = tmp15;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(258)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(258)
										Float tmp16 = _v->x;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(258)
										te[(int)12] = tmp16;
										HX_STACK_LINE(258)
										Float tmp17 = _v->y;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(258)
										te[(int)13] = tmp17;
										HX_STACK_LINE(258)
										Float tmp18 = _v->z;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(258)
										te[(int)14] = tmp18;
										HX_STACK_LINE(258)
										_this2;
									}
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(258)
										::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(258)
											Array< Float > be = _this1->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(258)
											Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(258)
											Float tmp15 = ae->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(258)
											Float a11 = tmp15;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(258)
											Float tmp16 = ae->__get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(258)
											Float a12 = tmp16;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(258)
											Float tmp17 = ae->__get((int)8);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(258)
											Float a13 = tmp17;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(258)
											Float tmp18 = ae->__get((int)12);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(258)
											Float a14 = tmp18;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(258)
											Float tmp19 = ae->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(258)
											Float a21 = tmp19;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(258)
											Float tmp20 = ae->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(258)
											Float a22 = tmp20;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(258)
											Float tmp21 = ae->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(258)
											Float a23 = tmp21;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(258)
											Float tmp22 = ae->__get((int)13);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(258)
											Float a24 = tmp22;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(258)
											Float tmp23 = ae->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(258)
											Float a31 = tmp23;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(258)
											Float tmp24 = ae->__get((int)6);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(258)
											Float a32 = tmp24;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(258)
											Float tmp25 = ae->__get((int)10);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(258)
											Float a33 = tmp25;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(258)
											Float tmp26 = ae->__get((int)14);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(258)
											Float a34 = tmp26;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(258)
											Float tmp27 = ae->__get((int)3);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(258)
											Float a41 = tmp27;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(258)
											Float tmp28 = ae->__get((int)7);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(258)
											Float a42 = tmp28;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(258)
											Float tmp29 = ae->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(258)
											Float a43 = tmp29;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(258)
											Float tmp30 = ae->__get((int)15);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(258)
											Float a44 = tmp30;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(258)
											Float tmp31 = be->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(258)
											Float b11 = tmp31;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(258)
											Float tmp32 = be->__get((int)4);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(258)
											Float b12 = tmp32;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(258)
											Float tmp33 = be->__get((int)8);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(258)
											Float b13 = tmp33;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(258)
											Float tmp34 = be->__get((int)12);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(258)
											Float b14 = tmp34;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(258)
											Float tmp35 = be->__get((int)1);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(258)
											Float b21 = tmp35;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(258)
											Float tmp36 = be->__get((int)5);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(258)
											Float b22 = tmp36;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(258)
											Float tmp37 = be->__get((int)9);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(258)
											Float b23 = tmp37;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(258)
											Float tmp38 = be->__get((int)13);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(258)
											Float b24 = tmp38;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(258)
											Float tmp39 = be->__get((int)2);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(258)
											Float b31 = tmp39;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(258)
											Float tmp40 = be->__get((int)6);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(258)
											Float b32 = tmp40;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(258)
											Float tmp41 = be->__get((int)10);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(258)
											Float b33 = tmp41;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(258)
											Float tmp42 = be->__get((int)14);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(258)
											Float b34 = tmp42;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(258)
											Float tmp43 = be->__get((int)3);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(258)
											Float b41 = tmp43;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(258)
											Float tmp44 = be->__get((int)7);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(258)
											Float b42 = tmp44;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(258)
											Float tmp45 = be->__get((int)11);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(258)
											Float b43 = tmp45;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(258)
											Float tmp46 = be->__get((int)15);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(258)
											Float b44 = tmp46;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(258)
											Float tmp47 = (a11 * b11);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(258)
											Float tmp48 = (a12 * b21);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(258)
											Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(258)
											Float tmp50 = (a13 * b31);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(258)
											Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(258)
											Float tmp52 = (a14 * b41);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(258)
											Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(258)
											te[(int)0] = tmp53;
											HX_STACK_LINE(258)
											Float tmp54 = (a11 * b12);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(258)
											Float tmp55 = (a12 * b22);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(258)
											Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(258)
											Float tmp57 = (a13 * b32);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(258)
											Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(258)
											Float tmp59 = (a14 * b42);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(258)
											Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(258)
											te[(int)4] = tmp60;
											HX_STACK_LINE(258)
											Float tmp61 = (a11 * b13);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(258)
											Float tmp62 = (a12 * b23);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(258)
											Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(258)
											Float tmp64 = (a13 * b33);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(258)
											Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(258)
											Float tmp66 = (a14 * b43);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(258)
											Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(258)
											te[(int)8] = tmp67;
											HX_STACK_LINE(258)
											Float tmp68 = (a11 * b14);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(258)
											Float tmp69 = (a12 * b24);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(258)
											Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(258)
											Float tmp71 = (a13 * b34);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(258)
											Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(258)
											Float tmp73 = (a14 * b44);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(258)
											Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(258)
											te[(int)12] = tmp74;
											HX_STACK_LINE(258)
											Float tmp75 = (a21 * b11);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(258)
											Float tmp76 = (a22 * b21);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(258)
											Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(258)
											Float tmp78 = (a23 * b31);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(258)
											Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(258)
											Float tmp80 = (a24 * b41);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(258)
											Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(258)
											te[(int)1] = tmp81;
											HX_STACK_LINE(258)
											Float tmp82 = (a21 * b12);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(258)
											Float tmp83 = (a22 * b22);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(258)
											Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(258)
											Float tmp85 = (a23 * b32);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(258)
											Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(258)
											Float tmp87 = (a24 * b42);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(258)
											Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(258)
											te[(int)5] = tmp88;
											HX_STACK_LINE(258)
											Float tmp89 = (a21 * b13);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(258)
											Float tmp90 = (a22 * b23);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(258)
											Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(258)
											Float tmp92 = (a23 * b33);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(258)
											Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(258)
											Float tmp94 = (a24 * b43);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(258)
											Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(258)
											te[(int)9] = tmp95;
											HX_STACK_LINE(258)
											Float tmp96 = (a21 * b14);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(258)
											Float tmp97 = (a22 * b24);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(258)
											Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(258)
											Float tmp99 = (a23 * b34);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(258)
											Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(258)
											Float tmp101 = (a24 * b44);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(258)
											Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(258)
											te[(int)13] = tmp102;
											HX_STACK_LINE(258)
											Float tmp103 = (a31 * b11);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(258)
											Float tmp104 = (a32 * b21);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(258)
											Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(258)
											Float tmp106 = (a33 * b31);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(258)
											Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(258)
											Float tmp108 = (a34 * b41);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(258)
											Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(258)
											te[(int)2] = tmp109;
											HX_STACK_LINE(258)
											Float tmp110 = (a31 * b12);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(258)
											Float tmp111 = (a32 * b22);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(258)
											Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(258)
											Float tmp113 = (a33 * b32);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(258)
											Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(258)
											Float tmp115 = (a34 * b42);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(258)
											Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(258)
											te[(int)6] = tmp116;
											HX_STACK_LINE(258)
											Float tmp117 = (a31 * b13);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(258)
											Float tmp118 = (a32 * b23);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(258)
											Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(258)
											Float tmp120 = (a33 * b33);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(258)
											Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(258)
											Float tmp122 = (a34 * b43);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(258)
											Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(258)
											te[(int)10] = tmp123;
											HX_STACK_LINE(258)
											Float tmp124 = (a31 * b14);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(258)
											Float tmp125 = (a32 * b24);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(258)
											Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(258)
											Float tmp127 = (a33 * b34);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(258)
											Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(258)
											Float tmp129 = (a34 * b44);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(258)
											Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(258)
											te[(int)14] = tmp130;
											HX_STACK_LINE(258)
											Float tmp131 = (a41 * b11);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(258)
											Float tmp132 = (a42 * b21);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(258)
											Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(258)
											Float tmp134 = (a43 * b31);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(258)
											Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(258)
											Float tmp136 = (a44 * b41);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(258)
											Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(258)
											te[(int)3] = tmp137;
											HX_STACK_LINE(258)
											Float tmp138 = (a41 * b12);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(258)
											Float tmp139 = (a42 * b22);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(258)
											Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(258)
											Float tmp141 = (a43 * b32);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(258)
											Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(258)
											Float tmp143 = (a44 * b42);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(258)
											Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(258)
											te[(int)7] = tmp144;
											HX_STACK_LINE(258)
											Float tmp145 = (a41 * b13);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(258)
											Float tmp146 = (a42 * b23);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(258)
											Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(258)
											Float tmp148 = (a43 * b33);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(258)
											Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(258)
											Float tmp150 = (a44 * b43);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(258)
											Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(258)
											te[(int)11] = tmp151;
											HX_STACK_LINE(258)
											Float tmp152 = (a41 * b14);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(258)
											Float tmp153 = (a42 * b24);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(258)
											Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(258)
											Float tmp155 = (a43 * b34);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(258)
											Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
											HX_STACK_LINE(258)
											Float tmp157 = (a44 * b44);		HX_STACK_VAR(tmp157,"tmp157");
											HX_STACK_LINE(258)
											Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(258)
											te[(int)15] = tmp158;
											HX_STACK_LINE(258)
											_this2;
										}
									}
									HX_STACK_LINE(258)
									bool tmp14 = (_this1->parent != null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(258)
									if ((tmp14)){
										HX_STACK_LINE(258)
										::phoenix::Spatial tmp15 = _this1->get_world();		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(258)
										::phoenix::Spatial _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(258)
										::phoenix::Matrix tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Matrix tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												::phoenix::Spatial tmp18 = _this1->get_world();		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(258)
												::phoenix::Spatial _this3 = tmp18;		HX_STACK_VAR(_this3,"_this3");
												HX_STACK_LINE(258)
												tmp17 = _this3->matrix;
											}
											HX_STACK_LINE(258)
											::phoenix::Matrix _this3 = tmp17;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(258)
											::phoenix::Matrix tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												::phoenix::Spatial tmp19 = _this1->parent->get_world();		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(258)
												::phoenix::Spatial _this4 = tmp19;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(258)
												tmp18 = _this4->matrix;
											}
											HX_STACK_LINE(258)
											::phoenix::Matrix _a = tmp18;		HX_STACK_VAR(_a,"_a");
											HX_STACK_LINE(258)
											Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(258)
											::phoenix::Matrix tmp19 = _this1->local->matrix;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(258)
											Array< Float > be = tmp19->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(258)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(258)
											Float tmp20 = ae->__get((int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(258)
											Float a11 = tmp20;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(258)
											Float tmp21 = ae->__get((int)4);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(258)
											Float a12 = tmp21;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(258)
											Float tmp22 = ae->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(258)
											Float a13 = tmp22;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(258)
											Float tmp23 = ae->__get((int)12);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(258)
											Float a14 = tmp23;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(258)
											Float tmp24 = ae->__get((int)1);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(258)
											Float a21 = tmp24;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(258)
											Float tmp25 = ae->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(258)
											Float a22 = tmp25;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(258)
											Float tmp26 = ae->__get((int)9);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(258)
											Float a23 = tmp26;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(258)
											Float tmp27 = ae->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(258)
											Float a24 = tmp27;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(258)
											Float tmp28 = ae->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(258)
											Float a31 = tmp28;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(258)
											Float tmp29 = ae->__get((int)6);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(258)
											Float a32 = tmp29;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(258)
											Float tmp30 = ae->__get((int)10);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(258)
											Float a33 = tmp30;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(258)
											Float tmp31 = ae->__get((int)14);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(258)
											Float a34 = tmp31;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(258)
											Float tmp32 = ae->__get((int)3);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(258)
											Float a41 = tmp32;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(258)
											Float tmp33 = ae->__get((int)7);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(258)
											Float a42 = tmp33;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(258)
											Float tmp34 = ae->__get((int)11);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(258)
											Float a43 = tmp34;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(258)
											Float tmp35 = ae->__get((int)15);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(258)
											Float a44 = tmp35;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(258)
											Float tmp36 = be->__get((int)0);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(258)
											Float b11 = tmp36;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(258)
											Float tmp37 = be->__get((int)4);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(258)
											Float b12 = tmp37;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(258)
											Float tmp38 = be->__get((int)8);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(258)
											Float b13 = tmp38;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(258)
											Float tmp39 = be->__get((int)12);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(258)
											Float b14 = tmp39;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(258)
											Float tmp40 = be->__get((int)1);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(258)
											Float b21 = tmp40;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(258)
											Float tmp41 = be->__get((int)5);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(258)
											Float b22 = tmp41;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(258)
											Float tmp42 = be->__get((int)9);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(258)
											Float b23 = tmp42;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(258)
											Float tmp43 = be->__get((int)13);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(258)
											Float b24 = tmp43;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(258)
											Float tmp44 = be->__get((int)2);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(258)
											Float b31 = tmp44;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(258)
											Float tmp45 = be->__get((int)6);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(258)
											Float b32 = tmp45;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(258)
											Float tmp46 = be->__get((int)10);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(258)
											Float b33 = tmp46;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(258)
											Float tmp47 = be->__get((int)14);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(258)
											Float b34 = tmp47;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(258)
											Float tmp48 = be->__get((int)3);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(258)
											Float b41 = tmp48;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(258)
											Float tmp49 = be->__get((int)7);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(258)
											Float b42 = tmp49;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(258)
											Float tmp50 = be->__get((int)11);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(258)
											Float b43 = tmp50;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(258)
											Float tmp51 = be->__get((int)15);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(258)
											Float b44 = tmp51;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(258)
											Float tmp52 = (a11 * b11);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(258)
											Float tmp53 = (a12 * b21);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(258)
											Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(258)
											Float tmp55 = (a13 * b31);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(258)
											Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(258)
											Float tmp57 = (a14 * b41);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(258)
											Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(258)
											te[(int)0] = tmp58;
											HX_STACK_LINE(258)
											Float tmp59 = (a11 * b12);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(258)
											Float tmp60 = (a12 * b22);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(258)
											Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(258)
											Float tmp62 = (a13 * b32);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(258)
											Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(258)
											Float tmp64 = (a14 * b42);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(258)
											Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(258)
											te[(int)4] = tmp65;
											HX_STACK_LINE(258)
											Float tmp66 = (a11 * b13);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(258)
											Float tmp67 = (a12 * b23);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(258)
											Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(258)
											Float tmp69 = (a13 * b33);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(258)
											Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(258)
											Float tmp71 = (a14 * b43);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(258)
											Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(258)
											te[(int)8] = tmp72;
											HX_STACK_LINE(258)
											Float tmp73 = (a11 * b14);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(258)
											Float tmp74 = (a12 * b24);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(258)
											Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(258)
											Float tmp76 = (a13 * b34);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(258)
											Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(258)
											Float tmp78 = (a14 * b44);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(258)
											Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(258)
											te[(int)12] = tmp79;
											HX_STACK_LINE(258)
											Float tmp80 = (a21 * b11);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(258)
											Float tmp81 = (a22 * b21);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(258)
											Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(258)
											Float tmp83 = (a23 * b31);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(258)
											Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(258)
											Float tmp85 = (a24 * b41);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(258)
											Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(258)
											te[(int)1] = tmp86;
											HX_STACK_LINE(258)
											Float tmp87 = (a21 * b12);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(258)
											Float tmp88 = (a22 * b22);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(258)
											Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(258)
											Float tmp90 = (a23 * b32);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(258)
											Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(258)
											Float tmp92 = (a24 * b42);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(258)
											Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(258)
											te[(int)5] = tmp93;
											HX_STACK_LINE(258)
											Float tmp94 = (a21 * b13);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(258)
											Float tmp95 = (a22 * b23);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(258)
											Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(258)
											Float tmp97 = (a23 * b33);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(258)
											Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(258)
											Float tmp99 = (a24 * b43);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(258)
											Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(258)
											te[(int)9] = tmp100;
											HX_STACK_LINE(258)
											Float tmp101 = (a21 * b14);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(258)
											Float tmp102 = (a22 * b24);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(258)
											Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(258)
											Float tmp104 = (a23 * b34);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(258)
											Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(258)
											Float tmp106 = (a24 * b44);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(258)
											Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(258)
											te[(int)13] = tmp107;
											HX_STACK_LINE(258)
											Float tmp108 = (a31 * b11);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(258)
											Float tmp109 = (a32 * b21);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(258)
											Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(258)
											Float tmp111 = (a33 * b31);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(258)
											Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(258)
											Float tmp113 = (a34 * b41);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(258)
											Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(258)
											te[(int)2] = tmp114;
											HX_STACK_LINE(258)
											Float tmp115 = (a31 * b12);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(258)
											Float tmp116 = (a32 * b22);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(258)
											Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(258)
											Float tmp118 = (a33 * b32);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(258)
											Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(258)
											Float tmp120 = (a34 * b42);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(258)
											Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(258)
											te[(int)6] = tmp121;
											HX_STACK_LINE(258)
											Float tmp122 = (a31 * b13);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(258)
											Float tmp123 = (a32 * b23);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(258)
											Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(258)
											Float tmp125 = (a33 * b33);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(258)
											Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(258)
											Float tmp127 = (a34 * b43);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(258)
											Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(258)
											te[(int)10] = tmp128;
											HX_STACK_LINE(258)
											Float tmp129 = (a31 * b14);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(258)
											Float tmp130 = (a32 * b24);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(258)
											Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(258)
											Float tmp132 = (a33 * b34);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(258)
											Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(258)
											Float tmp134 = (a34 * b44);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(258)
											Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(258)
											te[(int)14] = tmp135;
											HX_STACK_LINE(258)
											Float tmp136 = (a41 * b11);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(258)
											Float tmp137 = (a42 * b21);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(258)
											Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(258)
											Float tmp139 = (a43 * b31);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(258)
											Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(258)
											Float tmp141 = (a44 * b41);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(258)
											Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(258)
											te[(int)3] = tmp142;
											HX_STACK_LINE(258)
											Float tmp143 = (a41 * b12);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(258)
											Float tmp144 = (a42 * b22);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(258)
											Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(258)
											Float tmp146 = (a43 * b32);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(258)
											Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(258)
											Float tmp148 = (a44 * b42);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(258)
											Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(258)
											te[(int)7] = tmp149;
											HX_STACK_LINE(258)
											Float tmp150 = (a41 * b13);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(258)
											Float tmp151 = (a42 * b23);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(258)
											Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(258)
											Float tmp153 = (a43 * b33);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(258)
											Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(258)
											Float tmp155 = (a44 * b43);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(258)
											Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
											HX_STACK_LINE(258)
											te[(int)11] = tmp156;
											HX_STACK_LINE(258)
											Float tmp157 = (a41 * b14);		HX_STACK_VAR(tmp157,"tmp157");
											HX_STACK_LINE(258)
											Float tmp158 = (a42 * b24);		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(258)
											Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
											HX_STACK_LINE(258)
											Float tmp160 = (a43 * b34);		HX_STACK_VAR(tmp160,"tmp160");
											HX_STACK_LINE(258)
											Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
											HX_STACK_LINE(258)
											Float tmp162 = (a44 * b44);		HX_STACK_VAR(tmp162,"tmp162");
											HX_STACK_LINE(258)
											Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
											HX_STACK_LINE(258)
											te[(int)15] = tmp163;
											HX_STACK_LINE(258)
											tmp16 = _this3;
										}
										HX_STACK_LINE(258)
										::phoenix::Matrix _m = tmp16;		HX_STACK_VAR(_m,"_m");
										HX_STACK_LINE(258)
										_this2->matrix = _m;
										HX_STACK_LINE(258)
										bool tmp17 = (_m != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(258)
										if ((tmp17)){
											HX_STACK_LINE(258)
											::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
												HX_STACK_LINE(258)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(258)
												bool tmp19 = (array != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(258)
												if ((tmp19)){
													HX_STACK_LINE(258)
													::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(258)
														::snow::api::buffers::ArrayBufferView _this3 = tmp21;		HX_STACK_VAR(_this3,"_this3");
														HX_STACK_LINE(258)
														_this3->byteOffset = (int)0;
														HX_STACK_LINE(258)
														_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
														HX_STACK_LINE(258)
														int tmp22 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(258)
														_this3->byteLength = tmp22;
														HX_STACK_LINE(258)
														::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(258)
														{
															HX_STACK_LINE(258)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(258)
															int tmp24 = _this3->byteLength;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(258)
															::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(258)
															this2 = tmp25;
															HX_STACK_LINE(258)
															tmp23 = this2;
														}
														HX_STACK_LINE(258)
														_this3->buffer = tmp23;
														HX_STACK_LINE(258)
														_this3->copyFromArray(((Array< Float >)(array)),null());
														HX_STACK_LINE(258)
														tmp20 = _this3;
													}
													HX_STACK_LINE(258)
													this1 = tmp20;
												}
												else{
													HX_STACK_LINE(258)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
												}
												HX_STACK_LINE(258)
												tmp18 = this1;
											}
											HX_STACK_LINE(258)
											_this2->floats = tmp18;
										}
										HX_STACK_LINE(258)
										_this2->matrix;
									}
									else{
										HX_STACK_LINE(258)
										::phoenix::Spatial tmp15 = _this1->get_world();		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(258)
										::phoenix::Spatial _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(258)
										::phoenix::Matrix tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(258)
										{
											HX_STACK_LINE(258)
											::phoenix::Matrix tmp17 = _this1->local->matrix;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(258)
											Array< Float > te = tmp17->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(258)
											Float tmp18 = te->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(258)
											Float tmp19 = te->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(258)
											Float tmp20 = te->__get((int)8);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(258)
											Float tmp21 = te->__get((int)12);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(258)
											Float tmp22 = te->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(258)
											Float tmp23 = te->__get((int)5);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(258)
											Float tmp24 = te->__get((int)9);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(258)
											Float tmp25 = te->__get((int)13);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(258)
											Float tmp26 = te->__get((int)2);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(258)
											Float tmp27 = te->__get((int)6);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(258)
											Float tmp28 = te->__get((int)10);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(258)
											Float tmp29 = te->__get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(258)
											Float tmp30 = te->__get((int)3);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(258)
											Float tmp31 = te->__get((int)7);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(258)
											Float tmp32 = te->__get((int)11);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(258)
											Float tmp33 = te->__get((int)15);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(258)
											tmp16 = ::phoenix::Matrix_obj::__new(tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31,tmp32,tmp33);
										}
										HX_STACK_LINE(258)
										::phoenix::Matrix _m = tmp16;		HX_STACK_VAR(_m,"_m");
										HX_STACK_LINE(258)
										_this2->matrix = _m;
										HX_STACK_LINE(258)
										bool tmp17 = (_m != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(258)
										if ((tmp17)){
											HX_STACK_LINE(258)
											::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
												HX_STACK_LINE(258)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(258)
												bool tmp19 = (array != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(258)
												if ((tmp19)){
													HX_STACK_LINE(258)
													::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(258)
														::snow::api::buffers::ArrayBufferView _this3 = tmp21;		HX_STACK_VAR(_this3,"_this3");
														HX_STACK_LINE(258)
														_this3->byteOffset = (int)0;
														HX_STACK_LINE(258)
														_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
														HX_STACK_LINE(258)
														int tmp22 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(258)
														_this3->byteLength = tmp22;
														HX_STACK_LINE(258)
														::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(258)
														{
															HX_STACK_LINE(258)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(258)
															int tmp24 = _this3->byteLength;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(258)
															::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(258)
															this2 = tmp25;
															HX_STACK_LINE(258)
															tmp23 = this2;
														}
														HX_STACK_LINE(258)
														_this3->buffer = tmp23;
														HX_STACK_LINE(258)
														_this3->copyFromArray(((Array< Float >)(array)),null());
														HX_STACK_LINE(258)
														tmp20 = _this3;
													}
													HX_STACK_LINE(258)
													this1 = tmp20;
												}
												else{
													HX_STACK_LINE(258)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
												}
												HX_STACK_LINE(258)
												tmp18 = this1;
											}
											HX_STACK_LINE(258)
											_this2->floats = tmp18;
										}
										HX_STACK_LINE(258)
										_this2->matrix;
									}
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::phoenix::Spatial tmp15 = _this1->get_world();		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(258)
										::phoenix::Spatial _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(258)
										bool tmp16 = _this2->auto_decompose;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(258)
										if ((tmp16)){
											HX_STACK_LINE(258)
											::phoenix::MatrixTransform tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
												HX_STACK_LINE(258)
												::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
												HX_STACK_LINE(258)
												::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
												HX_STACK_LINE(258)
												::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
												HX_STACK_LINE(258)
												Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(258)
												::phoenix::Matrix tmp18 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(258)
												::phoenix::Matrix matrix = tmp18;		HX_STACK_VAR(matrix,"matrix");
												HX_STACK_LINE(258)
												Float tmp19 = te->__get((int)0);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(258)
												Float _ax_x = tmp19;		HX_STACK_VAR(_ax_x,"_ax_x");
												HX_STACK_LINE(258)
												Float tmp20 = te->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(258)
												Float _ax_y = tmp20;		HX_STACK_VAR(_ax_y,"_ax_y");
												HX_STACK_LINE(258)
												Float tmp21 = te->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(258)
												Float _ax_z = tmp21;		HX_STACK_VAR(_ax_z,"_ax_z");
												HX_STACK_LINE(258)
												Float tmp22 = te->__get((int)4);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(258)
												Float _ay_x = tmp22;		HX_STACK_VAR(_ay_x,"_ay_x");
												HX_STACK_LINE(258)
												Float tmp23 = te->__get((int)5);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(258)
												Float _ay_y = tmp23;		HX_STACK_VAR(_ay_y,"_ay_y");
												HX_STACK_LINE(258)
												Float tmp24 = te->__get((int)6);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(258)
												Float _ay_z = tmp24;		HX_STACK_VAR(_ay_z,"_ay_z");
												HX_STACK_LINE(258)
												Float tmp25 = te->__get((int)8);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(258)
												Float _az_x = tmp25;		HX_STACK_VAR(_az_x,"_az_x");
												HX_STACK_LINE(258)
												Float tmp26 = te->__get((int)9);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(258)
												Float _az_y = tmp26;		HX_STACK_VAR(_az_y,"_az_y");
												HX_STACK_LINE(258)
												Float tmp27 = te->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(258)
												Float _az_z = tmp27;		HX_STACK_VAR(_az_z,"_az_z");
												HX_STACK_LINE(258)
												Float tmp28 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(258)
												Float tmp29 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(258)
												Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(258)
												Float tmp31 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(258)
												Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(258)
												Float tmp33 = ::Math_obj::sqrt(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(258)
												Float _ax_length = tmp33;		HX_STACK_VAR(_ax_length,"_ax_length");
												HX_STACK_LINE(258)
												Float tmp34 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(258)
												Float tmp35 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(258)
												Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(258)
												Float tmp37 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(258)
												Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(258)
												Float tmp39 = ::Math_obj::sqrt(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(258)
												Float _ay_length = tmp39;		HX_STACK_VAR(_ay_length,"_ay_length");
												HX_STACK_LINE(258)
												Float tmp40 = (_az_x * _az_x);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(258)
												Float tmp41 = (_az_y * _az_y);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(258)
												Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(258)
												Float tmp43 = (_az_z * _az_z);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(258)
												Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(258)
												Float tmp45 = ::Math_obj::sqrt(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(258)
												Float _az_length = tmp45;		HX_STACK_VAR(_az_length,"_az_length");
												HX_STACK_LINE(258)
												bool tmp46 = (_quaternion == null());		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(258)
												if ((tmp46)){
													HX_STACK_LINE(258)
													::phoenix::Quaternion tmp47 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(258)
													_quaternion = tmp47;
												}
												HX_STACK_LINE(258)
												bool tmp47 = (_position == null());		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(258)
												if ((tmp47)){
													HX_STACK_LINE(258)
													Float tmp48 = te->__get((int)12);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(258)
													Float tmp49 = te->__get((int)13);		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(258)
													Float tmp50 = te->__get((int)14);		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(258)
													::phoenix::Vector tmp51 = ::phoenix::Vector_obj::__new(tmp48,tmp49,tmp50,null());		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(258)
													_position = tmp51;
												}
												else{
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														Float tmp48 = te->__get((int)12);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(258)
														Float _x = tmp48;		HX_STACK_VAR(_x,"_x");
														HX_STACK_LINE(258)
														_position->x = _x;
														HX_STACK_LINE(258)
														bool tmp49 = _position->_construct;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(258)
														if ((tmp49)){
															HX_STACK_LINE(258)
															_position->x;
														}
														else{
															HX_STACK_LINE(258)
															bool tmp50 = (_position->listen_x != null());		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(258)
															bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(258)
															if ((tmp50)){
																HX_STACK_LINE(258)
																bool tmp52 = _position->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(258)
																bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(258)
																tmp51 = !(tmp53);
															}
															else{
																HX_STACK_LINE(258)
																tmp51 = false;
															}
															HX_STACK_LINE(258)
															if ((tmp51)){
																HX_STACK_LINE(258)
																Float tmp52 = _x;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(258)
																_position->listen_x(tmp52);
															}
															HX_STACK_LINE(258)
															_position->x;
														}
													}
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														Float tmp48 = te->__get((int)13);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(258)
														Float _y = tmp48;		HX_STACK_VAR(_y,"_y");
														HX_STACK_LINE(258)
														_position->y = _y;
														HX_STACK_LINE(258)
														bool tmp49 = _position->_construct;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(258)
														if ((tmp49)){
															HX_STACK_LINE(258)
															_position->y;
														}
														else{
															HX_STACK_LINE(258)
															bool tmp50 = (_position->listen_y != null());		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(258)
															bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(258)
															if ((tmp50)){
																HX_STACK_LINE(258)
																bool tmp52 = _position->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(258)
																bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(258)
																tmp51 = !(tmp53);
															}
															else{
																HX_STACK_LINE(258)
																tmp51 = false;
															}
															HX_STACK_LINE(258)
															if ((tmp51)){
																HX_STACK_LINE(258)
																Float tmp52 = _y;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(258)
																_position->listen_y(tmp52);
															}
															HX_STACK_LINE(258)
															_position->y;
														}
													}
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														Float tmp48 = te->__get((int)14);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(258)
														Float _z = tmp48;		HX_STACK_VAR(_z,"_z");
														HX_STACK_LINE(258)
														_position->z = _z;
														HX_STACK_LINE(258)
														bool tmp49 = _position->_construct;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(258)
														if ((tmp49)){
															HX_STACK_LINE(258)
															_position->z;
														}
														else{
															HX_STACK_LINE(258)
															bool tmp50 = (_position->listen_z != null());		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(258)
															bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(258)
															if ((tmp50)){
																HX_STACK_LINE(258)
																bool tmp52 = _position->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(258)
																bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(258)
																tmp51 = !(tmp53);
															}
															else{
																HX_STACK_LINE(258)
																tmp51 = false;
															}
															HX_STACK_LINE(258)
															if ((tmp51)){
																HX_STACK_LINE(258)
																Float tmp52 = _z;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(258)
																_position->listen_z(tmp52);
															}
															HX_STACK_LINE(258)
															_position->z;
														}
													}
												}
												HX_STACK_LINE(258)
												bool tmp48 = (_scale == null());		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(258)
												if ((tmp48)){
													HX_STACK_LINE(258)
													::phoenix::Vector tmp49 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(258)
													_scale = tmp49;
												}
												else{
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														_scale->x = _ax_length;
														HX_STACK_LINE(258)
														bool tmp49 = _scale->_construct;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(258)
														if ((tmp49)){
															HX_STACK_LINE(258)
															_scale->x;
														}
														else{
															HX_STACK_LINE(258)
															bool tmp50 = (_scale->listen_x != null());		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(258)
															bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(258)
															if ((tmp50)){
																HX_STACK_LINE(258)
																bool tmp52 = _scale->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(258)
																bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(258)
																tmp51 = !(tmp53);
															}
															else{
																HX_STACK_LINE(258)
																tmp51 = false;
															}
															HX_STACK_LINE(258)
															if ((tmp51)){
																HX_STACK_LINE(258)
																Float tmp52 = _ax_length;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(258)
																_scale->listen_x(tmp52);
															}
															HX_STACK_LINE(258)
															_scale->x;
														}
													}
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														_scale->y = _ay_length;
														HX_STACK_LINE(258)
														bool tmp49 = _scale->_construct;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(258)
														if ((tmp49)){
															HX_STACK_LINE(258)
															_scale->y;
														}
														else{
															HX_STACK_LINE(258)
															bool tmp50 = (_scale->listen_y != null());		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(258)
															bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(258)
															if ((tmp50)){
																HX_STACK_LINE(258)
																bool tmp52 = _scale->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(258)
																bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(258)
																tmp51 = !(tmp53);
															}
															else{
																HX_STACK_LINE(258)
																tmp51 = false;
															}
															HX_STACK_LINE(258)
															if ((tmp51)){
																HX_STACK_LINE(258)
																Float tmp52 = _ay_length;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(258)
																_scale->listen_y(tmp52);
															}
															HX_STACK_LINE(258)
															_scale->y;
														}
													}
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														_scale->z = _az_length;
														HX_STACK_LINE(258)
														bool tmp49 = _scale->_construct;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(258)
														if ((tmp49)){
															HX_STACK_LINE(258)
															_scale->z;
														}
														else{
															HX_STACK_LINE(258)
															bool tmp50 = (_scale->listen_z != null());		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(258)
															bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(258)
															if ((tmp50)){
																HX_STACK_LINE(258)
																bool tmp52 = _scale->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(258)
																bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(258)
																tmp51 = !(tmp53);
															}
															else{
																HX_STACK_LINE(258)
																tmp51 = false;
															}
															HX_STACK_LINE(258)
															if ((tmp51)){
																HX_STACK_LINE(258)
																Float tmp52 = _az_length;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(258)
																_scale->listen_z(tmp52);
															}
															HX_STACK_LINE(258)
															_scale->z;
														}
													}
												}
												HX_STACK_LINE(258)
												matrix->elements = _this3->elements->concat(Array_obj< Float >::__new());
												HX_STACK_LINE(258)
												Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
												HX_STACK_LINE(258)
												Float tmp49 = _ax_length;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(258)
												hx::DivEq(me[(int)0],tmp49);
												HX_STACK_LINE(258)
												Float tmp50 = _ax_length;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(258)
												hx::DivEq(me[(int)1],tmp50);
												HX_STACK_LINE(258)
												Float tmp51 = _ax_length;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(258)
												hx::DivEq(me[(int)2],tmp51);
												HX_STACK_LINE(258)
												Float tmp52 = _ay_length;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(258)
												hx::DivEq(me[(int)4],tmp52);
												HX_STACK_LINE(258)
												Float tmp53 = _ay_length;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(258)
												hx::DivEq(me[(int)5],tmp53);
												HX_STACK_LINE(258)
												Float tmp54 = _ay_length;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(258)
												hx::DivEq(me[(int)6],tmp54);
												HX_STACK_LINE(258)
												Float tmp55 = _az_length;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(258)
												hx::DivEq(me[(int)8],tmp55);
												HX_STACK_LINE(258)
												Float tmp56 = _az_length;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(258)
												hx::DivEq(me[(int)9],tmp56);
												HX_STACK_LINE(258)
												Float tmp57 = _az_length;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(258)
												hx::DivEq(me[(int)10],tmp57);
												HX_STACK_LINE(258)
												::phoenix::Matrix tmp58 = matrix;		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(258)
												_quaternion->setFromRotationMatrix(tmp58);
												HX_STACK_LINE(258)
												bool tmp59 = (_this3->_transform == null());		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(258)
												if ((tmp59)){
													HX_STACK_LINE(258)
													::phoenix::MatrixTransform tmp60 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(258)
													_this3->_transform = tmp60;
												}
												else{
													HX_STACK_LINE(258)
													_this3->_transform->pos = _position;
													HX_STACK_LINE(258)
													_this3->_transform->rotation = _quaternion;
													HX_STACK_LINE(258)
													_this3->_transform->scale = _scale;
												}
												HX_STACK_LINE(258)
												tmp17 = _this3->_transform;
											}
											HX_STACK_LINE(258)
											::phoenix::MatrixTransform _transform = tmp17;		HX_STACK_VAR(_transform,"_transform");
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
												HX_STACK_LINE(258)
												_this2->pos = _p;
												HX_STACK_LINE(258)
												bool tmp18 = (_p != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(258)
												if ((tmp18)){
													HX_STACK_LINE(258)
													::phoenix::Vector tmp19 = _this2->pos;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(258)
													Dynamic tmp20 = _this2->_pos_change_dyn();		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(258)
													::phoenix::Vector_obj::Listen(tmp19,tmp20);
													HX_STACK_LINE(258)
													bool tmp21 = (_this2->pos_changed != null());		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(258)
													bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(258)
													if ((tmp21)){
														HX_STACK_LINE(258)
														bool tmp23 = _this2->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(258)
														bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(258)
														tmp22 = !(tmp24);
													}
													else{
														HX_STACK_LINE(258)
														tmp22 = false;
													}
													HX_STACK_LINE(258)
													if ((tmp22)){
														HX_STACK_LINE(258)
														::phoenix::Vector tmp23 = _this2->pos;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(258)
														_this2->pos_changed(tmp23);
													}
												}
												HX_STACK_LINE(258)
												_this2->pos;
											}
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
												HX_STACK_LINE(258)
												_this2->rotation = _r;
												HX_STACK_LINE(258)
												bool tmp18 = (_r != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(258)
												if ((tmp18)){
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														::phoenix::Quaternion _q = _this2->rotation;		HX_STACK_VAR(_q,"_q");
														HX_STACK_LINE(258)
														Dynamic listener = _this2->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
														HX_STACK_LINE(258)
														_q->listen_x = listener;
														HX_STACK_LINE(258)
														_q->listen_y = listener;
														HX_STACK_LINE(258)
														_q->listen_z = listener;
														HX_STACK_LINE(258)
														_q->listen_w = listener;
													}
													HX_STACK_LINE(258)
													bool tmp19 = (_this2->rotation_changed != null());		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(258)
													bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(258)
													if ((tmp19)){
														HX_STACK_LINE(258)
														bool tmp21 = _this2->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(258)
														bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(258)
														tmp20 = !(tmp22);
													}
													else{
														HX_STACK_LINE(258)
														tmp20 = false;
													}
													HX_STACK_LINE(258)
													if ((tmp20)){
														HX_STACK_LINE(258)
														::phoenix::Quaternion tmp21 = _this2->rotation;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(258)
														_this2->rotation_changed(tmp21);
													}
												}
												HX_STACK_LINE(258)
												_this2->rotation;
											}
											HX_STACK_LINE(258)
											{
												HX_STACK_LINE(258)
												::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
												HX_STACK_LINE(258)
												_this2->scale = _s;
												HX_STACK_LINE(258)
												bool tmp18 = (_s != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(258)
												if ((tmp18)){
													HX_STACK_LINE(258)
													::phoenix::Vector tmp19 = _this2->scale;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(258)
													Dynamic tmp20 = _this2->_scale_change_dyn();		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(258)
													::phoenix::Vector_obj::Listen(tmp19,tmp20);
													HX_STACK_LINE(258)
													bool tmp21 = (_this2->scale_changed != null());		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(258)
													bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(258)
													if ((tmp21)){
														HX_STACK_LINE(258)
														bool tmp23 = _this2->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(258)
														bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(258)
														tmp22 = !(tmp24);
													}
													else{
														HX_STACK_LINE(258)
														tmp22 = false;
													}
													HX_STACK_LINE(258)
													if ((tmp22)){
														HX_STACK_LINE(258)
														::phoenix::Vector tmp23 = _this2->scale;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(258)
														_this2->scale_changed(tmp23);
													}
												}
												HX_STACK_LINE(258)
												_this2->scale;
											}
										}
										HX_STACK_LINE(258)
										_this2;
									}
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										_this1->dirty = false;
										HX_STACK_LINE(258)
										bool tmp15 = _this1->dirty;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(258)
										bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(258)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(258)
										if ((tmp16)){
											HX_STACK_LINE(258)
											bool tmp18 = _this1->_setup;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(258)
											bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(258)
											bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(258)
											tmp17 = !(tmp20);
										}
										else{
											HX_STACK_LINE(258)
											tmp17 = false;
										}
										HX_STACK_LINE(258)
										bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(258)
										bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(258)
										if ((tmp18)){
											HX_STACK_LINE(258)
											tmp19 = (_this1->_dirty_handlers != null());
										}
										else{
											HX_STACK_LINE(258)
											tmp19 = false;
										}
										HX_STACK_LINE(258)
										bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(258)
										if ((tmp19)){
											HX_STACK_LINE(258)
											int tmp21 = _this1->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(258)
											int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(258)
											tmp20 = (tmp22 > (int)0);
										}
										else{
											HX_STACK_LINE(258)
											tmp20 = false;
										}
										HX_STACK_LINE(258)
										if ((tmp20)){
											HX_STACK_LINE(258)
											int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(258)
											cpp::ArrayBase _g11 = _this1->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(258)
											while((true)){
												HX_STACK_LINE(258)
												bool tmp21 = (_g2 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(258)
												bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(258)
												if ((tmp22)){
													HX_STACK_LINE(258)
													break;
												}
												HX_STACK_LINE(258)
												Dynamic tmp23 = _g11->__GetItem(_g2);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(258)
												Dynamic _handler = tmp23;		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(258)
												++(_g2);
												HX_STACK_LINE(258)
												bool tmp24 = (_handler != null());		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(258)
												if ((tmp24)){
													HX_STACK_LINE(258)
													::phoenix::Transform tmp25 = _this1;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(258)
													_handler(tmp25).Cast< Void >();
												}
											}
										}
										HX_STACK_LINE(258)
										_this1->dirty;
									}
									HX_STACK_LINE(258)
									_this1->_cleaning = false;
									HX_STACK_LINE(258)
									bool tmp15 = (_this1->_clean_handlers != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(258)
									bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(258)
									if ((tmp15)){
										HX_STACK_LINE(258)
										int tmp17 = _this1->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(258)
										int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(258)
										tmp16 = (tmp18 > (int)0);
									}
									else{
										HX_STACK_LINE(258)
										tmp16 = false;
									}
									HX_STACK_LINE(258)
									if ((tmp16)){
										HX_STACK_LINE(258)
										int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(258)
										cpp::ArrayBase _g11 = _this1->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(258)
										while((true)){
											HX_STACK_LINE(258)
											bool tmp17 = (_g2 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(258)
											bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(258)
											if ((tmp18)){
												HX_STACK_LINE(258)
												break;
											}
											HX_STACK_LINE(258)
											Dynamic tmp19 = _g11->__GetItem(_g2);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(258)
											Dynamic _handler = tmp19;		HX_STACK_VAR(_handler,"_handler");
											HX_STACK_LINE(258)
											++(_g2);
											HX_STACK_LINE(258)
											bool tmp20 = (_handler != null());		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(258)
											if ((tmp20)){
												HX_STACK_LINE(258)
												::phoenix::Transform tmp21 = _this1;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(258)
												_handler(tmp21).Cast< Void >();
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(258)
						tmp5 = _this1->world;
					}
					HX_STACK_LINE(258)
					::phoenix::Spatial _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(258)
					tmp4 = _this1->matrix;
				}
				HX_STACK_LINE(258)
				::phoenix::Matrix _m = tmp4;		HX_STACK_VAR(_m,"_m");
				HX_STACK_LINE(258)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(258)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(258)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(258)
				Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					Float tmp5 = e->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(258)
					Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(258)
					Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(258)
					Float tmp8 = e->__get((int)4);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(258)
					Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(258)
					Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(258)
					Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(258)
					Float tmp12 = e->__get((int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(258)
					Float tmp13 = _z;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(258)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(258)
					Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(258)
					Float tmp16 = e->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(258)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(258)
					Float _x1 = tmp17;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(258)
					Float tmp18 = e->__get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(258)
					Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(258)
					Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(258)
					Float tmp21 = e->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(258)
					Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(258)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(258)
					Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(258)
					Float tmp25 = e->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(258)
					Float tmp26 = _z;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(258)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(258)
					Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(258)
					Float tmp29 = e->__get((int)13);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(258)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(258)
					Float _y1 = tmp30;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(258)
					Float tmp31 = e->__get((int)2);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(258)
					Float tmp32 = _x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(258)
					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(258)
					Float tmp34 = e->__get((int)6);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(258)
					Float tmp35 = _y;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(258)
					Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(258)
					Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(258)
					Float tmp38 = e->__get((int)10);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(258)
					Float tmp39 = _z;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(258)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(258)
					Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(258)
					Float tmp42 = e->__get((int)14);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(258)
					Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(258)
					Float _z1 = tmp43;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(258)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(258)
					_this->ignore_listeners = true;
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						_this->x = _x1;
						HX_STACK_LINE(258)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(258)
						if ((tmp44)){
							HX_STACK_LINE(258)
							_this->x;
						}
						else{
							HX_STACK_LINE(258)
							bool tmp45 = (_this->listen_x != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(258)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(258)
							if ((tmp45)){
								HX_STACK_LINE(258)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(258)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(258)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(258)
								tmp46 = false;
							}
							HX_STACK_LINE(258)
							if ((tmp46)){
								HX_STACK_LINE(258)
								Float tmp47 = _x1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(258)
								_this->listen_x(tmp47);
							}
							HX_STACK_LINE(258)
							_this->x;
						}
					}
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						_this->y = _y1;
						HX_STACK_LINE(258)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(258)
						if ((tmp44)){
							HX_STACK_LINE(258)
							_this->y;
						}
						else{
							HX_STACK_LINE(258)
							bool tmp45 = (_this->listen_y != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(258)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(258)
							if ((tmp45)){
								HX_STACK_LINE(258)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(258)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(258)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(258)
								tmp46 = false;
							}
							HX_STACK_LINE(258)
							if ((tmp46)){
								HX_STACK_LINE(258)
								Float tmp47 = _y1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(258)
								_this->listen_y(tmp47);
							}
							HX_STACK_LINE(258)
							_this->y;
						}
					}
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						_this->z = _z1;
						HX_STACK_LINE(258)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(258)
						if ((tmp44)){
							HX_STACK_LINE(258)
							_this->z;
						}
						else{
							HX_STACK_LINE(258)
							bool tmp45 = (_this->listen_z != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(258)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(258)
							if ((tmp45)){
								HX_STACK_LINE(258)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(258)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(258)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(258)
								tmp46 = false;
							}
							HX_STACK_LINE(258)
							if ((tmp46)){
								HX_STACK_LINE(258)
								Float tmp47 = _z1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(258)
								_this->listen_z(tmp47);
							}
							HX_STACK_LINE(258)
							_this->z;
						}
					}
					HX_STACK_LINE(258)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(258)
					bool tmp44 = (_this->listen_x != null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(258)
					bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(258)
					if ((tmp44)){
						HX_STACK_LINE(258)
						bool tmp46 = _this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(258)
						bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(258)
						tmp45 = !(tmp47);
					}
					else{
						HX_STACK_LINE(258)
						tmp45 = false;
					}
					HX_STACK_LINE(258)
					if ((tmp45)){
						HX_STACK_LINE(258)
						Float tmp46 = _this->x;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(258)
						_this->listen_x(tmp46);
					}
					HX_STACK_LINE(258)
					bool tmp46 = (_this->listen_y != null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(258)
					bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(258)
					if ((tmp46)){
						HX_STACK_LINE(258)
						bool tmp48 = _this->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(258)
						bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(258)
						tmp47 = !(tmp49);
					}
					else{
						HX_STACK_LINE(258)
						tmp47 = false;
					}
					HX_STACK_LINE(258)
					if ((tmp47)){
						HX_STACK_LINE(258)
						Float tmp48 = _this->y;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(258)
						_this->listen_y(tmp48);
					}
					HX_STACK_LINE(258)
					bool tmp48 = (_this->listen_z != null());		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(258)
					bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(258)
					if ((tmp48)){
						HX_STACK_LINE(258)
						bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(258)
						bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(258)
						tmp49 = !(tmp51);
					}
					else{
						HX_STACK_LINE(258)
						tmp49 = false;
					}
					HX_STACK_LINE(258)
					if ((tmp49)){
						HX_STACK_LINE(258)
						Float tmp50 = _this->z;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(258)
						_this->listen_z(tmp50);
					}
					HX_STACK_LINE(258)
					_this;
				}
				HX_STACK_LINE(258)
				_this;
			}
			HX_STACK_LINE(268)
			{
				HX_STACK_LINE(268)
				::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(268)
				Float val = tmp3->x;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(268)
				{
					HX_STACK_LINE(268)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(268)
					::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (vert_index * (int)4)),val);
					HX_STACK_LINE(268)
					val;
				}
			}
			HX_STACK_LINE(269)
			{
				HX_STACK_LINE(269)
				::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(269)
				Float val = tmp3->y;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(269)
				{
					HX_STACK_LINE(269)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(269)
					::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),val);
					HX_STACK_LINE(269)
					val;
				}
			}
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(270)
				Float val = tmp3->z;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(270)
				{
					HX_STACK_LINE(270)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(270)
					::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),val);
					HX_STACK_LINE(270)
					val;
				}
			}
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(271)
				::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(271)
				Float val = tmp3->w;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(271)
				{
					HX_STACK_LINE(271)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(271)
					::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),val);
					HX_STACK_LINE(271)
					val;
				}
			}
			HX_STACK_LINE(274)
			hx::AddEq(vert_index,(int)4);
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				::phoenix::geometry::TextureCoord tmp3 = v->uv->uv0;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(283)
				Float val = tmp3->u;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(283)
				{
					HX_STACK_LINE(283)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(283)
					::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (tcoord_index * (int)4)),val);
					HX_STACK_LINE(283)
					val;
				}
			}
			HX_STACK_LINE(284)
			{
				HX_STACK_LINE(284)
				::phoenix::geometry::TextureCoord tmp3 = v->uv->uv0;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(284)
				Float val = tmp3->v;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(284)
				{
					HX_STACK_LINE(284)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(284)
					::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),val);
					HX_STACK_LINE(284)
					val;
				}
			}
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				::phoenix::geometry::TextureCoord tmp3 = v->uv->uv0;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(285)
				Float val = tmp3->w;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(285)
				{
					HX_STACK_LINE(285)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(285)
					::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),val);
					HX_STACK_LINE(285)
					val;
				}
			}
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				::phoenix::geometry::TextureCoord tmp3 = v->uv->uv0;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(286)
				Float val = tmp3->t;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(286)
					::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),val);
					HX_STACK_LINE(286)
					val;
				}
			}
			HX_STACK_LINE(289)
			hx::AddEq(tcoord_index,(int)4);
			HX_STACK_LINE(299)
			{
				HX_STACK_LINE(299)
				Float tmp3 = v->color->r;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(299)
				Float val = tmp3;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(299)
					::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (color_index * (int)4)),val);
					HX_STACK_LINE(299)
					val;
				}
			}
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(300)
				Float tmp3 = v->color->g;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(300)
				Float val = tmp3;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(300)
				{
					HX_STACK_LINE(300)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(300)
					::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),val);
					HX_STACK_LINE(300)
					val;
				}
			}
			HX_STACK_LINE(301)
			{
				HX_STACK_LINE(301)
				Float tmp3 = v->color->b;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(301)
				Float val = tmp3;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(301)
					::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),val);
					HX_STACK_LINE(301)
					val;
				}
			}
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				Float tmp3 = v->color->a;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(302)
				Float val = tmp3;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(302)
					::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),val);
					HX_STACK_LINE(302)
					val;
				}
			}
			HX_STACK_LINE(306)
			hx::AddEq(color_index,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Geometry_obj,batch,(void))

Void Geometry_obj::batch_into_arrays( Array< Float > vertlist,Array< Float > tcoordlist,Array< Float > colorlist,Array< Float > normallist){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","batch_into_arrays",0xe545c1b5,"phoenix.geometry.Geometry.batch_into_arrays","phoenix/geometry/Geometry.hx",323,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertlist,"vertlist")
		HX_STACK_ARG(tcoordlist,"tcoordlist")
		HX_STACK_ARG(colorlist,"colorlist")
		HX_STACK_ARG(normallist,"normallist")
		HX_STACK_LINE(323)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(323)
		Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(323)
		while((true)){
			HX_STACK_LINE(323)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(323)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(323)
			if ((tmp1)){
				HX_STACK_LINE(323)
				break;
			}
			HX_STACK_LINE(323)
			::phoenix::geometry::Vertex tmp2 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(323)
			::phoenix::geometry::Vertex v = tmp2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(323)
			++(_g);
			HX_STACK_LINE(326)
			{
				HX_STACK_LINE(326)
				::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(326)
				::phoenix::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(326)
				Float tmp4 = v->pos->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(326)
				Float _x = tmp4;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(326)
				Float tmp5 = v->pos->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(326)
				Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(326)
				Float tmp6 = v->pos->z;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(326)
				Float _z = tmp6;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(326)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(326)
				_this->ignore_listeners = true;
				HX_STACK_LINE(326)
				{
					HX_STACK_LINE(326)
					_this->x = _x;
					HX_STACK_LINE(326)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(326)
					if ((tmp7)){
						HX_STACK_LINE(326)
						_this->x;
					}
					else{
						HX_STACK_LINE(326)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(326)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(326)
						if ((tmp8)){
							HX_STACK_LINE(326)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(326)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(326)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(326)
							tmp9 = false;
						}
						HX_STACK_LINE(326)
						if ((tmp9)){
							HX_STACK_LINE(326)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(326)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(326)
						_this->x;
					}
				}
				HX_STACK_LINE(326)
				{
					HX_STACK_LINE(326)
					_this->y = _y;
					HX_STACK_LINE(326)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(326)
					if ((tmp7)){
						HX_STACK_LINE(326)
						_this->y;
					}
					else{
						HX_STACK_LINE(326)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(326)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(326)
						if ((tmp8)){
							HX_STACK_LINE(326)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(326)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(326)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(326)
							tmp9 = false;
						}
						HX_STACK_LINE(326)
						if ((tmp9)){
							HX_STACK_LINE(326)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(326)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(326)
						_this->y;
					}
				}
				HX_STACK_LINE(326)
				{
					HX_STACK_LINE(326)
					_this->z = _z;
					HX_STACK_LINE(326)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(326)
					if ((tmp7)){
						HX_STACK_LINE(326)
						_this->z;
					}
					else{
						HX_STACK_LINE(326)
						bool tmp8 = (_this->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(326)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(326)
						if ((tmp8)){
							HX_STACK_LINE(326)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(326)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(326)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(326)
							tmp9 = false;
						}
						HX_STACK_LINE(326)
						if ((tmp9)){
							HX_STACK_LINE(326)
							Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(326)
							_this->listen_z(tmp10);
						}
						HX_STACK_LINE(326)
						_this->z;
					}
				}
				HX_STACK_LINE(326)
				Float tmp7 = v->pos->w;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(326)
				_this->w = tmp7;
				HX_STACK_LINE(326)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(326)
				bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(326)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(326)
				if ((tmp8)){
					HX_STACK_LINE(326)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(326)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(326)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(326)
					tmp9 = false;
				}
				HX_STACK_LINE(326)
				if ((tmp9)){
					HX_STACK_LINE(326)
					Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(326)
					_this->listen_x(tmp10);
				}
				HX_STACK_LINE(326)
				bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(326)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(326)
				if ((tmp10)){
					HX_STACK_LINE(326)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(326)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(326)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(326)
					tmp11 = false;
				}
				HX_STACK_LINE(326)
				if ((tmp11)){
					HX_STACK_LINE(326)
					Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(326)
					_this->listen_y(tmp12);
				}
				HX_STACK_LINE(326)
				bool tmp12 = (_this->listen_z != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(326)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(326)
				if ((tmp12)){
					HX_STACK_LINE(326)
					bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(326)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(326)
					tmp13 = !(tmp15);
				}
				else{
					HX_STACK_LINE(326)
					tmp13 = false;
				}
				HX_STACK_LINE(326)
				if ((tmp13)){
					HX_STACK_LINE(326)
					Float tmp14 = _this->z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(326)
					_this->listen_z(tmp14);
				}
				HX_STACK_LINE(326)
				_this;
			}
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(328)
				::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(328)
				::phoenix::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(328)
				::phoenix::Matrix tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(328)
				{
					HX_STACK_LINE(328)
					::phoenix::Spatial tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						::phoenix::Transform tmp6 = this->transform;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(328)
						::phoenix::Transform _this1 = tmp6;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(328)
						bool tmp7 = _this1->_destroying;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(328)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(328)
						if ((tmp8)){
							HX_STACK_LINE(328)
							bool tmp9 = (_this1->parent != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(328)
							if ((tmp9)){
								HX_STACK_LINE(328)
								bool tmp10 = _this1->parent->dirty;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(328)
								if ((tmp10)){
									HX_STACK_LINE(328)
									::phoenix::Transform _this2 = _this1->parent;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(328)
									bool tmp11 = _this2->dirty;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(328)
									bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(328)
									if ((tmp12)){
										HX_STACK_LINE(328)
										Dynamic();
									}
									else{
										HX_STACK_LINE(328)
										_this2->_cleaning = true;
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											::phoenix::Matrix _this3 = _this2->_pos_matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(328)
												e[(int)0] = (int)1;
												HX_STACK_LINE(328)
												e[(int)4] = (int)0;
												HX_STACK_LINE(328)
												e[(int)8] = (int)0;
												HX_STACK_LINE(328)
												::phoenix::Vector tmp13 = _this2->local->pos;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(328)
												Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(328)
												e[(int)12] = tmp14;
												HX_STACK_LINE(328)
												e[(int)1] = (int)0;
												HX_STACK_LINE(328)
												e[(int)5] = (int)1;
												HX_STACK_LINE(328)
												e[(int)9] = (int)0;
												HX_STACK_LINE(328)
												::phoenix::Vector tmp15 = _this2->local->pos;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(328)
												Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(328)
												e[(int)13] = tmp16;
												HX_STACK_LINE(328)
												e[(int)2] = (int)0;
												HX_STACK_LINE(328)
												e[(int)6] = (int)0;
												HX_STACK_LINE(328)
												e[(int)10] = (int)1;
												HX_STACK_LINE(328)
												::phoenix::Vector tmp17 = _this2->local->pos;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(328)
												Float tmp18 = tmp17->z;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(328)
												e[(int)14] = tmp18;
												HX_STACK_LINE(328)
												e[(int)3] = (int)0;
												HX_STACK_LINE(328)
												e[(int)7] = (int)0;
												HX_STACK_LINE(328)
												e[(int)11] = (int)0;
												HX_STACK_LINE(328)
												e[(int)15] = (int)1;
												HX_STACK_LINE(328)
												_this3;
											}
											HX_STACK_LINE(328)
											_this3;
										}
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											::phoenix::Matrix _this3 = _this2->_rotation_matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(328)
											::phoenix::Quaternion tmp13 = _this2->local->rotation;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(328)
											::phoenix::Quaternion q = tmp13;		HX_STACK_VAR(q,"q");
											HX_STACK_LINE(328)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(328)
											Float tmp14 = (q->x + q->x);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(328)
											Float x2 = tmp14;		HX_STACK_VAR(x2,"x2");
											HX_STACK_LINE(328)
											Float tmp15 = (q->y + q->y);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(328)
											Float y2 = tmp15;		HX_STACK_VAR(y2,"y2");
											HX_STACK_LINE(328)
											Float tmp16 = (q->z + q->z);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(328)
											Float z2 = tmp16;		HX_STACK_VAR(z2,"z2");
											HX_STACK_LINE(328)
											Float tmp17 = (q->x * x2);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(328)
											Float xx = tmp17;		HX_STACK_VAR(xx,"xx");
											HX_STACK_LINE(328)
											Float tmp18 = (q->x * y2);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(328)
											Float xy = tmp18;		HX_STACK_VAR(xy,"xy");
											HX_STACK_LINE(328)
											Float tmp19 = (q->x * z2);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(328)
											Float xz = tmp19;		HX_STACK_VAR(xz,"xz");
											HX_STACK_LINE(328)
											Float tmp20 = (q->y * y2);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(328)
											Float yy = tmp20;		HX_STACK_VAR(yy,"yy");
											HX_STACK_LINE(328)
											Float tmp21 = (q->y * z2);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(328)
											Float yz = tmp21;		HX_STACK_VAR(yz,"yz");
											HX_STACK_LINE(328)
											Float tmp22 = (q->z * z2);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(328)
											Float zz = tmp22;		HX_STACK_VAR(zz,"zz");
											HX_STACK_LINE(328)
											Float tmp23 = (q->w * x2);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(328)
											Float wx = tmp23;		HX_STACK_VAR(wx,"wx");
											HX_STACK_LINE(328)
											Float tmp24 = (q->w * y2);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(328)
											Float wy = tmp24;		HX_STACK_VAR(wy,"wy");
											HX_STACK_LINE(328)
											Float tmp25 = (q->w * z2);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(328)
											Float wz = tmp25;		HX_STACK_VAR(wz,"wz");
											HX_STACK_LINE(328)
											Float tmp26 = (yy + zz);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(328)
											Float tmp27 = ((int)1 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(328)
											te[(int)0] = tmp27;
											HX_STACK_LINE(328)
											Float tmp28 = (xy - wz);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(328)
											te[(int)4] = tmp28;
											HX_STACK_LINE(328)
											Float tmp29 = (xz + wy);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(328)
											te[(int)8] = tmp29;
											HX_STACK_LINE(328)
											Float tmp30 = (xy + wz);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(328)
											te[(int)1] = tmp30;
											HX_STACK_LINE(328)
											Float tmp31 = (xx + zz);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(328)
											Float tmp32 = ((int)1 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(328)
											te[(int)5] = tmp32;
											HX_STACK_LINE(328)
											Float tmp33 = (yz - wx);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(328)
											te[(int)9] = tmp33;
											HX_STACK_LINE(328)
											Float tmp34 = (xz - wy);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(328)
											te[(int)2] = tmp34;
											HX_STACK_LINE(328)
											Float tmp35 = (yz + wx);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(328)
											te[(int)6] = tmp35;
											HX_STACK_LINE(328)
											Float tmp36 = (xx + yy);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(328)
											Float tmp37 = ((int)1 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(328)
											te[(int)10] = tmp37;
											HX_STACK_LINE(328)
											te[(int)3] = (int)0;
											HX_STACK_LINE(328)
											te[(int)7] = (int)0;
											HX_STACK_LINE(328)
											te[(int)11] = (int)0;
											HX_STACK_LINE(328)
											te[(int)12] = (int)0;
											HX_STACK_LINE(328)
											te[(int)13] = (int)0;
											HX_STACK_LINE(328)
											te[(int)14] = (int)0;
											HX_STACK_LINE(328)
											te[(int)15] = (int)1;
											HX_STACK_LINE(328)
											_this3;
										}
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											::phoenix::Matrix _this3 = _this2->_origin_undo_matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(328)
												e[(int)0] = (int)1;
												HX_STACK_LINE(328)
												e[(int)4] = (int)0;
												HX_STACK_LINE(328)
												e[(int)8] = (int)0;
												HX_STACK_LINE(328)
												Float tmp13 = _this2->origin->x;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(328)
												Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(328)
												e[(int)12] = tmp14;
												HX_STACK_LINE(328)
												e[(int)1] = (int)0;
												HX_STACK_LINE(328)
												e[(int)5] = (int)1;
												HX_STACK_LINE(328)
												e[(int)9] = (int)0;
												HX_STACK_LINE(328)
												Float tmp15 = _this2->origin->y;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(328)
												Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(328)
												e[(int)13] = tmp16;
												HX_STACK_LINE(328)
												e[(int)2] = (int)0;
												HX_STACK_LINE(328)
												e[(int)6] = (int)0;
												HX_STACK_LINE(328)
												e[(int)10] = (int)1;
												HX_STACK_LINE(328)
												Float tmp17 = _this2->origin->z;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(328)
												Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(328)
												e[(int)14] = tmp18;
												HX_STACK_LINE(328)
												e[(int)3] = (int)0;
												HX_STACK_LINE(328)
												e[(int)7] = (int)0;
												HX_STACK_LINE(328)
												e[(int)11] = (int)0;
												HX_STACK_LINE(328)
												e[(int)15] = (int)1;
												HX_STACK_LINE(328)
												_this3;
											}
											HX_STACK_LINE(328)
											_this3;
										}
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											::phoenix::Matrix tmp13 = _this2->local->matrix;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(328)
											::phoenix::Matrix _this3 = tmp13;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(328)
												e[(int)0] = (int)1;
												HX_STACK_LINE(328)
												e[(int)4] = (int)0;
												HX_STACK_LINE(328)
												e[(int)8] = (int)0;
												HX_STACK_LINE(328)
												Float tmp14 = _this2->origin->x;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(328)
												e[(int)12] = tmp14;
												HX_STACK_LINE(328)
												e[(int)1] = (int)0;
												HX_STACK_LINE(328)
												e[(int)5] = (int)1;
												HX_STACK_LINE(328)
												e[(int)9] = (int)0;
												HX_STACK_LINE(328)
												Float tmp15 = _this2->origin->y;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(328)
												e[(int)13] = tmp15;
												HX_STACK_LINE(328)
												e[(int)2] = (int)0;
												HX_STACK_LINE(328)
												e[(int)6] = (int)0;
												HX_STACK_LINE(328)
												e[(int)10] = (int)1;
												HX_STACK_LINE(328)
												Float tmp16 = _this2->origin->z;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(328)
												e[(int)14] = tmp16;
												HX_STACK_LINE(328)
												e[(int)3] = (int)0;
												HX_STACK_LINE(328)
												e[(int)7] = (int)0;
												HX_STACK_LINE(328)
												e[(int)11] = (int)0;
												HX_STACK_LINE(328)
												e[(int)15] = (int)1;
												HX_STACK_LINE(328)
												_this3;
											}
											HX_STACK_LINE(328)
											_this3;
										}
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											::phoenix::Matrix tmp13 = _this2->local->matrix;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(328)
											::phoenix::Matrix _this3 = tmp13;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(328)
												Array< Float > be = _this2->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(328)
												Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(328)
												Float tmp14 = ae->__get((int)0);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(328)
												Float a11 = tmp14;		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(328)
												Float tmp15 = ae->__get((int)4);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(328)
												Float a12 = tmp15;		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(328)
												Float tmp16 = ae->__get((int)8);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(328)
												Float a13 = tmp16;		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(328)
												Float tmp17 = ae->__get((int)12);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(328)
												Float a14 = tmp17;		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(328)
												Float tmp18 = ae->__get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(328)
												Float a21 = tmp18;		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(328)
												Float tmp19 = ae->__get((int)5);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(328)
												Float a22 = tmp19;		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(328)
												Float tmp20 = ae->__get((int)9);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(328)
												Float a23 = tmp20;		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(328)
												Float tmp21 = ae->__get((int)13);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(328)
												Float a24 = tmp21;		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(328)
												Float tmp22 = ae->__get((int)2);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(328)
												Float a31 = tmp22;		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(328)
												Float tmp23 = ae->__get((int)6);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(328)
												Float a32 = tmp23;		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(328)
												Float tmp24 = ae->__get((int)10);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(328)
												Float a33 = tmp24;		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(328)
												Float tmp25 = ae->__get((int)14);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(328)
												Float a34 = tmp25;		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(328)
												Float tmp26 = ae->__get((int)3);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(328)
												Float a41 = tmp26;		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(328)
												Float tmp27 = ae->__get((int)7);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(328)
												Float a42 = tmp27;		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(328)
												Float tmp28 = ae->__get((int)11);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(328)
												Float a43 = tmp28;		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(328)
												Float tmp29 = ae->__get((int)15);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(328)
												Float a44 = tmp29;		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(328)
												Float tmp30 = be->__get((int)0);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(328)
												Float b11 = tmp30;		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(328)
												Float tmp31 = be->__get((int)4);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(328)
												Float b12 = tmp31;		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(328)
												Float tmp32 = be->__get((int)8);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(328)
												Float b13 = tmp32;		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(328)
												Float tmp33 = be->__get((int)12);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(328)
												Float b14 = tmp33;		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(328)
												Float tmp34 = be->__get((int)1);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(328)
												Float b21 = tmp34;		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(328)
												Float tmp35 = be->__get((int)5);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(328)
												Float b22 = tmp35;		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(328)
												Float tmp36 = be->__get((int)9);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(328)
												Float b23 = tmp36;		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(328)
												Float tmp37 = be->__get((int)13);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(328)
												Float b24 = tmp37;		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(328)
												Float tmp38 = be->__get((int)2);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(328)
												Float b31 = tmp38;		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(328)
												Float tmp39 = be->__get((int)6);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(328)
												Float b32 = tmp39;		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(328)
												Float tmp40 = be->__get((int)10);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(328)
												Float b33 = tmp40;		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(328)
												Float tmp41 = be->__get((int)14);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(328)
												Float b34 = tmp41;		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(328)
												Float tmp42 = be->__get((int)3);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(328)
												Float b41 = tmp42;		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(328)
												Float tmp43 = be->__get((int)7);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(328)
												Float b42 = tmp43;		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(328)
												Float tmp44 = be->__get((int)11);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(328)
												Float b43 = tmp44;		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(328)
												Float tmp45 = be->__get((int)15);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(328)
												Float b44 = tmp45;		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(328)
												Float tmp46 = (a11 * b11);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(328)
												Float tmp47 = (a12 * b21);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(328)
												Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(328)
												Float tmp49 = (a13 * b31);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(328)
												Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(328)
												Float tmp51 = (a14 * b41);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(328)
												Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(328)
												te[(int)0] = tmp52;
												HX_STACK_LINE(328)
												Float tmp53 = (a11 * b12);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(328)
												Float tmp54 = (a12 * b22);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(328)
												Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(328)
												Float tmp56 = (a13 * b32);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(328)
												Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(328)
												Float tmp58 = (a14 * b42);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(328)
												Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(328)
												te[(int)4] = tmp59;
												HX_STACK_LINE(328)
												Float tmp60 = (a11 * b13);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(328)
												Float tmp61 = (a12 * b23);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(328)
												Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(328)
												Float tmp63 = (a13 * b33);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(328)
												Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(328)
												Float tmp65 = (a14 * b43);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(328)
												Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(328)
												te[(int)8] = tmp66;
												HX_STACK_LINE(328)
												Float tmp67 = (a11 * b14);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(328)
												Float tmp68 = (a12 * b24);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(328)
												Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(328)
												Float tmp70 = (a13 * b34);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(328)
												Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(328)
												Float tmp72 = (a14 * b44);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(328)
												Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(328)
												te[(int)12] = tmp73;
												HX_STACK_LINE(328)
												Float tmp74 = (a21 * b11);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(328)
												Float tmp75 = (a22 * b21);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(328)
												Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(328)
												Float tmp77 = (a23 * b31);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(328)
												Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(328)
												Float tmp79 = (a24 * b41);		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(328)
												Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(328)
												te[(int)1] = tmp80;
												HX_STACK_LINE(328)
												Float tmp81 = (a21 * b12);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(328)
												Float tmp82 = (a22 * b22);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(328)
												Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(328)
												Float tmp84 = (a23 * b32);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(328)
												Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(328)
												Float tmp86 = (a24 * b42);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(328)
												Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(328)
												te[(int)5] = tmp87;
												HX_STACK_LINE(328)
												Float tmp88 = (a21 * b13);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(328)
												Float tmp89 = (a22 * b23);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(328)
												Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(328)
												Float tmp91 = (a23 * b33);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(328)
												Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(328)
												Float tmp93 = (a24 * b43);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(328)
												Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(328)
												te[(int)9] = tmp94;
												HX_STACK_LINE(328)
												Float tmp95 = (a21 * b14);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(328)
												Float tmp96 = (a22 * b24);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(328)
												Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(328)
												Float tmp98 = (a23 * b34);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(328)
												Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(328)
												Float tmp100 = (a24 * b44);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(328)
												Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(328)
												te[(int)13] = tmp101;
												HX_STACK_LINE(328)
												Float tmp102 = (a31 * b11);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(328)
												Float tmp103 = (a32 * b21);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(328)
												Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(328)
												Float tmp105 = (a33 * b31);		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(328)
												Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(328)
												Float tmp107 = (a34 * b41);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(328)
												Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(328)
												te[(int)2] = tmp108;
												HX_STACK_LINE(328)
												Float tmp109 = (a31 * b12);		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(328)
												Float tmp110 = (a32 * b22);		HX_STACK_VAR(tmp110,"tmp110");
												HX_STACK_LINE(328)
												Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
												HX_STACK_LINE(328)
												Float tmp112 = (a33 * b32);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(328)
												Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
												HX_STACK_LINE(328)
												Float tmp114 = (a34 * b42);		HX_STACK_VAR(tmp114,"tmp114");
												HX_STACK_LINE(328)
												Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
												HX_STACK_LINE(328)
												te[(int)6] = tmp115;
												HX_STACK_LINE(328)
												Float tmp116 = (a31 * b13);		HX_STACK_VAR(tmp116,"tmp116");
												HX_STACK_LINE(328)
												Float tmp117 = (a32 * b23);		HX_STACK_VAR(tmp117,"tmp117");
												HX_STACK_LINE(328)
												Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
												HX_STACK_LINE(328)
												Float tmp119 = (a33 * b33);		HX_STACK_VAR(tmp119,"tmp119");
												HX_STACK_LINE(328)
												Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
												HX_STACK_LINE(328)
												Float tmp121 = (a34 * b43);		HX_STACK_VAR(tmp121,"tmp121");
												HX_STACK_LINE(328)
												Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
												HX_STACK_LINE(328)
												te[(int)10] = tmp122;
												HX_STACK_LINE(328)
												Float tmp123 = (a31 * b14);		HX_STACK_VAR(tmp123,"tmp123");
												HX_STACK_LINE(328)
												Float tmp124 = (a32 * b24);		HX_STACK_VAR(tmp124,"tmp124");
												HX_STACK_LINE(328)
												Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
												HX_STACK_LINE(328)
												Float tmp126 = (a33 * b34);		HX_STACK_VAR(tmp126,"tmp126");
												HX_STACK_LINE(328)
												Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
												HX_STACK_LINE(328)
												Float tmp128 = (a34 * b44);		HX_STACK_VAR(tmp128,"tmp128");
												HX_STACK_LINE(328)
												Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
												HX_STACK_LINE(328)
												te[(int)14] = tmp129;
												HX_STACK_LINE(328)
												Float tmp130 = (a41 * b11);		HX_STACK_VAR(tmp130,"tmp130");
												HX_STACK_LINE(328)
												Float tmp131 = (a42 * b21);		HX_STACK_VAR(tmp131,"tmp131");
												HX_STACK_LINE(328)
												Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
												HX_STACK_LINE(328)
												Float tmp133 = (a43 * b31);		HX_STACK_VAR(tmp133,"tmp133");
												HX_STACK_LINE(328)
												Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
												HX_STACK_LINE(328)
												Float tmp135 = (a44 * b41);		HX_STACK_VAR(tmp135,"tmp135");
												HX_STACK_LINE(328)
												Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
												HX_STACK_LINE(328)
												te[(int)3] = tmp136;
												HX_STACK_LINE(328)
												Float tmp137 = (a41 * b12);		HX_STACK_VAR(tmp137,"tmp137");
												HX_STACK_LINE(328)
												Float tmp138 = (a42 * b22);		HX_STACK_VAR(tmp138,"tmp138");
												HX_STACK_LINE(328)
												Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
												HX_STACK_LINE(328)
												Float tmp140 = (a43 * b32);		HX_STACK_VAR(tmp140,"tmp140");
												HX_STACK_LINE(328)
												Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
												HX_STACK_LINE(328)
												Float tmp142 = (a44 * b42);		HX_STACK_VAR(tmp142,"tmp142");
												HX_STACK_LINE(328)
												Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
												HX_STACK_LINE(328)
												te[(int)7] = tmp143;
												HX_STACK_LINE(328)
												Float tmp144 = (a41 * b13);		HX_STACK_VAR(tmp144,"tmp144");
												HX_STACK_LINE(328)
												Float tmp145 = (a42 * b23);		HX_STACK_VAR(tmp145,"tmp145");
												HX_STACK_LINE(328)
												Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
												HX_STACK_LINE(328)
												Float tmp147 = (a43 * b33);		HX_STACK_VAR(tmp147,"tmp147");
												HX_STACK_LINE(328)
												Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
												HX_STACK_LINE(328)
												Float tmp149 = (a44 * b43);		HX_STACK_VAR(tmp149,"tmp149");
												HX_STACK_LINE(328)
												Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
												HX_STACK_LINE(328)
												te[(int)11] = tmp150;
												HX_STACK_LINE(328)
												Float tmp151 = (a41 * b14);		HX_STACK_VAR(tmp151,"tmp151");
												HX_STACK_LINE(328)
												Float tmp152 = (a42 * b24);		HX_STACK_VAR(tmp152,"tmp152");
												HX_STACK_LINE(328)
												Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
												HX_STACK_LINE(328)
												Float tmp154 = (a43 * b34);		HX_STACK_VAR(tmp154,"tmp154");
												HX_STACK_LINE(328)
												Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
												HX_STACK_LINE(328)
												Float tmp156 = (a44 * b44);		HX_STACK_VAR(tmp156,"tmp156");
												HX_STACK_LINE(328)
												Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
												HX_STACK_LINE(328)
												te[(int)15] = tmp157;
												HX_STACK_LINE(328)
												_this3;
											}
										}
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											::phoenix::Matrix tmp13 = _this2->local->matrix;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(328)
											::phoenix::Matrix _this3 = tmp13;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(328)
											::phoenix::Vector tmp14 = _this2->local->scale;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(328)
											::phoenix::Vector _v = tmp14;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(328)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(328)
											Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
											HX_STACK_LINE(328)
											Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
											HX_STACK_LINE(328)
											Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
											HX_STACK_LINE(328)
											Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(328)
											hx::MultEq(te[(int)0],tmp15);
											HX_STACK_LINE(328)
											Float tmp16 = _y;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(328)
											hx::MultEq(te[(int)4],tmp16);
											HX_STACK_LINE(328)
											Float tmp17 = _z;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(328)
											hx::MultEq(te[(int)8],tmp17);
											HX_STACK_LINE(328)
											Float tmp18 = _x;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(328)
											hx::MultEq(te[(int)1],tmp18);
											HX_STACK_LINE(328)
											Float tmp19 = _y;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(328)
											hx::MultEq(te[(int)5],tmp19);
											HX_STACK_LINE(328)
											Float tmp20 = _z;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(328)
											hx::MultEq(te[(int)9],tmp20);
											HX_STACK_LINE(328)
											Float tmp21 = _x;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(328)
											hx::MultEq(te[(int)2],tmp21);
											HX_STACK_LINE(328)
											Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(328)
											hx::MultEq(te[(int)6],tmp22);
											HX_STACK_LINE(328)
											Float tmp23 = _z;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(328)
											hx::MultEq(te[(int)10],tmp23);
											HX_STACK_LINE(328)
											Float tmp24 = _x;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(328)
											hx::MultEq(te[(int)3],tmp24);
											HX_STACK_LINE(328)
											Float tmp25 = _y;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(328)
											hx::MultEq(te[(int)7],tmp25);
											HX_STACK_LINE(328)
											Float tmp26 = _z;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(328)
											hx::MultEq(te[(int)11],tmp26);
											HX_STACK_LINE(328)
											_this3;
										}
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											::phoenix::Matrix tmp13 = _this2->local->matrix;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(328)
											::phoenix::Matrix _this3 = tmp13;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(328)
											::phoenix::Vector tmp14 = _this2->local->pos;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(328)
											::phoenix::Vector _v = tmp14;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(328)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(328)
											Float tmp15 = _v->x;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(328)
											te[(int)12] = tmp15;
											HX_STACK_LINE(328)
											Float tmp16 = _v->y;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(328)
											te[(int)13] = tmp16;
											HX_STACK_LINE(328)
											Float tmp17 = _v->z;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(328)
											te[(int)14] = tmp17;
											HX_STACK_LINE(328)
											_this3;
										}
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											::phoenix::Matrix tmp13 = _this2->local->matrix;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(328)
											::phoenix::Matrix _this3 = tmp13;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(328)
												Array< Float > be = _this2->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(328)
												Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(328)
												Float tmp14 = ae->__get((int)0);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(328)
												Float a11 = tmp14;		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(328)
												Float tmp15 = ae->__get((int)4);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(328)
												Float a12 = tmp15;		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(328)
												Float tmp16 = ae->__get((int)8);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(328)
												Float a13 = tmp16;		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(328)
												Float tmp17 = ae->__get((int)12);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(328)
												Float a14 = tmp17;		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(328)
												Float tmp18 = ae->__get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(328)
												Float a21 = tmp18;		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(328)
												Float tmp19 = ae->__get((int)5);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(328)
												Float a22 = tmp19;		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(328)
												Float tmp20 = ae->__get((int)9);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(328)
												Float a23 = tmp20;		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(328)
												Float tmp21 = ae->__get((int)13);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(328)
												Float a24 = tmp21;		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(328)
												Float tmp22 = ae->__get((int)2);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(328)
												Float a31 = tmp22;		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(328)
												Float tmp23 = ae->__get((int)6);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(328)
												Float a32 = tmp23;		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(328)
												Float tmp24 = ae->__get((int)10);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(328)
												Float a33 = tmp24;		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(328)
												Float tmp25 = ae->__get((int)14);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(328)
												Float a34 = tmp25;		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(328)
												Float tmp26 = ae->__get((int)3);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(328)
												Float a41 = tmp26;		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(328)
												Float tmp27 = ae->__get((int)7);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(328)
												Float a42 = tmp27;		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(328)
												Float tmp28 = ae->__get((int)11);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(328)
												Float a43 = tmp28;		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(328)
												Float tmp29 = ae->__get((int)15);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(328)
												Float a44 = tmp29;		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(328)
												Float tmp30 = be->__get((int)0);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(328)
												Float b11 = tmp30;		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(328)
												Float tmp31 = be->__get((int)4);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(328)
												Float b12 = tmp31;		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(328)
												Float tmp32 = be->__get((int)8);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(328)
												Float b13 = tmp32;		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(328)
												Float tmp33 = be->__get((int)12);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(328)
												Float b14 = tmp33;		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(328)
												Float tmp34 = be->__get((int)1);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(328)
												Float b21 = tmp34;		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(328)
												Float tmp35 = be->__get((int)5);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(328)
												Float b22 = tmp35;		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(328)
												Float tmp36 = be->__get((int)9);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(328)
												Float b23 = tmp36;		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(328)
												Float tmp37 = be->__get((int)13);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(328)
												Float b24 = tmp37;		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(328)
												Float tmp38 = be->__get((int)2);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(328)
												Float b31 = tmp38;		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(328)
												Float tmp39 = be->__get((int)6);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(328)
												Float b32 = tmp39;		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(328)
												Float tmp40 = be->__get((int)10);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(328)
												Float b33 = tmp40;		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(328)
												Float tmp41 = be->__get((int)14);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(328)
												Float b34 = tmp41;		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(328)
												Float tmp42 = be->__get((int)3);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(328)
												Float b41 = tmp42;		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(328)
												Float tmp43 = be->__get((int)7);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(328)
												Float b42 = tmp43;		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(328)
												Float tmp44 = be->__get((int)11);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(328)
												Float b43 = tmp44;		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(328)
												Float tmp45 = be->__get((int)15);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(328)
												Float b44 = tmp45;		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(328)
												Float tmp46 = (a11 * b11);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(328)
												Float tmp47 = (a12 * b21);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(328)
												Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(328)
												Float tmp49 = (a13 * b31);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(328)
												Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(328)
												Float tmp51 = (a14 * b41);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(328)
												Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(328)
												te[(int)0] = tmp52;
												HX_STACK_LINE(328)
												Float tmp53 = (a11 * b12);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(328)
												Float tmp54 = (a12 * b22);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(328)
												Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(328)
												Float tmp56 = (a13 * b32);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(328)
												Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(328)
												Float tmp58 = (a14 * b42);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(328)
												Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(328)
												te[(int)4] = tmp59;
												HX_STACK_LINE(328)
												Float tmp60 = (a11 * b13);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(328)
												Float tmp61 = (a12 * b23);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(328)
												Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(328)
												Float tmp63 = (a13 * b33);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(328)
												Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(328)
												Float tmp65 = (a14 * b43);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(328)
												Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(328)
												te[(int)8] = tmp66;
												HX_STACK_LINE(328)
												Float tmp67 = (a11 * b14);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(328)
												Float tmp68 = (a12 * b24);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(328)
												Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(328)
												Float tmp70 = (a13 * b34);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(328)
												Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(328)
												Float tmp72 = (a14 * b44);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(328)
												Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(328)
												te[(int)12] = tmp73;
												HX_STACK_LINE(328)
												Float tmp74 = (a21 * b11);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(328)
												Float tmp75 = (a22 * b21);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(328)
												Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(328)
												Float tmp77 = (a23 * b31);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(328)
												Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(328)
												Float tmp79 = (a24 * b41);		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(328)
												Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(328)
												te[(int)1] = tmp80;
												HX_STACK_LINE(328)
												Float tmp81 = (a21 * b12);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(328)
												Float tmp82 = (a22 * b22);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(328)
												Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(328)
												Float tmp84 = (a23 * b32);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(328)
												Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(328)
												Float tmp86 = (a24 * b42);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(328)
												Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(328)
												te[(int)5] = tmp87;
												HX_STACK_LINE(328)
												Float tmp88 = (a21 * b13);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(328)
												Float tmp89 = (a22 * b23);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(328)
												Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(328)
												Float tmp91 = (a23 * b33);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(328)
												Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(328)
												Float tmp93 = (a24 * b43);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(328)
												Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(328)
												te[(int)9] = tmp94;
												HX_STACK_LINE(328)
												Float tmp95 = (a21 * b14);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(328)
												Float tmp96 = (a22 * b24);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(328)
												Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(328)
												Float tmp98 = (a23 * b34);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(328)
												Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(328)
												Float tmp100 = (a24 * b44);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(328)
												Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(328)
												te[(int)13] = tmp101;
												HX_STACK_LINE(328)
												Float tmp102 = (a31 * b11);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(328)
												Float tmp103 = (a32 * b21);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(328)
												Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(328)
												Float tmp105 = (a33 * b31);		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(328)
												Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(328)
												Float tmp107 = (a34 * b41);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(328)
												Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(328)
												te[(int)2] = tmp108;
												HX_STACK_LINE(328)
												Float tmp109 = (a31 * b12);		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(328)
												Float tmp110 = (a32 * b22);		HX_STACK_VAR(tmp110,"tmp110");
												HX_STACK_LINE(328)
												Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
												HX_STACK_LINE(328)
												Float tmp112 = (a33 * b32);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(328)
												Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
												HX_STACK_LINE(328)
												Float tmp114 = (a34 * b42);		HX_STACK_VAR(tmp114,"tmp114");
												HX_STACK_LINE(328)
												Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
												HX_STACK_LINE(328)
												te[(int)6] = tmp115;
												HX_STACK_LINE(328)
												Float tmp116 = (a31 * b13);		HX_STACK_VAR(tmp116,"tmp116");
												HX_STACK_LINE(328)
												Float tmp117 = (a32 * b23);		HX_STACK_VAR(tmp117,"tmp117");
												HX_STACK_LINE(328)
												Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
												HX_STACK_LINE(328)
												Float tmp119 = (a33 * b33);		HX_STACK_VAR(tmp119,"tmp119");
												HX_STACK_LINE(328)
												Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
												HX_STACK_LINE(328)
												Float tmp121 = (a34 * b43);		HX_STACK_VAR(tmp121,"tmp121");
												HX_STACK_LINE(328)
												Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
												HX_STACK_LINE(328)
												te[(int)10] = tmp122;
												HX_STACK_LINE(328)
												Float tmp123 = (a31 * b14);		HX_STACK_VAR(tmp123,"tmp123");
												HX_STACK_LINE(328)
												Float tmp124 = (a32 * b24);		HX_STACK_VAR(tmp124,"tmp124");
												HX_STACK_LINE(328)
												Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
												HX_STACK_LINE(328)
												Float tmp126 = (a33 * b34);		HX_STACK_VAR(tmp126,"tmp126");
												HX_STACK_LINE(328)
												Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
												HX_STACK_LINE(328)
												Float tmp128 = (a34 * b44);		HX_STACK_VAR(tmp128,"tmp128");
												HX_STACK_LINE(328)
												Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
												HX_STACK_LINE(328)
												te[(int)14] = tmp129;
												HX_STACK_LINE(328)
												Float tmp130 = (a41 * b11);		HX_STACK_VAR(tmp130,"tmp130");
												HX_STACK_LINE(328)
												Float tmp131 = (a42 * b21);		HX_STACK_VAR(tmp131,"tmp131");
												HX_STACK_LINE(328)
												Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
												HX_STACK_LINE(328)
												Float tmp133 = (a43 * b31);		HX_STACK_VAR(tmp133,"tmp133");
												HX_STACK_LINE(328)
												Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
												HX_STACK_LINE(328)
												Float tmp135 = (a44 * b41);		HX_STACK_VAR(tmp135,"tmp135");
												HX_STACK_LINE(328)
												Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
												HX_STACK_LINE(328)
												te[(int)3] = tmp136;
												HX_STACK_LINE(328)
												Float tmp137 = (a41 * b12);		HX_STACK_VAR(tmp137,"tmp137");
												HX_STACK_LINE(328)
												Float tmp138 = (a42 * b22);		HX_STACK_VAR(tmp138,"tmp138");
												HX_STACK_LINE(328)
												Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
												HX_STACK_LINE(328)
												Float tmp140 = (a43 * b32);		HX_STACK_VAR(tmp140,"tmp140");
												HX_STACK_LINE(328)
												Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
												HX_STACK_LINE(328)
												Float tmp142 = (a44 * b42);		HX_STACK_VAR(tmp142,"tmp142");
												HX_STACK_LINE(328)
												Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
												HX_STACK_LINE(328)
												te[(int)7] = tmp143;
												HX_STACK_LINE(328)
												Float tmp144 = (a41 * b13);		HX_STACK_VAR(tmp144,"tmp144");
												HX_STACK_LINE(328)
												Float tmp145 = (a42 * b23);		HX_STACK_VAR(tmp145,"tmp145");
												HX_STACK_LINE(328)
												Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
												HX_STACK_LINE(328)
												Float tmp147 = (a43 * b33);		HX_STACK_VAR(tmp147,"tmp147");
												HX_STACK_LINE(328)
												Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
												HX_STACK_LINE(328)
												Float tmp149 = (a44 * b43);		HX_STACK_VAR(tmp149,"tmp149");
												HX_STACK_LINE(328)
												Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
												HX_STACK_LINE(328)
												te[(int)11] = tmp150;
												HX_STACK_LINE(328)
												Float tmp151 = (a41 * b14);		HX_STACK_VAR(tmp151,"tmp151");
												HX_STACK_LINE(328)
												Float tmp152 = (a42 * b24);		HX_STACK_VAR(tmp152,"tmp152");
												HX_STACK_LINE(328)
												Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
												HX_STACK_LINE(328)
												Float tmp154 = (a43 * b34);		HX_STACK_VAR(tmp154,"tmp154");
												HX_STACK_LINE(328)
												Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
												HX_STACK_LINE(328)
												Float tmp156 = (a44 * b44);		HX_STACK_VAR(tmp156,"tmp156");
												HX_STACK_LINE(328)
												Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
												HX_STACK_LINE(328)
												te[(int)15] = tmp157;
												HX_STACK_LINE(328)
												_this3;
											}
										}
										HX_STACK_LINE(328)
										bool tmp13 = (_this2->parent != null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(328)
										if ((tmp13)){
											HX_STACK_LINE(328)
											::phoenix::Spatial tmp14 = _this2->get_world();		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(328)
											::phoenix::Spatial _this3 = tmp14;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(328)
											::phoenix::Matrix tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												::phoenix::Matrix tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(328)
												{
													HX_STACK_LINE(328)
													::phoenix::Spatial tmp17 = _this2->get_world();		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(328)
													::phoenix::Spatial _this4 = tmp17;		HX_STACK_VAR(_this4,"_this4");
													HX_STACK_LINE(328)
													tmp16 = _this4->matrix;
												}
												HX_STACK_LINE(328)
												::phoenix::Matrix _this4 = tmp16;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(328)
												::phoenix::Matrix tmp17;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(328)
												{
													HX_STACK_LINE(328)
													::phoenix::Spatial tmp18 = _this2->parent->get_world();		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(328)
													::phoenix::Spatial _this5 = tmp18;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(328)
													tmp17 = _this5->matrix;
												}
												HX_STACK_LINE(328)
												::phoenix::Matrix _a = tmp17;		HX_STACK_VAR(_a,"_a");
												HX_STACK_LINE(328)
												Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(328)
												::phoenix::Matrix tmp18 = _this2->local->matrix;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(328)
												Array< Float > be = tmp18->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(328)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(328)
												Float tmp19 = ae->__get((int)0);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(328)
												Float a11 = tmp19;		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(328)
												Float tmp20 = ae->__get((int)4);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(328)
												Float a12 = tmp20;		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(328)
												Float tmp21 = ae->__get((int)8);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(328)
												Float a13 = tmp21;		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(328)
												Float tmp22 = ae->__get((int)12);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(328)
												Float a14 = tmp22;		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(328)
												Float tmp23 = ae->__get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(328)
												Float a21 = tmp23;		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(328)
												Float tmp24 = ae->__get((int)5);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(328)
												Float a22 = tmp24;		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(328)
												Float tmp25 = ae->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(328)
												Float a23 = tmp25;		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(328)
												Float tmp26 = ae->__get((int)13);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(328)
												Float a24 = tmp26;		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(328)
												Float tmp27 = ae->__get((int)2);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(328)
												Float a31 = tmp27;		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(328)
												Float tmp28 = ae->__get((int)6);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(328)
												Float a32 = tmp28;		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(328)
												Float tmp29 = ae->__get((int)10);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(328)
												Float a33 = tmp29;		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(328)
												Float tmp30 = ae->__get((int)14);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(328)
												Float a34 = tmp30;		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(328)
												Float tmp31 = ae->__get((int)3);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(328)
												Float a41 = tmp31;		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(328)
												Float tmp32 = ae->__get((int)7);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(328)
												Float a42 = tmp32;		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(328)
												Float tmp33 = ae->__get((int)11);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(328)
												Float a43 = tmp33;		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(328)
												Float tmp34 = ae->__get((int)15);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(328)
												Float a44 = tmp34;		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(328)
												Float tmp35 = be->__get((int)0);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(328)
												Float b11 = tmp35;		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(328)
												Float tmp36 = be->__get((int)4);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(328)
												Float b12 = tmp36;		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(328)
												Float tmp37 = be->__get((int)8);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(328)
												Float b13 = tmp37;		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(328)
												Float tmp38 = be->__get((int)12);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(328)
												Float b14 = tmp38;		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(328)
												Float tmp39 = be->__get((int)1);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(328)
												Float b21 = tmp39;		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(328)
												Float tmp40 = be->__get((int)5);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(328)
												Float b22 = tmp40;		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(328)
												Float tmp41 = be->__get((int)9);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(328)
												Float b23 = tmp41;		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(328)
												Float tmp42 = be->__get((int)13);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(328)
												Float b24 = tmp42;		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(328)
												Float tmp43 = be->__get((int)2);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(328)
												Float b31 = tmp43;		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(328)
												Float tmp44 = be->__get((int)6);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(328)
												Float b32 = tmp44;		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(328)
												Float tmp45 = be->__get((int)10);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(328)
												Float b33 = tmp45;		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(328)
												Float tmp46 = be->__get((int)14);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(328)
												Float b34 = tmp46;		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(328)
												Float tmp47 = be->__get((int)3);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(328)
												Float b41 = tmp47;		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(328)
												Float tmp48 = be->__get((int)7);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(328)
												Float b42 = tmp48;		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(328)
												Float tmp49 = be->__get((int)11);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(328)
												Float b43 = tmp49;		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(328)
												Float tmp50 = be->__get((int)15);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(328)
												Float b44 = tmp50;		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(328)
												Float tmp51 = (a11 * b11);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(328)
												Float tmp52 = (a12 * b21);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(328)
												Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(328)
												Float tmp54 = (a13 * b31);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(328)
												Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(328)
												Float tmp56 = (a14 * b41);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(328)
												Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(328)
												te[(int)0] = tmp57;
												HX_STACK_LINE(328)
												Float tmp58 = (a11 * b12);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(328)
												Float tmp59 = (a12 * b22);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(328)
												Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(328)
												Float tmp61 = (a13 * b32);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(328)
												Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(328)
												Float tmp63 = (a14 * b42);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(328)
												Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(328)
												te[(int)4] = tmp64;
												HX_STACK_LINE(328)
												Float tmp65 = (a11 * b13);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(328)
												Float tmp66 = (a12 * b23);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(328)
												Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(328)
												Float tmp68 = (a13 * b33);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(328)
												Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(328)
												Float tmp70 = (a14 * b43);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(328)
												Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(328)
												te[(int)8] = tmp71;
												HX_STACK_LINE(328)
												Float tmp72 = (a11 * b14);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(328)
												Float tmp73 = (a12 * b24);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(328)
												Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(328)
												Float tmp75 = (a13 * b34);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(328)
												Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(328)
												Float tmp77 = (a14 * b44);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(328)
												Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(328)
												te[(int)12] = tmp78;
												HX_STACK_LINE(328)
												Float tmp79 = (a21 * b11);		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(328)
												Float tmp80 = (a22 * b21);		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(328)
												Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(328)
												Float tmp82 = (a23 * b31);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(328)
												Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(328)
												Float tmp84 = (a24 * b41);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(328)
												Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(328)
												te[(int)1] = tmp85;
												HX_STACK_LINE(328)
												Float tmp86 = (a21 * b12);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(328)
												Float tmp87 = (a22 * b22);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(328)
												Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(328)
												Float tmp89 = (a23 * b32);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(328)
												Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(328)
												Float tmp91 = (a24 * b42);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(328)
												Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(328)
												te[(int)5] = tmp92;
												HX_STACK_LINE(328)
												Float tmp93 = (a21 * b13);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(328)
												Float tmp94 = (a22 * b23);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(328)
												Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(328)
												Float tmp96 = (a23 * b33);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(328)
												Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(328)
												Float tmp98 = (a24 * b43);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(328)
												Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(328)
												te[(int)9] = tmp99;
												HX_STACK_LINE(328)
												Float tmp100 = (a21 * b14);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(328)
												Float tmp101 = (a22 * b24);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(328)
												Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(328)
												Float tmp103 = (a23 * b34);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(328)
												Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(328)
												Float tmp105 = (a24 * b44);		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(328)
												Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(328)
												te[(int)13] = tmp106;
												HX_STACK_LINE(328)
												Float tmp107 = (a31 * b11);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(328)
												Float tmp108 = (a32 * b21);		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(328)
												Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(328)
												Float tmp110 = (a33 * b31);		HX_STACK_VAR(tmp110,"tmp110");
												HX_STACK_LINE(328)
												Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
												HX_STACK_LINE(328)
												Float tmp112 = (a34 * b41);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(328)
												Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
												HX_STACK_LINE(328)
												te[(int)2] = tmp113;
												HX_STACK_LINE(328)
												Float tmp114 = (a31 * b12);		HX_STACK_VAR(tmp114,"tmp114");
												HX_STACK_LINE(328)
												Float tmp115 = (a32 * b22);		HX_STACK_VAR(tmp115,"tmp115");
												HX_STACK_LINE(328)
												Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
												HX_STACK_LINE(328)
												Float tmp117 = (a33 * b32);		HX_STACK_VAR(tmp117,"tmp117");
												HX_STACK_LINE(328)
												Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
												HX_STACK_LINE(328)
												Float tmp119 = (a34 * b42);		HX_STACK_VAR(tmp119,"tmp119");
												HX_STACK_LINE(328)
												Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
												HX_STACK_LINE(328)
												te[(int)6] = tmp120;
												HX_STACK_LINE(328)
												Float tmp121 = (a31 * b13);		HX_STACK_VAR(tmp121,"tmp121");
												HX_STACK_LINE(328)
												Float tmp122 = (a32 * b23);		HX_STACK_VAR(tmp122,"tmp122");
												HX_STACK_LINE(328)
												Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
												HX_STACK_LINE(328)
												Float tmp124 = (a33 * b33);		HX_STACK_VAR(tmp124,"tmp124");
												HX_STACK_LINE(328)
												Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
												HX_STACK_LINE(328)
												Float tmp126 = (a34 * b43);		HX_STACK_VAR(tmp126,"tmp126");
												HX_STACK_LINE(328)
												Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
												HX_STACK_LINE(328)
												te[(int)10] = tmp127;
												HX_STACK_LINE(328)
												Float tmp128 = (a31 * b14);		HX_STACK_VAR(tmp128,"tmp128");
												HX_STACK_LINE(328)
												Float tmp129 = (a32 * b24);		HX_STACK_VAR(tmp129,"tmp129");
												HX_STACK_LINE(328)
												Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
												HX_STACK_LINE(328)
												Float tmp131 = (a33 * b34);		HX_STACK_VAR(tmp131,"tmp131");
												HX_STACK_LINE(328)
												Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
												HX_STACK_LINE(328)
												Float tmp133 = (a34 * b44);		HX_STACK_VAR(tmp133,"tmp133");
												HX_STACK_LINE(328)
												Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
												HX_STACK_LINE(328)
												te[(int)14] = tmp134;
												HX_STACK_LINE(328)
												Float tmp135 = (a41 * b11);		HX_STACK_VAR(tmp135,"tmp135");
												HX_STACK_LINE(328)
												Float tmp136 = (a42 * b21);		HX_STACK_VAR(tmp136,"tmp136");
												HX_STACK_LINE(328)
												Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
												HX_STACK_LINE(328)
												Float tmp138 = (a43 * b31);		HX_STACK_VAR(tmp138,"tmp138");
												HX_STACK_LINE(328)
												Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
												HX_STACK_LINE(328)
												Float tmp140 = (a44 * b41);		HX_STACK_VAR(tmp140,"tmp140");
												HX_STACK_LINE(328)
												Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
												HX_STACK_LINE(328)
												te[(int)3] = tmp141;
												HX_STACK_LINE(328)
												Float tmp142 = (a41 * b12);		HX_STACK_VAR(tmp142,"tmp142");
												HX_STACK_LINE(328)
												Float tmp143 = (a42 * b22);		HX_STACK_VAR(tmp143,"tmp143");
												HX_STACK_LINE(328)
												Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
												HX_STACK_LINE(328)
												Float tmp145 = (a43 * b32);		HX_STACK_VAR(tmp145,"tmp145");
												HX_STACK_LINE(328)
												Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
												HX_STACK_LINE(328)
												Float tmp147 = (a44 * b42);		HX_STACK_VAR(tmp147,"tmp147");
												HX_STACK_LINE(328)
												Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
												HX_STACK_LINE(328)
												te[(int)7] = tmp148;
												HX_STACK_LINE(328)
												Float tmp149 = (a41 * b13);		HX_STACK_VAR(tmp149,"tmp149");
												HX_STACK_LINE(328)
												Float tmp150 = (a42 * b23);		HX_STACK_VAR(tmp150,"tmp150");
												HX_STACK_LINE(328)
												Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
												HX_STACK_LINE(328)
												Float tmp152 = (a43 * b33);		HX_STACK_VAR(tmp152,"tmp152");
												HX_STACK_LINE(328)
												Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
												HX_STACK_LINE(328)
												Float tmp154 = (a44 * b43);		HX_STACK_VAR(tmp154,"tmp154");
												HX_STACK_LINE(328)
												Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
												HX_STACK_LINE(328)
												te[(int)11] = tmp155;
												HX_STACK_LINE(328)
												Float tmp156 = (a41 * b14);		HX_STACK_VAR(tmp156,"tmp156");
												HX_STACK_LINE(328)
												Float tmp157 = (a42 * b24);		HX_STACK_VAR(tmp157,"tmp157");
												HX_STACK_LINE(328)
												Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
												HX_STACK_LINE(328)
												Float tmp159 = (a43 * b34);		HX_STACK_VAR(tmp159,"tmp159");
												HX_STACK_LINE(328)
												Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
												HX_STACK_LINE(328)
												Float tmp161 = (a44 * b44);		HX_STACK_VAR(tmp161,"tmp161");
												HX_STACK_LINE(328)
												Float tmp162 = (tmp160 + tmp161);		HX_STACK_VAR(tmp162,"tmp162");
												HX_STACK_LINE(328)
												te[(int)15] = tmp162;
												HX_STACK_LINE(328)
												tmp15 = _this4;
											}
											HX_STACK_LINE(328)
											::phoenix::Matrix _m = tmp15;		HX_STACK_VAR(_m,"_m");
											HX_STACK_LINE(328)
											_this3->matrix = _m;
											HX_STACK_LINE(328)
											bool tmp16 = (_m != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(328)
											if ((tmp16)){
												HX_STACK_LINE(328)
												::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(328)
												{
													HX_STACK_LINE(328)
													cpp::ArrayBase array = _this3->matrix->elements;		HX_STACK_VAR(array,"array");
													HX_STACK_LINE(328)
													::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(328)
													bool tmp18 = (array != null());		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(328)
													if ((tmp18)){
														HX_STACK_LINE(328)
														::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(328)
														{
															HX_STACK_LINE(328)
															::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(328)
															::snow::api::buffers::ArrayBufferView _this4 = tmp20;		HX_STACK_VAR(_this4,"_this4");
															HX_STACK_LINE(328)
															_this4->byteOffset = (int)0;
															HX_STACK_LINE(328)
															_this4->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
															HX_STACK_LINE(328)
															int tmp21 = (_this4->length * _this4->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(328)
															_this4->byteLength = tmp21;
															HX_STACK_LINE(328)
															::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(328)
															{
																HX_STACK_LINE(328)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(328)
																int tmp23 = _this4->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(328)
																::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(328)
																this2 = tmp24;
																HX_STACK_LINE(328)
																tmp22 = this2;
															}
															HX_STACK_LINE(328)
															_this4->buffer = tmp22;
															HX_STACK_LINE(328)
															_this4->copyFromArray(((Array< Float >)(array)),null());
															HX_STACK_LINE(328)
															tmp19 = _this4;
														}
														HX_STACK_LINE(328)
														this1 = tmp19;
													}
													else{
														HX_STACK_LINE(328)
														HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
													}
													HX_STACK_LINE(328)
													tmp17 = this1;
												}
												HX_STACK_LINE(328)
												_this3->floats = tmp17;
											}
											HX_STACK_LINE(328)
											_this3->matrix;
										}
										else{
											HX_STACK_LINE(328)
											::phoenix::Spatial tmp14 = _this2->get_world();		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(328)
											::phoenix::Spatial _this3 = tmp14;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(328)
											::phoenix::Matrix tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												::phoenix::Matrix tmp16 = _this2->local->matrix;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(328)
												Array< Float > te = tmp16->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(328)
												Float tmp17 = te->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(328)
												Float tmp18 = te->__get((int)4);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(328)
												Float tmp19 = te->__get((int)8);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(328)
												Float tmp20 = te->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(328)
												Float tmp21 = te->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(328)
												Float tmp22 = te->__get((int)5);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(328)
												Float tmp23 = te->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(328)
												Float tmp24 = te->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(328)
												Float tmp25 = te->__get((int)2);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(328)
												Float tmp26 = te->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(328)
												Float tmp27 = te->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(328)
												Float tmp28 = te->__get((int)14);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(328)
												Float tmp29 = te->__get((int)3);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(328)
												Float tmp30 = te->__get((int)7);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(328)
												Float tmp31 = te->__get((int)11);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(328)
												Float tmp32 = te->__get((int)15);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(328)
												tmp15 = ::phoenix::Matrix_obj::__new(tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31,tmp32);
											}
											HX_STACK_LINE(328)
											::phoenix::Matrix _m = tmp15;		HX_STACK_VAR(_m,"_m");
											HX_STACK_LINE(328)
											_this3->matrix = _m;
											HX_STACK_LINE(328)
											bool tmp16 = (_m != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(328)
											if ((tmp16)){
												HX_STACK_LINE(328)
												::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(328)
												{
													HX_STACK_LINE(328)
													cpp::ArrayBase array = _this3->matrix->elements;		HX_STACK_VAR(array,"array");
													HX_STACK_LINE(328)
													::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(328)
													bool tmp18 = (array != null());		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(328)
													if ((tmp18)){
														HX_STACK_LINE(328)
														::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(328)
														{
															HX_STACK_LINE(328)
															::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(328)
															::snow::api::buffers::ArrayBufferView _this4 = tmp20;		HX_STACK_VAR(_this4,"_this4");
															HX_STACK_LINE(328)
															_this4->byteOffset = (int)0;
															HX_STACK_LINE(328)
															_this4->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
															HX_STACK_LINE(328)
															int tmp21 = (_this4->length * _this4->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(328)
															_this4->byteLength = tmp21;
															HX_STACK_LINE(328)
															::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(328)
															{
																HX_STACK_LINE(328)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(328)
																int tmp23 = _this4->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(328)
																::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(328)
																this2 = tmp24;
																HX_STACK_LINE(328)
																tmp22 = this2;
															}
															HX_STACK_LINE(328)
															_this4->buffer = tmp22;
															HX_STACK_LINE(328)
															_this4->copyFromArray(((Array< Float >)(array)),null());
															HX_STACK_LINE(328)
															tmp19 = _this4;
														}
														HX_STACK_LINE(328)
														this1 = tmp19;
													}
													else{
														HX_STACK_LINE(328)
														HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
													}
													HX_STACK_LINE(328)
													tmp17 = this1;
												}
												HX_STACK_LINE(328)
												_this3->floats = tmp17;
											}
											HX_STACK_LINE(328)
											_this3->matrix;
										}
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											::phoenix::Spatial tmp14 = _this2->get_world();		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(328)
											::phoenix::Spatial _this3 = tmp14;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(328)
											bool tmp15 = _this3->auto_decompose;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(328)
											if ((tmp15)){
												HX_STACK_LINE(328)
												::phoenix::MatrixTransform tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(328)
												{
													HX_STACK_LINE(328)
													::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
													HX_STACK_LINE(328)
													::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
													HX_STACK_LINE(328)
													::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
													HX_STACK_LINE(328)
													::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
													HX_STACK_LINE(328)
													Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(328)
													::phoenix::Matrix tmp17 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(328)
													::phoenix::Matrix matrix = tmp17;		HX_STACK_VAR(matrix,"matrix");
													HX_STACK_LINE(328)
													Float tmp18 = te->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(328)
													Float _ax_x = tmp18;		HX_STACK_VAR(_ax_x,"_ax_x");
													HX_STACK_LINE(328)
													Float tmp19 = te->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(328)
													Float _ax_y = tmp19;		HX_STACK_VAR(_ax_y,"_ax_y");
													HX_STACK_LINE(328)
													Float tmp20 = te->__get((int)2);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(328)
													Float _ax_z = tmp20;		HX_STACK_VAR(_ax_z,"_ax_z");
													HX_STACK_LINE(328)
													Float tmp21 = te->__get((int)4);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(328)
													Float _ay_x = tmp21;		HX_STACK_VAR(_ay_x,"_ay_x");
													HX_STACK_LINE(328)
													Float tmp22 = te->__get((int)5);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(328)
													Float _ay_y = tmp22;		HX_STACK_VAR(_ay_y,"_ay_y");
													HX_STACK_LINE(328)
													Float tmp23 = te->__get((int)6);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(328)
													Float _ay_z = tmp23;		HX_STACK_VAR(_ay_z,"_ay_z");
													HX_STACK_LINE(328)
													Float tmp24 = te->__get((int)8);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(328)
													Float _az_x = tmp24;		HX_STACK_VAR(_az_x,"_az_x");
													HX_STACK_LINE(328)
													Float tmp25 = te->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(328)
													Float _az_y = tmp25;		HX_STACK_VAR(_az_y,"_az_y");
													HX_STACK_LINE(328)
													Float tmp26 = te->__get((int)10);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(328)
													Float _az_z = tmp26;		HX_STACK_VAR(_az_z,"_az_z");
													HX_STACK_LINE(328)
													Float tmp27 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(328)
													Float tmp28 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(328)
													Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(328)
													Float tmp30 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(328)
													Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(328)
													Float tmp32 = ::Math_obj::sqrt(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(328)
													Float _ax_length = tmp32;		HX_STACK_VAR(_ax_length,"_ax_length");
													HX_STACK_LINE(328)
													Float tmp33 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(328)
													Float tmp34 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(328)
													Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(328)
													Float tmp36 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(328)
													Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(328)
													Float tmp38 = ::Math_obj::sqrt(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(328)
													Float _ay_length = tmp38;		HX_STACK_VAR(_ay_length,"_ay_length");
													HX_STACK_LINE(328)
													Float tmp39 = (_az_x * _az_x);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(328)
													Float tmp40 = (_az_y * _az_y);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(328)
													Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(328)
													Float tmp42 = (_az_z * _az_z);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(328)
													Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(328)
													Float tmp44 = ::Math_obj::sqrt(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(328)
													Float _az_length = tmp44;		HX_STACK_VAR(_az_length,"_az_length");
													HX_STACK_LINE(328)
													bool tmp45 = (_quaternion == null());		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(328)
													if ((tmp45)){
														HX_STACK_LINE(328)
														::phoenix::Quaternion tmp46 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(328)
														_quaternion = tmp46;
													}
													HX_STACK_LINE(328)
													bool tmp46 = (_position == null());		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(328)
													if ((tmp46)){
														HX_STACK_LINE(328)
														Float tmp47 = te->__get((int)12);		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(328)
														Float tmp48 = te->__get((int)13);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(328)
														Float tmp49 = te->__get((int)14);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(328)
														::phoenix::Vector tmp50 = ::phoenix::Vector_obj::__new(tmp47,tmp48,tmp49,null());		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(328)
														_position = tmp50;
													}
													else{
														HX_STACK_LINE(328)
														{
															HX_STACK_LINE(328)
															Float tmp47 = te->__get((int)12);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(328)
															Float _x = tmp47;		HX_STACK_VAR(_x,"_x");
															HX_STACK_LINE(328)
															_position->x = _x;
															HX_STACK_LINE(328)
															bool tmp48 = _position->_construct;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(328)
															if ((tmp48)){
																HX_STACK_LINE(328)
																_position->x;
															}
															else{
																HX_STACK_LINE(328)
																bool tmp49 = (_position->listen_x != null());		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(328)
																bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(328)
																if ((tmp49)){
																	HX_STACK_LINE(328)
																	bool tmp51 = _position->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(328)
																	bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(328)
																	tmp50 = !(tmp52);
																}
																else{
																	HX_STACK_LINE(328)
																	tmp50 = false;
																}
																HX_STACK_LINE(328)
																if ((tmp50)){
																	HX_STACK_LINE(328)
																	Float tmp51 = _x;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(328)
																	_position->listen_x(tmp51);
																}
																HX_STACK_LINE(328)
																_position->x;
															}
														}
														HX_STACK_LINE(328)
														{
															HX_STACK_LINE(328)
															Float tmp47 = te->__get((int)13);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(328)
															Float _y = tmp47;		HX_STACK_VAR(_y,"_y");
															HX_STACK_LINE(328)
															_position->y = _y;
															HX_STACK_LINE(328)
															bool tmp48 = _position->_construct;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(328)
															if ((tmp48)){
																HX_STACK_LINE(328)
																_position->y;
															}
															else{
																HX_STACK_LINE(328)
																bool tmp49 = (_position->listen_y != null());		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(328)
																bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(328)
																if ((tmp49)){
																	HX_STACK_LINE(328)
																	bool tmp51 = _position->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(328)
																	bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(328)
																	tmp50 = !(tmp52);
																}
																else{
																	HX_STACK_LINE(328)
																	tmp50 = false;
																}
																HX_STACK_LINE(328)
																if ((tmp50)){
																	HX_STACK_LINE(328)
																	Float tmp51 = _y;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(328)
																	_position->listen_y(tmp51);
																}
																HX_STACK_LINE(328)
																_position->y;
															}
														}
														HX_STACK_LINE(328)
														{
															HX_STACK_LINE(328)
															Float tmp47 = te->__get((int)14);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(328)
															Float _z = tmp47;		HX_STACK_VAR(_z,"_z");
															HX_STACK_LINE(328)
															_position->z = _z;
															HX_STACK_LINE(328)
															bool tmp48 = _position->_construct;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(328)
															if ((tmp48)){
																HX_STACK_LINE(328)
																_position->z;
															}
															else{
																HX_STACK_LINE(328)
																bool tmp49 = (_position->listen_z != null());		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(328)
																bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(328)
																if ((tmp49)){
																	HX_STACK_LINE(328)
																	bool tmp51 = _position->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(328)
																	bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(328)
																	tmp50 = !(tmp52);
																}
																else{
																	HX_STACK_LINE(328)
																	tmp50 = false;
																}
																HX_STACK_LINE(328)
																if ((tmp50)){
																	HX_STACK_LINE(328)
																	Float tmp51 = _z;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(328)
																	_position->listen_z(tmp51);
																}
																HX_STACK_LINE(328)
																_position->z;
															}
														}
													}
													HX_STACK_LINE(328)
													bool tmp47 = (_scale == null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(328)
													if ((tmp47)){
														HX_STACK_LINE(328)
														::phoenix::Vector tmp48 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(328)
														_scale = tmp48;
													}
													else{
														HX_STACK_LINE(328)
														{
															HX_STACK_LINE(328)
															_scale->x = _ax_length;
															HX_STACK_LINE(328)
															bool tmp48 = _scale->_construct;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(328)
															if ((tmp48)){
																HX_STACK_LINE(328)
																_scale->x;
															}
															else{
																HX_STACK_LINE(328)
																bool tmp49 = (_scale->listen_x != null());		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(328)
																bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(328)
																if ((tmp49)){
																	HX_STACK_LINE(328)
																	bool tmp51 = _scale->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(328)
																	bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(328)
																	tmp50 = !(tmp52);
																}
																else{
																	HX_STACK_LINE(328)
																	tmp50 = false;
																}
																HX_STACK_LINE(328)
																if ((tmp50)){
																	HX_STACK_LINE(328)
																	Float tmp51 = _ax_length;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(328)
																	_scale->listen_x(tmp51);
																}
																HX_STACK_LINE(328)
																_scale->x;
															}
														}
														HX_STACK_LINE(328)
														{
															HX_STACK_LINE(328)
															_scale->y = _ay_length;
															HX_STACK_LINE(328)
															bool tmp48 = _scale->_construct;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(328)
															if ((tmp48)){
																HX_STACK_LINE(328)
																_scale->y;
															}
															else{
																HX_STACK_LINE(328)
																bool tmp49 = (_scale->listen_y != null());		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(328)
																bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(328)
																if ((tmp49)){
																	HX_STACK_LINE(328)
																	bool tmp51 = _scale->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(328)
																	bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(328)
																	tmp50 = !(tmp52);
																}
																else{
																	HX_STACK_LINE(328)
																	tmp50 = false;
																}
																HX_STACK_LINE(328)
																if ((tmp50)){
																	HX_STACK_LINE(328)
																	Float tmp51 = _ay_length;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(328)
																	_scale->listen_y(tmp51);
																}
																HX_STACK_LINE(328)
																_scale->y;
															}
														}
														HX_STACK_LINE(328)
														{
															HX_STACK_LINE(328)
															_scale->z = _az_length;
															HX_STACK_LINE(328)
															bool tmp48 = _scale->_construct;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(328)
															if ((tmp48)){
																HX_STACK_LINE(328)
																_scale->z;
															}
															else{
																HX_STACK_LINE(328)
																bool tmp49 = (_scale->listen_z != null());		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(328)
																bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(328)
																if ((tmp49)){
																	HX_STACK_LINE(328)
																	bool tmp51 = _scale->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(328)
																	bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(328)
																	tmp50 = !(tmp52);
																}
																else{
																	HX_STACK_LINE(328)
																	tmp50 = false;
																}
																HX_STACK_LINE(328)
																if ((tmp50)){
																	HX_STACK_LINE(328)
																	Float tmp51 = _az_length;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(328)
																	_scale->listen_z(tmp51);
																}
																HX_STACK_LINE(328)
																_scale->z;
															}
														}
													}
													HX_STACK_LINE(328)
													matrix->elements = _this4->elements->concat(Array_obj< Float >::__new());
													HX_STACK_LINE(328)
													Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
													HX_STACK_LINE(328)
													Float tmp48 = _ax_length;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(328)
													hx::DivEq(me[(int)0],tmp48);
													HX_STACK_LINE(328)
													Float tmp49 = _ax_length;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(328)
													hx::DivEq(me[(int)1],tmp49);
													HX_STACK_LINE(328)
													Float tmp50 = _ax_length;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(328)
													hx::DivEq(me[(int)2],tmp50);
													HX_STACK_LINE(328)
													Float tmp51 = _ay_length;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(328)
													hx::DivEq(me[(int)4],tmp51);
													HX_STACK_LINE(328)
													Float tmp52 = _ay_length;		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(328)
													hx::DivEq(me[(int)5],tmp52);
													HX_STACK_LINE(328)
													Float tmp53 = _ay_length;		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(328)
													hx::DivEq(me[(int)6],tmp53);
													HX_STACK_LINE(328)
													Float tmp54 = _az_length;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(328)
													hx::DivEq(me[(int)8],tmp54);
													HX_STACK_LINE(328)
													Float tmp55 = _az_length;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(328)
													hx::DivEq(me[(int)9],tmp55);
													HX_STACK_LINE(328)
													Float tmp56 = _az_length;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(328)
													hx::DivEq(me[(int)10],tmp56);
													HX_STACK_LINE(328)
													::phoenix::Matrix tmp57 = matrix;		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(328)
													_quaternion->setFromRotationMatrix(tmp57);
													HX_STACK_LINE(328)
													bool tmp58 = (_this4->_transform == null());		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(328)
													if ((tmp58)){
														HX_STACK_LINE(328)
														::phoenix::MatrixTransform tmp59 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(328)
														_this4->_transform = tmp59;
													}
													else{
														HX_STACK_LINE(328)
														_this4->_transform->pos = _position;
														HX_STACK_LINE(328)
														_this4->_transform->rotation = _quaternion;
														HX_STACK_LINE(328)
														_this4->_transform->scale = _scale;
													}
													HX_STACK_LINE(328)
													tmp16 = _this4->_transform;
												}
												HX_STACK_LINE(328)
												::phoenix::MatrixTransform _transform = tmp16;		HX_STACK_VAR(_transform,"_transform");
												HX_STACK_LINE(328)
												{
													HX_STACK_LINE(328)
													::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
													HX_STACK_LINE(328)
													_this3->pos = _p;
													HX_STACK_LINE(328)
													bool tmp17 = (_p != null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(328)
													if ((tmp17)){
														HX_STACK_LINE(328)
														::phoenix::Vector tmp18 = _this3->pos;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(328)
														Dynamic tmp19 = _this3->_pos_change_dyn();		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(328)
														::phoenix::Vector_obj::Listen(tmp18,tmp19);
														HX_STACK_LINE(328)
														bool tmp20 = (_this3->pos_changed != null());		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(328)
														bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(328)
														if ((tmp20)){
															HX_STACK_LINE(328)
															bool tmp22 = _this3->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(328)
															bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(328)
															tmp21 = !(tmp23);
														}
														else{
															HX_STACK_LINE(328)
															tmp21 = false;
														}
														HX_STACK_LINE(328)
														if ((tmp21)){
															HX_STACK_LINE(328)
															::phoenix::Vector tmp22 = _this3->pos;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(328)
															_this3->pos_changed(tmp22);
														}
													}
													HX_STACK_LINE(328)
													_this3->pos;
												}
												HX_STACK_LINE(328)
												{
													HX_STACK_LINE(328)
													::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
													HX_STACK_LINE(328)
													_this3->rotation = _r;
													HX_STACK_LINE(328)
													bool tmp17 = (_r != null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(328)
													if ((tmp17)){
														HX_STACK_LINE(328)
														{
															HX_STACK_LINE(328)
															::phoenix::Quaternion _q = _this3->rotation;		HX_STACK_VAR(_q,"_q");
															HX_STACK_LINE(328)
															Dynamic listener = _this3->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
															HX_STACK_LINE(328)
															_q->listen_x = listener;
															HX_STACK_LINE(328)
															_q->listen_y = listener;
															HX_STACK_LINE(328)
															_q->listen_z = listener;
															HX_STACK_LINE(328)
															_q->listen_w = listener;
														}
														HX_STACK_LINE(328)
														bool tmp18 = (_this3->rotation_changed != null());		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(328)
														bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(328)
														if ((tmp18)){
															HX_STACK_LINE(328)
															bool tmp20 = _this3->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(328)
															bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(328)
															tmp19 = !(tmp21);
														}
														else{
															HX_STACK_LINE(328)
															tmp19 = false;
														}
														HX_STACK_LINE(328)
														if ((tmp19)){
															HX_STACK_LINE(328)
															::phoenix::Quaternion tmp20 = _this3->rotation;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(328)
															_this3->rotation_changed(tmp20);
														}
													}
													HX_STACK_LINE(328)
													_this3->rotation;
												}
												HX_STACK_LINE(328)
												{
													HX_STACK_LINE(328)
													::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
													HX_STACK_LINE(328)
													_this3->scale = _s;
													HX_STACK_LINE(328)
													bool tmp17 = (_s != null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(328)
													if ((tmp17)){
														HX_STACK_LINE(328)
														::phoenix::Vector tmp18 = _this3->scale;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(328)
														Dynamic tmp19 = _this3->_scale_change_dyn();		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(328)
														::phoenix::Vector_obj::Listen(tmp18,tmp19);
														HX_STACK_LINE(328)
														bool tmp20 = (_this3->scale_changed != null());		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(328)
														bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(328)
														if ((tmp20)){
															HX_STACK_LINE(328)
															bool tmp22 = _this3->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(328)
															bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(328)
															tmp21 = !(tmp23);
														}
														else{
															HX_STACK_LINE(328)
															tmp21 = false;
														}
														HX_STACK_LINE(328)
														if ((tmp21)){
															HX_STACK_LINE(328)
															::phoenix::Vector tmp22 = _this3->scale;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(328)
															_this3->scale_changed(tmp22);
														}
													}
													HX_STACK_LINE(328)
													_this3->scale;
												}
											}
											HX_STACK_LINE(328)
											_this3;
										}
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											_this2->dirty = false;
											HX_STACK_LINE(328)
											bool tmp14 = _this2->dirty;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(328)
											bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(328)
											bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(328)
											if ((tmp15)){
												HX_STACK_LINE(328)
												bool tmp17 = _this2->_setup;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(328)
												bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(328)
												bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(328)
												tmp16 = !(tmp19);
											}
											else{
												HX_STACK_LINE(328)
												tmp16 = false;
											}
											HX_STACK_LINE(328)
											bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(328)
											bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(328)
											if ((tmp17)){
												HX_STACK_LINE(328)
												tmp18 = (_this2->_dirty_handlers != null());
											}
											else{
												HX_STACK_LINE(328)
												tmp18 = false;
											}
											HX_STACK_LINE(328)
											bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(328)
											if ((tmp18)){
												HX_STACK_LINE(328)
												int tmp20 = _this2->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(328)
												int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(328)
												tmp19 = (tmp21 > (int)0);
											}
											else{
												HX_STACK_LINE(328)
												tmp19 = false;
											}
											HX_STACK_LINE(328)
											if ((tmp19)){
												HX_STACK_LINE(328)
												int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(328)
												cpp::ArrayBase _g11 = _this2->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(328)
												while((true)){
													HX_STACK_LINE(328)
													bool tmp20 = (_g2 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(328)
													bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(328)
													if ((tmp21)){
														HX_STACK_LINE(328)
														break;
													}
													HX_STACK_LINE(328)
													Dynamic tmp22 = _g11->__GetItem(_g2);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(328)
													Dynamic _handler = tmp22;		HX_STACK_VAR(_handler,"_handler");
													HX_STACK_LINE(328)
													++(_g2);
													HX_STACK_LINE(328)
													bool tmp23 = (_handler != null());		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(328)
													if ((tmp23)){
														HX_STACK_LINE(328)
														::phoenix::Transform tmp24 = _this2;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(328)
														_handler(tmp24).Cast< Void >();
													}
												}
											}
											HX_STACK_LINE(328)
											_this2->dirty;
										}
										HX_STACK_LINE(328)
										_this2->_cleaning = false;
										HX_STACK_LINE(328)
										bool tmp14 = (_this2->_clean_handlers != null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(328)
										bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(328)
										if ((tmp14)){
											HX_STACK_LINE(328)
											int tmp16 = _this2->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(328)
											int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(328)
											tmp15 = (tmp17 > (int)0);
										}
										else{
											HX_STACK_LINE(328)
											tmp15 = false;
										}
										HX_STACK_LINE(328)
										if ((tmp15)){
											HX_STACK_LINE(328)
											int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(328)
											cpp::ArrayBase _g11 = _this2->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(328)
											while((true)){
												HX_STACK_LINE(328)
												bool tmp16 = (_g2 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(328)
												bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(328)
												if ((tmp17)){
													HX_STACK_LINE(328)
													break;
												}
												HX_STACK_LINE(328)
												Dynamic tmp18 = _g11->__GetItem(_g2);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(328)
												Dynamic _handler = tmp18;		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(328)
												++(_g2);
												HX_STACK_LINE(328)
												bool tmp19 = (_handler != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(328)
												if ((tmp19)){
													HX_STACK_LINE(328)
													::phoenix::Transform tmp20 = _this2;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(328)
													_handler(tmp20).Cast< Void >();
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(328)
							bool tmp10 = _this1->dirty;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(328)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(328)
							if ((tmp10)){
								HX_STACK_LINE(328)
								bool tmp12 = _this1->_cleaning;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(328)
								bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(328)
								tmp11 = !(tmp13);
							}
							else{
								HX_STACK_LINE(328)
								tmp11 = false;
							}
							HX_STACK_LINE(328)
							if ((tmp11)){
								HX_STACK_LINE(328)
								bool tmp12 = _this1->dirty;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(328)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(328)
								if ((tmp13)){
									HX_STACK_LINE(328)
									Dynamic();
								}
								else{
									HX_STACK_LINE(328)
									_this1->_cleaning = true;
									HX_STACK_LINE(328)
									{
										HX_STACK_LINE(328)
										::phoenix::Matrix _this2 = _this1->_pos_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(328)
											e[(int)0] = (int)1;
											HX_STACK_LINE(328)
											e[(int)4] = (int)0;
											HX_STACK_LINE(328)
											e[(int)8] = (int)0;
											HX_STACK_LINE(328)
											::phoenix::Vector tmp14 = _this1->local->pos;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(328)
											Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(328)
											e[(int)12] = tmp15;
											HX_STACK_LINE(328)
											e[(int)1] = (int)0;
											HX_STACK_LINE(328)
											e[(int)5] = (int)1;
											HX_STACK_LINE(328)
											e[(int)9] = (int)0;
											HX_STACK_LINE(328)
											::phoenix::Vector tmp16 = _this1->local->pos;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(328)
											Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(328)
											e[(int)13] = tmp17;
											HX_STACK_LINE(328)
											e[(int)2] = (int)0;
											HX_STACK_LINE(328)
											e[(int)6] = (int)0;
											HX_STACK_LINE(328)
											e[(int)10] = (int)1;
											HX_STACK_LINE(328)
											::phoenix::Vector tmp18 = _this1->local->pos;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(328)
											Float tmp19 = tmp18->z;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(328)
											e[(int)14] = tmp19;
											HX_STACK_LINE(328)
											e[(int)3] = (int)0;
											HX_STACK_LINE(328)
											e[(int)7] = (int)0;
											HX_STACK_LINE(328)
											e[(int)11] = (int)0;
											HX_STACK_LINE(328)
											e[(int)15] = (int)1;
											HX_STACK_LINE(328)
											_this2;
										}
										HX_STACK_LINE(328)
										_this2;
									}
									HX_STACK_LINE(328)
									{
										HX_STACK_LINE(328)
										::phoenix::Matrix _this2 = _this1->_rotation_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(328)
										::phoenix::Quaternion tmp14 = _this1->local->rotation;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(328)
										::phoenix::Quaternion q = tmp14;		HX_STACK_VAR(q,"q");
										HX_STACK_LINE(328)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(328)
										Float tmp15 = (q->x + q->x);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(328)
										Float x2 = tmp15;		HX_STACK_VAR(x2,"x2");
										HX_STACK_LINE(328)
										Float tmp16 = (q->y + q->y);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(328)
										Float y2 = tmp16;		HX_STACK_VAR(y2,"y2");
										HX_STACK_LINE(328)
										Float tmp17 = (q->z + q->z);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(328)
										Float z2 = tmp17;		HX_STACK_VAR(z2,"z2");
										HX_STACK_LINE(328)
										Float tmp18 = (q->x * x2);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(328)
										Float xx = tmp18;		HX_STACK_VAR(xx,"xx");
										HX_STACK_LINE(328)
										Float tmp19 = (q->x * y2);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(328)
										Float xy = tmp19;		HX_STACK_VAR(xy,"xy");
										HX_STACK_LINE(328)
										Float tmp20 = (q->x * z2);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(328)
										Float xz = tmp20;		HX_STACK_VAR(xz,"xz");
										HX_STACK_LINE(328)
										Float tmp21 = (q->y * y2);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(328)
										Float yy = tmp21;		HX_STACK_VAR(yy,"yy");
										HX_STACK_LINE(328)
										Float tmp22 = (q->y * z2);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(328)
										Float yz = tmp22;		HX_STACK_VAR(yz,"yz");
										HX_STACK_LINE(328)
										Float tmp23 = (q->z * z2);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(328)
										Float zz = tmp23;		HX_STACK_VAR(zz,"zz");
										HX_STACK_LINE(328)
										Float tmp24 = (q->w * x2);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(328)
										Float wx = tmp24;		HX_STACK_VAR(wx,"wx");
										HX_STACK_LINE(328)
										Float tmp25 = (q->w * y2);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(328)
										Float wy = tmp25;		HX_STACK_VAR(wy,"wy");
										HX_STACK_LINE(328)
										Float tmp26 = (q->w * z2);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(328)
										Float wz = tmp26;		HX_STACK_VAR(wz,"wz");
										HX_STACK_LINE(328)
										Float tmp27 = (yy + zz);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(328)
										Float tmp28 = ((int)1 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(328)
										te[(int)0] = tmp28;
										HX_STACK_LINE(328)
										Float tmp29 = (xy - wz);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(328)
										te[(int)4] = tmp29;
										HX_STACK_LINE(328)
										Float tmp30 = (xz + wy);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(328)
										te[(int)8] = tmp30;
										HX_STACK_LINE(328)
										Float tmp31 = (xy + wz);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(328)
										te[(int)1] = tmp31;
										HX_STACK_LINE(328)
										Float tmp32 = (xx + zz);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(328)
										Float tmp33 = ((int)1 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(328)
										te[(int)5] = tmp33;
										HX_STACK_LINE(328)
										Float tmp34 = (yz - wx);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(328)
										te[(int)9] = tmp34;
										HX_STACK_LINE(328)
										Float tmp35 = (xz - wy);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(328)
										te[(int)2] = tmp35;
										HX_STACK_LINE(328)
										Float tmp36 = (yz + wx);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(328)
										te[(int)6] = tmp36;
										HX_STACK_LINE(328)
										Float tmp37 = (xx + yy);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(328)
										Float tmp38 = ((int)1 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(328)
										te[(int)10] = tmp38;
										HX_STACK_LINE(328)
										te[(int)3] = (int)0;
										HX_STACK_LINE(328)
										te[(int)7] = (int)0;
										HX_STACK_LINE(328)
										te[(int)11] = (int)0;
										HX_STACK_LINE(328)
										te[(int)12] = (int)0;
										HX_STACK_LINE(328)
										te[(int)13] = (int)0;
										HX_STACK_LINE(328)
										te[(int)14] = (int)0;
										HX_STACK_LINE(328)
										te[(int)15] = (int)1;
										HX_STACK_LINE(328)
										_this2;
									}
									HX_STACK_LINE(328)
									{
										HX_STACK_LINE(328)
										::phoenix::Matrix _this2 = _this1->_origin_undo_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(328)
											e[(int)0] = (int)1;
											HX_STACK_LINE(328)
											e[(int)4] = (int)0;
											HX_STACK_LINE(328)
											e[(int)8] = (int)0;
											HX_STACK_LINE(328)
											Float tmp14 = _this1->origin->x;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(328)
											Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(328)
											e[(int)12] = tmp15;
											HX_STACK_LINE(328)
											e[(int)1] = (int)0;
											HX_STACK_LINE(328)
											e[(int)5] = (int)1;
											HX_STACK_LINE(328)
											e[(int)9] = (int)0;
											HX_STACK_LINE(328)
											Float tmp16 = _this1->origin->y;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(328)
											Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(328)
											e[(int)13] = tmp17;
											HX_STACK_LINE(328)
											e[(int)2] = (int)0;
											HX_STACK_LINE(328)
											e[(int)6] = (int)0;
											HX_STACK_LINE(328)
											e[(int)10] = (int)1;
											HX_STACK_LINE(328)
											Float tmp18 = _this1->origin->z;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(328)
											Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(328)
											e[(int)14] = tmp19;
											HX_STACK_LINE(328)
											e[(int)3] = (int)0;
											HX_STACK_LINE(328)
											e[(int)7] = (int)0;
											HX_STACK_LINE(328)
											e[(int)11] = (int)0;
											HX_STACK_LINE(328)
											e[(int)15] = (int)1;
											HX_STACK_LINE(328)
											_this2;
										}
										HX_STACK_LINE(328)
										_this2;
									}
									HX_STACK_LINE(328)
									{
										HX_STACK_LINE(328)
										::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(328)
										::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(328)
											e[(int)0] = (int)1;
											HX_STACK_LINE(328)
											e[(int)4] = (int)0;
											HX_STACK_LINE(328)
											e[(int)8] = (int)0;
											HX_STACK_LINE(328)
											Float tmp15 = _this1->origin->x;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(328)
											e[(int)12] = tmp15;
											HX_STACK_LINE(328)
											e[(int)1] = (int)0;
											HX_STACK_LINE(328)
											e[(int)5] = (int)1;
											HX_STACK_LINE(328)
											e[(int)9] = (int)0;
											HX_STACK_LINE(328)
											Float tmp16 = _this1->origin->y;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(328)
											e[(int)13] = tmp16;
											HX_STACK_LINE(328)
											e[(int)2] = (int)0;
											HX_STACK_LINE(328)
											e[(int)6] = (int)0;
											HX_STACK_LINE(328)
											e[(int)10] = (int)1;
											HX_STACK_LINE(328)
											Float tmp17 = _this1->origin->z;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(328)
											e[(int)14] = tmp17;
											HX_STACK_LINE(328)
											e[(int)3] = (int)0;
											HX_STACK_LINE(328)
											e[(int)7] = (int)0;
											HX_STACK_LINE(328)
											e[(int)11] = (int)0;
											HX_STACK_LINE(328)
											e[(int)15] = (int)1;
											HX_STACK_LINE(328)
											_this2;
										}
										HX_STACK_LINE(328)
										_this2;
									}
									HX_STACK_LINE(328)
									{
										HX_STACK_LINE(328)
										::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(328)
										::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(328)
											Array< Float > be = _this1->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(328)
											Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(328)
											Float tmp15 = ae->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(328)
											Float a11 = tmp15;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(328)
											Float tmp16 = ae->__get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(328)
											Float a12 = tmp16;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(328)
											Float tmp17 = ae->__get((int)8);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(328)
											Float a13 = tmp17;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(328)
											Float tmp18 = ae->__get((int)12);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(328)
											Float a14 = tmp18;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(328)
											Float tmp19 = ae->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(328)
											Float a21 = tmp19;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(328)
											Float tmp20 = ae->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(328)
											Float a22 = tmp20;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(328)
											Float tmp21 = ae->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(328)
											Float a23 = tmp21;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(328)
											Float tmp22 = ae->__get((int)13);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(328)
											Float a24 = tmp22;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(328)
											Float tmp23 = ae->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(328)
											Float a31 = tmp23;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(328)
											Float tmp24 = ae->__get((int)6);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(328)
											Float a32 = tmp24;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(328)
											Float tmp25 = ae->__get((int)10);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(328)
											Float a33 = tmp25;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(328)
											Float tmp26 = ae->__get((int)14);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(328)
											Float a34 = tmp26;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(328)
											Float tmp27 = ae->__get((int)3);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(328)
											Float a41 = tmp27;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(328)
											Float tmp28 = ae->__get((int)7);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(328)
											Float a42 = tmp28;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(328)
											Float tmp29 = ae->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(328)
											Float a43 = tmp29;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(328)
											Float tmp30 = ae->__get((int)15);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(328)
											Float a44 = tmp30;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(328)
											Float tmp31 = be->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(328)
											Float b11 = tmp31;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(328)
											Float tmp32 = be->__get((int)4);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(328)
											Float b12 = tmp32;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(328)
											Float tmp33 = be->__get((int)8);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(328)
											Float b13 = tmp33;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(328)
											Float tmp34 = be->__get((int)12);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(328)
											Float b14 = tmp34;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(328)
											Float tmp35 = be->__get((int)1);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(328)
											Float b21 = tmp35;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(328)
											Float tmp36 = be->__get((int)5);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(328)
											Float b22 = tmp36;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(328)
											Float tmp37 = be->__get((int)9);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(328)
											Float b23 = tmp37;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(328)
											Float tmp38 = be->__get((int)13);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(328)
											Float b24 = tmp38;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(328)
											Float tmp39 = be->__get((int)2);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(328)
											Float b31 = tmp39;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(328)
											Float tmp40 = be->__get((int)6);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(328)
											Float b32 = tmp40;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(328)
											Float tmp41 = be->__get((int)10);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(328)
											Float b33 = tmp41;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(328)
											Float tmp42 = be->__get((int)14);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(328)
											Float b34 = tmp42;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(328)
											Float tmp43 = be->__get((int)3);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(328)
											Float b41 = tmp43;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(328)
											Float tmp44 = be->__get((int)7);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(328)
											Float b42 = tmp44;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(328)
											Float tmp45 = be->__get((int)11);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(328)
											Float b43 = tmp45;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(328)
											Float tmp46 = be->__get((int)15);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(328)
											Float b44 = tmp46;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(328)
											Float tmp47 = (a11 * b11);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(328)
											Float tmp48 = (a12 * b21);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(328)
											Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(328)
											Float tmp50 = (a13 * b31);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(328)
											Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(328)
											Float tmp52 = (a14 * b41);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(328)
											Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(328)
											te[(int)0] = tmp53;
											HX_STACK_LINE(328)
											Float tmp54 = (a11 * b12);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(328)
											Float tmp55 = (a12 * b22);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(328)
											Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(328)
											Float tmp57 = (a13 * b32);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(328)
											Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(328)
											Float tmp59 = (a14 * b42);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(328)
											Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(328)
											te[(int)4] = tmp60;
											HX_STACK_LINE(328)
											Float tmp61 = (a11 * b13);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(328)
											Float tmp62 = (a12 * b23);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(328)
											Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(328)
											Float tmp64 = (a13 * b33);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(328)
											Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(328)
											Float tmp66 = (a14 * b43);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(328)
											Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(328)
											te[(int)8] = tmp67;
											HX_STACK_LINE(328)
											Float tmp68 = (a11 * b14);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(328)
											Float tmp69 = (a12 * b24);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(328)
											Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(328)
											Float tmp71 = (a13 * b34);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(328)
											Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(328)
											Float tmp73 = (a14 * b44);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(328)
											Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(328)
											te[(int)12] = tmp74;
											HX_STACK_LINE(328)
											Float tmp75 = (a21 * b11);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(328)
											Float tmp76 = (a22 * b21);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(328)
											Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(328)
											Float tmp78 = (a23 * b31);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(328)
											Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(328)
											Float tmp80 = (a24 * b41);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(328)
											Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(328)
											te[(int)1] = tmp81;
											HX_STACK_LINE(328)
											Float tmp82 = (a21 * b12);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(328)
											Float tmp83 = (a22 * b22);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(328)
											Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(328)
											Float tmp85 = (a23 * b32);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(328)
											Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(328)
											Float tmp87 = (a24 * b42);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(328)
											Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(328)
											te[(int)5] = tmp88;
											HX_STACK_LINE(328)
											Float tmp89 = (a21 * b13);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(328)
											Float tmp90 = (a22 * b23);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(328)
											Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(328)
											Float tmp92 = (a23 * b33);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(328)
											Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(328)
											Float tmp94 = (a24 * b43);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(328)
											Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(328)
											te[(int)9] = tmp95;
											HX_STACK_LINE(328)
											Float tmp96 = (a21 * b14);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(328)
											Float tmp97 = (a22 * b24);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(328)
											Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(328)
											Float tmp99 = (a23 * b34);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(328)
											Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(328)
											Float tmp101 = (a24 * b44);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(328)
											Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(328)
											te[(int)13] = tmp102;
											HX_STACK_LINE(328)
											Float tmp103 = (a31 * b11);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(328)
											Float tmp104 = (a32 * b21);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(328)
											Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(328)
											Float tmp106 = (a33 * b31);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(328)
											Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(328)
											Float tmp108 = (a34 * b41);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(328)
											Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(328)
											te[(int)2] = tmp109;
											HX_STACK_LINE(328)
											Float tmp110 = (a31 * b12);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(328)
											Float tmp111 = (a32 * b22);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(328)
											Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(328)
											Float tmp113 = (a33 * b32);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(328)
											Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(328)
											Float tmp115 = (a34 * b42);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(328)
											Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(328)
											te[(int)6] = tmp116;
											HX_STACK_LINE(328)
											Float tmp117 = (a31 * b13);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(328)
											Float tmp118 = (a32 * b23);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(328)
											Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(328)
											Float tmp120 = (a33 * b33);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(328)
											Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(328)
											Float tmp122 = (a34 * b43);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(328)
											Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(328)
											te[(int)10] = tmp123;
											HX_STACK_LINE(328)
											Float tmp124 = (a31 * b14);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(328)
											Float tmp125 = (a32 * b24);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(328)
											Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(328)
											Float tmp127 = (a33 * b34);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(328)
											Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(328)
											Float tmp129 = (a34 * b44);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(328)
											Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(328)
											te[(int)14] = tmp130;
											HX_STACK_LINE(328)
											Float tmp131 = (a41 * b11);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(328)
											Float tmp132 = (a42 * b21);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(328)
											Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(328)
											Float tmp134 = (a43 * b31);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(328)
											Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(328)
											Float tmp136 = (a44 * b41);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(328)
											Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(328)
											te[(int)3] = tmp137;
											HX_STACK_LINE(328)
											Float tmp138 = (a41 * b12);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(328)
											Float tmp139 = (a42 * b22);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(328)
											Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(328)
											Float tmp141 = (a43 * b32);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(328)
											Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(328)
											Float tmp143 = (a44 * b42);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(328)
											Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(328)
											te[(int)7] = tmp144;
											HX_STACK_LINE(328)
											Float tmp145 = (a41 * b13);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(328)
											Float tmp146 = (a42 * b23);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(328)
											Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(328)
											Float tmp148 = (a43 * b33);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(328)
											Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(328)
											Float tmp150 = (a44 * b43);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(328)
											Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(328)
											te[(int)11] = tmp151;
											HX_STACK_LINE(328)
											Float tmp152 = (a41 * b14);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(328)
											Float tmp153 = (a42 * b24);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(328)
											Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(328)
											Float tmp155 = (a43 * b34);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(328)
											Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
											HX_STACK_LINE(328)
											Float tmp157 = (a44 * b44);		HX_STACK_VAR(tmp157,"tmp157");
											HX_STACK_LINE(328)
											Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(328)
											te[(int)15] = tmp158;
											HX_STACK_LINE(328)
											_this2;
										}
									}
									HX_STACK_LINE(328)
									{
										HX_STACK_LINE(328)
										::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(328)
										::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(328)
										::phoenix::Vector tmp15 = _this1->local->scale;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(328)
										::phoenix::Vector _v = tmp15;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(328)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(328)
										Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(328)
										Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(328)
										Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(328)
										Float tmp16 = _x;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(328)
										hx::MultEq(te[(int)0],tmp16);
										HX_STACK_LINE(328)
										Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(328)
										hx::MultEq(te[(int)4],tmp17);
										HX_STACK_LINE(328)
										Float tmp18 = _z;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(328)
										hx::MultEq(te[(int)8],tmp18);
										HX_STACK_LINE(328)
										Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(328)
										hx::MultEq(te[(int)1],tmp19);
										HX_STACK_LINE(328)
										Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(328)
										hx::MultEq(te[(int)5],tmp20);
										HX_STACK_LINE(328)
										Float tmp21 = _z;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(328)
										hx::MultEq(te[(int)9],tmp21);
										HX_STACK_LINE(328)
										Float tmp22 = _x;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(328)
										hx::MultEq(te[(int)2],tmp22);
										HX_STACK_LINE(328)
										Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(328)
										hx::MultEq(te[(int)6],tmp23);
										HX_STACK_LINE(328)
										Float tmp24 = _z;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(328)
										hx::MultEq(te[(int)10],tmp24);
										HX_STACK_LINE(328)
										Float tmp25 = _x;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(328)
										hx::MultEq(te[(int)3],tmp25);
										HX_STACK_LINE(328)
										Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(328)
										hx::MultEq(te[(int)7],tmp26);
										HX_STACK_LINE(328)
										Float tmp27 = _z;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(328)
										hx::MultEq(te[(int)11],tmp27);
										HX_STACK_LINE(328)
										_this2;
									}
									HX_STACK_LINE(328)
									{
										HX_STACK_LINE(328)
										::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(328)
										::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(328)
										::phoenix::Vector tmp15 = _this1->local->pos;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(328)
										::phoenix::Vector _v = tmp15;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(328)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(328)
										Float tmp16 = _v->x;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(328)
										te[(int)12] = tmp16;
										HX_STACK_LINE(328)
										Float tmp17 = _v->y;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(328)
										te[(int)13] = tmp17;
										HX_STACK_LINE(328)
										Float tmp18 = _v->z;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(328)
										te[(int)14] = tmp18;
										HX_STACK_LINE(328)
										_this2;
									}
									HX_STACK_LINE(328)
									{
										HX_STACK_LINE(328)
										::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(328)
										::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(328)
											Array< Float > be = _this1->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(328)
											Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(328)
											Float tmp15 = ae->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(328)
											Float a11 = tmp15;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(328)
											Float tmp16 = ae->__get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(328)
											Float a12 = tmp16;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(328)
											Float tmp17 = ae->__get((int)8);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(328)
											Float a13 = tmp17;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(328)
											Float tmp18 = ae->__get((int)12);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(328)
											Float a14 = tmp18;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(328)
											Float tmp19 = ae->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(328)
											Float a21 = tmp19;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(328)
											Float tmp20 = ae->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(328)
											Float a22 = tmp20;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(328)
											Float tmp21 = ae->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(328)
											Float a23 = tmp21;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(328)
											Float tmp22 = ae->__get((int)13);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(328)
											Float a24 = tmp22;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(328)
											Float tmp23 = ae->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(328)
											Float a31 = tmp23;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(328)
											Float tmp24 = ae->__get((int)6);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(328)
											Float a32 = tmp24;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(328)
											Float tmp25 = ae->__get((int)10);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(328)
											Float a33 = tmp25;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(328)
											Float tmp26 = ae->__get((int)14);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(328)
											Float a34 = tmp26;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(328)
											Float tmp27 = ae->__get((int)3);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(328)
											Float a41 = tmp27;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(328)
											Float tmp28 = ae->__get((int)7);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(328)
											Float a42 = tmp28;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(328)
											Float tmp29 = ae->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(328)
											Float a43 = tmp29;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(328)
											Float tmp30 = ae->__get((int)15);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(328)
											Float a44 = tmp30;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(328)
											Float tmp31 = be->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(328)
											Float b11 = tmp31;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(328)
											Float tmp32 = be->__get((int)4);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(328)
											Float b12 = tmp32;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(328)
											Float tmp33 = be->__get((int)8);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(328)
											Float b13 = tmp33;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(328)
											Float tmp34 = be->__get((int)12);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(328)
											Float b14 = tmp34;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(328)
											Float tmp35 = be->__get((int)1);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(328)
											Float b21 = tmp35;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(328)
											Float tmp36 = be->__get((int)5);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(328)
											Float b22 = tmp36;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(328)
											Float tmp37 = be->__get((int)9);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(328)
											Float b23 = tmp37;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(328)
											Float tmp38 = be->__get((int)13);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(328)
											Float b24 = tmp38;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(328)
											Float tmp39 = be->__get((int)2);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(328)
											Float b31 = tmp39;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(328)
											Float tmp40 = be->__get((int)6);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(328)
											Float b32 = tmp40;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(328)
											Float tmp41 = be->__get((int)10);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(328)
											Float b33 = tmp41;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(328)
											Float tmp42 = be->__get((int)14);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(328)
											Float b34 = tmp42;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(328)
											Float tmp43 = be->__get((int)3);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(328)
											Float b41 = tmp43;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(328)
											Float tmp44 = be->__get((int)7);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(328)
											Float b42 = tmp44;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(328)
											Float tmp45 = be->__get((int)11);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(328)
											Float b43 = tmp45;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(328)
											Float tmp46 = be->__get((int)15);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(328)
											Float b44 = tmp46;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(328)
											Float tmp47 = (a11 * b11);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(328)
											Float tmp48 = (a12 * b21);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(328)
											Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(328)
											Float tmp50 = (a13 * b31);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(328)
											Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(328)
											Float tmp52 = (a14 * b41);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(328)
											Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(328)
											te[(int)0] = tmp53;
											HX_STACK_LINE(328)
											Float tmp54 = (a11 * b12);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(328)
											Float tmp55 = (a12 * b22);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(328)
											Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(328)
											Float tmp57 = (a13 * b32);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(328)
											Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(328)
											Float tmp59 = (a14 * b42);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(328)
											Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(328)
											te[(int)4] = tmp60;
											HX_STACK_LINE(328)
											Float tmp61 = (a11 * b13);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(328)
											Float tmp62 = (a12 * b23);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(328)
											Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(328)
											Float tmp64 = (a13 * b33);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(328)
											Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(328)
											Float tmp66 = (a14 * b43);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(328)
											Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(328)
											te[(int)8] = tmp67;
											HX_STACK_LINE(328)
											Float tmp68 = (a11 * b14);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(328)
											Float tmp69 = (a12 * b24);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(328)
											Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(328)
											Float tmp71 = (a13 * b34);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(328)
											Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(328)
											Float tmp73 = (a14 * b44);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(328)
											Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(328)
											te[(int)12] = tmp74;
											HX_STACK_LINE(328)
											Float tmp75 = (a21 * b11);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(328)
											Float tmp76 = (a22 * b21);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(328)
											Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(328)
											Float tmp78 = (a23 * b31);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(328)
											Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(328)
											Float tmp80 = (a24 * b41);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(328)
											Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(328)
											te[(int)1] = tmp81;
											HX_STACK_LINE(328)
											Float tmp82 = (a21 * b12);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(328)
											Float tmp83 = (a22 * b22);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(328)
											Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(328)
											Float tmp85 = (a23 * b32);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(328)
											Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(328)
											Float tmp87 = (a24 * b42);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(328)
											Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(328)
											te[(int)5] = tmp88;
											HX_STACK_LINE(328)
											Float tmp89 = (a21 * b13);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(328)
											Float tmp90 = (a22 * b23);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(328)
											Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(328)
											Float tmp92 = (a23 * b33);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(328)
											Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(328)
											Float tmp94 = (a24 * b43);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(328)
											Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(328)
											te[(int)9] = tmp95;
											HX_STACK_LINE(328)
											Float tmp96 = (a21 * b14);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(328)
											Float tmp97 = (a22 * b24);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(328)
											Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(328)
											Float tmp99 = (a23 * b34);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(328)
											Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(328)
											Float tmp101 = (a24 * b44);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(328)
											Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(328)
											te[(int)13] = tmp102;
											HX_STACK_LINE(328)
											Float tmp103 = (a31 * b11);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(328)
											Float tmp104 = (a32 * b21);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(328)
											Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(328)
											Float tmp106 = (a33 * b31);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(328)
											Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(328)
											Float tmp108 = (a34 * b41);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(328)
											Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(328)
											te[(int)2] = tmp109;
											HX_STACK_LINE(328)
											Float tmp110 = (a31 * b12);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(328)
											Float tmp111 = (a32 * b22);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(328)
											Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(328)
											Float tmp113 = (a33 * b32);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(328)
											Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(328)
											Float tmp115 = (a34 * b42);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(328)
											Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(328)
											te[(int)6] = tmp116;
											HX_STACK_LINE(328)
											Float tmp117 = (a31 * b13);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(328)
											Float tmp118 = (a32 * b23);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(328)
											Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(328)
											Float tmp120 = (a33 * b33);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(328)
											Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(328)
											Float tmp122 = (a34 * b43);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(328)
											Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(328)
											te[(int)10] = tmp123;
											HX_STACK_LINE(328)
											Float tmp124 = (a31 * b14);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(328)
											Float tmp125 = (a32 * b24);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(328)
											Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(328)
											Float tmp127 = (a33 * b34);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(328)
											Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(328)
											Float tmp129 = (a34 * b44);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(328)
											Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(328)
											te[(int)14] = tmp130;
											HX_STACK_LINE(328)
											Float tmp131 = (a41 * b11);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(328)
											Float tmp132 = (a42 * b21);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(328)
											Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(328)
											Float tmp134 = (a43 * b31);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(328)
											Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(328)
											Float tmp136 = (a44 * b41);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(328)
											Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(328)
											te[(int)3] = tmp137;
											HX_STACK_LINE(328)
											Float tmp138 = (a41 * b12);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(328)
											Float tmp139 = (a42 * b22);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(328)
											Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(328)
											Float tmp141 = (a43 * b32);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(328)
											Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(328)
											Float tmp143 = (a44 * b42);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(328)
											Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(328)
											te[(int)7] = tmp144;
											HX_STACK_LINE(328)
											Float tmp145 = (a41 * b13);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(328)
											Float tmp146 = (a42 * b23);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(328)
											Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(328)
											Float tmp148 = (a43 * b33);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(328)
											Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(328)
											Float tmp150 = (a44 * b43);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(328)
											Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(328)
											te[(int)11] = tmp151;
											HX_STACK_LINE(328)
											Float tmp152 = (a41 * b14);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(328)
											Float tmp153 = (a42 * b24);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(328)
											Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(328)
											Float tmp155 = (a43 * b34);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(328)
											Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
											HX_STACK_LINE(328)
											Float tmp157 = (a44 * b44);		HX_STACK_VAR(tmp157,"tmp157");
											HX_STACK_LINE(328)
											Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(328)
											te[(int)15] = tmp158;
											HX_STACK_LINE(328)
											_this2;
										}
									}
									HX_STACK_LINE(328)
									bool tmp14 = (_this1->parent != null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(328)
									if ((tmp14)){
										HX_STACK_LINE(328)
										::phoenix::Spatial tmp15 = _this1->get_world();		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(328)
										::phoenix::Spatial _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(328)
										::phoenix::Matrix tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											::phoenix::Matrix tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												::phoenix::Spatial tmp18 = _this1->get_world();		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(328)
												::phoenix::Spatial _this3 = tmp18;		HX_STACK_VAR(_this3,"_this3");
												HX_STACK_LINE(328)
												tmp17 = _this3->matrix;
											}
											HX_STACK_LINE(328)
											::phoenix::Matrix _this3 = tmp17;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(328)
											::phoenix::Matrix tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												::phoenix::Spatial tmp19 = _this1->parent->get_world();		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(328)
												::phoenix::Spatial _this4 = tmp19;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(328)
												tmp18 = _this4->matrix;
											}
											HX_STACK_LINE(328)
											::phoenix::Matrix _a = tmp18;		HX_STACK_VAR(_a,"_a");
											HX_STACK_LINE(328)
											Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(328)
											::phoenix::Matrix tmp19 = _this1->local->matrix;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(328)
											Array< Float > be = tmp19->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(328)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(328)
											Float tmp20 = ae->__get((int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(328)
											Float a11 = tmp20;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(328)
											Float tmp21 = ae->__get((int)4);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(328)
											Float a12 = tmp21;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(328)
											Float tmp22 = ae->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(328)
											Float a13 = tmp22;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(328)
											Float tmp23 = ae->__get((int)12);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(328)
											Float a14 = tmp23;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(328)
											Float tmp24 = ae->__get((int)1);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(328)
											Float a21 = tmp24;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(328)
											Float tmp25 = ae->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(328)
											Float a22 = tmp25;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(328)
											Float tmp26 = ae->__get((int)9);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(328)
											Float a23 = tmp26;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(328)
											Float tmp27 = ae->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(328)
											Float a24 = tmp27;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(328)
											Float tmp28 = ae->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(328)
											Float a31 = tmp28;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(328)
											Float tmp29 = ae->__get((int)6);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(328)
											Float a32 = tmp29;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(328)
											Float tmp30 = ae->__get((int)10);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(328)
											Float a33 = tmp30;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(328)
											Float tmp31 = ae->__get((int)14);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(328)
											Float a34 = tmp31;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(328)
											Float tmp32 = ae->__get((int)3);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(328)
											Float a41 = tmp32;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(328)
											Float tmp33 = ae->__get((int)7);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(328)
											Float a42 = tmp33;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(328)
											Float tmp34 = ae->__get((int)11);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(328)
											Float a43 = tmp34;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(328)
											Float tmp35 = ae->__get((int)15);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(328)
											Float a44 = tmp35;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(328)
											Float tmp36 = be->__get((int)0);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(328)
											Float b11 = tmp36;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(328)
											Float tmp37 = be->__get((int)4);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(328)
											Float b12 = tmp37;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(328)
											Float tmp38 = be->__get((int)8);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(328)
											Float b13 = tmp38;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(328)
											Float tmp39 = be->__get((int)12);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(328)
											Float b14 = tmp39;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(328)
											Float tmp40 = be->__get((int)1);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(328)
											Float b21 = tmp40;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(328)
											Float tmp41 = be->__get((int)5);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(328)
											Float b22 = tmp41;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(328)
											Float tmp42 = be->__get((int)9);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(328)
											Float b23 = tmp42;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(328)
											Float tmp43 = be->__get((int)13);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(328)
											Float b24 = tmp43;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(328)
											Float tmp44 = be->__get((int)2);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(328)
											Float b31 = tmp44;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(328)
											Float tmp45 = be->__get((int)6);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(328)
											Float b32 = tmp45;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(328)
											Float tmp46 = be->__get((int)10);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(328)
											Float b33 = tmp46;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(328)
											Float tmp47 = be->__get((int)14);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(328)
											Float b34 = tmp47;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(328)
											Float tmp48 = be->__get((int)3);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(328)
											Float b41 = tmp48;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(328)
											Float tmp49 = be->__get((int)7);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(328)
											Float b42 = tmp49;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(328)
											Float tmp50 = be->__get((int)11);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(328)
											Float b43 = tmp50;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(328)
											Float tmp51 = be->__get((int)15);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(328)
											Float b44 = tmp51;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(328)
											Float tmp52 = (a11 * b11);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(328)
											Float tmp53 = (a12 * b21);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(328)
											Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(328)
											Float tmp55 = (a13 * b31);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(328)
											Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(328)
											Float tmp57 = (a14 * b41);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(328)
											Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(328)
											te[(int)0] = tmp58;
											HX_STACK_LINE(328)
											Float tmp59 = (a11 * b12);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(328)
											Float tmp60 = (a12 * b22);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(328)
											Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(328)
											Float tmp62 = (a13 * b32);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(328)
											Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(328)
											Float tmp64 = (a14 * b42);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(328)
											Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(328)
											te[(int)4] = tmp65;
											HX_STACK_LINE(328)
											Float tmp66 = (a11 * b13);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(328)
											Float tmp67 = (a12 * b23);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(328)
											Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(328)
											Float tmp69 = (a13 * b33);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(328)
											Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(328)
											Float tmp71 = (a14 * b43);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(328)
											Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(328)
											te[(int)8] = tmp72;
											HX_STACK_LINE(328)
											Float tmp73 = (a11 * b14);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(328)
											Float tmp74 = (a12 * b24);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(328)
											Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(328)
											Float tmp76 = (a13 * b34);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(328)
											Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(328)
											Float tmp78 = (a14 * b44);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(328)
											Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(328)
											te[(int)12] = tmp79;
											HX_STACK_LINE(328)
											Float tmp80 = (a21 * b11);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(328)
											Float tmp81 = (a22 * b21);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(328)
											Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(328)
											Float tmp83 = (a23 * b31);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(328)
											Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(328)
											Float tmp85 = (a24 * b41);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(328)
											Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(328)
											te[(int)1] = tmp86;
											HX_STACK_LINE(328)
											Float tmp87 = (a21 * b12);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(328)
											Float tmp88 = (a22 * b22);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(328)
											Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(328)
											Float tmp90 = (a23 * b32);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(328)
											Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(328)
											Float tmp92 = (a24 * b42);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(328)
											Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(328)
											te[(int)5] = tmp93;
											HX_STACK_LINE(328)
											Float tmp94 = (a21 * b13);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(328)
											Float tmp95 = (a22 * b23);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(328)
											Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(328)
											Float tmp97 = (a23 * b33);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(328)
											Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(328)
											Float tmp99 = (a24 * b43);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(328)
											Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(328)
											te[(int)9] = tmp100;
											HX_STACK_LINE(328)
											Float tmp101 = (a21 * b14);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(328)
											Float tmp102 = (a22 * b24);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(328)
											Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(328)
											Float tmp104 = (a23 * b34);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(328)
											Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(328)
											Float tmp106 = (a24 * b44);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(328)
											Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(328)
											te[(int)13] = tmp107;
											HX_STACK_LINE(328)
											Float tmp108 = (a31 * b11);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(328)
											Float tmp109 = (a32 * b21);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(328)
											Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(328)
											Float tmp111 = (a33 * b31);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(328)
											Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(328)
											Float tmp113 = (a34 * b41);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(328)
											Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(328)
											te[(int)2] = tmp114;
											HX_STACK_LINE(328)
											Float tmp115 = (a31 * b12);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(328)
											Float tmp116 = (a32 * b22);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(328)
											Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(328)
											Float tmp118 = (a33 * b32);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(328)
											Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(328)
											Float tmp120 = (a34 * b42);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(328)
											Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(328)
											te[(int)6] = tmp121;
											HX_STACK_LINE(328)
											Float tmp122 = (a31 * b13);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(328)
											Float tmp123 = (a32 * b23);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(328)
											Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(328)
											Float tmp125 = (a33 * b33);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(328)
											Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(328)
											Float tmp127 = (a34 * b43);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(328)
											Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(328)
											te[(int)10] = tmp128;
											HX_STACK_LINE(328)
											Float tmp129 = (a31 * b14);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(328)
											Float tmp130 = (a32 * b24);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(328)
											Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(328)
											Float tmp132 = (a33 * b34);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(328)
											Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(328)
											Float tmp134 = (a34 * b44);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(328)
											Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(328)
											te[(int)14] = tmp135;
											HX_STACK_LINE(328)
											Float tmp136 = (a41 * b11);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(328)
											Float tmp137 = (a42 * b21);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(328)
											Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(328)
											Float tmp139 = (a43 * b31);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(328)
											Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(328)
											Float tmp141 = (a44 * b41);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(328)
											Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(328)
											te[(int)3] = tmp142;
											HX_STACK_LINE(328)
											Float tmp143 = (a41 * b12);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(328)
											Float tmp144 = (a42 * b22);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(328)
											Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(328)
											Float tmp146 = (a43 * b32);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(328)
											Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(328)
											Float tmp148 = (a44 * b42);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(328)
											Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(328)
											te[(int)7] = tmp149;
											HX_STACK_LINE(328)
											Float tmp150 = (a41 * b13);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(328)
											Float tmp151 = (a42 * b23);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(328)
											Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(328)
											Float tmp153 = (a43 * b33);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(328)
											Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(328)
											Float tmp155 = (a44 * b43);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(328)
											Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
											HX_STACK_LINE(328)
											te[(int)11] = tmp156;
											HX_STACK_LINE(328)
											Float tmp157 = (a41 * b14);		HX_STACK_VAR(tmp157,"tmp157");
											HX_STACK_LINE(328)
											Float tmp158 = (a42 * b24);		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(328)
											Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
											HX_STACK_LINE(328)
											Float tmp160 = (a43 * b34);		HX_STACK_VAR(tmp160,"tmp160");
											HX_STACK_LINE(328)
											Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
											HX_STACK_LINE(328)
											Float tmp162 = (a44 * b44);		HX_STACK_VAR(tmp162,"tmp162");
											HX_STACK_LINE(328)
											Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
											HX_STACK_LINE(328)
											te[(int)15] = tmp163;
											HX_STACK_LINE(328)
											tmp16 = _this3;
										}
										HX_STACK_LINE(328)
										::phoenix::Matrix _m = tmp16;		HX_STACK_VAR(_m,"_m");
										HX_STACK_LINE(328)
										_this2->matrix = _m;
										HX_STACK_LINE(328)
										bool tmp17 = (_m != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(328)
										if ((tmp17)){
											HX_STACK_LINE(328)
											::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
												HX_STACK_LINE(328)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(328)
												bool tmp19 = (array != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(328)
												if ((tmp19)){
													HX_STACK_LINE(328)
													::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(328)
													{
														HX_STACK_LINE(328)
														::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(328)
														::snow::api::buffers::ArrayBufferView _this3 = tmp21;		HX_STACK_VAR(_this3,"_this3");
														HX_STACK_LINE(328)
														_this3->byteOffset = (int)0;
														HX_STACK_LINE(328)
														_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
														HX_STACK_LINE(328)
														int tmp22 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(328)
														_this3->byteLength = tmp22;
														HX_STACK_LINE(328)
														::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(328)
														{
															HX_STACK_LINE(328)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(328)
															int tmp24 = _this3->byteLength;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(328)
															::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(328)
															this2 = tmp25;
															HX_STACK_LINE(328)
															tmp23 = this2;
														}
														HX_STACK_LINE(328)
														_this3->buffer = tmp23;
														HX_STACK_LINE(328)
														_this3->copyFromArray(((Array< Float >)(array)),null());
														HX_STACK_LINE(328)
														tmp20 = _this3;
													}
													HX_STACK_LINE(328)
													this1 = tmp20;
												}
												else{
													HX_STACK_LINE(328)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
												}
												HX_STACK_LINE(328)
												tmp18 = this1;
											}
											HX_STACK_LINE(328)
											_this2->floats = tmp18;
										}
										HX_STACK_LINE(328)
										_this2->matrix;
									}
									else{
										HX_STACK_LINE(328)
										::phoenix::Spatial tmp15 = _this1->get_world();		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(328)
										::phoenix::Spatial _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(328)
										::phoenix::Matrix tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(328)
										{
											HX_STACK_LINE(328)
											::phoenix::Matrix tmp17 = _this1->local->matrix;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(328)
											Array< Float > te = tmp17->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(328)
											Float tmp18 = te->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(328)
											Float tmp19 = te->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(328)
											Float tmp20 = te->__get((int)8);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(328)
											Float tmp21 = te->__get((int)12);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(328)
											Float tmp22 = te->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(328)
											Float tmp23 = te->__get((int)5);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(328)
											Float tmp24 = te->__get((int)9);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(328)
											Float tmp25 = te->__get((int)13);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(328)
											Float tmp26 = te->__get((int)2);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(328)
											Float tmp27 = te->__get((int)6);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(328)
											Float tmp28 = te->__get((int)10);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(328)
											Float tmp29 = te->__get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(328)
											Float tmp30 = te->__get((int)3);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(328)
											Float tmp31 = te->__get((int)7);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(328)
											Float tmp32 = te->__get((int)11);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(328)
											Float tmp33 = te->__get((int)15);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(328)
											tmp16 = ::phoenix::Matrix_obj::__new(tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31,tmp32,tmp33);
										}
										HX_STACK_LINE(328)
										::phoenix::Matrix _m = tmp16;		HX_STACK_VAR(_m,"_m");
										HX_STACK_LINE(328)
										_this2->matrix = _m;
										HX_STACK_LINE(328)
										bool tmp17 = (_m != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(328)
										if ((tmp17)){
											HX_STACK_LINE(328)
											::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
												HX_STACK_LINE(328)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(328)
												bool tmp19 = (array != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(328)
												if ((tmp19)){
													HX_STACK_LINE(328)
													::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(328)
													{
														HX_STACK_LINE(328)
														::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(328)
														::snow::api::buffers::ArrayBufferView _this3 = tmp21;		HX_STACK_VAR(_this3,"_this3");
														HX_STACK_LINE(328)
														_this3->byteOffset = (int)0;
														HX_STACK_LINE(328)
														_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
														HX_STACK_LINE(328)
														int tmp22 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(328)
														_this3->byteLength = tmp22;
														HX_STACK_LINE(328)
														::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(328)
														{
															HX_STACK_LINE(328)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(328)
															int tmp24 = _this3->byteLength;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(328)
															::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(328)
															this2 = tmp25;
															HX_STACK_LINE(328)
															tmp23 = this2;
														}
														HX_STACK_LINE(328)
														_this3->buffer = tmp23;
														HX_STACK_LINE(328)
														_this3->copyFromArray(((Array< Float >)(array)),null());
														HX_STACK_LINE(328)
														tmp20 = _this3;
													}
													HX_STACK_LINE(328)
													this1 = tmp20;
												}
												else{
													HX_STACK_LINE(328)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
												}
												HX_STACK_LINE(328)
												tmp18 = this1;
											}
											HX_STACK_LINE(328)
											_this2->floats = tmp18;
										}
										HX_STACK_LINE(328)
										_this2->matrix;
									}
									HX_STACK_LINE(328)
									{
										HX_STACK_LINE(328)
										::phoenix::Spatial tmp15 = _this1->get_world();		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(328)
										::phoenix::Spatial _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(328)
										bool tmp16 = _this2->auto_decompose;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(328)
										if ((tmp16)){
											HX_STACK_LINE(328)
											::phoenix::MatrixTransform tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
												HX_STACK_LINE(328)
												::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
												HX_STACK_LINE(328)
												::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
												HX_STACK_LINE(328)
												::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
												HX_STACK_LINE(328)
												Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(328)
												::phoenix::Matrix tmp18 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(328)
												::phoenix::Matrix matrix = tmp18;		HX_STACK_VAR(matrix,"matrix");
												HX_STACK_LINE(328)
												Float tmp19 = te->__get((int)0);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(328)
												Float _ax_x = tmp19;		HX_STACK_VAR(_ax_x,"_ax_x");
												HX_STACK_LINE(328)
												Float tmp20 = te->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(328)
												Float _ax_y = tmp20;		HX_STACK_VAR(_ax_y,"_ax_y");
												HX_STACK_LINE(328)
												Float tmp21 = te->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(328)
												Float _ax_z = tmp21;		HX_STACK_VAR(_ax_z,"_ax_z");
												HX_STACK_LINE(328)
												Float tmp22 = te->__get((int)4);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(328)
												Float _ay_x = tmp22;		HX_STACK_VAR(_ay_x,"_ay_x");
												HX_STACK_LINE(328)
												Float tmp23 = te->__get((int)5);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(328)
												Float _ay_y = tmp23;		HX_STACK_VAR(_ay_y,"_ay_y");
												HX_STACK_LINE(328)
												Float tmp24 = te->__get((int)6);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(328)
												Float _ay_z = tmp24;		HX_STACK_VAR(_ay_z,"_ay_z");
												HX_STACK_LINE(328)
												Float tmp25 = te->__get((int)8);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(328)
												Float _az_x = tmp25;		HX_STACK_VAR(_az_x,"_az_x");
												HX_STACK_LINE(328)
												Float tmp26 = te->__get((int)9);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(328)
												Float _az_y = tmp26;		HX_STACK_VAR(_az_y,"_az_y");
												HX_STACK_LINE(328)
												Float tmp27 = te->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(328)
												Float _az_z = tmp27;		HX_STACK_VAR(_az_z,"_az_z");
												HX_STACK_LINE(328)
												Float tmp28 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(328)
												Float tmp29 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(328)
												Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(328)
												Float tmp31 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(328)
												Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(328)
												Float tmp33 = ::Math_obj::sqrt(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(328)
												Float _ax_length = tmp33;		HX_STACK_VAR(_ax_length,"_ax_length");
												HX_STACK_LINE(328)
												Float tmp34 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(328)
												Float tmp35 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(328)
												Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(328)
												Float tmp37 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(328)
												Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(328)
												Float tmp39 = ::Math_obj::sqrt(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(328)
												Float _ay_length = tmp39;		HX_STACK_VAR(_ay_length,"_ay_length");
												HX_STACK_LINE(328)
												Float tmp40 = (_az_x * _az_x);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(328)
												Float tmp41 = (_az_y * _az_y);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(328)
												Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(328)
												Float tmp43 = (_az_z * _az_z);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(328)
												Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(328)
												Float tmp45 = ::Math_obj::sqrt(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(328)
												Float _az_length = tmp45;		HX_STACK_VAR(_az_length,"_az_length");
												HX_STACK_LINE(328)
												bool tmp46 = (_quaternion == null());		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(328)
												if ((tmp46)){
													HX_STACK_LINE(328)
													::phoenix::Quaternion tmp47 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(328)
													_quaternion = tmp47;
												}
												HX_STACK_LINE(328)
												bool tmp47 = (_position == null());		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(328)
												if ((tmp47)){
													HX_STACK_LINE(328)
													Float tmp48 = te->__get((int)12);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(328)
													Float tmp49 = te->__get((int)13);		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(328)
													Float tmp50 = te->__get((int)14);		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(328)
													::phoenix::Vector tmp51 = ::phoenix::Vector_obj::__new(tmp48,tmp49,tmp50,null());		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(328)
													_position = tmp51;
												}
												else{
													HX_STACK_LINE(328)
													{
														HX_STACK_LINE(328)
														Float tmp48 = te->__get((int)12);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(328)
														Float _x = tmp48;		HX_STACK_VAR(_x,"_x");
														HX_STACK_LINE(328)
														_position->x = _x;
														HX_STACK_LINE(328)
														bool tmp49 = _position->_construct;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(328)
														if ((tmp49)){
															HX_STACK_LINE(328)
															_position->x;
														}
														else{
															HX_STACK_LINE(328)
															bool tmp50 = (_position->listen_x != null());		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(328)
															bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(328)
															if ((tmp50)){
																HX_STACK_LINE(328)
																bool tmp52 = _position->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(328)
																bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(328)
																tmp51 = !(tmp53);
															}
															else{
																HX_STACK_LINE(328)
																tmp51 = false;
															}
															HX_STACK_LINE(328)
															if ((tmp51)){
																HX_STACK_LINE(328)
																Float tmp52 = _x;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(328)
																_position->listen_x(tmp52);
															}
															HX_STACK_LINE(328)
															_position->x;
														}
													}
													HX_STACK_LINE(328)
													{
														HX_STACK_LINE(328)
														Float tmp48 = te->__get((int)13);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(328)
														Float _y = tmp48;		HX_STACK_VAR(_y,"_y");
														HX_STACK_LINE(328)
														_position->y = _y;
														HX_STACK_LINE(328)
														bool tmp49 = _position->_construct;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(328)
														if ((tmp49)){
															HX_STACK_LINE(328)
															_position->y;
														}
														else{
															HX_STACK_LINE(328)
															bool tmp50 = (_position->listen_y != null());		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(328)
															bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(328)
															if ((tmp50)){
																HX_STACK_LINE(328)
																bool tmp52 = _position->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(328)
																bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(328)
																tmp51 = !(tmp53);
															}
															else{
																HX_STACK_LINE(328)
																tmp51 = false;
															}
															HX_STACK_LINE(328)
															if ((tmp51)){
																HX_STACK_LINE(328)
																Float tmp52 = _y;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(328)
																_position->listen_y(tmp52);
															}
															HX_STACK_LINE(328)
															_position->y;
														}
													}
													HX_STACK_LINE(328)
													{
														HX_STACK_LINE(328)
														Float tmp48 = te->__get((int)14);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(328)
														Float _z = tmp48;		HX_STACK_VAR(_z,"_z");
														HX_STACK_LINE(328)
														_position->z = _z;
														HX_STACK_LINE(328)
														bool tmp49 = _position->_construct;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(328)
														if ((tmp49)){
															HX_STACK_LINE(328)
															_position->z;
														}
														else{
															HX_STACK_LINE(328)
															bool tmp50 = (_position->listen_z != null());		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(328)
															bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(328)
															if ((tmp50)){
																HX_STACK_LINE(328)
																bool tmp52 = _position->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(328)
																bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(328)
																tmp51 = !(tmp53);
															}
															else{
																HX_STACK_LINE(328)
																tmp51 = false;
															}
															HX_STACK_LINE(328)
															if ((tmp51)){
																HX_STACK_LINE(328)
																Float tmp52 = _z;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(328)
																_position->listen_z(tmp52);
															}
															HX_STACK_LINE(328)
															_position->z;
														}
													}
												}
												HX_STACK_LINE(328)
												bool tmp48 = (_scale == null());		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(328)
												if ((tmp48)){
													HX_STACK_LINE(328)
													::phoenix::Vector tmp49 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(328)
													_scale = tmp49;
												}
												else{
													HX_STACK_LINE(328)
													{
														HX_STACK_LINE(328)
														_scale->x = _ax_length;
														HX_STACK_LINE(328)
														bool tmp49 = _scale->_construct;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(328)
														if ((tmp49)){
															HX_STACK_LINE(328)
															_scale->x;
														}
														else{
															HX_STACK_LINE(328)
															bool tmp50 = (_scale->listen_x != null());		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(328)
															bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(328)
															if ((tmp50)){
																HX_STACK_LINE(328)
																bool tmp52 = _scale->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(328)
																bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(328)
																tmp51 = !(tmp53);
															}
															else{
																HX_STACK_LINE(328)
																tmp51 = false;
															}
															HX_STACK_LINE(328)
															if ((tmp51)){
																HX_STACK_LINE(328)
																Float tmp52 = _ax_length;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(328)
																_scale->listen_x(tmp52);
															}
															HX_STACK_LINE(328)
															_scale->x;
														}
													}
													HX_STACK_LINE(328)
													{
														HX_STACK_LINE(328)
														_scale->y = _ay_length;
														HX_STACK_LINE(328)
														bool tmp49 = _scale->_construct;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(328)
														if ((tmp49)){
															HX_STACK_LINE(328)
															_scale->y;
														}
														else{
															HX_STACK_LINE(328)
															bool tmp50 = (_scale->listen_y != null());		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(328)
															bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(328)
															if ((tmp50)){
																HX_STACK_LINE(328)
																bool tmp52 = _scale->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(328)
																bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(328)
																tmp51 = !(tmp53);
															}
															else{
																HX_STACK_LINE(328)
																tmp51 = false;
															}
															HX_STACK_LINE(328)
															if ((tmp51)){
																HX_STACK_LINE(328)
																Float tmp52 = _ay_length;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(328)
																_scale->listen_y(tmp52);
															}
															HX_STACK_LINE(328)
															_scale->y;
														}
													}
													HX_STACK_LINE(328)
													{
														HX_STACK_LINE(328)
														_scale->z = _az_length;
														HX_STACK_LINE(328)
														bool tmp49 = _scale->_construct;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(328)
														if ((tmp49)){
															HX_STACK_LINE(328)
															_scale->z;
														}
														else{
															HX_STACK_LINE(328)
															bool tmp50 = (_scale->listen_z != null());		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(328)
															bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(328)
															if ((tmp50)){
																HX_STACK_LINE(328)
																bool tmp52 = _scale->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(328)
																bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(328)
																tmp51 = !(tmp53);
															}
															else{
																HX_STACK_LINE(328)
																tmp51 = false;
															}
															HX_STACK_LINE(328)
															if ((tmp51)){
																HX_STACK_LINE(328)
																Float tmp52 = _az_length;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(328)
																_scale->listen_z(tmp52);
															}
															HX_STACK_LINE(328)
															_scale->z;
														}
													}
												}
												HX_STACK_LINE(328)
												matrix->elements = _this3->elements->concat(Array_obj< Float >::__new());
												HX_STACK_LINE(328)
												Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
												HX_STACK_LINE(328)
												Float tmp49 = _ax_length;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(328)
												hx::DivEq(me[(int)0],tmp49);
												HX_STACK_LINE(328)
												Float tmp50 = _ax_length;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(328)
												hx::DivEq(me[(int)1],tmp50);
												HX_STACK_LINE(328)
												Float tmp51 = _ax_length;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(328)
												hx::DivEq(me[(int)2],tmp51);
												HX_STACK_LINE(328)
												Float tmp52 = _ay_length;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(328)
												hx::DivEq(me[(int)4],tmp52);
												HX_STACK_LINE(328)
												Float tmp53 = _ay_length;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(328)
												hx::DivEq(me[(int)5],tmp53);
												HX_STACK_LINE(328)
												Float tmp54 = _ay_length;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(328)
												hx::DivEq(me[(int)6],tmp54);
												HX_STACK_LINE(328)
												Float tmp55 = _az_length;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(328)
												hx::DivEq(me[(int)8],tmp55);
												HX_STACK_LINE(328)
												Float tmp56 = _az_length;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(328)
												hx::DivEq(me[(int)9],tmp56);
												HX_STACK_LINE(328)
												Float tmp57 = _az_length;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(328)
												hx::DivEq(me[(int)10],tmp57);
												HX_STACK_LINE(328)
												::phoenix::Matrix tmp58 = matrix;		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(328)
												_quaternion->setFromRotationMatrix(tmp58);
												HX_STACK_LINE(328)
												bool tmp59 = (_this3->_transform == null());		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(328)
												if ((tmp59)){
													HX_STACK_LINE(328)
													::phoenix::MatrixTransform tmp60 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(328)
													_this3->_transform = tmp60;
												}
												else{
													HX_STACK_LINE(328)
													_this3->_transform->pos = _position;
													HX_STACK_LINE(328)
													_this3->_transform->rotation = _quaternion;
													HX_STACK_LINE(328)
													_this3->_transform->scale = _scale;
												}
												HX_STACK_LINE(328)
												tmp17 = _this3->_transform;
											}
											HX_STACK_LINE(328)
											::phoenix::MatrixTransform _transform = tmp17;		HX_STACK_VAR(_transform,"_transform");
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
												HX_STACK_LINE(328)
												_this2->pos = _p;
												HX_STACK_LINE(328)
												bool tmp18 = (_p != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(328)
												if ((tmp18)){
													HX_STACK_LINE(328)
													::phoenix::Vector tmp19 = _this2->pos;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(328)
													Dynamic tmp20 = _this2->_pos_change_dyn();		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(328)
													::phoenix::Vector_obj::Listen(tmp19,tmp20);
													HX_STACK_LINE(328)
													bool tmp21 = (_this2->pos_changed != null());		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(328)
													bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(328)
													if ((tmp21)){
														HX_STACK_LINE(328)
														bool tmp23 = _this2->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(328)
														bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(328)
														tmp22 = !(tmp24);
													}
													else{
														HX_STACK_LINE(328)
														tmp22 = false;
													}
													HX_STACK_LINE(328)
													if ((tmp22)){
														HX_STACK_LINE(328)
														::phoenix::Vector tmp23 = _this2->pos;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(328)
														_this2->pos_changed(tmp23);
													}
												}
												HX_STACK_LINE(328)
												_this2->pos;
											}
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
												HX_STACK_LINE(328)
												_this2->rotation = _r;
												HX_STACK_LINE(328)
												bool tmp18 = (_r != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(328)
												if ((tmp18)){
													HX_STACK_LINE(328)
													{
														HX_STACK_LINE(328)
														::phoenix::Quaternion _q = _this2->rotation;		HX_STACK_VAR(_q,"_q");
														HX_STACK_LINE(328)
														Dynamic listener = _this2->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
														HX_STACK_LINE(328)
														_q->listen_x = listener;
														HX_STACK_LINE(328)
														_q->listen_y = listener;
														HX_STACK_LINE(328)
														_q->listen_z = listener;
														HX_STACK_LINE(328)
														_q->listen_w = listener;
													}
													HX_STACK_LINE(328)
													bool tmp19 = (_this2->rotation_changed != null());		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(328)
													bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(328)
													if ((tmp19)){
														HX_STACK_LINE(328)
														bool tmp21 = _this2->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(328)
														bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(328)
														tmp20 = !(tmp22);
													}
													else{
														HX_STACK_LINE(328)
														tmp20 = false;
													}
													HX_STACK_LINE(328)
													if ((tmp20)){
														HX_STACK_LINE(328)
														::phoenix::Quaternion tmp21 = _this2->rotation;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(328)
														_this2->rotation_changed(tmp21);
													}
												}
												HX_STACK_LINE(328)
												_this2->rotation;
											}
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
												HX_STACK_LINE(328)
												_this2->scale = _s;
												HX_STACK_LINE(328)
												bool tmp18 = (_s != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(328)
												if ((tmp18)){
													HX_STACK_LINE(328)
													::phoenix::Vector tmp19 = _this2->scale;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(328)
													Dynamic tmp20 = _this2->_scale_change_dyn();		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(328)
													::phoenix::Vector_obj::Listen(tmp19,tmp20);
													HX_STACK_LINE(328)
													bool tmp21 = (_this2->scale_changed != null());		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(328)
													bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(328)
													if ((tmp21)){
														HX_STACK_LINE(328)
														bool tmp23 = _this2->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(328)
														bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(328)
														tmp22 = !(tmp24);
													}
													else{
														HX_STACK_LINE(328)
														tmp22 = false;
													}
													HX_STACK_LINE(328)
													if ((tmp22)){
														HX_STACK_LINE(328)
														::phoenix::Vector tmp23 = _this2->scale;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(328)
														_this2->scale_changed(tmp23);
													}
												}
												HX_STACK_LINE(328)
												_this2->scale;
											}
										}
										HX_STACK_LINE(328)
										_this2;
									}
									HX_STACK_LINE(328)
									{
										HX_STACK_LINE(328)
										_this1->dirty = false;
										HX_STACK_LINE(328)
										bool tmp15 = _this1->dirty;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(328)
										bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(328)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(328)
										if ((tmp16)){
											HX_STACK_LINE(328)
											bool tmp18 = _this1->_setup;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(328)
											bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(328)
											bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(328)
											tmp17 = !(tmp20);
										}
										else{
											HX_STACK_LINE(328)
											tmp17 = false;
										}
										HX_STACK_LINE(328)
										bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(328)
										bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(328)
										if ((tmp18)){
											HX_STACK_LINE(328)
											tmp19 = (_this1->_dirty_handlers != null());
										}
										else{
											HX_STACK_LINE(328)
											tmp19 = false;
										}
										HX_STACK_LINE(328)
										bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(328)
										if ((tmp19)){
											HX_STACK_LINE(328)
											int tmp21 = _this1->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(328)
											int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(328)
											tmp20 = (tmp22 > (int)0);
										}
										else{
											HX_STACK_LINE(328)
											tmp20 = false;
										}
										HX_STACK_LINE(328)
										if ((tmp20)){
											HX_STACK_LINE(328)
											int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(328)
											cpp::ArrayBase _g11 = _this1->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(328)
											while((true)){
												HX_STACK_LINE(328)
												bool tmp21 = (_g2 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(328)
												bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(328)
												if ((tmp22)){
													HX_STACK_LINE(328)
													break;
												}
												HX_STACK_LINE(328)
												Dynamic tmp23 = _g11->__GetItem(_g2);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(328)
												Dynamic _handler = tmp23;		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(328)
												++(_g2);
												HX_STACK_LINE(328)
												bool tmp24 = (_handler != null());		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(328)
												if ((tmp24)){
													HX_STACK_LINE(328)
													::phoenix::Transform tmp25 = _this1;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(328)
													_handler(tmp25).Cast< Void >();
												}
											}
										}
										HX_STACK_LINE(328)
										_this1->dirty;
									}
									HX_STACK_LINE(328)
									_this1->_cleaning = false;
									HX_STACK_LINE(328)
									bool tmp15 = (_this1->_clean_handlers != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(328)
									bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(328)
									if ((tmp15)){
										HX_STACK_LINE(328)
										int tmp17 = _this1->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(328)
										int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(328)
										tmp16 = (tmp18 > (int)0);
									}
									else{
										HX_STACK_LINE(328)
										tmp16 = false;
									}
									HX_STACK_LINE(328)
									if ((tmp16)){
										HX_STACK_LINE(328)
										int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(328)
										cpp::ArrayBase _g11 = _this1->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(328)
										while((true)){
											HX_STACK_LINE(328)
											bool tmp17 = (_g2 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(328)
											bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(328)
											if ((tmp18)){
												HX_STACK_LINE(328)
												break;
											}
											HX_STACK_LINE(328)
											Dynamic tmp19 = _g11->__GetItem(_g2);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(328)
											Dynamic _handler = tmp19;		HX_STACK_VAR(_handler,"_handler");
											HX_STACK_LINE(328)
											++(_g2);
											HX_STACK_LINE(328)
											bool tmp20 = (_handler != null());		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(328)
											if ((tmp20)){
												HX_STACK_LINE(328)
												::phoenix::Transform tmp21 = _this1;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(328)
												_handler(tmp21).Cast< Void >();
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(328)
						tmp5 = _this1->world;
					}
					HX_STACK_LINE(328)
					::phoenix::Spatial _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(328)
					tmp4 = _this1->matrix;
				}
				HX_STACK_LINE(328)
				::phoenix::Matrix _m = tmp4;		HX_STACK_VAR(_m,"_m");
				HX_STACK_LINE(328)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(328)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(328)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(328)
				Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(328)
				{
					HX_STACK_LINE(328)
					Float tmp5 = e->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(328)
					Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(328)
					Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(328)
					Float tmp8 = e->__get((int)4);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(328)
					Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(328)
					Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(328)
					Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(328)
					Float tmp12 = e->__get((int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(328)
					Float tmp13 = _z;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(328)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(328)
					Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(328)
					Float tmp16 = e->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(328)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(328)
					Float _x1 = tmp17;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(328)
					Float tmp18 = e->__get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(328)
					Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(328)
					Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(328)
					Float tmp21 = e->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(328)
					Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(328)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(328)
					Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(328)
					Float tmp25 = e->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(328)
					Float tmp26 = _z;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(328)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(328)
					Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(328)
					Float tmp29 = e->__get((int)13);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(328)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(328)
					Float _y1 = tmp30;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(328)
					Float tmp31 = e->__get((int)2);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(328)
					Float tmp32 = _x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(328)
					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(328)
					Float tmp34 = e->__get((int)6);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(328)
					Float tmp35 = _y;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(328)
					Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(328)
					Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(328)
					Float tmp38 = e->__get((int)10);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(328)
					Float tmp39 = _z;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(328)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(328)
					Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(328)
					Float tmp42 = e->__get((int)14);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(328)
					Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(328)
					Float _z1 = tmp43;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(328)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(328)
					_this->ignore_listeners = true;
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						_this->x = _x1;
						HX_STACK_LINE(328)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(328)
						if ((tmp44)){
							HX_STACK_LINE(328)
							_this->x;
						}
						else{
							HX_STACK_LINE(328)
							bool tmp45 = (_this->listen_x != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(328)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(328)
							if ((tmp45)){
								HX_STACK_LINE(328)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(328)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(328)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(328)
								tmp46 = false;
							}
							HX_STACK_LINE(328)
							if ((tmp46)){
								HX_STACK_LINE(328)
								Float tmp47 = _x1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(328)
								_this->listen_x(tmp47);
							}
							HX_STACK_LINE(328)
							_this->x;
						}
					}
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						_this->y = _y1;
						HX_STACK_LINE(328)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(328)
						if ((tmp44)){
							HX_STACK_LINE(328)
							_this->y;
						}
						else{
							HX_STACK_LINE(328)
							bool tmp45 = (_this->listen_y != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(328)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(328)
							if ((tmp45)){
								HX_STACK_LINE(328)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(328)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(328)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(328)
								tmp46 = false;
							}
							HX_STACK_LINE(328)
							if ((tmp46)){
								HX_STACK_LINE(328)
								Float tmp47 = _y1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(328)
								_this->listen_y(tmp47);
							}
							HX_STACK_LINE(328)
							_this->y;
						}
					}
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						_this->z = _z1;
						HX_STACK_LINE(328)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(328)
						if ((tmp44)){
							HX_STACK_LINE(328)
							_this->z;
						}
						else{
							HX_STACK_LINE(328)
							bool tmp45 = (_this->listen_z != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(328)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(328)
							if ((tmp45)){
								HX_STACK_LINE(328)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(328)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(328)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(328)
								tmp46 = false;
							}
							HX_STACK_LINE(328)
							if ((tmp46)){
								HX_STACK_LINE(328)
								Float tmp47 = _z1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(328)
								_this->listen_z(tmp47);
							}
							HX_STACK_LINE(328)
							_this->z;
						}
					}
					HX_STACK_LINE(328)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(328)
					bool tmp44 = (_this->listen_x != null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(328)
					bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(328)
					if ((tmp44)){
						HX_STACK_LINE(328)
						bool tmp46 = _this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(328)
						bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(328)
						tmp45 = !(tmp47);
					}
					else{
						HX_STACK_LINE(328)
						tmp45 = false;
					}
					HX_STACK_LINE(328)
					if ((tmp45)){
						HX_STACK_LINE(328)
						Float tmp46 = _this->x;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(328)
						_this->listen_x(tmp46);
					}
					HX_STACK_LINE(328)
					bool tmp46 = (_this->listen_y != null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(328)
					bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(328)
					if ((tmp46)){
						HX_STACK_LINE(328)
						bool tmp48 = _this->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(328)
						bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(328)
						tmp47 = !(tmp49);
					}
					else{
						HX_STACK_LINE(328)
						tmp47 = false;
					}
					HX_STACK_LINE(328)
					if ((tmp47)){
						HX_STACK_LINE(328)
						Float tmp48 = _this->y;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(328)
						_this->listen_y(tmp48);
					}
					HX_STACK_LINE(328)
					bool tmp48 = (_this->listen_z != null());		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(328)
					bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(328)
					if ((tmp48)){
						HX_STACK_LINE(328)
						bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(328)
						bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(328)
						tmp49 = !(tmp51);
					}
					else{
						HX_STACK_LINE(328)
						tmp49 = false;
					}
					HX_STACK_LINE(328)
					if ((tmp49)){
						HX_STACK_LINE(328)
						Float tmp50 = _this->z;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(328)
						_this->listen_z(tmp50);
					}
					HX_STACK_LINE(328)
					_this;
				}
				HX_STACK_LINE(328)
				_this;
			}
			HX_STACK_LINE(331)
			::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(331)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(331)
			vertlist->push(tmp4);
			HX_STACK_LINE(332)
			::phoenix::Vector tmp5 = this->_final_vert_position;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(332)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(332)
			vertlist->push(tmp6);
			HX_STACK_LINE(333)
			::phoenix::Vector tmp7 = this->_final_vert_position;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(333)
			Float tmp8 = tmp7->z;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(333)
			vertlist->push(tmp8);
			HX_STACK_LINE(334)
			::phoenix::Vector tmp9 = this->_final_vert_position;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(334)
			Float tmp10 = tmp9->w;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(334)
			vertlist->push(tmp10);
			HX_STACK_LINE(337)
			::phoenix::geometry::TextureCoord tmp11 = v->uv->uv0;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(337)
			Float tmp12 = tmp11->u;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(337)
			tcoordlist->push(tmp12);
			HX_STACK_LINE(338)
			::phoenix::geometry::TextureCoord tmp13 = v->uv->uv0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(338)
			Float tmp14 = tmp13->v;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(338)
			tcoordlist->push(tmp14);
			HX_STACK_LINE(339)
			::phoenix::geometry::TextureCoord tmp15 = v->uv->uv0;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(339)
			Float tmp16 = tmp15->w;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(339)
			tcoordlist->push(tmp16);
			HX_STACK_LINE(340)
			::phoenix::geometry::TextureCoord tmp17 = v->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(340)
			Float tmp18 = tmp17->t;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(340)
			tcoordlist->push(tmp18);
			HX_STACK_LINE(343)
			Float tmp19 = v->color->r;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(343)
			colorlist->push(tmp19);
			HX_STACK_LINE(344)
			Float tmp20 = v->color->g;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(344)
			colorlist->push(tmp20);
			HX_STACK_LINE(345)
			Float tmp21 = v->color->b;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(345)
			colorlist->push(tmp21);
			HX_STACK_LINE(346)
			Float tmp22 = v->color->a;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(346)
			colorlist->push(tmp22);
			HX_STACK_LINE(349)
			Float tmp23 = v->normal->x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(349)
			normallist->push(tmp23);
			HX_STACK_LINE(350)
			Float tmp24 = v->normal->y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(350)
			normallist->push(tmp24);
			HX_STACK_LINE(351)
			Float tmp25 = v->normal->z;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(351)
			normallist->push(tmp25);
			HX_STACK_LINE(352)
			Float tmp26 = v->normal->w;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(352)
			normallist->push(tmp26);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Geometry_obj,batch_into_arrays,(void))

Void Geometry_obj::translate( ::phoenix::Vector _offset){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","translate",0xde6d918f,"phoenix.geometry.Geometry.translate","phoenix/geometry/Geometry.hx",362,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_offset,"_offset")
		HX_STACK_LINE(362)
		::phoenix::Transform tmp = this->transform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(362)
		::phoenix::Vector tmp1 = tmp->local->pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(362)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(362)
		::phoenix::Transform tmp2 = this->transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(362)
		::phoenix::Vector tmp3 = tmp2->local->pos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(362)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(362)
		Float tmp5 = _offset->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(362)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(362)
		Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(362)
		::phoenix::Transform tmp7 = this->transform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(362)
		::phoenix::Vector tmp8 = tmp7->local->pos;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(362)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(362)
		Float tmp10 = _offset->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(362)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(362)
		Float _y = tmp11;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(362)
		::phoenix::Transform tmp12 = this->transform;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(362)
		::phoenix::Vector tmp13 = tmp12->local->pos;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(362)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(362)
		Float tmp15 = _offset->z;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(362)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(362)
		Float _z = tmp16;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(362)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(362)
		_this->ignore_listeners = true;
		HX_STACK_LINE(362)
		{
			HX_STACK_LINE(362)
			_this->x = _x;
			HX_STACK_LINE(362)
			bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(362)
			if ((tmp17)){
				HX_STACK_LINE(362)
				_this->x;
			}
			else{
				HX_STACK_LINE(362)
				bool tmp18 = (_this->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(362)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(362)
				if ((tmp18)){
					HX_STACK_LINE(362)
					bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(362)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(362)
					tmp19 = !(tmp21);
				}
				else{
					HX_STACK_LINE(362)
					tmp19 = false;
				}
				HX_STACK_LINE(362)
				if ((tmp19)){
					HX_STACK_LINE(362)
					Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(362)
					_this->listen_x(tmp20);
				}
				HX_STACK_LINE(362)
				_this->x;
			}
		}
		HX_STACK_LINE(362)
		{
			HX_STACK_LINE(362)
			_this->y = _y;
			HX_STACK_LINE(362)
			bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(362)
			if ((tmp17)){
				HX_STACK_LINE(362)
				_this->y;
			}
			else{
				HX_STACK_LINE(362)
				bool tmp18 = (_this->listen_y != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(362)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(362)
				if ((tmp18)){
					HX_STACK_LINE(362)
					bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(362)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(362)
					tmp19 = !(tmp21);
				}
				else{
					HX_STACK_LINE(362)
					tmp19 = false;
				}
				HX_STACK_LINE(362)
				if ((tmp19)){
					HX_STACK_LINE(362)
					Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(362)
					_this->listen_y(tmp20);
				}
				HX_STACK_LINE(362)
				_this->y;
			}
		}
		HX_STACK_LINE(362)
		{
			HX_STACK_LINE(362)
			_this->z = _z;
			HX_STACK_LINE(362)
			bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(362)
			if ((tmp17)){
				HX_STACK_LINE(362)
				_this->z;
			}
			else{
				HX_STACK_LINE(362)
				bool tmp18 = (_this->listen_z != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(362)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(362)
				if ((tmp18)){
					HX_STACK_LINE(362)
					bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(362)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(362)
					tmp19 = !(tmp21);
				}
				else{
					HX_STACK_LINE(362)
					tmp19 = false;
				}
				HX_STACK_LINE(362)
				if ((tmp19)){
					HX_STACK_LINE(362)
					Float tmp20 = _z;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(362)
					_this->listen_z(tmp20);
				}
				HX_STACK_LINE(362)
				_this->z;
			}
		}
		HX_STACK_LINE(362)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(362)
		bool tmp17 = (_this->listen_x != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(362)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(362)
		if ((tmp17)){
			HX_STACK_LINE(362)
			bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(362)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(362)
			tmp18 = !(tmp20);
		}
		else{
			HX_STACK_LINE(362)
			tmp18 = false;
		}
		HX_STACK_LINE(362)
		if ((tmp18)){
			HX_STACK_LINE(362)
			Float tmp19 = _this->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(362)
			_this->listen_x(tmp19);
		}
		HX_STACK_LINE(362)
		bool tmp19 = (_this->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(362)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(362)
		if ((tmp19)){
			HX_STACK_LINE(362)
			bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(362)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(362)
			tmp20 = !(tmp22);
		}
		else{
			HX_STACK_LINE(362)
			tmp20 = false;
		}
		HX_STACK_LINE(362)
		if ((tmp20)){
			HX_STACK_LINE(362)
			Float tmp21 = _this->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(362)
			_this->listen_y(tmp21);
		}
		HX_STACK_LINE(362)
		bool tmp21 = (_this->listen_z != null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(362)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(362)
		if ((tmp21)){
			HX_STACK_LINE(362)
			bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(362)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(362)
			tmp22 = !(tmp24);
		}
		else{
			HX_STACK_LINE(362)
			tmp22 = false;
		}
		HX_STACK_LINE(362)
		if ((tmp22)){
			HX_STACK_LINE(362)
			Float tmp23 = _this->z;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(362)
			_this->listen_z(tmp23);
		}
		HX_STACK_LINE(362)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,translate,(void))

bool Geometry_obj::set_locked( bool _locked){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_locked",0x08e151e6,"phoenix.geometry.Geometry.set_locked","phoenix/geometry/Geometry.hx",366,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_locked,"_locked")
	HX_STACK_LINE(368)
	bool tmp = this->locked = _locked;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_locked,return )

bool Geometry_obj::get_locked( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_locked",0x0563b372,"phoenix.geometry.Geometry.get_locked","phoenix/geometry/Geometry.hx",372,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(374)
	bool tmp = this->locked;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(374)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_locked,return )

bool Geometry_obj::set_dirty( bool _dirty){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_dirty",0x95b852b6,"phoenix.geometry.Geometry.set_dirty","phoenix/geometry/Geometry.hx",378,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dirty,"_dirty")
	HX_STACK_LINE(380)
	bool tmp = this->dirty = _dirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(380)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_dirty,return )

bool Geometry_obj::get_dirty( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_dirty",0xb26766aa,"phoenix.geometry.Geometry.get_dirty","phoenix/geometry/Geometry.hx",384,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(386)
	bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(386)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_dirty,return )

Void Geometry_obj::refresh( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","refresh",0x7a5fd1dc,"phoenix.geometry.Geometry.refresh","phoenix/geometry/Geometry.hx",392,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(395)
		{
			HX_STACK_LINE(395)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(395)
			Array< ::Dynamic > _g1 = this->batchers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(395)
			while((true)){
				HX_STACK_LINE(395)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(395)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(395)
				if ((tmp1)){
					HX_STACK_LINE(395)
					break;
				}
				HX_STACK_LINE(395)
				::phoenix::Batcher tmp2 = _g1->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(395)
				::phoenix::Batcher b = tmp2;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(395)
				++(_g);
				HX_STACK_LINE(396)
				b->remove(hx::ObjectPtr<OBJ_>(this),false);
			}
		}
		HX_STACK_LINE(400)
		bool tmp = this->dirty_primitive_type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(400)
		if ((tmp)){
			HX_STACK_LINE(401)
			this->dirty_primitive_type = false;
			HX_STACK_LINE(402)
			::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(402)
			int tmp2 = this->shadow_primitive_type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(402)
			tmp1->set_primitive_type(tmp2);
		}
		HX_STACK_LINE(405)
		bool tmp1 = this->dirty_texture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(405)
		if ((tmp1)){
			HX_STACK_LINE(406)
			this->dirty_texture = false;
			HX_STACK_LINE(407)
			::phoenix::geometry::GeometryState tmp2 = this->state;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(407)
			::phoenix::Texture tmp3 = this->shadow_texture;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(407)
			tmp2->set_texture(tmp3);
		}
		HX_STACK_LINE(410)
		bool tmp2 = this->dirty_shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(410)
		if ((tmp2)){
			HX_STACK_LINE(411)
			this->dirty_shader = false;
			HX_STACK_LINE(412)
			::phoenix::geometry::GeometryState tmp3 = this->state;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(412)
			::phoenix::Shader tmp4 = this->shadow_shader;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(412)
			tmp3->set_shader(tmp4);
		}
		HX_STACK_LINE(415)
		bool tmp3 = this->dirty_group;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(415)
		if ((tmp3)){
			HX_STACK_LINE(416)
			this->dirty_group = false;
			HX_STACK_LINE(417)
			::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(417)
			int tmp5 = this->shadow_group;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(417)
			tmp4->set_group(tmp5);
		}
		HX_STACK_LINE(420)
		bool tmp4 = this->dirty_depth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(420)
		if ((tmp4)){
			HX_STACK_LINE(421)
			this->dirty_depth = false;
			HX_STACK_LINE(422)
			::phoenix::geometry::GeometryState tmp5 = this->state;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(422)
			Float tmp6 = this->shadow_depth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(422)
			tmp5->set_depth(tmp6);
		}
		HX_STACK_LINE(425)
		bool tmp5 = this->dirty_clip;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(425)
		if ((tmp5)){
			HX_STACK_LINE(426)
			this->dirty_clip = false;
			HX_STACK_LINE(427)
			::phoenix::geometry::GeometryState tmp6 = this->state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(427)
			bool tmp7 = this->shadow_clip;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(427)
			tmp6->set_clip(tmp7);
		}
		HX_STACK_LINE(431)
		this->refresh_key();
		HX_STACK_LINE(433)
		{
			HX_STACK_LINE(433)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(433)
			Array< ::Dynamic > _g1 = this->batchers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(433)
			while((true)){
				HX_STACK_LINE(433)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(433)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(433)
				if ((tmp7)){
					HX_STACK_LINE(433)
					break;
				}
				HX_STACK_LINE(433)
				::phoenix::Batcher tmp8 = _g1->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(433)
				::phoenix::Batcher b = tmp8;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(433)
				++(_g);
				HX_STACK_LINE(434)
				b->add(hx::ObjectPtr<OBJ_>(this),false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,refresh,(void))

int Geometry_obj::get_primitive_type( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_primitive_type",0xf77b1efa,"phoenix.geometry.Geometry.get_primitive_type","phoenix/geometry/Geometry.hx",441,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(443)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(443)
	int tmp1 = tmp->primitive_type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(443)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_primitive_type,return )

int Geometry_obj::set_primitive_type( int val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_primitive_type",0xd42a516e,"phoenix.geometry.Geometry.set_primitive_type","phoenix/geometry/Geometry.hx",447,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(449)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(449)
	int tmp1 = tmp->primitive_type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(449)
	int tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(449)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(449)
	if ((tmp3)){
		HX_STACK_LINE(450)
		this->shadow_primitive_type = val;
		HX_STACK_LINE(451)
		this->dirty_primitive_type = true;
		HX_STACK_LINE(452)
		this->refresh();
	}
	HX_STACK_LINE(455)
	int tmp4 = this->primitive_type = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(455)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_primitive_type,return )

::phoenix::Texture Geometry_obj::get_texture( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_texture",0x1c5cb573,"phoenix.geometry.Geometry.get_texture","phoenix/geometry/Geometry.hx",461,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(463)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(463)
	::phoenix::Texture tmp1 = tmp->texture;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(463)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_texture,return )

::phoenix::Texture Geometry_obj::set_texture( ::phoenix::Texture val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_texture",0x26c9bc7f,"phoenix.geometry.Geometry.set_texture","phoenix/geometry/Geometry.hx",467,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(469)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(469)
	::phoenix::Texture tmp1 = tmp->texture;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(469)
	::phoenix::Texture tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(469)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(469)
	if ((tmp3)){
		HX_STACK_LINE(470)
		this->shadow_texture = val;
		HX_STACK_LINE(471)
		this->dirty_texture = true;
		HX_STACK_LINE(472)
		this->refresh();
	}
	HX_STACK_LINE(475)
	::phoenix::Texture tmp4 = this->texture = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(475)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_texture,return )

bool Geometry_obj::set_visible( bool val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_visible",0x2b0d6c16,"phoenix.geometry.Geometry.set_visible","phoenix/geometry/Geometry.hx",481,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(483)
	bool tmp = this->visible = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(483)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_visible,return )

::phoenix::Color Geometry_obj::set_color( ::phoenix::Color val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_color",0x06447407,"phoenix.geometry.Geometry.set_color","phoenix/geometry/Geometry.hx",489,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(491)
	{
		HX_STACK_LINE(491)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(491)
		Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(491)
		while((true)){
			HX_STACK_LINE(491)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(491)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(491)
			if ((tmp1)){
				HX_STACK_LINE(491)
				break;
			}
			HX_STACK_LINE(491)
			::phoenix::geometry::Vertex tmp2 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(491)
			::phoenix::geometry::Vertex v = tmp2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(491)
			++(_g);
			HX_STACK_LINE(492)
			v->color = val;
		}
	}
	HX_STACK_LINE(495)
	::phoenix::Color tmp = this->color = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(495)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_color,return )

::phoenix::Shader Geometry_obj::get_shader( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_shader",0xc8bd6d8d,"phoenix.geometry.Geometry.get_shader","phoenix/geometry/Geometry.hx",501,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(503)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(503)
	::phoenix::Shader tmp1 = tmp->shader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(503)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_shader,return )

::phoenix::Shader Geometry_obj::set_shader( ::phoenix::Shader val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_shader",0xcc3b0c01,"phoenix.geometry.Geometry.set_shader","phoenix/geometry/Geometry.hx",507,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(509)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(509)
	::phoenix::Shader tmp1 = tmp->shader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(509)
	::phoenix::Shader tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(509)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(509)
	if ((tmp3)){
		HX_STACK_LINE(510)
		this->shadow_shader = val;
		HX_STACK_LINE(511)
		this->dirty_shader = true;
		HX_STACK_LINE(512)
		this->refresh();
	}
	HX_STACK_LINE(515)
	::phoenix::Shader tmp4 = this->shader = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(515)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_shader,return )

Float Geometry_obj::get_depth( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_depth",0xafc1079b,"phoenix.geometry.Geometry.get_depth","phoenix/geometry/Geometry.hx",521,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(523)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(523)
	Float tmp1 = tmp->depth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(523)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_depth,return )

Float Geometry_obj::set_depth( Float val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_depth",0x9311f3a7,"phoenix.geometry.Geometry.set_depth","phoenix/geometry/Geometry.hx",528,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(530)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	Float tmp1 = tmp->depth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(530)
	Float tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(530)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(530)
	if ((tmp3)){
		HX_STACK_LINE(531)
		this->shadow_depth = val;
		HX_STACK_LINE(532)
		this->dirty_depth = true;
		HX_STACK_LINE(533)
		this->refresh();
	}
	HX_STACK_LINE(536)
	Float tmp4 = this->depth = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(536)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_depth,return )

int Geometry_obj::get_group( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_group",0x728bc9d7,"phoenix.geometry.Geometry.get_group","phoenix/geometry/Geometry.hx",542,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(544)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(544)
	int tmp1 = tmp->group;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(544)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_group,return )

int Geometry_obj::set_group( int val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_group",0x55dcb5e3,"phoenix.geometry.Geometry.set_group","phoenix/geometry/Geometry.hx",548,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(550)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(550)
	int tmp1 = tmp->group;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(550)
	int tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(550)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(550)
	if ((tmp3)){
		HX_STACK_LINE(551)
		this->shadow_group = val;
		HX_STACK_LINE(552)
		this->dirty_group = true;
		HX_STACK_LINE(553)
		this->refresh();
	}
	HX_STACK_LINE(556)
	int tmp4 = this->group = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(556)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_group,return )

bool Geometry_obj::get_clip( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_clip",0xcb573338,"phoenix.geometry.Geometry.get_clip","phoenix/geometry/Geometry.hx",562,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(564)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	bool tmp1 = tmp->clip;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(564)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_clip,return )

bool Geometry_obj::set_clip( bool val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_clip",0x79b48cac,"phoenix.geometry.Geometry.set_clip","phoenix/geometry/Geometry.hx",568,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(570)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(570)
	bool tmp1 = tmp->clip;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(570)
	bool tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(570)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(570)
	if ((tmp3)){
		HX_STACK_LINE(571)
		this->shadow_clip = val;
		HX_STACK_LINE(572)
		this->dirty_clip = true;
		HX_STACK_LINE(573)
		this->refresh();
	}
	HX_STACK_LINE(576)
	bool tmp4 = this->clip = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(576)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_clip,return )

::phoenix::Rectangle Geometry_obj::get_clip_rect( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_clip_rect",0x4f648acb,"phoenix.geometry.Geometry.get_clip_rect","phoenix/geometry/Geometry.hx",582,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(584)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(584)
	::phoenix::Rectangle tmp1 = tmp->clip_rect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(584)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_clip_rect,return )

::phoenix::Rectangle Geometry_obj::set_clip_rect( ::phoenix::Rectangle val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_clip_rect",0x946a6cd7,"phoenix.geometry.Geometry.set_clip_rect","phoenix/geometry/Geometry.hx",588,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(590)
	bool tmp = (val == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	if ((tmp)){
		HX_STACK_LINE(591)
		this->set_clip(false);
	}
	else{
		HX_STACK_LINE(593)
		this->set_clip(true);
	}
	HX_STACK_LINE(596)
	::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(596)
	::phoenix::Rectangle tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(596)
	::phoenix::Rectangle tmp3 = tmp1->set_clip_rect(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(596)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_clip_rect,return )

int Geometry_obj::_sequence_key;


Geometry_obj::Geometry_obj()
{
}

void Geometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Geometry);
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(submitted,"submitted");
	HX_MARK_MEMBER_NAME(static_vertex_buffer,"static_vertex_buffer");
	HX_MARK_MEMBER_NAME(static_tcoord_buffer,"static_tcoord_buffer");
	HX_MARK_MEMBER_NAME(static_vcolor_buffer,"static_vcolor_buffer");
	HX_MARK_MEMBER_NAME(static_normal_buffer,"static_normal_buffer");
	HX_MARK_MEMBER_NAME(added,"added");
	HX_MARK_MEMBER_NAME(batchers,"batchers");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(dropped,"dropped");
	HX_MARK_MEMBER_NAME(uuid,"uuid");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(primitive_type,"primitive_type");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(clip_rect,"clip_rect");
	HX_MARK_MEMBER_NAME(shadow_primitive_type,"shadow_primitive_type");
	HX_MARK_MEMBER_NAME(shadow_texture,"shadow_texture");
	HX_MARK_MEMBER_NAME(shadow_shader,"shadow_shader");
	HX_MARK_MEMBER_NAME(shadow_group,"shadow_group");
	HX_MARK_MEMBER_NAME(shadow_depth,"shadow_depth");
	HX_MARK_MEMBER_NAME(shadow_clip,"shadow_clip");
	HX_MARK_MEMBER_NAME(dirty_primitive_type,"dirty_primitive_type");
	HX_MARK_MEMBER_NAME(dirty_texture,"dirty_texture");
	HX_MARK_MEMBER_NAME(dirty_shader,"dirty_shader");
	HX_MARK_MEMBER_NAME(dirty_group,"dirty_group");
	HX_MARK_MEMBER_NAME(dirty_depth,"dirty_depth");
	HX_MARK_MEMBER_NAME(dirty_clip,"dirty_clip");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(immediate,"immediate");
	HX_MARK_MEMBER_NAME(locked,"locked");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(clip,"clip");
	HX_MARK_MEMBER_NAME(_final_vert_position,"_final_vert_position");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_END_CLASS();
}

void Geometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(submitted,"submitted");
	HX_VISIT_MEMBER_NAME(static_vertex_buffer,"static_vertex_buffer");
	HX_VISIT_MEMBER_NAME(static_tcoord_buffer,"static_tcoord_buffer");
	HX_VISIT_MEMBER_NAME(static_vcolor_buffer,"static_vcolor_buffer");
	HX_VISIT_MEMBER_NAME(static_normal_buffer,"static_normal_buffer");
	HX_VISIT_MEMBER_NAME(added,"added");
	HX_VISIT_MEMBER_NAME(batchers,"batchers");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(dropped,"dropped");
	HX_VISIT_MEMBER_NAME(uuid,"uuid");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(primitive_type,"primitive_type");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(clip_rect,"clip_rect");
	HX_VISIT_MEMBER_NAME(shadow_primitive_type,"shadow_primitive_type");
	HX_VISIT_MEMBER_NAME(shadow_texture,"shadow_texture");
	HX_VISIT_MEMBER_NAME(shadow_shader,"shadow_shader");
	HX_VISIT_MEMBER_NAME(shadow_group,"shadow_group");
	HX_VISIT_MEMBER_NAME(shadow_depth,"shadow_depth");
	HX_VISIT_MEMBER_NAME(shadow_clip,"shadow_clip");
	HX_VISIT_MEMBER_NAME(dirty_primitive_type,"dirty_primitive_type");
	HX_VISIT_MEMBER_NAME(dirty_texture,"dirty_texture");
	HX_VISIT_MEMBER_NAME(dirty_shader,"dirty_shader");
	HX_VISIT_MEMBER_NAME(dirty_group,"dirty_group");
	HX_VISIT_MEMBER_NAME(dirty_depth,"dirty_depth");
	HX_VISIT_MEMBER_NAME(dirty_clip,"dirty_clip");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(immediate,"immediate");
	HX_VISIT_MEMBER_NAME(locked,"locked");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(clip,"clip");
	HX_VISIT_MEMBER_NAME(_final_vert_position,"_final_vert_position");
	HX_VISIT_MEMBER_NAME(key,"key");
}

Dynamic Geometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		if (HX_FIELD_EQ(inName,"str") ) { return str_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { return uuid; }
		if (HX_FIELD_EQ(inName,"clip") ) { return inCallProp == hx::paccAlways ? get_clip() : clip; }
		if (HX_FIELD_EQ(inName,"drop") ) { return drop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added; }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"depth") ) { return inCallProp == hx::paccAlways ? get_depth() : depth; }
		if (HX_FIELD_EQ(inName,"group") ) { return inCallProp == hx::paccAlways ? get_group() : group; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return inCallProp == hx::paccAlways ? get_dirty() : dirty; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"batch") ) { return batch_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return inCallProp == hx::paccAlways ? get_shader() : shader; }
		if (HX_FIELD_EQ(inName,"locked") ) { return inCallProp == hx::paccAlways ? get_locked() : locked; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dropped") ) { return dropped; }
		if (HX_FIELD_EQ(inName,"texture") ) { return inCallProp == hx::paccAlways ? get_texture() : texture; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
		if (HX_FIELD_EQ(inName,"batchers") ) { return batchers; }
		if (HX_FIELD_EQ(inName,"get_clip") ) { return get_clip_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clip") ) { return set_clip_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
		if (HX_FIELD_EQ(inName,"submitted") ) { return submitted; }
		if (HX_FIELD_EQ(inName,"clip_rect") ) { return inCallProp == hx::paccAlways ? get_clip_rect() : clip_rect; }
		if (HX_FIELD_EQ(inName,"immediate") ) { return immediate; }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dirty") ) { return set_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dirty") ) { return get_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return get_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_group") ) { return get_group_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dirty_clip") ) { return dirty_clip; }
		if (HX_FIELD_EQ(inName,"key_string") ) { return key_string_dyn(); }
		if (HX_FIELD_EQ(inName,"set_locked") ) { return set_locked_dyn(); }
		if (HX_FIELD_EQ(inName,"get_locked") ) { return get_locked_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shader") ) { return get_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shadow_clip") ) { return shadow_clip; }
		if (HX_FIELD_EQ(inName,"dirty_group") ) { return dirty_group; }
		if (HX_FIELD_EQ(inName,"dirty_depth") ) { return dirty_depth; }
		if (HX_FIELD_EQ(inName,"refresh_key") ) { return refresh_key_dyn(); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return get_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadow_group") ) { return shadow_group; }
		if (HX_FIELD_EQ(inName,"shadow_depth") ) { return shadow_depth; }
		if (HX_FIELD_EQ(inName,"dirty_shader") ) { return dirty_shader; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shadow_shader") ) { return shadow_shader; }
		if (HX_FIELD_EQ(inName,"dirty_texture") ) { return dirty_texture; }
		if (HX_FIELD_EQ(inName,"get_clip_rect") ) { return get_clip_rect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clip_rect") ) { return set_clip_rect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { return inCallProp == hx::paccAlways ? get_primitive_type() : primitive_type; }
		if (HX_FIELD_EQ(inName,"shadow_texture") ) { return shadow_texture; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"batch_into_arrays") ) { return batch_into_arrays_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_primitive_type") ) { return get_primitive_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_primitive_type") ) { return set_primitive_type_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_vertex_buffer") ) { return static_vertex_buffer; }
		if (HX_FIELD_EQ(inName,"static_tcoord_buffer") ) { return static_tcoord_buffer; }
		if (HX_FIELD_EQ(inName,"static_vcolor_buffer") ) { return static_vcolor_buffer; }
		if (HX_FIELD_EQ(inName,"static_normal_buffer") ) { return static_normal_buffer; }
		if (HX_FIELD_EQ(inName,"dirty_primitive_type") ) { return dirty_primitive_type; }
		if (HX_FIELD_EQ(inName,"_final_vert_position") ) { return _final_vert_position; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shadow_primitive_type") ) { return shadow_primitive_type; }
	}
	return super::__Field(inName,inCallProp);
}

bool Geometry_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { outValue = _sequence_key; return true;  }
	}
	return false;
}

Dynamic Geometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::phoenix::geometry::GeometryKey >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { uuid=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip") ) { if (inCallProp == hx::paccAlways) return set_clip(inValue);clip=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { added=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::phoenix::geometry::GeometryState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == hx::paccAlways) return set_depth(inValue);depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp == hx::paccAlways) return set_group(inValue);group=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { if (inCallProp == hx::paccAlways) return set_dirty(inValue);dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue);color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == hx::paccAlways) return set_shader(inValue);shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"locked") ) { if (inCallProp == hx::paccAlways) return set_locked(inValue);locked=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dropped") ) { dropped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == hx::paccAlways) return set_texture(inValue);texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batchers") ) { batchers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::phoenix::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"submitted") ) { submitted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip_rect") ) { if (inCallProp == hx::paccAlways) return set_clip_rect(inValue);clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immediate") ) { immediate=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dirty_clip") ) { dirty_clip=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shadow_clip") ) { shadow_clip=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_group") ) { dirty_group=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_depth") ) { dirty_depth=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadow_group") ) { shadow_group=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow_depth") ) { shadow_depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_shader") ) { dirty_shader=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shadow_shader") ) { shadow_shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_texture") ) { dirty_texture=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { if (inCallProp == hx::paccAlways) return set_primitive_type(inValue);primitive_type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow_texture") ) { shadow_texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_vertex_buffer") ) { static_vertex_buffer=inValue.Cast< ::snow::modules::opengl::native::GLBO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"static_tcoord_buffer") ) { static_tcoord_buffer=inValue.Cast< ::snow::modules::opengl::native::GLBO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"static_vcolor_buffer") ) { static_vcolor_buffer=inValue.Cast< ::snow::modules::opengl::native::GLBO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"static_normal_buffer") ) { static_normal_buffer=inValue.Cast< ::snow::modules::opengl::native::GLBO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_primitive_type") ) { dirty_primitive_type=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_final_vert_position") ) { _final_vert_position=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shadow_primitive_type") ) { shadow_primitive_type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Geometry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { _sequence_key=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Geometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));
	outFields->push(HX_HCSTRING("submitted","\xbb","\x24","\xb6","\x28"));
	outFields->push(HX_HCSTRING("static_vertex_buffer","\x2a","\x49","\xd7","\x09"));
	outFields->push(HX_HCSTRING("static_tcoord_buffer","\x6d","\x44","\x19","\xf5"));
	outFields->push(HX_HCSTRING("static_vcolor_buffer","\x81","\xda","\xa8","\xe7"));
	outFields->push(HX_HCSTRING("static_normal_buffer","\xc7","\x60","\x21","\x31"));
	outFields->push(HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"));
	outFields->push(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("dropped","\x00","\x24","\xe9","\x06"));
	outFields->push(HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"));
	outFields->push(HX_HCSTRING("shadow_primitive_type","\x51","\x25","\xc9","\x32"));
	outFields->push(HX_HCSTRING("shadow_texture","\x3c","\xca","\x94","\x51"));
	outFields->push(HX_HCSTRING("shadow_shader","\xe4","\xc4","\x51","\x95"));
	outFields->push(HX_HCSTRING("shadow_group","\x60","\xea","\x13","\xdd"));
	outFields->push(HX_HCSTRING("shadow_depth","\x24","\x28","\x49","\x1a"));
	outFields->push(HX_HCSTRING("shadow_clip","\xcf","\x36","\x72","\xd8"));
	outFields->push(HX_HCSTRING("dirty_primitive_type","\x5f","\xa5","\x3a","\x90"));
	outFields->push(HX_HCSTRING("dirty_texture","\x6e","\xd4","\x32","\x48"));
	outFields->push(HX_HCSTRING("dirty_shader","\xf2","\x86","\xfd","\x54"));
	outFields->push(HX_HCSTRING("dirty_group","\x12","\xa4","\x4a","\x4d"));
	outFields->push(HX_HCSTRING("dirty_depth","\xd6","\xe1","\x7f","\x8a"));
	outFields->push(HX_HCSTRING("dirty_clip","\x5d","\xb9","\x4d","\x48"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"));
	outFields->push(HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"));
	outFields->push(HX_HCSTRING("_final_vert_position","\x6f","\x0e","\xa4","\x12"));
	outFields->push(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Transform*/ ,(int)offsetof(Geometry_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Geometry_obj,vertices),HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a")},
	{hx::fsBool,(int)offsetof(Geometry_obj,submitted),HX_HCSTRING("submitted","\xbb","\x24","\xb6","\x28")},
	{hx::fsObject /*::snow::modules::opengl::native::GLBO*/ ,(int)offsetof(Geometry_obj,static_vertex_buffer),HX_HCSTRING("static_vertex_buffer","\x2a","\x49","\xd7","\x09")},
	{hx::fsObject /*::snow::modules::opengl::native::GLBO*/ ,(int)offsetof(Geometry_obj,static_tcoord_buffer),HX_HCSTRING("static_tcoord_buffer","\x6d","\x44","\x19","\xf5")},
	{hx::fsObject /*::snow::modules::opengl::native::GLBO*/ ,(int)offsetof(Geometry_obj,static_vcolor_buffer),HX_HCSTRING("static_vcolor_buffer","\x81","\xda","\xa8","\xe7")},
	{hx::fsObject /*::snow::modules::opengl::native::GLBO*/ ,(int)offsetof(Geometry_obj,static_normal_buffer),HX_HCSTRING("static_normal_buffer","\xc7","\x60","\x21","\x31")},
	{hx::fsBool,(int)offsetof(Geometry_obj,added),HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Geometry_obj,batchers),HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e")},
	{hx::fsObject /*::phoenix::geometry::GeometryState*/ ,(int)offsetof(Geometry_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dropped),HX_HCSTRING("dropped","\x00","\x24","\xe9","\x06")},
	{hx::fsString,(int)offsetof(Geometry_obj,uuid),HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d")},
	{hx::fsString,(int)offsetof(Geometry_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Geometry_obj,primitive_type),HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Geometry_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(Geometry_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsFloat,(int)offsetof(Geometry_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsInt,(int)offsetof(Geometry_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Geometry_obj,clip_rect),HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89")},
	{hx::fsInt,(int)offsetof(Geometry_obj,shadow_primitive_type),HX_HCSTRING("shadow_primitive_type","\x51","\x25","\xc9","\x32")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Geometry_obj,shadow_texture),HX_HCSTRING("shadow_texture","\x3c","\xca","\x94","\x51")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(Geometry_obj,shadow_shader),HX_HCSTRING("shadow_shader","\xe4","\xc4","\x51","\x95")},
	{hx::fsInt,(int)offsetof(Geometry_obj,shadow_group),HX_HCSTRING("shadow_group","\x60","\xea","\x13","\xdd")},
	{hx::fsFloat,(int)offsetof(Geometry_obj,shadow_depth),HX_HCSTRING("shadow_depth","\x24","\x28","\x49","\x1a")},
	{hx::fsBool,(int)offsetof(Geometry_obj,shadow_clip),HX_HCSTRING("shadow_clip","\xcf","\x36","\x72","\xd8")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_primitive_type),HX_HCSTRING("dirty_primitive_type","\x5f","\xa5","\x3a","\x90")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_texture),HX_HCSTRING("dirty_texture","\x6e","\xd4","\x32","\x48")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_shader),HX_HCSTRING("dirty_shader","\xf2","\x86","\xfd","\x54")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_group),HX_HCSTRING("dirty_group","\x12","\xa4","\x4a","\x4d")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_depth),HX_HCSTRING("dirty_depth","\xd6","\xe1","\x7f","\x8a")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_clip),HX_HCSTRING("dirty_clip","\x5d","\xb9","\x4d","\x48")},
	{hx::fsBool,(int)offsetof(Geometry_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsBool,(int)offsetof(Geometry_obj,immediate),HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf")},
	{hx::fsBool,(int)offsetof(Geometry_obj,locked),HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Geometry_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsBool,(int)offsetof(Geometry_obj,clip),HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Geometry_obj,_final_vert_position),HX_HCSTRING("_final_vert_position","\x6f","\x0e","\xa4","\x12")},
	{hx::fsObject /*::phoenix::geometry::GeometryKey*/ ,(int)offsetof(Geometry_obj,key),HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Geometry_obj::_sequence_key,HX_HCSTRING("_sequence_key","\x40","\x34","\x6b","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"),
	HX_HCSTRING("submitted","\xbb","\x24","\xb6","\x28"),
	HX_HCSTRING("static_vertex_buffer","\x2a","\x49","\xd7","\x09"),
	HX_HCSTRING("static_tcoord_buffer","\x6d","\x44","\x19","\xf5"),
	HX_HCSTRING("static_vcolor_buffer","\x81","\xda","\xa8","\xe7"),
	HX_HCSTRING("static_normal_buffer","\xc7","\x60","\x21","\x31"),
	HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"),
	HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("dropped","\x00","\x24","\xe9","\x06"),
	HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"),
	HX_HCSTRING("shadow_primitive_type","\x51","\x25","\xc9","\x32"),
	HX_HCSTRING("shadow_texture","\x3c","\xca","\x94","\x51"),
	HX_HCSTRING("shadow_shader","\xe4","\xc4","\x51","\x95"),
	HX_HCSTRING("shadow_group","\x60","\xea","\x13","\xdd"),
	HX_HCSTRING("shadow_depth","\x24","\x28","\x49","\x1a"),
	HX_HCSTRING("shadow_clip","\xcf","\x36","\x72","\xd8"),
	HX_HCSTRING("dirty_primitive_type","\x5f","\xa5","\x3a","\x90"),
	HX_HCSTRING("dirty_texture","\x6e","\xd4","\x32","\x48"),
	HX_HCSTRING("dirty_shader","\xf2","\x86","\xfd","\x54"),
	HX_HCSTRING("dirty_group","\x12","\xa4","\x4a","\x4d"),
	HX_HCSTRING("dirty_depth","\xd6","\xe1","\x7f","\x8a"),
	HX_HCSTRING("dirty_clip","\x5d","\xb9","\x4d","\x48"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"),
	HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"),
	HX_HCSTRING("_final_vert_position","\x6f","\x0e","\xa4","\x12"),
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("key_string","\xb1","\xb2","\xdd","\x20"),
	HX_HCSTRING("refresh_key","\xfb","\x31","\xdf","\x48"),
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	HX_HCSTRING("drop","\x2f","\x38","\x70","\x42"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("batch","\xba","\xe7","\xba","\xad"),
	HX_HCSTRING("batch_into_arrays","\x74","\x5e","\xc2","\x25"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("set_locked","\x47","\x13","\xcc","\x4d"),
	HX_HCSTRING("get_locked","\xd3","\x74","\x4e","\x4a"),
	HX_HCSTRING("set_dirty","\x75","\x98","\xca","\x00"),
	HX_HCSTRING("get_dirty","\x69","\xac","\x79","\x1d"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("get_primitive_type","\x5b","\xa9","\x07","\x24"),
	HX_HCSTRING("set_primitive_type","\xcf","\xdb","\xb6","\x00"),
	HX_HCSTRING("get_texture","\xf2","\x28","\xdb","\x24"),
	HX_HCSTRING("set_texture","\xfe","\x2f","\x48","\x2f"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_shader","\xee","\x2e","\xa8","\x0d"),
	HX_HCSTRING("set_shader","\x62","\xcd","\x25","\x11"),
	HX_HCSTRING("get_depth","\x5a","\x4d","\xd3","\x1a"),
	HX_HCSTRING("set_depth","\x66","\x39","\x24","\xfe"),
	HX_HCSTRING("get_group","\x96","\x0f","\x9e","\xdd"),
	HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"),
	HX_HCSTRING("get_clip","\x59","\x2a","\x7d","\xc1"),
	HX_HCSTRING("set_clip","\xcd","\x83","\xda","\x6f"),
	HX_HCSTRING("get_clip_rect","\x0a","\x1c","\x06","\x4b"),
	HX_HCSTRING("set_clip_rect","\x16","\xfe","\x0b","\x90"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Geometry_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Geometry_obj::_sequence_key,"_sequence_key");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Geometry_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Geometry_obj::_sequence_key,"_sequence_key");
};

#endif

hx::Class Geometry_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_sequence_key","\x40","\x34","\x6b","\xf7"),
	::String(null()) };

void Geometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.Geometry","\x6f","\xef","\x7a","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Geometry_obj::__GetStatic;
	__mClass->mSetStaticField = &Geometry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Geometry_obj >;
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

void Geometry_obj::__boot()
{
	_sequence_key= (int)-1;
}

} // end namespace phoenix
} // end namespace geometry
