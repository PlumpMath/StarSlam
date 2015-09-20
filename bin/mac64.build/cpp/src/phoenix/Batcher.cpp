#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
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
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
#ifndef INCLUDED_phoenix_utils_Rendering
#include <phoenix/utils/Rendering.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLBO
#include <snow/modules/opengl/native/GLBO.h>
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

Void Batcher_obj::__construct(::phoenix::Renderer _r,::String __o__name)
{
HX_STACK_FRAME("phoenix.Batcher","new",0x3e82c79a,"phoenix.Batcher.new","phoenix/Batcher.hx",63,0xa9541457)
HX_STACK_THIS(this)
HX_STACK_ARG(_r,"_r")
HX_STACK_ARG(__o__name,"_name")
::String _name = __o__name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(140)
	this->sequence = (int)-1;
	HX_STACK_LINE(135)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(134)
	this->log = false;
	HX_STACK_LINE(132)
	this->visible_count = (int)0;
	HX_STACK_LINE(131)
	this->static_batched_count = (int)0;
	HX_STACK_LINE(130)
	this->dynamic_batched_count = (int)0;
	HX_STACK_LINE(129)
	this->draw_calls = (int)0;
	HX_STACK_LINE(114)
	this->color_attribute = (int)2;
	HX_STACK_LINE(113)
	this->tcoord_attribute = (int)1;
	HX_STACK_LINE(112)
	this->vert_attribute = (int)0;
	HX_STACK_LINE(102)
	this->vert_count = (int)0;
	HX_STACK_LINE(101)
	this->max_floats = (int)0;
	HX_STACK_LINE(100)
	this->max_verts = (int)0;
	HX_STACK_LINE(99)
	this->buffer_index = (int)0;
	HX_STACK_LINE(96)
	this->buffer_count = (int)2;
	HX_STACK_LINE(93)
	this->static_normal_floats = (int)0;
	HX_STACK_LINE(92)
	this->static_color_floats = (int)0;
	HX_STACK_LINE(91)
	this->static_tcoord_floats = (int)0;
	HX_STACK_LINE(90)
	this->static_vert_floats = (int)0;
	HX_STACK_LINE(87)
	this->normal_floats = (int)0;
	HX_STACK_LINE(86)
	this->color_floats = (int)0;
	HX_STACK_LINE(85)
	this->tcoord_floats = (int)0;
	HX_STACK_LINE(84)
	this->vert_floats = (int)0;
	HX_STACK_LINE(71)
	this->tree_changed = false;
	HX_STACK_LINE(67)
	this->enabled = true;
	HX_STACK_LINE(66)
	this->layer = (int)0;
	HX_STACK_LINE(144)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	::String tmp1 = tmp->uniqueid(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	this->id = tmp1;
	HX_STACK_LINE(145)
	this->renderer = _r;
	HX_STACK_LINE(146)
	int tmp2 = ++(::phoenix::Batcher_obj::_sequence_key);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(146)
	this->sequence = tmp2;
	HX_STACK_LINE(148)
	Dynamic tmp3 = this->geometry_compare_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(148)
	this->geometry = tmp4;
	HX_STACK_LINE(149)
	::haxe::ds::IntMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		::haxe::ds::IntMap tmp6 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(149)
		::haxe::ds::IntMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(149)
		tmp5 = tmp7;
	}
	HX_STACK_LINE(149)
	this->groups = tmp5;
	HX_STACK_LINE(151)
	Float tmp6 = ::Math_obj::pow((int)2,(int)16);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(151)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(151)
	this->max_verts = tmp7;
	HX_STACK_LINE(153)
	int tmp8 = this->max_verts;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(153)
	int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(153)
	this->max_floats = tmp9;
	HX_STACK_LINE(156)
	::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		int tmp11 = this->max_floats;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(156)
		Dynamic elements = tmp11;		HX_STACK_VAR(elements,"elements");
		HX_STACK_LINE(156)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(156)
		bool tmp12 = (elements != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(156)
		if ((tmp12)){
			HX_STACK_LINE(156)
			::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new(elements,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(156)
			this1 = tmp13;
		}
		else{
			HX_STACK_LINE(156)
			bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(156)
			if ((tmp13)){
				HX_STACK_LINE(156)
				::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(156)
					::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(156)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(156)
					int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(156)
					_this->length = tmp16;
					HX_STACK_LINE(156)
					int tmp17 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(156)
					_this->byteLength = tmp17;
					HX_STACK_LINE(156)
					::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(156)
					{
						HX_STACK_LINE(156)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(156)
						int tmp19 = _this->byteLength;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(156)
						::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(156)
						this2 = tmp20;
						HX_STACK_LINE(156)
						tmp18 = this2;
					}
					HX_STACK_LINE(156)
					_this->buffer = tmp18;
					HX_STACK_LINE(156)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(156)
					tmp14 = _this;
				}
				HX_STACK_LINE(156)
				this1 = tmp14;
			}
			else{
				HX_STACK_LINE(156)
				bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(156)
				if ((tmp14)){
					HX_STACK_LINE(156)
					::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(156)
					{
						HX_STACK_LINE(156)
						::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(156)
						::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(156)
						::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(156)
						::haxe::io::Bytes srcData = tmp17;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(156)
						int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(156)
						int srcLength = tmp18;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(156)
						int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(156)
						int srcByteOffset = tmp19;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(156)
						int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(156)
						int srcElementSize = tmp20;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(156)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(156)
						int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(156)
						int tmp22 = _this->type;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(156)
						bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(156)
						if ((tmp23)){
							HX_STACK_LINE(156)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(156)
							int tmp24 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(156)
							int cloneLength = tmp24;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(156)
							::haxe::io::Bytes tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(156)
							{
								HX_STACK_LINE(156)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(156)
								int tmp26 = cloneLength;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(156)
								::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(156)
								this2 = tmp27;
								HX_STACK_LINE(156)
								tmp25 = this2;
							}
							HX_STACK_LINE(156)
							_this->buffer = tmp25;
							HX_STACK_LINE(156)
							::haxe::io::Bytes tmp26 = srcData;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(156)
							int tmp27 = srcByteOffset;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(156)
							int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(156)
							_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
						}
						else{
							HX_STACK_LINE(156)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(156)
						int tmp24 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(156)
						_this->byteLength = tmp24;
						HX_STACK_LINE(156)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(156)
						_this->length = srcLength;
						HX_STACK_LINE(156)
						tmp15 = _this;
					}
					HX_STACK_LINE(156)
					this1 = tmp15;
				}
				else{
					HX_STACK_LINE(156)
					bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(156)
					if ((tmp15)){
						HX_STACK_LINE(156)
						::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(156)
						{
							HX_STACK_LINE(156)
							::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(156)
							::snow::api::buffers::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(156)
							bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(156)
							if ((tmp18)){
								HX_STACK_LINE(156)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(156)
							int tmp19 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(156)
							bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(156)
							if ((tmp20)){
								HX_STACK_LINE(156)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(156)
							int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(156)
							int bufferByteLength = tmp21;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(156)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(156)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(156)
							bool tmp22 = true;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(156)
							if ((tmp22)){
								HX_STACK_LINE(156)
								int tmp23 = bufferByteLength;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(156)
								newByteLength = tmp23;
								HX_STACK_LINE(156)
								int tmp24 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(156)
								bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(156)
								if ((tmp25)){
									HX_STACK_LINE(156)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(156)
								bool tmp26 = (newByteLength < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(156)
								if ((tmp26)){
									HX_STACK_LINE(156)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(156)
								int tmp23 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(156)
								newByteLength = tmp23;
								HX_STACK_LINE(156)
								int tmp24 = newByteLength;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(156)
								int newRange = tmp24;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(156)
								bool tmp25 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(156)
								if ((tmp25)){
									HX_STACK_LINE(156)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(156)
							_this->buffer = null();
							HX_STACK_LINE(156)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(156)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(156)
							Float tmp23 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(156)
							int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(156)
							_this->length = tmp24;
							HX_STACK_LINE(156)
							tmp16 = _this;
						}
						HX_STACK_LINE(156)
						this1 = tmp16;
					}
					else{
						HX_STACK_LINE(156)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(156)
		tmp10 = this1;
	}
	HX_STACK_LINE(156)
	this->vertlist = tmp10;
	HX_STACK_LINE(157)
	::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(157)
	{
		HX_STACK_LINE(157)
		int tmp12 = this->max_floats;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(157)
		Dynamic elements = tmp12;		HX_STACK_VAR(elements,"elements");
		HX_STACK_LINE(157)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(157)
		bool tmp13 = (elements != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(157)
		if ((tmp13)){
			HX_STACK_LINE(157)
			::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new(elements,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(157)
			this1 = tmp14;
		}
		else{
			HX_STACK_LINE(157)
			bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(157)
			if ((tmp14)){
				HX_STACK_LINE(157)
				::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(157)
				{
					HX_STACK_LINE(157)
					::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(157)
					::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(157)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(157)
					int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(157)
					_this->length = tmp17;
					HX_STACK_LINE(157)
					int tmp18 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(157)
					_this->byteLength = tmp18;
					HX_STACK_LINE(157)
					::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(157)
					{
						HX_STACK_LINE(157)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(157)
						int tmp20 = _this->byteLength;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(157)
						::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(157)
						this2 = tmp21;
						HX_STACK_LINE(157)
						tmp19 = this2;
					}
					HX_STACK_LINE(157)
					_this->buffer = tmp19;
					HX_STACK_LINE(157)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(157)
					tmp15 = _this;
				}
				HX_STACK_LINE(157)
				this1 = tmp15;
			}
			else{
				HX_STACK_LINE(157)
				bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(157)
				if ((tmp15)){
					HX_STACK_LINE(157)
					::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(157)
					{
						HX_STACK_LINE(157)
						::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(157)
						::snow::api::buffers::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(157)
						::haxe::io::Bytes tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(157)
						::haxe::io::Bytes srcData = tmp18;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(157)
						int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(157)
						int srcLength = tmp19;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(157)
						int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(157)
						int srcByteOffset = tmp20;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(157)
						int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(157)
						int srcElementSize = tmp21;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(157)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(157)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(157)
						int tmp23 = _this->type;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(157)
						bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(157)
						if ((tmp24)){
							HX_STACK_LINE(157)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(157)
							int tmp25 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(157)
							int cloneLength = tmp25;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(157)
							::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(157)
							{
								HX_STACK_LINE(157)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(157)
								int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(157)
								::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(157)
								this2 = tmp28;
								HX_STACK_LINE(157)
								tmp26 = this2;
							}
							HX_STACK_LINE(157)
							_this->buffer = tmp26;
							HX_STACK_LINE(157)
							::haxe::io::Bytes tmp27 = srcData;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(157)
							int tmp28 = srcByteOffset;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(157)
							int tmp29 = cloneLength;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(157)
							_this->buffer->blit((int)0,tmp27,tmp28,tmp29);
						}
						else{
							HX_STACK_LINE(157)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(157)
						int tmp25 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(157)
						_this->byteLength = tmp25;
						HX_STACK_LINE(157)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(157)
						_this->length = srcLength;
						HX_STACK_LINE(157)
						tmp16 = _this;
					}
					HX_STACK_LINE(157)
					this1 = tmp16;
				}
				else{
					HX_STACK_LINE(157)
					bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(157)
					if ((tmp16)){
						HX_STACK_LINE(157)
						::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(157)
						{
							HX_STACK_LINE(157)
							::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(157)
							::snow::api::buffers::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(157)
							bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(157)
							if ((tmp19)){
								HX_STACK_LINE(157)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(157)
							int tmp20 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(157)
							bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(157)
							if ((tmp21)){
								HX_STACK_LINE(157)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(157)
							int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(157)
							int bufferByteLength = tmp22;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(157)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(157)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(157)
							bool tmp23 = true;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(157)
							if ((tmp23)){
								HX_STACK_LINE(157)
								int tmp24 = bufferByteLength;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(157)
								newByteLength = tmp24;
								HX_STACK_LINE(157)
								int tmp25 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(157)
								bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(157)
								if ((tmp26)){
									HX_STACK_LINE(157)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(157)
								bool tmp27 = (newByteLength < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(157)
								if ((tmp27)){
									HX_STACK_LINE(157)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(157)
								int tmp24 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(157)
								newByteLength = tmp24;
								HX_STACK_LINE(157)
								int tmp25 = newByteLength;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(157)
								int newRange = tmp25;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(157)
								bool tmp26 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(157)
								if ((tmp26)){
									HX_STACK_LINE(157)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(157)
							_this->buffer = null();
							HX_STACK_LINE(157)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(157)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(157)
							Float tmp24 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(157)
							int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(157)
							_this->length = tmp25;
							HX_STACK_LINE(157)
							tmp17 = _this;
						}
						HX_STACK_LINE(157)
						this1 = tmp17;
					}
					else{
						HX_STACK_LINE(157)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(157)
		tmp11 = this1;
	}
	HX_STACK_LINE(157)
	this->tcoordlist = tmp11;
	HX_STACK_LINE(158)
	::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(158)
	{
		HX_STACK_LINE(158)
		int tmp13 = this->max_floats;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(158)
		Dynamic elements = tmp13;		HX_STACK_VAR(elements,"elements");
		HX_STACK_LINE(158)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(158)
		bool tmp14 = (elements != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(158)
		if ((tmp14)){
			HX_STACK_LINE(158)
			::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new(elements,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(158)
			this1 = tmp15;
		}
		else{
			HX_STACK_LINE(158)
			bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(158)
			if ((tmp15)){
				HX_STACK_LINE(158)
				::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(158)
				{
					HX_STACK_LINE(158)
					::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(158)
					::snow::api::buffers::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(158)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(158)
					int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(158)
					_this->length = tmp18;
					HX_STACK_LINE(158)
					int tmp19 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(158)
					_this->byteLength = tmp19;
					HX_STACK_LINE(158)
					::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(158)
					{
						HX_STACK_LINE(158)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(158)
						int tmp21 = _this->byteLength;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(158)
						::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(158)
						this2 = tmp22;
						HX_STACK_LINE(158)
						tmp20 = this2;
					}
					HX_STACK_LINE(158)
					_this->buffer = tmp20;
					HX_STACK_LINE(158)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(158)
					tmp16 = _this;
				}
				HX_STACK_LINE(158)
				this1 = tmp16;
			}
			else{
				HX_STACK_LINE(158)
				bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(158)
				if ((tmp16)){
					HX_STACK_LINE(158)
					::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(158)
					{
						HX_STACK_LINE(158)
						::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(158)
						::snow::api::buffers::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(158)
						::haxe::io::Bytes tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(158)
						::haxe::io::Bytes srcData = tmp19;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(158)
						int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(158)
						int srcLength = tmp20;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(158)
						int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(158)
						int srcByteOffset = tmp21;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(158)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(158)
						int srcElementSize = tmp22;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(158)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(158)
						int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(158)
						int tmp24 = _this->type;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(158)
						bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(158)
						if ((tmp25)){
							HX_STACK_LINE(158)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(158)
							int tmp26 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(158)
							int cloneLength = tmp26;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(158)
							::haxe::io::Bytes tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(158)
							{
								HX_STACK_LINE(158)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(158)
								int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(158)
								::haxe::io::Bytes tmp29 = ::haxe::io::Bytes_obj::alloc(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(158)
								this2 = tmp29;
								HX_STACK_LINE(158)
								tmp27 = this2;
							}
							HX_STACK_LINE(158)
							_this->buffer = tmp27;
							HX_STACK_LINE(158)
							::haxe::io::Bytes tmp28 = srcData;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(158)
							int tmp29 = srcByteOffset;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(158)
							int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(158)
							_this->buffer->blit((int)0,tmp28,tmp29,tmp30);
						}
						else{
							HX_STACK_LINE(158)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(158)
						int tmp26 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(158)
						_this->byteLength = tmp26;
						HX_STACK_LINE(158)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(158)
						_this->length = srcLength;
						HX_STACK_LINE(158)
						tmp17 = _this;
					}
					HX_STACK_LINE(158)
					this1 = tmp17;
				}
				else{
					HX_STACK_LINE(158)
					bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(158)
					if ((tmp17)){
						HX_STACK_LINE(158)
						::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(158)
						{
							HX_STACK_LINE(158)
							::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(158)
							::snow::api::buffers::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(158)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(158)
							if ((tmp20)){
								HX_STACK_LINE(158)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(158)
							int tmp21 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(158)
							bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(158)
							if ((tmp22)){
								HX_STACK_LINE(158)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(158)
							int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(158)
							int bufferByteLength = tmp23;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(158)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(158)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(158)
							bool tmp24 = true;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(158)
							if ((tmp24)){
								HX_STACK_LINE(158)
								int tmp25 = bufferByteLength;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(158)
								newByteLength = tmp25;
								HX_STACK_LINE(158)
								int tmp26 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(158)
								bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(158)
								if ((tmp27)){
									HX_STACK_LINE(158)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(158)
								bool tmp28 = (newByteLength < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(158)
								if ((tmp28)){
									HX_STACK_LINE(158)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(158)
								int tmp25 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(158)
								newByteLength = tmp25;
								HX_STACK_LINE(158)
								int tmp26 = newByteLength;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(158)
								int newRange = tmp26;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(158)
								bool tmp27 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(158)
								if ((tmp27)){
									HX_STACK_LINE(158)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(158)
							_this->buffer = null();
							HX_STACK_LINE(158)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(158)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(158)
							Float tmp25 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(158)
							int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(158)
							_this->length = tmp26;
							HX_STACK_LINE(158)
							tmp18 = _this;
						}
						HX_STACK_LINE(158)
						this1 = tmp18;
					}
					else{
						HX_STACK_LINE(158)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(158)
		tmp12 = this1;
	}
	HX_STACK_LINE(158)
	this->colorlist = tmp12;
	HX_STACK_LINE(161)
	::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		int tmp14 = this->max_floats;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(161)
		Dynamic elements = tmp14;		HX_STACK_VAR(elements,"elements");
		HX_STACK_LINE(161)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(161)
		bool tmp15 = (elements != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(161)
		if ((tmp15)){
			HX_STACK_LINE(161)
			::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new(elements,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(161)
			this1 = tmp16;
		}
		else{
			HX_STACK_LINE(161)
			bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(161)
			if ((tmp16)){
				HX_STACK_LINE(161)
				::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(161)
				{
					HX_STACK_LINE(161)
					::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(161)
					::snow::api::buffers::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(161)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(161)
					int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(161)
					_this->length = tmp19;
					HX_STACK_LINE(161)
					int tmp20 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(161)
					_this->byteLength = tmp20;
					HX_STACK_LINE(161)
					::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(161)
					{
						HX_STACK_LINE(161)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(161)
						int tmp22 = _this->byteLength;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(161)
						::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(161)
						this2 = tmp23;
						HX_STACK_LINE(161)
						tmp21 = this2;
					}
					HX_STACK_LINE(161)
					_this->buffer = tmp21;
					HX_STACK_LINE(161)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(161)
					tmp17 = _this;
				}
				HX_STACK_LINE(161)
				this1 = tmp17;
			}
			else{
				HX_STACK_LINE(161)
				bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(161)
				if ((tmp17)){
					HX_STACK_LINE(161)
					::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(161)
					{
						HX_STACK_LINE(161)
						::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(161)
						::snow::api::buffers::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(161)
						::haxe::io::Bytes tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(161)
						::haxe::io::Bytes srcData = tmp20;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(161)
						int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(161)
						int srcLength = tmp21;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(161)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(161)
						int srcByteOffset = tmp22;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(161)
						int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(161)
						int srcElementSize = tmp23;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(161)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(161)
						int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(161)
						int tmp25 = _this->type;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(161)
						bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(161)
						if ((tmp26)){
							HX_STACK_LINE(161)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(161)
							int tmp27 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(161)
							int cloneLength = tmp27;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(161)
							::haxe::io::Bytes tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(161)
							{
								HX_STACK_LINE(161)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(161)
								int tmp29 = cloneLength;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(161)
								::haxe::io::Bytes tmp30 = ::haxe::io::Bytes_obj::alloc(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(161)
								this2 = tmp30;
								HX_STACK_LINE(161)
								tmp28 = this2;
							}
							HX_STACK_LINE(161)
							_this->buffer = tmp28;
							HX_STACK_LINE(161)
							::haxe::io::Bytes tmp29 = srcData;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(161)
							int tmp30 = srcByteOffset;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(161)
							int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(161)
							_this->buffer->blit((int)0,tmp29,tmp30,tmp31);
						}
						else{
							HX_STACK_LINE(161)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(161)
						int tmp27 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(161)
						_this->byteLength = tmp27;
						HX_STACK_LINE(161)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(161)
						_this->length = srcLength;
						HX_STACK_LINE(161)
						tmp18 = _this;
					}
					HX_STACK_LINE(161)
					this1 = tmp18;
				}
				else{
					HX_STACK_LINE(161)
					bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(161)
					if ((tmp18)){
						HX_STACK_LINE(161)
						::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(161)
						{
							HX_STACK_LINE(161)
							::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(161)
							::snow::api::buffers::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(161)
							bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(161)
							if ((tmp21)){
								HX_STACK_LINE(161)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(161)
							int tmp22 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(161)
							bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(161)
							if ((tmp23)){
								HX_STACK_LINE(161)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(161)
							int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(161)
							int bufferByteLength = tmp24;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(161)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(161)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(161)
							bool tmp25 = true;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(161)
							if ((tmp25)){
								HX_STACK_LINE(161)
								int tmp26 = bufferByteLength;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(161)
								newByteLength = tmp26;
								HX_STACK_LINE(161)
								int tmp27 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(161)
								bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(161)
								if ((tmp28)){
									HX_STACK_LINE(161)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(161)
								bool tmp29 = (newByteLength < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(161)
								if ((tmp29)){
									HX_STACK_LINE(161)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(161)
								int tmp26 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(161)
								newByteLength = tmp26;
								HX_STACK_LINE(161)
								int tmp27 = newByteLength;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(161)
								int newRange = tmp27;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(161)
								bool tmp28 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(161)
								if ((tmp28)){
									HX_STACK_LINE(161)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(161)
							_this->buffer = null();
							HX_STACK_LINE(161)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(161)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(161)
							Float tmp26 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(161)
							int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(161)
							_this->length = tmp27;
							HX_STACK_LINE(161)
							tmp19 = _this;
						}
						HX_STACK_LINE(161)
						this1 = tmp19;
					}
					else{
						HX_STACK_LINE(161)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(161)
		tmp13 = this1;
	}
	HX_STACK_LINE(161)
	this->static_vertlist = tmp13;
	HX_STACK_LINE(162)
	::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		int tmp15 = this->max_floats;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(162)
		Dynamic elements = tmp15;		HX_STACK_VAR(elements,"elements");
		HX_STACK_LINE(162)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(162)
		bool tmp16 = (elements != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(162)
		if ((tmp16)){
			HX_STACK_LINE(162)
			::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new(elements,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(162)
			this1 = tmp17;
		}
		else{
			HX_STACK_LINE(162)
			bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(162)
			if ((tmp17)){
				HX_STACK_LINE(162)
				::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(162)
				{
					HX_STACK_LINE(162)
					::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(162)
					::snow::api::buffers::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(162)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(162)
					int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(162)
					_this->length = tmp20;
					HX_STACK_LINE(162)
					int tmp21 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(162)
					_this->byteLength = tmp21;
					HX_STACK_LINE(162)
					::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(162)
					{
						HX_STACK_LINE(162)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(162)
						int tmp23 = _this->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(162)
						::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(162)
						this2 = tmp24;
						HX_STACK_LINE(162)
						tmp22 = this2;
					}
					HX_STACK_LINE(162)
					_this->buffer = tmp22;
					HX_STACK_LINE(162)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(162)
					tmp18 = _this;
				}
				HX_STACK_LINE(162)
				this1 = tmp18;
			}
			else{
				HX_STACK_LINE(162)
				bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(162)
				if ((tmp18)){
					HX_STACK_LINE(162)
					::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(162)
					{
						HX_STACK_LINE(162)
						::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(162)
						::snow::api::buffers::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(162)
						::haxe::io::Bytes tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(162)
						::haxe::io::Bytes srcData = tmp21;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(162)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(162)
						int srcLength = tmp22;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(162)
						int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(162)
						int srcByteOffset = tmp23;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(162)
						int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(162)
						int srcElementSize = tmp24;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(162)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(162)
						int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(162)
						int tmp26 = _this->type;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(162)
						bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(162)
						if ((tmp27)){
							HX_STACK_LINE(162)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(162)
							int tmp28 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(162)
							int cloneLength = tmp28;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(162)
							::haxe::io::Bytes tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(162)
							{
								HX_STACK_LINE(162)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(162)
								int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(162)
								::haxe::io::Bytes tmp31 = ::haxe::io::Bytes_obj::alloc(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(162)
								this2 = tmp31;
								HX_STACK_LINE(162)
								tmp29 = this2;
							}
							HX_STACK_LINE(162)
							_this->buffer = tmp29;
							HX_STACK_LINE(162)
							::haxe::io::Bytes tmp30 = srcData;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(162)
							int tmp31 = srcByteOffset;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(162)
							int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(162)
							_this->buffer->blit((int)0,tmp30,tmp31,tmp32);
						}
						else{
							HX_STACK_LINE(162)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(162)
						int tmp28 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(162)
						_this->byteLength = tmp28;
						HX_STACK_LINE(162)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(162)
						_this->length = srcLength;
						HX_STACK_LINE(162)
						tmp19 = _this;
					}
					HX_STACK_LINE(162)
					this1 = tmp19;
				}
				else{
					HX_STACK_LINE(162)
					bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(162)
					if ((tmp19)){
						HX_STACK_LINE(162)
						::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(162)
						{
							HX_STACK_LINE(162)
							::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(162)
							::snow::api::buffers::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(162)
							bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(162)
							if ((tmp22)){
								HX_STACK_LINE(162)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(162)
							int tmp23 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(162)
							bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(162)
							if ((tmp24)){
								HX_STACK_LINE(162)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(162)
							int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(162)
							int bufferByteLength = tmp25;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(162)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(162)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(162)
							bool tmp26 = true;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(162)
							if ((tmp26)){
								HX_STACK_LINE(162)
								int tmp27 = bufferByteLength;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(162)
								newByteLength = tmp27;
								HX_STACK_LINE(162)
								int tmp28 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(162)
								bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(162)
								if ((tmp29)){
									HX_STACK_LINE(162)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(162)
								bool tmp30 = (newByteLength < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(162)
								if ((tmp30)){
									HX_STACK_LINE(162)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(162)
								int tmp27 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(162)
								newByteLength = tmp27;
								HX_STACK_LINE(162)
								int tmp28 = newByteLength;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(162)
								int newRange = tmp28;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(162)
								bool tmp29 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(162)
								if ((tmp29)){
									HX_STACK_LINE(162)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(162)
							_this->buffer = null();
							HX_STACK_LINE(162)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(162)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(162)
							Float tmp27 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(162)
							int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(162)
							_this->length = tmp28;
							HX_STACK_LINE(162)
							tmp20 = _this;
						}
						HX_STACK_LINE(162)
						this1 = tmp20;
					}
					else{
						HX_STACK_LINE(162)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(162)
		tmp14 = this1;
	}
	HX_STACK_LINE(162)
	this->static_tcoordlist = tmp14;
	HX_STACK_LINE(163)
	::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		int tmp16 = this->max_floats;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(163)
		Dynamic elements = tmp16;		HX_STACK_VAR(elements,"elements");
		HX_STACK_LINE(163)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(163)
		bool tmp17 = (elements != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(163)
		if ((tmp17)){
			HX_STACK_LINE(163)
			::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new(elements,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(163)
			this1 = tmp18;
		}
		else{
			HX_STACK_LINE(163)
			bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(163)
			if ((tmp18)){
				HX_STACK_LINE(163)
				::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(163)
				{
					HX_STACK_LINE(163)
					::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(163)
					::snow::api::buffers::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(163)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(163)
					int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(163)
					_this->length = tmp21;
					HX_STACK_LINE(163)
					int tmp22 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(163)
					_this->byteLength = tmp22;
					HX_STACK_LINE(163)
					::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(163)
						int tmp24 = _this->byteLength;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(163)
						::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(163)
						this2 = tmp25;
						HX_STACK_LINE(163)
						tmp23 = this2;
					}
					HX_STACK_LINE(163)
					_this->buffer = tmp23;
					HX_STACK_LINE(163)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(163)
					tmp19 = _this;
				}
				HX_STACK_LINE(163)
				this1 = tmp19;
			}
			else{
				HX_STACK_LINE(163)
				bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(163)
				if ((tmp19)){
					HX_STACK_LINE(163)
					::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(163)
						::snow::api::buffers::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(163)
						::haxe::io::Bytes tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(163)
						::haxe::io::Bytes srcData = tmp22;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(163)
						int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(163)
						int srcLength = tmp23;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(163)
						int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(163)
						int srcByteOffset = tmp24;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(163)
						int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(163)
						int srcElementSize = tmp25;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(163)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(163)
						int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(163)
						int tmp27 = _this->type;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(163)
						bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(163)
						if ((tmp28)){
							HX_STACK_LINE(163)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(163)
							int tmp29 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(163)
							int cloneLength = tmp29;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(163)
							::haxe::io::Bytes tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(163)
								int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(163)
								::haxe::io::Bytes tmp32 = ::haxe::io::Bytes_obj::alloc(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(163)
								this2 = tmp32;
								HX_STACK_LINE(163)
								tmp30 = this2;
							}
							HX_STACK_LINE(163)
							_this->buffer = tmp30;
							HX_STACK_LINE(163)
							::haxe::io::Bytes tmp31 = srcData;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(163)
							int tmp32 = srcByteOffset;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(163)
							int tmp33 = cloneLength;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(163)
							_this->buffer->blit((int)0,tmp31,tmp32,tmp33);
						}
						else{
							HX_STACK_LINE(163)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(163)
						int tmp29 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(163)
						_this->byteLength = tmp29;
						HX_STACK_LINE(163)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(163)
						_this->length = srcLength;
						HX_STACK_LINE(163)
						tmp20 = _this;
					}
					HX_STACK_LINE(163)
					this1 = tmp20;
				}
				else{
					HX_STACK_LINE(163)
					bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(163)
					if ((tmp20)){
						HX_STACK_LINE(163)
						::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							::snow::api::buffers::ArrayBufferView tmp22 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(163)
							::snow::api::buffers::ArrayBufferView _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(163)
							bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(163)
							if ((tmp23)){
								HX_STACK_LINE(163)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(163)
							int tmp24 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(163)
							bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(163)
							if ((tmp25)){
								HX_STACK_LINE(163)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(163)
							int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(163)
							int bufferByteLength = tmp26;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(163)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(163)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(163)
							bool tmp27 = true;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(163)
							if ((tmp27)){
								HX_STACK_LINE(163)
								int tmp28 = bufferByteLength;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(163)
								newByteLength = tmp28;
								HX_STACK_LINE(163)
								int tmp29 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(163)
								bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(163)
								if ((tmp30)){
									HX_STACK_LINE(163)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(163)
								bool tmp31 = (newByteLength < (int)0);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(163)
								if ((tmp31)){
									HX_STACK_LINE(163)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(163)
								int tmp28 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(163)
								newByteLength = tmp28;
								HX_STACK_LINE(163)
								int tmp29 = newByteLength;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(163)
								int newRange = tmp29;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(163)
								bool tmp30 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(163)
								if ((tmp30)){
									HX_STACK_LINE(163)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(163)
							_this->buffer = null();
							HX_STACK_LINE(163)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(163)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(163)
							Float tmp28 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(163)
							int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(163)
							_this->length = tmp29;
							HX_STACK_LINE(163)
							tmp21 = _this;
						}
						HX_STACK_LINE(163)
						this1 = tmp21;
					}
					else{
						HX_STACK_LINE(163)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(163)
		tmp15 = this1;
	}
	HX_STACK_LINE(163)
	this->static_colorlist = tmp15;
	HX_STACK_LINE(167)
	::phoenix::Renderer tmp16 = this->renderer;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(167)
	this->view = tmp16->camera;
	HX_STACK_LINE(170)
	this->vertexBuffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(171)
	this->tcoordBuffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(172)
	this->vcolorBuffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(175)
	{
		HX_STACK_LINE(175)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(175)
		int tmp17 = this->buffer_count;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(175)
		int _g = tmp17;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		while((true)){
			HX_STACK_LINE(175)
			bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(175)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(175)
			if ((tmp19)){
				HX_STACK_LINE(175)
				break;
			}
			HX_STACK_LINE(175)
			int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(175)
			int i = tmp20;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(177)
			::snow::modules::opengl::native::GLBO tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(177)
			{
				HX_STACK_LINE(177)
				int tmp22 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(177)
				int _id = tmp22;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(177)
				::snow::modules::opengl::native::GLBO tmp23 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(177)
				tmp21 = tmp23;
			}
			HX_STACK_LINE(177)
			::snow::modules::opengl::native::GLBO _vb = tmp21;		HX_STACK_VAR(_vb,"_vb");
			HX_STACK_LINE(178)
			::snow::modules::opengl::native::GLBO tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(178)
				int tmp23 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(178)
				int _id = tmp23;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(178)
				::snow::modules::opengl::native::GLBO tmp24 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(178)
				tmp22 = tmp24;
			}
			HX_STACK_LINE(178)
			::snow::modules::opengl::native::GLBO _tb = tmp22;		HX_STACK_VAR(_tb,"_tb");
			HX_STACK_LINE(179)
			::snow::modules::opengl::native::GLBO tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				int tmp24 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(179)
				int _id = tmp24;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(179)
				::snow::modules::opengl::native::GLBO tmp25 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(179)
				tmp23 = tmp25;
			}
			HX_STACK_LINE(179)
			::snow::modules::opengl::native::GLBO _cb = tmp23;		HX_STACK_VAR(_cb,"_cb");
			HX_STACK_LINE(180)
			::snow::modules::opengl::native::GLBO tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(180)
			{
				HX_STACK_LINE(180)
				int tmp25 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(180)
				int _id = tmp25;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(180)
				::snow::modules::opengl::native::GLBO tmp26 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(180)
				tmp24 = tmp26;
			}
			HX_STACK_LINE(180)
			::snow::modules::opengl::native::GLBO _nb = tmp24;		HX_STACK_VAR(_nb,"_nb");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				bool tmp25 = (_vb == null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(183)
				int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(183)
				if ((tmp25)){
					HX_STACK_LINE(183)
					tmp26 = (int)0;
				}
				else{
					HX_STACK_LINE(183)
					tmp26 = _vb->id;
				}
				HX_STACK_LINE(183)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp26);
			}
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				::snow::api::buffers::ArrayBufferView tmp25 = this->vertlist;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(184)
				::snow::api::buffers::ArrayBufferView data = tmp25;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(184)
				bool tmp26 = (data != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(184)
				if ((tmp26)){
					HX_STACK_LINE(184)
					int tmp27 = data->byteOffset;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(184)
					int tmp28 = data->byteLength;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(184)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp27,tmp28,(int)35044);
				}
				else{
					HX_STACK_LINE(184)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,(int)35044);
				}
			}
			HX_STACK_LINE(186)
			{
				HX_STACK_LINE(186)
				bool tmp25 = (_tb == null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(186)
				int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(186)
				if ((tmp25)){
					HX_STACK_LINE(186)
					tmp26 = (int)0;
				}
				else{
					HX_STACK_LINE(186)
					tmp26 = _tb->id;
				}
				HX_STACK_LINE(186)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp26);
			}
			HX_STACK_LINE(187)
			{
				HX_STACK_LINE(187)
				::snow::api::buffers::ArrayBufferView tmp25 = this->tcoordlist;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(187)
				::snow::api::buffers::ArrayBufferView data = tmp25;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(187)
				bool tmp26 = (data != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(187)
				if ((tmp26)){
					HX_STACK_LINE(187)
					int tmp27 = data->byteOffset;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(187)
					int tmp28 = data->byteLength;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(187)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp27,tmp28,(int)35044);
				}
				else{
					HX_STACK_LINE(187)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,(int)35044);
				}
			}
			HX_STACK_LINE(189)
			{
				HX_STACK_LINE(189)
				bool tmp25 = (_cb == null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(189)
				int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(189)
				if ((tmp25)){
					HX_STACK_LINE(189)
					tmp26 = (int)0;
				}
				else{
					HX_STACK_LINE(189)
					tmp26 = _cb->id;
				}
				HX_STACK_LINE(189)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp26);
			}
			HX_STACK_LINE(190)
			{
				HX_STACK_LINE(190)
				::snow::api::buffers::ArrayBufferView tmp25 = this->colorlist;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(190)
				::snow::api::buffers::ArrayBufferView data = tmp25;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(190)
				bool tmp26 = (data != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(190)
				if ((tmp26)){
					HX_STACK_LINE(190)
					int tmp27 = data->byteOffset;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(190)
					int tmp28 = data->byteLength;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(190)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp27,tmp28,(int)35044);
				}
				else{
					HX_STACK_LINE(190)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,(int)35044);
				}
			}
			HX_STACK_LINE(195)
			::snow::modules::opengl::native::GLBO tmp25 = _vb;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(195)
			this->vertexBuffers->push(tmp25);
			HX_STACK_LINE(196)
			::snow::modules::opengl::native::GLBO tmp26 = _tb;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(196)
			this->tcoordBuffers->push(tmp26);
			HX_STACK_LINE(197)
			::snow::modules::opengl::native::GLBO tmp27 = _cb;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(197)
			this->vcolorBuffers->push(tmp27);
		}
	}
	HX_STACK_LINE(203)
	{
		HX_STACK_LINE(203)
		int tmp17 = this->vert_attribute;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(203)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_enable_vertex_attrib_array(tmp17);
	}
	HX_STACK_LINE(204)
	{
		HX_STACK_LINE(204)
		int tmp17 = this->tcoord_attribute;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(204)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_enable_vertex_attrib_array(tmp17);
	}
	HX_STACK_LINE(205)
	{
		HX_STACK_LINE(205)
		int tmp17 = this->color_attribute;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(205)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_enable_vertex_attrib_array(tmp17);
	}
	HX_STACK_LINE(209)
	bool tmp17 = (_name.length == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(209)
	if ((tmp17)){
		HX_STACK_LINE(210)
		::luxe::utils::Utils tmp18 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(210)
		::String tmp19 = tmp18->uniqueid(null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(210)
		this->name = tmp19;
	}
	else{
		HX_STACK_LINE(212)
		this->name = _name;
	}
}
;
	return null();
}

//Batcher_obj::~Batcher_obj() { }

Dynamic Batcher_obj::__CreateEmpty() { return  new Batcher_obj; }
hx::ObjectPtr< Batcher_obj > Batcher_obj::__new(::phoenix::Renderer _r,::String __o__name)
{  hx::ObjectPtr< Batcher_obj > _result_ = new Batcher_obj();
	_result_->__construct(_r,__o__name);
	return _result_;}

Dynamic Batcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Batcher_obj > _result_ = new Batcher_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int Batcher_obj::set_layer( int _layer){
	HX_STACK_FRAME("phoenix.Batcher","set_layer",0x4cd9e8ee,"phoenix.Batcher.set_layer","phoenix/Batcher.hx",217,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_layer,"_layer")
	HX_STACK_LINE(220)
	this->layer = _layer;
	HX_STACK_LINE(222)
	::phoenix::Renderer tmp = this->renderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	::phoenix::Renderer tmp1 = this->renderer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	Dynamic tmp2 = tmp1->sort_batchers_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	tmp->batchers->sort(tmp2);
	HX_STACK_LINE(225)
	int tmp3 = this->layer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(225)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,set_layer,return )

::String Batcher_obj::toString( ){
	HX_STACK_FRAME("phoenix.Batcher","toString",0x2a536732,"phoenix.Batcher.toString","phoenix/Batcher.hx",229,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	::String tmp1 = (HX_HCSTRING("Batcher(","\xc1","\xeb","\xbf","\x27") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	::String tmp2 = (tmp1 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,toString,return )

int Batcher_obj::compare( ::phoenix::Batcher other){
	HX_STACK_FRAME("phoenix.Batcher","compare",0xcf1d34df,"phoenix.Batcher.compare","phoenix/Batcher.hx",234,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(236)
	int tmp = this->layer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	int tmp1 = other->layer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(236)
	if ((tmp2)){
		HX_STACK_LINE(236)
		return (int)0;
	}
	HX_STACK_LINE(237)
	int tmp3 = this->layer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(237)
	int tmp4 = other->layer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(237)
	bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(237)
	if ((tmp5)){
		HX_STACK_LINE(237)
		return (int)-1;
	}
	HX_STACK_LINE(239)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,compare,return )

Void Batcher_obj::add_group( int _group,Dynamic _pre_render,Dynamic _post_render){
{
		HX_STACK_FRAME("phoenix.Batcher","add_group",0xcf8ada1b,"phoenix.Batcher.add_group","phoenix/Batcher.hx",243,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_group,"_group")
		HX_STACK_ARG(_pre_render,"_pre_render")
		HX_STACK_ARG(_post_render,"_post_render")
		HX_STACK_LINE(245)
		::haxe::ds::IntMap tmp = this->groups;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		int tmp1 = _group;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		if ((tmp3)){
			HX_STACK_LINE(246)
			Array< ::Dynamic > value = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(246)
			::haxe::ds::IntMap tmp4 = this->groups;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(246)
			int tmp5 = _group;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(246)
			tmp4->set(tmp5,value);
		}
		HX_STACK_LINE(249)
		::haxe::ds::IntMap tmp4 = this->groups;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		int tmp5 = _group;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		::phoenix::BatchGroup tmp6 = ::phoenix::BatchGroup_obj::__new(_pre_render,_post_render);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(249)
		((Array< ::Dynamic >)(tmp4->get(tmp5)))->push(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Batcher_obj,add_group,(void))

::String Batcher_obj::compare_rule_to_string( int r){
	HX_STACK_FRAME("phoenix.Batcher","compare_rule_to_string",0xb26938b2,"phoenix.Batcher.compare_rule_to_string","phoenix/Batcher.hx",253,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(254)
	int tmp = r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(254)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(254)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(255)
			tmp1 = HX_HCSTRING("same","\x66","\x83","\x4d","\x4c");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(256)
			tmp1 = HX_HCSTRING("depth <","\xdf","\x93","\x4a","\x6a");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(257)
			tmp1 = HX_HCSTRING("depth >","\xe1","\x93","\x4a","\x6a");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(259)
			tmp1 = HX_HCSTRING("shader <","\x81","\xae","\x2a","\x36");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(260)
			tmp1 = HX_HCSTRING("shader >","\x83","\xae","\x2a","\x36");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(261)
			tmp1 = HX_HCSTRING("shader s._ >","\x87","\x6d","\x84","\x5c");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(262)
			tmp1 = HX_HCSTRING("shader _.s <","\x85","\x00","\x90","\xd8");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(264)
			tmp1 = HX_HCSTRING("texture <","\xb7","\x11","\x49","\xaf");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(265)
			tmp1 = HX_HCSTRING("texture >","\xb9","\x11","\x49","\xaf");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(266)
			tmp1 = HX_HCSTRING("texture t._ >","\x3e","\x38","\x1a","\x13");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(267)
			tmp1 = HX_HCSTRING("texture _.t <","\xfc","\xf8","\xbf","\xfb");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(269)
			tmp1 = HX_HCSTRING("primitive <","\x83","\x5c","\x09","\x15");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(270)
			tmp1 = HX_HCSTRING("primitive >","\x85","\x5c","\x09","\x15");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(271)
			tmp1 = HX_HCSTRING("unclipped","\xc6","\x0e","\xca","\xfe");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(272)
			tmp1 = HX_HCSTRING("clipped","\xff","\x07","\xc8","\x02");
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(273)
			tmp1 = HX_HCSTRING("timestamp <","\x72","\x52","\xce","\xd6");
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(274)
			tmp1 = HX_HCSTRING("timestamp >","\x74","\x52","\xce","\xd6");
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(275)
			tmp1 = HX_HCSTRING("timestamp ==","\x6a","\xd2","\xb9","\x1d");
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(276)
			tmp1 = HX_HCSTRING("sequence <","\x9d","\x0c","\x22","\xd5");
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(277)
			tmp1 = HX_HCSTRING("sequence >","\x9f","\x0c","\x22","\xd5");
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(278)
			tmp1 = HX_HCSTRING("fallback","\x22","\xf0","\x9d","\x2a");
		}
		;break;
		default: {
			HX_STACK_LINE(279)
			tmp1 = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
		}
	}
	HX_STACK_LINE(254)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,compare_rule_to_string,return )

int Batcher_obj::compare_rule( ::phoenix::geometry::GeometryKey a,::phoenix::geometry::GeometryKey b){
	HX_STACK_FRAME("phoenix.Batcher","compare_rule",0xfee0579c,"phoenix.Batcher.compare_rule","phoenix/Batcher.hx",283,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(285)
	bool tmp = (a->uuid == b->uuid);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	if ((tmp)){
		HX_STACK_LINE(286)
		return (int)0;
	}
	HX_STACK_LINE(289)
	bool tmp1 = (a->depth < b->depth);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	if ((tmp1)){
		HX_STACK_LINE(290)
		return (int)1;
	}
	HX_STACK_LINE(291)
	bool tmp2 = (a->depth > b->depth);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(291)
	if ((tmp2)){
		HX_STACK_LINE(292)
		return (int)2;
	}
	HX_STACK_LINE(297)
	bool tmp3 = (a->shader != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(297)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(297)
	if ((tmp3)){
		HX_STACK_LINE(297)
		tmp4 = (b->shader != null());
	}
	else{
		HX_STACK_LINE(297)
		tmp4 = false;
	}
	HX_STACK_LINE(297)
	if ((tmp4)){
		HX_STACK_LINE(300)
		::String tmp5 = a->shader->id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(300)
		::String tmp6 = b->shader->id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(300)
		bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(300)
		if ((tmp7)){
			HX_STACK_LINE(301)
			return (int)3;
		}
		HX_STACK_LINE(302)
		::String tmp8 = a->shader->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(302)
		::String tmp9 = b->shader->id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(302)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(302)
		if ((tmp10)){
			HX_STACK_LINE(303)
			return (int)4;
		}
	}
	else{
		HX_STACK_LINE(306)
		bool tmp5 = (a->shader != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(306)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(306)
		if ((tmp5)){
			HX_STACK_LINE(306)
			tmp6 = (b->shader == null());
		}
		else{
			HX_STACK_LINE(306)
			tmp6 = false;
		}
		HX_STACK_LINE(306)
		if ((tmp6)){
			HX_STACK_LINE(307)
			return (int)5;
		}
		else{
			HX_STACK_LINE(309)
			bool tmp7 = (a->shader == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(309)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(309)
			if ((tmp7)){
				HX_STACK_LINE(309)
				tmp8 = (b->shader != null());
			}
			else{
				HX_STACK_LINE(309)
				tmp8 = false;
			}
			HX_STACK_LINE(309)
			if ((tmp8)){
				HX_STACK_LINE(310)
				return (int)6;
			}
		}
	}
	HX_STACK_LINE(314)
	bool tmp5 = (a->texture != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(314)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(314)
	if ((tmp5)){
		HX_STACK_LINE(314)
		tmp6 = (b->texture != null());
	}
	else{
		HX_STACK_LINE(314)
		tmp6 = false;
	}
	HX_STACK_LINE(314)
	if ((tmp6)){
		HX_STACK_LINE(317)
		::String tmp7 = a->texture->id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(317)
		::String tmp8 = b->texture->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(317)
		bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(317)
		if ((tmp9)){
			HX_STACK_LINE(318)
			return (int)7;
		}
		HX_STACK_LINE(319)
		::String tmp10 = a->texture->id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(319)
		::String tmp11 = b->texture->id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(319)
		bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(319)
		if ((tmp12)){
			HX_STACK_LINE(320)
			return (int)8;
		}
	}
	else{
		HX_STACK_LINE(323)
		bool tmp7 = (a->texture != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(323)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(323)
		if ((tmp7)){
			HX_STACK_LINE(323)
			tmp8 = (b->texture == null());
		}
		else{
			HX_STACK_LINE(323)
			tmp8 = false;
		}
		HX_STACK_LINE(323)
		if ((tmp8)){
			HX_STACK_LINE(324)
			return (int)9;
		}
		else{
			HX_STACK_LINE(326)
			bool tmp9 = (a->texture == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(326)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(326)
			if ((tmp9)){
				HX_STACK_LINE(326)
				tmp10 = (b->texture != null());
			}
			else{
				HX_STACK_LINE(326)
				tmp10 = false;
			}
			HX_STACK_LINE(326)
			if ((tmp10)){
				HX_STACK_LINE(327)
				return (int)10;
			}
		}
	}
	HX_STACK_LINE(333)
	int a_primitive_index = a->primitive_type;		HX_STACK_VAR(a_primitive_index,"a_primitive_index");
	HX_STACK_LINE(334)
	int b_primitive_index = b->primitive_type;		HX_STACK_VAR(b_primitive_index,"b_primitive_index");
	HX_STACK_LINE(336)
	bool tmp7 = (a_primitive_index < b_primitive_index);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(336)
	if ((tmp7)){
		HX_STACK_LINE(337)
		return (int)11;
	}
	HX_STACK_LINE(338)
	bool tmp8 = (a_primitive_index > b_primitive_index);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(338)
	if ((tmp8)){
		HX_STACK_LINE(339)
		return (int)12;
	}
	HX_STACK_LINE(342)
	bool tmp9 = (a->clip != b->clip);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(342)
	if ((tmp9)){
		HX_STACK_LINE(344)
		bool tmp10 = (a->clip == false);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(344)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(344)
		if ((tmp10)){
			HX_STACK_LINE(344)
			tmp11 = (b->clip == true);
		}
		else{
			HX_STACK_LINE(344)
			tmp11 = false;
		}
		HX_STACK_LINE(344)
		if ((tmp11)){
			HX_STACK_LINE(345)
			return (int)13;
		}
		else{
			HX_STACK_LINE(348)
			bool tmp12 = (a->clip == true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(348)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(348)
			if ((tmp12)){
				HX_STACK_LINE(348)
				tmp13 = (b->clip == false);
			}
			else{
				HX_STACK_LINE(348)
				tmp13 = false;
			}
			HX_STACK_LINE(348)
			if ((tmp13)){
				HX_STACK_LINE(349)
				return (int)14;
			}
		}
	}
	HX_STACK_LINE(357)
	bool tmp10 = (a->timestamp < b->timestamp);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(357)
	if ((tmp10)){
		HX_STACK_LINE(358)
		return (int)15;
	}
	HX_STACK_LINE(359)
	bool tmp11 = (a->timestamp > b->timestamp);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(359)
	if ((tmp11)){
		HX_STACK_LINE(360)
		return (int)16;
	}
	HX_STACK_LINE(361)
	bool tmp12 = (a->timestamp == b->timestamp);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(361)
	if ((tmp12)){
		HX_STACK_LINE(362)
		return (int)17;
	}
	HX_STACK_LINE(364)
	bool tmp13 = (a->sequence < b->sequence);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(364)
	if ((tmp13)){
		HX_STACK_LINE(365)
		return (int)18;
	}
	HX_STACK_LINE(366)
	bool tmp14 = (a->sequence > b->sequence);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(366)
	if ((tmp14)){
		HX_STACK_LINE(367)
		return (int)19;
	}
	HX_STACK_LINE(370)
	return (int)20;
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,compare_rule,return )

int Batcher_obj::geometry_compare( ::phoenix::geometry::GeometryKey a,::phoenix::geometry::GeometryKey b){
	HX_STACK_FRAME("phoenix.Batcher","geometry_compare",0xc33f035e,"phoenix.Batcher.geometry_compare","phoenix/Batcher.hx",373,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(385)
	bool tmp = (a->uuid == b->uuid);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(385)
	if ((tmp)){
		HX_STACK_LINE(386)
		return (int)0;
	}
	HX_STACK_LINE(389)
	bool tmp1 = (a->depth < b->depth);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(389)
	if ((tmp1)){
		HX_STACK_LINE(390)
		return (int)-1;
	}
	HX_STACK_LINE(391)
	bool tmp2 = (a->depth > b->depth);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(391)
	if ((tmp2)){
		HX_STACK_LINE(392)
		return (int)1;
	}
	HX_STACK_LINE(396)
	bool tmp3 = (a->shader != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(396)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(396)
	if ((tmp3)){
		HX_STACK_LINE(396)
		tmp4 = (b->shader != null());
	}
	else{
		HX_STACK_LINE(396)
		tmp4 = false;
	}
	HX_STACK_LINE(396)
	if ((tmp4)){
		HX_STACK_LINE(399)
		::String tmp5 = a->shader->id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(399)
		::String tmp6 = b->shader->id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(399)
		bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(399)
		if ((tmp7)){
			HX_STACK_LINE(400)
			return (int)-1;
		}
		HX_STACK_LINE(401)
		::String tmp8 = a->shader->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(401)
		::String tmp9 = b->shader->id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(401)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(401)
		if ((tmp10)){
			HX_STACK_LINE(402)
			return (int)1;
		}
	}
	else{
		HX_STACK_LINE(405)
		bool tmp5 = (a->shader != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(405)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(405)
		if ((tmp5)){
			HX_STACK_LINE(405)
			tmp6 = (b->shader == null());
		}
		else{
			HX_STACK_LINE(405)
			tmp6 = false;
		}
		HX_STACK_LINE(405)
		if ((tmp6)){
			HX_STACK_LINE(406)
			return (int)1;
		}
		else{
			HX_STACK_LINE(408)
			bool tmp7 = (a->shader == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(408)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(408)
			if ((tmp7)){
				HX_STACK_LINE(408)
				tmp8 = (b->shader != null());
			}
			else{
				HX_STACK_LINE(408)
				tmp8 = false;
			}
			HX_STACK_LINE(408)
			if ((tmp8)){
				HX_STACK_LINE(409)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(413)
	bool tmp5 = (a->texture != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(413)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(413)
	if ((tmp5)){
		HX_STACK_LINE(413)
		tmp6 = (b->texture != null());
	}
	else{
		HX_STACK_LINE(413)
		tmp6 = false;
	}
	HX_STACK_LINE(413)
	if ((tmp6)){
		HX_STACK_LINE(416)
		::String tmp7 = a->texture->id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(416)
		::String tmp8 = b->texture->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(416)
		bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(416)
		if ((tmp9)){
			HX_STACK_LINE(417)
			return (int)-1;
		}
		HX_STACK_LINE(418)
		::String tmp10 = a->texture->id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(418)
		::String tmp11 = b->texture->id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(418)
		bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(418)
		if ((tmp12)){
			HX_STACK_LINE(419)
			return (int)1;
		}
	}
	else{
		HX_STACK_LINE(422)
		bool tmp7 = (a->texture != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(422)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(422)
		if ((tmp7)){
			HX_STACK_LINE(422)
			tmp8 = (b->texture == null());
		}
		else{
			HX_STACK_LINE(422)
			tmp8 = false;
		}
		HX_STACK_LINE(422)
		if ((tmp8)){
			HX_STACK_LINE(423)
			return (int)1;
		}
		else{
			HX_STACK_LINE(425)
			bool tmp9 = (a->texture == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(425)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(425)
			if ((tmp9)){
				HX_STACK_LINE(425)
				tmp10 = (b->texture != null());
			}
			else{
				HX_STACK_LINE(425)
				tmp10 = false;
			}
			HX_STACK_LINE(425)
			if ((tmp10)){
				HX_STACK_LINE(426)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(431)
	int a_primitive_index = a->primitive_type;		HX_STACK_VAR(a_primitive_index,"a_primitive_index");
	HX_STACK_LINE(432)
	int b_primitive_index = b->primitive_type;		HX_STACK_VAR(b_primitive_index,"b_primitive_index");
	HX_STACK_LINE(434)
	bool tmp7 = (a_primitive_index < b_primitive_index);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(434)
	if ((tmp7)){
		HX_STACK_LINE(435)
		return (int)-1;
	}
	HX_STACK_LINE(436)
	bool tmp8 = (a_primitive_index > b_primitive_index);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(436)
	if ((tmp8)){
		HX_STACK_LINE(437)
		return (int)1;
	}
	HX_STACK_LINE(440)
	bool tmp9 = (a->clip != b->clip);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(440)
	if ((tmp9)){
		HX_STACK_LINE(442)
		bool tmp10 = (a->clip == false);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(442)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(442)
		if ((tmp10)){
			HX_STACK_LINE(442)
			tmp11 = (b->clip == true);
		}
		else{
			HX_STACK_LINE(442)
			tmp11 = false;
		}
		HX_STACK_LINE(442)
		if ((tmp11)){
			HX_STACK_LINE(443)
			return (int)1;
		}
		else{
			HX_STACK_LINE(446)
			bool tmp12 = (a->clip == true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(446)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(446)
			if ((tmp12)){
				HX_STACK_LINE(446)
				tmp13 = (b->clip == false);
			}
			else{
				HX_STACK_LINE(446)
				tmp13 = false;
			}
			HX_STACK_LINE(446)
			if ((tmp13)){
				HX_STACK_LINE(447)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(455)
	bool tmp10 = (a->timestamp < b->timestamp);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(455)
	if ((tmp10)){
		HX_STACK_LINE(456)
		return (int)-1;
	}
	HX_STACK_LINE(457)
	bool tmp11 = (a->timestamp >= b->timestamp);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(457)
	if ((tmp11)){
		HX_STACK_LINE(458)
		return (int)1;
	}
	HX_STACK_LINE(459)
	bool tmp12 = (a->sequence < b->sequence);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(459)
	if ((tmp12)){
		HX_STACK_LINE(460)
		return (int)-1;
	}
	HX_STACK_LINE(461)
	bool tmp13 = (a->sequence > b->sequence);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(461)
	if ((tmp13)){
		HX_STACK_LINE(462)
		return (int)1;
	}
	HX_STACK_LINE(465)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,geometry_compare,return )

Void Batcher_obj::list_geometry( ){
{
		HX_STACK_FRAME("phoenix.Batcher","list_geometry",0x542e65ad,"phoenix.Batcher.list_geometry","phoenix/Batcher.hx",469,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_LINE(470)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(470)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(470)
		for(::cpp::FastIterator_obj< ::phoenix::geometry::Geometry > *__it = ::cpp::CreateFastIterator< ::phoenix::geometry::Geometry >(tmp1);  __it->hasNext(); ){
			::phoenix::geometry::Geometry geom = __it->next();
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,list_geometry,(void))

Void Batcher_obj::add( ::phoenix::geometry::Geometry _geom,hx::Null< bool >  __o__force_add){
bool _force_add = __o__force_add.Default(false);
	HX_STACK_FRAME("phoenix.Batcher","add",0x3e78e95b,"phoenix.Batcher.add","phoenix/Batcher.hx",476,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_geom,"_geom")
	HX_STACK_ARG(_force_add,"_force_add")
{
		HX_STACK_LINE(482)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(482)
		::phoenix::geometry::GeometryKey tmp1 = _geom->key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(482)
		::phoenix::geometry::Geometry tmp2 = tmp->find(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(482)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(482)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(482)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(482)
		if ((tmp4)){
			HX_STACK_LINE(482)
			tmp5 = _force_add;
		}
		else{
			HX_STACK_LINE(482)
			tmp5 = true;
		}
		HX_STACK_LINE(482)
		if ((tmp5)){
			HX_STACK_LINE(485)
			bool tmp6 = ::Lambda_obj::has(_geom->batchers,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(485)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(485)
			if ((tmp7)){
				HX_STACK_LINE(486)
				_geom->batchers->push(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(490)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = this->geometry;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(490)
			::phoenix::geometry::GeometryKey tmp9 = _geom->key;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(490)
			::phoenix::geometry::Geometry tmp10 = _geom;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(490)
			tmp8->insert(tmp9,tmp10);
			HX_STACK_LINE(493)
			_geom->added = true;
			HX_STACK_LINE(496)
			this->tree_changed = true;
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,add,(void))

Void Batcher_obj::empty( hx::Null< bool >  __o__drop){
bool _drop = __o__drop.Default(true);
	HX_STACK_FRAME("phoenix.Batcher","empty",0xd120f447,"phoenix.Batcher.empty","phoenix/Batcher.hx",508,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_drop,"_drop")
{
		HX_STACK_LINE(510)
		bool tmp = _drop;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(510)
		if ((tmp)){
			HX_STACK_LINE(511)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->geometry;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(511)
			Dynamic tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(511)
			for(::cpp::FastIterator_obj< ::phoenix::geometry::Geometry > *__it = ::cpp::CreateFastIterator< ::phoenix::geometry::Geometry >(tmp2);  __it->hasNext(); ){
				::phoenix::geometry::Geometry geom = __it->next();
				{
					HX_STACK_LINE(512)
					geom->drop(true);
					HX_STACK_LINE(513)
					geom = null();
				}
;
			}
		}
		else{
			HX_STACK_LINE(516)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->geometry;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(516)
			Dynamic tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(516)
			for(::cpp::FastIterator_obj< ::phoenix::geometry::Geometry > *__it = ::cpp::CreateFastIterator< ::phoenix::geometry::Geometry >(tmp2);  __it->hasNext(); ){
				::phoenix::geometry::Geometry geom = __it->next();
				{
					HX_STACK_LINE(517)
					::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(517)
					::phoenix::geometry::GeometryKey tmp4 = geom->key;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(517)
					tmp3->remove(tmp4);
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,empty,(void))

Void Batcher_obj::remove( ::phoenix::geometry::Geometry _geom,Dynamic __o__remove_batcher_from_geometry){
Dynamic _remove_batcher_from_geometry = __o__remove_batcher_from_geometry.Default(true);
	HX_STACK_FRAME("phoenix.Batcher","remove",0xc124654a,"phoenix.Batcher.remove","phoenix/Batcher.hx",523,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_geom,"_geom")
	HX_STACK_ARG(_remove_batcher_from_geometry,"_remove_batcher_from_geometry")
{
		HX_STACK_LINE(525)
		Dynamic tmp = _remove_batcher_from_geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(525)
		if ((tmp)){
			HX_STACK_LINE(526)
			_geom->batchers->remove(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(527)
			int tmp1 = _geom->batchers->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(527)
			bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(527)
			if ((tmp2)){
				HX_STACK_LINE(528)
				_geom->added = false;
			}
		}
		HX_STACK_LINE(532)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->geometry;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(532)
		int tmp2 = tmp1->size();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(532)
		int countbefore = tmp2;		HX_STACK_VAR(countbefore,"countbefore");
		HX_STACK_LINE(534)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(534)
		::phoenix::geometry::GeometryKey tmp4 = _geom->key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(534)
		tmp3->remove(tmp4);
		HX_STACK_LINE(536)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = this->geometry;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(536)
		int tmp6 = tmp5->size();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(536)
		int countafter = tmp6;		HX_STACK_VAR(countafter,"countafter");
		HX_STACK_LINE(538)
		bool tmp7 = (countbefore == countafter);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(538)
		if ((tmp7)){
		}
		HX_STACK_LINE(543)
		this->tree_changed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,remove,(void))

Void Batcher_obj::shader_activate( ::phoenix::Shader _shader){
{
		HX_STACK_FRAME("phoenix.Batcher","shader_activate",0x1836ad87,"phoenix.Batcher.shader_activate","phoenix/Batcher.hx",547,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_shader,"_shader")
		HX_STACK_LINE(550)
		_shader->activate();
		HX_STACK_LINE(553)
		this->projectionmatrix_attribute = _shader->projectionmatrix_attribute;
		HX_STACK_LINE(554)
		this->modelviewmatrix_attribute = _shader->modelviewmatrix_attribute;
		HX_STACK_LINE(557)
		this->tex0_attribute = _shader->tex0_attribute;
		HX_STACK_LINE(558)
		this->tex1_attribute = _shader->tex1_attribute;
		HX_STACK_LINE(559)
		this->tex2_attribute = _shader->tex2_attribute;
		HX_STACK_LINE(560)
		this->tex3_attribute = _shader->tex3_attribute;
		HX_STACK_LINE(561)
		this->tex4_attribute = _shader->tex4_attribute;
		HX_STACK_LINE(562)
		this->tex5_attribute = _shader->tex5_attribute;
		HX_STACK_LINE(563)
		this->tex6_attribute = _shader->tex6_attribute;
		HX_STACK_LINE(564)
		this->tex7_attribute = _shader->tex7_attribute;
		HX_STACK_LINE(567)
		_shader->apply_uniforms();
		HX_STACK_LINE(570)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(570)
		tmp->state->activeTexture((int)33984);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,shader_activate,(void))

Void Batcher_obj::batch( hx::Null< bool >  __o_persist_immediate){
bool persist_immediate = __o_persist_immediate.Default(false);
	HX_STACK_FRAME("phoenix.Batcher","batch",0x0f01a174,"phoenix.Batcher.batch","phoenix/Batcher.hx",578,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(persist_immediate,"persist_immediate")
{
		HX_STACK_LINE(581)
		this->dynamic_batched_count = (int)0;
		HX_STACK_LINE(582)
		this->static_batched_count = (int)0;
		HX_STACK_LINE(583)
		this->visible_count = (int)0;
		HX_STACK_LINE(585)
		this->vert_floats = (int)0;
		HX_STACK_LINE(586)
		this->tcoord_floats = (int)0;
		HX_STACK_LINE(587)
		this->color_floats = (int)0;
		HX_STACK_LINE(588)
		this->normal_floats = (int)0;
		HX_STACK_LINE(591)
		::phoenix::BatchState tmp = ::phoenix::BatchState_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(591)
		this->state = tmp;
		HX_STACK_LINE(593)
		::phoenix::geometry::Geometry geom = null();		HX_STACK_VAR(geom,"geom");
		HX_STACK_LINE(596)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->geometry;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(596)
		Dynamic tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(596)
		for(::cpp::FastIterator_obj< ::phoenix::geometry::Geometry > *__it = ::cpp::CreateFastIterator< ::phoenix::geometry::Geometry >(tmp2);  __it->hasNext(); ){
			::phoenix::geometry::Geometry _geom = __it->next();
			{
				HX_STACK_LINE(599)
				geom = _geom;
				HX_STACK_LINE(602)
				bool tmp3 = (geom != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(602)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(602)
				if ((tmp3)){
					HX_STACK_LINE(602)
					bool tmp5 = geom->dropped;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(602)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(602)
					tmp4 = !(tmp6);
				}
				else{
					HX_STACK_LINE(602)
					tmp4 = false;
				}
				HX_STACK_LINE(602)
				if ((tmp4)){
					HX_STACK_LINE(605)
					::phoenix::BatchState tmp5 = this->state;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(605)
					::phoenix::geometry::Geometry tmp6 = geom;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(605)
					bool tmp7 = tmp5->update(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(605)
					if ((tmp7)){
						HX_STACK_LINE(609)
						int tmp8 = this->vert_floats;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(609)
						bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(609)
						if ((tmp9)){
							HX_STACK_LINE(610)
							::phoenix::BatchState tmp10 = this->state;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(610)
							int tmp11 = tmp10->last_geom_state->primitive_type;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(610)
							this->submit_current_vertex_list(tmp11);
						}
					}
					HX_STACK_LINE(616)
					{
						HX_STACK_LINE(616)
						::phoenix::BatchState tmp8 = this->state;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(616)
						::phoenix::BatchState _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(616)
						bool tmp9 = _this->geom_state->dirty;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(616)
						if ((tmp9)){
							HX_STACK_LINE(616)
							::phoenix::Texture tmp10 = _this->geom_state->texture;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(616)
							bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(616)
							if ((tmp11)){
								HX_STACK_LINE(616)
								Dynamic tmp12 = _this->last_texture_id;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(616)
								::phoenix::Texture tmp13 = _this->geom_state->texture;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(616)
								::String tmp14 = tmp13->id;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(616)
								bool tmp15 = (tmp12 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(616)
								if ((tmp15)){
									HX_STACK_LINE(616)
									::phoenix::Texture tmp16 = _this->geom_state->texture;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(616)
									_this->last_texture_id = tmp16->id;
									HX_STACK_LINE(616)
									::phoenix::Texture tmp17 = _this->geom_state->texture;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(616)
									::snow::modules::opengl::native::GLTO tmp18 = tmp17->texture;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(616)
									bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(616)
									if ((tmp19)){
										HX_STACK_LINE(616)
										::phoenix::Texture tmp20 = _this->geom_state->texture;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(616)
										tmp20->bind();
									}
								}
							}
							else{
								HX_STACK_LINE(616)
								::phoenix::Renderer tmp12 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(616)
								tmp12->state->bindTexture2D(null());
								HX_STACK_LINE(616)
								_this->last_texture_id = null();
							}
							HX_STACK_LINE(616)
							::phoenix::Shader tmp12 = _this->geom_state->shader;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(616)
							bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(616)
							if ((tmp13)){
								HX_STACK_LINE(616)
								::snow::modules::opengl::native::GLPO tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(616)
								{
									HX_STACK_LINE(616)
									Dynamic tmp15 = _this->last_shader_id;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(616)
									int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(616)
									int _id = tmp16;		HX_STACK_VAR(_id,"_id");
									HX_STACK_LINE(616)
									::snow::modules::opengl::native::GLPO tmp17 = ::snow::modules::opengl::native::GLPO_obj::__new(_id);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(616)
									tmp14 = tmp17;
								}
								HX_STACK_LINE(616)
								::phoenix::Shader tmp15 = _this->geom_state->shader;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(616)
								::snow::modules::opengl::native::GLPO tmp16 = tmp15->program;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(616)
								bool tmp17 = (tmp14 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(616)
								if ((tmp17)){
									HX_STACK_LINE(616)
									::phoenix::Shader tmp18 = _this->geom_state->shader;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(616)
									this->shader_activate(tmp18);
									HX_STACK_LINE(616)
									::phoenix::Shader tmp19 = _this->geom_state->shader;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(616)
									_this->last_shader_id = tmp19->program;
								}
							}
							else{
								HX_STACK_LINE(616)
								::phoenix::Texture tmp14 = _this->geom_state->texture;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(616)
								bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(616)
								if ((tmp15)){
									HX_STACK_LINE(616)
									::phoenix::Renderer tmp16 = this->renderer;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(616)
									Dynamic tmp17 = tmp16->shaders->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(616)
									::phoenix::Shader tmp18 = tmp17->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(616)
									this->shader_activate(tmp18);
									HX_STACK_LINE(616)
									::phoenix::Renderer tmp19 = this->renderer;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(616)
									Dynamic tmp20 = tmp19->shaders->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(616)
									::snow::modules::opengl::native::GLPO tmp21 = tmp20->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic )->__Field(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(616)
									_this->last_shader_id = tmp21;
								}
								else{
									HX_STACK_LINE(616)
									::phoenix::Renderer tmp16 = this->renderer;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(616)
									Dynamic tmp17 = tmp16->shaders->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(616)
									::phoenix::Shader tmp18 = tmp17->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(616)
									this->shader_activate(tmp18);
									HX_STACK_LINE(616)
									::phoenix::Renderer tmp19 = this->renderer;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(616)
									Dynamic tmp20 = tmp19->shaders->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(616)
									::snow::modules::opengl::native::GLPO tmp21 = tmp20->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic )->__Field(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(616)
									_this->last_shader_id = tmp21;
								}
							}
							HX_STACK_LINE(616)
							int tmp14 = _this->geom_state->group;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(616)
							int tmp15 = _this->last_group;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(616)
							bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(616)
							if ((tmp16)){
								HX_STACK_LINE(616)
								::haxe::ds::IntMap tmp17 = this->groups;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(616)
								int tmp18 = _this->last_group;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(616)
								Array< ::Dynamic > previous = ((Array< ::Dynamic >)(tmp17->get(tmp18)));		HX_STACK_VAR(previous,"previous");
								HX_STACK_LINE(616)
								bool tmp19 = (previous != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(616)
								if ((tmp19)){
									HX_STACK_LINE(616)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(616)
									while((true)){
										HX_STACK_LINE(616)
										bool tmp20 = (_g < previous->length);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(616)
										bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(616)
										if ((tmp21)){
											HX_STACK_LINE(616)
											break;
										}
										HX_STACK_LINE(616)
										::phoenix::BatchGroup tmp22 = previous->__get(_g).StaticCast< ::phoenix::BatchGroup >();		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(616)
										::phoenix::BatchGroup _batch_group = tmp22;		HX_STACK_VAR(_batch_group,"_batch_group");
										HX_STACK_LINE(616)
										++(_g);
										HX_STACK_LINE(616)
										bool tmp23 = (_batch_group->post_render != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(616)
										if ((tmp23)){
											HX_STACK_LINE(616)
											_batch_group->post_render(hx::ObjectPtr<OBJ_>(this));
										}
									}
								}
								HX_STACK_LINE(616)
								::haxe::ds::IntMap tmp20 = this->groups;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(616)
								int tmp21 = _this->geom_state->group;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(616)
								Array< ::Dynamic > current = ((Array< ::Dynamic >)(tmp20->get(tmp21)));		HX_STACK_VAR(current,"current");
								HX_STACK_LINE(616)
								bool tmp22 = (current != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(616)
								if ((tmp22)){
									HX_STACK_LINE(616)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(616)
									while((true)){
										HX_STACK_LINE(616)
										bool tmp23 = (_g < current->length);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(616)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(616)
										if ((tmp24)){
											HX_STACK_LINE(616)
											break;
										}
										HX_STACK_LINE(616)
										::phoenix::BatchGroup tmp25 = current->__get(_g).StaticCast< ::phoenix::BatchGroup >();		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(616)
										::phoenix::BatchGroup _batch_group = tmp25;		HX_STACK_VAR(_batch_group,"_batch_group");
										HX_STACK_LINE(616)
										++(_g);
										HX_STACK_LINE(616)
										bool tmp26 = (_batch_group->pre_render != null());		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(616)
										if ((tmp26)){
											HX_STACK_LINE(616)
											_batch_group->pre_render(hx::ObjectPtr<OBJ_>(this));
										}
									}
								}
								HX_STACK_LINE(616)
								int tmp23 = _this->geom_state->group;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(616)
								_this->last_group = tmp23;
							}
						}
						HX_STACK_LINE(616)
						bool tmp10 = _this->geom_state->clip;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(616)
						if ((tmp10)){
							HX_STACK_LINE(616)
							bool tmp11 = _this->is_clipping;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(616)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(616)
							if ((tmp12)){
								HX_STACK_LINE(616)
								::snow::modules::opengl::native::GL_FFI_obj::snow_gl_enable((int)3089);
								HX_STACK_LINE(616)
								_this->is_clipping = true;
							}
							HX_STACK_LINE(616)
							bool tmp13 = (_this->clip_rect != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(616)
							if ((tmp13)){
								HX_STACK_LINE(616)
								::phoenix::Rectangle tmp14 = _this->last_clip_rect;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(616)
								bool tmp15 = _this->clip_rect->equal(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(616)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(616)
								if ((tmp16)){
									HX_STACK_LINE(616)
									::phoenix::Camera tmp17 = this->view;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(616)
									::phoenix::Rectangle tmp18 = tmp17->get_viewport();		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(616)
									Float tmp19 = tmp18->h;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(616)
									Float tmp20 = _this->clip_rect->y;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(616)
									Float tmp21 = _this->clip_rect->h;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(616)
									Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(616)
									Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(616)
									Float _y = tmp23;		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(616)
									{
										HX_STACK_LINE(616)
										Float tmp24 = _this->clip_rect->x;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(616)
										int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(616)
										int x = tmp25;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(616)
										Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(616)
										int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(616)
										int y = tmp27;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(616)
										Float tmp28 = _this->clip_rect->w;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(616)
										int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(616)
										int width = tmp29;		HX_STACK_VAR(width,"width");
										HX_STACK_LINE(616)
										Float tmp30 = _this->clip_rect->h;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(616)
										int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(616)
										int height = tmp31;		HX_STACK_VAR(height,"height");
										HX_STACK_LINE(616)
										int tmp32 = x;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(616)
										int tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(616)
										int tmp34 = width;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(616)
										int tmp35 = height;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(616)
										::snow::modules::opengl::native::GL_FFI_obj::snow_gl_scissor(tmp32,tmp33,tmp34,tmp35);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(616)
							bool tmp11 = _this->is_clipping;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(616)
							if ((tmp11)){
								HX_STACK_LINE(616)
								::snow::modules::opengl::native::GL_FFI_obj::snow_gl_disable((int)3089);
								HX_STACK_LINE(616)
								_this->is_clipping = false;
							}
						}
						HX_STACK_LINE(616)
						_this->geom_state->clean();
					}
					HX_STACK_LINE(618)
					bool tmp8 = geom->visible;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(618)
					if ((tmp8)){
						HX_STACK_LINE(620)
						(this->visible_count)++;
						HX_STACK_LINE(623)
						bool tmp9 = geom->get_locked();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(623)
						if ((tmp9)){
							HX_STACK_LINE(624)
							::phoenix::geometry::Geometry tmp10 = geom;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(624)
							this->submit_static_geometry(tmp10);
							HX_STACK_LINE(625)
							int tmp11 = geom->vertices->length;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(625)
							hx::AddEq(this->vert_count,tmp11);
						}
						else{
							HX_STACK_LINE(629)
							int tmp10 = geom->get_primitive_type();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(629)
							bool tmp11 = (tmp10 == (int)3);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(629)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(629)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(629)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(629)
							if ((tmp13)){
								HX_STACK_LINE(630)
								int tmp15 = geom->get_primitive_type();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(630)
								int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(630)
								int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(630)
								tmp14 = (tmp17 == (int)2);
							}
							else{
								HX_STACK_LINE(629)
								tmp14 = true;
							}
							HX_STACK_LINE(629)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(629)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(629)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(629)
							if ((tmp16)){
								HX_STACK_LINE(631)
								int tmp18 = geom->get_primitive_type();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(631)
								int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(631)
								int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(631)
								tmp17 = (tmp20 == (int)5);
							}
							else{
								HX_STACK_LINE(629)
								tmp17 = true;
							}
							HX_STACK_LINE(629)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(629)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(629)
							if ((tmp18)){
								HX_STACK_LINE(632)
								int tmp20 = geom->get_primitive_type();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(632)
								int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(632)
								tmp19 = (tmp21 == (int)6);
							}
							else{
								HX_STACK_LINE(629)
								tmp19 = true;
							}
							HX_STACK_LINE(629)
							if ((tmp19)){
								HX_STACK_LINE(636)
								::phoenix::geometry::Geometry tmp20 = geom;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(636)
								this->geometry_batch(tmp20);
								HX_STACK_LINE(638)
								int tmp21 = geom->get_primitive_type();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(638)
								this->submit_current_vertex_list(tmp21);
								HX_STACK_LINE(640)
								int tmp22 = geom->vertices->length;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(640)
								hx::AddEq(this->vert_count,tmp22);
							}
							else{
								HX_STACK_LINE(647)
								::phoenix::geometry::Geometry tmp20 = geom;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(647)
								this->geometry_batch(tmp20);
								HX_STACK_LINE(650)
								(this->dynamic_batched_count)++;
								HX_STACK_LINE(651)
								int tmp21 = geom->vertices->length;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(651)
								hx::AddEq(this->vert_count,tmp21);
							}
						}
						HX_STACK_LINE(658)
						bool tmp10 = persist_immediate;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(658)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(658)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(658)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(658)
						if ((tmp12)){
							HX_STACK_LINE(658)
							tmp13 = geom->immediate;
						}
						else{
							HX_STACK_LINE(658)
							tmp13 = false;
						}
						HX_STACK_LINE(658)
						if ((tmp13)){
							HX_STACK_LINE(659)
							geom->drop(null());
						}
					}
				}
				else{
				}
			}
;
		}
		HX_STACK_LINE(672)
		int tmp3 = this->vert_floats;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(672)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(672)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(672)
		if ((tmp4)){
			HX_STACK_LINE(672)
			tmp5 = (geom != null());
		}
		else{
			HX_STACK_LINE(672)
			tmp5 = false;
		}
		HX_STACK_LINE(672)
		if ((tmp5)){
			HX_STACK_LINE(675)
			::phoenix::BatchState tmp6 = this->state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(675)
			::phoenix::geometry::Geometry tmp7 = geom;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(675)
			tmp6->update(tmp7);
			HX_STACK_LINE(677)
			{
				HX_STACK_LINE(677)
				::phoenix::BatchState tmp8 = this->state;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(677)
				::phoenix::BatchState _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(677)
				bool tmp9 = _this->geom_state->dirty;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(677)
				if ((tmp9)){
					HX_STACK_LINE(677)
					::phoenix::Texture tmp10 = _this->geom_state->texture;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(677)
					bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(677)
					if ((tmp11)){
						HX_STACK_LINE(677)
						Dynamic tmp12 = _this->last_texture_id;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(677)
						::phoenix::Texture tmp13 = _this->geom_state->texture;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(677)
						::String tmp14 = tmp13->id;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(677)
						bool tmp15 = (tmp12 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(677)
						if ((tmp15)){
							HX_STACK_LINE(677)
							::phoenix::Texture tmp16 = _this->geom_state->texture;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(677)
							_this->last_texture_id = tmp16->id;
							HX_STACK_LINE(677)
							::phoenix::Texture tmp17 = _this->geom_state->texture;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(677)
							::snow::modules::opengl::native::GLTO tmp18 = tmp17->texture;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(677)
							bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(677)
							if ((tmp19)){
								HX_STACK_LINE(677)
								::phoenix::Texture tmp20 = _this->geom_state->texture;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(677)
								tmp20->bind();
							}
						}
					}
					else{
						HX_STACK_LINE(677)
						::phoenix::Renderer tmp12 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(677)
						tmp12->state->bindTexture2D(null());
						HX_STACK_LINE(677)
						_this->last_texture_id = null();
					}
					HX_STACK_LINE(677)
					::phoenix::Shader tmp12 = _this->geom_state->shader;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(677)
					bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(677)
					if ((tmp13)){
						HX_STACK_LINE(677)
						::snow::modules::opengl::native::GLPO tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(677)
						{
							HX_STACK_LINE(677)
							Dynamic tmp15 = _this->last_shader_id;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(677)
							int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(677)
							int _id = tmp16;		HX_STACK_VAR(_id,"_id");
							HX_STACK_LINE(677)
							::snow::modules::opengl::native::GLPO tmp17 = ::snow::modules::opengl::native::GLPO_obj::__new(_id);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(677)
							tmp14 = tmp17;
						}
						HX_STACK_LINE(677)
						::phoenix::Shader tmp15 = _this->geom_state->shader;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(677)
						::snow::modules::opengl::native::GLPO tmp16 = tmp15->program;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(677)
						bool tmp17 = (tmp14 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(677)
						if ((tmp17)){
							HX_STACK_LINE(677)
							::phoenix::Shader tmp18 = _this->geom_state->shader;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(677)
							this->shader_activate(tmp18);
							HX_STACK_LINE(677)
							::phoenix::Shader tmp19 = _this->geom_state->shader;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(677)
							_this->last_shader_id = tmp19->program;
						}
					}
					else{
						HX_STACK_LINE(677)
						::phoenix::Texture tmp14 = _this->geom_state->texture;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(677)
						bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(677)
						if ((tmp15)){
							HX_STACK_LINE(677)
							::phoenix::Renderer tmp16 = this->renderer;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(677)
							Dynamic tmp17 = tmp16->shaders->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(677)
							::phoenix::Shader tmp18 = tmp17->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(677)
							this->shader_activate(tmp18);
							HX_STACK_LINE(677)
							::phoenix::Renderer tmp19 = this->renderer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(677)
							Dynamic tmp20 = tmp19->shaders->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(677)
							::snow::modules::opengl::native::GLPO tmp21 = tmp20->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic )->__Field(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(677)
							_this->last_shader_id = tmp21;
						}
						else{
							HX_STACK_LINE(677)
							::phoenix::Renderer tmp16 = this->renderer;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(677)
							Dynamic tmp17 = tmp16->shaders->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(677)
							::phoenix::Shader tmp18 = tmp17->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(677)
							this->shader_activate(tmp18);
							HX_STACK_LINE(677)
							::phoenix::Renderer tmp19 = this->renderer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(677)
							Dynamic tmp20 = tmp19->shaders->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(677)
							::snow::modules::opengl::native::GLPO tmp21 = tmp20->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic )->__Field(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(677)
							_this->last_shader_id = tmp21;
						}
					}
					HX_STACK_LINE(677)
					int tmp14 = _this->geom_state->group;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(677)
					int tmp15 = _this->last_group;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(677)
					bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(677)
					if ((tmp16)){
						HX_STACK_LINE(677)
						::haxe::ds::IntMap tmp17 = this->groups;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(677)
						int tmp18 = _this->last_group;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(677)
						Array< ::Dynamic > previous = ((Array< ::Dynamic >)(tmp17->get(tmp18)));		HX_STACK_VAR(previous,"previous");
						HX_STACK_LINE(677)
						bool tmp19 = (previous != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(677)
						if ((tmp19)){
							HX_STACK_LINE(677)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(677)
							while((true)){
								HX_STACK_LINE(677)
								bool tmp20 = (_g < previous->length);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(677)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(677)
								if ((tmp21)){
									HX_STACK_LINE(677)
									break;
								}
								HX_STACK_LINE(677)
								::phoenix::BatchGroup tmp22 = previous->__get(_g).StaticCast< ::phoenix::BatchGroup >();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(677)
								::phoenix::BatchGroup _batch_group = tmp22;		HX_STACK_VAR(_batch_group,"_batch_group");
								HX_STACK_LINE(677)
								++(_g);
								HX_STACK_LINE(677)
								bool tmp23 = (_batch_group->post_render != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(677)
								if ((tmp23)){
									HX_STACK_LINE(677)
									_batch_group->post_render(hx::ObjectPtr<OBJ_>(this));
								}
							}
						}
						HX_STACK_LINE(677)
						::haxe::ds::IntMap tmp20 = this->groups;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(677)
						int tmp21 = _this->geom_state->group;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(677)
						Array< ::Dynamic > current = ((Array< ::Dynamic >)(tmp20->get(tmp21)));		HX_STACK_VAR(current,"current");
						HX_STACK_LINE(677)
						bool tmp22 = (current != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(677)
						if ((tmp22)){
							HX_STACK_LINE(677)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(677)
							while((true)){
								HX_STACK_LINE(677)
								bool tmp23 = (_g < current->length);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(677)
								bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(677)
								if ((tmp24)){
									HX_STACK_LINE(677)
									break;
								}
								HX_STACK_LINE(677)
								::phoenix::BatchGroup tmp25 = current->__get(_g).StaticCast< ::phoenix::BatchGroup >();		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(677)
								::phoenix::BatchGroup _batch_group = tmp25;		HX_STACK_VAR(_batch_group,"_batch_group");
								HX_STACK_LINE(677)
								++(_g);
								HX_STACK_LINE(677)
								bool tmp26 = (_batch_group->pre_render != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(677)
								if ((tmp26)){
									HX_STACK_LINE(677)
									_batch_group->pre_render(hx::ObjectPtr<OBJ_>(this));
								}
							}
						}
						HX_STACK_LINE(677)
						int tmp23 = _this->geom_state->group;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(677)
						_this->last_group = tmp23;
					}
				}
				HX_STACK_LINE(677)
				bool tmp10 = _this->geom_state->clip;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(677)
				if ((tmp10)){
					HX_STACK_LINE(677)
					bool tmp11 = _this->is_clipping;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(677)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(677)
					if ((tmp12)){
						HX_STACK_LINE(677)
						::snow::modules::opengl::native::GL_FFI_obj::snow_gl_enable((int)3089);
						HX_STACK_LINE(677)
						_this->is_clipping = true;
					}
					HX_STACK_LINE(677)
					bool tmp13 = (_this->clip_rect != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(677)
					if ((tmp13)){
						HX_STACK_LINE(677)
						::phoenix::Rectangle tmp14 = _this->last_clip_rect;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(677)
						bool tmp15 = _this->clip_rect->equal(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(677)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(677)
						if ((tmp16)){
							HX_STACK_LINE(677)
							::phoenix::Camera tmp17 = this->view;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(677)
							::phoenix::Rectangle tmp18 = tmp17->get_viewport();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(677)
							Float tmp19 = tmp18->h;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(677)
							Float tmp20 = _this->clip_rect->y;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(677)
							Float tmp21 = _this->clip_rect->h;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(677)
							Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(677)
							Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(677)
							Float _y = tmp23;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(677)
							{
								HX_STACK_LINE(677)
								Float tmp24 = _this->clip_rect->x;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(677)
								int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(677)
								int x = tmp25;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(677)
								Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(677)
								int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(677)
								int y = tmp27;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(677)
								Float tmp28 = _this->clip_rect->w;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(677)
								int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(677)
								int width = tmp29;		HX_STACK_VAR(width,"width");
								HX_STACK_LINE(677)
								Float tmp30 = _this->clip_rect->h;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(677)
								int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(677)
								int height = tmp31;		HX_STACK_VAR(height,"height");
								HX_STACK_LINE(677)
								int tmp32 = x;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(677)
								int tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(677)
								int tmp34 = width;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(677)
								int tmp35 = height;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(677)
								::snow::modules::opengl::native::GL_FFI_obj::snow_gl_scissor(tmp32,tmp33,tmp34,tmp35);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(677)
					bool tmp11 = _this->is_clipping;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(677)
					if ((tmp11)){
						HX_STACK_LINE(677)
						::snow::modules::opengl::native::GL_FFI_obj::snow_gl_disable((int)3089);
						HX_STACK_LINE(677)
						_this->is_clipping = false;
					}
				}
				HX_STACK_LINE(677)
				_this->geom_state->clean();
			}
			HX_STACK_LINE(679)
			::phoenix::BatchState tmp8 = this->state;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(679)
			int tmp9 = tmp8->last_geom_state->primitive_type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(679)
			this->submit_current_vertex_list(tmp9);
		}
		HX_STACK_LINE(684)
		::phoenix::BatchState tmp6 = this->state;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(684)
		tmp6->deactivate(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(686)
		this->state = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,batch,(void))

Void Batcher_obj::draw( Dynamic __o_persist_immediate){
Dynamic persist_immediate = __o_persist_immediate.Default(false);
	HX_STACK_FRAME("phoenix.Batcher","draw",0x6d59878a,"phoenix.Batcher.draw","phoenix/Batcher.hx",690,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(persist_immediate,"persist_immediate")
{
		HX_STACK_LINE(693)
		this->draw_calls = (int)0;
		HX_STACK_LINE(694)
		this->vert_count = (int)0;
		HX_STACK_LINE(697)
		::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(697)
		tmp->process();
		HX_STACK_LINE(702)
		::phoenix::Renderer tmp1 = this->renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(702)
		::phoenix::Camera tmp2 = this->view;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(702)
		::phoenix::Rectangle tmp3 = tmp2->get_viewport();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(702)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(702)
		::phoenix::Camera tmp5 = this->view;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(702)
		::phoenix::Rectangle tmp6 = tmp5->get_viewport();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(702)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(702)
		::phoenix::Camera tmp8 = this->view;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(702)
		::phoenix::Rectangle tmp9 = tmp8->get_viewport();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(702)
		Float tmp10 = tmp9->w;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(702)
		::phoenix::Camera tmp11 = this->view;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(702)
		::phoenix::Rectangle tmp12 = tmp11->get_viewport();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(702)
		Float tmp13 = tmp12->h;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(702)
		tmp1->state->viewport(tmp4,tmp7,tmp10,tmp13);
		HX_STACK_LINE(705)
		Dynamic tmp14 = persist_immediate;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(705)
		this->batch(tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,draw,(void))

Void Batcher_obj::submit_static_geometry( ::phoenix::geometry::Geometry geom){
{
		HX_STACK_FRAME("phoenix.Batcher","submit_static_geometry",0x9aab1742,"phoenix.Batcher.submit_static_geometry","phoenix/Batcher.hx",709,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(geom,"geom")
		HX_STACK_LINE(712)
		int tmp = geom->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(712)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(712)
		if ((tmp1)){
			HX_STACK_LINE(713)
			return null();
		}
		HX_STACK_LINE(717)
		this->static_vert_floats = (int)0;
		HX_STACK_LINE(717)
		this->static_tcoord_floats = (int)0;
		HX_STACK_LINE(717)
		this->static_color_floats = (int)0;
		HX_STACK_LINE(720)
		bool tmp2 = geom->submitted;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(720)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(720)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(720)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(720)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(720)
		if ((tmp5)){
			HX_STACK_LINE(720)
			tmp6 = geom->get_dirty();
		}
		else{
			HX_STACK_LINE(720)
			tmp6 = true;
		}
		HX_STACK_LINE(720)
		if ((tmp6)){
			HX_STACK_LINE(723)
			::phoenix::geometry::Geometry tmp7 = geom;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(723)
			this->geometry_batch_static(tmp7);
		}
		else{
			HX_STACK_LINE(727)
			int tmp7 = geom->vertices->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(727)
			int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(727)
			this->static_vert_floats = tmp8;
			HX_STACK_LINE(728)
			int tmp9 = geom->vertices->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(728)
			int tmp10 = (tmp9 * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(728)
			this->static_tcoord_floats = tmp10;
			HX_STACK_LINE(729)
			int tmp11 = geom->vertices->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(729)
			int tmp12 = (tmp11 * (int)4);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(729)
			this->static_color_floats = tmp12;
		}
		HX_STACK_LINE(735)
		bool tmp7 = (geom->static_vertex_buffer == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(735)
		if ((tmp7)){
			HX_STACK_LINE(736)
			::snow::modules::opengl::native::GLBO tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(736)
			{
				HX_STACK_LINE(736)
				int tmp9 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(736)
				int _id = tmp9;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(736)
				::snow::modules::opengl::native::GLBO tmp10 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(736)
				tmp8 = tmp10;
			}
			HX_STACK_LINE(736)
			geom->static_vertex_buffer = tmp8;
			HX_STACK_LINE(737)
			::snow::modules::opengl::native::GLBO tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(737)
			{
				HX_STACK_LINE(737)
				int tmp10 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(737)
				int _id = tmp10;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(737)
				::snow::modules::opengl::native::GLBO tmp11 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(737)
				tmp9 = tmp11;
			}
			HX_STACK_LINE(737)
			geom->static_tcoord_buffer = tmp9;
			HX_STACK_LINE(738)
			::snow::modules::opengl::native::GLBO tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(738)
			{
				HX_STACK_LINE(738)
				int tmp11 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(738)
				int _id = tmp11;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(738)
				::snow::modules::opengl::native::GLBO tmp12 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(738)
				tmp10 = tmp12;
			}
			HX_STACK_LINE(738)
			geom->static_vcolor_buffer = tmp10;
		}
		HX_STACK_LINE(743)
		this->_enable_attributes();
		HX_STACK_LINE(746)
		{
			HX_STACK_LINE(746)
			::snow::modules::opengl::native::GLBO buffer = geom->static_vertex_buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(746)
			bool tmp8 = (buffer == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(746)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(746)
			if ((tmp8)){
				HX_STACK_LINE(746)
				tmp9 = (int)0;
			}
			else{
				HX_STACK_LINE(746)
				tmp9 = buffer->id;
			}
			HX_STACK_LINE(746)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp9);
		}
		HX_STACK_LINE(747)
		{
			HX_STACK_LINE(747)
			int tmp8 = this->vert_attribute;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(747)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer(tmp8,(int)4,(int)5126,false,(int)0,(int)0);
		}
		HX_STACK_LINE(749)
		bool tmp8 = geom->submitted;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(749)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(749)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(749)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(749)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(749)
		if ((tmp11)){
			HX_STACK_LINE(749)
			tmp12 = geom->get_dirty();
		}
		else{
			HX_STACK_LINE(749)
			tmp12 = true;
		}
		HX_STACK_LINE(749)
		if ((tmp12)){
			HX_STACK_LINE(750)
			::snow::api::buffers::ArrayBufferView tmp13 = this->static_vertlist;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(750)
			::snow::api::buffers::ArrayBufferView data = tmp13;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(750)
			bool tmp14 = (data != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(750)
			if ((tmp14)){
				HX_STACK_LINE(750)
				int tmp15 = data->byteOffset;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(750)
				int tmp16 = data->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(750)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp15,tmp16,(int)35044);
			}
			else{
				HX_STACK_LINE(750)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,(int)35044);
			}
		}
		HX_STACK_LINE(754)
		{
			HX_STACK_LINE(754)
			::snow::modules::opengl::native::GLBO buffer = geom->static_tcoord_buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(754)
			bool tmp13 = (buffer == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(754)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(754)
			if ((tmp13)){
				HX_STACK_LINE(754)
				tmp14 = (int)0;
			}
			else{
				HX_STACK_LINE(754)
				tmp14 = buffer->id;
			}
			HX_STACK_LINE(754)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp14);
		}
		HX_STACK_LINE(755)
		{
			HX_STACK_LINE(755)
			int tmp13 = this->tcoord_attribute;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(755)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer(tmp13,(int)4,(int)5126,false,(int)0,(int)0);
		}
		HX_STACK_LINE(757)
		bool tmp13 = geom->submitted;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(757)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(757)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(757)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(757)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(757)
		if ((tmp16)){
			HX_STACK_LINE(757)
			tmp17 = geom->get_dirty();
		}
		else{
			HX_STACK_LINE(757)
			tmp17 = true;
		}
		HX_STACK_LINE(757)
		if ((tmp17)){
			HX_STACK_LINE(758)
			::snow::api::buffers::ArrayBufferView tmp18 = this->static_tcoordlist;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(758)
			::snow::api::buffers::ArrayBufferView data = tmp18;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(758)
			bool tmp19 = (data != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(758)
			if ((tmp19)){
				HX_STACK_LINE(758)
				int tmp20 = data->byteOffset;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(758)
				int tmp21 = data->byteLength;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(758)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp20,tmp21,(int)35044);
			}
			else{
				HX_STACK_LINE(758)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,(int)35044);
			}
		}
		HX_STACK_LINE(762)
		{
			HX_STACK_LINE(762)
			::snow::modules::opengl::native::GLBO buffer = geom->static_vcolor_buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(762)
			bool tmp18 = (buffer == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(762)
			int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(762)
			if ((tmp18)){
				HX_STACK_LINE(762)
				tmp19 = (int)0;
			}
			else{
				HX_STACK_LINE(762)
				tmp19 = buffer->id;
			}
			HX_STACK_LINE(762)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp19);
		}
		HX_STACK_LINE(763)
		{
			HX_STACK_LINE(763)
			int tmp18 = this->color_attribute;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(763)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer(tmp18,(int)4,(int)5126,false,(int)0,(int)0);
		}
		HX_STACK_LINE(765)
		bool tmp18 = geom->submitted;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(765)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(765)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(765)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(765)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(765)
		if ((tmp21)){
			HX_STACK_LINE(765)
			tmp22 = geom->get_dirty();
		}
		else{
			HX_STACK_LINE(765)
			tmp22 = true;
		}
		HX_STACK_LINE(765)
		if ((tmp22)){
			HX_STACK_LINE(766)
			::snow::api::buffers::ArrayBufferView tmp23 = this->static_colorlist;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(766)
			::snow::api::buffers::ArrayBufferView data = tmp23;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(766)
			bool tmp24 = (data != null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(766)
			if ((tmp24)){
				HX_STACK_LINE(766)
				int tmp25 = data->byteOffset;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(766)
				int tmp26 = data->byteLength;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(766)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp25,tmp26,(int)35044);
			}
			else{
				HX_STACK_LINE(766)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,(int)35044);
			}
		}
		HX_STACK_LINE(778)
		{
			HX_STACK_LINE(779)
			int tmp23 = geom->get_primitive_type();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(779)
			int mode = tmp23;		HX_STACK_VAR(mode,"mode");
			HX_STACK_LINE(780)
			int tmp24 = geom->get_primitive_type();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(780)
			int tmp25 = this->static_vert_floats;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(780)
			int tmp26 = ::phoenix::utils::Rendering_obj::get_elements_for_type(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(780)
			int count = tmp26;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(778)
			int tmp27 = mode;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(778)
			int tmp28 = count;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(778)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_draw_arrays(tmp27,(int)0,tmp28);
		}
		HX_STACK_LINE(784)
		this->_disable_attributes();
		HX_STACK_LINE(786)
		(this->draw_calls)++;
		HX_STACK_LINE(787)
		(this->static_batched_count)++;
		HX_STACK_LINE(790)
		this->static_vert_floats = (int)0;
		HX_STACK_LINE(791)
		this->static_tcoord_floats = (int)0;
		HX_STACK_LINE(792)
		this->static_color_floats = (int)0;
		HX_STACK_LINE(796)
		geom->set_dirty(false);
		HX_STACK_LINE(797)
		geom->submitted = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,submit_static_geometry,(void))

Void Batcher_obj::submit_current_vertex_list( int type){
{
		HX_STACK_FRAME("phoenix.Batcher","submit_current_vertex_list",0x67dd8932,"phoenix.Batcher.submit_current_vertex_list","phoenix/Batcher.hx",802,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(804)
		int tmp = this->vert_floats;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(804)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(804)
		if ((tmp1)){
			HX_STACK_LINE(806)
			return null();
		}
		HX_STACK_LINE(809)
		int tmp2 = this->vert_floats;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(809)
		int tmp3 = this->max_floats;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(809)
		bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(809)
		if ((tmp4)){
			HX_STACK_LINE(810)
			HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$vert_floats).","\xa3","\xdf","\xbe","\x57"));
		}
		HX_STACK_LINE(814)
		this->_enable_attributes();
		HX_STACK_LINE(816)
		{
			HX_STACK_LINE(816)
			int tmp5 = this->buffer_index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(816)
			::snow::modules::opengl::native::GLBO tmp6 = this->vertexBuffers->__get(tmp5).StaticCast< ::snow::modules::opengl::native::GLBO >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(816)
			::snow::modules::opengl::native::GLBO buffer = tmp6;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(816)
			bool tmp7 = (buffer == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(816)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(816)
			if ((tmp7)){
				HX_STACK_LINE(816)
				tmp8 = (int)0;
			}
			else{
				HX_STACK_LINE(816)
				tmp8 = buffer->id;
			}
			HX_STACK_LINE(816)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp8);
		}
		HX_STACK_LINE(817)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)0,(int)4,(int)5126,false,(int)0,(int)0);
		HX_STACK_LINE(818)
		{
			HX_STACK_LINE(818)
			::snow::api::buffers::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(818)
			{
				HX_STACK_LINE(818)
				::snow::api::buffers::ArrayBufferView tmp6 = this->vertlist;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(818)
				::haxe::io::Bytes buffer = tmp6->buffer;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(818)
				int tmp7 = this->vert_floats;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(818)
				Dynamic len = tmp7;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(818)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(818)
				bool tmp8 = (buffer != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(818)
				if ((tmp8)){
					HX_STACK_LINE(818)
					::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(818)
					{
						HX_STACK_LINE(818)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(818)
						::snow::api::buffers::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(818)
						int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(818)
						bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(818)
						if ((tmp12)){
							HX_STACK_LINE(818)
							HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
						}
						HX_STACK_LINE(818)
						int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
						HX_STACK_LINE(818)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(818)
						int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
						HX_STACK_LINE(818)
						bool tmp13 = (len == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(818)
						if ((tmp13)){
							HX_STACK_LINE(818)
							newByteLength = bufferByteLength;
							HX_STACK_LINE(818)
							int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(818)
							bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(818)
							if ((tmp15)){
								HX_STACK_LINE(818)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(818)
							bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(818)
							if ((tmp16)){
								HX_STACK_LINE(818)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
						}
						else{
							HX_STACK_LINE(818)
							int tmp14 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(818)
							newByteLength = tmp14;
							HX_STACK_LINE(818)
							int newRange = newByteLength;		HX_STACK_VAR(newRange,"newRange");
							HX_STACK_LINE(818)
							bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(818)
							if ((tmp15)){
								HX_STACK_LINE(818)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
						}
						HX_STACK_LINE(818)
						_this->buffer = buffer;
						HX_STACK_LINE(818)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(818)
						_this->byteLength = newByteLength;
						HX_STACK_LINE(818)
						Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(818)
						int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(818)
						_this->length = tmp15;
						HX_STACK_LINE(818)
						tmp9 = _this;
					}
					HX_STACK_LINE(818)
					this1 = tmp9;
				}
				else{
					HX_STACK_LINE(818)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
				}
				HX_STACK_LINE(818)
				tmp5 = this1;
			}
			HX_STACK_LINE(818)
			::snow::api::buffers::ArrayBufferView data = tmp5;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(818)
			bool tmp6 = (data != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(818)
			if ((tmp6)){
				HX_STACK_LINE(818)
				int tmp7 = data->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(818)
				int tmp8 = data->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(818)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_sub_data((int)34962,(int)0,data->buffer->b,tmp7,tmp8);
			}
			else{
				HX_STACK_LINE(818)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_sub_data((int)34962,(int)0,null(),(int)0,(int)0);
			}
		}
		HX_STACK_LINE(820)
		{
			HX_STACK_LINE(820)
			int tmp5 = this->buffer_index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(820)
			::snow::modules::opengl::native::GLBO tmp6 = this->tcoordBuffers->__get(tmp5).StaticCast< ::snow::modules::opengl::native::GLBO >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(820)
			::snow::modules::opengl::native::GLBO buffer = tmp6;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(820)
			bool tmp7 = (buffer == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(820)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(820)
			if ((tmp7)){
				HX_STACK_LINE(820)
				tmp8 = (int)0;
			}
			else{
				HX_STACK_LINE(820)
				tmp8 = buffer->id;
			}
			HX_STACK_LINE(820)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp8);
		}
		HX_STACK_LINE(821)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)1,(int)4,(int)5126,false,(int)0,(int)0);
		HX_STACK_LINE(822)
		{
			HX_STACK_LINE(822)
			::snow::api::buffers::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(822)
			{
				HX_STACK_LINE(822)
				::snow::api::buffers::ArrayBufferView tmp6 = this->tcoordlist;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(822)
				::haxe::io::Bytes buffer = tmp6->buffer;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(822)
				int tmp7 = this->tcoord_floats;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(822)
				Dynamic len = tmp7;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(822)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(822)
				bool tmp8 = (buffer != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(822)
				if ((tmp8)){
					HX_STACK_LINE(822)
					::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(822)
					{
						HX_STACK_LINE(822)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(822)
						::snow::api::buffers::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(822)
						int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(822)
						bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(822)
						if ((tmp12)){
							HX_STACK_LINE(822)
							HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
						}
						HX_STACK_LINE(822)
						int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
						HX_STACK_LINE(822)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(822)
						int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
						HX_STACK_LINE(822)
						bool tmp13 = (len == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(822)
						if ((tmp13)){
							HX_STACK_LINE(822)
							newByteLength = bufferByteLength;
							HX_STACK_LINE(822)
							int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(822)
							bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(822)
							if ((tmp15)){
								HX_STACK_LINE(822)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(822)
							bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(822)
							if ((tmp16)){
								HX_STACK_LINE(822)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
						}
						else{
							HX_STACK_LINE(822)
							int tmp14 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(822)
							newByteLength = tmp14;
							HX_STACK_LINE(822)
							int newRange = newByteLength;		HX_STACK_VAR(newRange,"newRange");
							HX_STACK_LINE(822)
							bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(822)
							if ((tmp15)){
								HX_STACK_LINE(822)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
						}
						HX_STACK_LINE(822)
						_this->buffer = buffer;
						HX_STACK_LINE(822)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(822)
						_this->byteLength = newByteLength;
						HX_STACK_LINE(822)
						Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(822)
						int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(822)
						_this->length = tmp15;
						HX_STACK_LINE(822)
						tmp9 = _this;
					}
					HX_STACK_LINE(822)
					this1 = tmp9;
				}
				else{
					HX_STACK_LINE(822)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
				}
				HX_STACK_LINE(822)
				tmp5 = this1;
			}
			HX_STACK_LINE(822)
			::snow::api::buffers::ArrayBufferView data = tmp5;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(822)
			bool tmp6 = (data != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(822)
			if ((tmp6)){
				HX_STACK_LINE(822)
				int tmp7 = data->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(822)
				int tmp8 = data->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(822)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_sub_data((int)34962,(int)0,data->buffer->b,tmp7,tmp8);
			}
			else{
				HX_STACK_LINE(822)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_sub_data((int)34962,(int)0,null(),(int)0,(int)0);
			}
		}
		HX_STACK_LINE(824)
		{
			HX_STACK_LINE(824)
			int tmp5 = this->buffer_index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(824)
			::snow::modules::opengl::native::GLBO tmp6 = this->vcolorBuffers->__get(tmp5).StaticCast< ::snow::modules::opengl::native::GLBO >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(824)
			::snow::modules::opengl::native::GLBO buffer = tmp6;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(824)
			bool tmp7 = (buffer == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(824)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(824)
			if ((tmp7)){
				HX_STACK_LINE(824)
				tmp8 = (int)0;
			}
			else{
				HX_STACK_LINE(824)
				tmp8 = buffer->id;
			}
			HX_STACK_LINE(824)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp8);
		}
		HX_STACK_LINE(825)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)2,(int)4,(int)5126,false,(int)0,(int)0);
		HX_STACK_LINE(826)
		{
			HX_STACK_LINE(826)
			::snow::api::buffers::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(826)
			{
				HX_STACK_LINE(826)
				::snow::api::buffers::ArrayBufferView tmp6 = this->colorlist;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(826)
				::haxe::io::Bytes buffer = tmp6->buffer;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(826)
				int tmp7 = this->color_floats;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(826)
				Dynamic len = tmp7;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(826)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(826)
				bool tmp8 = (buffer != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(826)
				if ((tmp8)){
					HX_STACK_LINE(826)
					::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(826)
					{
						HX_STACK_LINE(826)
						::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(826)
						::snow::api::buffers::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(826)
						int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(826)
						bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(826)
						if ((tmp12)){
							HX_STACK_LINE(826)
							HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
						}
						HX_STACK_LINE(826)
						int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
						HX_STACK_LINE(826)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(826)
						int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
						HX_STACK_LINE(826)
						bool tmp13 = (len == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(826)
						if ((tmp13)){
							HX_STACK_LINE(826)
							newByteLength = bufferByteLength;
							HX_STACK_LINE(826)
							int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(826)
							bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(826)
							if ((tmp15)){
								HX_STACK_LINE(826)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(826)
							bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(826)
							if ((tmp16)){
								HX_STACK_LINE(826)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
						}
						else{
							HX_STACK_LINE(826)
							int tmp14 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(826)
							newByteLength = tmp14;
							HX_STACK_LINE(826)
							int newRange = newByteLength;		HX_STACK_VAR(newRange,"newRange");
							HX_STACK_LINE(826)
							bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(826)
							if ((tmp15)){
								HX_STACK_LINE(826)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
						}
						HX_STACK_LINE(826)
						_this->buffer = buffer;
						HX_STACK_LINE(826)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(826)
						_this->byteLength = newByteLength;
						HX_STACK_LINE(826)
						Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(826)
						int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(826)
						_this->length = tmp15;
						HX_STACK_LINE(826)
						tmp9 = _this;
					}
					HX_STACK_LINE(826)
					this1 = tmp9;
				}
				else{
					HX_STACK_LINE(826)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
				}
				HX_STACK_LINE(826)
				tmp5 = this1;
			}
			HX_STACK_LINE(826)
			::snow::api::buffers::ArrayBufferView data = tmp5;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(826)
			bool tmp6 = (data != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(826)
			if ((tmp6)){
				HX_STACK_LINE(826)
				int tmp7 = data->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(826)
				int tmp8 = data->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(826)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_sub_data((int)34962,(int)0,data->buffer->b,tmp7,tmp8);
			}
			else{
				HX_STACK_LINE(826)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_sub_data((int)34962,(int)0,null(),(int)0,(int)0);
			}
		}
		HX_STACK_LINE(833)
		{
			HX_STACK_LINE(835)
			int tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(835)
			int tmp6 = this->vert_floats;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(835)
			int tmp7 = ::phoenix::utils::Rendering_obj::get_elements_for_type(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(835)
			int count = tmp7;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(834)
			int tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(833)
			int tmp9 = count;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(833)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_draw_arrays(tmp8,(int)0,tmp9);
		}
		HX_STACK_LINE(839)
		this->_disable_attributes();
		HX_STACK_LINE(842)
		(this->buffer_index)++;
		HX_STACK_LINE(843)
		int tmp5 = this->buffer_index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(843)
		int tmp6 = this->buffer_count;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(843)
		bool tmp7 = (tmp5 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(843)
		if ((tmp7)){
			HX_STACK_LINE(844)
			this->buffer_index = (int)0;
		}
		HX_STACK_LINE(848)
		this->vert_floats = (int)0;
		HX_STACK_LINE(848)
		this->tcoord_floats = (int)0;
		HX_STACK_LINE(848)
		this->color_floats = (int)0;
		HX_STACK_LINE(848)
		this->normal_floats = (int)0;
		HX_STACK_LINE(850)
		(this->draw_calls)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,submit_current_vertex_list,(void))

Void Batcher_obj::geometry_batch( ::phoenix::geometry::Geometry geom){
{
		HX_STACK_FRAME("phoenix.Batcher","geometry_batch",0x429a8233,"phoenix.Batcher.geometry_batch","phoenix/Batcher.hx",856,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(geom,"geom")
		HX_STACK_LINE(859)
		int tmp = geom->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(859)
		int tmp1 = this->vert_floats;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(859)
		Float tmp2 = (Float(tmp1) / Float((int)4));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(859)
		Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(859)
		Float _count_after = tmp3;		HX_STACK_VAR(_count_after,"_count_after");
		HX_STACK_LINE(862)
		Float tmp4 = _count_after;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(862)
		int tmp5 = this->max_verts;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(862)
		bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(862)
		if ((tmp6)){
			HX_STACK_LINE(863)
			int tmp7 = geom->get_primitive_type();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(863)
			this->submit_current_vertex_list(tmp7);
		}
		HX_STACK_LINE(867)
		int tmp7 = this->vert_floats;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(867)
		int tmp8 = this->tcoord_floats;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(867)
		int tmp9 = this->color_floats;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(867)
		int tmp10 = this->normal_floats;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(868)
		::snow::api::buffers::ArrayBufferView tmp11 = this->vertlist;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(868)
		::snow::api::buffers::ArrayBufferView tmp12 = this->tcoordlist;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(868)
		::snow::api::buffers::ArrayBufferView tmp13 = this->colorlist;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(868)
		::snow::api::buffers::ArrayBufferView tmp14 = this->normallist;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(866)
		geom->batch(tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14);
		HX_STACK_LINE(871)
		int tmp15 = geom->vertices->length;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(871)
		int tmp16 = (tmp15 * (int)4);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(871)
		hx::AddEq(this->vert_floats,tmp16);
		HX_STACK_LINE(872)
		int tmp17 = geom->vertices->length;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(872)
		int tmp18 = (tmp17 * (int)4);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(872)
		hx::AddEq(this->tcoord_floats,tmp18);
		HX_STACK_LINE(873)
		int tmp19 = geom->vertices->length;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(873)
		int tmp20 = (tmp19 * (int)4);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(873)
		hx::AddEq(this->color_floats,tmp20);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,geometry_batch,(void))

Void Batcher_obj::geometry_batch_static( ::phoenix::geometry::Geometry geom){
{
		HX_STACK_FRAME("phoenix.Batcher","geometry_batch_static",0x1c19687a,"phoenix.Batcher.geometry_batch_static","phoenix/Batcher.hx",878,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(geom,"geom")
		HX_STACK_LINE(881)
		int tmp = this->static_vert_floats;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(881)
		int tmp1 = this->static_tcoord_floats;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(881)
		int tmp2 = this->static_color_floats;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(881)
		int tmp3 = this->static_normal_floats;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(882)
		::snow::api::buffers::ArrayBufferView tmp4 = this->static_vertlist;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(882)
		::snow::api::buffers::ArrayBufferView tmp5 = this->static_tcoordlist;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(882)
		::snow::api::buffers::ArrayBufferView tmp6 = this->static_colorlist;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(882)
		::snow::api::buffers::ArrayBufferView tmp7 = this->static_normallist;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(880)
		geom->batch(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
		HX_STACK_LINE(885)
		int tmp8 = geom->vertices->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(885)
		int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(885)
		hx::AddEq(this->static_vert_floats,tmp9);
		HX_STACK_LINE(886)
		int tmp10 = geom->vertices->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(886)
		int tmp11 = (tmp10 * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(886)
		hx::AddEq(this->static_tcoord_floats,tmp11);
		HX_STACK_LINE(887)
		int tmp12 = geom->vertices->length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(887)
		int tmp13 = (tmp12 * (int)4);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(887)
		hx::AddEq(this->static_color_floats,tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,geometry_batch_static,(void))

Void Batcher_obj::_enable_attributes( ){
{
		HX_STACK_FRAME("phoenix.Batcher","_enable_attributes",0x53897f1a,"phoenix.Batcher._enable_attributes","phoenix/Batcher.hx",894,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_LINE(897)
		{
			HX_STACK_LINE(897)
			Dynamic tmp = this->projectionmatrix_attribute;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(897)
			Dynamic location = tmp;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(897)
			::phoenix::Camera tmp1 = this->view;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(897)
			::snow::api::buffers::ArrayBufferView data = tmp1->projection_float32array;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(897)
			bool tmp2 = (data != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(897)
			if ((tmp2)){
				HX_STACK_LINE(897)
				Dynamic tmp3 = location;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(897)
				int tmp4 = data->byteOffset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(897)
				int tmp5 = data->byteLength;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(897)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp3,false,data->buffer->b,tmp4,tmp5,(int)4);
			}
			else{
				HX_STACK_LINE(897)
				Dynamic tmp3 = location;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(897)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp3,false,null(),(int)0,(int)0,(int)4);
			}
		}
		HX_STACK_LINE(898)
		{
			HX_STACK_LINE(898)
			Dynamic tmp = this->modelviewmatrix_attribute;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(898)
			Dynamic location = tmp;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(898)
			::phoenix::Camera tmp1 = this->view;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(898)
			::snow::api::buffers::ArrayBufferView data = tmp1->view_inverse_float32array;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(898)
			bool tmp2 = (data != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(898)
			if ((tmp2)){
				HX_STACK_LINE(898)
				Dynamic tmp3 = location;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(898)
				int tmp4 = data->byteOffset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(898)
				int tmp5 = data->byteLength;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(898)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp3,false,data->buffer->b,tmp4,tmp5,(int)4);
			}
			else{
				HX_STACK_LINE(898)
				Dynamic tmp3 = location;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(898)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp3,false,null(),(int)0,(int)0,(int)4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,_enable_attributes,(void))

Void Batcher_obj::_disable_attributes( ){
{
		HX_STACK_FRAME("phoenix.Batcher","_disable_attributes",0xe5fa1467,"phoenix.Batcher._disable_attributes","phoenix/Batcher.hx",902,0xa9541457)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,_disable_attributes,(void))

int Batcher_obj::_sequence_key;


Batcher_obj::Batcher_obj()
{
}

void Batcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Batcher);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(geometry,"geometry");
	HX_MARK_MEMBER_NAME(groups,"groups");
	HX_MARK_MEMBER_NAME(tree_changed,"tree_changed");
	HX_MARK_MEMBER_NAME(vertlist,"vertlist");
	HX_MARK_MEMBER_NAME(tcoordlist,"tcoordlist");
	HX_MARK_MEMBER_NAME(colorlist,"colorlist");
	HX_MARK_MEMBER_NAME(normallist,"normallist");
	HX_MARK_MEMBER_NAME(static_vertlist,"static_vertlist");
	HX_MARK_MEMBER_NAME(static_tcoordlist,"static_tcoordlist");
	HX_MARK_MEMBER_NAME(static_colorlist,"static_colorlist");
	HX_MARK_MEMBER_NAME(static_normallist,"static_normallist");
	HX_MARK_MEMBER_NAME(vert_floats,"vert_floats");
	HX_MARK_MEMBER_NAME(tcoord_floats,"tcoord_floats");
	HX_MARK_MEMBER_NAME(color_floats,"color_floats");
	HX_MARK_MEMBER_NAME(normal_floats,"normal_floats");
	HX_MARK_MEMBER_NAME(static_vert_floats,"static_vert_floats");
	HX_MARK_MEMBER_NAME(static_tcoord_floats,"static_tcoord_floats");
	HX_MARK_MEMBER_NAME(static_color_floats,"static_color_floats");
	HX_MARK_MEMBER_NAME(static_normal_floats,"static_normal_floats");
	HX_MARK_MEMBER_NAME(buffer_count,"buffer_count");
	HX_MARK_MEMBER_NAME(buffer_index,"buffer_index");
	HX_MARK_MEMBER_NAME(max_verts,"max_verts");
	HX_MARK_MEMBER_NAME(max_floats,"max_floats");
	HX_MARK_MEMBER_NAME(vert_count,"vert_count");
	HX_MARK_MEMBER_NAME(vertexBuffers,"vertexBuffers");
	HX_MARK_MEMBER_NAME(tcoordBuffers,"tcoordBuffers");
	HX_MARK_MEMBER_NAME(vcolorBuffers,"vcolorBuffers");
	HX_MARK_MEMBER_NAME(projectionmatrix_attribute,"projectionmatrix_attribute");
	HX_MARK_MEMBER_NAME(modelviewmatrix_attribute,"modelviewmatrix_attribute");
	HX_MARK_MEMBER_NAME(vert_attribute,"vert_attribute");
	HX_MARK_MEMBER_NAME(tcoord_attribute,"tcoord_attribute");
	HX_MARK_MEMBER_NAME(color_attribute,"color_attribute");
	HX_MARK_MEMBER_NAME(tex0_attribute,"tex0_attribute");
	HX_MARK_MEMBER_NAME(tex1_attribute,"tex1_attribute");
	HX_MARK_MEMBER_NAME(tex2_attribute,"tex2_attribute");
	HX_MARK_MEMBER_NAME(tex3_attribute,"tex3_attribute");
	HX_MARK_MEMBER_NAME(tex4_attribute,"tex4_attribute");
	HX_MARK_MEMBER_NAME(tex5_attribute,"tex5_attribute");
	HX_MARK_MEMBER_NAME(tex6_attribute,"tex6_attribute");
	HX_MARK_MEMBER_NAME(tex7_attribute,"tex7_attribute");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(draw_calls,"draw_calls");
	HX_MARK_MEMBER_NAME(dynamic_batched_count,"dynamic_batched_count");
	HX_MARK_MEMBER_NAME(static_batched_count,"static_batched_count");
	HX_MARK_MEMBER_NAME(visible_count,"visible_count");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(sequence,"sequence");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_END_CLASS();
}

void Batcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(geometry,"geometry");
	HX_VISIT_MEMBER_NAME(groups,"groups");
	HX_VISIT_MEMBER_NAME(tree_changed,"tree_changed");
	HX_VISIT_MEMBER_NAME(vertlist,"vertlist");
	HX_VISIT_MEMBER_NAME(tcoordlist,"tcoordlist");
	HX_VISIT_MEMBER_NAME(colorlist,"colorlist");
	HX_VISIT_MEMBER_NAME(normallist,"normallist");
	HX_VISIT_MEMBER_NAME(static_vertlist,"static_vertlist");
	HX_VISIT_MEMBER_NAME(static_tcoordlist,"static_tcoordlist");
	HX_VISIT_MEMBER_NAME(static_colorlist,"static_colorlist");
	HX_VISIT_MEMBER_NAME(static_normallist,"static_normallist");
	HX_VISIT_MEMBER_NAME(vert_floats,"vert_floats");
	HX_VISIT_MEMBER_NAME(tcoord_floats,"tcoord_floats");
	HX_VISIT_MEMBER_NAME(color_floats,"color_floats");
	HX_VISIT_MEMBER_NAME(normal_floats,"normal_floats");
	HX_VISIT_MEMBER_NAME(static_vert_floats,"static_vert_floats");
	HX_VISIT_MEMBER_NAME(static_tcoord_floats,"static_tcoord_floats");
	HX_VISIT_MEMBER_NAME(static_color_floats,"static_color_floats");
	HX_VISIT_MEMBER_NAME(static_normal_floats,"static_normal_floats");
	HX_VISIT_MEMBER_NAME(buffer_count,"buffer_count");
	HX_VISIT_MEMBER_NAME(buffer_index,"buffer_index");
	HX_VISIT_MEMBER_NAME(max_verts,"max_verts");
	HX_VISIT_MEMBER_NAME(max_floats,"max_floats");
	HX_VISIT_MEMBER_NAME(vert_count,"vert_count");
	HX_VISIT_MEMBER_NAME(vertexBuffers,"vertexBuffers");
	HX_VISIT_MEMBER_NAME(tcoordBuffers,"tcoordBuffers");
	HX_VISIT_MEMBER_NAME(vcolorBuffers,"vcolorBuffers");
	HX_VISIT_MEMBER_NAME(projectionmatrix_attribute,"projectionmatrix_attribute");
	HX_VISIT_MEMBER_NAME(modelviewmatrix_attribute,"modelviewmatrix_attribute");
	HX_VISIT_MEMBER_NAME(vert_attribute,"vert_attribute");
	HX_VISIT_MEMBER_NAME(tcoord_attribute,"tcoord_attribute");
	HX_VISIT_MEMBER_NAME(color_attribute,"color_attribute");
	HX_VISIT_MEMBER_NAME(tex0_attribute,"tex0_attribute");
	HX_VISIT_MEMBER_NAME(tex1_attribute,"tex1_attribute");
	HX_VISIT_MEMBER_NAME(tex2_attribute,"tex2_attribute");
	HX_VISIT_MEMBER_NAME(tex3_attribute,"tex3_attribute");
	HX_VISIT_MEMBER_NAME(tex4_attribute,"tex4_attribute");
	HX_VISIT_MEMBER_NAME(tex5_attribute,"tex5_attribute");
	HX_VISIT_MEMBER_NAME(tex6_attribute,"tex6_attribute");
	HX_VISIT_MEMBER_NAME(tex7_attribute,"tex7_attribute");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(draw_calls,"draw_calls");
	HX_VISIT_MEMBER_NAME(dynamic_batched_count,"dynamic_batched_count");
	HX_VISIT_MEMBER_NAME(static_batched_count,"static_batched_count");
	HX_VISIT_MEMBER_NAME(visible_count,"visible_count");
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(sequence,"sequence");
	HX_VISIT_MEMBER_NAME(state,"state");
}

Dynamic Batcher_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"batch") ) { return batch_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"groups") ) { return groups; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { return geometry; }
		if (HX_FIELD_EQ(inName,"vertlist") ) { return vertlist; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"sequence") ) { return sequence; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colorlist") ) { return colorlist; }
		if (HX_FIELD_EQ(inName,"max_verts") ) { return max_verts; }
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"add_group") ) { return add_group_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tcoordlist") ) { return tcoordlist; }
		if (HX_FIELD_EQ(inName,"normallist") ) { return normallist; }
		if (HX_FIELD_EQ(inName,"max_floats") ) { return max_floats; }
		if (HX_FIELD_EQ(inName,"vert_count") ) { return vert_count; }
		if (HX_FIELD_EQ(inName,"draw_calls") ) { return draw_calls; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vert_floats") ) { return vert_floats; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tree_changed") ) { return tree_changed; }
		if (HX_FIELD_EQ(inName,"color_floats") ) { return color_floats; }
		if (HX_FIELD_EQ(inName,"buffer_count") ) { return buffer_count; }
		if (HX_FIELD_EQ(inName,"buffer_index") ) { return buffer_index; }
		if (HX_FIELD_EQ(inName,"compare_rule") ) { return compare_rule_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tcoord_floats") ) { return tcoord_floats; }
		if (HX_FIELD_EQ(inName,"normal_floats") ) { return normal_floats; }
		if (HX_FIELD_EQ(inName,"vertexBuffers") ) { return vertexBuffers; }
		if (HX_FIELD_EQ(inName,"tcoordBuffers") ) { return tcoordBuffers; }
		if (HX_FIELD_EQ(inName,"vcolorBuffers") ) { return vcolorBuffers; }
		if (HX_FIELD_EQ(inName,"visible_count") ) { return visible_count; }
		if (HX_FIELD_EQ(inName,"list_geometry") ) { return list_geometry_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vert_attribute") ) { return vert_attribute; }
		if (HX_FIELD_EQ(inName,"tex0_attribute") ) { return tex0_attribute; }
		if (HX_FIELD_EQ(inName,"tex1_attribute") ) { return tex1_attribute; }
		if (HX_FIELD_EQ(inName,"tex2_attribute") ) { return tex2_attribute; }
		if (HX_FIELD_EQ(inName,"tex3_attribute") ) { return tex3_attribute; }
		if (HX_FIELD_EQ(inName,"tex4_attribute") ) { return tex4_attribute; }
		if (HX_FIELD_EQ(inName,"tex5_attribute") ) { return tex5_attribute; }
		if (HX_FIELD_EQ(inName,"tex6_attribute") ) { return tex6_attribute; }
		if (HX_FIELD_EQ(inName,"tex7_attribute") ) { return tex7_attribute; }
		if (HX_FIELD_EQ(inName,"geometry_batch") ) { return geometry_batch_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"static_vertlist") ) { return static_vertlist; }
		if (HX_FIELD_EQ(inName,"color_attribute") ) { return color_attribute; }
		if (HX_FIELD_EQ(inName,"shader_activate") ) { return shader_activate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"static_colorlist") ) { return static_colorlist; }
		if (HX_FIELD_EQ(inName,"tcoord_attribute") ) { return tcoord_attribute; }
		if (HX_FIELD_EQ(inName,"geometry_compare") ) { return geometry_compare_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"static_tcoordlist") ) { return static_tcoordlist; }
		if (HX_FIELD_EQ(inName,"static_normallist") ) { return static_normallist; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"static_vert_floats") ) { return static_vert_floats; }
		if (HX_FIELD_EQ(inName,"_enable_attributes") ) { return _enable_attributes_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"static_color_floats") ) { return static_color_floats; }
		if (HX_FIELD_EQ(inName,"_disable_attributes") ) { return _disable_attributes_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_tcoord_floats") ) { return static_tcoord_floats; }
		if (HX_FIELD_EQ(inName,"static_normal_floats") ) { return static_normal_floats; }
		if (HX_FIELD_EQ(inName,"static_batched_count") ) { return static_batched_count; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dynamic_batched_count") ) { return dynamic_batched_count; }
		if (HX_FIELD_EQ(inName,"geometry_batch_static") ) { return geometry_batch_static_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"compare_rule_to_string") ) { return compare_rule_to_string_dyn(); }
		if (HX_FIELD_EQ(inName,"submit_static_geometry") ) { return submit_static_geometry_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"modelviewmatrix_attribute") ) { return modelviewmatrix_attribute; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"projectionmatrix_attribute") ) { return projectionmatrix_attribute; }
		if (HX_FIELD_EQ(inName,"submit_current_vertex_list") ) { return submit_current_vertex_list_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Batcher_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { outValue = _sequence_key; return true;  }
	}
	return false;
}

Dynamic Batcher_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp == hx::paccAlways) return set_layer(inValue);layer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::phoenix::BatchState >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"groups") ) { groups=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { geometry=inValue.Cast< ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertlist") ) { vertlist=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::phoenix::Renderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sequence") ) { sequence=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colorlist") ) { colorlist=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_verts") ) { max_verts=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tcoordlist") ) { tcoordlist=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normallist") ) { normallist=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_floats") ) { max_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vert_count") ) { vert_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draw_calls") ) { draw_calls=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vert_floats") ) { vert_floats=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tree_changed") ) { tree_changed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color_floats") ) { color_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer_count") ) { buffer_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer_index") ) { buffer_index=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tcoord_floats") ) { tcoord_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normal_floats") ) { normal_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexBuffers") ) { vertexBuffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tcoordBuffers") ) { tcoordBuffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vcolorBuffers") ) { vcolorBuffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible_count") ) { visible_count=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vert_attribute") ) { vert_attribute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex0_attribute") ) { tex0_attribute=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex1_attribute") ) { tex1_attribute=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex2_attribute") ) { tex2_attribute=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex3_attribute") ) { tex3_attribute=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex4_attribute") ) { tex4_attribute=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex5_attribute") ) { tex5_attribute=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex6_attribute") ) { tex6_attribute=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tex7_attribute") ) { tex7_attribute=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"static_vertlist") ) { static_vertlist=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color_attribute") ) { color_attribute=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"static_colorlist") ) { static_colorlist=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tcoord_attribute") ) { tcoord_attribute=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"static_tcoordlist") ) { static_tcoordlist=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"static_normallist") ) { static_normallist=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"static_vert_floats") ) { static_vert_floats=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"static_color_floats") ) { static_color_floats=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_tcoord_floats") ) { static_tcoord_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"static_normal_floats") ) { static_normal_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"static_batched_count") ) { static_batched_count=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dynamic_batched_count") ) { dynamic_batched_count=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"modelviewmatrix_attribute") ) { modelviewmatrix_attribute=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"projectionmatrix_attribute") ) { projectionmatrix_attribute=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Batcher_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { _sequence_key=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Batcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"));
	outFields->push(HX_HCSTRING("groups","\x54","\x24","\x28","\x1c"));
	outFields->push(HX_HCSTRING("tree_changed","\xd3","\x31","\xee","\x4a"));
	outFields->push(HX_HCSTRING("vertlist","\x8f","\xfd","\x15","\x6c"));
	outFields->push(HX_HCSTRING("tcoordlist","\x9f","\x26","\x3c","\xfa"));
	outFields->push(HX_HCSTRING("colorlist","\x41","\x7b","\x47","\x38"));
	outFields->push(HX_HCSTRING("normallist","\x05","\x2e","\x5e","\x83"));
	outFields->push(HX_HCSTRING("static_vertlist","\x80","\x12","\xf2","\x47"));
	outFields->push(HX_HCSTRING("static_tcoordlist","\xd0","\x19","\xfc","\x94"));
	outFields->push(HX_HCSTRING("static_colorlist","\x30","\xb9","\xfd","\xbc"));
	outFields->push(HX_HCSTRING("static_normallist","\x36","\x21","\x1e","\x1e"));
	outFields->push(HX_HCSTRING("vert_floats","\x65","\x68","\x10","\xce"));
	outFields->push(HX_HCSTRING("tcoord_floats","\x55","\x49","\xfd","\x3f"));
	outFields->push(HX_HCSTRING("color_floats","\xf3","\x05","\xd3","\x0b"));
	outFields->push(HX_HCSTRING("normal_floats","\xaf","\x65","\x05","\x7c"));
	outFields->push(HX_HCSTRING("static_vert_floats","\x14","\x40","\x45","\x9b"));
	outFields->push(HX_HCSTRING("static_tcoord_floats","\xc4","\xaa","\xda","\x65"));
	outFields->push(HX_HCSTRING("static_color_floats","\x64","\xe7","\xda","\xcc"));
	outFields->push(HX_HCSTRING("static_normal_floats","\x1e","\xc7","\xe2","\xa1"));
	outFields->push(HX_HCSTRING("buffer_count","\x10","\x09","\x8b","\x16"));
	outFields->push(HX_HCSTRING("buffer_index","\x53","\x5f","\x3c","\x8a"));
	outFields->push(HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b"));
	outFields->push(HX_HCSTRING("max_floats","\xd2","\x86","\xa0","\x4c"));
	outFields->push(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"));
	outFields->push(HX_HCSTRING("vertexBuffers","\x6f","\xe4","\xcf","\x23"));
	outFields->push(HX_HCSTRING("tcoordBuffers","\xb2","\xdf","\x11","\x0f"));
	outFields->push(HX_HCSTRING("vcolorBuffers","\xc6","\x75","\xa1","\x01"));
	outFields->push(HX_HCSTRING("projectionmatrix_attribute","\xed","\xb3","\xc1","\xb7"));
	outFields->push(HX_HCSTRING("modelviewmatrix_attribute","\xec","\x37","\x7b","\x26"));
	outFields->push(HX_HCSTRING("vert_attribute","\xce","\x47","\x70","\x43"));
	outFields->push(HX_HCSTRING("tcoord_attribute","\xde","\x9c","\x72","\x7b"));
	outFields->push(HX_HCSTRING("color_attribute","\x00","\x17","\x4a","\xaf"));
	outFields->push(HX_HCSTRING("tex0_attribute","\x86","\xb5","\x7d","\x0d"));
	outFields->push(HX_HCSTRING("tex1_attribute","\xc7","\x20","\x5c","\x8e"));
	outFields->push(HX_HCSTRING("tex2_attribute","\x08","\x8c","\x3a","\x0f"));
	outFields->push(HX_HCSTRING("tex3_attribute","\x49","\xf7","\x18","\x90"));
	outFields->push(HX_HCSTRING("tex4_attribute","\x8a","\x62","\xf7","\x10"));
	outFields->push(HX_HCSTRING("tex5_attribute","\xcb","\xcd","\xd5","\x91"));
	outFields->push(HX_HCSTRING("tex6_attribute","\x0c","\x39","\xb4","\x12"));
	outFields->push(HX_HCSTRING("tex7_attribute","\x4d","\xa4","\x92","\x93"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"));
	outFields->push(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"));
	outFields->push(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"));
	outFields->push(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"));
	outFields->push(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"));
	outFields->push(HX_HCSTRING("log","\x84","\x54","\x52","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("sequence","\x41","\x1e","\xed","\xe8"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Batcher_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Batcher_obj,layer),HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f")},
	{hx::fsBool,(int)offsetof(Batcher_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsObject /*::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry*/ ,(int)offsetof(Batcher_obj,geometry),HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Batcher_obj,groups),HX_HCSTRING("groups","\x54","\x24","\x28","\x1c")},
	{hx::fsBool,(int)offsetof(Batcher_obj,tree_changed),HX_HCSTRING("tree_changed","\xd3","\x31","\xee","\x4a")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,vertlist),HX_HCSTRING("vertlist","\x8f","\xfd","\x15","\x6c")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,tcoordlist),HX_HCSTRING("tcoordlist","\x9f","\x26","\x3c","\xfa")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,colorlist),HX_HCSTRING("colorlist","\x41","\x7b","\x47","\x38")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,normallist),HX_HCSTRING("normallist","\x05","\x2e","\x5e","\x83")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,static_vertlist),HX_HCSTRING("static_vertlist","\x80","\x12","\xf2","\x47")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,static_tcoordlist),HX_HCSTRING("static_tcoordlist","\xd0","\x19","\xfc","\x94")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,static_colorlist),HX_HCSTRING("static_colorlist","\x30","\xb9","\xfd","\xbc")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,static_normallist),HX_HCSTRING("static_normallist","\x36","\x21","\x1e","\x1e")},
	{hx::fsInt,(int)offsetof(Batcher_obj,vert_floats),HX_HCSTRING("vert_floats","\x65","\x68","\x10","\xce")},
	{hx::fsInt,(int)offsetof(Batcher_obj,tcoord_floats),HX_HCSTRING("tcoord_floats","\x55","\x49","\xfd","\x3f")},
	{hx::fsInt,(int)offsetof(Batcher_obj,color_floats),HX_HCSTRING("color_floats","\xf3","\x05","\xd3","\x0b")},
	{hx::fsInt,(int)offsetof(Batcher_obj,normal_floats),HX_HCSTRING("normal_floats","\xaf","\x65","\x05","\x7c")},
	{hx::fsInt,(int)offsetof(Batcher_obj,static_vert_floats),HX_HCSTRING("static_vert_floats","\x14","\x40","\x45","\x9b")},
	{hx::fsInt,(int)offsetof(Batcher_obj,static_tcoord_floats),HX_HCSTRING("static_tcoord_floats","\xc4","\xaa","\xda","\x65")},
	{hx::fsInt,(int)offsetof(Batcher_obj,static_color_floats),HX_HCSTRING("static_color_floats","\x64","\xe7","\xda","\xcc")},
	{hx::fsInt,(int)offsetof(Batcher_obj,static_normal_floats),HX_HCSTRING("static_normal_floats","\x1e","\xc7","\xe2","\xa1")},
	{hx::fsInt,(int)offsetof(Batcher_obj,buffer_count),HX_HCSTRING("buffer_count","\x10","\x09","\x8b","\x16")},
	{hx::fsInt,(int)offsetof(Batcher_obj,buffer_index),HX_HCSTRING("buffer_index","\x53","\x5f","\x3c","\x8a")},
	{hx::fsInt,(int)offsetof(Batcher_obj,max_verts),HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b")},
	{hx::fsInt,(int)offsetof(Batcher_obj,max_floats),HX_HCSTRING("max_floats","\xd2","\x86","\xa0","\x4c")},
	{hx::fsInt,(int)offsetof(Batcher_obj,vert_count),HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Batcher_obj,vertexBuffers),HX_HCSTRING("vertexBuffers","\x6f","\xe4","\xcf","\x23")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Batcher_obj,tcoordBuffers),HX_HCSTRING("tcoordBuffers","\xb2","\xdf","\x11","\x0f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Batcher_obj,vcolorBuffers),HX_HCSTRING("vcolorBuffers","\xc6","\x75","\xa1","\x01")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Batcher_obj,projectionmatrix_attribute),HX_HCSTRING("projectionmatrix_attribute","\xed","\xb3","\xc1","\xb7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Batcher_obj,modelviewmatrix_attribute),HX_HCSTRING("modelviewmatrix_attribute","\xec","\x37","\x7b","\x26")},
	{hx::fsInt,(int)offsetof(Batcher_obj,vert_attribute),HX_HCSTRING("vert_attribute","\xce","\x47","\x70","\x43")},
	{hx::fsInt,(int)offsetof(Batcher_obj,tcoord_attribute),HX_HCSTRING("tcoord_attribute","\xde","\x9c","\x72","\x7b")},
	{hx::fsInt,(int)offsetof(Batcher_obj,color_attribute),HX_HCSTRING("color_attribute","\x00","\x17","\x4a","\xaf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Batcher_obj,tex0_attribute),HX_HCSTRING("tex0_attribute","\x86","\xb5","\x7d","\x0d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Batcher_obj,tex1_attribute),HX_HCSTRING("tex1_attribute","\xc7","\x20","\x5c","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Batcher_obj,tex2_attribute),HX_HCSTRING("tex2_attribute","\x08","\x8c","\x3a","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Batcher_obj,tex3_attribute),HX_HCSTRING("tex3_attribute","\x49","\xf7","\x18","\x90")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Batcher_obj,tex4_attribute),HX_HCSTRING("tex4_attribute","\x8a","\x62","\xf7","\x10")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Batcher_obj,tex5_attribute),HX_HCSTRING("tex5_attribute","\xcb","\xcd","\xd5","\x91")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Batcher_obj,tex6_attribute),HX_HCSTRING("tex6_attribute","\x0c","\x39","\xb4","\x12")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Batcher_obj,tex7_attribute),HX_HCSTRING("tex7_attribute","\x4d","\xa4","\x92","\x93")},
	{hx::fsObject /*::phoenix::Renderer*/ ,(int)offsetof(Batcher_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Batcher_obj,view),HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")},
	{hx::fsInt,(int)offsetof(Batcher_obj,draw_calls),HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a")},
	{hx::fsInt,(int)offsetof(Batcher_obj,dynamic_batched_count),HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66")},
	{hx::fsInt,(int)offsetof(Batcher_obj,static_batched_count),HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c")},
	{hx::fsInt,(int)offsetof(Batcher_obj,visible_count),HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70")},
	{hx::fsBool,(int)offsetof(Batcher_obj,log),HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{hx::fsString,(int)offsetof(Batcher_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Batcher_obj,sequence),HX_HCSTRING("sequence","\x41","\x1e","\xed","\xe8")},
	{hx::fsObject /*::phoenix::BatchState*/ ,(int)offsetof(Batcher_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Batcher_obj::_sequence_key,HX_HCSTRING("_sequence_key","\x40","\x34","\x6b","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"),
	HX_HCSTRING("groups","\x54","\x24","\x28","\x1c"),
	HX_HCSTRING("tree_changed","\xd3","\x31","\xee","\x4a"),
	HX_HCSTRING("vertlist","\x8f","\xfd","\x15","\x6c"),
	HX_HCSTRING("tcoordlist","\x9f","\x26","\x3c","\xfa"),
	HX_HCSTRING("colorlist","\x41","\x7b","\x47","\x38"),
	HX_HCSTRING("normallist","\x05","\x2e","\x5e","\x83"),
	HX_HCSTRING("static_vertlist","\x80","\x12","\xf2","\x47"),
	HX_HCSTRING("static_tcoordlist","\xd0","\x19","\xfc","\x94"),
	HX_HCSTRING("static_colorlist","\x30","\xb9","\xfd","\xbc"),
	HX_HCSTRING("static_normallist","\x36","\x21","\x1e","\x1e"),
	HX_HCSTRING("vert_floats","\x65","\x68","\x10","\xce"),
	HX_HCSTRING("tcoord_floats","\x55","\x49","\xfd","\x3f"),
	HX_HCSTRING("color_floats","\xf3","\x05","\xd3","\x0b"),
	HX_HCSTRING("normal_floats","\xaf","\x65","\x05","\x7c"),
	HX_HCSTRING("static_vert_floats","\x14","\x40","\x45","\x9b"),
	HX_HCSTRING("static_tcoord_floats","\xc4","\xaa","\xda","\x65"),
	HX_HCSTRING("static_color_floats","\x64","\xe7","\xda","\xcc"),
	HX_HCSTRING("static_normal_floats","\x1e","\xc7","\xe2","\xa1"),
	HX_HCSTRING("buffer_count","\x10","\x09","\x8b","\x16"),
	HX_HCSTRING("buffer_index","\x53","\x5f","\x3c","\x8a"),
	HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b"),
	HX_HCSTRING("max_floats","\xd2","\x86","\xa0","\x4c"),
	HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"),
	HX_HCSTRING("vertexBuffers","\x6f","\xe4","\xcf","\x23"),
	HX_HCSTRING("tcoordBuffers","\xb2","\xdf","\x11","\x0f"),
	HX_HCSTRING("vcolorBuffers","\xc6","\x75","\xa1","\x01"),
	HX_HCSTRING("projectionmatrix_attribute","\xed","\xb3","\xc1","\xb7"),
	HX_HCSTRING("modelviewmatrix_attribute","\xec","\x37","\x7b","\x26"),
	HX_HCSTRING("vert_attribute","\xce","\x47","\x70","\x43"),
	HX_HCSTRING("tcoord_attribute","\xde","\x9c","\x72","\x7b"),
	HX_HCSTRING("color_attribute","\x00","\x17","\x4a","\xaf"),
	HX_HCSTRING("tex0_attribute","\x86","\xb5","\x7d","\x0d"),
	HX_HCSTRING("tex1_attribute","\xc7","\x20","\x5c","\x8e"),
	HX_HCSTRING("tex2_attribute","\x08","\x8c","\x3a","\x0f"),
	HX_HCSTRING("tex3_attribute","\x49","\xf7","\x18","\x90"),
	HX_HCSTRING("tex4_attribute","\x8a","\x62","\xf7","\x10"),
	HX_HCSTRING("tex5_attribute","\xcb","\xcd","\xd5","\x91"),
	HX_HCSTRING("tex6_attribute","\x0c","\x39","\xb4","\x12"),
	HX_HCSTRING("tex7_attribute","\x4d","\xa4","\x92","\x93"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"),
	HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"),
	HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"),
	HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"),
	HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("sequence","\x41","\x1e","\xed","\xe8"),
	HX_HCSTRING("set_layer","\x34","\xca","\xba","\x96"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("add_group","\x61","\xbb","\x6b","\x19"),
	HX_HCSTRING("compare_rule_to_string","\xac","\x83","\x34","\x4e"),
	HX_HCSTRING("compare_rule","\x16","\x06","\x47","\x08"),
	HX_HCSTRING("geometry_compare","\xd8","\x76","\x77","\x6f"),
	HX_HCSTRING("list_geometry","\xf3","\x61","\xa0","\x84"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("shader_activate","\x4d","\xc7","\x54","\xc6"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("batch","\xba","\xe7","\xba","\xad"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("submit_static_geometry","\x3c","\x62","\x76","\x36"),
	HX_HCSTRING("submit_current_vertex_list","\x2c","\xd9","\x42","\xde"),
	HX_HCSTRING("geometry_batch","\x2d","\x43","\xe5","\x75"),
	HX_HCSTRING("geometry_batch_static","\xc0","\x1a","\xea","\xf6"),
	HX_HCSTRING("_enable_attributes","\x14","\x45","\x61","\xd5"),
	HX_HCSTRING("_disable_attributes","\x2d","\x89","\xef","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Batcher_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Batcher_obj::_sequence_key,"_sequence_key");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Batcher_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Batcher_obj::_sequence_key,"_sequence_key");
};

#endif

hx::Class Batcher_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_sequence_key","\x40","\x34","\x6b","\xf7"),
	::String(null()) };

void Batcher_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Batcher_obj::__GetStatic;
	__mClass->mSetStaticField = &Batcher_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Batcher_obj >;
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

void Batcher_obj::__boot()
{
	_sequence_key= (int)-1;
}

} // end namespace phoenix
