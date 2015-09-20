#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_BatchGroup
#include <phoenix/BatchGroup.h>
#endif
#ifndef INCLUDED_phoenix_BatchState
#include <phoenix/BatchState.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
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
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLPO
#include <snow/modules/opengl/native/GLPO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLTO
#include <snow/modules/opengl/native/GLTO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GL_FFI
#include <snow/modules/opengl/native/GL_FFI.h>
#endif
namespace phoenix{

Void BatchState_obj::__construct(::phoenix::Batcher _r)
{
HX_STACK_FRAME("phoenix.BatchState","new",0x4a680688,"phoenix.BatchState.new","phoenix/BatchState.hx",11,0xe3277547)
HX_STACK_THIS(this)
HX_STACK_ARG(_r,"_r")
{
	HX_STACK_LINE(24)
	this->log = false;
	HX_STACK_LINE(19)
	this->last_group = (int)-1;
	HX_STACK_LINE(27)
	this->batcher = _r;
	HX_STACK_LINE(28)
	::phoenix::geometry::GeometryState tmp = ::phoenix::geometry::GeometryState_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	this->geom_state = tmp;
	HX_STACK_LINE(29)
	::phoenix::geometry::GeometryState tmp1 = ::phoenix::geometry::GeometryState_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	this->last_geom_state = tmp1;
}
;
	return null();
}

//BatchState_obj::~BatchState_obj() { }

Dynamic BatchState_obj::__CreateEmpty() { return  new BatchState_obj; }
hx::ObjectPtr< BatchState_obj > BatchState_obj::__new(::phoenix::Batcher _r)
{  hx::ObjectPtr< BatchState_obj > _result_ = new BatchState_obj();
	_result_->__construct(_r);
	return _result_;}

Dynamic BatchState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BatchState_obj > _result_ = new BatchState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::phoenix::Shader BatchState_obj::active_shader( ){
	HX_STACK_FRAME("phoenix.BatchState","active_shader",0xae846be6,"phoenix.BatchState.active_shader","phoenix/BatchState.hx",32,0xe3277547)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	::phoenix::geometry::GeometryState tmp = this->geom_state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	::phoenix::Shader tmp1 = tmp->shader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	if ((tmp2)){
		HX_STACK_LINE(34)
		::phoenix::geometry::GeometryState tmp3 = this->geom_state;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		::phoenix::Shader tmp4 = tmp3->shader;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		return tmp4;
	}
	else{
		HX_STACK_LINE(36)
		::phoenix::geometry::GeometryState tmp3 = this->geom_state;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		::phoenix::Texture tmp4 = tmp3->texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		if ((tmp5)){
			HX_STACK_LINE(37)
			::phoenix::Batcher tmp6 = this->batcher;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			Dynamic tmp7 = tmp6->renderer->shaders;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			::phoenix::Shader tmp8 = tmp7->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(37)
			return tmp8;
		}
		else{
			HX_STACK_LINE(39)
			::phoenix::Batcher tmp6 = this->batcher;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(39)
			Dynamic tmp7 = tmp6->renderer->shaders;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(39)
			::phoenix::Shader tmp8 = tmp7->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic )->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(39)
			return tmp8;
		}
	}
	HX_STACK_LINE(33)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BatchState_obj,active_shader,return )

