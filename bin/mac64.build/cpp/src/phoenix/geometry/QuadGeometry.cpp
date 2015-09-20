#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
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
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
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
namespace phoenix{
namespace geometry{

Void QuadGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.QuadGeometry","new",0xa66b69c8,"phoenix.geometry.QuadGeometry.new","phoenix/geometry/QuadGeometry.hx",11,0x485a4ac8)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(18)
	this->is_set = false;
	HX_STACK_LINE(14)
	this->flipy = false;
	HX_STACK_LINE(13)
	this->flipx = false;
	HX_STACK_LINE(22)
	Dynamic tmp = options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	super::__construct(tmp);
	HX_STACK_LINE(24)
	bool tmp1 = (options == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	if ((tmp1)){
		HX_STACK_LINE(24)
		return null();
	}
	HX_STACK_LINE(27)
	bool tmp2 = (options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	if ((tmp2)){
		HX_STACK_LINE(27)
		Dynamic tmp3 = options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		this->set_flipx(tmp3);
	}
	HX_STACK_LINE(28)
	bool tmp3 = (options->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	if ((tmp3)){
		HX_STACK_LINE(28)
		Dynamic tmp4 = options->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		this->set_flipy(tmp4);
	}
	HX_STACK_LINE(30)
	Float _x = options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(31)
	Float _y = options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(32)
	Float _w = options->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_w,"_w");
	HX_STACK_LINE(33)
	Float _h = options->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_h,"_h");
	HX_STACK_LINE(35)
	bool tmp4 = (options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(35)
	if ((tmp4)){
		HX_STACK_LINE(36)
		Float tmp5 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		_x = tmp5;
		HX_STACK_LINE(37)
		Float tmp6 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		_y = tmp6;
		HX_STACK_LINE(38)
		Float tmp7 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		_w = tmp7;
		HX_STACK_LINE(39)
		Float tmp8 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		_h = tmp8;
	}
	HX_STACK_LINE(43)
	::phoenix::Rectangle tmp5 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	this->_uv_cache = tmp5;
	HX_STACK_LINE(46)
	::phoenix::Rectangle tmp6 = ::phoenix::Rectangle_obj::__new(_x,_y,_w,_h);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	this->set(tmp6);
	HX_STACK_LINE(48)
	bool tmp7 = (options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(48)
	if ((tmp7)){
		HX_STACK_LINE(48)
		Dynamic tmp8 = options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(48)
		this->set_visible(tmp8);
	}
	HX_STACK_LINE(49)
	bool tmp8 = (options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(49)
	if ((tmp8)){
		HX_STACK_LINE(49)
		this->immediate = options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic );
	}
}
;
	return null();
}

//QuadGeometry_obj::~QuadGeometry_obj() { }

Dynamic QuadGeometry_obj::__CreateEmpty() { return  new QuadGeometry_obj; }
hx::ObjectPtr< QuadGeometry_obj > QuadGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< QuadGeometry_obj > _result_ = new QuadGeometry_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic QuadGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadGeometry_obj > _result_ = new QuadGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void QuadGeometry_obj::uv( ::phoenix::Rectangle _rect){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","uv",0x7822f1f9,"phoenix.geometry.QuadGeometry.uv","phoenix/geometry/QuadGeometry.hx",53,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect,"_rect")
		HX_STACK_LINE(55)
		::phoenix::Texture tmp = this->get_texture();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		if ((tmp1)){
			HX_STACK_LINE(56)
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("QuadGeometry.hx","\xa5","\x19","\xed","\x62"),56,HX_HCSTRING("phoenix.geometry.QuadGeometry","\xd6","\x25","\xf9","\x8b"),HX_HCSTRING("uv","\x61","\x66","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			::haxe::Log_obj::trace(HX_HCSTRING("Warning : calling UV on a geometry with null texture.","\x79","\x95","\xfd","\xb5"),tmp2);
			HX_STACK_LINE(57)
			return null();
		}
		HX_STACK_LINE(60)
		Float tmp2 = _rect->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		::phoenix::Texture tmp3 = this->get_texture();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		int tmp4 = tmp3->width_actual;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		Float tmp5 = (Float(tmp2) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		Float tlx = tmp5;		HX_STACK_VAR(tlx,"tlx");
		HX_STACK_LINE(61)
		Float tmp6 = _rect->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		::phoenix::Texture tmp7 = this->get_texture();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		int tmp8 = tmp7->height_actual;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		Float tly = tmp9;		HX_STACK_VAR(tly,"tly");
		HX_STACK_LINE(62)
		Float tmp10 = _rect->w;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(62)
		::phoenix::Texture tmp11 = this->get_texture();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(62)
		int tmp12 = tmp11->width_actual;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(62)
		Float tmp13 = (Float(tmp10) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(62)
		Float szx = tmp13;		HX_STACK_VAR(szx,"szx");
		HX_STACK_LINE(63)
		Float tmp14 = _rect->h;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(63)
		::phoenix::Texture tmp15 = this->get_texture();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(63)
		int tmp16 = tmp15->height_actual;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(63)
		Float tmp17 = (Float(tmp14) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(63)
		Float szy = tmp17;		HX_STACK_VAR(szy,"szy");
		HX_STACK_LINE(65)
		::phoenix::Rectangle tmp18 = ::phoenix::Rectangle_obj::__new(tlx,tly,szx,szy);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(65)
		this->uv_space(tmp18);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,uv,(void))

Void QuadGeometry_obj::uv_space( ::phoenix::Rectangle _rect){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","uv_space",0xe21c06c0,"phoenix.geometry.QuadGeometry.uv_space","phoenix/geometry/QuadGeometry.hx",69,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect,"_rect")
		HX_STACK_LINE(72)
		Float sz_x = _rect->w;		HX_STACK_VAR(sz_x,"sz_x");
		HX_STACK_LINE(73)
		Float sz_y = _rect->h;		HX_STACK_VAR(sz_y,"sz_y");
		HX_STACK_LINE(76)
		Float tl_x = _rect->x;		HX_STACK_VAR(tl_x,"tl_x");
		HX_STACK_LINE(77)
		Float tl_y = _rect->y;		HX_STACK_VAR(tl_y,"tl_y");
		HX_STACK_LINE(80)
		::phoenix::Rectangle tmp = this->_uv_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		Float tmp1 = tl_x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		Float tmp2 = tl_y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		Float tmp3 = sz_x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		Float tmp4 = sz_y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		tmp->set(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(83)
		Float tmp5 = (tl_x + sz_x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		Float tr_x = tmp5;		HX_STACK_VAR(tr_x,"tr_x");
		HX_STACK_LINE(84)
		Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
		HX_STACK_LINE(86)
		Float tmp6 = (tl_x + sz_x);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(86)
		Float br_x = tmp6;		HX_STACK_VAR(br_x,"br_x");
		HX_STACK_LINE(87)
		Float tmp7 = (tl_y + sz_y);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		Float br_y = tmp7;		HX_STACK_VAR(br_y,"br_y");
		HX_STACK_LINE(89)
		Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
		HX_STACK_LINE(90)
		Float tmp8 = (tl_y + sz_y);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(90)
		Float bl_y = tmp8;		HX_STACK_VAR(bl_y,"bl_y");
		HX_STACK_LINE(92)
		Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
		HX_STACK_LINE(93)
		Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
		HX_STACK_LINE(96)
		bool tmp9 = this->flipy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(96)
		if ((tmp9)){
			HX_STACK_LINE(99)
			tmp_y = bl_y;
			HX_STACK_LINE(100)
			bl_y = tl_y;
			HX_STACK_LINE(101)
			tl_y = tmp_y;
			HX_STACK_LINE(104)
			tmp_y = br_y;
			HX_STACK_LINE(105)
			br_y = tr_y;
			HX_STACK_LINE(106)
			tr_y = tmp_y;
		}
		HX_STACK_LINE(111)
		bool tmp10 = this->flipx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(111)
		if ((tmp10)){
			HX_STACK_LINE(114)
			tmp_x = tr_x;
			HX_STACK_LINE(115)
			tr_x = tl_x;
			HX_STACK_LINE(116)
			tl_x = tmp_x;
			HX_STACK_LINE(119)
			tmp_x = br_x;
			HX_STACK_LINE(120)
			br_x = bl_x;
			HX_STACK_LINE(121)
			bl_x = tmp_x;
		}
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::phoenix::geometry::Vertex tmp11 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(125)
			::phoenix::geometry::TextureCoord tmp12 = tmp11->uv->uv0;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(125)
			::phoenix::geometry::TextureCoord _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(125)
			_this->u = tl_x;
			HX_STACK_LINE(125)
			_this->v = tl_y;
			HX_STACK_LINE(125)
			_this;
		}
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			::phoenix::geometry::Vertex tmp11 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(126)
			::phoenix::geometry::TextureCoord tmp12 = tmp11->uv->uv0;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(126)
			::phoenix::geometry::TextureCoord _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(126)
			_this->u = tr_x;
			HX_STACK_LINE(126)
			_this->v = tr_y;
			HX_STACK_LINE(126)
			_this;
		}
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::phoenix::geometry::Vertex tmp11 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(127)
			::phoenix::geometry::TextureCoord tmp12 = tmp11->uv->uv0;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			::phoenix::geometry::TextureCoord _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(127)
			_this->u = br_x;
			HX_STACK_LINE(127)
			_this->v = br_y;
			HX_STACK_LINE(127)
			_this;
		}
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			::phoenix::geometry::Vertex tmp11 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(129)
			::phoenix::geometry::TextureCoord tmp12 = tmp11->uv->uv0;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(129)
			::phoenix::geometry::TextureCoord _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(129)
			_this->u = bl_x;
			HX_STACK_LINE(129)
			_this->v = bl_y;
			HX_STACK_LINE(129)
			_this;
		}
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			::phoenix::geometry::Vertex tmp11 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(130)
			::phoenix::geometry::TextureCoord tmp12 = tmp11->uv->uv0;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(130)
			::phoenix::geometry::TextureCoord _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(130)
			_this->u = tl_x;
			HX_STACK_LINE(130)
			_this->v = tl_y;
			HX_STACK_LINE(130)
			_this;
		}
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			::phoenix::geometry::Vertex tmp11 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(131)
			::phoenix::geometry::TextureCoord tmp12 = tmp11->uv->uv0;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(131)
			::phoenix::geometry::TextureCoord _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(131)
			_this->u = br_x;
			HX_STACK_LINE(131)
			_this->v = br_y;
			HX_STACK_LINE(131)
			_this;
		}
		HX_STACK_LINE(134)
		this->set_dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,uv_space,(void))

Void QuadGeometry_obj::resize_xy( Float _x,Float _y){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","resize_xy",0xb5fb6d14,"phoenix.geometry.QuadGeometry.resize_xy","phoenix/geometry/QuadGeometry.hx",138,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			::phoenix::geometry::Vertex tmp = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(140)
			::phoenix::Vector _this = tmp->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(140)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(140)
			_this->ignore_listeners = true;
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				_this->x = (int)0;
				HX_STACK_LINE(140)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(140)
				if ((tmp1)){
					HX_STACK_LINE(140)
					_this->x;
				}
				else{
					HX_STACK_LINE(140)
					bool tmp2 = (_this->listen_x != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(140)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(140)
					if ((tmp2)){
						HX_STACK_LINE(140)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(140)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(140)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(140)
						tmp3 = false;
					}
					HX_STACK_LINE(140)
					if ((tmp3)){
						HX_STACK_LINE(140)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(140)
					_this->x;
				}
			}
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				_this->y = (int)0;
				HX_STACK_LINE(140)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(140)
				if ((tmp1)){
					HX_STACK_LINE(140)
					_this->y;
				}
				else{
					HX_STACK_LINE(140)
					bool tmp2 = (_this->listen_y != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(140)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(140)
					if ((tmp2)){
						HX_STACK_LINE(140)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(140)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(140)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(140)
						tmp3 = false;
					}
					HX_STACK_LINE(140)
					if ((tmp3)){
						HX_STACK_LINE(140)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(140)
					_this->y;
				}
			}
			HX_STACK_LINE(140)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(140)
			bool tmp1 = (_this->listen_x != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(140)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(140)
			if ((tmp1)){
				HX_STACK_LINE(140)
				bool tmp3 = _this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(140)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(140)
				tmp2 = !(tmp4);
			}
			else{
				HX_STACK_LINE(140)
				tmp2 = false;
			}
			HX_STACK_LINE(140)
			if ((tmp2)){
				HX_STACK_LINE(140)
				Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(140)
				_this->listen_x(tmp3);
			}
			HX_STACK_LINE(140)
			bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			if ((tmp3)){
				HX_STACK_LINE(140)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(140)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(140)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(140)
				tmp4 = false;
			}
			HX_STACK_LINE(140)
			if ((tmp4)){
				HX_STACK_LINE(140)
				Float tmp5 = _this->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(140)
				_this->listen_y(tmp5);
			}
			HX_STACK_LINE(140)
			_this;
		}
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			::phoenix::geometry::Vertex tmp = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(141)
			::phoenix::Vector _this = tmp->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(141)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(141)
			_this->ignore_listeners = true;
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				_this->x = _x;
				HX_STACK_LINE(141)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(141)
				if ((tmp1)){
					HX_STACK_LINE(141)
					_this->x;
				}
				else{
					HX_STACK_LINE(141)
					bool tmp2 = (_this->listen_x != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(141)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(141)
					if ((tmp2)){
						HX_STACK_LINE(141)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(141)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(141)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(141)
						tmp3 = false;
					}
					HX_STACK_LINE(141)
					if ((tmp3)){
						HX_STACK_LINE(141)
						Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(141)
						_this->listen_x(tmp4);
					}
					HX_STACK_LINE(141)
					_this->x;
				}
			}
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				_this->y = (int)0;
				HX_STACK_LINE(141)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(141)
				if ((tmp1)){
					HX_STACK_LINE(141)
					_this->y;
				}
				else{
					HX_STACK_LINE(141)
					bool tmp2 = (_this->listen_y != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(141)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(141)
					if ((tmp2)){
						HX_STACK_LINE(141)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(141)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(141)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(141)
						tmp3 = false;
					}
					HX_STACK_LINE(141)
					if ((tmp3)){
						HX_STACK_LINE(141)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(141)
					_this->y;
				}
			}
			HX_STACK_LINE(141)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(141)
			bool tmp1 = (_this->listen_x != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(141)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			if ((tmp1)){
				HX_STACK_LINE(141)
				bool tmp3 = _this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(141)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(141)
				tmp2 = !(tmp4);
			}
			else{
				HX_STACK_LINE(141)
				tmp2 = false;
			}
			HX_STACK_LINE(141)
			if ((tmp2)){
				HX_STACK_LINE(141)
				Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(141)
				_this->listen_x(tmp3);
			}
			HX_STACK_LINE(141)
			bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(141)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(141)
			if ((tmp3)){
				HX_STACK_LINE(141)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(141)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(141)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(141)
				tmp4 = false;
			}
			HX_STACK_LINE(141)
			if ((tmp4)){
				HX_STACK_LINE(141)
				Float tmp5 = _this->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(141)
				_this->listen_y(tmp5);
			}
			HX_STACK_LINE(141)
			_this;
		}
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			::phoenix::geometry::Vertex tmp = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(142)
			::phoenix::Vector _this = tmp->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(142)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(142)
			_this->ignore_listeners = true;
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				_this->x = _x;
				HX_STACK_LINE(142)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(142)
				if ((tmp1)){
					HX_STACK_LINE(142)
					_this->x;
				}
				else{
					HX_STACK_LINE(142)
					bool tmp2 = (_this->listen_x != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(142)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(142)
					if ((tmp2)){
						HX_STACK_LINE(142)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(142)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(142)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(142)
						tmp3 = false;
					}
					HX_STACK_LINE(142)
					if ((tmp3)){
						HX_STACK_LINE(142)
						Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(142)
						_this->listen_x(tmp4);
					}
					HX_STACK_LINE(142)
					_this->x;
				}
			}
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				_this->y = _y;
				HX_STACK_LINE(142)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(142)
				if ((tmp1)){
					HX_STACK_LINE(142)
					_this->y;
				}
				else{
					HX_STACK_LINE(142)
					bool tmp2 = (_this->listen_y != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(142)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(142)
					if ((tmp2)){
						HX_STACK_LINE(142)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(142)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(142)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(142)
						tmp3 = false;
					}
					HX_STACK_LINE(142)
					if ((tmp3)){
						HX_STACK_LINE(142)
						Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(142)
						_this->listen_y(tmp4);
					}
					HX_STACK_LINE(142)
					_this->y;
				}
			}
			HX_STACK_LINE(142)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(142)
			bool tmp1 = (_this->listen_x != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(142)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(142)
			if ((tmp1)){
				HX_STACK_LINE(142)
				bool tmp3 = _this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(142)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(142)
				tmp2 = !(tmp4);
			}
			else{
				HX_STACK_LINE(142)
				tmp2 = false;
			}
			HX_STACK_LINE(142)
			if ((tmp2)){
				HX_STACK_LINE(142)
				Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(142)
				_this->listen_x(tmp3);
			}
			HX_STACK_LINE(142)
			bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(142)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(142)
			if ((tmp3)){
				HX_STACK_LINE(142)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(142)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(142)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(142)
				tmp4 = false;
			}
			HX_STACK_LINE(142)
			if ((tmp4)){
				HX_STACK_LINE(142)
				Float tmp5 = _this->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(142)
				_this->listen_y(tmp5);
			}
			HX_STACK_LINE(142)
			_this;
		}
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			::phoenix::geometry::Vertex tmp = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(144)
			::phoenix::Vector _this = tmp->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(144)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(144)
			_this->ignore_listeners = true;
			HX_STACK_LINE(144)
			{
				HX_STACK_LINE(144)
				_this->x = (int)0;
				HX_STACK_LINE(144)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(144)
				if ((tmp1)){
					HX_STACK_LINE(144)
					_this->x;
				}
				else{
					HX_STACK_LINE(144)
					bool tmp2 = (_this->listen_x != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(144)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(144)
					if ((tmp2)){
						HX_STACK_LINE(144)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(144)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(144)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(144)
						tmp3 = false;
					}
					HX_STACK_LINE(144)
					if ((tmp3)){
						HX_STACK_LINE(144)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(144)
					_this->x;
				}
			}
			HX_STACK_LINE(144)
			{
				HX_STACK_LINE(144)
				_this->y = _y;
				HX_STACK_LINE(144)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(144)
				if ((tmp1)){
					HX_STACK_LINE(144)
					_this->y;
				}
				else{
					HX_STACK_LINE(144)
					bool tmp2 = (_this->listen_y != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(144)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(144)
					if ((tmp2)){
						HX_STACK_LINE(144)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(144)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(144)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(144)
						tmp3 = false;
					}
					HX_STACK_LINE(144)
					if ((tmp3)){
						HX_STACK_LINE(144)
						Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(144)
						_this->listen_y(tmp4);
					}
					HX_STACK_LINE(144)
					_this->y;
				}
			}
			HX_STACK_LINE(144)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(144)
			bool tmp1 = (_this->listen_x != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(144)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			if ((tmp1)){
				HX_STACK_LINE(144)
				bool tmp3 = _this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(144)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(144)
				tmp2 = !(tmp4);
			}
			else{
				HX_STACK_LINE(144)
				tmp2 = false;
			}
			HX_STACK_LINE(144)
			if ((tmp2)){
				HX_STACK_LINE(144)
				Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(144)
				_this->listen_x(tmp3);
			}
			HX_STACK_LINE(144)
			bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			if ((tmp3)){
				HX_STACK_LINE(144)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(144)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(144)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(144)
				tmp4 = false;
			}
			HX_STACK_LINE(144)
			if ((tmp4)){
				HX_STACK_LINE(144)
				Float tmp5 = _this->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(144)
				_this->listen_y(tmp5);
			}
			HX_STACK_LINE(144)
			_this;
		}
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			::phoenix::geometry::Vertex tmp = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(145)
			::phoenix::Vector _this = tmp->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(145)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(145)
			_this->ignore_listeners = true;
			HX_STACK_LINE(145)
			{
				HX_STACK_LINE(145)
				_this->x = (int)0;
				HX_STACK_LINE(145)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(145)
				if ((tmp1)){
					HX_STACK_LINE(145)
					_this->x;
				}
				else{
					HX_STACK_LINE(145)
					bool tmp2 = (_this->listen_x != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(145)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(145)
					if ((tmp2)){
						HX_STACK_LINE(145)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(145)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(145)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(145)
						tmp3 = false;
					}
					HX_STACK_LINE(145)
					if ((tmp3)){
						HX_STACK_LINE(145)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(145)
					_this->x;
				}
			}
			HX_STACK_LINE(145)
			{
				HX_STACK_LINE(145)
				_this->y = (int)0;
				HX_STACK_LINE(145)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(145)
				if ((tmp1)){
					HX_STACK_LINE(145)
					_this->y;
				}
				else{
					HX_STACK_LINE(145)
					bool tmp2 = (_this->listen_y != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(145)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(145)
					if ((tmp2)){
						HX_STACK_LINE(145)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(145)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(145)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(145)
						tmp3 = false;
					}
					HX_STACK_LINE(145)
					if ((tmp3)){
						HX_STACK_LINE(145)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(145)
					_this->y;
				}
			}
			HX_STACK_LINE(145)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(145)
			bool tmp1 = (_this->listen_x != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(145)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			if ((tmp1)){
				HX_STACK_LINE(145)
				bool tmp3 = _this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(145)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(145)
				tmp2 = !(tmp4);
			}
			else{
				HX_STACK_LINE(145)
				tmp2 = false;
			}
			HX_STACK_LINE(145)
			if ((tmp2)){
				HX_STACK_LINE(145)
				Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(145)
				_this->listen_x(tmp3);
			}
			HX_STACK_LINE(145)
			bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(145)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			if ((tmp3)){
				HX_STACK_LINE(145)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(145)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(145)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(145)
				tmp4 = false;
			}
			HX_STACK_LINE(145)
			if ((tmp4)){
				HX_STACK_LINE(145)
				Float tmp5 = _this->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(145)
				_this->listen_y(tmp5);
			}
			HX_STACK_LINE(145)
			_this;
		}
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			::phoenix::geometry::Vertex tmp = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(146)
			::phoenix::Vector _this = tmp->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(146)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(146)
			_this->ignore_listeners = true;
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				_this->x = _x;
				HX_STACK_LINE(146)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(146)
				if ((tmp1)){
					HX_STACK_LINE(146)
					_this->x;
				}
				else{
					HX_STACK_LINE(146)
					bool tmp2 = (_this->listen_x != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(146)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(146)
					if ((tmp2)){
						HX_STACK_LINE(146)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(146)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(146)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(146)
						tmp3 = false;
					}
					HX_STACK_LINE(146)
					if ((tmp3)){
						HX_STACK_LINE(146)
						Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(146)
						_this->listen_x(tmp4);
					}
					HX_STACK_LINE(146)
					_this->x;
				}
			}
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				_this->y = _y;
				HX_STACK_LINE(146)
				bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(146)
				if ((tmp1)){
					HX_STACK_LINE(146)
					_this->y;
				}
				else{
					HX_STACK_LINE(146)
					bool tmp2 = (_this->listen_y != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(146)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(146)
					if ((tmp2)){
						HX_STACK_LINE(146)
						bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(146)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(146)
						tmp3 = !(tmp5);
					}
					else{
						HX_STACK_LINE(146)
						tmp3 = false;
					}
					HX_STACK_LINE(146)
					if ((tmp3)){
						HX_STACK_LINE(146)
						Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(146)
						_this->listen_y(tmp4);
					}
					HX_STACK_LINE(146)
					_this->y;
				}
			}
			HX_STACK_LINE(146)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(146)
			bool tmp1 = (_this->listen_x != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(146)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(146)
			if ((tmp1)){
				HX_STACK_LINE(146)
				bool tmp3 = _this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(146)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(146)
				tmp2 = !(tmp4);
			}
			else{
				HX_STACK_LINE(146)
				tmp2 = false;
			}
			HX_STACK_LINE(146)
			if ((tmp2)){
				HX_STACK_LINE(146)
				Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(146)
				_this->listen_x(tmp3);
			}
			HX_STACK_LINE(146)
			bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(146)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			if ((tmp3)){
				HX_STACK_LINE(146)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(146)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(146)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(146)
				tmp4 = false;
			}
			HX_STACK_LINE(146)
			if ((tmp4)){
				HX_STACK_LINE(146)
				Float tmp5 = _this->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(146)
				_this->listen_y(tmp5);
			}
			HX_STACK_LINE(146)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadGeometry_obj,resize_xy,(void))

Void QuadGeometry_obj::resize( ::phoenix::Vector quad){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","resize",0x7127918c,"phoenix.geometry.QuadGeometry.resize","phoenix/geometry/QuadGeometry.hx",150,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(quad,"quad")
		HX_STACK_LINE(152)
		Float tmp = quad->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		Float tmp1 = quad->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		this->resize_xy(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,resize,(void))

Void QuadGeometry_obj::set( ::phoenix::Rectangle quad){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set",0xa66f350a,"phoenix.geometry.QuadGeometry.set","phoenix/geometry/QuadGeometry.hx",156,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(quad,"quad")
		HX_STACK_LINE(158)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		this->vertices->splice((int)0,tmp);
		HX_STACK_LINE(161)
		::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		::phoenix::Color tmp2 = this->color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		::phoenix::geometry::Vertex tmp3 = ::phoenix::geometry::Vertex_obj::__new(tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		::phoenix::geometry::Vertex vert0 = tmp3;		HX_STACK_VAR(vert0,"vert0");
		HX_STACK_LINE(162)
		::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(quad->w,(int)0,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		::phoenix::Color tmp5 = this->color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		::phoenix::geometry::Vertex tmp6 = ::phoenix::geometry::Vertex_obj::__new(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(162)
		::phoenix::geometry::Vertex vert1 = tmp6;		HX_STACK_VAR(vert1,"vert1");
		HX_STACK_LINE(163)
		::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(quad->w,quad->h,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(163)
		::phoenix::Color tmp8 = this->color;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(163)
		::phoenix::geometry::Vertex tmp9 = ::phoenix::geometry::Vertex_obj::__new(tmp7,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(163)
		::phoenix::geometry::Vertex vert2 = tmp9;		HX_STACK_VAR(vert2,"vert2");
		HX_STACK_LINE(166)
		::phoenix::Vector tmp10 = ::phoenix::Vector_obj::__new((int)0,quad->h,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(166)
		::phoenix::Color tmp11 = this->color;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(166)
		::phoenix::geometry::Vertex tmp12 = ::phoenix::geometry::Vertex_obj::__new(tmp10,tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(166)
		::phoenix::geometry::Vertex vert3 = tmp12;		HX_STACK_VAR(vert3,"vert3");
		HX_STACK_LINE(167)
		::phoenix::Vector tmp13 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(167)
		::phoenix::Color tmp14 = this->color;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(167)
		::phoenix::geometry::Vertex tmp15 = ::phoenix::geometry::Vertex_obj::__new(tmp13,tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(167)
		::phoenix::geometry::Vertex vert4 = tmp15;		HX_STACK_VAR(vert4,"vert4");
		HX_STACK_LINE(168)
		::phoenix::Vector tmp16 = ::phoenix::Vector_obj::__new(quad->w,quad->h,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(168)
		::phoenix::Color tmp17 = this->color;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(168)
		::phoenix::geometry::Vertex tmp18 = ::phoenix::geometry::Vertex_obj::__new(tmp16,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(168)
		::phoenix::geometry::Vertex vert5 = tmp18;		HX_STACK_VAR(vert5,"vert5");
		HX_STACK_LINE(173)
		::phoenix::geometry::Vertex tmp19 = vert0;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(173)
		this->add(tmp19);
		HX_STACK_LINE(175)
		::phoenix::geometry::Vertex tmp20 = vert1;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(175)
		this->add(tmp20);
		HX_STACK_LINE(177)
		::phoenix::geometry::Vertex tmp21 = vert2;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(177)
		this->add(tmp21);
		HX_STACK_LINE(179)
		::phoenix::geometry::Vertex tmp22 = vert3;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(179)
		this->add(tmp22);
		HX_STACK_LINE(181)
		::phoenix::geometry::Vertex tmp23 = vert4;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(181)
		this->add(tmp23);
		HX_STACK_LINE(183)
		::phoenix::geometry::Vertex tmp24 = vert5;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(183)
		this->add(tmp24);
		HX_STACK_LINE(186)
		this->set_primitive_type((int)4);
		HX_STACK_LINE(187)
		this->immediate = false;
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			::phoenix::Vector tmp25 = ::phoenix::Vector_obj::__new(quad->x,quad->y,null(),null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(190)
			::phoenix::Vector value = tmp25;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(190)
			{
				HX_STACK_LINE(190)
				::phoenix::Transform tmp26 = this->transform;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(190)
				::phoenix::Spatial _this = tmp26->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(190)
				_this->pos = value;
				HX_STACK_LINE(190)
				bool tmp27 = (value != null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(190)
				if ((tmp27)){
					HX_STACK_LINE(190)
					::phoenix::Vector tmp28 = _this->pos;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(190)
					Dynamic tmp29 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(190)
					::phoenix::Vector_obj::Listen(tmp28,tmp29);
					HX_STACK_LINE(190)
					{
						HX_STACK_LINE(190)
						bool tmp30 = (_this->pos_changed != null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(190)
						bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(190)
						if ((tmp30)){
							HX_STACK_LINE(190)
							bool tmp32 = _this->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(190)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(190)
							tmp31 = !(tmp33);
						}
						else{
							HX_STACK_LINE(190)
							tmp31 = false;
						}
						HX_STACK_LINE(190)
						if ((tmp31)){
							HX_STACK_LINE(190)
							::phoenix::Vector tmp32 = _this->pos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(190)
							_this->pos_changed(tmp32);
						}
					}
				}
				HX_STACK_LINE(190)
				_this->pos;
			}
		}
		HX_STACK_LINE(193)
		this->is_set = true;
		HX_STACK_LINE(196)
		::phoenix::Rectangle tmp25 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(196)
		this->uv_space(tmp25);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,set,(void))

bool QuadGeometry_obj::set_flipx( bool _val){
	HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set_flipx",0x339524f6,"phoenix.geometry.QuadGeometry.set_flipx","phoenix/geometry/QuadGeometry.hx",200,0x485a4ac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(203)
	this->flipx = _val;
	HX_STACK_LINE(205)
	bool tmp = this->is_set;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	if ((tmp)){
		HX_STACK_LINE(206)
		::phoenix::Rectangle tmp1 = this->_uv_cache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		this->uv_space(tmp1);
	}
	HX_STACK_LINE(209)
	bool tmp1 = this->flipx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,set_flipx,return )

bool QuadGeometry_obj::set_flipy( bool _val){
	HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set_flipy",0x339524f7,"phoenix.geometry.QuadGeometry.set_flipy","phoenix/geometry/QuadGeometry.hx",212,0x485a4ac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(215)
	this->flipy = _val;
	HX_STACK_LINE(217)
	bool tmp = this->is_set;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	if ((tmp)){
		HX_STACK_LINE(218)
		::phoenix::Rectangle tmp1 = this->_uv_cache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		this->uv_space(tmp1);
	}
	HX_STACK_LINE(221)
	bool tmp1 = this->flipy;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,set_flipy,return )


QuadGeometry_obj::QuadGeometry_obj()
{
}

void QuadGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuadGeometry);
	HX_MARK_MEMBER_NAME(flipx,"flipx");
	HX_MARK_MEMBER_NAME(flipy,"flipy");
	HX_MARK_MEMBER_NAME(_uv_cache,"_uv_cache");
	HX_MARK_MEMBER_NAME(is_set,"is_set");
	::phoenix::geometry::Geometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void QuadGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flipx,"flipx");
	HX_VISIT_MEMBER_NAME(flipy,"flipy");
	HX_VISIT_MEMBER_NAME(_uv_cache,"_uv_cache");
	HX_VISIT_MEMBER_NAME(is_set,"is_set");
	::phoenix::geometry::Geometry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic QuadGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return uv_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { return flipx; }
		if (HX_FIELD_EQ(inName,"flipy") ) { return flipy; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"is_set") ) { return is_set; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uv_space") ) { return uv_space_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uv_cache") ) { return _uv_cache; }
		if (HX_FIELD_EQ(inName,"resize_xy") ) { return resize_xy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipx") ) { return set_flipx_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipy") ) { return set_flipy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuadGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { if (inCallProp == hx::paccAlways) return set_flipx(inValue);flipx=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipy") ) { if (inCallProp == hx::paccAlways) return set_flipy(inValue);flipy=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"is_set") ) { is_set=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uv_cache") ) { _uv_cache=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool QuadGeometry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void QuadGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("_uv_cache","\x03","\xbe","\x84","\xd3"));
	outFields->push(HX_HCSTRING("is_set","\x8d","\x79","\xb0","\x71"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(QuadGeometry_obj,flipx),HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02")},
	{hx::fsBool,(int)offsetof(QuadGeometry_obj,flipy),HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(QuadGeometry_obj,_uv_cache),HX_HCSTRING("_uv_cache","\x03","\xbe","\x84","\xd3")},
	{hx::fsBool,(int)offsetof(QuadGeometry_obj,is_set),HX_HCSTRING("is_set","\x8d","\x79","\xb0","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"),
	HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"),
	HX_HCSTRING("_uv_cache","\x03","\xbe","\x84","\xd3"),
	HX_HCSTRING("is_set","\x8d","\x79","\xb0","\x71"),
	HX_HCSTRING("uv","\x61","\x66","\x00","\x00"),
	HX_HCSTRING("uv_space","\x28","\xb9","\x40","\xcc"),
	HX_HCSTRING("resize_xy","\xac","\xd5","\xf2","\xab"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("set_flipx","\x8e","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_flipy","\x8f","\x8d","\x8c","\x29"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class QuadGeometry_obj::__mClass;

void QuadGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.QuadGeometry","\xd6","\x25","\xf9","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &QuadGeometry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuadGeometry_obj >;
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
