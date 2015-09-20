#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
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
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_ArcGeometry
#include <phoenix/geometry/ArcGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_CircleGeometry
#include <phoenix/geometry/CircleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_LineGeometry
#include <phoenix/geometry/LineGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_PlaneGeometry
#include <phoenix/geometry/PlaneGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RingGeometry
#include <phoenix/geometry/RingGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextGeometry
#include <phoenix/geometry/TextGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
namespace luxe{

Void Draw_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("luxe.Draw","new",0xc8b456ce,"luxe.Draw.new","luxe/Draw.hx",244,0x47df6e81)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(244)
	this->core = _core;
}
;
	return null();
}

//Draw_obj::~Draw_obj() { }

Dynamic Draw_obj::__CreateEmpty() { return  new Draw_obj; }
hx::ObjectPtr< Draw_obj > Draw_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< Draw_obj > _result_ = new Draw_obj();
	_result_->__construct(_core);
	return _result_;}

Dynamic Draw_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Draw_obj > _result_ = new Draw_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::phoenix::geometry::LineGeometry Draw_obj::line( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","line",0xd3c831c6,"luxe.Draw.line","luxe/Draw.hx",25,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		bool tmp = (options->__Field(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		if ((tmp)){
			HX_STACK_LINE(27)
			::luxe::DebugError tmp1 = ::luxe::DebugError_obj::null_assertion(HX_HCSTRING("options.p0 was null (draw.line requires p0:Vector, and p1:Vector)","\x6d","\xa4","\xae","\xd3"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(27)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		bool tmp = (options->__Field(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		if ((tmp)){
			HX_STACK_LINE(28)
			::luxe::DebugError tmp1 = ::luxe::DebugError_obj::null_assertion(HX_HCSTRING("options.p1 was null (draw.line requires p0:Vector, and p1:Vector)","\x8c","\x60","\xb4","\x86"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		bool tmp = (options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		if ((tmp)){
			HX_STACK_LINE(30)
			options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = HX_HCSTRING("line.geometry","\x6c","\x2a","\xb6","\x5b");
		}
		HX_STACK_LINE(30)
		options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		bool tmp = (options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		if ((tmp)){
			HX_STACK_LINE(31)
			::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(31)
			options->__FieldRef(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")) = tmp1->batcher;
		}
		HX_STACK_LINE(31)
		options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
	}
	HX_STACK_LINE(33)
	::phoenix::geometry::LineGeometry tmp = ::phoenix::geometry::LineGeometry_obj::__new(options);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,line,return )

::phoenix::geometry::RectangleGeometry Draw_obj::rectangle( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","rectangle",0x843ee11d,"luxe.Draw.rectangle","luxe/Draw.hx",38,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		bool tmp = (options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		if ((tmp)){
			HX_STACK_LINE(40)
			options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = HX_HCSTRING("rectangle.geometry","\xd1","\x8e","\xfe","\x89");
		}
		HX_STACK_LINE(40)
		options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		bool tmp = (options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		if ((tmp)){
			HX_STACK_LINE(41)
			::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(41)
			options->__FieldRef(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")) = tmp1->batcher;
		}
		HX_STACK_LINE(41)
		options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
	}
	HX_STACK_LINE(43)
	::phoenix::geometry::RectangleGeometry tmp = ::phoenix::geometry::RectangleGeometry_obj::__new(options);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,rectangle,return )

::phoenix::geometry::QuadGeometry Draw_obj::box( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","box",0xc8ab4479,"luxe.Draw.box","luxe/Draw.hx",48,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		bool tmp = (options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		if ((tmp)){
			HX_STACK_LINE(50)
			options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = HX_HCSTRING("quad.geometry","\x39","\xd7","\xdb","\x81");
		}
		HX_STACK_LINE(50)
		options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		bool tmp = (options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		if ((tmp)){
			HX_STACK_LINE(51)
			::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			options->__FieldRef(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")) = tmp1->batcher;
		}
		HX_STACK_LINE(51)
		options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
	}
	HX_STACK_LINE(53)
	::phoenix::geometry::QuadGeometry tmp = ::phoenix::geometry::QuadGeometry_obj::__new(options);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,box,return )

::phoenix::geometry::RingGeometry Draw_obj::ring( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","ring",0xd7bf7982,"luxe.Draw.ring","luxe/Draw.hx",58,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		bool tmp = (options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		if ((tmp)){
			HX_STACK_LINE(60)
			options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = HX_HCSTRING("ring.geometry","\x30","\x0b","\xce","\x7e");
		}
		HX_STACK_LINE(60)
		options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		bool tmp = (options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		if ((tmp)){
			HX_STACK_LINE(61)
			::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(61)
			options->__FieldRef(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")) = tmp1->batcher;
		}
		HX_STACK_LINE(61)
		options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
	}
	HX_STACK_LINE(63)
	::phoenix::geometry::RingGeometry tmp = ::phoenix::geometry::RingGeometry_obj::__new(options);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,ring,return )

::phoenix::geometry::CircleGeometry Draw_obj::circle( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","circle",0xe4fa2462,"luxe.Draw.circle","luxe/Draw.hx",68,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		bool tmp = (options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		if ((tmp)){
			HX_STACK_LINE(70)
			options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = HX_HCSTRING("circle.geometry","\xd0","\xac","\x65","\xe8");
		}
		HX_STACK_LINE(70)
		options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		bool tmp = (options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		if ((tmp)){
			HX_STACK_LINE(71)
			::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(71)
			options->__FieldRef(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")) = tmp1->batcher;
		}
		HX_STACK_LINE(71)
		options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
	}
	HX_STACK_LINE(73)
	::phoenix::geometry::CircleGeometry tmp = ::phoenix::geometry::CircleGeometry_obj::__new(options);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,circle,return )

::phoenix::geometry::ArcGeometry Draw_obj::arc( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","arc",0xc8aa84c0,"luxe.Draw.arc","luxe/Draw.hx",78,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		bool tmp = (options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		if ((tmp)){
			HX_STACK_LINE(80)
			options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = HX_HCSTRING("arc.geometry","\x4e","\x88","\x6a","\x63");
		}
		HX_STACK_LINE(80)
		options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		bool tmp = (options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		if ((tmp)){
			HX_STACK_LINE(81)
			::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(81)
			options->__FieldRef(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")) = tmp1->batcher;
		}
		HX_STACK_LINE(81)
		options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
	}
	HX_STACK_LINE(83)
	::phoenix::geometry::ArcGeometry tmp = ::phoenix::geometry::ArcGeometry_obj::__new(options);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,arc,return )

::phoenix::geometry::Geometry Draw_obj::ngon( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","ngon",0xd5191b6a,"luxe.Draw.ngon","luxe/Draw.hx",88,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		bool tmp = (options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		if ((tmp)){
			HX_STACK_LINE(90)
			options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = HX_HCSTRING("ngon.geometry","\x48","\xec","\x34","\xa7");
		}
		HX_STACK_LINE(90)
		options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(91)
	{
		HX_STACK_LINE(91)
		bool tmp = (options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		if ((tmp)){
			HX_STACK_LINE(91)
			::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			options->__FieldRef(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")) = tmp1->batcher;
		}
		HX_STACK_LINE(91)
		options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
	}
	HX_STACK_LINE(93)
	int _sides = (int)3;		HX_STACK_VAR(_sides,"_sides");
	HX_STACK_LINE(94)
	Float _radius = (int)64;		HX_STACK_VAR(_radius,"_radius");
	HX_STACK_LINE(95)
	bool _solid = false;		HX_STACK_VAR(_solid,"_solid");
	HX_STACK_LINE(96)
	Float _x = (int)0;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(97)
	Float _y = (int)0;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(98)
	Float _angle = (int)0;		HX_STACK_VAR(_angle,"_angle");
	HX_STACK_LINE(100)
	bool tmp = (options->__Field(HX_HCSTRING("sides","\xfc","\x56","\xc8","\x7c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	if ((tmp)){
		HX_STACK_LINE(101)
		_sides = options->__Field(HX_HCSTRING("sides","\xfc","\x56","\xc8","\x7c"), hx::paccDynamic );
	}
	HX_STACK_LINE(104)
	bool tmp1 = (options->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	if ((tmp1)){
		HX_STACK_LINE(104)
		_radius = options->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(105)
	bool tmp2 = (options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	if ((tmp2)){
		HX_STACK_LINE(105)
		_x = options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(106)
	bool tmp3 = (options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(106)
	if ((tmp3)){
		HX_STACK_LINE(106)
		_y = options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(107)
	bool tmp4 = (options->__Field(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(107)
	if ((tmp4)){
		HX_STACK_LINE(107)
		_angle = options->__Field(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"), hx::paccDynamic );
	}
	HX_STACK_LINE(108)
	bool tmp5 = (options->__Field(HX_HCSTRING("solid","\x2b","\xb4","\xc5","\x80"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(108)
	if ((tmp5)){
		HX_STACK_LINE(108)
		_solid = options->__Field(HX_HCSTRING("solid","\x2b","\xb4","\xc5","\x80"), hx::paccDynamic );
	}
	HX_STACK_LINE(110)
	::phoenix::geometry::Geometry tmp6 = ::phoenix::geometry::Geometry_obj::__new(options);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(110)
	::phoenix::geometry::Geometry _geometry = tmp6;		HX_STACK_VAR(_geometry,"_geometry");
	HX_STACK_LINE(112)
	bool tmp7 = _solid;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(112)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(112)
	if ((tmp8)){
		HX_STACK_LINE(113)
		_geometry->set_primitive_type((int)1);
	}
	else{
		HX_STACK_LINE(115)
		_geometry->set_primitive_type((int)6);
	}
	HX_STACK_LINE(118)
	Float tmp9 = ::Math_obj::PI;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(118)
	Float tmp10 = ((int)2 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(118)
	Float _two_pi = tmp10;		HX_STACK_VAR(_two_pi,"_two_pi");
	HX_STACK_LINE(119)
	Float tmp11 = ::Math_obj::PI;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(119)
	int tmp12 = _sides;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(119)
	Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(119)
	Float _sides_over_pi = tmp13;		HX_STACK_VAR(_sides_over_pi,"_sides_over_pi");
	HX_STACK_LINE(120)
	Float tmp14 = (Float(_two_pi) / Float(_sides));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(120)
	Float _sides_over_twopi = tmp14;		HX_STACK_VAR(_sides_over_twopi,"_sides_over_twopi");
	HX_STACK_LINE(121)
	Float tmp15 = (_angle * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(121)
	Float _angle_rad = tmp15;		HX_STACK_VAR(_angle_rad,"_angle_rad");
	HX_STACK_LINE(123)
	bool tmp16 = _solid;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(123)
	if ((tmp16)){
		HX_STACK_LINE(125)
		::phoenix::Vector tmp17 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(125)
		::phoenix::Color tmp18 = options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(125)
		::phoenix::geometry::Vertex tmp19 = ::phoenix::geometry::Vertex_obj::__new(tmp17,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(125)
		_geometry->add(tmp19);
	}
	HX_STACK_LINE(128)
	bool tmp17 = (_solid == false);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(128)
	int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(128)
	if ((tmp17)){
		HX_STACK_LINE(128)
		tmp18 = _sides;
	}
	else{
		HX_STACK_LINE(128)
		tmp18 = (_sides + (int)1);
	}
	HX_STACK_LINE(128)
	int _count = tmp18;		HX_STACK_VAR(_count,"_count");
	HX_STACK_LINE(129)
	Array< ::Dynamic > _points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_points,"_points");
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		while((true)){
			HX_STACK_LINE(131)
			bool tmp19 = (_g < _count);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(131)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(131)
			if ((tmp20)){
				HX_STACK_LINE(131)
				break;
			}
			HX_STACK_LINE(131)
			int tmp21 = (_g)++;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(131)
			int i = tmp21;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(133)
			Float tmp22 = _radius;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(133)
			Float tmp23 = (_angle_rad + _sides_over_pi);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(133)
			Float tmp24 = (i * _sides_over_twopi);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(133)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(133)
			Float tmp26 = ::Math_obj::sin(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(133)
			Float tmp27 = (tmp22 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(133)
			Float __x = tmp27;		HX_STACK_VAR(__x,"__x");
			HX_STACK_LINE(134)
			Float tmp28 = _radius;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(134)
			Float tmp29 = (_angle_rad + _sides_over_pi);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(134)
			Float tmp30 = (i * _sides_over_twopi);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(134)
			Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(134)
			Float tmp32 = ::Math_obj::cos(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(134)
			Float tmp33 = (tmp28 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(134)
			Float __y = tmp33;		HX_STACK_VAR(__y,"__y");
			HX_STACK_LINE(135)
			Float tmp34 = (_x + __x);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(135)
			Float tmp35 = (_y + __y);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(135)
			::phoenix::Vector tmp36 = ::phoenix::Vector_obj::__new(tmp34,tmp35,(int)0,null());		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(135)
			::phoenix::Vector __pos = tmp36;		HX_STACK_VAR(__pos,"__pos");
			HX_STACK_LINE(137)
			::phoenix::geometry::Vertex tmp37 = ::phoenix::geometry::Vertex_obj::__new(__pos,options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ),null());		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(137)
			_geometry->add(tmp37);
			HX_STACK_LINE(139)
			bool tmp38 = _solid;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(139)
			bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(139)
			if ((tmp39)){
				HX_STACK_LINE(140)
				bool tmp40 = (i > (int)0);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(140)
				if ((tmp40)){
					HX_STACK_LINE(141)
					int tmp41 = (i - (int)1);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(141)
					::phoenix::Vector tmp42 = _points->__get(tmp41).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(141)
					::phoenix::Vector _last = tmp42;		HX_STACK_VAR(_last,"_last");
					HX_STACK_LINE(142)
					::phoenix::geometry::Vertex tmp43 = ::phoenix::geometry::Vertex_obj::__new(__pos,options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ),null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(142)
					_geometry->add(tmp43);
				}
			}
			HX_STACK_LINE(146)
			::phoenix::Vector tmp40 = __pos;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(146)
			_points->push(tmp40);
		}
	}
	HX_STACK_LINE(150)
	bool tmp19 = _solid;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(150)
	bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(150)
	if ((tmp20)){
		HX_STACK_LINE(151)
		::phoenix::Vector tmp21 = _points->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(151)
		::phoenix::Color tmp22 = options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(151)
		::phoenix::geometry::Vertex tmp23 = ::phoenix::geometry::Vertex_obj::__new(tmp21,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(151)
		_geometry->add(tmp23);
	}
	HX_STACK_LINE(154)
	::phoenix::geometry::Geometry tmp21 = _geometry;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(154)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,ngon,return )

::phoenix::geometry::QuadGeometry Draw_obj::texture( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","texture",0x1f101e49,"luxe.Draw.texture","luxe/Draw.hx",159,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		bool tmp = (options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		if ((tmp)){
			HX_STACK_LINE(161)
			options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = HX_HCSTRING("texture.geometry","\xa5","\xa4","\x84","\xec");
		}
		HX_STACK_LINE(161)
		options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		bool tmp = (options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		if ((tmp)){
			HX_STACK_LINE(162)
			::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(162)
			options->__FieldRef(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")) = tmp1->batcher;
		}
		HX_STACK_LINE(162)
		options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
	}
	HX_STACK_LINE(164)
	Float _x = (int)0;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(165)
	Float _y = (int)0;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(166)
	Float _w = (int)0;		HX_STACK_VAR(_w,"_w");
	HX_STACK_LINE(167)
	Float _h = (int)0;		HX_STACK_VAR(_h,"_h");
	HX_STACK_LINE(170)
	int _tw = (int)64;		HX_STACK_VAR(_tw,"_tw");
	HX_STACK_LINE(171)
	int _th = (int)64;		HX_STACK_VAR(_th,"_th");
	HX_STACK_LINE(173)
	bool tmp = (options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	if ((tmp)){
		HX_STACK_LINE(174)
		int tmp1 = options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		_tw = tmp1;
		HX_STACK_LINE(175)
		int tmp2 = options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		_th = tmp2;
		HX_STACK_LINE(177)
		bool tmp3 = (options->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		if ((tmp3)){
			HX_STACK_LINE(178)
			_w = _tw;
			HX_STACK_LINE(179)
			_h = _th;
		}
	}
	HX_STACK_LINE(183)
	bool tmp1 = (options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(184)
		Float tmp2 = options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		_x = tmp2;
		HX_STACK_LINE(185)
		Float tmp3 = options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		_y = tmp3;
	}
	HX_STACK_LINE(187)
	bool tmp2 = (options->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(187)
	if ((tmp2)){
		HX_STACK_LINE(188)
		Float tmp3 = options->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		_w = tmp3;
		HX_STACK_LINE(189)
		Float tmp4 = options->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		_h = tmp4;
	}
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		bool tmp3 = (options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		if ((tmp3)){
			HX_STACK_LINE(192)
			options->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = _x;
		}
		HX_STACK_LINE(192)
		options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(193)
		bool tmp3 = (options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		if ((tmp3)){
			HX_STACK_LINE(193)
			options->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = _y;
		}
		HX_STACK_LINE(193)
		options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(194)
	{
		HX_STACK_LINE(194)
		bool tmp3 = (options->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		if ((tmp3)){
			HX_STACK_LINE(194)
			options->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = _w;
		}
		HX_STACK_LINE(194)
		options->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(195)
	{
		HX_STACK_LINE(195)
		bool tmp3 = (options->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		if ((tmp3)){
			HX_STACK_LINE(195)
			options->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = _h;
		}
		HX_STACK_LINE(195)
		options->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(197)
	::phoenix::geometry::QuadGeometry tmp3 = ::phoenix::geometry::QuadGeometry_obj::__new(options);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(197)
	::phoenix::geometry::QuadGeometry _quad = tmp3;		HX_STACK_VAR(_quad,"_quad");
	HX_STACK_LINE(199)
	Float _ux = (int)0;		HX_STACK_VAR(_ux,"_ux");
	HX_STACK_LINE(200)
	Float _uy = (int)0;		HX_STACK_VAR(_uy,"_uy");
	HX_STACK_LINE(201)
	Float _uw = _tw;		HX_STACK_VAR(_uw,"_uw");
	HX_STACK_LINE(202)
	Float _uh = _th;		HX_STACK_VAR(_uh,"_uh");
	HX_STACK_LINE(204)
	bool tmp4 = (options->__Field(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(204)
	if ((tmp4)){
		HX_STACK_LINE(205)
		Float tmp5 = options->__Field(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		_ux = tmp5;
		HX_STACK_LINE(206)
		Float tmp6 = options->__Field(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(206)
		_uy = tmp6;
		HX_STACK_LINE(207)
		Float tmp7 = options->__Field(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(207)
		_uw = tmp7;
		HX_STACK_LINE(208)
		Float tmp8 = options->__Field(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(208)
		_uh = tmp8;
	}
	HX_STACK_LINE(211)
	::phoenix::Rectangle tmp5 = ::phoenix::Rectangle_obj::__new(_ux,_uy,_uw,_uh);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(211)
	_quad->uv(tmp5);
	HX_STACK_LINE(213)
	::phoenix::geometry::QuadGeometry tmp6 = _quad;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(213)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,texture,return )

::phoenix::geometry::TextGeometry Draw_obj::text( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","text",0xd90ee67f,"luxe.Draw.text","luxe/Draw.hx",218,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(220)
	{
		HX_STACK_LINE(220)
		bool tmp = (options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		if ((tmp)){
			HX_STACK_LINE(220)
			::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(220)
			options->__FieldRef(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")) = tmp1->batcher;
		}
		HX_STACK_LINE(220)
		options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
	}
	HX_STACK_LINE(222)
	::phoenix::geometry::TextGeometry tmp = ::phoenix::geometry::TextGeometry_obj::__new(options);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,text,return )

::phoenix::geometry::PlaneGeometry Draw_obj::plane( Dynamic options){
	HX_STACK_FRAME("luxe.Draw","plane",0xcaef7c4a,"luxe.Draw.plane","luxe/Draw.hx",228,0x47df6e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(230)
	{
		HX_STACK_LINE(230)
		bool tmp = (options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(230)
		if ((tmp)){
			HX_STACK_LINE(230)
			options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = HX_HCSTRING("plane.geometry","\x04","\x37","\x8f","\x79");
		}
		HX_STACK_LINE(230)
		options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		bool tmp = (options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		if ((tmp)){
			HX_STACK_LINE(231)
			::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(231)
			options->__FieldRef(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")) = tmp1->batcher;
		}
		HX_STACK_LINE(231)
		options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
	}
	HX_STACK_LINE(233)
	::phoenix::geometry::PlaneGeometry tmp = ::phoenix::geometry::PlaneGeometry_obj::__new(options);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Draw_obj,plane,return )


Draw_obj::Draw_obj()
{
}

void Draw_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Draw);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_END_CLASS();
}

void Draw_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
}

Dynamic Draw_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return box_dyn(); }
		if (HX_FIELD_EQ(inName,"arc") ) { return arc_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line_dyn(); }
		if (HX_FIELD_EQ(inName,"ring") ) { return ring_dyn(); }
		if (HX_FIELD_EQ(inName,"ngon") ) { return ngon_dyn(); }
		if (HX_FIELD_EQ(inName,"text") ) { return text_dyn(); }
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"plane") ) { return plane_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { return circle_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rectangle") ) { return rectangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Draw_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Draw_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Draw_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Draw_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	HX_HCSTRING("rectangle","\x2f","\xd4","\x7c","\x19"),
	HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"),
	HX_HCSTRING("ring","\xb0","\x5f","\xaa","\x4b"),
	HX_HCSTRING("circle","\x10","\x72","\x0d","\x56"),
	HX_HCSTRING("arc","\x52","\xfe","\x49","\x00"),
	HX_HCSTRING("ngon","\x98","\x01","\x04","\x49"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("plane","\x5c","\xfe","\x8d","\xc4"),
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Draw_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Draw_obj::__mClass,"__mClass");
};

#endif

hx::Class Draw_obj::__mClass;

void Draw_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Draw","\xdc","\x97","\xb9","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Draw_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Draw_obj >;
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