Void BatchState_obj::activate( ::phoenix::Batcher batcher){
{
		HX_STACK_FRAME("phoenix.BatchState","activate",0xd6da948b,"phoenix.BatchState.activate","phoenix/BatchState.hx",44,0xe3277547)
		HX_STACK_THIS(this)
		HX_STACK_ARG(batcher,"batcher")
		HX_STACK_LINE(47)
		::phoenix::geometry::GeometryState tmp = this->geom_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		bool tmp1 = tmp->dirty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		if ((tmp1)){
			HX_STACK_LINE(49)
			::phoenix::geometry::GeometryState tmp2 = this->geom_state;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			::phoenix::Texture tmp3 = tmp2->texture;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			if ((tmp4)){
				HX_STACK_LINE(51)
				Dynamic tmp5 = this->last_texture_id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(51)
				::phoenix::geometry::GeometryState tmp6 = this->geom_state;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(51)
				::String tmp7 = tmp6->texture->id;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(51)
				bool tmp8 = (tmp5 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(51)
				if ((tmp8)){
					HX_STACK_LINE(53)
					::phoenix::geometry::GeometryState tmp9 = this->geom_state;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(53)
					::String tmp10 = tmp9->texture->id;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(53)
					this->last_texture_id = tmp10;
					HX_STACK_LINE(54)
					::phoenix::geometry::GeometryState tmp11 = this->geom_state;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(54)
					::snow::modules::opengl::native::GLTO tmp12 = tmp11->texture->texture;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(54)
					bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(54)
					if ((tmp13)){
						HX_STACK_LINE(55)
						::phoenix::geometry::GeometryState tmp14 = this->geom_state;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(55)
						tmp14->texture->bind();
					}
				}
			}
			else{
				HX_STACK_LINE(62)
				::phoenix::Renderer tmp5 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(62)
				tmp5->state->bindTexture2D(null());
				HX_STACK_LINE(63)
				this->last_texture_id = null();
			}
			HX_STACK_LINE(67)
			::phoenix::geometry::GeometryState tmp5 = this->geom_state;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			::phoenix::Shader tmp6 = tmp5->shader;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			if ((tmp7)){
				HX_STACK_LINE(69)
				::snow::modules::opengl::native::GLPO tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					Dynamic tmp9 = this->last_shader_id;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(69)
					int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(69)
					int _id = tmp10;		HX_STACK_VAR(_id,"_id");
					HX_STACK_LINE(69)
					::snow::modules::opengl::native::GLPO tmp11 = ::snow::modules::opengl::native::GLPO_obj::__new(_id);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(69)
					tmp8 = tmp11;
				}
				HX_STACK_LINE(69)
				::phoenix::geometry::GeometryState tmp9 = this->geom_state;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(69)
				::snow::modules::opengl::native::GLPO tmp10 = tmp9->shader->program;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(69)
				bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(69)
				if ((tmp11)){
					HX_STACK_LINE(71)
					::phoenix::geometry::GeometryState tmp12 = this->geom_state;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(71)
					::phoenix::Shader tmp13 = tmp12->shader;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(71)
					batcher->shader_activate(tmp13);
					HX_STACK_LINE(72)
					::phoenix::geometry::GeometryState tmp14 = this->geom_state;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(72)
					::snow::modules::opengl::native::GLPO tmp15 = tmp14->shader->program;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(72)
					this->last_shader_id = tmp15;
				}
			}
			else{
				HX_STACK_LINE(78)
				::phoenix::geometry::GeometryState tmp8 = this->geom_state;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(78)
				::phoenix::Texture tmp9 = tmp8->texture;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(78)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(78)
				if ((tmp10)){
					HX_STACK_LINE(80)
					Dynamic tmp11 = batcher->renderer->shaders;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(80)
					::phoenix::Shader tmp12 = tmp11->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(80)
					batcher->shader_activate(tmp12);
					HX_STACK_LINE(81)
					Dynamic tmp13 = batcher->renderer->shaders;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(81)
					::phoenix::Shader tmp14 = tmp13->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(81)
					this->last_shader_id = tmp14->program;
				}
				else{
					HX_STACK_LINE(83)
					Dynamic tmp11 = batcher->renderer->shaders;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(83)
					::phoenix::Shader tmp12 = tmp11->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic )->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(83)
					batcher->shader_activate(tmp12);
					HX_STACK_LINE(84)
					Dynamic tmp13 = batcher->renderer->shaders;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(84)
					::phoenix::Shader tmp14 = tmp13->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic )->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(84)
					this->last_shader_id = tmp14->program;
				}
			}
			HX_STACK_LINE(91)
			::phoenix::geometry::GeometryState tmp8 = this->geom_state;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(91)
			int tmp9 = tmp8->group;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(91)
			int tmp10 = this->last_group;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(91)
			bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(91)
			if ((tmp11)){
				HX_STACK_LINE(95)
				int tmp12 = this->last_group;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(95)
				Array< ::Dynamic > previous = ((Array< ::Dynamic >)(batcher->groups->get(tmp12)));		HX_STACK_VAR(previous,"previous");
				HX_STACK_LINE(96)
				bool tmp13 = (previous != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(96)
				if ((tmp13)){
					HX_STACK_LINE(98)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(98)
					while((true)){
						HX_STACK_LINE(98)
						bool tmp14 = (_g < previous->length);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(98)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(98)
						if ((tmp15)){
							HX_STACK_LINE(98)
							break;
						}
						HX_STACK_LINE(98)
						::phoenix::BatchGroup tmp16 = previous->__get(_g).StaticCast< ::phoenix::BatchGroup >();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(98)
						::phoenix::BatchGroup _batch_group = tmp16;		HX_STACK_VAR(_batch_group,"_batch_group");
						HX_STACK_LINE(98)
						++(_g);
						HX_STACK_LINE(99)
						bool tmp17 = (_batch_group->post_render != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(99)
						if ((tmp17)){
							HX_STACK_LINE(99)
							::phoenix::Batcher tmp18 = batcher;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(99)
							_batch_group->post_render(tmp18);
						}
					}
				}
				HX_STACK_LINE(105)
				::phoenix::geometry::GeometryState tmp14 = this->geom_state;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(105)
				int tmp15 = tmp14->group;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(105)
				Array< ::Dynamic > current = ((Array< ::Dynamic >)(batcher->groups->get(tmp15)));		HX_STACK_VAR(current,"current");
				HX_STACK_LINE(106)
				bool tmp16 = (current != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(106)
				if ((tmp16)){
					HX_STACK_LINE(108)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(108)
					while((true)){
						HX_STACK_LINE(108)
						bool tmp17 = (_g < current->length);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(108)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(108)
						if ((tmp18)){
							HX_STACK_LINE(108)
							break;
						}
						HX_STACK_LINE(108)
						::phoenix::BatchGroup tmp19 = current->__get(_g).StaticCast< ::phoenix::BatchGroup >();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(108)
						::phoenix::BatchGroup _batch_group = tmp19;		HX_STACK_VAR(_batch_group,"_batch_group");
						HX_STACK_LINE(108)
						++(_g);
						HX_STACK_LINE(109)
						bool tmp20 = (_batch_group->pre_render != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(109)
						if ((tmp20)){
							HX_STACK_LINE(109)
							::phoenix::Batcher tmp21 = batcher;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(109)
							_batch_group->pre_render(tmp21);
						}
					}
				}
				HX_STACK_LINE(113)
				::phoenix::geometry::GeometryState tmp17 = this->geom_state;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(113)
				this->last_group = tmp17->group;
			}
		}
		HX_STACK_LINE(121)
		::phoenix::geometry::GeometryState tmp2 = this->geom_state;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(121)
		bool tmp3 = tmp2->clip;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		if ((tmp3)){
			HX_STACK_LINE(123)
			bool tmp4 = this->is_clipping;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(123)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(123)
			if ((tmp5)){
				HX_STACK_LINE(124)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_enable((int)3089);
				HX_STACK_LINE(125)
				this->is_clipping = true;
			}
			HX_STACK_LINE(129)
			::phoenix::Rectangle tmp6 = this->clip_rect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(129)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(129)
			if ((tmp7)){
				HX_STACK_LINE(131)
				::phoenix::Rectangle tmp8 = this->clip_rect;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(131)
				::phoenix::Rectangle tmp9 = this->last_clip_rect;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(131)
				bool tmp10 = tmp8->equal(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(131)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(131)
				if ((tmp11)){
					HX_STACK_LINE(134)
					::phoenix::Rectangle tmp12 = batcher->view->get_viewport();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(134)
					Float tmp13 = tmp12->h;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(134)
					::phoenix::Rectangle tmp14 = this->clip_rect;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(134)
					Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(134)
					::phoenix::Rectangle tmp16 = this->clip_rect;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(134)
					Float tmp17 = tmp16->h;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(134)
					Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(134)
					Float tmp19 = (tmp13 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(134)
					Float _y = tmp19;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(136)
					{
						HX_STACK_LINE(136)
						::phoenix::Rectangle tmp20 = this->clip_rect;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(136)
						Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(136)
						int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(136)
						int x = tmp22;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(136)
						Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(136)
						int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(136)
						int y = tmp24;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(136)
						::phoenix::Rectangle tmp25 = this->clip_rect;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(136)
						Float tmp26 = tmp25->w;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(136)
						int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(136)
						int width = tmp27;		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(136)
						::phoenix::Rectangle tmp28 = this->clip_rect;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(136)
						Float tmp29 = tmp28->h;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(136)
						int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(136)
						int height = tmp30;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(136)
						int tmp31 = x;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(136)
						int tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(136)
						int tmp33 = width;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(136)
						int tmp34 = height;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(136)
						::snow::modules::opengl::native::GL_FFI_obj::snow_gl_scissor(tmp31,tmp32,tmp33,tmp34);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(144)
			bool tmp4 = this->is_clipping;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			if ((tmp4)){
				HX_STACK_LINE(145)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_disable((int)3089);
				HX_STACK_LINE(146)
				this->is_clipping = false;
			}
		}
		HX_STACK_LINE(152)
		::phoenix::geometry::GeometryState tmp4 = this->geom_state;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		tmp4->clean();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BatchState_obj,activate,(void))

Void BatchState_obj::deactivate( ::phoenix::Batcher batcher){
{
		HX_STACK_FRAME("phoenix.BatchState","deactivate",0xb061bb0c,"phoenix.BatchState.deactivate","phoenix/BatchState.hx",155,0xe3277547)
		HX_STACK_THIS(this)
		HX_STACK_ARG(batcher,"batcher")
		HX_STACK_LINE(157)
		Dynamic tmp = this->last_texture_id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		if ((tmp1)){
			HX_STACK_LINE(159)
			::phoenix::Renderer tmp2 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(159)
			tmp2->state->bindTexture2D(null());
		}
		HX_STACK_LINE(164)
		::phoenix::Renderer tmp2 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		tmp2->state->useProgram(null());
		HX_STACK_LINE(166)
		int tmp3 = this->last_group;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		Array< ::Dynamic > previous = ((Array< ::Dynamic >)(batcher->groups->get(tmp3)));		HX_STACK_VAR(previous,"previous");
		HX_STACK_LINE(167)
		bool tmp4 = (previous != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(167)
		if ((tmp4)){
			HX_STACK_LINE(169)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(169)
			while((true)){
				HX_STACK_LINE(169)
				bool tmp5 = (_g < previous->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(169)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(169)
				if ((tmp6)){
					HX_STACK_LINE(169)
					break;
				}
				HX_STACK_LINE(169)
				::phoenix::BatchGroup tmp7 = previous->__get(_g).StaticCast< ::phoenix::BatchGroup >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(169)
				::phoenix::BatchGroup _batch_group = tmp7;		HX_STACK_VAR(_batch_group,"_batch_group");
				HX_STACK_LINE(169)
				++(_g);
				HX_STACK_LINE(170)
				bool tmp8 = (_batch_group->post_render != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				if ((tmp8)){
					HX_STACK_LINE(170)
					::phoenix::Batcher tmp9 = batcher;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(170)
					_batch_group->post_render(tmp9);
				}
			}
		}
		HX_STACK_LINE(174)
		bool tmp5 = this->is_clipping;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		if ((tmp5)){
			HX_STACK_LINE(174)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_disable((int)3089);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BatchState_obj,deactivate,(void))

bool BatchState_obj::update( ::phoenix::geometry::Geometry geom){
	HX_STACK_FRAME("phoenix.BatchState","update",0x8d6798e1,"phoenix.BatchState.update","phoenix/BatchState.hx",177,0xe3277547)
	HX_STACK_THIS(this)
	HX_STACK_ARG(geom,"geom")
	HX_STACK_LINE(179)
	::phoenix::geometry::GeometryState tmp = this->geom_state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	::phoenix::geometry::GeometryState tmp1 = this->last_geom_state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	tmp->clone_onto(tmp1);
	HX_STACK_LINE(180)
	::phoenix::geometry::GeometryState tmp2 = this->geom_state;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(180)
	::phoenix::geometry::GeometryState tmp3 = geom->state;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(180)
	tmp2->update(tmp3);
	HX_STACK_LINE(182)
	::phoenix::geometry::GeometryState tmp4 = this->geom_state;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(182)
	bool tmp5 = tmp4->clip;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(182)
	if ((tmp5)){
		HX_STACK_LINE(183)
		::phoenix::Rectangle tmp6 = this->clip_rect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		this->last_clip_rect = tmp6;
		HX_STACK_LINE(184)
		::phoenix::Rectangle tmp7 = geom->get_clip_rect();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(184)
		this->clip_rect = tmp7;
	}
	HX_STACK_LINE(187)
	::phoenix::geometry::GeometryState tmp6 = this->geom_state;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(187)
	bool tmp7 = tmp6->dirty;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(187)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(187)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(187)
	if ((tmp8)){
		HX_STACK_LINE(187)
		::phoenix::Rectangle tmp10 = this->last_clip_rect;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(187)
		::phoenix::Rectangle tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(187)
		::phoenix::Rectangle tmp12 = this->clip_rect;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(187)
		::phoenix::Rectangle tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(187)
		tmp9 = (tmp11 != tmp13);
	}
	else{
		HX_STACK_LINE(187)
		tmp9 = true;
	}
	HX_STACK_LINE(187)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(BatchState_obj,update,return )

Void BatchState_obj::str( ){
{
		HX_STACK_FRAME("phoenix.BatchState","str",0x4a6bded9,"phoenix.BatchState.str","phoenix/BatchState.hx",192,0xe3277547)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		bool tmp = this->log;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		if ((tmp1)){
			HX_STACK_LINE(194)
			return null();
		}
		HX_STACK_LINE(196)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),196,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		::haxe::Log_obj::trace(HX_HCSTRING("\t+ BATCHSTATE LAST ","\x1f","\x46","\xe2","\x93"),tmp2);
		HX_STACK_LINE(197)
		::phoenix::geometry::GeometryState tmp3 = this->last_geom_state;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		Float tmp4 = tmp3->depth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		::String tmp5 = (HX_HCSTRING("\t\tdepth - ","\x30","\xaa","\x11","\xc4") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),197,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		::haxe::Log_obj::trace(tmp5,tmp6);
		HX_STACK_LINE(198)
		::phoenix::geometry::GeometryState tmp7 = this->last_geom_state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(198)
		int tmp8 = tmp7->group;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(198)
		::String tmp9 = (HX_HCSTRING("\t\tgroup - ","\x74","\xf5","\x94","\xbe") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(198)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),198,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(198)
		::haxe::Log_obj::trace(tmp9,tmp10);
		HX_STACK_LINE(199)
		::phoenix::geometry::GeometryState tmp11 = this->last_geom_state;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(199)
		::phoenix::Texture tmp12 = tmp11->texture;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(199)
		bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(199)
		::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(199)
		if ((tmp13)){
			HX_STACK_LINE(199)
			tmp14 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
		}
		else{
			HX_STACK_LINE(199)
			::phoenix::geometry::GeometryState tmp15 = this->last_geom_state;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(199)
			tmp14 = tmp15->texture->id;
		}
		HX_STACK_LINE(199)
		::String tmp15 = (HX_HCSTRING("\t\ttexture - ","\x58","\x01","\x33","\x88") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(199)
		Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),199,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(199)
		::haxe::Log_obj::trace(tmp15,tmp16);
		HX_STACK_LINE(200)
		::phoenix::geometry::GeometryState tmp17 = this->last_geom_state;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(200)
		::phoenix::Texture tmp18 = tmp17->texture;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(200)
		bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(200)
		if ((tmp19)){
			HX_STACK_LINE(201)
			::phoenix::geometry::GeometryState tmp20 = this->last_geom_state;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(201)
			::snow::modules::opengl::native::GLTO tmp21 = tmp20->texture->texture;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(201)
			::String tmp22 = ::Std_obj::string(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(201)
			::String tmp23 = (HX_HCSTRING("\t\t\t ","\xd7","\xc7","\xf9","\x05") + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(201)
			Dynamic tmp24 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),201,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(201)
			::haxe::Log_obj::trace(tmp23,tmp24);
		}
		HX_STACK_LINE(203)
		::phoenix::geometry::GeometryState tmp20 = this->last_geom_state;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(203)
		::phoenix::Shader tmp21 = tmp20->shader;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(203)
		bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(203)
		::String tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(203)
		if ((tmp22)){
			HX_STACK_LINE(203)
			tmp23 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
		}
		else{
			HX_STACK_LINE(203)
			::phoenix::geometry::GeometryState tmp24 = this->last_geom_state;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(203)
			tmp23 = tmp24->shader->id;
		}
		HX_STACK_LINE(203)
		::String tmp24 = (HX_HCSTRING("\t\tshader - ","\x8e","\xf1","\x9d","\x79") + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(203)
		Dynamic tmp25 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),203,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(203)
		::haxe::Log_obj::trace(tmp24,tmp25);
		HX_STACK_LINE(204)
		::phoenix::geometry::GeometryState tmp26 = this->last_geom_state;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(204)
		int tmp27 = tmp26->primitive_type;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(204)
		::String tmp28 = (HX_HCSTRING("\t\tprimitive_type - ","\x41","\xea","\xf1","\x1f") + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(204)
		Dynamic tmp29 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),204,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(204)
		::haxe::Log_obj::trace(tmp28,tmp29);
		HX_STACK_LINE(205)
		::phoenix::geometry::GeometryState tmp30 = this->last_geom_state;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(205)
		bool tmp31 = tmp30->clip;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(205)
		::String tmp32 = ::Std_obj::string(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(205)
		::String tmp33 = (HX_HCSTRING("\t\tclip - ","\xc3","\xd6","\xcd","\x6f") + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(205)
		Dynamic tmp34 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),205,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(205)
		::haxe::Log_obj::trace(tmp33,tmp34);
		HX_STACK_LINE(206)
		Dynamic tmp35 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),206,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(206)
		::haxe::Log_obj::trace(HX_HCSTRING("\t- BATCHSTATE LAST","\xe3","\x62","\x2c","\xae"),tmp35);
		HX_STACK_LINE(208)
		Dynamic tmp36 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),208,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(208)
		::haxe::Log_obj::trace(HX_HCSTRING("\t+ BATCHSTATE STATE","\x06","\xbb","\x31","\xa8"),tmp36);
		HX_STACK_LINE(209)
		::phoenix::geometry::GeometryState tmp37 = this->geom_state;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(209)
		Float tmp38 = tmp37->depth;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(209)
		::String tmp39 = (HX_HCSTRING("\t\tdepth - ","\x30","\xaa","\x11","\xc4") + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(209)
		Dynamic tmp40 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),209,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(209)
		::haxe::Log_obj::trace(tmp39,tmp40);
		HX_STACK_LINE(210)
		::phoenix::geometry::GeometryState tmp41 = this->geom_state;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(210)
		int tmp42 = tmp41->group;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(210)
		::String tmp43 = (HX_HCSTRING("\t\tgroup - ","\x74","\xf5","\x94","\xbe") + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(210)
		Dynamic tmp44 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),210,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(210)
		::haxe::Log_obj::trace(tmp43,tmp44);
		HX_STACK_LINE(211)
		::phoenix::geometry::GeometryState tmp45 = this->geom_state;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(211)
		::phoenix::Texture tmp46 = tmp45->texture;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(211)
		bool tmp47 = (tmp46 == null());		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(211)
		::String tmp48;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(211)
		if ((tmp47)){
			HX_STACK_LINE(211)
			tmp48 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
		}
		else{
			HX_STACK_LINE(211)
			::phoenix::geometry::GeometryState tmp49 = this->geom_state;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(211)
			tmp48 = tmp49->texture->id;
		}
		HX_STACK_LINE(211)
		::String tmp49 = (HX_HCSTRING("\t\ttexture - ","\x58","\x01","\x33","\x88") + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(211)
		Dynamic tmp50 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),211,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(211)
		::haxe::Log_obj::trace(tmp49,tmp50);
		HX_STACK_LINE(212)
		::phoenix::geometry::GeometryState tmp51 = this->geom_state;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(212)
		::phoenix::Texture tmp52 = tmp51->texture;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(212)
		bool tmp53 = (tmp52 != null());		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(212)
		if ((tmp53)){
			HX_STACK_LINE(213)
			::phoenix::geometry::GeometryState tmp54 = this->geom_state;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(213)
			::snow::modules::opengl::native::GLTO tmp55 = tmp54->texture->texture;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(213)
			::String tmp56 = ::Std_obj::string(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(213)
			::String tmp57 = (HX_HCSTRING("\t\t\t ","\xd7","\xc7","\xf9","\x05") + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(213)
			Dynamic tmp58 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),213,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(213)
			::haxe::Log_obj::trace(tmp57,tmp58);
		}
		HX_STACK_LINE(215)
		::phoenix::geometry::GeometryState tmp54 = this->geom_state;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(215)
		::phoenix::Shader tmp55 = tmp54->shader;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(215)
		bool tmp56 = (tmp55 == null());		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(215)
		::String tmp57;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(215)
		if ((tmp56)){
			HX_STACK_LINE(215)
			tmp57 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
		}
		else{
			HX_STACK_LINE(215)
			::phoenix::geometry::GeometryState tmp58 = this->geom_state;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(215)
			tmp57 = tmp58->shader->id;
		}
		HX_STACK_LINE(215)
		::String tmp58 = (HX_HCSTRING("\t\tshader - ","\x8e","\xf1","\x9d","\x79") + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(215)
		Dynamic tmp59 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),215,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(215)
		::haxe::Log_obj::trace(tmp58,tmp59);
		HX_STACK_LINE(216)
		::phoenix::geometry::GeometryState tmp60 = this->geom_state;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(216)
		int tmp61 = tmp60->primitive_type;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(216)
		::String tmp62 = (HX_HCSTRING("\t\tprimitive_type - ","\x41","\xea","\xf1","\x1f") + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(216)
		Dynamic tmp63 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),216,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(216)
		::haxe::Log_obj::trace(tmp62,tmp63);
		HX_STACK_LINE(217)
		::phoenix::geometry::GeometryState tmp64 = this->geom_state;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(217)
		bool tmp65 = tmp64->clip;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(217)
		::String tmp66 = ::Std_obj::string(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(217)
		::String tmp67 = (HX_HCSTRING("\t\tclip - ","\xc3","\xd6","\xcd","\x6f") + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(217)
		Dynamic tmp68 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),217,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(217)
		::haxe::Log_obj::trace(tmp67,tmp68);
		HX_STACK_LINE(218)
		Dynamic tmp69 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),218,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(218)
		::haxe::Log_obj::trace(HX_HCSTRING("\t- BATCHSTATE STATE","\xc4","\x98","\xf9","\xcc"),tmp69);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BatchState_obj,str,(void))


BatchState_obj::BatchState_obj()
{
}

void BatchState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BatchState);
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(geom_state,"geom_state");
	HX_MARK_MEMBER_NAME(last_geom_state,"last_geom_state");
	HX_MARK_MEMBER_NAME(last_texture_id,"last_texture_id");
	HX_MARK_MEMBER_NAME(last_shader_id,"last_shader_id");
	HX_MARK_MEMBER_NAME(last_group,"last_group");
	HX_MARK_MEMBER_NAME(is_clipping,"is_clipping");
	HX_MARK_MEMBER_NAME(clip_rect,"clip_rect");
	HX_MARK_MEMBER_NAME(last_clip_rect,"last_clip_rect");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_END_CLASS();
}

void BatchState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(geom_state,"geom_state");
	HX_VISIT_MEMBER_NAME(last_geom_state,"last_geom_state");
	HX_VISIT_MEMBER_NAME(last_texture_id,"last_texture_id");
	HX_VISIT_MEMBER_NAME(last_shader_id,"last_shader_id");
	HX_VISIT_MEMBER_NAME(last_group,"last_group");
	HX_VISIT_MEMBER_NAME(is_clipping,"is_clipping");
	HX_VISIT_MEMBER_NAME(clip_rect,"clip_rect");
	HX_VISIT_MEMBER_NAME(last_clip_rect,"last_clip_rect");
	HX_VISIT_MEMBER_NAME(log,"log");
}

Dynamic BatchState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"str") ) { return str_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { return clip_rect; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"geom_state") ) { return geom_state; }
		if (HX_FIELD_EQ(inName,"last_group") ) { return last_group; }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"is_clipping") ) { return is_clipping; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"active_shader") ) { return active_shader_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"last_shader_id") ) { return last_shader_id; }
		if (HX_FIELD_EQ(inName,"last_clip_rect") ) { return last_clip_rect; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"last_geom_state") ) { return last_geom_state; }
		if (HX_FIELD_EQ(inName,"last_texture_id") ) { return last_texture_id; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BatchState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"geom_state") ) { geom_state=inValue.Cast< ::phoenix::geometry::GeometryState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_group") ) { last_group=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"is_clipping") ) { is_clipping=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"last_shader_id") ) { last_shader_id=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_clip_rect") ) { last_clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"last_geom_state") ) { last_geom_state=inValue.Cast< ::phoenix::geometry::GeometryState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_texture_id") ) { last_texture_id=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BatchState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BatchState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"));
	outFields->push(HX_HCSTRING("geom_state","\x0e","\x71","\xaa","\x98"));
	outFields->push(HX_HCSTRING("last_geom_state","\x97","\x47","\x3e","\x29"));
	outFields->push(HX_HCSTRING("last_texture_id","\x88","\x3a","\x6a","\x41"));
	outFields->push(HX_HCSTRING("last_shader_id","\x8c","\x05","\xd6","\x07"));
	outFields->push(HX_HCSTRING("last_group","\x56","\x69","\x22","\x2c"));
	outFields->push(HX_HCSTRING("is_clipping","\x77","\xd7","\x85","\xf0"));
	outFields->push(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"));
	outFields->push(HX_HCSTRING("last_clip_rect","\xca","\x55","\x1a","\x62"));
	outFields->push(HX_HCSTRING("log","\x84","\x54","\x52","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(BatchState_obj,batcher),HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")},
	{hx::fsObject /*::phoenix::geometry::GeometryState*/ ,(int)offsetof(BatchState_obj,geom_state),HX_HCSTRING("geom_state","\x0e","\x71","\xaa","\x98")},
	{hx::fsObject /*::phoenix::geometry::GeometryState*/ ,(int)offsetof(BatchState_obj,last_geom_state),HX_HCSTRING("last_geom_state","\x97","\x47","\x3e","\x29")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BatchState_obj,last_texture_id),HX_HCSTRING("last_texture_id","\x88","\x3a","\x6a","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BatchState_obj,last_shader_id),HX_HCSTRING("last_shader_id","\x8c","\x05","\xd6","\x07")},
	{hx::fsInt,(int)offsetof(BatchState_obj,last_group),HX_HCSTRING("last_group","\x56","\x69","\x22","\x2c")},
	{hx::fsBool,(int)offsetof(BatchState_obj,is_clipping),HX_HCSTRING("is_clipping","\x77","\xd7","\x85","\xf0")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(BatchState_obj,clip_rect),HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(BatchState_obj,last_clip_rect),HX_HCSTRING("last_clip_rect","\xca","\x55","\x1a","\x62")},
	{hx::fsBool,(int)offsetof(BatchState_obj,log),HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),
	HX_HCSTRING("geom_state","\x0e","\x71","\xaa","\x98"),
	HX_HCSTRING("last_geom_state","\x97","\x47","\x3e","\x29"),
	HX_HCSTRING("last_texture_id","\x88","\x3a","\x6a","\x41"),
	HX_HCSTRING("last_shader_id","\x8c","\x05","\xd6","\x07"),
	HX_HCSTRING("last_group","\x56","\x69","\x22","\x2c"),
	HX_HCSTRING("is_clipping","\x77","\xd7","\x85","\xf0"),
	HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"),
	HX_HCSTRING("last_clip_rect","\xca","\x55","\x1a","\x62"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("active_shader","\xbe","\xf3","\x0f","\x76"),
	HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),
	HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BatchState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BatchState_obj::__mClass,"__mClass");
};

#endif

hx::Class BatchState_obj::__mClass;

void BatchState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BatchState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BatchState_obj >;
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

} // end namespace phoenix
