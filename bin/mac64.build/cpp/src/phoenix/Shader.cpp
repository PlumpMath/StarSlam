#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLPO
#include <snow/modules/opengl/native/GLPO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLSO
#include <snow/modules/opengl/native/GLSO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GL_FFI
#include <snow/modules/opengl/native/GL_FFI.h>
#endif
#ifndef INCLUDED_snow_system_assets_Asset
#include <snow/system/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_system_assets_AssetText
#include <snow/system/assets/AssetText.h>
#endif
#ifndef INCLUDED_snow_system_assets_Assets
#include <snow/system/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
namespace phoenix{

Void Shader_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.Shader","new",0xb939fd36,"phoenix.Shader.new","phoenix/Shader.hx",19,0x14ec92d9)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(36)
	this->normal_attribute = (int)3;
	HX_STACK_LINE(35)
	this->color_attribute = (int)2;
	HX_STACK_LINE(34)
	this->tcoord_attribute = (int)1;
	HX_STACK_LINE(33)
	this->vert_attribute = (int)0;
	HX_STACK_LINE(26)
	this->frag_id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(25)
	this->vert_id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(21)
	this->log = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		if ((tmp)){
			HX_STACK_LINE(55)
			::luxe::DebugError tmp1 = ::luxe::DebugError_obj::null_assertion(HX_HCSTRING("_options was null","\x3f","\x38","\x24","\xa1"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(55)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(57)
	_options->__FieldRef(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c")) = (int)7;
	HX_STACK_LINE(59)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	super::__construct(tmp);
	HX_STACK_LINE(61)
	this->frag_id = _options->__Field(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44"), hx::paccDynamic );
	HX_STACK_LINE(62)
	this->vert_id = _options->__Field(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d"), hx::paccDynamic );
	HX_STACK_LINE(64)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(64)
	this->uniforms = tmp1;
	HX_STACK_LINE(65)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(65)
	this->uniform_textures = tmp2;
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Shader_obj::activate( ){
{
		HX_STACK_FRAME("phoenix.Shader","activate",0x6f45a71d,"phoenix.Shader.activate","phoenix/Shader.hx",69,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		::snow::modules::opengl::native::GLPO tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		if ((tmp1)){
			HX_STACK_LINE(72)
			::phoenix::Renderer tmp2 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			::snow::modules::opengl::native::GLPO tmp3 = this->program;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			tmp2->state->useProgram(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,activate,(void))

Void Shader_obj::deactivate( ){
{
		HX_STACK_FRAME("phoenix.Shader","deactivate",0x87a4161e,"phoenix.Shader.deactivate","phoenix/Shader.hx",77,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		tmp->state->useProgram(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,deactivate,(void))

::phoenix::Shader Shader_obj::clone( ::String _id){
	HX_STACK_FRAME("phoenix.Shader","clone",0xa8cea1b3,"phoenix.Shader.clone","phoenix/Shader.hx",84,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(87)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	::String tmp1 = this->frag_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	::String tmp2 = this->vert_id;		HX_STACK_VAR(tmp2,"tmp2");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp,::String &tmp2,::String &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",86,0x14ec92d9)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp,false);
				__result->Add(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44") , tmp1,false);
				__result->Add(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d") , tmp2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(86)
	Dynamic tmp3 = _Function_1_1::Block(tmp,tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	::phoenix::Shader tmp4 = ::phoenix::Shader_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	::phoenix::Shader _clone = tmp4;		HX_STACK_VAR(_clone,"_clone");
	HX_STACK_LINE(92)
	::String tmp5 = this->vert_source;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(92)
	::String tmp6 = this->frag_source;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(92)
	_clone->from_string(tmp5,tmp6);
	HX_STACK_LINE(94)
	::phoenix::Shader tmp7 = _clone;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(94)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,clone,return )

Void Shader_obj::set_int( ::String _name,int _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_int",0x16f2b668,"phoenix.Shader.set_int","phoenix/Shader.hx",98,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(99)
		::haxe::ds::StringMap tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		if ((tmp2)){
			HX_STACK_LINE(100)
			::haxe::ds::StringMap tmp3 = this->uniforms;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(100)
			Dynamic _uniform = tmp5;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(101)
			_uniform->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = _value;
		}
		else{
			HX_STACK_LINE(105)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			int tmp4 = _value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			::snow::modules::opengl::native::GLPO tmp5 = this->program;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			int tmp6 = tmp5->id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(108)
			::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(108)
			Dynamic tmp8 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(108)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp9,int &tmp4,::String &tmp3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",104,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
						__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp4,false);
						__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)1,false);
						__result->Add(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5") , tmp9,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(104)
			Dynamic tmp10 = _Function_2_1::Block(tmp9,tmp4,tmp3);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(104)
			Dynamic _uniform = tmp10;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(111)
			::haxe::ds::StringMap tmp11 = this->uniforms;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(111)
			::String tmp12 = _name;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(111)
			Dynamic tmp13 = _uniform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(111)
			tmp11->set(tmp12,tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_int,(void))

Void Shader_obj::set_float( ::String _name,Float _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_float",0x06517f55,"phoenix.Shader.set_float","phoenix/Shader.hx",114,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(115)
		::haxe::ds::StringMap tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		if ((tmp2)){
			HX_STACK_LINE(116)
			::haxe::ds::StringMap tmp3 = this->uniforms;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(116)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(116)
			Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(116)
			Dynamic _uniform = tmp5;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(117)
			_uniform->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = _value;
		}
		else{
			HX_STACK_LINE(121)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			Float tmp4 = _value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(124)
			::snow::modules::opengl::native::GLPO tmp5 = this->program;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			int tmp6 = tmp5->id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			Dynamic tmp8 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp9,Float &tmp4,::String &tmp3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",120,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
						__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp4,false);
						__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)2,false);
						__result->Add(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5") , tmp9,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(120)
			Dynamic tmp10 = _Function_2_1::Block(tmp9,tmp4,tmp3);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(120)
			Dynamic _uniform = tmp10;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(127)
			::haxe::ds::StringMap tmp11 = this->uniforms;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(127)
			::String tmp12 = _name;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			Dynamic tmp13 = _uniform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			tmp11->set(tmp12,tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_float,(void))

Void Shader_obj::set_vector2( ::String _name,::phoenix::Vector _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_vector2",0x4dc45408,"phoenix.Shader.set_vector2","phoenix/Shader.hx",131,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(133)
		::haxe::ds::StringMap tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		if ((tmp2)){
			HX_STACK_LINE(135)
			::haxe::ds::StringMap tmp3 = this->uniforms;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(135)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(135)
			Dynamic _uniform = tmp5;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(136)
			_uniform->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = _value;
		}
		else{
			HX_STACK_LINE(141)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(142)
			::phoenix::Vector tmp4 = _value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			::snow::modules::opengl::native::GLPO tmp5 = this->program;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(144)
			int tmp6 = tmp5->id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			Dynamic tmp8 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp9,::phoenix::Vector &tmp4,::String &tmp3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",140,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
						__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp4,false);
						__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)3,false);
						__result->Add(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5") , tmp9,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(140)
			Dynamic tmp10 = _Function_2_1::Block(tmp9,tmp4,tmp3);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(140)
			Dynamic _uniform = tmp10;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(147)
			::haxe::ds::StringMap tmp11 = this->uniforms;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(147)
			::String tmp12 = _name;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(147)
			Dynamic tmp13 = _uniform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(147)
			tmp11->set(tmp12,tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_vector2,(void))

Void Shader_obj::set_vector3( ::String _name,::phoenix::Vector _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_vector3",0x4dc45409,"phoenix.Shader.set_vector3","phoenix/Shader.hx",151,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(153)
		::haxe::ds::StringMap tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		if ((tmp2)){
			HX_STACK_LINE(155)
			::haxe::ds::StringMap tmp3 = this->uniforms;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(155)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			Dynamic _uniform = tmp5;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(156)
			_uniform->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = _value;
		}
		else{
			HX_STACK_LINE(161)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(162)
			::phoenix::Vector tmp4 = _value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			::snow::modules::opengl::native::GLPO tmp5 = this->program;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			int tmp6 = tmp5->id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(164)
			Dynamic tmp8 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(164)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp9,::phoenix::Vector &tmp4,::String &tmp3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",160,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
						__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp4,false);
						__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)4,false);
						__result->Add(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5") , tmp9,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(160)
			Dynamic tmp10 = _Function_2_1::Block(tmp9,tmp4,tmp3);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(160)
			Dynamic _uniform = tmp10;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(167)
			::haxe::ds::StringMap tmp11 = this->uniforms;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(167)
			::String tmp12 = _name;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(167)
			Dynamic tmp13 = _uniform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(167)
			tmp11->set(tmp12,tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_vector3,(void))

Void Shader_obj::set_vector4( ::String _name,::phoenix::Vector _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_vector4",0x4dc4540a,"phoenix.Shader.set_vector4","phoenix/Shader.hx",173,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(175)
		::haxe::ds::StringMap tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(175)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		if ((tmp2)){
			HX_STACK_LINE(177)
			::haxe::ds::StringMap tmp3 = this->uniforms;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(177)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(177)
			Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			Dynamic _uniform = tmp5;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(178)
			_uniform->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = _value;
		}
		else{
			HX_STACK_LINE(183)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(184)
			::phoenix::Vector tmp4 = _value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(186)
			::snow::modules::opengl::native::GLPO tmp5 = this->program;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(186)
			int tmp6 = tmp5->id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(186)
			::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(186)
			Dynamic tmp8 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(186)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp9,::phoenix::Vector &tmp4,::String &tmp3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",182,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
						__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp4,false);
						__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)5,false);
						__result->Add(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5") , tmp9,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(182)
			Dynamic tmp10 = _Function_2_1::Block(tmp9,tmp4,tmp3);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(182)
			Dynamic _uniform = tmp10;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(189)
			::haxe::ds::StringMap tmp11 = this->uniforms;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(189)
			::String tmp12 = _name;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(189)
			Dynamic tmp13 = _uniform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(189)
			tmp11->set(tmp12,tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_vector4,(void))

Void Shader_obj::set_matrix4( ::String _name,::phoenix::Matrix _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_matrix4",0x068e9ccc,"phoenix.Shader.set_matrix4","phoenix/Shader.hx",195,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(197)
		::haxe::ds::StringMap tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		if ((tmp2)){
			HX_STACK_LINE(199)
			::haxe::ds::StringMap tmp3 = this->uniforms;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(199)
			Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(199)
			Dynamic _uniform = tmp5;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(200)
			_uniform->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = _value;
		}
		else{
			HX_STACK_LINE(205)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			::phoenix::Matrix tmp4 = _value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(208)
			::snow::modules::opengl::native::GLPO tmp5 = this->program;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(208)
			int tmp6 = tmp5->id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(208)
			::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(208)
			Dynamic tmp8 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(208)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp9,::phoenix::Matrix &tmp4,::String &tmp3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",204,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
						__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp4,false);
						__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)8,false);
						__result->Add(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5") , tmp9,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(204)
			Dynamic tmp10 = _Function_2_1::Block(tmp9,tmp4,tmp3);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(204)
			Dynamic _uniform = tmp10;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(211)
			::haxe::ds::StringMap tmp11 = this->uniforms;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(211)
			::String tmp12 = _name;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(211)
			Dynamic tmp13 = _uniform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(211)
			tmp11->set(tmp12,tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_matrix4,(void))

Void Shader_obj::set_color( ::String _name,::phoenix::Color _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_color",0x4e172b1c,"phoenix.Shader.set_color","phoenix/Shader.hx",217,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(219)
		::haxe::ds::StringMap tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		if ((tmp2)){
			HX_STACK_LINE(221)
			::haxe::ds::StringMap tmp3 = this->uniforms;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(221)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(221)
			Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(221)
			Dynamic _uniform = tmp5;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(222)
			_uniform->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = _value;
		}
		else{
			HX_STACK_LINE(227)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(228)
			::phoenix::Color tmp4 = _value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(230)
			::snow::modules::opengl::native::GLPO tmp5 = this->program;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(230)
			int tmp6 = tmp5->id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(230)
			::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(230)
			Dynamic tmp8 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(230)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp9,::phoenix::Color &tmp4,::String &tmp3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",226,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
						__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp4,false);
						__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)9,false);
						__result->Add(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5") , tmp9,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(226)
			Dynamic tmp10 = _Function_2_1::Block(tmp9,tmp4,tmp3);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(226)
			Dynamic _uniform = tmp10;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(233)
			::haxe::ds::StringMap tmp11 = this->uniforms;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(233)
			::String tmp12 = _name;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(233)
			Dynamic tmp13 = _uniform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(233)
			tmp11->set(tmp12,tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_color,(void))

Void Shader_obj::set_texture( ::String _name,::phoenix::Texture _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_texture",0x120822d4,"phoenix.Shader.set_texture","phoenix/Shader.hx",239,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(240)
		::haxe::ds::StringMap tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		if ((tmp2)){
			HX_STACK_LINE(242)
			::haxe::ds::StringMap tmp3 = this->uniforms;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(242)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(242)
			Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(242)
			Dynamic _uniform = tmp5;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(243)
			_uniform->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = _value;
			HX_STACK_LINE(244)
			::haxe::ds::StringMap tmp6 = this->uniform_textures;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(244)
			::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(244)
			::phoenix::Texture tmp8 = _value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(244)
			tmp6->set(tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(249)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			::phoenix::Texture tmp4 = _value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(251)
			::snow::modules::opengl::native::GLPO tmp5 = this->program;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(251)
			int tmp6 = tmp5->id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(251)
			::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(251)
			Dynamic tmp8 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(251)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp9,::phoenix::Texture &tmp4,::String &tmp3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",248,0x14ec92d9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
						__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp4,false);
						__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)10,false);
						__result->Add(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5") , tmp9,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(248)
			Dynamic tmp10 = _Function_2_1::Block(tmp9,tmp4,tmp3);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(248)
			Dynamic _uniform = tmp10;		HX_STACK_VAR(_uniform,"_uniform");
			HX_STACK_LINE(254)
			::haxe::ds::StringMap tmp11 = this->uniforms;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(254)
			::String tmp12 = _name;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(254)
			Dynamic tmp13 = _uniform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(254)
			tmp11->set(tmp12,tmp13);
			HX_STACK_LINE(255)
			::haxe::ds::StringMap tmp14 = this->uniform_textures;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(255)
			::String tmp15 = _name;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(255)
			::phoenix::Texture tmp16 = _value;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(255)
			tmp14->set(tmp15,tmp16);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_texture,(void))

::String Shader_obj::format_log( ::String _log){
	HX_STACK_FRAME("phoenix.Shader","format_log",0x5f4c4a26,"phoenix.Shader.format_log","phoenix/Shader.hx",259,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_log,"_log")
	HX_STACK_LINE(260)
	Array< ::String > _items = _log.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_items,"_items");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	bool run(::String s){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","phoenix/Shader.hx",261,0x14ec92d9)
		HX_STACK_ARG(s,"s")
		{
			HX_STACK_LINE(261)
			::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(261)
			::String tmp1 = ::StringTools_obj::trim(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(261)
			bool tmp2 = (tmp1 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(261)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(261)
	_items = _items->filter( Dynamic(new _Function_1_1()));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	int __ArgCount() const { return 1; }
	::String run(::String s){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","phoenix/Shader.hx",262,0x14ec92d9)
		HX_STACK_ARG(s,"s")
		{
			HX_STACK_LINE(262)
			::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(262)
			::String tmp1 = ::StringTools_obj::trim(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(262)
			::String tmp2 = (HX_HCSTRING("\t\t","\xe0","\x07","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(262)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(262)
	_items = _items->map( Dynamic(new _Function_1_2())).StaticCast< Array< ::String > >();
	HX_STACK_LINE(263)
	::String tmp = _items->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,format_log,return )

::snow::modules::opengl::native::GLSO Shader_obj::compile( int _type,::String _source){
	HX_STACK_FRAME("phoenix.Shader","compile",0x809b7549,"phoenix.Shader.compile","phoenix/Shader.hx",266,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_type,"_type")
	HX_STACK_ARG(_source,"_source")
	HX_STACK_LINE(268)
	::snow::modules::opengl::native::GLSO tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	{
		HX_STACK_LINE(268)
		int tmp1 = _type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(268)
		int tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_shader(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(268)
		int _id = tmp2;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(268)
		::snow::modules::opengl::native::GLSO tmp3 = ::snow::modules::opengl::native::GLSO_obj::__new(_id);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(268)
		tmp = tmp3;
	}
	HX_STACK_LINE(268)
	::snow::modules::opengl::native::GLSO _shader = tmp;		HX_STACK_VAR(_shader,"_shader");
	HX_STACK_LINE(270)
	{
		HX_STACK_LINE(270)
		int tmp1 = _shader->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		::String tmp2 = _source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(270)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_shader_source(tmp1,tmp2);
	}
	HX_STACK_LINE(271)
	{
		HX_STACK_LINE(271)
		int tmp1 = _shader->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_compile_shader(tmp1);
	}
	HX_STACK_LINE(273)
	int tmp1 = _shader->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	::String tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_shader_info_log(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(273)
	::String _compile_log = tmp2;		HX_STACK_VAR(_compile_log,"_compile_log");
	HX_STACK_LINE(274)
	::String _log = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_log,"_log");
	HX_STACK_LINE(276)
	bool tmp3 = (_compile_log.length > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(276)
	if ((tmp3)){
		HX_STACK_LINE(278)
		bool tmp4 = (_type == (int)35632);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(278)
		bool _is_frag = tmp4;		HX_STACK_VAR(_is_frag,"_is_frag");
		HX_STACK_LINE(279)
		bool tmp5 = _is_frag;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(279)
		::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(279)
		if ((tmp5)){
			HX_STACK_LINE(279)
			tmp6 = HX_HCSTRING("frag","\x32","\x99","\xc2","\x43");
		}
		else{
			HX_STACK_LINE(279)
			tmp6 = HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e");
		}
		HX_STACK_LINE(279)
		::String _type_name = tmp6;		HX_STACK_VAR(_type_name,"_type_name");
		HX_STACK_LINE(280)
		bool tmp7 = _is_frag;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(280)
		::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(280)
		if ((tmp7)){
			HX_STACK_LINE(280)
			tmp8 = this->frag_id;
		}
		else{
			HX_STACK_LINE(280)
			tmp8 = this->vert_id;
		}
		HX_STACK_LINE(280)
		::String _type_id = tmp8;		HX_STACK_VAR(_type_id,"_type_id");
		HX_STACK_LINE(282)
		::String tmp9 = (HX_HCSTRING("\n\t// start -- (","\xc7","\x92","\xd2","\xb9") + _type_name);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(282)
		::String tmp10 = (tmp9 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(282)
		::String tmp11 = _type_id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(282)
		::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(282)
		::String tmp13 = (tmp12 + HX_HCSTRING(") compile log --\n","\x6a","\x61","\xa8","\x06"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(282)
		hx::AddEq(_log,tmp13);
		HX_STACK_LINE(283)
		::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			Array< ::String > _items = _compile_log.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_items,"_items");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
			int __ArgCount() const { return 1; }
			bool run(::String s){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","phoenix/Shader.hx",283,0x14ec92d9)
				HX_STACK_ARG(s,"s")
				{
					HX_STACK_LINE(283)
					::String tmp15 = s;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(283)
					::String tmp16 = ::StringTools_obj::trim(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(283)
					bool tmp17 = (tmp16 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(283)
					return tmp17;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(283)
			_items = _items->filter( Dynamic(new _Function_3_1()));

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
			int __ArgCount() const { return 1; }
			::String run(::String s){
				HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","phoenix/Shader.hx",283,0x14ec92d9)
				HX_STACK_ARG(s,"s")
				{
					HX_STACK_LINE(283)
					::String tmp15 = s;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(283)
					::String tmp16 = ::StringTools_obj::trim(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(283)
					::String tmp17 = (HX_HCSTRING("\t\t","\xe0","\x07","\x00","\x00") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(283)
					return tmp17;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(283)
			_items = _items->map( Dynamic(new _Function_3_2())).StaticCast< Array< ::String > >();
			HX_STACK_LINE(283)
			tmp14 = _items->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		}
		HX_STACK_LINE(283)
		hx::AddEq(_log,tmp14);
		HX_STACK_LINE(284)
		hx::AddEq(_log,HX_HCSTRING("\n\t// end --\n","\x64","\x48","\x2d","\x54"));
	}
	HX_STACK_LINE(288)
	int tmp4 = _shader->id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(288)
	int tmp5 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_shader_parameter(tmp4,(int)35713);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(288)
	bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(288)
	if ((tmp6)){
		HX_STACK_LINE(290)
		{
			HX_STACK_LINE(290)
			::String tmp7 = this->id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(290)
			::String tmp8 = (HX_HCSTRING("\tFailed to compile shader `","\xbd","\x54","\xf0","\x32") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(290)
			::String tmp9 = (tmp8 + HX_HCSTRING("`:\n","\xf0","\x0a","\x49","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(290)
			hx::AddEq(this->log,tmp9);
		}
		HX_STACK_LINE(291)
		{
			HX_STACK_LINE(291)
			bool tmp7 = (_log.length == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(291)
			::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(291)
			if ((tmp7)){
				HX_STACK_LINE(291)
				int tmp9 = _shader->id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(291)
				::String tmp10 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_shader_info_log(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(291)
				::String _log1 = tmp10;		HX_STACK_VAR(_log1,"_log1");
				HX_STACK_LINE(291)
				Array< ::String > _items = _log1.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_items,"_items");

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_1)
				int __ArgCount() const { return 1; }
				bool run(::String s){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","phoenix/Shader.hx",291,0x14ec92d9)
					HX_STACK_ARG(s,"s")
					{
						HX_STACK_LINE(291)
						::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(291)
						::String tmp12 = ::StringTools_obj::trim(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(291)
						bool tmp13 = (tmp12 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(291)
						return tmp13;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(291)
				_items = _items->filter( Dynamic(new _Function_4_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_2)
				int __ArgCount() const { return 1; }
				::String run(::String s){
					HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","phoenix/Shader.hx",291,0x14ec92d9)
					HX_STACK_ARG(s,"s")
					{
						HX_STACK_LINE(291)
						::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(291)
						::String tmp12 = ::StringTools_obj::trim(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(291)
						::String tmp13 = (HX_HCSTRING("\t\t","\xe0","\x07","\x00","\x00") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(291)
						return tmp13;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(291)
				_items = _items->map( Dynamic(new _Function_4_2())).StaticCast< Array< ::String > >();
				HX_STACK_LINE(291)
				tmp8 = _items->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(291)
				tmp8 = _log;
			}
			HX_STACK_LINE(291)
			::String _log1 = tmp8;		HX_STACK_VAR(_log1,"_log1");
			HX_STACK_LINE(291)
			hx::AddEq(this->log,_log1);
		}
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(293)
			int tmp7 = _shader->id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(293)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_shader(tmp7);
			HX_STACK_LINE(293)
			_shader->set_invalidated(true);
		}
		HX_STACK_LINE(294)
		_shader = null();
		HX_STACK_LINE(296)
		return null();
	}
	HX_STACK_LINE(300)
	::snow::modules::opengl::native::GLSO tmp7 = _shader;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(300)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,compile,return )

bool Shader_obj::link( ){
	HX_STACK_FRAME("phoenix.Shader","link",0x58342664,"phoenix.Shader.link","phoenix/Shader.hx",303,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(305)
	::snow::modules::opengl::native::GLPO tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(305)
	{
		HX_STACK_LINE(305)
		int tmp1 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_program();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(305)
		int _id = tmp1;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(305)
		::snow::modules::opengl::native::GLPO tmp2 = ::snow::modules::opengl::native::GLPO_obj::__new(_id);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(305)
		tmp = tmp2;
	}
	HX_STACK_LINE(305)
	this->program = tmp;
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		::snow::modules::opengl::native::GLPO tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(307)
		::snow::modules::opengl::native::GLPO program = tmp1;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(307)
		::snow::modules::opengl::native::GLSO tmp2 = this->vert_shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(307)
		::snow::modules::opengl::native::GLSO shader = tmp2;		HX_STACK_VAR(shader,"shader");
		HX_STACK_LINE(307)
		::snow::modules::opengl::native::GLSO tmp3 = shader;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(307)
		program->shaders->push(tmp3);
		HX_STACK_LINE(307)
		int tmp4 = program->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(307)
		int tmp5 = shader->id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(307)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_attach_shader(tmp4,tmp5);
	}
	HX_STACK_LINE(308)
	{
		HX_STACK_LINE(308)
		::snow::modules::opengl::native::GLPO tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(308)
		::snow::modules::opengl::native::GLPO program = tmp1;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(308)
		::snow::modules::opengl::native::GLSO tmp2 = this->frag_shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(308)
		::snow::modules::opengl::native::GLSO shader = tmp2;		HX_STACK_VAR(shader,"shader");
		HX_STACK_LINE(308)
		::snow::modules::opengl::native::GLSO tmp3 = shader;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(308)
		program->shaders->push(tmp3);
		HX_STACK_LINE(308)
		int tmp4 = program->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(308)
		int tmp5 = shader->id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(308)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_attach_shader(tmp4,tmp5);
	}
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		::snow::modules::opengl::native::GLPO tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(311)
		int tmp2 = tmp1->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(311)
		int tmp3 = this->vert_attribute;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(311)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_attrib_location(tmp2,tmp3,HX_HCSTRING("vertexPosition","\x2d","\x3c","\x14","\x50"));
	}
	HX_STACK_LINE(312)
	{
		HX_STACK_LINE(312)
		::snow::modules::opengl::native::GLPO tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		int tmp2 = tmp1->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		int tmp3 = this->tcoord_attribute;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(312)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_attrib_location(tmp2,tmp3,HX_HCSTRING("vertexTCoord","\x25","\xf8","\x06","\xdf"));
	}
	HX_STACK_LINE(313)
	{
		HX_STACK_LINE(313)
		::snow::modules::opengl::native::GLPO tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		int tmp2 = tmp1->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		int tmp3 = this->color_attribute;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(313)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_attrib_location(tmp2,tmp3,HX_HCSTRING("vertexColor","\x5f","\x3b","\x98","\x5e"));
	}
	HX_STACK_LINE(314)
	{
		HX_STACK_LINE(314)
		::snow::modules::opengl::native::GLPO tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(314)
		int tmp2 = tmp1->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(314)
		int tmp3 = this->normal_attribute;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_attrib_location(tmp2,tmp3,HX_HCSTRING("vertexNormal","\xab","\x64","\x7e","\xd0"));
	}
	HX_STACK_LINE(316)
	{
		HX_STACK_LINE(316)
		::snow::modules::opengl::native::GLPO tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		int tmp2 = tmp1->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(316)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_link_program(tmp2);
	}
	HX_STACK_LINE(318)
	::snow::modules::opengl::native::GLPO tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(318)
	int tmp2 = tmp1->id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(318)
	int tmp3 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_program_parameter(tmp2,(int)35714);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(318)
	bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(318)
	if ((tmp4)){
		HX_STACK_LINE(319)
		hx::AddEq(this->log,HX_HCSTRING("\tFailed to link shader program:","\xb6","\xc0","\x1d","\xe8"));
		HX_STACK_LINE(320)
		{
			HX_STACK_LINE(320)
			::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(320)
			{
				HX_STACK_LINE(320)
				::snow::modules::opengl::native::GLPO tmp6 = this->program;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(320)
				int tmp7 = tmp6->id;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(320)
				::String tmp8 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_program_info_log(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(320)
				::String _log = tmp8;		HX_STACK_VAR(_log,"_log");
				HX_STACK_LINE(320)
				Array< ::String > _items = _log.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_items,"_items");

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_1)
				int __ArgCount() const { return 1; }
				bool run(::String s){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","phoenix/Shader.hx",320,0x14ec92d9)
					HX_STACK_ARG(s,"s")
					{
						HX_STACK_LINE(320)
						::String tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(320)
						::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(320)
						bool tmp11 = (tmp10 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(320)
						return tmp11;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(320)
				_items = _items->filter( Dynamic(new _Function_4_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_2)
				int __ArgCount() const { return 1; }
				::String run(::String s){
					HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","phoenix/Shader.hx",320,0x14ec92d9)
					HX_STACK_ARG(s,"s")
					{
						HX_STACK_LINE(320)
						::String tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(320)
						::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(320)
						::String tmp11 = (HX_HCSTRING("\t\t","\xe0","\x07","\x00","\x00") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(320)
						return tmp11;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(320)
				_items = _items->map( Dynamic(new _Function_4_2())).StaticCast< Array< ::String > >();
				HX_STACK_LINE(320)
				tmp5 = _items->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(320)
			::String _log = tmp5;		HX_STACK_VAR(_log,"_log");
			HX_STACK_LINE(320)
			hx::AddEq(this->log,_log);
		}
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(321)
			::snow::modules::opengl::native::GLPO tmp5 = this->program;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(321)
			::snow::modules::opengl::native::GLPO program = tmp5;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(321)
			int tmp6 = program->id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(321)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_program(tmp6);
			HX_STACK_LINE(321)
			program->set_invalidated(true);
		}
		HX_STACK_LINE(322)
		this->program = null();
		HX_STACK_LINE(323)
		return false;
	}
	HX_STACK_LINE(327)
	this->activate();
	HX_STACK_LINE(333)
	::snow::modules::opengl::native::GLPO tmp5 = this->program;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(333)
	int tmp6 = tmp5->id;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(333)
	Dynamic tmp7 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(333)
	this->projectionmatrix_attribute = tmp7;
	HX_STACK_LINE(334)
	::snow::modules::opengl::native::GLPO tmp8 = this->program;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(334)
	int tmp9 = tmp8->id;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(334)
	Dynamic tmp10 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp9,HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(334)
	this->modelviewmatrix_attribute = tmp10;
	HX_STACK_LINE(337)
	::snow::modules::opengl::native::GLPO tmp11 = this->program;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(337)
	int tmp12 = tmp11->id;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(337)
	Dynamic tmp13 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp12,HX_HCSTRING("tex0","\x69","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(337)
	this->tex0_attribute = tmp13;
	HX_STACK_LINE(338)
	::snow::modules::opengl::native::GLPO tmp14 = this->program;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(338)
	int tmp15 = tmp14->id;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(338)
	Dynamic tmp16 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp15,HX_HCSTRING("tex1","\x6a","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(338)
	this->tex1_attribute = tmp16;
	HX_STACK_LINE(339)
	::snow::modules::opengl::native::GLPO tmp17 = this->program;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(339)
	int tmp18 = tmp17->id;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(339)
	Dynamic tmp19 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp18,HX_HCSTRING("tex2","\x6b","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(339)
	this->tex2_attribute = tmp19;
	HX_STACK_LINE(340)
	::snow::modules::opengl::native::GLPO tmp20 = this->program;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(340)
	int tmp21 = tmp20->id;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(340)
	Dynamic tmp22 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp21,HX_HCSTRING("tex3","\x6c","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(340)
	this->tex3_attribute = tmp22;
	HX_STACK_LINE(341)
	::snow::modules::opengl::native::GLPO tmp23 = this->program;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(341)
	int tmp24 = tmp23->id;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(341)
	Dynamic tmp25 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp24,HX_HCSTRING("tex4","\x6d","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(341)
	this->tex4_attribute = tmp25;
	HX_STACK_LINE(342)
	::snow::modules::opengl::native::GLPO tmp26 = this->program;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(342)
	int tmp27 = tmp26->id;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(342)
	Dynamic tmp28 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp27,HX_HCSTRING("tex5","\x6e","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(342)
	this->tex5_attribute = tmp28;
	HX_STACK_LINE(343)
	::snow::modules::opengl::native::GLPO tmp29 = this->program;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(343)
	int tmp30 = tmp29->id;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(343)
	Dynamic tmp31 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp30,HX_HCSTRING("tex6","\x6f","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(343)
	this->tex6_attribute = tmp31;
	HX_STACK_LINE(344)
	::snow::modules::opengl::native::GLPO tmp32 = this->program;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(344)
	int tmp33 = tmp32->id;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(344)
	Dynamic tmp34 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp33,HX_HCSTRING("tex7","\x70","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(344)
	this->tex7_attribute = tmp34;
	HX_STACK_LINE(346)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,link,return )

Void Shader_obj::clear( ){
{
		HX_STACK_FRAME("phoenix.Shader","clear",0xa8c6ffe3,"phoenix.Shader.clear","phoenix/Shader.hx",352,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(354)
		::snow::modules::opengl::native::GLSO tmp = this->vert_shader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(354)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(354)
		if ((tmp1)){
			HX_STACK_LINE(354)
			::snow::modules::opengl::native::GLSO tmp2 = this->vert_shader;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(354)
			::snow::modules::opengl::native::GLSO shader = tmp2;		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(354)
			int tmp3 = shader->id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(354)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_shader(tmp3);
			HX_STACK_LINE(354)
			shader->set_invalidated(true);
		}
		HX_STACK_LINE(355)
		::snow::modules::opengl::native::GLSO tmp2 = this->frag_shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(355)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(355)
		if ((tmp3)){
			HX_STACK_LINE(355)
			::snow::modules::opengl::native::GLSO tmp4 = this->frag_shader;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(355)
			::snow::modules::opengl::native::GLSO shader = tmp4;		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(355)
			int tmp5 = shader->id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(355)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_shader(tmp5);
			HX_STACK_LINE(355)
			shader->set_invalidated(true);
		}
		HX_STACK_LINE(356)
		::snow::modules::opengl::native::GLPO tmp4 = this->program;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(356)
		if ((tmp5)){
			HX_STACK_LINE(356)
			::snow::modules::opengl::native::GLPO tmp6 = this->program;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(356)
			::snow::modules::opengl::native::GLPO program = tmp6;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(356)
			int tmp7 = program->id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(356)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_program(tmp7);
			HX_STACK_LINE(356)
			program->set_invalidated(true);
		}
		HX_STACK_LINE(358)
		this->vert_source = null();
		HX_STACK_LINE(359)
		this->frag_source = null();
	}
return null();
}


::snow::api::Promise Shader_obj::reload( ){
	HX_STACK_FRAME("phoenix.Shader","reload",0x01905043,"phoenix.Shader.reload","phoenix/Shader.hx",363,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(363)
	::phoenix::Shader _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(365)
	{
		HX_STACK_LINE(365)
		int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(365)
		bool tmp1 = (tmp != (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(365)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(365)
		if ((tmp2)){
			HX_STACK_LINE(365)
			::luxe::DebugError tmp3 = ::luxe::DebugError_obj::assertion(HX_HCSTRING("state != ResourceState.destroyed","\x79","\xbe","\xa0","\xbf"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(365)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(367)
	this->clear();

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::phoenix::Shader,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","phoenix/Shader.hx",369,0x14ec92d9)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(371)
			_g->set_state((int)2);
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::String _g1 = _g->frag_id;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(373)
				::String tmp = _g1;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(373)
				::String _switch_1 = (tmp);
				if (  ( _switch_1==HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"))){
					HX_STACK_LINE(374)
					::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(374)
					Dynamic tmp2 = tmp1->shaders->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(374)
					::String tmp3 = tmp2->__Field(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("frag","\x32","\x99","\xc2","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(374)
					_g->frag_source = tmp3;
				}
				else if (  ( _switch_1==HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"))){
					HX_STACK_LINE(375)
					::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(375)
					Dynamic tmp2 = tmp1->shaders->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(375)
					::String tmp3 = tmp2->__Field(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("frag","\x32","\x99","\xc2","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(375)
					_g->frag_source = tmp3;
				}
			}
			HX_STACK_LINE(378)
			{
				HX_STACK_LINE(378)
				::String _g1 = _g->vert_id;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(378)
				::String tmp = _g1;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(378)
				::String _switch_2 = (tmp);
				if (  ( _switch_2==HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"))){
					HX_STACK_LINE(379)
					::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(379)
					Dynamic tmp2 = tmp1->shaders->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(379)
					::String tmp3 = tmp2->__Field(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(379)
					_g->vert_source = tmp3;
				}
			}

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::phoenix::Shader,_g,Dynamic,reject)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _err){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","phoenix/Shader.hx",382,0x14ec92d9)
				HX_STACK_ARG(_err,"_err")
				{
					HX_STACK_LINE(383)
					_g->set_state((int)4);
					HX_STACK_LINE(384)
					Dynamic tmp = _err;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(384)
					reject(tmp);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(382)
			Dynamic _onfail =  Dynamic(new _Function_2_1(_g,reject));		HX_STACK_VAR(_onfail,"_onfail");
			HX_STACK_LINE(388)
			::snow::api::Promise tmp = ::snow::api::Promise_obj::resolve(null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(388)
			Array< ::Dynamic > _wait = Array_obj< ::Dynamic >::__new().Add(tmp);		HX_STACK_VAR(_wait,"_wait");
			HX_STACK_LINE(390)
			bool tmp1 = (_g->frag_source == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(390)
			if ((tmp1)){
				HX_STACK_LINE(392)
				::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(392)
				::snow::_system::assets::Assets tmp3 = tmp2->app->assets;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(392)
				::String tmp4 = _g->frag_id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(392)
				::snow::api::Promise tmp5 = ::snow::_system::assets::AssetText_obj::load(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(392)
				::snow::api::Promise _frag = tmp5;		HX_STACK_VAR(_frag,"_frag");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,::phoenix::Shader,_g)
				int __ArgCount() const { return 1; }
				Void run(::snow::_system::assets::AssetText _asset){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","phoenix/Shader.hx",395,0x14ec92d9)
					HX_STACK_ARG(_asset,"_asset")
					{
						HX_STACK_LINE(395)
						_g->frag_source = _asset->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(394)
				_frag->then( Dynamic(new _Function_3_1(_g)),null());
				HX_STACK_LINE(398)
				::snow::api::Promise tmp6 = _frag;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(398)
				_wait->push(tmp6);
			}
			HX_STACK_LINE(402)
			bool tmp2 = (_g->vert_source == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(402)
			if ((tmp2)){
				HX_STACK_LINE(404)
				::luxe::Core tmp3 = ::Luxe_obj::core;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(404)
				::snow::_system::assets::Assets tmp4 = tmp3->app->assets;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(404)
				::String tmp5 = _g->vert_id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(404)
				::snow::api::Promise tmp6 = ::snow::_system::assets::AssetText_obj::load(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(404)
				::snow::api::Promise _vert = tmp6;		HX_STACK_VAR(_vert,"_vert");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,::phoenix::Shader,_g)
				int __ArgCount() const { return 1; }
				Void run(::snow::_system::assets::AssetText _asset){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","phoenix/Shader.hx",407,0x14ec92d9)
					HX_STACK_ARG(_asset,"_asset")
					{
						HX_STACK_LINE(407)
						_g->vert_source = _asset->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(406)
				_vert->then( Dynamic(new _Function_3_1(_g)),null());
				HX_STACK_LINE(410)
				::snow::api::Promise tmp7 = _vert;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(410)
				_wait->push(tmp7);
			}
			HX_STACK_LINE(414)
			::snow::api::Promise tmp3 = ::snow::api::Promise_obj::all(_wait);		HX_STACK_VAR(tmp3,"tmp3");

			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_2,::phoenix::Shader,_g,Dynamic,_onfail,Dynamic,resolve)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","phoenix/Shader.hx",414,0x14ec92d9)
				{
					HX_STACK_LINE(422)
					::String tmp4 = _g->vert_source;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(422)
					::String tmp5 = _g->frag_source;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(422)
					bool tmp6 = _g->from_string(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(422)
					if ((tmp6)){
						HX_STACK_LINE(423)
						_g->set_state((int)3);
						HX_STACK_LINE(424)
						::phoenix::Shader tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(424)
						resolve(tmp7);
					}
					else{
						HX_STACK_LINE(426)
						::String tmp7 = (HX_HCSTRING("`","\x60","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(426)
						::String tmp8 = (tmp7 + HX_HCSTRING("` failed to create :\n\n","\xf8","\xd8","\xb3","\xe6"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(426)
						::String tmp9 = _g->log;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(426)
						::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(426)
						::snow::types::Error tmp11 = ::snow::types::Error_obj::error(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(426)
						_onfail(tmp11).Cast< Void >();
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(414)
			::snow::api::Promise tmp4 = tmp3->then( Dynamic(new _Function_2_2(_g,_onfail,resolve)),null());		HX_STACK_VAR(tmp4,"tmp4");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_3,::phoenix::Shader,_g,Dynamic,_onfail)
			int __ArgCount() const { return 1; }
			Void run(::String err){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","phoenix/Shader.hx",429,0x14ec92d9)
				HX_STACK_ARG(err,"err")
				{
					HX_STACK_LINE(430)
					::String tmp5 = (HX_HCSTRING("`","\x60","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(430)
					::String tmp6 = (tmp5 + HX_HCSTRING("` failed to create :\n\t\t","\x32","\xff","\xa9","\xf6"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(430)
					::String tmp7 = err;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(430)
					::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(430)
					::String tmp9 = (tmp8 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(430)
					::snow::types::Error tmp10 = ::snow::types::Error_obj::error(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(430)
					_onfail(tmp10).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(414)
			tmp4->error( Dynamic(new _Function_2_3(_g,_onfail)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(369)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(369)
	return tmp;
}


bool Shader_obj::from_string( ::String _vert_source,::String _fragment_source){
	HX_STACK_FRAME("phoenix.Shader","from_string",0x2d56691c,"phoenix.Shader.from_string","phoenix/Shader.hx",438,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vert_source,"_vert_source")
	HX_STACK_ARG(_fragment_source,"_fragment_source")
	HX_STACK_LINE(438)
	::phoenix::Shader _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(446)
	this->clear();
	HX_STACK_LINE(448)
	this->frag_source = _fragment_source;
	HX_STACK_LINE(449)
	this->vert_source = _vert_source;
	HX_STACK_LINE(452)
	::String tmp = this->vert_source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(452)
	::snow::modules::opengl::native::GLSO tmp1 = this->compile((int)35633,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(452)
	this->vert_shader = tmp1;
	HX_STACK_LINE(453)
	::String tmp2 = this->frag_source;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(453)
	::snow::modules::opengl::native::GLSO tmp3 = this->compile((int)35632,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(453)
	this->frag_shader = tmp3;
	HX_STACK_LINE(455)
	::snow::modules::opengl::native::GLSO tmp4 = this->vert_shader;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(455)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(455)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(455)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(455)
	if ((tmp6)){
		HX_STACK_LINE(455)
		::snow::modules::opengl::native::GLSO tmp8 = this->frag_shader;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(455)
		::snow::modules::opengl::native::GLSO tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(455)
		tmp7 = (tmp9 == null());
	}
	else{
		HX_STACK_LINE(455)
		tmp7 = true;
	}
	HX_STACK_LINE(455)
	if ((tmp7)){
		HX_STACK_LINE(456)
		{
			HX_STACK_LINE(456)
			int tmp8 = _g->log.length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(456)
			bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(456)
			if ((tmp9)){
				HX_STACK_LINE(456)
				::String tmp10 = (HX_HCSTRING("   i / shader / ","\xa4","\x59","\x57","\x90") + _g->log);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(456)
				Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),442,HX_HCSTRING("phoenix.Shader","\x44","\xea","\x01","\x9b"),HX_HCSTRING("from_string","\x46","\x76","\x96","\x4a"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(456)
				::haxe::Log_obj::trace(tmp10,tmp11);
			}
		}
		HX_STACK_LINE(457)
		return false;
	}
	HX_STACK_LINE(461)
	bool tmp8 = this->link();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(461)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(461)
	if ((tmp9)){
		HX_STACK_LINE(462)
		{
			HX_STACK_LINE(462)
			int tmp10 = _g->log.length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(462)
			bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(462)
			if ((tmp11)){
				HX_STACK_LINE(462)
				::String tmp12 = (HX_HCSTRING("   i / shader / ","\xa4","\x59","\x57","\x90") + _g->log);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(462)
				Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),442,HX_HCSTRING("phoenix.Shader","\x44","\xea","\x01","\x9b"),HX_HCSTRING("from_string","\x46","\x76","\x96","\x4a"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(462)
				::haxe::Log_obj::trace(tmp12,tmp13);
			}
		}
		HX_STACK_LINE(463)
		return false;
	}
	HX_STACK_LINE(466)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,from_string,return )

Void Shader_obj::apply_uniforms( ){
{
		HX_STACK_FRAME("phoenix.Shader","apply_uniforms",0x384d17da,"phoenix.Shader.apply_uniforms","phoenix/Shader.hx",470,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(472)
		Dynamic tmp = this->tex0_attribute;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(472)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(472)
		if ((tmp1)){
			HX_STACK_LINE(472)
			Dynamic tmp2 = this->tex0_attribute;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(472)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp2,(int)0);
		}
		HX_STACK_LINE(473)
		Dynamic tmp2 = this->tex1_attribute;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(473)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(473)
		if ((tmp3)){
			HX_STACK_LINE(473)
			Dynamic tmp4 = this->tex1_attribute;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(473)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp4,(int)1);
		}
		HX_STACK_LINE(474)
		Dynamic tmp4 = this->tex2_attribute;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(474)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(474)
		if ((tmp5)){
			HX_STACK_LINE(474)
			Dynamic tmp6 = this->tex2_attribute;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(474)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp6,(int)2);
		}
		HX_STACK_LINE(475)
		Dynamic tmp6 = this->tex3_attribute;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(475)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(475)
		if ((tmp7)){
			HX_STACK_LINE(475)
			Dynamic tmp8 = this->tex3_attribute;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(475)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp8,(int)3);
		}
		HX_STACK_LINE(476)
		Dynamic tmp8 = this->tex4_attribute;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(476)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(476)
		if ((tmp9)){
			HX_STACK_LINE(476)
			Dynamic tmp10 = this->tex4_attribute;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(476)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp10,(int)4);
		}
		HX_STACK_LINE(477)
		Dynamic tmp10 = this->tex5_attribute;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(477)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(477)
		if ((tmp11)){
			HX_STACK_LINE(477)
			Dynamic tmp12 = this->tex5_attribute;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(477)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp12,(int)5);
		}
		HX_STACK_LINE(478)
		Dynamic tmp12 = this->tex6_attribute;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(478)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(478)
		if ((tmp13)){
			HX_STACK_LINE(478)
			Dynamic tmp14 = this->tex6_attribute;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(478)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp14,(int)6);
		}
		HX_STACK_LINE(479)
		Dynamic tmp14 = this->tex7_attribute;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(479)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(479)
		if ((tmp15)){
			HX_STACK_LINE(479)
			Dynamic tmp16 = this->tex7_attribute;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(479)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp16,(int)7);
		}
		HX_STACK_LINE(481)
		::haxe::ds::StringMap tmp16 = this->uniforms;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(481)
		Dynamic tmp17 = tmp16->iterator();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(481)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp17);  __it->hasNext(); ){
			Dynamic uniform = __it->next();
			{
				HX_STACK_LINE(483)
				int _g = uniform->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(483)
				int tmp18 = _g;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(483)
				switch( (int)(tmp18)){
					case (int)1: {
						HX_STACK_LINE(484)
						int _int = uniform->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(_int,"_int");
						HX_STACK_LINE(484)
						{
							HX_STACK_LINE(484)
							Dynamic tmp19 = uniform->__Field(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(484)
							int tmp20 = _int;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(484)
							::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp19,tmp20);
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(485)
						Float _float = uniform->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(_float,"_float");
						HX_STACK_LINE(485)
						{
							HX_STACK_LINE(485)
							Dynamic tmp19 = uniform->__Field(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(485)
							Float tmp20 = _float;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(485)
							::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1f(tmp19,tmp20);
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(486)
						::phoenix::Vector _vec = uniform->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(_vec,"_vec");
						HX_STACK_LINE(486)
						{
							HX_STACK_LINE(486)
							Dynamic tmp19 = uniform->__Field(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(486)
							Float tmp20 = _vec->x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(486)
							Float tmp21 = _vec->y;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(486)
							::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform2f(tmp19,tmp20,tmp21);
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(487)
						::phoenix::Vector _vec = uniform->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(_vec,"_vec");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							Dynamic tmp19 = uniform->__Field(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(487)
							Float tmp20 = _vec->x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(487)
							Float tmp21 = _vec->y;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(487)
							Float tmp22 = _vec->z;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(487)
							::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform3f(tmp19,tmp20,tmp21,tmp22);
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(488)
						::phoenix::Vector _vec = uniform->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(_vec,"_vec");
						HX_STACK_LINE(488)
						{
							HX_STACK_LINE(488)
							Dynamic tmp19 = uniform->__Field(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(488)
							Float tmp20 = _vec->x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(488)
							Float tmp21 = _vec->y;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(488)
							Float tmp22 = _vec->z;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(488)
							Float tmp23 = _vec->w;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(488)
							::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform4f(tmp19,tmp20,tmp21,tmp22,tmp23);
						}
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(489)
						Dynamic _location = uniform->__Field(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"), hx::paccDynamic );		HX_STACK_VAR(_location,"_location");
						HX_STACK_LINE(489)
						::phoenix::Matrix _mat = uniform->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(_mat,"_mat");
						HX_STACK_LINE(489)
						{
							HX_STACK_LINE(489)
							::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(489)
							{
								HX_STACK_LINE(489)
								cpp::ArrayBase array = _mat->elements;		HX_STACK_VAR(array,"array");
								HX_STACK_LINE(489)
								::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(489)
								bool tmp20 = (array != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(489)
								if ((tmp20)){
									HX_STACK_LINE(489)
									::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(489)
									{
										HX_STACK_LINE(489)
										::snow::api::buffers::ArrayBufferView tmp22 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(489)
										::snow::api::buffers::ArrayBufferView _this = tmp22;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(489)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(489)
										_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
										HX_STACK_LINE(489)
										int tmp23 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(489)
										_this->byteLength = tmp23;
										HX_STACK_LINE(489)
										::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(489)
										{
											HX_STACK_LINE(489)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(489)
											int tmp25 = _this->byteLength;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(489)
											::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(489)
											this2 = tmp26;
											HX_STACK_LINE(489)
											tmp24 = this2;
										}
										HX_STACK_LINE(489)
										_this->buffer = tmp24;
										HX_STACK_LINE(489)
										_this->copyFromArray(((Array< Float >)(array)),null());
										HX_STACK_LINE(489)
										tmp21 = _this;
									}
									HX_STACK_LINE(489)
									this1 = tmp21;
								}
								else{
									HX_STACK_LINE(489)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
								HX_STACK_LINE(489)
								tmp19 = this1;
							}
							HX_STACK_LINE(489)
							::snow::api::buffers::ArrayBufferView data = tmp19;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(489)
							bool tmp20 = (data != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(489)
							if ((tmp20)){
								HX_STACK_LINE(489)
								Dynamic tmp21 = _location;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(489)
								int tmp22 = data->byteOffset;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(489)
								int tmp23 = data->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(489)
								::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp21,false,data->buffer->b,tmp22,tmp23,(int)4);
							}
							else{
								HX_STACK_LINE(489)
								Dynamic tmp21 = _location;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(489)
								::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp21,false,null(),(int)0,(int)0,(int)4);
							}
						}
					}
					;break;
					case (int)9: {
						HX_STACK_LINE(490)
						::phoenix::Color _color = uniform->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(_color,"_color");
						HX_STACK_LINE(490)
						{
							HX_STACK_LINE(490)
							Dynamic tmp19 = uniform->__Field(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(490)
							Float tmp20 = _color->r;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(490)
							Float tmp21 = _color->g;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(490)
							Float tmp22 = _color->b;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(490)
							Float tmp23 = _color->a;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(490)
							::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform4f(tmp19,tmp20,tmp21,tmp22,tmp23);
						}
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(491)
						::phoenix::Texture _tex = uniform->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(_tex,"_tex");
						HX_STACK_LINE(491)
						{
							HX_STACK_LINE(491)
							Dynamic tmp19 = uniform->__Field(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(491)
							int tmp20 = _tex->slot;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(491)
							::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp19,tmp20);
						}
						HX_STACK_LINE(491)
						_tex->bind();
					}
					;break;
					case (int)0: {
					}
					;break;
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,apply_uniforms,(void))

Dynamic Shader_obj::location( ::String _name){
	HX_STACK_FRAME("phoenix.Shader","location",0x6edff99f,"phoenix.Shader.location","phoenix/Shader.hx",499,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(500)
	::snow::modules::opengl::native::GLPO tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(500)
	int tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(500)
	::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(500)
	Dynamic tmp3 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(500)
	Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(500)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,location,return )

Void Shader_obj::apply_int( Dynamic _location,int _int){
{
		HX_STACK_FRAME("phoenix.Shader","apply_int",0x1ad197b4,"phoenix.Shader.apply_int","phoenix/Shader.hx",504,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_int,"_int")
		HX_STACK_LINE(504)
		Dynamic tmp = _location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(504)
		int tmp1 = _int;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(504)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_int,(void))

Void Shader_obj::apply_float( Dynamic _location,Float _float){
{
		HX_STACK_FRAME("phoenix.Shader","apply_float",0xe8a44ba1,"phoenix.Shader.apply_float","phoenix/Shader.hx",508,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_float,"_float")
		HX_STACK_LINE(508)
		Dynamic tmp = _location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(508)
		Float tmp1 = _float;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(508)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1f(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_float,(void))

Void Shader_obj::apply_vec2( Dynamic _location,::phoenix::Vector _vec){
{
		HX_STACK_FRAME("phoenix.Shader","apply_vec2",0x652408f9,"phoenix.Shader.apply_vec2","phoenix/Shader.hx",512,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_vec,"_vec")
		HX_STACK_LINE(512)
		Dynamic tmp = _location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(512)
		Float tmp1 = _vec->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(512)
		Float tmp2 = _vec->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(512)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform2f(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_vec2,(void))

Void Shader_obj::apply_vec3( Dynamic _location,::phoenix::Vector _vec){
{
		HX_STACK_FRAME("phoenix.Shader","apply_vec3",0x652408fa,"phoenix.Shader.apply_vec3","phoenix/Shader.hx",516,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_vec,"_vec")
		HX_STACK_LINE(516)
		Dynamic tmp = _location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(516)
		Float tmp1 = _vec->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(516)
		Float tmp2 = _vec->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(516)
		Float tmp3 = _vec->z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(516)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform3f(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_vec3,(void))

Void Shader_obj::apply_vec4( Dynamic _location,::phoenix::Vector _vec){
{
		HX_STACK_FRAME("phoenix.Shader","apply_vec4",0x652408fb,"phoenix.Shader.apply_vec4","phoenix/Shader.hx",520,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_vec,"_vec")
		HX_STACK_LINE(520)
		Dynamic tmp = _location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(520)
		Float tmp1 = _vec->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(520)
		Float tmp2 = _vec->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(520)
		Float tmp3 = _vec->z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(520)
		Float tmp4 = _vec->w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(520)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform4f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_vec4,(void))

Void Shader_obj::apply_mat4( Dynamic _location,::phoenix::Matrix _mat){
{
		HX_STACK_FRAME("phoenix.Shader","apply_mat4",0x5f2e232f,"phoenix.Shader.apply_mat4","phoenix/Shader.hx",524,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_mat,"_mat")
		HX_STACK_LINE(524)
		::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(524)
		{
			HX_STACK_LINE(524)
			cpp::ArrayBase array = _mat->elements;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(524)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(524)
			bool tmp1 = (array != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(524)
			if ((tmp1)){
				HX_STACK_LINE(524)
				::snow::api::buffers::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(524)
				{
					HX_STACK_LINE(524)
					::snow::api::buffers::ArrayBufferView tmp3 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(524)
					::snow::api::buffers::ArrayBufferView _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(524)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(524)
					_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
					HX_STACK_LINE(524)
					int tmp4 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(524)
					_this->byteLength = tmp4;
					HX_STACK_LINE(524)
					::haxe::io::Bytes tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(524)
					{
						HX_STACK_LINE(524)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(524)
						int tmp6 = _this->byteLength;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(524)
						::haxe::io::Bytes tmp7 = ::haxe::io::Bytes_obj::alloc(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(524)
						this2 = tmp7;
						HX_STACK_LINE(524)
						tmp5 = this2;
					}
					HX_STACK_LINE(524)
					_this->buffer = tmp5;
					HX_STACK_LINE(524)
					_this->copyFromArray(((Array< Float >)(array)),null());
					HX_STACK_LINE(524)
					tmp2 = _this;
				}
				HX_STACK_LINE(524)
				this1 = tmp2;
			}
			else{
				HX_STACK_LINE(524)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
			}
			HX_STACK_LINE(524)
			tmp = this1;
		}
		HX_STACK_LINE(524)
		::snow::api::buffers::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(524)
		bool tmp1 = (data != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(524)
		if ((tmp1)){
			HX_STACK_LINE(524)
			Dynamic tmp2 = _location;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(524)
			int tmp3 = data->byteOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(524)
			int tmp4 = data->byteLength;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(524)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp2,false,data->buffer->b,tmp3,tmp4,(int)4);
		}
		else{
			HX_STACK_LINE(524)
			Dynamic tmp2 = _location;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(524)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp2,false,null(),(int)0,(int)0,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_mat4,(void))

Void Shader_obj::apply_color( Dynamic _location,::phoenix::Color _color){
{
		HX_STACK_FRAME("phoenix.Shader","apply_color",0x3069f768,"phoenix.Shader.apply_color","phoenix/Shader.hx",528,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_color,"_color")
		HX_STACK_LINE(528)
		Dynamic tmp = _location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(528)
		Float tmp1 = _color->r;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(528)
		Float tmp2 = _color->g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(528)
		Float tmp3 = _color->b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(528)
		Float tmp4 = _color->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(528)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform4f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_color,(void))

Void Shader_obj::apply_texture( Dynamic _location,::phoenix::Texture _tex){
{
		HX_STACK_FRAME("phoenix.Shader","apply_texture",0x47df9a20,"phoenix.Shader.apply_texture","phoenix/Shader.hx",531,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_location,"_location")
		HX_STACK_ARG(_tex,"_tex")
		HX_STACK_LINE(532)
		{
			HX_STACK_LINE(532)
			Dynamic tmp = _location;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(532)
			int tmp1 = _tex->slot;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(532)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp,tmp1);
		}
		HX_STACK_LINE(533)
		_tex->bind();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,apply_texture,(void))

Void Shader_obj::add_log( ::String _log){
{
		HX_STACK_FRAME("phoenix.Shader","add_log",0x8dadfffc,"phoenix.Shader.add_log","phoenix/Shader.hx",537,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_log,"_log")
		HX_STACK_LINE(537)
		hx::AddEq(this->log,_log);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,add_log,(void))

::String Shader_obj::toString( ){
	HX_STACK_FRAME("phoenix.Shader","toString",0xc2085c16,"phoenix.Shader.toString","phoenix/Shader.hx",540,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(541)
	::String tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(541)
	::String tmp1 = (HX_HCSTRING("Shader(","\x43","\xa9","\xd7","\x2c") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(541)
	::String tmp2 = (tmp1 + HX_HCSTRING(") vert:","\x32","\x77","\xbd","\xa8"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(541)
	::String tmp3 = this->vert_id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(541)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(541)
	::String tmp5 = (tmp4 + HX_HCSTRING(" / frag: ","\x49","\xe8","\x9f","\xbd"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(541)
	::String tmp6 = this->frag_id;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(541)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(541)
	return tmp7;
}



Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(vert_source,"vert_source");
	HX_MARK_MEMBER_NAME(frag_source,"frag_source");
	HX_MARK_MEMBER_NAME(vert_id,"vert_id");
	HX_MARK_MEMBER_NAME(frag_id,"frag_id");
	HX_MARK_MEMBER_NAME(vert_shader,"vert_shader");
	HX_MARK_MEMBER_NAME(frag_shader,"frag_shader");
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(vert_attribute,"vert_attribute");
	HX_MARK_MEMBER_NAME(tcoord_attribute,"tcoord_attribute");
	HX_MARK_MEMBER_NAME(color_attribute,"color_attribute");
	HX_MARK_MEMBER_NAME(normal_attribute,"normal_attribute");
	HX_MARK_MEMBER_NAME(projectionmatrix_attribute,"projectionmatrix_attribute");
	HX_MARK_MEMBER_NAME(modelviewmatrix_attribute,"modelviewmatrix_attribute");
	HX_MARK_MEMBER_NAME(tex0_attribute,"tex0_attribute");
	HX_MARK_MEMBER_NAME(tex1_attribute,"tex1_attribute");
	HX_MARK_MEMBER_NAME(tex2_attribute,"tex2_attribute");
	HX_MARK_MEMBER_NAME(tex3_attribute,"tex3_attribute");
	HX_MARK_MEMBER_NAME(tex4_attribute,"tex4_attribute");
	HX_MARK_MEMBER_NAME(tex5_attribute,"tex5_attribute");
	HX_MARK_MEMBER_NAME(tex6_attribute,"tex6_attribute");
	HX_MARK_MEMBER_NAME(tex7_attribute,"tex7_attribute");
	HX_MARK_MEMBER_NAME(uniforms,"uniforms");
	HX_MARK_MEMBER_NAME(uniform_textures,"uniform_textures");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(vert_source,"vert_source");
	HX_VISIT_MEMBER_NAME(frag_source,"frag_source");
	HX_VISIT_MEMBER_NAME(vert_id,"vert_id");
	HX_VISIT_MEMBER_NAME(frag_id,"frag_id");
	HX_VISIT_MEMBER_NAME(vert_shader,"vert_shader");
	HX_VISIT_MEMBER_NAME(frag_shader,"frag_shader");
	HX_VISIT_MEMBER_NAME(program,"program");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(vert_attribute,"vert_attribute");
	HX_VISIT_MEMBER_NAME(tcoord_attribute,"tcoord_attribute");
	HX_VISIT_MEMBER_NAME(color_attribute,"color_attribute");
	HX_VISIT_MEMBER_NAME(normal_attribute,"normal_attribute");
	HX_VISIT_MEMBER_NAME(projectionmatrix_attribute,"projectionmatrix_attribute");
	HX_VISIT_MEMBER_NAME(modelviewmatrix_attribute,"modelviewmatrix_attribute");
	HX_VISIT_MEMBER_NAME(tex0_attribute,"tex0_attribute");
	HX_VISIT_MEMBER_NAME(tex1_attribute,"tex1_attribute");
	HX_VISIT_MEMBER_NAME(tex2_attribute,"tex2_attribute");
	HX_VISIT_MEMBER_NAME(tex3_attribute,"tex3_attribute");
	HX_VISIT_MEMBER_NAME(tex4_attribute,"tex4_attribute");
	HX_VISIT_MEMBER_NAME(tex5_attribute,"tex5_attribute");
	HX_VISIT_MEMBER_NAME(tex6_attribute,"tex6_attribute");
	HX_VISIT_MEMBER_NAME(tex7_attribute,"tex7_attribute");
	HX_VISIT_MEMBER_NAME(uniforms,"uniforms");
	HX_VISIT_MEMBER_NAME(uniform_textures,"uniform_textures");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Shader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"link") ) { return link_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vert_id") ) { return vert_id; }
		if (HX_FIELD_EQ(inName,"frag_id") ) { return frag_id; }
		if (HX_FIELD_EQ(inName,"program") ) { return program; }
		if (HX_FIELD_EQ(inName,"set_int") ) { return set_int_dyn(); }
		if (HX_FIELD_EQ(inName,"compile") ) { return compile_dyn(); }
		if (HX_FIELD_EQ(inName,"add_log") ) { return add_log_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniforms") ) { return uniforms; }
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		if (HX_FIELD_EQ(inName,"location") ) { return location_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_float") ) { return set_float_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_int") ) { return apply_int_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"format_log") ) { return format_log_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_vec2") ) { return apply_vec2_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_vec3") ) { return apply_vec3_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_vec4") ) { return apply_vec4_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_mat4") ) { return apply_mat4_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vert_source") ) { return vert_source; }
		if (HX_FIELD_EQ(inName,"frag_source") ) { return frag_source; }
		if (HX_FIELD_EQ(inName,"vert_shader") ) { return vert_shader; }
		if (HX_FIELD_EQ(inName,"frag_shader") ) { return frag_shader; }
		if (HX_FIELD_EQ(inName,"set_vector2") ) { return set_vector2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vector3") ) { return set_vector3_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vector4") ) { return set_vector4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix4") ) { return set_matrix4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"from_string") ) { return from_string_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_float") ) { return apply_float_dyn(); }
		if (HX_FIELD_EQ(inName,"apply_color") ) { return apply_color_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"apply_texture") ) { return apply_texture_dyn(); }
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
		if (HX_FIELD_EQ(inName,"apply_uniforms") ) { return apply_uniforms_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"color_attribute") ) { return color_attribute; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tcoord_attribute") ) { return tcoord_attribute; }
		if (HX_FIELD_EQ(inName,"normal_attribute") ) { return normal_attribute; }
		if (HX_FIELD_EQ(inName,"uniform_textures") ) { return uniform_textures; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"modelviewmatrix_attribute") ) { return modelviewmatrix_attribute; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"projectionmatrix_attribute") ) { return projectionmatrix_attribute; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::snow::modules::opengl::native::GLSO >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vert_id") ) { vert_id=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frag_id") ) { frag_id=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast< ::snow::modules::opengl::native::GLPO >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniforms") ) { uniforms=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vert_source") ) { vert_source=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frag_source") ) { frag_source=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vert_shader") ) { vert_shader=inValue.Cast< ::snow::modules::opengl::native::GLSO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frag_shader") ) { frag_shader=inValue.Cast< ::snow::modules::opengl::native::GLSO >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"color_attribute") ) { color_attribute=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tcoord_attribute") ) { tcoord_attribute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normal_attribute") ) { normal_attribute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uniform_textures") ) { uniform_textures=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"modelviewmatrix_attribute") ) { modelviewmatrix_attribute=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"projectionmatrix_attribute") ) { projectionmatrix_attribute=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Shader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("log","\x84","\x54","\x52","\x00"));
	outFields->push(HX_HCSTRING("vert_source","\xe9","\xf5","\xeb","\xbe"));
	outFields->push(HX_HCSTRING("frag_source","\x88","\x93","\x35","\x8b"));
	outFields->push(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d"));
	outFields->push(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44"));
	outFields->push(HX_HCSTRING("vert_shader","\x33","\x04","\xdb","\xa9"));
	outFields->push(HX_HCSTRING("frag_shader","\xd2","\xa1","\x24","\x76"));
	outFields->push(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("vert_attribute","\xce","\x47","\x70","\x43"));
	outFields->push(HX_HCSTRING("tcoord_attribute","\xde","\x9c","\x72","\x7b"));
	outFields->push(HX_HCSTRING("color_attribute","\x00","\x17","\x4a","\xaf"));
	outFields->push(HX_HCSTRING("normal_attribute","\xc4","\x34","\xe1","\x31"));
	outFields->push(HX_HCSTRING("projectionmatrix_attribute","\xed","\xb3","\xc1","\xb7"));
	outFields->push(HX_HCSTRING("modelviewmatrix_attribute","\xec","\x37","\x7b","\x26"));
	outFields->push(HX_HCSTRING("tex0_attribute","\x86","\xb5","\x7d","\x0d"));
	outFields->push(HX_HCSTRING("tex1_attribute","\xc7","\x20","\x5c","\x8e"));
	outFields->push(HX_HCSTRING("tex2_attribute","\x08","\x8c","\x3a","\x0f"));
	outFields->push(HX_HCSTRING("tex3_attribute","\x49","\xf7","\x18","\x90"));
	outFields->push(HX_HCSTRING("tex4_attribute","\x8a","\x62","\xf7","\x10"));
	outFields->push(HX_HCSTRING("tex5_attribute","\xcb","\xcd","\xd5","\x91"));
	outFields->push(HX_HCSTRING("tex6_attribute","\x0c","\x39","\xb4","\x12"));
	outFields->push(HX_HCSTRING("tex7_attribute","\x4d","\xa4","\x92","\x93"));
	outFields->push(HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"));
	outFields->push(HX_HCSTRING("uniform_textures","\xe3","\xe6","\x10","\x23"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Shader_obj,log),HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{hx::fsString,(int)offsetof(Shader_obj,vert_source),HX_HCSTRING("vert_source","\xe9","\xf5","\xeb","\xbe")},
	{hx::fsString,(int)offsetof(Shader_obj,frag_source),HX_HCSTRING("frag_source","\x88","\x93","\x35","\x8b")},
	{hx::fsString,(int)offsetof(Shader_obj,vert_id),HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d")},
	{hx::fsString,(int)offsetof(Shader_obj,frag_id),HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44")},
	{hx::fsObject /*::snow::modules::opengl::native::GLSO*/ ,(int)offsetof(Shader_obj,vert_shader),HX_HCSTRING("vert_shader","\x33","\x04","\xdb","\xa9")},
	{hx::fsObject /*::snow::modules::opengl::native::GLSO*/ ,(int)offsetof(Shader_obj,frag_shader),HX_HCSTRING("frag_shader","\xd2","\xa1","\x24","\x76")},
	{hx::fsObject /*::snow::modules::opengl::native::GLPO*/ ,(int)offsetof(Shader_obj,program),HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3")},
	{hx::fsObject /*::snow::modules::opengl::native::GLSO*/ ,(int)offsetof(Shader_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsInt,(int)offsetof(Shader_obj,vert_attribute),HX_HCSTRING("vert_attribute","\xce","\x47","\x70","\x43")},
	{hx::fsInt,(int)offsetof(Shader_obj,tcoord_attribute),HX_HCSTRING("tcoord_attribute","\xde","\x9c","\x72","\x7b")},
	{hx::fsInt,(int)offsetof(Shader_obj,color_attribute),HX_HCSTRING("color_attribute","\x00","\x17","\x4a","\xaf")},
	{hx::fsInt,(int)offsetof(Shader_obj,normal_attribute),HX_HCSTRING("normal_attribute","\xc4","\x34","\xe1","\x31")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,projectionmatrix_attribute),HX_HCSTRING("projectionmatrix_attribute","\xed","\xb3","\xc1","\xb7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,modelviewmatrix_attribute),HX_HCSTRING("modelviewmatrix_attribute","\xec","\x37","\x7b","\x26")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,tex0_attribute),HX_HCSTRING("tex0_attribute","\x86","\xb5","\x7d","\x0d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,tex1_attribute),HX_HCSTRING("tex1_attribute","\xc7","\x20","\x5c","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,tex2_attribute),HX_HCSTRING("tex2_attribute","\x08","\x8c","\x3a","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,tex3_attribute),HX_HCSTRING("tex3_attribute","\x49","\xf7","\x18","\x90")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,tex4_attribute),HX_HCSTRING("tex4_attribute","\x8a","\x62","\xf7","\x10")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,tex5_attribute),HX_HCSTRING("tex5_attribute","\xcb","\xcd","\xd5","\x91")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,tex6_attribute),HX_HCSTRING("tex6_attribute","\x0c","\x39","\xb4","\x12")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,tex7_attribute),HX_HCSTRING("tex7_attribute","\x4d","\xa4","\x92","\x93")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shader_obj,uniforms),HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shader_obj,uniform_textures),HX_HCSTRING("uniform_textures","\xe3","\xe6","\x10","\x23")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("vert_source","\xe9","\xf5","\xeb","\xbe"),
	HX_HCSTRING("frag_source","\x88","\x93","\x35","\x8b"),
	HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d"),
	HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44"),
	HX_HCSTRING("vert_shader","\x33","\x04","\xdb","\xa9"),
	HX_HCSTRING("frag_shader","\xd2","\xa1","\x24","\x76"),
	HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("vert_attribute","\xce","\x47","\x70","\x43"),
	HX_HCSTRING("tcoord_attribute","\xde","\x9c","\x72","\x7b"),
	HX_HCSTRING("color_attribute","\x00","\x17","\x4a","\xaf"),
	HX_HCSTRING("normal_attribute","\xc4","\x34","\xe1","\x31"),
	HX_HCSTRING("projectionmatrix_attribute","\xed","\xb3","\xc1","\xb7"),
	HX_HCSTRING("modelviewmatrix_attribute","\xec","\x37","\x7b","\x26"),
	HX_HCSTRING("tex0_attribute","\x86","\xb5","\x7d","\x0d"),
	HX_HCSTRING("tex1_attribute","\xc7","\x20","\x5c","\x8e"),
	HX_HCSTRING("tex2_attribute","\x08","\x8c","\x3a","\x0f"),
	HX_HCSTRING("tex3_attribute","\x49","\xf7","\x18","\x90"),
	HX_HCSTRING("tex4_attribute","\x8a","\x62","\xf7","\x10"),
	HX_HCSTRING("tex5_attribute","\xcb","\xcd","\xd5","\x91"),
	HX_HCSTRING("tex6_attribute","\x0c","\x39","\xb4","\x12"),
	HX_HCSTRING("tex7_attribute","\x4d","\xa4","\x92","\x93"),
	HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"),
	HX_HCSTRING("uniform_textures","\xe3","\xe6","\x10","\x23"),
	HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),
	HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("set_int","\x92","\x66","\xc6","\x19"),
	HX_HCSTRING("set_float","\xff","\x0d","\x91","\x29"),
	HX_HCSTRING("set_vector2","\x32","\x61","\x04","\x6b"),
	HX_HCSTRING("set_vector3","\x33","\x61","\x04","\x6b"),
	HX_HCSTRING("set_vector4","\x34","\x61","\x04","\x6b"),
	HX_HCSTRING("set_matrix4","\xf6","\xa9","\xce","\x23"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_texture","\xfe","\x2f","\x48","\x2f"),
	HX_HCSTRING("format_log","\x3c","\x90","\xa9","\x13"),
	HX_HCSTRING("compile","\x73","\x25","\x6f","\x83"),
	HX_HCSTRING("link","\xfa","\x17","\xb3","\x47"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("from_string","\x46","\x76","\x96","\x4a"),
	HX_HCSTRING("apply_uniforms","\xf0","\x20","\x96","\x96"),
	HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"),
	HX_HCSTRING("apply_int","\x5e","\x26","\x11","\x3e"),
	HX_HCSTRING("apply_float","\xcb","\x58","\xe4","\x05"),
	HX_HCSTRING("apply_vec2","\x0f","\x4f","\x81","\x19"),
	HX_HCSTRING("apply_vec3","\x10","\x4f","\x81","\x19"),
	HX_HCSTRING("apply_vec4","\x11","\x4f","\x81","\x19"),
	HX_HCSTRING("apply_mat4","\x45","\x69","\x8b","\x13"),
	HX_HCSTRING("apply_color","\x92","\x04","\xaa","\x4d"),
	HX_HCSTRING("apply_texture","\xca","\xc5","\x1c","\x3f"),
	HX_HCSTRING("add_log","\x26","\xb0","\x81","\x90"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#endif

hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Shader","\x44","\xea","\x01","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Shader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shader_obj >;
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
