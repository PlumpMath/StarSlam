#include <hxcpp.h>

#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
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
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
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

Void RectangleGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.RectangleGeometry","new",0x08963096,"phoenix.geometry.RectangleGeometry.new","phoenix/geometry/RectangleGeometry.hx",14,0x605d1b7a)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(16)
	Dynamic tmp = options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	super::__construct(tmp);
	HX_STACK_LINE(18)
	bool tmp1 = (options == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	if ((tmp1)){
		HX_STACK_LINE(19)
		return null();
	}
	HX_STACK_LINE(22)
	Dynamic tmp2 = options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	this->set(tmp2);
}
;
	return null();
}

//RectangleGeometry_obj::~RectangleGeometry_obj() { }

Dynamic RectangleGeometry_obj::__CreateEmpty() { return  new RectangleGeometry_obj; }
hx::ObjectPtr< RectangleGeometry_obj > RectangleGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< RectangleGeometry_obj > _result_ = new RectangleGeometry_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic RectangleGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RectangleGeometry_obj > _result_ = new RectangleGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void RectangleGeometry_obj::set( Dynamic options){
{
		HX_STACK_FRAME("phoenix.geometry.RectangleGeometry","set",0x0899fbd8,"phoenix.geometry.RectangleGeometry.set","phoenix/geometry/RectangleGeometry.hx",26,0x605d1b7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(options,"options")
		HX_STACK_LINE(28)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		this->vertices->splice((int)0,tmp);
		HX_STACK_LINE(30)
		Float _x = options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(31)
		Float _y = options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(32)
		Float _w = options->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_w,"_w");
		HX_STACK_LINE(33)
		Float _h = options->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_h,"_h");
		HX_STACK_LINE(35)
		bool tmp1 = (options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		if ((tmp1)){
			HX_STACK_LINE(36)
			Float tmp2 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			_x = tmp2;
			HX_STACK_LINE(37)
			Float tmp3 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(37)
			_y = tmp3;
			HX_STACK_LINE(38)
			Float tmp4 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(38)
			_w = tmp4;
			HX_STACK_LINE(39)
			Float tmp5 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(39)
			_h = tmp5;
		}
		HX_STACK_LINE(43)
		::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		::phoenix::geometry::Vertex tmp3 = ::phoenix::geometry::Vertex_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		::phoenix::geometry::Vertex vert0 = tmp3;		HX_STACK_VAR(vert0,"vert0");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::phoenix::geometry::TextureCoord tmp4 = vert0->uv->uv0;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			::phoenix::geometry::TextureCoord _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(44)
			_this->u = (int)0;
			HX_STACK_LINE(44)
			_this->v = (int)0;
			HX_STACK_LINE(44)
			_this;
		}
		HX_STACK_LINE(46)
		::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(_w,(int)0,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		::phoenix::geometry::Vertex tmp5 = ::phoenix::geometry::Vertex_obj::__new(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		::phoenix::geometry::Vertex vert1 = tmp5;		HX_STACK_VAR(vert1,"vert1");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			::phoenix::geometry::TextureCoord tmp6 = vert1->uv->uv0;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(47)
			::phoenix::geometry::TextureCoord _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(47)
			_this->u = (int)1;
			HX_STACK_LINE(47)
			_this->v = (int)0;
			HX_STACK_LINE(47)
			_this;
		}
		HX_STACK_LINE(50)
		::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new(_w,(int)0,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		::phoenix::geometry::Vertex tmp7 = ::phoenix::geometry::Vertex_obj::__new(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		::phoenix::geometry::Vertex vert2 = tmp7;		HX_STACK_VAR(vert2,"vert2");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			::phoenix::geometry::TextureCoord tmp8 = vert2->uv->uv0;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			::phoenix::geometry::TextureCoord _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(51)
			_this->u = (int)1;
			HX_STACK_LINE(51)
			_this->v = (int)0;
			HX_STACK_LINE(51)
			_this;
		}
		HX_STACK_LINE(53)
		::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(_w,_h,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		::phoenix::geometry::Vertex tmp9 = ::phoenix::geometry::Vertex_obj::__new(tmp8,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(53)
		::phoenix::geometry::Vertex vert3 = tmp9;		HX_STACK_VAR(vert3,"vert3");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::phoenix::geometry::TextureCoord tmp10 = vert3->uv->uv0;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(54)
			::phoenix::geometry::TextureCoord _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(54)
			_this->u = (int)1;
			HX_STACK_LINE(54)
			_this->v = (int)1;
			HX_STACK_LINE(54)
			_this;
		}
		HX_STACK_LINE(57)
		::phoenix::Vector tmp10 = ::phoenix::Vector_obj::__new(_w,_h,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(57)
		::phoenix::geometry::Vertex tmp11 = ::phoenix::geometry::Vertex_obj::__new(tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(57)
		::phoenix::geometry::Vertex vert4 = tmp11;		HX_STACK_VAR(vert4,"vert4");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::phoenix::geometry::TextureCoord tmp12 = vert4->uv->uv0;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(58)
			::phoenix::geometry::TextureCoord _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(58)
			_this->u = (int)1;
			HX_STACK_LINE(58)
			_this->v = (int)1;
			HX_STACK_LINE(58)
			_this;
		}
		HX_STACK_LINE(60)
		::phoenix::Vector tmp12 = ::phoenix::Vector_obj::__new((int)0,_h,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(60)
		::phoenix::geometry::Vertex tmp13 = ::phoenix::geometry::Vertex_obj::__new(tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(60)
		::phoenix::geometry::Vertex vert5 = tmp13;		HX_STACK_VAR(vert5,"vert5");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			::phoenix::geometry::TextureCoord tmp14 = vert5->uv->uv0;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(61)
			::phoenix::geometry::TextureCoord _this = tmp14;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(61)
			_this->u = (int)0;
			HX_STACK_LINE(61)
			_this->v = (int)1;
			HX_STACK_LINE(61)
			_this;
		}
		HX_STACK_LINE(64)
		::phoenix::Vector tmp14 = ::phoenix::Vector_obj::__new((int)0,_h,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(64)
		::phoenix::geometry::Vertex tmp15 = ::phoenix::geometry::Vertex_obj::__new(tmp14,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(64)
		::phoenix::geometry::Vertex vert6 = tmp15;		HX_STACK_VAR(vert6,"vert6");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			::phoenix::geometry::TextureCoord tmp16 = vert6->uv->uv0;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(65)
			::phoenix::geometry::TextureCoord _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(65)
			_this->u = (int)0;
			HX_STACK_LINE(65)
			_this->v = (int)1;
			HX_STACK_LINE(65)
			_this;
		}
		HX_STACK_LINE(67)
		::phoenix::Vector tmp16 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(67)
		::phoenix::geometry::Vertex tmp17 = ::phoenix::geometry::Vertex_obj::__new(tmp16,null(),null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(67)
		::phoenix::geometry::Vertex vert7 = tmp17;		HX_STACK_VAR(vert7,"vert7");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			::phoenix::geometry::TextureCoord tmp18 = vert7->uv->uv0;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(68)
			::phoenix::geometry::TextureCoord _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(68)
			_this->u = (int)0;
			HX_STACK_LINE(68)
			_this->v = (int)0;
			HX_STACK_LINE(68)
			_this;
		}
		HX_STACK_LINE(70)
		::phoenix::geometry::Vertex tmp18 = vert0;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(70)
		this->add(tmp18);
		HX_STACK_LINE(70)
		::phoenix::geometry::Vertex tmp19 = vert1;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(70)
		this->add(tmp19);
		HX_STACK_LINE(70)
		::phoenix::geometry::Vertex tmp20 = vert2;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(70)
		this->add(tmp20);
		HX_STACK_LINE(70)
		::phoenix::geometry::Vertex tmp21 = vert3;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(70)
		this->add(tmp21);
		HX_STACK_LINE(71)
		::phoenix::geometry::Vertex tmp22 = vert4;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(71)
		this->add(tmp22);
		HX_STACK_LINE(71)
		::phoenix::geometry::Vertex tmp23 = vert5;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(71)
		this->add(tmp23);
		HX_STACK_LINE(71)
		::phoenix::geometry::Vertex tmp24 = vert6;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(71)
		this->add(tmp24);
		HX_STACK_LINE(71)
		::phoenix::geometry::Vertex tmp25 = vert7;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(71)
		this->add(tmp25);
		HX_STACK_LINE(73)
		this->set_primitive_type((int)1);
		HX_STACK_LINE(74)
		Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			bool tmp27 = (options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(74)
			if ((tmp27)){
				HX_STACK_LINE(74)
				options->__FieldRef(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf")) = false;
			}
			HX_STACK_LINE(74)
			tmp26 = options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic );
		}
		HX_STACK_LINE(74)
		this->immediate = tmp26;
		HX_STACK_LINE(75)
		Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			bool tmp28 = (options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(75)
			if ((tmp28)){
				HX_STACK_LINE(75)
				options->__FieldRef(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")) = true;
			}
			HX_STACK_LINE(75)
			tmp27 = options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );
		}
		HX_STACK_LINE(75)
		this->set_visible(tmp27);
		HX_STACK_LINE(76)
		::phoenix::Color tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			bool tmp29 = (options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(76)
			if ((tmp29)){
				HX_STACK_LINE(76)
				::phoenix::Color tmp30 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(76)
				options->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = tmp30;
			}
			HX_STACK_LINE(76)
			tmp28 = options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
		}
		HX_STACK_LINE(76)
		this->set_color(tmp28);
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::phoenix::Vector tmp29 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(78)
			::phoenix::Vector value = tmp29;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				::phoenix::Transform tmp30 = this->transform;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(78)
				::phoenix::Spatial _this = tmp30->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(78)
				_this->pos = value;
				HX_STACK_LINE(78)
				bool tmp31 = (value != null());		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(78)
				if ((tmp31)){
					HX_STACK_LINE(78)
					::phoenix::Vector tmp32 = _this->pos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(78)
					Dynamic tmp33 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(78)
					::phoenix::Vector_obj::Listen(tmp32,tmp33);
					HX_STACK_LINE(78)
					{
						HX_STACK_LINE(78)
						bool tmp34 = (_this->pos_changed != null());		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(78)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(78)
						if ((tmp34)){
							HX_STACK_LINE(78)
							bool tmp36 = _this->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(78)
							bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(78)
							tmp35 = !(tmp37);
						}
						else{
							HX_STACK_LINE(78)
							tmp35 = false;
						}
						HX_STACK_LINE(78)
						if ((tmp35)){
							HX_STACK_LINE(78)
							::phoenix::Vector tmp36 = _this->pos;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(78)
							_this->pos_changed(tmp36);
						}
					}
				}
				HX_STACK_LINE(78)
				_this->pos;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RectangleGeometry_obj,set,(void))


RectangleGeometry_obj::RectangleGeometry_obj()
{
}

Dynamic RectangleGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectangleGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectangleGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class RectangleGeometry_obj::__mClass;

void RectangleGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.RectangleGeometry","\xa4","\xed","\xa8","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RectangleGeometry_obj >;
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
