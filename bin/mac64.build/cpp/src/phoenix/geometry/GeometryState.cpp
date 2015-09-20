#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLTO
#include <snow/modules/opengl/native/GLTO.h>
#endif
namespace phoenix{
namespace geometry{

Void GeometryState_obj::__construct()
{
HX_STACK_FRAME("phoenix.geometry.GeometryState","new",0xdad5fe14,"phoenix.geometry.GeometryState.new","phoenix/geometry/GeometryState.hx",8,0xdf8297bc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->log = false;
	HX_STACK_LINE(24)
	this->set_clip(false);
	HX_STACK_LINE(25)
	::phoenix::Rectangle tmp = ::phoenix::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	this->set_clip_rect(tmp);
	HX_STACK_LINE(26)
	this->set_texture(null());
	HX_STACK_LINE(27)
	this->set_shader(null());
	HX_STACK_LINE(28)
	this->set_group((int)0);
	HX_STACK_LINE(29)
	this->set_depth(((Float)0.0));
	HX_STACK_LINE(30)
	this->set_primitive_type((int)0);
	HX_STACK_LINE(32)
	this->dirty = false;
}
;
	return null();
}

//GeometryState_obj::~GeometryState_obj() { }

Dynamic GeometryState_obj::__CreateEmpty() { return  new GeometryState_obj; }
hx::ObjectPtr< GeometryState_obj > GeometryState_obj::__new()
{  hx::ObjectPtr< GeometryState_obj > _result_ = new GeometryState_obj();
	_result_->__construct();
	return _result_;}

Dynamic GeometryState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeometryState_obj > _result_ = new GeometryState_obj();
	_result_->__construct();
	return _result_;}

Void GeometryState_obj::clone_onto( ::phoenix::geometry::GeometryState _other){
{
		HX_STACK_FRAME("phoenix.geometry.GeometryState","clone_onto",0xd3d1f488,"phoenix.geometry.GeometryState.clone_onto","phoenix/geometry/GeometryState.hx",36,0xdf8297bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_other,"_other")
		HX_STACK_LINE(38)
		bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		_other->dirty = tmp;
		HX_STACK_LINE(39)
		::phoenix::Texture tmp1 = this->texture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		_other->set_texture(tmp1);
		HX_STACK_LINE(40)
		::phoenix::Shader tmp2 = this->shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		_other->set_shader(tmp2);
		HX_STACK_LINE(41)
		int tmp3 = this->group;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		_other->set_group(tmp3);
		HX_STACK_LINE(42)
		Float tmp4 = this->depth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		_other->set_depth(tmp4);
		HX_STACK_LINE(43)
		int tmp5 = this->primitive_type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		_other->set_primitive_type(tmp5);
		HX_STACK_LINE(44)
		bool tmp6 = this->clip;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		_other->set_clip(tmp6);
		HX_STACK_LINE(45)
		::phoenix::Rectangle tmp7 = this->clip_rect;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		_other->clip_rect->copy_from(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,clone_onto,(void))

Void GeometryState_obj::str( ){
{
		HX_STACK_FRAME("phoenix.geometry.GeometryState","str",0xdad9d665,"phoenix.geometry.GeometryState.str","phoenix/geometry/GeometryState.hx",49,0xdf8297bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		bool tmp = this->log;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		if ((tmp1)){
			HX_STACK_LINE(51)
			return null();
		}
		HX_STACK_LINE(53)
		bool tmp2 = this->dirty;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		::String tmp4 = (HX_HCSTRING("\t+ GEOMETRYSTATE ","\x9f","\x6b","\xf0","\x11") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),53,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		::haxe::Log_obj::trace(tmp4,tmp5);
		HX_STACK_LINE(54)
		Float tmp6 = this->depth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		::String tmp7 = (HX_HCSTRING("\t\tdepth - ","\x30","\xaa","\x11","\xc4") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),54,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		::haxe::Log_obj::trace(tmp7,tmp8);
		HX_STACK_LINE(55)
		int tmp9 = this->group;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(55)
		::String tmp10 = (HX_HCSTRING("\t\tgroup - ","\x74","\xf5","\x94","\xbe") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),55,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(55)
		::haxe::Log_obj::trace(tmp10,tmp11);
		HX_STACK_LINE(56)
		::phoenix::Texture tmp12 = this->texture;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(56)
		bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(56)
		::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(56)
		if ((tmp13)){
			HX_STACK_LINE(56)
			tmp14 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
		}
		else{
			HX_STACK_LINE(56)
			::phoenix::Texture tmp15 = this->texture;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(56)
			tmp14 = tmp15->id;
		}
		HX_STACK_LINE(56)
		::String tmp15 = (HX_HCSTRING("\t\ttexture - ","\x58","\x01","\x33","\x88") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(56)
		Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),56,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(56)
		::haxe::Log_obj::trace(tmp15,tmp16);
		HX_STACK_LINE(57)
		::phoenix::Texture tmp17 = this->texture;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(57)
		bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(57)
		if ((tmp18)){
			HX_STACK_LINE(58)
			::phoenix::Texture tmp19 = this->texture;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(58)
			::snow::modules::opengl::native::GLTO tmp20 = tmp19->texture;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(58)
			::String tmp21 = ::Std_obj::string(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(58)
			::String tmp22 = (HX_HCSTRING("\t\t\t ","\xd7","\xc7","\xf9","\x05") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(58)
			Dynamic tmp23 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),58,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(58)
			::haxe::Log_obj::trace(tmp22,tmp23);
		}
		HX_STACK_LINE(60)
		::phoenix::Shader tmp19 = this->shader;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(60)
		bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(60)
		::String tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(60)
		if ((tmp20)){
			HX_STACK_LINE(60)
			tmp21 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
		}
		else{
			HX_STACK_LINE(60)
			::phoenix::Shader tmp22 = this->shader;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(60)
			tmp21 = tmp22->id;
		}
		HX_STACK_LINE(60)
		::String tmp22 = (HX_HCSTRING("\t\tshader - ","\x8e","\xf1","\x9d","\x79") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(60)
		Dynamic tmp23 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),60,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(60)
		::haxe::Log_obj::trace(tmp22,tmp23);
		HX_STACK_LINE(61)
		int tmp24 = this->primitive_type;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(61)
		::String tmp25 = (HX_HCSTRING("\t\tprimitive_type - ","\x41","\xea","\xf1","\x1f") + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(61)
		Dynamic tmp26 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),61,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(61)
		::haxe::Log_obj::trace(tmp25,tmp26);
		HX_STACK_LINE(62)
		bool tmp27 = this->clip;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(62)
		::String tmp28 = ::Std_obj::string(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(62)
		::String tmp29 = (HX_HCSTRING("\t\tclip - ","\xc3","\xd6","\xcd","\x6f") + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(62)
		Dynamic tmp30 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),62,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(62)
		::haxe::Log_obj::trace(tmp29,tmp30);
		HX_STACK_LINE(63)
		::phoenix::Rectangle tmp31 = this->clip_rect;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(63)
		::String tmp32 = ::Std_obj::string(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(63)
		::String tmp33 = (HX_HCSTRING("\t\tclip rect - ","\x5f","\x4b","\x3b","\x99") + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(63)
		Dynamic tmp34 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),63,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(63)
		::haxe::Log_obj::trace(tmp33,tmp34);
		HX_STACK_LINE(64)
		Dynamic tmp35 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),64,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(64)
		::haxe::Log_obj::trace(HX_HCSTRING("\t- GEOMETRYSTATE","\xe3","\x08","\xd7","\xbb"),tmp35);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GeometryState_obj,str,(void))

Void GeometryState_obj::clean( ){
{
		HX_STACK_FRAME("phoenix.geometry.GeometryState","clean",0x6a0b743d,"phoenix.geometry.GeometryState.clean","phoenix/geometry/GeometryState.hx",70,0xdf8297bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		this->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GeometryState_obj,clean,(void))

Void GeometryState_obj::update( ::phoenix::geometry::GeometryState other){
{
		HX_STACK_FRAME("phoenix.geometry.GeometryState","update",0xdf57e0d5,"phoenix.geometry.GeometryState.update","phoenix/geometry/GeometryState.hx",74,0xdf8297bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(76)
		Float tmp = this->depth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		Float tmp1 = other->depth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		if ((tmp2)){
			HX_STACK_LINE(77)
			Float tmp3 = other->depth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(77)
			this->set_depth(tmp3);
		}
		HX_STACK_LINE(80)
		int tmp3 = this->group;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		int tmp4 = other->group;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		if ((tmp5)){
			HX_STACK_LINE(81)
			int tmp6 = other->group;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			this->set_group(tmp6);
		}
		HX_STACK_LINE(84)
		::phoenix::Texture tmp6 = this->texture;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		::phoenix::Texture tmp7 = other->texture;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(84)
		if ((tmp8)){
			HX_STACK_LINE(85)
			::phoenix::Texture tmp9 = other->texture;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(85)
			this->set_texture(tmp9);
		}
		HX_STACK_LINE(88)
		::phoenix::Shader tmp9 = this->shader;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(88)
		::phoenix::Shader tmp10 = other->shader;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(88)
		bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(88)
		if ((tmp11)){
			HX_STACK_LINE(89)
			::phoenix::Shader tmp12 = other->shader;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(89)
			this->set_shader(tmp12);
		}
		HX_STACK_LINE(92)
		int tmp12 = this->primitive_type;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(92)
		int tmp13 = other->primitive_type;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(92)
		bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(92)
		if ((tmp14)){
			HX_STACK_LINE(93)
			int tmp15 = other->primitive_type;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(93)
			this->set_primitive_type(tmp15);
		}
		HX_STACK_LINE(96)
		bool tmp15 = this->clip;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(96)
		bool tmp16 = other->clip;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(96)
		bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(96)
		if ((tmp17)){
			HX_STACK_LINE(97)
			bool tmp18 = other->clip;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(97)
			this->set_clip(tmp18);
		}
		HX_STACK_LINE(100)
		::phoenix::Rectangle tmp18 = this->clip_rect;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(100)
		bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(100)
		if ((tmp19)){
			HX_STACK_LINE(101)
			bool tmp20 = (other->clip_rect != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(101)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(101)
			if ((tmp20)){
				HX_STACK_LINE(101)
				::phoenix::Rectangle tmp22 = this->clip_rect;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(101)
				::phoenix::Rectangle tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(101)
				::phoenix::Rectangle tmp24 = other->clip_rect;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(101)
				::phoenix::Rectangle tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(101)
				bool tmp26 = tmp23->equal(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(101)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(101)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(101)
				tmp21 = !(tmp28);
			}
			else{
				HX_STACK_LINE(101)
				tmp21 = false;
			}
			HX_STACK_LINE(101)
			if ((tmp21)){
				HX_STACK_LINE(102)
				::phoenix::Rectangle tmp22 = this->clip_rect;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(102)
				Float tmp23 = other->clip_rect->x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(102)
				Float tmp24 = other->clip_rect->y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(102)
				Float tmp25 = other->clip_rect->w;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(102)
				Float tmp26 = other->clip_rect->h;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(102)
				tmp22->set(tmp23,tmp24,tmp25,tmp26);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,update,(void))

int GeometryState_obj::set_primitive_type( int val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_primitive_type",0xcd8c389b,"phoenix.geometry.GeometryState.set_primitive_type","phoenix/geometry/GeometryState.hx",109,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(110)
	this->dirty = true;
	HX_STACK_LINE(111)
	int tmp = this->primitive_type = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_primitive_type,return )

::phoenix::Texture GeometryState_obj::set_texture( ::phoenix::Texture val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_texture",0x1cfd31b2,"phoenix.geometry.GeometryState.set_texture","phoenix/geometry/GeometryState.hx",114,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(115)
	this->dirty = true;
	HX_STACK_LINE(116)
	::phoenix::Texture tmp = this->texture = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_texture,return )

::phoenix::Shader GeometryState_obj::set_shader( ::phoenix::Shader val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_shader",0x806b7e2e,"phoenix.geometry.GeometryState.set_shader","phoenix/geometry/GeometryState.hx",119,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(120)
	this->dirty = true;
	HX_STACK_LINE(121)
	::phoenix::Shader tmp = this->shader = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_shader,return )

Float GeometryState_obj::set_depth( Float val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_depth",0x291da61a,"phoenix.geometry.GeometryState.set_depth","phoenix/geometry/GeometryState.hx",124,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(125)
	Float tmp = this->depth = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_depth,return )

int GeometryState_obj::set_group( int val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_group",0xebe86856,"phoenix.geometry.GeometryState.set_group","phoenix/geometry/GeometryState.hx",128,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(129)
	this->dirty = true;
	HX_STACK_LINE(130)
	int tmp = this->group = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_group,return )

bool GeometryState_obj::set_clip( bool val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_clip",0x45922999,"phoenix.geometry.GeometryState.set_clip","phoenix/geometry/GeometryState.hx",133,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(134)
	this->dirty = true;
	HX_STACK_LINE(135)
	bool tmp = this->clip = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_clip,return )

::phoenix::Rectangle GeometryState_obj::set_clip_rect( ::phoenix::Rectangle val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_clip_rect",0x164bd4ca,"phoenix.geometry.GeometryState.set_clip_rect","phoenix/geometry/GeometryState.hx",138,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(139)
	this->dirty = true;
	HX_STACK_LINE(140)
	::phoenix::Rectangle tmp = this->clip_rect = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_clip_rect,return )


GeometryState_obj::GeometryState_obj()
{
}

void GeometryState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeometryState);
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(primitive_type,"primitive_type");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(clip,"clip");
	HX_MARK_MEMBER_NAME(clip_rect,"clip_rect");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_END_CLASS();
}

void GeometryState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(primitive_type,"primitive_type");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(clip,"clip");
	HX_VISIT_MEMBER_NAME(clip_rect,"clip_rect");
	HX_VISIT_MEMBER_NAME(log,"log");
}

Dynamic GeometryState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"str") ) { return str_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { return clip; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"clean") ) { return clean_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_clip") ) { return set_clip_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { return clip_rect; }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clone_onto") ) { return clone_onto_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_clip_rect") ) { return set_clip_rect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { return primitive_type; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_primitive_type") ) { return set_primitive_type_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GeometryState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { if (inCallProp == hx::paccAlways) return set_clip(inValue);clip=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == hx::paccAlways) return set_depth(inValue);depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp == hx::paccAlways) return set_group(inValue);group=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == hx::paccAlways) return set_shader(inValue);shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == hx::paccAlways) return set_texture(inValue);texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { if (inCallProp == hx::paccAlways) return set_clip_rect(inValue);clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { if (inCallProp == hx::paccAlways) return set_primitive_type(inValue);primitive_type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GeometryState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GeometryState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"));
	outFields->push(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"));
	outFields->push(HX_HCSTRING("log","\x84","\x54","\x52","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(GeometryState_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsInt,(int)offsetof(GeometryState_obj,primitive_type),HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(GeometryState_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(GeometryState_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsFloat,(int)offsetof(GeometryState_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsInt,(int)offsetof(GeometryState_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{hx::fsBool,(int)offsetof(GeometryState_obj,clip),HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(GeometryState_obj,clip_rect),HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89")},
	{hx::fsBool,(int)offsetof(GeometryState_obj,log),HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"),
	HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("clone_onto","\xbc","\x43","\x8c","\x64"),
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	HX_HCSTRING("clean","\x89","\x71","\x5b","\x48"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("set_primitive_type","\xcf","\xdb","\xb6","\x00"),
	HX_HCSTRING("set_texture","\xfe","\x2f","\x48","\x2f"),
	HX_HCSTRING("set_shader","\x62","\xcd","\x25","\x11"),
	HX_HCSTRING("set_depth","\x66","\x39","\x24","\xfe"),
	HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"),
	HX_HCSTRING("set_clip","\xcd","\x83","\xda","\x6f"),
	HX_HCSTRING("set_clip_rect","\x16","\xfe","\x0b","\x90"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeometryState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeometryState_obj::__mClass,"__mClass");
};

#endif

hx::Class GeometryState_obj::__mClass;

void GeometryState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GeometryState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GeometryState_obj >;
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
} // end namespace geometry
