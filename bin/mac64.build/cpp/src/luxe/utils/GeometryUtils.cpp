#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_utils_GeometryUtils
#include <luxe/utils/GeometryUtils.h>
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
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
namespace luxe{
namespace utils{

Void GeometryUtils_obj::__construct()
{
HX_STACK_FRAME("luxe.utils.GeometryUtils","new",0xd5d0d83c,"luxe.utils.GeometryUtils.new","luxe/utils/GeometryUtils.hx",13,0x749c9d76)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//GeometryUtils_obj::~GeometryUtils_obj() { }

Dynamic GeometryUtils_obj::__CreateEmpty() { return  new GeometryUtils_obj; }
hx::ObjectPtr< GeometryUtils_obj > GeometryUtils_obj::__new()
{  hx::ObjectPtr< GeometryUtils_obj > _result_ = new GeometryUtils_obj();
	_result_->__construct();
	return _result_;}

Dynamic GeometryUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeometryUtils_obj > _result_ = new GeometryUtils_obj();
	_result_->__construct();
	return _result_;}

int GeometryUtils_obj::segments_for_smooth_circle( Float _radius,hx::Null< Float >  __o__smooth){
Float _smooth = __o__smooth.Default(5);
	HX_STACK_FRAME("luxe.utils.GeometryUtils","segments_for_smooth_circle",0xd8797010,"luxe.utils.GeometryUtils.segments_for_smooth_circle","luxe/utils/GeometryUtils.hx",15,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_radius,"_radius")
	HX_STACK_ARG(_smooth,"_smooth")
{
		HX_STACK_LINE(17)
		Float tmp = _smooth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		Float tmp1 = _radius;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		Float tmp2 = ::Math_obj::sqrt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(17)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(GeometryUtils_obj,segments_for_smooth_circle,return )

::phoenix::Vector GeometryUtils_obj::random_point_in_unit_circle( ){
	HX_STACK_FRAME("luxe.utils.GeometryUtils","random_point_in_unit_circle",0xf851d038,"luxe.utils.GeometryUtils.random_point_in_unit_circle","luxe/utils/GeometryUtils.hx",21,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	Float tmp1 = ::Math_obj::sqrt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	Float _r = tmp1;		HX_STACK_VAR(_r,"_r");
	HX_STACK_LINE(28)
	int tmp2 = (int)-1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	Float tmp3 = ::Math_obj::random();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	Float tmp4 = ((int)2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	Float tmp6 = (tmp5 * ((Float)6.283185307179586));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(28)
	Float _t = tmp6;		HX_STACK_VAR(_t,"_t");
	HX_STACK_LINE(31)
	Float tmp7 = _r;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(31)
	Float tmp8 = _t;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(31)
	Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(31)
	Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(31)
	Float tmp11 = _r;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(31)
	Float tmp12 = _t;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(31)
	Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(31)
	Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(31)
	::phoenix::Vector tmp15 = ::phoenix::Vector_obj::__new(tmp10,tmp14,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(31)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC0(GeometryUtils_obj,random_point_in_unit_circle,return )

bool GeometryUtils_obj::point_in_polygon( ::phoenix::Vector _point,::phoenix::Vector _offset,Array< ::Dynamic > _verts){
	HX_STACK_FRAME("luxe.utils.GeometryUtils","point_in_polygon",0xc66ebe53,"luxe.utils.GeometryUtils.point_in_polygon","luxe/utils/GeometryUtils.hx",35,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_point,"_point")
	HX_STACK_ARG(_offset,"_offset")
	HX_STACK_ARG(_verts,"_verts")
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		bool tmp = (_offset == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		if ((tmp)){
			HX_STACK_LINE(37)
			::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(37)
			_offset = tmp1;
		}
		HX_STACK_LINE(37)
		_offset;
	}
	HX_STACK_LINE(39)
	bool c = false;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(40)
	int nvert = _verts->length;		HX_STACK_VAR(nvert,"nvert");
	HX_STACK_LINE(41)
	int tmp = (nvert - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	int j = tmp;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			bool tmp1 = (_g < nvert);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			if ((tmp2)){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(45)
			::phoenix::Vector tmp4 = _verts->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			Float tmp6 = _offset->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			Float tmp8 = _point->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			::phoenix::Vector tmp10 = _verts->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(45)
			Float tmp12 = _offset->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(45)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(45)
			Float tmp14 = _point->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(45)
			bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(45)
			bool tmp16 = (tmp9 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(45)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(45)
			if ((tmp16)){
				HX_STACK_LINE(46)
				Float tmp18 = _point->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(46)
				::phoenix::Vector tmp19 = _verts->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(46)
				::phoenix::Vector tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(46)
				Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(46)
				Float tmp22 = _offset->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(46)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(46)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(46)
				::phoenix::Vector tmp25 = _verts->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(46)
				::phoenix::Vector tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(46)
				Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(46)
				Float tmp28 = _offset->x;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(46)
				Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(46)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(46)
				Float tmp31 = (tmp24 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(46)
				Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(46)
				Float tmp33 = _point->y;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(46)
				::phoenix::Vector tmp34 = _verts->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(46)
				::phoenix::Vector tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(46)
				Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(46)
				Float tmp37 = _offset->y;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(46)
				Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(46)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(46)
				Float tmp40 = (tmp33 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(46)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(46)
				Float tmp42 = (tmp32 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(46)
				Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(47)
				::phoenix::Vector tmp44 = _verts->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(47)
				::phoenix::Vector tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(47)
				Float tmp46 = tmp45->y;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(47)
				Float tmp47 = _offset->y;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(47)
				Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(47)
				Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(47)
				::phoenix::Vector tmp50 = _verts->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(47)
				::phoenix::Vector tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(47)
				Float tmp52 = tmp51->y;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(47)
				Float tmp53 = _offset->y;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(47)
				Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(47)
				Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(47)
				Float tmp56 = (tmp49 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(47)
				Float tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(46)
				Float tmp58 = (Float(tmp43) / Float(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(46)
				Float tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(47)
				::phoenix::Vector tmp60 = _verts->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(47)
				::phoenix::Vector tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(47)
				Float tmp62 = tmp61->x;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(47)
				Float tmp63 = _offset->x;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(47)
				Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(47)
				Float tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(46)
				Float tmp66 = (tmp59 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(46)
				Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(46)
				tmp17 = (tmp18 < tmp67);
			}
			else{
				HX_STACK_LINE(45)
				tmp17 = false;
			}
			HX_STACK_LINE(45)
			if ((tmp17)){
				HX_STACK_LINE(48)
				bool tmp18 = c;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(48)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(48)
				c = tmp19;
			}
			HX_STACK_LINE(51)
			j = i;
		}
	}
	HX_STACK_LINE(54)
	bool tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC3(GeometryUtils_obj,point_in_polygon,return )

bool GeometryUtils_obj::point_in_geometry( ::phoenix::Vector _point,::phoenix::geometry::Geometry _geometry){
	HX_STACK_FRAME("luxe.utils.GeometryUtils","point_in_geometry",0x80cfa4b9,"luxe.utils.GeometryUtils.point_in_geometry","luxe/utils/GeometryUtils.hx",61,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_point,"_point")
	HX_STACK_ARG(_geometry,"_geometry")
	HX_STACK_LINE(63)
	bool c = false;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(64)
	int tmp = _geometry->vertices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	int nvert = tmp;		HX_STACK_VAR(nvert,"nvert");
	HX_STACK_LINE(65)
	int tmp1 = (nvert - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	int j = tmp1;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		while((true)){
			HX_STACK_LINE(67)
			bool tmp2 = (_g < nvert);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			if ((tmp3)){
				HX_STACK_LINE(67)
				break;
			}
			HX_STACK_LINE(67)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(69)
			::phoenix::Vector tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::phoenix::Vector tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					::phoenix::geometry::Vertex tmp7 = _geometry->vertices->__get(i).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(69)
					::phoenix::Vector _this = tmp7->pos;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(69)
					tmp6 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
				}
				HX_STACK_LINE(69)
				::phoenix::Vector _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(69)
				::phoenix::Matrix tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					::phoenix::Spatial tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						::phoenix::Transform _this1 = _geometry->transform;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(69)
						bool tmp9 = _this1->_destroying;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(69)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(69)
						if ((tmp10)){
							HX_STACK_LINE(69)
							bool tmp11 = (_this1->parent != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(69)
							if ((tmp11)){
								HX_STACK_LINE(69)
								bool tmp12 = _this1->parent->dirty;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(69)
								if ((tmp12)){
									HX_STACK_LINE(69)
									::phoenix::Transform _this2 = _this1->parent;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(69)
									bool tmp13 = _this2->dirty;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(69)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(69)
									if ((tmp14)){
										HX_STACK_LINE(69)
										Dynamic();
									}
									else{
										HX_STACK_LINE(69)
										_this2->_cleaning = true;
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											::phoenix::Matrix _this3 = _this2->_pos_matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(69)
												e[(int)0] = (int)1;
												HX_STACK_LINE(69)
												e[(int)4] = (int)0;
												HX_STACK_LINE(69)
												e[(int)8] = (int)0;
												HX_STACK_LINE(69)
												::phoenix::Vector tmp15 = _this2->local->pos;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(69)
												Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(69)
												e[(int)12] = tmp16;
												HX_STACK_LINE(69)
												e[(int)1] = (int)0;
												HX_STACK_LINE(69)
												e[(int)5] = (int)1;
												HX_STACK_LINE(69)
												e[(int)9] = (int)0;
												HX_STACK_LINE(69)
												::phoenix::Vector tmp17 = _this2->local->pos;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(69)
												Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(69)
												e[(int)13] = tmp18;
												HX_STACK_LINE(69)
												e[(int)2] = (int)0;
												HX_STACK_LINE(69)
												e[(int)6] = (int)0;
												HX_STACK_LINE(69)
												e[(int)10] = (int)1;
												HX_STACK_LINE(69)
												::phoenix::Vector tmp19 = _this2->local->pos;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(69)
												Float tmp20 = tmp19->z;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(69)
												e[(int)14] = tmp20;
												HX_STACK_LINE(69)
												e[(int)3] = (int)0;
												HX_STACK_LINE(69)
												e[(int)7] = (int)0;
												HX_STACK_LINE(69)
												e[(int)11] = (int)0;
												HX_STACK_LINE(69)
												e[(int)15] = (int)1;
												HX_STACK_LINE(69)
												_this3;
											}
											HX_STACK_LINE(69)
											_this3;
										}
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											::phoenix::Matrix _this3 = _this2->_rotation_matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(69)
											::phoenix::Quaternion tmp15 = _this2->local->rotation;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(69)
											::phoenix::Quaternion q = tmp15;		HX_STACK_VAR(q,"q");
											HX_STACK_LINE(69)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(69)
											Float tmp16 = (q->x + q->x);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(69)
											Float x2 = tmp16;		HX_STACK_VAR(x2,"x2");
											HX_STACK_LINE(69)
											Float tmp17 = (q->y + q->y);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(69)
											Float y2 = tmp17;		HX_STACK_VAR(y2,"y2");
											HX_STACK_LINE(69)
											Float tmp18 = (q->z + q->z);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(69)
											Float z2 = tmp18;		HX_STACK_VAR(z2,"z2");
											HX_STACK_LINE(69)
											Float tmp19 = (q->x * x2);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											Float xx = tmp19;		HX_STACK_VAR(xx,"xx");
											HX_STACK_LINE(69)
											Float tmp20 = (q->x * y2);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											Float xy = tmp20;		HX_STACK_VAR(xy,"xy");
											HX_STACK_LINE(69)
											Float tmp21 = (q->x * z2);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(69)
											Float xz = tmp21;		HX_STACK_VAR(xz,"xz");
											HX_STACK_LINE(69)
											Float tmp22 = (q->y * y2);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(69)
											Float yy = tmp22;		HX_STACK_VAR(yy,"yy");
											HX_STACK_LINE(69)
											Float tmp23 = (q->y * z2);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(69)
											Float yz = tmp23;		HX_STACK_VAR(yz,"yz");
											HX_STACK_LINE(69)
											Float tmp24 = (q->z * z2);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(69)
											Float zz = tmp24;		HX_STACK_VAR(zz,"zz");
											HX_STACK_LINE(69)
											Float tmp25 = (q->w * x2);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(69)
											Float wx = tmp25;		HX_STACK_VAR(wx,"wx");
											HX_STACK_LINE(69)
											Float tmp26 = (q->w * y2);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(69)
											Float wy = tmp26;		HX_STACK_VAR(wy,"wy");
											HX_STACK_LINE(69)
											Float tmp27 = (q->w * z2);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(69)
											Float wz = tmp27;		HX_STACK_VAR(wz,"wz");
											HX_STACK_LINE(69)
											Float tmp28 = (yy + zz);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(69)
											Float tmp29 = ((int)1 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(69)
											te[(int)0] = tmp29;
											HX_STACK_LINE(69)
											Float tmp30 = (xy - wz);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(69)
											te[(int)4] = tmp30;
											HX_STACK_LINE(69)
											Float tmp31 = (xz + wy);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(69)
											te[(int)8] = tmp31;
											HX_STACK_LINE(69)
											Float tmp32 = (xy + wz);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(69)
											te[(int)1] = tmp32;
											HX_STACK_LINE(69)
											Float tmp33 = (xx + zz);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(69)
											Float tmp34 = ((int)1 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(69)
											te[(int)5] = tmp34;
											HX_STACK_LINE(69)
											Float tmp35 = (yz - wx);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(69)
											te[(int)9] = tmp35;
											HX_STACK_LINE(69)
											Float tmp36 = (xz - wy);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(69)
											te[(int)2] = tmp36;
											HX_STACK_LINE(69)
											Float tmp37 = (yz + wx);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(69)
											te[(int)6] = tmp37;
											HX_STACK_LINE(69)
											Float tmp38 = (xx + yy);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(69)
											Float tmp39 = ((int)1 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(69)
											te[(int)10] = tmp39;
											HX_STACK_LINE(69)
											te[(int)3] = (int)0;
											HX_STACK_LINE(69)
											te[(int)7] = (int)0;
											HX_STACK_LINE(69)
											te[(int)11] = (int)0;
											HX_STACK_LINE(69)
											te[(int)12] = (int)0;
											HX_STACK_LINE(69)
											te[(int)13] = (int)0;
											HX_STACK_LINE(69)
											te[(int)14] = (int)0;
											HX_STACK_LINE(69)
											te[(int)15] = (int)1;
											HX_STACK_LINE(69)
											_this3;
										}
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											::phoenix::Matrix _this3 = _this2->_origin_undo_matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(69)
												e[(int)0] = (int)1;
												HX_STACK_LINE(69)
												e[(int)4] = (int)0;
												HX_STACK_LINE(69)
												e[(int)8] = (int)0;
												HX_STACK_LINE(69)
												Float tmp15 = _this2->origin->x;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(69)
												Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(69)
												e[(int)12] = tmp16;
												HX_STACK_LINE(69)
												e[(int)1] = (int)0;
												HX_STACK_LINE(69)
												e[(int)5] = (int)1;
												HX_STACK_LINE(69)
												e[(int)9] = (int)0;
												HX_STACK_LINE(69)
												Float tmp17 = _this2->origin->y;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(69)
												Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(69)
												e[(int)13] = tmp18;
												HX_STACK_LINE(69)
												e[(int)2] = (int)0;
												HX_STACK_LINE(69)
												e[(int)6] = (int)0;
												HX_STACK_LINE(69)
												e[(int)10] = (int)1;
												HX_STACK_LINE(69)
												Float tmp19 = _this2->origin->z;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(69)
												Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(69)
												e[(int)14] = tmp20;
												HX_STACK_LINE(69)
												e[(int)3] = (int)0;
												HX_STACK_LINE(69)
												e[(int)7] = (int)0;
												HX_STACK_LINE(69)
												e[(int)11] = (int)0;
												HX_STACK_LINE(69)
												e[(int)15] = (int)1;
												HX_STACK_LINE(69)
												_this3;
											}
											HX_STACK_LINE(69)
											_this3;
										}
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											::phoenix::Matrix tmp15 = _this2->local->matrix;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(69)
											::phoenix::Matrix _this3 = tmp15;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(69)
												e[(int)0] = (int)1;
												HX_STACK_LINE(69)
												e[(int)4] = (int)0;
												HX_STACK_LINE(69)
												e[(int)8] = (int)0;
												HX_STACK_LINE(69)
												Float tmp16 = _this2->origin->x;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(69)
												e[(int)12] = tmp16;
												HX_STACK_LINE(69)
												e[(int)1] = (int)0;
												HX_STACK_LINE(69)
												e[(int)5] = (int)1;
												HX_STACK_LINE(69)
												e[(int)9] = (int)0;
												HX_STACK_LINE(69)
												Float tmp17 = _this2->origin->y;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(69)
												e[(int)13] = tmp17;
												HX_STACK_LINE(69)
												e[(int)2] = (int)0;
												HX_STACK_LINE(69)
												e[(int)6] = (int)0;
												HX_STACK_LINE(69)
												e[(int)10] = (int)1;
												HX_STACK_LINE(69)
												Float tmp18 = _this2->origin->z;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(69)
												e[(int)14] = tmp18;
												HX_STACK_LINE(69)
												e[(int)3] = (int)0;
												HX_STACK_LINE(69)
												e[(int)7] = (int)0;
												HX_STACK_LINE(69)
												e[(int)11] = (int)0;
												HX_STACK_LINE(69)
												e[(int)15] = (int)1;
												HX_STACK_LINE(69)
												_this3;
											}
											HX_STACK_LINE(69)
											_this3;
										}
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											::phoenix::Matrix tmp15 = _this2->local->matrix;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(69)
											::phoenix::Matrix _this3 = tmp15;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(69)
												Array< Float > be = _this2->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(69)
												Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(69)
												Float tmp16 = ae->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(69)
												Float a11 = tmp16;		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(69)
												Float tmp17 = ae->__get((int)4);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(69)
												Float a12 = tmp17;		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(69)
												Float tmp18 = ae->__get((int)8);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(69)
												Float a13 = tmp18;		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(69)
												Float tmp19 = ae->__get((int)12);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(69)
												Float a14 = tmp19;		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(69)
												Float tmp20 = ae->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(69)
												Float a21 = tmp20;		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(69)
												Float tmp21 = ae->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(69)
												Float a22 = tmp21;		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(69)
												Float tmp22 = ae->__get((int)9);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(69)
												Float a23 = tmp22;		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(69)
												Float tmp23 = ae->__get((int)13);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(69)
												Float a24 = tmp23;		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(69)
												Float tmp24 = ae->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(69)
												Float a31 = tmp24;		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(69)
												Float tmp25 = ae->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(69)
												Float a32 = tmp25;		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(69)
												Float tmp26 = ae->__get((int)10);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(69)
												Float a33 = tmp26;		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(69)
												Float tmp27 = ae->__get((int)14);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(69)
												Float a34 = tmp27;		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(69)
												Float tmp28 = ae->__get((int)3);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(69)
												Float a41 = tmp28;		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(69)
												Float tmp29 = ae->__get((int)7);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(69)
												Float a42 = tmp29;		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(69)
												Float tmp30 = ae->__get((int)11);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(69)
												Float a43 = tmp30;		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(69)
												Float tmp31 = ae->__get((int)15);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(69)
												Float a44 = tmp31;		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(69)
												Float tmp32 = be->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(69)
												Float b11 = tmp32;		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(69)
												Float tmp33 = be->__get((int)4);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(69)
												Float b12 = tmp33;		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(69)
												Float tmp34 = be->__get((int)8);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(69)
												Float b13 = tmp34;		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(69)
												Float tmp35 = be->__get((int)12);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(69)
												Float b14 = tmp35;		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(69)
												Float tmp36 = be->__get((int)1);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(69)
												Float b21 = tmp36;		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(69)
												Float tmp37 = be->__get((int)5);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(69)
												Float b22 = tmp37;		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(69)
												Float tmp38 = be->__get((int)9);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(69)
												Float b23 = tmp38;		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(69)
												Float tmp39 = be->__get((int)13);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(69)
												Float b24 = tmp39;		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(69)
												Float tmp40 = be->__get((int)2);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(69)
												Float b31 = tmp40;		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(69)
												Float tmp41 = be->__get((int)6);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(69)
												Float b32 = tmp41;		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(69)
												Float tmp42 = be->__get((int)10);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(69)
												Float b33 = tmp42;		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(69)
												Float tmp43 = be->__get((int)14);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(69)
												Float b34 = tmp43;		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(69)
												Float tmp44 = be->__get((int)3);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(69)
												Float b41 = tmp44;		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(69)
												Float tmp45 = be->__get((int)7);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(69)
												Float b42 = tmp45;		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(69)
												Float tmp46 = be->__get((int)11);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(69)
												Float b43 = tmp46;		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(69)
												Float tmp47 = be->__get((int)15);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(69)
												Float b44 = tmp47;		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(69)
												Float tmp48 = (a11 * b11);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(69)
												Float tmp49 = (a12 * b21);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(69)
												Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(69)
												Float tmp51 = (a13 * b31);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(69)
												Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(69)
												Float tmp53 = (a14 * b41);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(69)
												Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(69)
												te[(int)0] = tmp54;
												HX_STACK_LINE(69)
												Float tmp55 = (a11 * b12);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(69)
												Float tmp56 = (a12 * b22);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(69)
												Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(69)
												Float tmp58 = (a13 * b32);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(69)
												Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(69)
												Float tmp60 = (a14 * b42);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(69)
												Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(69)
												te[(int)4] = tmp61;
												HX_STACK_LINE(69)
												Float tmp62 = (a11 * b13);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(69)
												Float tmp63 = (a12 * b23);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(69)
												Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(69)
												Float tmp65 = (a13 * b33);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(69)
												Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(69)
												Float tmp67 = (a14 * b43);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(69)
												Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(69)
												te[(int)8] = tmp68;
												HX_STACK_LINE(69)
												Float tmp69 = (a11 * b14);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(69)
												Float tmp70 = (a12 * b24);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(69)
												Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(69)
												Float tmp72 = (a13 * b34);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(69)
												Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(69)
												Float tmp74 = (a14 * b44);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(69)
												Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(69)
												te[(int)12] = tmp75;
												HX_STACK_LINE(69)
												Float tmp76 = (a21 * b11);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(69)
												Float tmp77 = (a22 * b21);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(69)
												Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(69)
												Float tmp79 = (a23 * b31);		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(69)
												Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(69)
												Float tmp81 = (a24 * b41);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(69)
												Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(69)
												te[(int)1] = tmp82;
												HX_STACK_LINE(69)
												Float tmp83 = (a21 * b12);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(69)
												Float tmp84 = (a22 * b22);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(69)
												Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(69)
												Float tmp86 = (a23 * b32);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(69)
												Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(69)
												Float tmp88 = (a24 * b42);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(69)
												Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(69)
												te[(int)5] = tmp89;
												HX_STACK_LINE(69)
												Float tmp90 = (a21 * b13);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(69)
												Float tmp91 = (a22 * b23);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(69)
												Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(69)
												Float tmp93 = (a23 * b33);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(69)
												Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(69)
												Float tmp95 = (a24 * b43);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(69)
												Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(69)
												te[(int)9] = tmp96;
												HX_STACK_LINE(69)
												Float tmp97 = (a21 * b14);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(69)
												Float tmp98 = (a22 * b24);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(69)
												Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(69)
												Float tmp100 = (a23 * b34);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(69)
												Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(69)
												Float tmp102 = (a24 * b44);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(69)
												Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(69)
												te[(int)13] = tmp103;
												HX_STACK_LINE(69)
												Float tmp104 = (a31 * b11);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(69)
												Float tmp105 = (a32 * b21);		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(69)
												Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(69)
												Float tmp107 = (a33 * b31);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(69)
												Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(69)
												Float tmp109 = (a34 * b41);		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(69)
												Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
												HX_STACK_LINE(69)
												te[(int)2] = tmp110;
												HX_STACK_LINE(69)
												Float tmp111 = (a31 * b12);		HX_STACK_VAR(tmp111,"tmp111");
												HX_STACK_LINE(69)
												Float tmp112 = (a32 * b22);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(69)
												Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
												HX_STACK_LINE(69)
												Float tmp114 = (a33 * b32);		HX_STACK_VAR(tmp114,"tmp114");
												HX_STACK_LINE(69)
												Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
												HX_STACK_LINE(69)
												Float tmp116 = (a34 * b42);		HX_STACK_VAR(tmp116,"tmp116");
												HX_STACK_LINE(69)
												Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
												HX_STACK_LINE(69)
												te[(int)6] = tmp117;
												HX_STACK_LINE(69)
												Float tmp118 = (a31 * b13);		HX_STACK_VAR(tmp118,"tmp118");
												HX_STACK_LINE(69)
												Float tmp119 = (a32 * b23);		HX_STACK_VAR(tmp119,"tmp119");
												HX_STACK_LINE(69)
												Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
												HX_STACK_LINE(69)
												Float tmp121 = (a33 * b33);		HX_STACK_VAR(tmp121,"tmp121");
												HX_STACK_LINE(69)
												Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
												HX_STACK_LINE(69)
												Float tmp123 = (a34 * b43);		HX_STACK_VAR(tmp123,"tmp123");
												HX_STACK_LINE(69)
												Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
												HX_STACK_LINE(69)
												te[(int)10] = tmp124;
												HX_STACK_LINE(69)
												Float tmp125 = (a31 * b14);		HX_STACK_VAR(tmp125,"tmp125");
												HX_STACK_LINE(69)
												Float tmp126 = (a32 * b24);		HX_STACK_VAR(tmp126,"tmp126");
												HX_STACK_LINE(69)
												Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
												HX_STACK_LINE(69)
												Float tmp128 = (a33 * b34);		HX_STACK_VAR(tmp128,"tmp128");
												HX_STACK_LINE(69)
												Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
												HX_STACK_LINE(69)
												Float tmp130 = (a34 * b44);		HX_STACK_VAR(tmp130,"tmp130");
												HX_STACK_LINE(69)
												Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
												HX_STACK_LINE(69)
												te[(int)14] = tmp131;
												HX_STACK_LINE(69)
												Float tmp132 = (a41 * b11);		HX_STACK_VAR(tmp132,"tmp132");
												HX_STACK_LINE(69)
												Float tmp133 = (a42 * b21);		HX_STACK_VAR(tmp133,"tmp133");
												HX_STACK_LINE(69)
												Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
												HX_STACK_LINE(69)
												Float tmp135 = (a43 * b31);		HX_STACK_VAR(tmp135,"tmp135");
												HX_STACK_LINE(69)
												Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
												HX_STACK_LINE(69)
												Float tmp137 = (a44 * b41);		HX_STACK_VAR(tmp137,"tmp137");
												HX_STACK_LINE(69)
												Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
												HX_STACK_LINE(69)
												te[(int)3] = tmp138;
												HX_STACK_LINE(69)
												Float tmp139 = (a41 * b12);		HX_STACK_VAR(tmp139,"tmp139");
												HX_STACK_LINE(69)
												Float tmp140 = (a42 * b22);		HX_STACK_VAR(tmp140,"tmp140");
												HX_STACK_LINE(69)
												Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
												HX_STACK_LINE(69)
												Float tmp142 = (a43 * b32);		HX_STACK_VAR(tmp142,"tmp142");
												HX_STACK_LINE(69)
												Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
												HX_STACK_LINE(69)
												Float tmp144 = (a44 * b42);		HX_STACK_VAR(tmp144,"tmp144");
												HX_STACK_LINE(69)
												Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
												HX_STACK_LINE(69)
												te[(int)7] = tmp145;
												HX_STACK_LINE(69)
												Float tmp146 = (a41 * b13);		HX_STACK_VAR(tmp146,"tmp146");
												HX_STACK_LINE(69)
												Float tmp147 = (a42 * b23);		HX_STACK_VAR(tmp147,"tmp147");
												HX_STACK_LINE(69)
												Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
												HX_STACK_LINE(69)
												Float tmp149 = (a43 * b33);		HX_STACK_VAR(tmp149,"tmp149");
												HX_STACK_LINE(69)
												Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
												HX_STACK_LINE(69)
												Float tmp151 = (a44 * b43);		HX_STACK_VAR(tmp151,"tmp151");
												HX_STACK_LINE(69)
												Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
												HX_STACK_LINE(69)
												te[(int)11] = tmp152;
												HX_STACK_LINE(69)
												Float tmp153 = (a41 * b14);		HX_STACK_VAR(tmp153,"tmp153");
												HX_STACK_LINE(69)
												Float tmp154 = (a42 * b24);		HX_STACK_VAR(tmp154,"tmp154");
												HX_STACK_LINE(69)
												Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
												HX_STACK_LINE(69)
												Float tmp156 = (a43 * b34);		HX_STACK_VAR(tmp156,"tmp156");
												HX_STACK_LINE(69)
												Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
												HX_STACK_LINE(69)
												Float tmp158 = (a44 * b44);		HX_STACK_VAR(tmp158,"tmp158");
												HX_STACK_LINE(69)
												Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
												HX_STACK_LINE(69)
												te[(int)15] = tmp159;
												HX_STACK_LINE(69)
												_this3;
											}
										}
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											::phoenix::Matrix tmp15 = _this2->local->matrix;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(69)
											::phoenix::Matrix _this3 = tmp15;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(69)
											::phoenix::Vector tmp16 = _this2->local->scale;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(69)
											::phoenix::Vector _v = tmp16;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(69)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(69)
											Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
											HX_STACK_LINE(69)
											Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
											HX_STACK_LINE(69)
											Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
											HX_STACK_LINE(69)
											Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(69)
											hx::MultEq(te[(int)0],tmp17);
											HX_STACK_LINE(69)
											Float tmp18 = _y;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(69)
											hx::MultEq(te[(int)4],tmp18);
											HX_STACK_LINE(69)
											Float tmp19 = _z;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											hx::MultEq(te[(int)8],tmp19);
											HX_STACK_LINE(69)
											Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											hx::MultEq(te[(int)1],tmp20);
											HX_STACK_LINE(69)
											Float tmp21 = _y;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(69)
											hx::MultEq(te[(int)5],tmp21);
											HX_STACK_LINE(69)
											Float tmp22 = _z;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(69)
											hx::MultEq(te[(int)9],tmp22);
											HX_STACK_LINE(69)
											Float tmp23 = _x;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(69)
											hx::MultEq(te[(int)2],tmp23);
											HX_STACK_LINE(69)
											Float tmp24 = _y;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(69)
											hx::MultEq(te[(int)6],tmp24);
											HX_STACK_LINE(69)
											Float tmp25 = _z;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(69)
											hx::MultEq(te[(int)10],tmp25);
											HX_STACK_LINE(69)
											Float tmp26 = _x;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(69)
											hx::MultEq(te[(int)3],tmp26);
											HX_STACK_LINE(69)
											Float tmp27 = _y;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(69)
											hx::MultEq(te[(int)7],tmp27);
											HX_STACK_LINE(69)
											Float tmp28 = _z;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(69)
											hx::MultEq(te[(int)11],tmp28);
											HX_STACK_LINE(69)
											_this3;
										}
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											::phoenix::Matrix tmp15 = _this2->local->matrix;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(69)
											::phoenix::Matrix _this3 = tmp15;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(69)
											::phoenix::Vector tmp16 = _this2->local->pos;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(69)
											::phoenix::Vector _v = tmp16;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(69)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(69)
											Float tmp17 = _v->x;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(69)
											te[(int)12] = tmp17;
											HX_STACK_LINE(69)
											Float tmp18 = _v->y;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(69)
											te[(int)13] = tmp18;
											HX_STACK_LINE(69)
											Float tmp19 = _v->z;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											te[(int)14] = tmp19;
											HX_STACK_LINE(69)
											_this3;
										}
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											::phoenix::Matrix tmp15 = _this2->local->matrix;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(69)
											::phoenix::Matrix _this3 = tmp15;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(69)
												Array< Float > be = _this2->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(69)
												Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(69)
												Float tmp16 = ae->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(69)
												Float a11 = tmp16;		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(69)
												Float tmp17 = ae->__get((int)4);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(69)
												Float a12 = tmp17;		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(69)
												Float tmp18 = ae->__get((int)8);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(69)
												Float a13 = tmp18;		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(69)
												Float tmp19 = ae->__get((int)12);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(69)
												Float a14 = tmp19;		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(69)
												Float tmp20 = ae->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(69)
												Float a21 = tmp20;		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(69)
												Float tmp21 = ae->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(69)
												Float a22 = tmp21;		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(69)
												Float tmp22 = ae->__get((int)9);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(69)
												Float a23 = tmp22;		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(69)
												Float tmp23 = ae->__get((int)13);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(69)
												Float a24 = tmp23;		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(69)
												Float tmp24 = ae->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(69)
												Float a31 = tmp24;		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(69)
												Float tmp25 = ae->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(69)
												Float a32 = tmp25;		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(69)
												Float tmp26 = ae->__get((int)10);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(69)
												Float a33 = tmp26;		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(69)
												Float tmp27 = ae->__get((int)14);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(69)
												Float a34 = tmp27;		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(69)
												Float tmp28 = ae->__get((int)3);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(69)
												Float a41 = tmp28;		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(69)
												Float tmp29 = ae->__get((int)7);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(69)
												Float a42 = tmp29;		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(69)
												Float tmp30 = ae->__get((int)11);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(69)
												Float a43 = tmp30;		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(69)
												Float tmp31 = ae->__get((int)15);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(69)
												Float a44 = tmp31;		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(69)
												Float tmp32 = be->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(69)
												Float b11 = tmp32;		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(69)
												Float tmp33 = be->__get((int)4);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(69)
												Float b12 = tmp33;		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(69)
												Float tmp34 = be->__get((int)8);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(69)
												Float b13 = tmp34;		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(69)
												Float tmp35 = be->__get((int)12);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(69)
												Float b14 = tmp35;		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(69)
												Float tmp36 = be->__get((int)1);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(69)
												Float b21 = tmp36;		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(69)
												Float tmp37 = be->__get((int)5);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(69)
												Float b22 = tmp37;		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(69)
												Float tmp38 = be->__get((int)9);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(69)
												Float b23 = tmp38;		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(69)
												Float tmp39 = be->__get((int)13);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(69)
												Float b24 = tmp39;		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(69)
												Float tmp40 = be->__get((int)2);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(69)
												Float b31 = tmp40;		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(69)
												Float tmp41 = be->__get((int)6);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(69)
												Float b32 = tmp41;		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(69)
												Float tmp42 = be->__get((int)10);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(69)
												Float b33 = tmp42;		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(69)
												Float tmp43 = be->__get((int)14);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(69)
												Float b34 = tmp43;		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(69)
												Float tmp44 = be->__get((int)3);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(69)
												Float b41 = tmp44;		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(69)
												Float tmp45 = be->__get((int)7);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(69)
												Float b42 = tmp45;		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(69)
												Float tmp46 = be->__get((int)11);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(69)
												Float b43 = tmp46;		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(69)
												Float tmp47 = be->__get((int)15);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(69)
												Float b44 = tmp47;		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(69)
												Float tmp48 = (a11 * b11);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(69)
												Float tmp49 = (a12 * b21);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(69)
												Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(69)
												Float tmp51 = (a13 * b31);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(69)
												Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(69)
												Float tmp53 = (a14 * b41);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(69)
												Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(69)
												te[(int)0] = tmp54;
												HX_STACK_LINE(69)
												Float tmp55 = (a11 * b12);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(69)
												Float tmp56 = (a12 * b22);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(69)
												Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(69)
												Float tmp58 = (a13 * b32);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(69)
												Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(69)
												Float tmp60 = (a14 * b42);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(69)
												Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(69)
												te[(int)4] = tmp61;
												HX_STACK_LINE(69)
												Float tmp62 = (a11 * b13);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(69)
												Float tmp63 = (a12 * b23);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(69)
												Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(69)
												Float tmp65 = (a13 * b33);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(69)
												Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(69)
												Float tmp67 = (a14 * b43);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(69)
												Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(69)
												te[(int)8] = tmp68;
												HX_STACK_LINE(69)
												Float tmp69 = (a11 * b14);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(69)
												Float tmp70 = (a12 * b24);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(69)
												Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(69)
												Float tmp72 = (a13 * b34);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(69)
												Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(69)
												Float tmp74 = (a14 * b44);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(69)
												Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(69)
												te[(int)12] = tmp75;
												HX_STACK_LINE(69)
												Float tmp76 = (a21 * b11);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(69)
												Float tmp77 = (a22 * b21);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(69)
												Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(69)
												Float tmp79 = (a23 * b31);		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(69)
												Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(69)
												Float tmp81 = (a24 * b41);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(69)
												Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(69)
												te[(int)1] = tmp82;
												HX_STACK_LINE(69)
												Float tmp83 = (a21 * b12);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(69)
												Float tmp84 = (a22 * b22);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(69)
												Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(69)
												Float tmp86 = (a23 * b32);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(69)
												Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(69)
												Float tmp88 = (a24 * b42);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(69)
												Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(69)
												te[(int)5] = tmp89;
												HX_STACK_LINE(69)
												Float tmp90 = (a21 * b13);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(69)
												Float tmp91 = (a22 * b23);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(69)
												Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(69)
												Float tmp93 = (a23 * b33);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(69)
												Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(69)
												Float tmp95 = (a24 * b43);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(69)
												Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(69)
												te[(int)9] = tmp96;
												HX_STACK_LINE(69)
												Float tmp97 = (a21 * b14);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(69)
												Float tmp98 = (a22 * b24);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(69)
												Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(69)
												Float tmp100 = (a23 * b34);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(69)
												Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(69)
												Float tmp102 = (a24 * b44);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(69)
												Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(69)
												te[(int)13] = tmp103;
												HX_STACK_LINE(69)
												Float tmp104 = (a31 * b11);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(69)
												Float tmp105 = (a32 * b21);		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(69)
												Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(69)
												Float tmp107 = (a33 * b31);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(69)
												Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(69)
												Float tmp109 = (a34 * b41);		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(69)
												Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
												HX_STACK_LINE(69)
												te[(int)2] = tmp110;
												HX_STACK_LINE(69)
												Float tmp111 = (a31 * b12);		HX_STACK_VAR(tmp111,"tmp111");
												HX_STACK_LINE(69)
												Float tmp112 = (a32 * b22);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(69)
												Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
												HX_STACK_LINE(69)
												Float tmp114 = (a33 * b32);		HX_STACK_VAR(tmp114,"tmp114");
												HX_STACK_LINE(69)
												Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
												HX_STACK_LINE(69)
												Float tmp116 = (a34 * b42);		HX_STACK_VAR(tmp116,"tmp116");
												HX_STACK_LINE(69)
												Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
												HX_STACK_LINE(69)
												te[(int)6] = tmp117;
												HX_STACK_LINE(69)
												Float tmp118 = (a31 * b13);		HX_STACK_VAR(tmp118,"tmp118");
												HX_STACK_LINE(69)
												Float tmp119 = (a32 * b23);		HX_STACK_VAR(tmp119,"tmp119");
												HX_STACK_LINE(69)
												Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
												HX_STACK_LINE(69)
												Float tmp121 = (a33 * b33);		HX_STACK_VAR(tmp121,"tmp121");
												HX_STACK_LINE(69)
												Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
												HX_STACK_LINE(69)
												Float tmp123 = (a34 * b43);		HX_STACK_VAR(tmp123,"tmp123");
												HX_STACK_LINE(69)
												Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
												HX_STACK_LINE(69)
												te[(int)10] = tmp124;
												HX_STACK_LINE(69)
												Float tmp125 = (a31 * b14);		HX_STACK_VAR(tmp125,"tmp125");
												HX_STACK_LINE(69)
												Float tmp126 = (a32 * b24);		HX_STACK_VAR(tmp126,"tmp126");
												HX_STACK_LINE(69)
												Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
												HX_STACK_LINE(69)
												Float tmp128 = (a33 * b34);		HX_STACK_VAR(tmp128,"tmp128");
												HX_STACK_LINE(69)
												Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
												HX_STACK_LINE(69)
												Float tmp130 = (a34 * b44);		HX_STACK_VAR(tmp130,"tmp130");
												HX_STACK_LINE(69)
												Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
												HX_STACK_LINE(69)
												te[(int)14] = tmp131;
												HX_STACK_LINE(69)
												Float tmp132 = (a41 * b11);		HX_STACK_VAR(tmp132,"tmp132");
												HX_STACK_LINE(69)
												Float tmp133 = (a42 * b21);		HX_STACK_VAR(tmp133,"tmp133");
												HX_STACK_LINE(69)
												Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
												HX_STACK_LINE(69)
												Float tmp135 = (a43 * b31);		HX_STACK_VAR(tmp135,"tmp135");
												HX_STACK_LINE(69)
												Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
												HX_STACK_LINE(69)
												Float tmp137 = (a44 * b41);		HX_STACK_VAR(tmp137,"tmp137");
												HX_STACK_LINE(69)
												Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
												HX_STACK_LINE(69)
												te[(int)3] = tmp138;
												HX_STACK_LINE(69)
												Float tmp139 = (a41 * b12);		HX_STACK_VAR(tmp139,"tmp139");
												HX_STACK_LINE(69)
												Float tmp140 = (a42 * b22);		HX_STACK_VAR(tmp140,"tmp140");
												HX_STACK_LINE(69)
												Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
												HX_STACK_LINE(69)
												Float tmp142 = (a43 * b32);		HX_STACK_VAR(tmp142,"tmp142");
												HX_STACK_LINE(69)
												Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
												HX_STACK_LINE(69)
												Float tmp144 = (a44 * b42);		HX_STACK_VAR(tmp144,"tmp144");
												HX_STACK_LINE(69)
												Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
												HX_STACK_LINE(69)
												te[(int)7] = tmp145;
												HX_STACK_LINE(69)
												Float tmp146 = (a41 * b13);		HX_STACK_VAR(tmp146,"tmp146");
												HX_STACK_LINE(69)
												Float tmp147 = (a42 * b23);		HX_STACK_VAR(tmp147,"tmp147");
												HX_STACK_LINE(69)
												Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
												HX_STACK_LINE(69)
												Float tmp149 = (a43 * b33);		HX_STACK_VAR(tmp149,"tmp149");
												HX_STACK_LINE(69)
												Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
												HX_STACK_LINE(69)
												Float tmp151 = (a44 * b43);		HX_STACK_VAR(tmp151,"tmp151");
												HX_STACK_LINE(69)
												Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
												HX_STACK_LINE(69)
												te[(int)11] = tmp152;
												HX_STACK_LINE(69)
												Float tmp153 = (a41 * b14);		HX_STACK_VAR(tmp153,"tmp153");
												HX_STACK_LINE(69)
												Float tmp154 = (a42 * b24);		HX_STACK_VAR(tmp154,"tmp154");
												HX_STACK_LINE(69)
												Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
												HX_STACK_LINE(69)
												Float tmp156 = (a43 * b34);		HX_STACK_VAR(tmp156,"tmp156");
												HX_STACK_LINE(69)
												Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
												HX_STACK_LINE(69)
												Float tmp158 = (a44 * b44);		HX_STACK_VAR(tmp158,"tmp158");
												HX_STACK_LINE(69)
												Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
												HX_STACK_LINE(69)
												te[(int)15] = tmp159;
												HX_STACK_LINE(69)
												_this3;
											}
										}
										HX_STACK_LINE(69)
										bool tmp15 = (_this2->parent != null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(69)
										if ((tmp15)){
											HX_STACK_LINE(69)
											::phoenix::Spatial tmp16 = _this2->get_world();		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(69)
											::phoenix::Spatial _this3 = tmp16;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(69)
											::phoenix::Matrix tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												::phoenix::Matrix tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(69)
												{
													HX_STACK_LINE(69)
													::phoenix::Spatial tmp19 = _this2->get_world();		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(69)
													::phoenix::Spatial _this4 = tmp19;		HX_STACK_VAR(_this4,"_this4");
													HX_STACK_LINE(69)
													tmp18 = _this4->matrix;
												}
												HX_STACK_LINE(69)
												::phoenix::Matrix _this4 = tmp18;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(69)
												::phoenix::Matrix tmp19;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(69)
												{
													HX_STACK_LINE(69)
													::phoenix::Spatial tmp20 = _this2->parent->get_world();		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(69)
													::phoenix::Spatial _this5 = tmp20;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(69)
													tmp19 = _this5->matrix;
												}
												HX_STACK_LINE(69)
												::phoenix::Matrix _a = tmp19;		HX_STACK_VAR(_a,"_a");
												HX_STACK_LINE(69)
												Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(69)
												::phoenix::Matrix tmp20 = _this2->local->matrix;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(69)
												Array< Float > be = tmp20->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(69)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(69)
												Float tmp21 = ae->__get((int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(69)
												Float a11 = tmp21;		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(69)
												Float tmp22 = ae->__get((int)4);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(69)
												Float a12 = tmp22;		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(69)
												Float tmp23 = ae->__get((int)8);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(69)
												Float a13 = tmp23;		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(69)
												Float tmp24 = ae->__get((int)12);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(69)
												Float a14 = tmp24;		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(69)
												Float tmp25 = ae->__get((int)1);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(69)
												Float a21 = tmp25;		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(69)
												Float tmp26 = ae->__get((int)5);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(69)
												Float a22 = tmp26;		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(69)
												Float tmp27 = ae->__get((int)9);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(69)
												Float a23 = tmp27;		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(69)
												Float tmp28 = ae->__get((int)13);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(69)
												Float a24 = tmp28;		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(69)
												Float tmp29 = ae->__get((int)2);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(69)
												Float a31 = tmp29;		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(69)
												Float tmp30 = ae->__get((int)6);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(69)
												Float a32 = tmp30;		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(69)
												Float tmp31 = ae->__get((int)10);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(69)
												Float a33 = tmp31;		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(69)
												Float tmp32 = ae->__get((int)14);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(69)
												Float a34 = tmp32;		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(69)
												Float tmp33 = ae->__get((int)3);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(69)
												Float a41 = tmp33;		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(69)
												Float tmp34 = ae->__get((int)7);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(69)
												Float a42 = tmp34;		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(69)
												Float tmp35 = ae->__get((int)11);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(69)
												Float a43 = tmp35;		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(69)
												Float tmp36 = ae->__get((int)15);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(69)
												Float a44 = tmp36;		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(69)
												Float tmp37 = be->__get((int)0);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(69)
												Float b11 = tmp37;		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(69)
												Float tmp38 = be->__get((int)4);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(69)
												Float b12 = tmp38;		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(69)
												Float tmp39 = be->__get((int)8);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(69)
												Float b13 = tmp39;		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(69)
												Float tmp40 = be->__get((int)12);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(69)
												Float b14 = tmp40;		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(69)
												Float tmp41 = be->__get((int)1);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(69)
												Float b21 = tmp41;		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(69)
												Float tmp42 = be->__get((int)5);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(69)
												Float b22 = tmp42;		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(69)
												Float tmp43 = be->__get((int)9);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(69)
												Float b23 = tmp43;		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(69)
												Float tmp44 = be->__get((int)13);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(69)
												Float b24 = tmp44;		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(69)
												Float tmp45 = be->__get((int)2);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(69)
												Float b31 = tmp45;		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(69)
												Float tmp46 = be->__get((int)6);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(69)
												Float b32 = tmp46;		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(69)
												Float tmp47 = be->__get((int)10);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(69)
												Float b33 = tmp47;		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(69)
												Float tmp48 = be->__get((int)14);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(69)
												Float b34 = tmp48;		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(69)
												Float tmp49 = be->__get((int)3);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(69)
												Float b41 = tmp49;		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(69)
												Float tmp50 = be->__get((int)7);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(69)
												Float b42 = tmp50;		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(69)
												Float tmp51 = be->__get((int)11);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(69)
												Float b43 = tmp51;		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(69)
												Float tmp52 = be->__get((int)15);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(69)
												Float b44 = tmp52;		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(69)
												Float tmp53 = (a11 * b11);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(69)
												Float tmp54 = (a12 * b21);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(69)
												Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(69)
												Float tmp56 = (a13 * b31);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(69)
												Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(69)
												Float tmp58 = (a14 * b41);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(69)
												Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(69)
												te[(int)0] = tmp59;
												HX_STACK_LINE(69)
												Float tmp60 = (a11 * b12);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(69)
												Float tmp61 = (a12 * b22);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(69)
												Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(69)
												Float tmp63 = (a13 * b32);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(69)
												Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(69)
												Float tmp65 = (a14 * b42);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(69)
												Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(69)
												te[(int)4] = tmp66;
												HX_STACK_LINE(69)
												Float tmp67 = (a11 * b13);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(69)
												Float tmp68 = (a12 * b23);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(69)
												Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(69)
												Float tmp70 = (a13 * b33);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(69)
												Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(69)
												Float tmp72 = (a14 * b43);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(69)
												Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(69)
												te[(int)8] = tmp73;
												HX_STACK_LINE(69)
												Float tmp74 = (a11 * b14);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(69)
												Float tmp75 = (a12 * b24);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(69)
												Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(69)
												Float tmp77 = (a13 * b34);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(69)
												Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(69)
												Float tmp79 = (a14 * b44);		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(69)
												Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(69)
												te[(int)12] = tmp80;
												HX_STACK_LINE(69)
												Float tmp81 = (a21 * b11);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(69)
												Float tmp82 = (a22 * b21);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(69)
												Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(69)
												Float tmp84 = (a23 * b31);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(69)
												Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(69)
												Float tmp86 = (a24 * b41);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(69)
												Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(69)
												te[(int)1] = tmp87;
												HX_STACK_LINE(69)
												Float tmp88 = (a21 * b12);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(69)
												Float tmp89 = (a22 * b22);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(69)
												Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(69)
												Float tmp91 = (a23 * b32);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(69)
												Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(69)
												Float tmp93 = (a24 * b42);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(69)
												Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(69)
												te[(int)5] = tmp94;
												HX_STACK_LINE(69)
												Float tmp95 = (a21 * b13);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(69)
												Float tmp96 = (a22 * b23);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(69)
												Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(69)
												Float tmp98 = (a23 * b33);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(69)
												Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(69)
												Float tmp100 = (a24 * b43);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(69)
												Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(69)
												te[(int)9] = tmp101;
												HX_STACK_LINE(69)
												Float tmp102 = (a21 * b14);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(69)
												Float tmp103 = (a22 * b24);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(69)
												Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(69)
												Float tmp105 = (a23 * b34);		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(69)
												Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(69)
												Float tmp107 = (a24 * b44);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(69)
												Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(69)
												te[(int)13] = tmp108;
												HX_STACK_LINE(69)
												Float tmp109 = (a31 * b11);		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(69)
												Float tmp110 = (a32 * b21);		HX_STACK_VAR(tmp110,"tmp110");
												HX_STACK_LINE(69)
												Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
												HX_STACK_LINE(69)
												Float tmp112 = (a33 * b31);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(69)
												Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
												HX_STACK_LINE(69)
												Float tmp114 = (a34 * b41);		HX_STACK_VAR(tmp114,"tmp114");
												HX_STACK_LINE(69)
												Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
												HX_STACK_LINE(69)
												te[(int)2] = tmp115;
												HX_STACK_LINE(69)
												Float tmp116 = (a31 * b12);		HX_STACK_VAR(tmp116,"tmp116");
												HX_STACK_LINE(69)
												Float tmp117 = (a32 * b22);		HX_STACK_VAR(tmp117,"tmp117");
												HX_STACK_LINE(69)
												Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
												HX_STACK_LINE(69)
												Float tmp119 = (a33 * b32);		HX_STACK_VAR(tmp119,"tmp119");
												HX_STACK_LINE(69)
												Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
												HX_STACK_LINE(69)
												Float tmp121 = (a34 * b42);		HX_STACK_VAR(tmp121,"tmp121");
												HX_STACK_LINE(69)
												Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
												HX_STACK_LINE(69)
												te[(int)6] = tmp122;
												HX_STACK_LINE(69)
												Float tmp123 = (a31 * b13);		HX_STACK_VAR(tmp123,"tmp123");
												HX_STACK_LINE(69)
												Float tmp124 = (a32 * b23);		HX_STACK_VAR(tmp124,"tmp124");
												HX_STACK_LINE(69)
												Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
												HX_STACK_LINE(69)
												Float tmp126 = (a33 * b33);		HX_STACK_VAR(tmp126,"tmp126");
												HX_STACK_LINE(69)
												Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
												HX_STACK_LINE(69)
												Float tmp128 = (a34 * b43);		HX_STACK_VAR(tmp128,"tmp128");
												HX_STACK_LINE(69)
												Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
												HX_STACK_LINE(69)
												te[(int)10] = tmp129;
												HX_STACK_LINE(69)
												Float tmp130 = (a31 * b14);		HX_STACK_VAR(tmp130,"tmp130");
												HX_STACK_LINE(69)
												Float tmp131 = (a32 * b24);		HX_STACK_VAR(tmp131,"tmp131");
												HX_STACK_LINE(69)
												Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
												HX_STACK_LINE(69)
												Float tmp133 = (a33 * b34);		HX_STACK_VAR(tmp133,"tmp133");
												HX_STACK_LINE(69)
												Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
												HX_STACK_LINE(69)
												Float tmp135 = (a34 * b44);		HX_STACK_VAR(tmp135,"tmp135");
												HX_STACK_LINE(69)
												Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
												HX_STACK_LINE(69)
												te[(int)14] = tmp136;
												HX_STACK_LINE(69)
												Float tmp137 = (a41 * b11);		HX_STACK_VAR(tmp137,"tmp137");
												HX_STACK_LINE(69)
												Float tmp138 = (a42 * b21);		HX_STACK_VAR(tmp138,"tmp138");
												HX_STACK_LINE(69)
												Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
												HX_STACK_LINE(69)
												Float tmp140 = (a43 * b31);		HX_STACK_VAR(tmp140,"tmp140");
												HX_STACK_LINE(69)
												Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
												HX_STACK_LINE(69)
												Float tmp142 = (a44 * b41);		HX_STACK_VAR(tmp142,"tmp142");
												HX_STACK_LINE(69)
												Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
												HX_STACK_LINE(69)
												te[(int)3] = tmp143;
												HX_STACK_LINE(69)
												Float tmp144 = (a41 * b12);		HX_STACK_VAR(tmp144,"tmp144");
												HX_STACK_LINE(69)
												Float tmp145 = (a42 * b22);		HX_STACK_VAR(tmp145,"tmp145");
												HX_STACK_LINE(69)
												Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
												HX_STACK_LINE(69)
												Float tmp147 = (a43 * b32);		HX_STACK_VAR(tmp147,"tmp147");
												HX_STACK_LINE(69)
												Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
												HX_STACK_LINE(69)
												Float tmp149 = (a44 * b42);		HX_STACK_VAR(tmp149,"tmp149");
												HX_STACK_LINE(69)
												Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
												HX_STACK_LINE(69)
												te[(int)7] = tmp150;
												HX_STACK_LINE(69)
												Float tmp151 = (a41 * b13);		HX_STACK_VAR(tmp151,"tmp151");
												HX_STACK_LINE(69)
												Float tmp152 = (a42 * b23);		HX_STACK_VAR(tmp152,"tmp152");
												HX_STACK_LINE(69)
												Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
												HX_STACK_LINE(69)
												Float tmp154 = (a43 * b33);		HX_STACK_VAR(tmp154,"tmp154");
												HX_STACK_LINE(69)
												Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
												HX_STACK_LINE(69)
												Float tmp156 = (a44 * b43);		HX_STACK_VAR(tmp156,"tmp156");
												HX_STACK_LINE(69)
												Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
												HX_STACK_LINE(69)
												te[(int)11] = tmp157;
												HX_STACK_LINE(69)
												Float tmp158 = (a41 * b14);		HX_STACK_VAR(tmp158,"tmp158");
												HX_STACK_LINE(69)
												Float tmp159 = (a42 * b24);		HX_STACK_VAR(tmp159,"tmp159");
												HX_STACK_LINE(69)
												Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
												HX_STACK_LINE(69)
												Float tmp161 = (a43 * b34);		HX_STACK_VAR(tmp161,"tmp161");
												HX_STACK_LINE(69)
												Float tmp162 = (tmp160 + tmp161);		HX_STACK_VAR(tmp162,"tmp162");
												HX_STACK_LINE(69)
												Float tmp163 = (a44 * b44);		HX_STACK_VAR(tmp163,"tmp163");
												HX_STACK_LINE(69)
												Float tmp164 = (tmp162 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
												HX_STACK_LINE(69)
												te[(int)15] = tmp164;
												HX_STACK_LINE(69)
												tmp17 = _this4;
											}
											HX_STACK_LINE(69)
											::phoenix::Matrix _m = tmp17;		HX_STACK_VAR(_m,"_m");
											HX_STACK_LINE(69)
											_this3->matrix = _m;
											HX_STACK_LINE(69)
											bool tmp18 = (_m != null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(69)
											if ((tmp18)){
												HX_STACK_LINE(69)
												::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(69)
												{
													HX_STACK_LINE(69)
													cpp::ArrayBase array = _this3->matrix->elements;		HX_STACK_VAR(array,"array");
													HX_STACK_LINE(69)
													::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(69)
													bool tmp20 = (array != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(69)
													if ((tmp20)){
														HX_STACK_LINE(69)
														::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(69)
														{
															HX_STACK_LINE(69)
															::snow::api::buffers::ArrayBufferView tmp22 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(69)
															::snow::api::buffers::ArrayBufferView _this4 = tmp22;		HX_STACK_VAR(_this4,"_this4");
															HX_STACK_LINE(69)
															_this4->byteOffset = (int)0;
															HX_STACK_LINE(69)
															_this4->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
															HX_STACK_LINE(69)
															int tmp23 = (_this4->length * _this4->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(69)
															_this4->byteLength = tmp23;
															HX_STACK_LINE(69)
															::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(69)
															{
																HX_STACK_LINE(69)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(69)
																int tmp25 = _this4->byteLength;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(69)
																::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(69)
																this2 = tmp26;
																HX_STACK_LINE(69)
																tmp24 = this2;
															}
															HX_STACK_LINE(69)
															_this4->buffer = tmp24;
															HX_STACK_LINE(69)
															_this4->copyFromArray(((Array< Float >)(array)),null());
															HX_STACK_LINE(69)
															tmp21 = _this4;
														}
														HX_STACK_LINE(69)
														this1 = tmp21;
													}
													else{
														HX_STACK_LINE(69)
														HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
													}
													HX_STACK_LINE(69)
													tmp19 = this1;
												}
												HX_STACK_LINE(69)
												_this3->floats = tmp19;
											}
											HX_STACK_LINE(69)
											_this3->matrix;
										}
										else{
											HX_STACK_LINE(69)
											::phoenix::Spatial tmp16 = _this2->get_world();		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(69)
											::phoenix::Spatial _this3 = tmp16;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(69)
											::phoenix::Matrix tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												::phoenix::Matrix tmp18 = _this2->local->matrix;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(69)
												Array< Float > te = tmp18->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(69)
												Float tmp19 = te->__get((int)0);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(69)
												Float tmp20 = te->__get((int)4);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(69)
												Float tmp21 = te->__get((int)8);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(69)
												Float tmp22 = te->__get((int)12);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(69)
												Float tmp23 = te->__get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(69)
												Float tmp24 = te->__get((int)5);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(69)
												Float tmp25 = te->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(69)
												Float tmp26 = te->__get((int)13);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(69)
												Float tmp27 = te->__get((int)2);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(69)
												Float tmp28 = te->__get((int)6);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(69)
												Float tmp29 = te->__get((int)10);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(69)
												Float tmp30 = te->__get((int)14);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(69)
												Float tmp31 = te->__get((int)3);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(69)
												Float tmp32 = te->__get((int)7);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(69)
												Float tmp33 = te->__get((int)11);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(69)
												Float tmp34 = te->__get((int)15);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(69)
												tmp17 = ::phoenix::Matrix_obj::__new(tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31,tmp32,tmp33,tmp34);
											}
											HX_STACK_LINE(69)
											::phoenix::Matrix _m = tmp17;		HX_STACK_VAR(_m,"_m");
											HX_STACK_LINE(69)
											_this3->matrix = _m;
											HX_STACK_LINE(69)
											bool tmp18 = (_m != null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(69)
											if ((tmp18)){
												HX_STACK_LINE(69)
												::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(69)
												{
													HX_STACK_LINE(69)
													cpp::ArrayBase array = _this3->matrix->elements;		HX_STACK_VAR(array,"array");
													HX_STACK_LINE(69)
													::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(69)
													bool tmp20 = (array != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(69)
													if ((tmp20)){
														HX_STACK_LINE(69)
														::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(69)
														{
															HX_STACK_LINE(69)
															::snow::api::buffers::ArrayBufferView tmp22 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(69)
															::snow::api::buffers::ArrayBufferView _this4 = tmp22;		HX_STACK_VAR(_this4,"_this4");
															HX_STACK_LINE(69)
															_this4->byteOffset = (int)0;
															HX_STACK_LINE(69)
															_this4->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
															HX_STACK_LINE(69)
															int tmp23 = (_this4->length * _this4->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(69)
															_this4->byteLength = tmp23;
															HX_STACK_LINE(69)
															::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(69)
															{
																HX_STACK_LINE(69)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(69)
																int tmp25 = _this4->byteLength;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(69)
																::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(69)
																this2 = tmp26;
																HX_STACK_LINE(69)
																tmp24 = this2;
															}
															HX_STACK_LINE(69)
															_this4->buffer = tmp24;
															HX_STACK_LINE(69)
															_this4->copyFromArray(((Array< Float >)(array)),null());
															HX_STACK_LINE(69)
															tmp21 = _this4;
														}
														HX_STACK_LINE(69)
														this1 = tmp21;
													}
													else{
														HX_STACK_LINE(69)
														HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
													}
													HX_STACK_LINE(69)
													tmp19 = this1;
												}
												HX_STACK_LINE(69)
												_this3->floats = tmp19;
											}
											HX_STACK_LINE(69)
											_this3->matrix;
										}
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											::phoenix::Spatial tmp16 = _this2->get_world();		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(69)
											::phoenix::Spatial _this3 = tmp16;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(69)
											bool tmp17 = _this3->auto_decompose;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(69)
											if ((tmp17)){
												HX_STACK_LINE(69)
												::phoenix::MatrixTransform tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(69)
												{
													HX_STACK_LINE(69)
													::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
													HX_STACK_LINE(69)
													::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
													HX_STACK_LINE(69)
													::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
													HX_STACK_LINE(69)
													::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
													HX_STACK_LINE(69)
													Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(69)
													::phoenix::Matrix tmp19 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(69)
													::phoenix::Matrix matrix = tmp19;		HX_STACK_VAR(matrix,"matrix");
													HX_STACK_LINE(69)
													Float tmp20 = te->__get((int)0);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(69)
													Float _ax_x = tmp20;		HX_STACK_VAR(_ax_x,"_ax_x");
													HX_STACK_LINE(69)
													Float tmp21 = te->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(69)
													Float _ax_y = tmp21;		HX_STACK_VAR(_ax_y,"_ax_y");
													HX_STACK_LINE(69)
													Float tmp22 = te->__get((int)2);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(69)
													Float _ax_z = tmp22;		HX_STACK_VAR(_ax_z,"_ax_z");
													HX_STACK_LINE(69)
													Float tmp23 = te->__get((int)4);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(69)
													Float _ay_x = tmp23;		HX_STACK_VAR(_ay_x,"_ay_x");
													HX_STACK_LINE(69)
													Float tmp24 = te->__get((int)5);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(69)
													Float _ay_y = tmp24;		HX_STACK_VAR(_ay_y,"_ay_y");
													HX_STACK_LINE(69)
													Float tmp25 = te->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(69)
													Float _ay_z = tmp25;		HX_STACK_VAR(_ay_z,"_ay_z");
													HX_STACK_LINE(69)
													Float tmp26 = te->__get((int)8);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(69)
													Float _az_x = tmp26;		HX_STACK_VAR(_az_x,"_az_x");
													HX_STACK_LINE(69)
													Float tmp27 = te->__get((int)9);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(69)
													Float _az_y = tmp27;		HX_STACK_VAR(_az_y,"_az_y");
													HX_STACK_LINE(69)
													Float tmp28 = te->__get((int)10);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(69)
													Float _az_z = tmp28;		HX_STACK_VAR(_az_z,"_az_z");
													HX_STACK_LINE(69)
													Float tmp29 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(69)
													Float tmp30 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(69)
													Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(69)
													Float tmp32 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(69)
													Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(69)
													Float tmp34 = ::Math_obj::sqrt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(69)
													Float _ax_length = tmp34;		HX_STACK_VAR(_ax_length,"_ax_length");
													HX_STACK_LINE(69)
													Float tmp35 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(69)
													Float tmp36 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(69)
													Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(69)
													Float tmp38 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(69)
													Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(69)
													Float tmp40 = ::Math_obj::sqrt(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(69)
													Float _ay_length = tmp40;		HX_STACK_VAR(_ay_length,"_ay_length");
													HX_STACK_LINE(69)
													Float tmp41 = (_az_x * _az_x);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(69)
													Float tmp42 = (_az_y * _az_y);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(69)
													Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(69)
													Float tmp44 = (_az_z * _az_z);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(69)
													Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(69)
													Float tmp46 = ::Math_obj::sqrt(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(69)
													Float _az_length = tmp46;		HX_STACK_VAR(_az_length,"_az_length");
													HX_STACK_LINE(69)
													bool tmp47 = (_quaternion == null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(69)
													if ((tmp47)){
														HX_STACK_LINE(69)
														::phoenix::Quaternion tmp48 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(69)
														_quaternion = tmp48;
													}
													HX_STACK_LINE(69)
													bool tmp48 = (_position == null());		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(69)
													if ((tmp48)){
														HX_STACK_LINE(69)
														Float tmp49 = te->__get((int)12);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(69)
														Float tmp50 = te->__get((int)13);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(69)
														Float tmp51 = te->__get((int)14);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(69)
														::phoenix::Vector tmp52 = ::phoenix::Vector_obj::__new(tmp49,tmp50,tmp51,null());		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(69)
														_position = tmp52;
													}
													else{
														HX_STACK_LINE(69)
														{
															HX_STACK_LINE(69)
															Float tmp49 = te->__get((int)12);		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(69)
															Float _x = tmp49;		HX_STACK_VAR(_x,"_x");
															HX_STACK_LINE(69)
															_position->x = _x;
															HX_STACK_LINE(69)
															bool tmp50 = _position->_construct;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(69)
															if ((tmp50)){
																HX_STACK_LINE(69)
																_position->x;
															}
															else{
																HX_STACK_LINE(69)
																bool tmp51 = (_position->listen_x != null());		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(69)
																bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(69)
																if ((tmp51)){
																	HX_STACK_LINE(69)
																	bool tmp53 = _position->ignore_listeners;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(69)
																	bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(69)
																	tmp52 = !(tmp54);
																}
																else{
																	HX_STACK_LINE(69)
																	tmp52 = false;
																}
																HX_STACK_LINE(69)
																if ((tmp52)){
																	HX_STACK_LINE(69)
																	Float tmp53 = _x;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(69)
																	_position->listen_x(tmp53);
																}
																HX_STACK_LINE(69)
																_position->x;
															}
														}
														HX_STACK_LINE(69)
														{
															HX_STACK_LINE(69)
															Float tmp49 = te->__get((int)13);		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(69)
															Float _y = tmp49;		HX_STACK_VAR(_y,"_y");
															HX_STACK_LINE(69)
															_position->y = _y;
															HX_STACK_LINE(69)
															bool tmp50 = _position->_construct;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(69)
															if ((tmp50)){
																HX_STACK_LINE(69)
																_position->y;
															}
															else{
																HX_STACK_LINE(69)
																bool tmp51 = (_position->listen_y != null());		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(69)
																bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(69)
																if ((tmp51)){
																	HX_STACK_LINE(69)
																	bool tmp53 = _position->ignore_listeners;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(69)
																	bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(69)
																	tmp52 = !(tmp54);
																}
																else{
																	HX_STACK_LINE(69)
																	tmp52 = false;
																}
																HX_STACK_LINE(69)
																if ((tmp52)){
																	HX_STACK_LINE(69)
																	Float tmp53 = _y;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(69)
																	_position->listen_y(tmp53);
																}
																HX_STACK_LINE(69)
																_position->y;
															}
														}
														HX_STACK_LINE(69)
														{
															HX_STACK_LINE(69)
															Float tmp49 = te->__get((int)14);		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(69)
															Float _z = tmp49;		HX_STACK_VAR(_z,"_z");
															HX_STACK_LINE(69)
															_position->z = _z;
															HX_STACK_LINE(69)
															bool tmp50 = _position->_construct;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(69)
															if ((tmp50)){
																HX_STACK_LINE(69)
																_position->z;
															}
															else{
																HX_STACK_LINE(69)
																bool tmp51 = (_position->listen_z != null());		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(69)
																bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(69)
																if ((tmp51)){
																	HX_STACK_LINE(69)
																	bool tmp53 = _position->ignore_listeners;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(69)
																	bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(69)
																	tmp52 = !(tmp54);
																}
																else{
																	HX_STACK_LINE(69)
																	tmp52 = false;
																}
																HX_STACK_LINE(69)
																if ((tmp52)){
																	HX_STACK_LINE(69)
																	Float tmp53 = _z;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(69)
																	_position->listen_z(tmp53);
																}
																HX_STACK_LINE(69)
																_position->z;
															}
														}
													}
													HX_STACK_LINE(69)
													bool tmp49 = (_scale == null());		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(69)
													if ((tmp49)){
														HX_STACK_LINE(69)
														::phoenix::Vector tmp50 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(69)
														_scale = tmp50;
													}
													else{
														HX_STACK_LINE(69)
														{
															HX_STACK_LINE(69)
															_scale->x = _ax_length;
															HX_STACK_LINE(69)
															bool tmp50 = _scale->_construct;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(69)
															if ((tmp50)){
																HX_STACK_LINE(69)
																_scale->x;
															}
															else{
																HX_STACK_LINE(69)
																bool tmp51 = (_scale->listen_x != null());		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(69)
																bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(69)
																if ((tmp51)){
																	HX_STACK_LINE(69)
																	bool tmp53 = _scale->ignore_listeners;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(69)
																	bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(69)
																	tmp52 = !(tmp54);
																}
																else{
																	HX_STACK_LINE(69)
																	tmp52 = false;
																}
																HX_STACK_LINE(69)
																if ((tmp52)){
																	HX_STACK_LINE(69)
																	Float tmp53 = _ax_length;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(69)
																	_scale->listen_x(tmp53);
																}
																HX_STACK_LINE(69)
																_scale->x;
															}
														}
														HX_STACK_LINE(69)
														{
															HX_STACK_LINE(69)
															_scale->y = _ay_length;
															HX_STACK_LINE(69)
															bool tmp50 = _scale->_construct;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(69)
															if ((tmp50)){
																HX_STACK_LINE(69)
																_scale->y;
															}
															else{
																HX_STACK_LINE(69)
																bool tmp51 = (_scale->listen_y != null());		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(69)
																bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(69)
																if ((tmp51)){
																	HX_STACK_LINE(69)
																	bool tmp53 = _scale->ignore_listeners;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(69)
																	bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(69)
																	tmp52 = !(tmp54);
																}
																else{
																	HX_STACK_LINE(69)
																	tmp52 = false;
																}
																HX_STACK_LINE(69)
																if ((tmp52)){
																	HX_STACK_LINE(69)
																	Float tmp53 = _ay_length;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(69)
																	_scale->listen_y(tmp53);
																}
																HX_STACK_LINE(69)
																_scale->y;
															}
														}
														HX_STACK_LINE(69)
														{
															HX_STACK_LINE(69)
															_scale->z = _az_length;
															HX_STACK_LINE(69)
															bool tmp50 = _scale->_construct;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(69)
															if ((tmp50)){
																HX_STACK_LINE(69)
																_scale->z;
															}
															else{
																HX_STACK_LINE(69)
																bool tmp51 = (_scale->listen_z != null());		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(69)
																bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(69)
																if ((tmp51)){
																	HX_STACK_LINE(69)
																	bool tmp53 = _scale->ignore_listeners;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(69)
																	bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(69)
																	tmp52 = !(tmp54);
																}
																else{
																	HX_STACK_LINE(69)
																	tmp52 = false;
																}
																HX_STACK_LINE(69)
																if ((tmp52)){
																	HX_STACK_LINE(69)
																	Float tmp53 = _az_length;		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(69)
																	_scale->listen_z(tmp53);
																}
																HX_STACK_LINE(69)
																_scale->z;
															}
														}
													}
													HX_STACK_LINE(69)
													matrix->elements = _this4->elements->concat(Array_obj< Float >::__new());
													HX_STACK_LINE(69)
													Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
													HX_STACK_LINE(69)
													Float tmp50 = _ax_length;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(69)
													hx::DivEq(me[(int)0],tmp50);
													HX_STACK_LINE(69)
													Float tmp51 = _ax_length;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(69)
													hx::DivEq(me[(int)1],tmp51);
													HX_STACK_LINE(69)
													Float tmp52 = _ax_length;		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(69)
													hx::DivEq(me[(int)2],tmp52);
													HX_STACK_LINE(69)
													Float tmp53 = _ay_length;		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(69)
													hx::DivEq(me[(int)4],tmp53);
													HX_STACK_LINE(69)
													Float tmp54 = _ay_length;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(69)
													hx::DivEq(me[(int)5],tmp54);
													HX_STACK_LINE(69)
													Float tmp55 = _ay_length;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(69)
													hx::DivEq(me[(int)6],tmp55);
													HX_STACK_LINE(69)
													Float tmp56 = _az_length;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(69)
													hx::DivEq(me[(int)8],tmp56);
													HX_STACK_LINE(69)
													Float tmp57 = _az_length;		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(69)
													hx::DivEq(me[(int)9],tmp57);
													HX_STACK_LINE(69)
													Float tmp58 = _az_length;		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(69)
													hx::DivEq(me[(int)10],tmp58);
													HX_STACK_LINE(69)
													::phoenix::Matrix tmp59 = matrix;		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(69)
													_quaternion->setFromRotationMatrix(tmp59);
													HX_STACK_LINE(69)
													bool tmp60 = (_this4->_transform == null());		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(69)
													if ((tmp60)){
														HX_STACK_LINE(69)
														::phoenix::MatrixTransform tmp61 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(69)
														_this4->_transform = tmp61;
													}
													else{
														HX_STACK_LINE(69)
														_this4->_transform->pos = _position;
														HX_STACK_LINE(69)
														_this4->_transform->rotation = _quaternion;
														HX_STACK_LINE(69)
														_this4->_transform->scale = _scale;
													}
													HX_STACK_LINE(69)
													tmp18 = _this4->_transform;
												}
												HX_STACK_LINE(69)
												::phoenix::MatrixTransform _transform = tmp18;		HX_STACK_VAR(_transform,"_transform");
												HX_STACK_LINE(69)
												{
													HX_STACK_LINE(69)
													::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
													HX_STACK_LINE(69)
													_this3->pos = _p;
													HX_STACK_LINE(69)
													bool tmp19 = (_p != null());		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(69)
													if ((tmp19)){
														HX_STACK_LINE(69)
														::phoenix::Vector tmp20 = _this3->pos;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(69)
														Dynamic tmp21 = _this3->_pos_change_dyn();		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(69)
														::phoenix::Vector_obj::Listen(tmp20,tmp21);
														HX_STACK_LINE(69)
														bool tmp22 = (_this3->pos_changed != null());		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(69)
														bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(69)
														if ((tmp22)){
															HX_STACK_LINE(69)
															bool tmp24 = _this3->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(69)
															bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(69)
															tmp23 = !(tmp25);
														}
														else{
															HX_STACK_LINE(69)
															tmp23 = false;
														}
														HX_STACK_LINE(69)
														if ((tmp23)){
															HX_STACK_LINE(69)
															::phoenix::Vector tmp24 = _this3->pos;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(69)
															_this3->pos_changed(tmp24);
														}
													}
													HX_STACK_LINE(69)
													_this3->pos;
												}
												HX_STACK_LINE(69)
												{
													HX_STACK_LINE(69)
													::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
													HX_STACK_LINE(69)
													_this3->rotation = _r;
													HX_STACK_LINE(69)
													bool tmp19 = (_r != null());		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(69)
													if ((tmp19)){
														HX_STACK_LINE(69)
														{
															HX_STACK_LINE(69)
															::phoenix::Quaternion _q = _this3->rotation;		HX_STACK_VAR(_q,"_q");
															HX_STACK_LINE(69)
															Dynamic listener = _this3->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
															HX_STACK_LINE(69)
															_q->listen_x = listener;
															HX_STACK_LINE(69)
															_q->listen_y = listener;
															HX_STACK_LINE(69)
															_q->listen_z = listener;
															HX_STACK_LINE(69)
															_q->listen_w = listener;
														}
														HX_STACK_LINE(69)
														bool tmp20 = (_this3->rotation_changed != null());		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(69)
														bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(69)
														if ((tmp20)){
															HX_STACK_LINE(69)
															bool tmp22 = _this3->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(69)
															bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(69)
															tmp21 = !(tmp23);
														}
														else{
															HX_STACK_LINE(69)
															tmp21 = false;
														}
														HX_STACK_LINE(69)
														if ((tmp21)){
															HX_STACK_LINE(69)
															::phoenix::Quaternion tmp22 = _this3->rotation;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(69)
															_this3->rotation_changed(tmp22);
														}
													}
													HX_STACK_LINE(69)
													_this3->rotation;
												}
												HX_STACK_LINE(69)
												{
													HX_STACK_LINE(69)
													::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
													HX_STACK_LINE(69)
													_this3->scale = _s;
													HX_STACK_LINE(69)
													bool tmp19 = (_s != null());		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(69)
													if ((tmp19)){
														HX_STACK_LINE(69)
														::phoenix::Vector tmp20 = _this3->scale;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(69)
														Dynamic tmp21 = _this3->_scale_change_dyn();		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(69)
														::phoenix::Vector_obj::Listen(tmp20,tmp21);
														HX_STACK_LINE(69)
														bool tmp22 = (_this3->scale_changed != null());		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(69)
														bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(69)
														if ((tmp22)){
															HX_STACK_LINE(69)
															bool tmp24 = _this3->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(69)
															bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(69)
															tmp23 = !(tmp25);
														}
														else{
															HX_STACK_LINE(69)
															tmp23 = false;
														}
														HX_STACK_LINE(69)
														if ((tmp23)){
															HX_STACK_LINE(69)
															::phoenix::Vector tmp24 = _this3->scale;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(69)
															_this3->scale_changed(tmp24);
														}
													}
													HX_STACK_LINE(69)
													_this3->scale;
												}
											}
											HX_STACK_LINE(69)
											_this3;
										}
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											_this2->dirty = false;
											HX_STACK_LINE(69)
											bool tmp16 = _this2->dirty;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(69)
											bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(69)
											bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(69)
											if ((tmp17)){
												HX_STACK_LINE(69)
												bool tmp19 = _this2->_setup;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(69)
												bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(69)
												bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(69)
												tmp18 = !(tmp21);
											}
											else{
												HX_STACK_LINE(69)
												tmp18 = false;
											}
											HX_STACK_LINE(69)
											bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											if ((tmp19)){
												HX_STACK_LINE(69)
												tmp20 = (_this2->_dirty_handlers != null());
											}
											else{
												HX_STACK_LINE(69)
												tmp20 = false;
											}
											HX_STACK_LINE(69)
											bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(69)
											if ((tmp20)){
												HX_STACK_LINE(69)
												int tmp22 = _this2->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(69)
												int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(69)
												tmp21 = (tmp23 > (int)0);
											}
											else{
												HX_STACK_LINE(69)
												tmp21 = false;
											}
											HX_STACK_LINE(69)
											if ((tmp21)){
												HX_STACK_LINE(69)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(69)
												cpp::ArrayBase _g11 = _this2->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(69)
												while((true)){
													HX_STACK_LINE(69)
													bool tmp22 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(69)
													bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(69)
													if ((tmp23)){
														HX_STACK_LINE(69)
														break;
													}
													HX_STACK_LINE(69)
													Dynamic tmp24 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(69)
													Dynamic _handler = tmp24;		HX_STACK_VAR(_handler,"_handler");
													HX_STACK_LINE(69)
													++(_g1);
													HX_STACK_LINE(69)
													bool tmp25 = (_handler != null());		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(69)
													if ((tmp25)){
														HX_STACK_LINE(69)
														::phoenix::Transform tmp26 = _this2;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(69)
														_handler(tmp26).Cast< Void >();
													}
												}
											}
											HX_STACK_LINE(69)
											_this2->dirty;
										}
										HX_STACK_LINE(69)
										_this2->_cleaning = false;
										HX_STACK_LINE(69)
										bool tmp16 = (_this2->_clean_handlers != null());		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(69)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(69)
										if ((tmp16)){
											HX_STACK_LINE(69)
											int tmp18 = _this2->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(69)
											int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											tmp17 = (tmp19 > (int)0);
										}
										else{
											HX_STACK_LINE(69)
											tmp17 = false;
										}
										HX_STACK_LINE(69)
										if ((tmp17)){
											HX_STACK_LINE(69)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(69)
											cpp::ArrayBase _g11 = _this2->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(69)
											while((true)){
												HX_STACK_LINE(69)
												bool tmp18 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(69)
												bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(69)
												if ((tmp19)){
													HX_STACK_LINE(69)
													break;
												}
												HX_STACK_LINE(69)
												Dynamic tmp20 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(69)
												Dynamic _handler = tmp20;		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(69)
												++(_g1);
												HX_STACK_LINE(69)
												bool tmp21 = (_handler != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(69)
												if ((tmp21)){
													HX_STACK_LINE(69)
													::phoenix::Transform tmp22 = _this2;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(69)
													_handler(tmp22).Cast< Void >();
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(69)
							bool tmp12 = _this1->dirty;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(69)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(69)
							if ((tmp12)){
								HX_STACK_LINE(69)
								bool tmp14 = _this1->_cleaning;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(69)
								bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(69)
								tmp13 = !(tmp15);
							}
							else{
								HX_STACK_LINE(69)
								tmp13 = false;
							}
							HX_STACK_LINE(69)
							if ((tmp13)){
								HX_STACK_LINE(69)
								bool tmp14 = _this1->dirty;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(69)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(69)
								if ((tmp15)){
									HX_STACK_LINE(69)
									Dynamic();
								}
								else{
									HX_STACK_LINE(69)
									_this1->_cleaning = true;
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										::phoenix::Matrix _this2 = _this1->_pos_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(69)
											e[(int)0] = (int)1;
											HX_STACK_LINE(69)
											e[(int)4] = (int)0;
											HX_STACK_LINE(69)
											e[(int)8] = (int)0;
											HX_STACK_LINE(69)
											::phoenix::Vector tmp16 = _this1->local->pos;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(69)
											Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(69)
											e[(int)12] = tmp17;
											HX_STACK_LINE(69)
											e[(int)1] = (int)0;
											HX_STACK_LINE(69)
											e[(int)5] = (int)1;
											HX_STACK_LINE(69)
											e[(int)9] = (int)0;
											HX_STACK_LINE(69)
											::phoenix::Vector tmp18 = _this1->local->pos;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(69)
											Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											e[(int)13] = tmp19;
											HX_STACK_LINE(69)
											e[(int)2] = (int)0;
											HX_STACK_LINE(69)
											e[(int)6] = (int)0;
											HX_STACK_LINE(69)
											e[(int)10] = (int)1;
											HX_STACK_LINE(69)
											::phoenix::Vector tmp20 = _this1->local->pos;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											Float tmp21 = tmp20->z;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(69)
											e[(int)14] = tmp21;
											HX_STACK_LINE(69)
											e[(int)3] = (int)0;
											HX_STACK_LINE(69)
											e[(int)7] = (int)0;
											HX_STACK_LINE(69)
											e[(int)11] = (int)0;
											HX_STACK_LINE(69)
											e[(int)15] = (int)1;
											HX_STACK_LINE(69)
											_this2;
										}
										HX_STACK_LINE(69)
										_this2;
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										::phoenix::Matrix _this2 = _this1->_rotation_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(69)
										::phoenix::Quaternion tmp16 = _this1->local->rotation;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(69)
										::phoenix::Quaternion q = tmp16;		HX_STACK_VAR(q,"q");
										HX_STACK_LINE(69)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(69)
										Float tmp17 = (q->x + q->x);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(69)
										Float x2 = tmp17;		HX_STACK_VAR(x2,"x2");
										HX_STACK_LINE(69)
										Float tmp18 = (q->y + q->y);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(69)
										Float y2 = tmp18;		HX_STACK_VAR(y2,"y2");
										HX_STACK_LINE(69)
										Float tmp19 = (q->z + q->z);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(69)
										Float z2 = tmp19;		HX_STACK_VAR(z2,"z2");
										HX_STACK_LINE(69)
										Float tmp20 = (q->x * x2);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(69)
										Float xx = tmp20;		HX_STACK_VAR(xx,"xx");
										HX_STACK_LINE(69)
										Float tmp21 = (q->x * y2);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(69)
										Float xy = tmp21;		HX_STACK_VAR(xy,"xy");
										HX_STACK_LINE(69)
										Float tmp22 = (q->x * z2);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(69)
										Float xz = tmp22;		HX_STACK_VAR(xz,"xz");
										HX_STACK_LINE(69)
										Float tmp23 = (q->y * y2);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(69)
										Float yy = tmp23;		HX_STACK_VAR(yy,"yy");
										HX_STACK_LINE(69)
										Float tmp24 = (q->y * z2);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(69)
										Float yz = tmp24;		HX_STACK_VAR(yz,"yz");
										HX_STACK_LINE(69)
										Float tmp25 = (q->z * z2);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(69)
										Float zz = tmp25;		HX_STACK_VAR(zz,"zz");
										HX_STACK_LINE(69)
										Float tmp26 = (q->w * x2);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(69)
										Float wx = tmp26;		HX_STACK_VAR(wx,"wx");
										HX_STACK_LINE(69)
										Float tmp27 = (q->w * y2);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(69)
										Float wy = tmp27;		HX_STACK_VAR(wy,"wy");
										HX_STACK_LINE(69)
										Float tmp28 = (q->w * z2);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(69)
										Float wz = tmp28;		HX_STACK_VAR(wz,"wz");
										HX_STACK_LINE(69)
										Float tmp29 = (yy + zz);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(69)
										Float tmp30 = ((int)1 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(69)
										te[(int)0] = tmp30;
										HX_STACK_LINE(69)
										Float tmp31 = (xy - wz);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(69)
										te[(int)4] = tmp31;
										HX_STACK_LINE(69)
										Float tmp32 = (xz + wy);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(69)
										te[(int)8] = tmp32;
										HX_STACK_LINE(69)
										Float tmp33 = (xy + wz);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(69)
										te[(int)1] = tmp33;
										HX_STACK_LINE(69)
										Float tmp34 = (xx + zz);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(69)
										Float tmp35 = ((int)1 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(69)
										te[(int)5] = tmp35;
										HX_STACK_LINE(69)
										Float tmp36 = (yz - wx);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(69)
										te[(int)9] = tmp36;
										HX_STACK_LINE(69)
										Float tmp37 = (xz - wy);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(69)
										te[(int)2] = tmp37;
										HX_STACK_LINE(69)
										Float tmp38 = (yz + wx);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(69)
										te[(int)6] = tmp38;
										HX_STACK_LINE(69)
										Float tmp39 = (xx + yy);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(69)
										Float tmp40 = ((int)1 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(69)
										te[(int)10] = tmp40;
										HX_STACK_LINE(69)
										te[(int)3] = (int)0;
										HX_STACK_LINE(69)
										te[(int)7] = (int)0;
										HX_STACK_LINE(69)
										te[(int)11] = (int)0;
										HX_STACK_LINE(69)
										te[(int)12] = (int)0;
										HX_STACK_LINE(69)
										te[(int)13] = (int)0;
										HX_STACK_LINE(69)
										te[(int)14] = (int)0;
										HX_STACK_LINE(69)
										te[(int)15] = (int)1;
										HX_STACK_LINE(69)
										_this2;
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										::phoenix::Matrix _this2 = _this1->_origin_undo_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(69)
											e[(int)0] = (int)1;
											HX_STACK_LINE(69)
											e[(int)4] = (int)0;
											HX_STACK_LINE(69)
											e[(int)8] = (int)0;
											HX_STACK_LINE(69)
											Float tmp16 = _this1->origin->x;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(69)
											Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(69)
											e[(int)12] = tmp17;
											HX_STACK_LINE(69)
											e[(int)1] = (int)0;
											HX_STACK_LINE(69)
											e[(int)5] = (int)1;
											HX_STACK_LINE(69)
											e[(int)9] = (int)0;
											HX_STACK_LINE(69)
											Float tmp18 = _this1->origin->y;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(69)
											Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											e[(int)13] = tmp19;
											HX_STACK_LINE(69)
											e[(int)2] = (int)0;
											HX_STACK_LINE(69)
											e[(int)6] = (int)0;
											HX_STACK_LINE(69)
											e[(int)10] = (int)1;
											HX_STACK_LINE(69)
											Float tmp20 = _this1->origin->z;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(69)
											e[(int)14] = tmp21;
											HX_STACK_LINE(69)
											e[(int)3] = (int)0;
											HX_STACK_LINE(69)
											e[(int)7] = (int)0;
											HX_STACK_LINE(69)
											e[(int)11] = (int)0;
											HX_STACK_LINE(69)
											e[(int)15] = (int)1;
											HX_STACK_LINE(69)
											_this2;
										}
										HX_STACK_LINE(69)
										_this2;
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										::phoenix::Matrix tmp16 = _this1->local->matrix;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(69)
										::phoenix::Matrix _this2 = tmp16;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(69)
											e[(int)0] = (int)1;
											HX_STACK_LINE(69)
											e[(int)4] = (int)0;
											HX_STACK_LINE(69)
											e[(int)8] = (int)0;
											HX_STACK_LINE(69)
											Float tmp17 = _this1->origin->x;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(69)
											e[(int)12] = tmp17;
											HX_STACK_LINE(69)
											e[(int)1] = (int)0;
											HX_STACK_LINE(69)
											e[(int)5] = (int)1;
											HX_STACK_LINE(69)
											e[(int)9] = (int)0;
											HX_STACK_LINE(69)
											Float tmp18 = _this1->origin->y;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(69)
											e[(int)13] = tmp18;
											HX_STACK_LINE(69)
											e[(int)2] = (int)0;
											HX_STACK_LINE(69)
											e[(int)6] = (int)0;
											HX_STACK_LINE(69)
											e[(int)10] = (int)1;
											HX_STACK_LINE(69)
											Float tmp19 = _this1->origin->z;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											e[(int)14] = tmp19;
											HX_STACK_LINE(69)
											e[(int)3] = (int)0;
											HX_STACK_LINE(69)
											e[(int)7] = (int)0;
											HX_STACK_LINE(69)
											e[(int)11] = (int)0;
											HX_STACK_LINE(69)
											e[(int)15] = (int)1;
											HX_STACK_LINE(69)
											_this2;
										}
										HX_STACK_LINE(69)
										_this2;
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										::phoenix::Matrix tmp16 = _this1->local->matrix;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(69)
										::phoenix::Matrix _this2 = tmp16;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(69)
											Array< Float > be = _this1->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(69)
											Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(69)
											Float tmp17 = ae->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(69)
											Float a11 = tmp17;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(69)
											Float tmp18 = ae->__get((int)4);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(69)
											Float a12 = tmp18;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(69)
											Float tmp19 = ae->__get((int)8);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											Float a13 = tmp19;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(69)
											Float tmp20 = ae->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											Float a14 = tmp20;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(69)
											Float tmp21 = ae->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(69)
											Float a21 = tmp21;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(69)
											Float tmp22 = ae->__get((int)5);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(69)
											Float a22 = tmp22;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(69)
											Float tmp23 = ae->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(69)
											Float a23 = tmp23;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(69)
											Float tmp24 = ae->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(69)
											Float a24 = tmp24;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(69)
											Float tmp25 = ae->__get((int)2);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(69)
											Float a31 = tmp25;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(69)
											Float tmp26 = ae->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(69)
											Float a32 = tmp26;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(69)
											Float tmp27 = ae->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(69)
											Float a33 = tmp27;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(69)
											Float tmp28 = ae->__get((int)14);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(69)
											Float a34 = tmp28;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(69)
											Float tmp29 = ae->__get((int)3);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(69)
											Float a41 = tmp29;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(69)
											Float tmp30 = ae->__get((int)7);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(69)
											Float a42 = tmp30;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(69)
											Float tmp31 = ae->__get((int)11);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(69)
											Float a43 = tmp31;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(69)
											Float tmp32 = ae->__get((int)15);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(69)
											Float a44 = tmp32;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(69)
											Float tmp33 = be->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(69)
											Float b11 = tmp33;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(69)
											Float tmp34 = be->__get((int)4);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(69)
											Float b12 = tmp34;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(69)
											Float tmp35 = be->__get((int)8);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(69)
											Float b13 = tmp35;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(69)
											Float tmp36 = be->__get((int)12);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(69)
											Float b14 = tmp36;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(69)
											Float tmp37 = be->__get((int)1);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(69)
											Float b21 = tmp37;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(69)
											Float tmp38 = be->__get((int)5);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(69)
											Float b22 = tmp38;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(69)
											Float tmp39 = be->__get((int)9);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(69)
											Float b23 = tmp39;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(69)
											Float tmp40 = be->__get((int)13);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(69)
											Float b24 = tmp40;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(69)
											Float tmp41 = be->__get((int)2);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(69)
											Float b31 = tmp41;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(69)
											Float tmp42 = be->__get((int)6);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(69)
											Float b32 = tmp42;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(69)
											Float tmp43 = be->__get((int)10);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(69)
											Float b33 = tmp43;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(69)
											Float tmp44 = be->__get((int)14);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(69)
											Float b34 = tmp44;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(69)
											Float tmp45 = be->__get((int)3);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(69)
											Float b41 = tmp45;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(69)
											Float tmp46 = be->__get((int)7);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(69)
											Float b42 = tmp46;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(69)
											Float tmp47 = be->__get((int)11);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(69)
											Float b43 = tmp47;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(69)
											Float tmp48 = be->__get((int)15);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(69)
											Float b44 = tmp48;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(69)
											Float tmp49 = (a11 * b11);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(69)
											Float tmp50 = (a12 * b21);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(69)
											Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(69)
											Float tmp52 = (a13 * b31);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(69)
											Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(69)
											Float tmp54 = (a14 * b41);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(69)
											Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(69)
											te[(int)0] = tmp55;
											HX_STACK_LINE(69)
											Float tmp56 = (a11 * b12);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(69)
											Float tmp57 = (a12 * b22);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(69)
											Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(69)
											Float tmp59 = (a13 * b32);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(69)
											Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(69)
											Float tmp61 = (a14 * b42);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(69)
											Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(69)
											te[(int)4] = tmp62;
											HX_STACK_LINE(69)
											Float tmp63 = (a11 * b13);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(69)
											Float tmp64 = (a12 * b23);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(69)
											Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(69)
											Float tmp66 = (a13 * b33);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(69)
											Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(69)
											Float tmp68 = (a14 * b43);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(69)
											Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(69)
											te[(int)8] = tmp69;
											HX_STACK_LINE(69)
											Float tmp70 = (a11 * b14);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(69)
											Float tmp71 = (a12 * b24);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(69)
											Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(69)
											Float tmp73 = (a13 * b34);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(69)
											Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(69)
											Float tmp75 = (a14 * b44);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(69)
											Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(69)
											te[(int)12] = tmp76;
											HX_STACK_LINE(69)
											Float tmp77 = (a21 * b11);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(69)
											Float tmp78 = (a22 * b21);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(69)
											Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(69)
											Float tmp80 = (a23 * b31);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(69)
											Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(69)
											Float tmp82 = (a24 * b41);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(69)
											Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(69)
											te[(int)1] = tmp83;
											HX_STACK_LINE(69)
											Float tmp84 = (a21 * b12);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(69)
											Float tmp85 = (a22 * b22);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(69)
											Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(69)
											Float tmp87 = (a23 * b32);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(69)
											Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(69)
											Float tmp89 = (a24 * b42);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(69)
											Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(69)
											te[(int)5] = tmp90;
											HX_STACK_LINE(69)
											Float tmp91 = (a21 * b13);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(69)
											Float tmp92 = (a22 * b23);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(69)
											Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(69)
											Float tmp94 = (a23 * b33);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(69)
											Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(69)
											Float tmp96 = (a24 * b43);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(69)
											Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(69)
											te[(int)9] = tmp97;
											HX_STACK_LINE(69)
											Float tmp98 = (a21 * b14);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(69)
											Float tmp99 = (a22 * b24);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(69)
											Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(69)
											Float tmp101 = (a23 * b34);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(69)
											Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(69)
											Float tmp103 = (a24 * b44);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(69)
											Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(69)
											te[(int)13] = tmp104;
											HX_STACK_LINE(69)
											Float tmp105 = (a31 * b11);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(69)
											Float tmp106 = (a32 * b21);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(69)
											Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(69)
											Float tmp108 = (a33 * b31);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(69)
											Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(69)
											Float tmp110 = (a34 * b41);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(69)
											Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(69)
											te[(int)2] = tmp111;
											HX_STACK_LINE(69)
											Float tmp112 = (a31 * b12);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(69)
											Float tmp113 = (a32 * b22);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(69)
											Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(69)
											Float tmp115 = (a33 * b32);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(69)
											Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(69)
											Float tmp117 = (a34 * b42);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(69)
											Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(69)
											te[(int)6] = tmp118;
											HX_STACK_LINE(69)
											Float tmp119 = (a31 * b13);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(69)
											Float tmp120 = (a32 * b23);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(69)
											Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(69)
											Float tmp122 = (a33 * b33);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(69)
											Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(69)
											Float tmp124 = (a34 * b43);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(69)
											Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(69)
											te[(int)10] = tmp125;
											HX_STACK_LINE(69)
											Float tmp126 = (a31 * b14);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(69)
											Float tmp127 = (a32 * b24);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(69)
											Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(69)
											Float tmp129 = (a33 * b34);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(69)
											Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(69)
											Float tmp131 = (a34 * b44);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(69)
											Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(69)
											te[(int)14] = tmp132;
											HX_STACK_LINE(69)
											Float tmp133 = (a41 * b11);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(69)
											Float tmp134 = (a42 * b21);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(69)
											Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(69)
											Float tmp136 = (a43 * b31);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(69)
											Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(69)
											Float tmp138 = (a44 * b41);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(69)
											Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(69)
											te[(int)3] = tmp139;
											HX_STACK_LINE(69)
											Float tmp140 = (a41 * b12);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(69)
											Float tmp141 = (a42 * b22);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(69)
											Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(69)
											Float tmp143 = (a43 * b32);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(69)
											Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(69)
											Float tmp145 = (a44 * b42);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(69)
											Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(69)
											te[(int)7] = tmp146;
											HX_STACK_LINE(69)
											Float tmp147 = (a41 * b13);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(69)
											Float tmp148 = (a42 * b23);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(69)
											Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(69)
											Float tmp150 = (a43 * b33);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(69)
											Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(69)
											Float tmp152 = (a44 * b43);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(69)
											Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(69)
											te[(int)11] = tmp153;
											HX_STACK_LINE(69)
											Float tmp154 = (a41 * b14);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(69)
											Float tmp155 = (a42 * b24);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(69)
											Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
											HX_STACK_LINE(69)
											Float tmp157 = (a43 * b34);		HX_STACK_VAR(tmp157,"tmp157");
											HX_STACK_LINE(69)
											Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(69)
											Float tmp159 = (a44 * b44);		HX_STACK_VAR(tmp159,"tmp159");
											HX_STACK_LINE(69)
											Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
											HX_STACK_LINE(69)
											te[(int)15] = tmp160;
											HX_STACK_LINE(69)
											_this2;
										}
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										::phoenix::Matrix tmp16 = _this1->local->matrix;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(69)
										::phoenix::Matrix _this2 = tmp16;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(69)
										::phoenix::Vector tmp17 = _this1->local->scale;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(69)
										::phoenix::Vector _v = tmp17;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(69)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(69)
										Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(69)
										Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(69)
										Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(69)
										Float tmp18 = _x;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(69)
										hx::MultEq(te[(int)0],tmp18);
										HX_STACK_LINE(69)
										Float tmp19 = _y;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(69)
										hx::MultEq(te[(int)4],tmp19);
										HX_STACK_LINE(69)
										Float tmp20 = _z;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(69)
										hx::MultEq(te[(int)8],tmp20);
										HX_STACK_LINE(69)
										Float tmp21 = _x;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(69)
										hx::MultEq(te[(int)1],tmp21);
										HX_STACK_LINE(69)
										Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(69)
										hx::MultEq(te[(int)5],tmp22);
										HX_STACK_LINE(69)
										Float tmp23 = _z;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(69)
										hx::MultEq(te[(int)9],tmp23);
										HX_STACK_LINE(69)
										Float tmp24 = _x;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(69)
										hx::MultEq(te[(int)2],tmp24);
										HX_STACK_LINE(69)
										Float tmp25 = _y;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(69)
										hx::MultEq(te[(int)6],tmp25);
										HX_STACK_LINE(69)
										Float tmp26 = _z;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(69)
										hx::MultEq(te[(int)10],tmp26);
										HX_STACK_LINE(69)
										Float tmp27 = _x;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(69)
										hx::MultEq(te[(int)3],tmp27);
										HX_STACK_LINE(69)
										Float tmp28 = _y;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(69)
										hx::MultEq(te[(int)7],tmp28);
										HX_STACK_LINE(69)
										Float tmp29 = _z;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(69)
										hx::MultEq(te[(int)11],tmp29);
										HX_STACK_LINE(69)
										_this2;
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										::phoenix::Matrix tmp16 = _this1->local->matrix;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(69)
										::phoenix::Matrix _this2 = tmp16;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(69)
										::phoenix::Vector tmp17 = _this1->local->pos;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(69)
										::phoenix::Vector _v = tmp17;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(69)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(69)
										Float tmp18 = _v->x;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(69)
										te[(int)12] = tmp18;
										HX_STACK_LINE(69)
										Float tmp19 = _v->y;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(69)
										te[(int)13] = tmp19;
										HX_STACK_LINE(69)
										Float tmp20 = _v->z;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(69)
										te[(int)14] = tmp20;
										HX_STACK_LINE(69)
										_this2;
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										::phoenix::Matrix tmp16 = _this1->local->matrix;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(69)
										::phoenix::Matrix _this2 = tmp16;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(69)
											Array< Float > be = _this1->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(69)
											Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(69)
											Float tmp17 = ae->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(69)
											Float a11 = tmp17;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(69)
											Float tmp18 = ae->__get((int)4);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(69)
											Float a12 = tmp18;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(69)
											Float tmp19 = ae->__get((int)8);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											Float a13 = tmp19;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(69)
											Float tmp20 = ae->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											Float a14 = tmp20;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(69)
											Float tmp21 = ae->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(69)
											Float a21 = tmp21;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(69)
											Float tmp22 = ae->__get((int)5);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(69)
											Float a22 = tmp22;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(69)
											Float tmp23 = ae->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(69)
											Float a23 = tmp23;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(69)
											Float tmp24 = ae->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(69)
											Float a24 = tmp24;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(69)
											Float tmp25 = ae->__get((int)2);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(69)
											Float a31 = tmp25;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(69)
											Float tmp26 = ae->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(69)
											Float a32 = tmp26;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(69)
											Float tmp27 = ae->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(69)
											Float a33 = tmp27;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(69)
											Float tmp28 = ae->__get((int)14);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(69)
											Float a34 = tmp28;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(69)
											Float tmp29 = ae->__get((int)3);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(69)
											Float a41 = tmp29;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(69)
											Float tmp30 = ae->__get((int)7);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(69)
											Float a42 = tmp30;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(69)
											Float tmp31 = ae->__get((int)11);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(69)
											Float a43 = tmp31;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(69)
											Float tmp32 = ae->__get((int)15);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(69)
											Float a44 = tmp32;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(69)
											Float tmp33 = be->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(69)
											Float b11 = tmp33;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(69)
											Float tmp34 = be->__get((int)4);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(69)
											Float b12 = tmp34;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(69)
											Float tmp35 = be->__get((int)8);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(69)
											Float b13 = tmp35;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(69)
											Float tmp36 = be->__get((int)12);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(69)
											Float b14 = tmp36;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(69)
											Float tmp37 = be->__get((int)1);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(69)
											Float b21 = tmp37;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(69)
											Float tmp38 = be->__get((int)5);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(69)
											Float b22 = tmp38;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(69)
											Float tmp39 = be->__get((int)9);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(69)
											Float b23 = tmp39;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(69)
											Float tmp40 = be->__get((int)13);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(69)
											Float b24 = tmp40;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(69)
											Float tmp41 = be->__get((int)2);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(69)
											Float b31 = tmp41;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(69)
											Float tmp42 = be->__get((int)6);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(69)
											Float b32 = tmp42;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(69)
											Float tmp43 = be->__get((int)10);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(69)
											Float b33 = tmp43;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(69)
											Float tmp44 = be->__get((int)14);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(69)
											Float b34 = tmp44;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(69)
											Float tmp45 = be->__get((int)3);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(69)
											Float b41 = tmp45;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(69)
											Float tmp46 = be->__get((int)7);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(69)
											Float b42 = tmp46;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(69)
											Float tmp47 = be->__get((int)11);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(69)
											Float b43 = tmp47;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(69)
											Float tmp48 = be->__get((int)15);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(69)
											Float b44 = tmp48;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(69)
											Float tmp49 = (a11 * b11);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(69)
											Float tmp50 = (a12 * b21);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(69)
											Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(69)
											Float tmp52 = (a13 * b31);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(69)
											Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(69)
											Float tmp54 = (a14 * b41);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(69)
											Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(69)
											te[(int)0] = tmp55;
											HX_STACK_LINE(69)
											Float tmp56 = (a11 * b12);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(69)
											Float tmp57 = (a12 * b22);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(69)
											Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(69)
											Float tmp59 = (a13 * b32);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(69)
											Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(69)
											Float tmp61 = (a14 * b42);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(69)
											Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(69)
											te[(int)4] = tmp62;
											HX_STACK_LINE(69)
											Float tmp63 = (a11 * b13);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(69)
											Float tmp64 = (a12 * b23);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(69)
											Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(69)
											Float tmp66 = (a13 * b33);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(69)
											Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(69)
											Float tmp68 = (a14 * b43);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(69)
											Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(69)
											te[(int)8] = tmp69;
											HX_STACK_LINE(69)
											Float tmp70 = (a11 * b14);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(69)
											Float tmp71 = (a12 * b24);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(69)
											Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(69)
											Float tmp73 = (a13 * b34);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(69)
											Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(69)
											Float tmp75 = (a14 * b44);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(69)
											Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(69)
											te[(int)12] = tmp76;
											HX_STACK_LINE(69)
											Float tmp77 = (a21 * b11);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(69)
											Float tmp78 = (a22 * b21);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(69)
											Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(69)
											Float tmp80 = (a23 * b31);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(69)
											Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(69)
											Float tmp82 = (a24 * b41);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(69)
											Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(69)
											te[(int)1] = tmp83;
											HX_STACK_LINE(69)
											Float tmp84 = (a21 * b12);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(69)
											Float tmp85 = (a22 * b22);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(69)
											Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(69)
											Float tmp87 = (a23 * b32);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(69)
											Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(69)
											Float tmp89 = (a24 * b42);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(69)
											Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(69)
											te[(int)5] = tmp90;
											HX_STACK_LINE(69)
											Float tmp91 = (a21 * b13);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(69)
											Float tmp92 = (a22 * b23);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(69)
											Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(69)
											Float tmp94 = (a23 * b33);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(69)
											Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(69)
											Float tmp96 = (a24 * b43);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(69)
											Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(69)
											te[(int)9] = tmp97;
											HX_STACK_LINE(69)
											Float tmp98 = (a21 * b14);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(69)
											Float tmp99 = (a22 * b24);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(69)
											Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(69)
											Float tmp101 = (a23 * b34);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(69)
											Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(69)
											Float tmp103 = (a24 * b44);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(69)
											Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(69)
											te[(int)13] = tmp104;
											HX_STACK_LINE(69)
											Float tmp105 = (a31 * b11);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(69)
											Float tmp106 = (a32 * b21);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(69)
											Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(69)
											Float tmp108 = (a33 * b31);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(69)
											Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(69)
											Float tmp110 = (a34 * b41);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(69)
											Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(69)
											te[(int)2] = tmp111;
											HX_STACK_LINE(69)
											Float tmp112 = (a31 * b12);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(69)
											Float tmp113 = (a32 * b22);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(69)
											Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(69)
											Float tmp115 = (a33 * b32);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(69)
											Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(69)
											Float tmp117 = (a34 * b42);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(69)
											Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(69)
											te[(int)6] = tmp118;
											HX_STACK_LINE(69)
											Float tmp119 = (a31 * b13);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(69)
											Float tmp120 = (a32 * b23);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(69)
											Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(69)
											Float tmp122 = (a33 * b33);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(69)
											Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(69)
											Float tmp124 = (a34 * b43);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(69)
											Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(69)
											te[(int)10] = tmp125;
											HX_STACK_LINE(69)
											Float tmp126 = (a31 * b14);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(69)
											Float tmp127 = (a32 * b24);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(69)
											Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(69)
											Float tmp129 = (a33 * b34);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(69)
											Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(69)
											Float tmp131 = (a34 * b44);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(69)
											Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(69)
											te[(int)14] = tmp132;
											HX_STACK_LINE(69)
											Float tmp133 = (a41 * b11);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(69)
											Float tmp134 = (a42 * b21);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(69)
											Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(69)
											Float tmp136 = (a43 * b31);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(69)
											Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(69)
											Float tmp138 = (a44 * b41);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(69)
											Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(69)
											te[(int)3] = tmp139;
											HX_STACK_LINE(69)
											Float tmp140 = (a41 * b12);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(69)
											Float tmp141 = (a42 * b22);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(69)
											Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(69)
											Float tmp143 = (a43 * b32);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(69)
											Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(69)
											Float tmp145 = (a44 * b42);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(69)
											Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(69)
											te[(int)7] = tmp146;
											HX_STACK_LINE(69)
											Float tmp147 = (a41 * b13);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(69)
											Float tmp148 = (a42 * b23);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(69)
											Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(69)
											Float tmp150 = (a43 * b33);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(69)
											Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(69)
											Float tmp152 = (a44 * b43);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(69)
											Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(69)
											te[(int)11] = tmp153;
											HX_STACK_LINE(69)
											Float tmp154 = (a41 * b14);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(69)
											Float tmp155 = (a42 * b24);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(69)
											Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
											HX_STACK_LINE(69)
											Float tmp157 = (a43 * b34);		HX_STACK_VAR(tmp157,"tmp157");
											HX_STACK_LINE(69)
											Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(69)
											Float tmp159 = (a44 * b44);		HX_STACK_VAR(tmp159,"tmp159");
											HX_STACK_LINE(69)
											Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
											HX_STACK_LINE(69)
											te[(int)15] = tmp160;
											HX_STACK_LINE(69)
											_this2;
										}
									}
									HX_STACK_LINE(69)
									bool tmp16 = (_this1->parent != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(69)
									if ((tmp16)){
										HX_STACK_LINE(69)
										::phoenix::Spatial tmp17 = _this1->get_world();		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(69)
										::phoenix::Spatial _this2 = tmp17;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(69)
										::phoenix::Matrix tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											::phoenix::Matrix tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												::phoenix::Spatial tmp20 = _this1->get_world();		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(69)
												::phoenix::Spatial _this3 = tmp20;		HX_STACK_VAR(_this3,"_this3");
												HX_STACK_LINE(69)
												tmp19 = _this3->matrix;
											}
											HX_STACK_LINE(69)
											::phoenix::Matrix _this3 = tmp19;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(69)
											::phoenix::Matrix tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												::phoenix::Spatial tmp21 = _this1->parent->get_world();		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(69)
												::phoenix::Spatial _this4 = tmp21;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(69)
												tmp20 = _this4->matrix;
											}
											HX_STACK_LINE(69)
											::phoenix::Matrix _a = tmp20;		HX_STACK_VAR(_a,"_a");
											HX_STACK_LINE(69)
											Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(69)
											::phoenix::Matrix tmp21 = _this1->local->matrix;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(69)
											Array< Float > be = tmp21->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(69)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(69)
											Float tmp22 = ae->__get((int)0);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(69)
											Float a11 = tmp22;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(69)
											Float tmp23 = ae->__get((int)4);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(69)
											Float a12 = tmp23;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(69)
											Float tmp24 = ae->__get((int)8);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(69)
											Float a13 = tmp24;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(69)
											Float tmp25 = ae->__get((int)12);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(69)
											Float a14 = tmp25;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(69)
											Float tmp26 = ae->__get((int)1);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(69)
											Float a21 = tmp26;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(69)
											Float tmp27 = ae->__get((int)5);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(69)
											Float a22 = tmp27;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(69)
											Float tmp28 = ae->__get((int)9);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(69)
											Float a23 = tmp28;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(69)
											Float tmp29 = ae->__get((int)13);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(69)
											Float a24 = tmp29;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(69)
											Float tmp30 = ae->__get((int)2);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(69)
											Float a31 = tmp30;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(69)
											Float tmp31 = ae->__get((int)6);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(69)
											Float a32 = tmp31;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(69)
											Float tmp32 = ae->__get((int)10);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(69)
											Float a33 = tmp32;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(69)
											Float tmp33 = ae->__get((int)14);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(69)
											Float a34 = tmp33;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(69)
											Float tmp34 = ae->__get((int)3);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(69)
											Float a41 = tmp34;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(69)
											Float tmp35 = ae->__get((int)7);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(69)
											Float a42 = tmp35;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(69)
											Float tmp36 = ae->__get((int)11);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(69)
											Float a43 = tmp36;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(69)
											Float tmp37 = ae->__get((int)15);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(69)
											Float a44 = tmp37;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(69)
											Float tmp38 = be->__get((int)0);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(69)
											Float b11 = tmp38;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(69)
											Float tmp39 = be->__get((int)4);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(69)
											Float b12 = tmp39;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(69)
											Float tmp40 = be->__get((int)8);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(69)
											Float b13 = tmp40;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(69)
											Float tmp41 = be->__get((int)12);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(69)
											Float b14 = tmp41;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(69)
											Float tmp42 = be->__get((int)1);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(69)
											Float b21 = tmp42;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(69)
											Float tmp43 = be->__get((int)5);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(69)
											Float b22 = tmp43;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(69)
											Float tmp44 = be->__get((int)9);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(69)
											Float b23 = tmp44;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(69)
											Float tmp45 = be->__get((int)13);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(69)
											Float b24 = tmp45;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(69)
											Float tmp46 = be->__get((int)2);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(69)
											Float b31 = tmp46;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(69)
											Float tmp47 = be->__get((int)6);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(69)
											Float b32 = tmp47;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(69)
											Float tmp48 = be->__get((int)10);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(69)
											Float b33 = tmp48;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(69)
											Float tmp49 = be->__get((int)14);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(69)
											Float b34 = tmp49;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(69)
											Float tmp50 = be->__get((int)3);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(69)
											Float b41 = tmp50;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(69)
											Float tmp51 = be->__get((int)7);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(69)
											Float b42 = tmp51;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(69)
											Float tmp52 = be->__get((int)11);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(69)
											Float b43 = tmp52;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(69)
											Float tmp53 = be->__get((int)15);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(69)
											Float b44 = tmp53;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(69)
											Float tmp54 = (a11 * b11);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(69)
											Float tmp55 = (a12 * b21);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(69)
											Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(69)
											Float tmp57 = (a13 * b31);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(69)
											Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(69)
											Float tmp59 = (a14 * b41);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(69)
											Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(69)
											te[(int)0] = tmp60;
											HX_STACK_LINE(69)
											Float tmp61 = (a11 * b12);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(69)
											Float tmp62 = (a12 * b22);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(69)
											Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(69)
											Float tmp64 = (a13 * b32);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(69)
											Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(69)
											Float tmp66 = (a14 * b42);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(69)
											Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(69)
											te[(int)4] = tmp67;
											HX_STACK_LINE(69)
											Float tmp68 = (a11 * b13);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(69)
											Float tmp69 = (a12 * b23);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(69)
											Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(69)
											Float tmp71 = (a13 * b33);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(69)
											Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(69)
											Float tmp73 = (a14 * b43);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(69)
											Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(69)
											te[(int)8] = tmp74;
											HX_STACK_LINE(69)
											Float tmp75 = (a11 * b14);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(69)
											Float tmp76 = (a12 * b24);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(69)
											Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(69)
											Float tmp78 = (a13 * b34);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(69)
											Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(69)
											Float tmp80 = (a14 * b44);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(69)
											Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(69)
											te[(int)12] = tmp81;
											HX_STACK_LINE(69)
											Float tmp82 = (a21 * b11);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(69)
											Float tmp83 = (a22 * b21);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(69)
											Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(69)
											Float tmp85 = (a23 * b31);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(69)
											Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(69)
											Float tmp87 = (a24 * b41);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(69)
											Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(69)
											te[(int)1] = tmp88;
											HX_STACK_LINE(69)
											Float tmp89 = (a21 * b12);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(69)
											Float tmp90 = (a22 * b22);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(69)
											Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(69)
											Float tmp92 = (a23 * b32);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(69)
											Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(69)
											Float tmp94 = (a24 * b42);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(69)
											Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(69)
											te[(int)5] = tmp95;
											HX_STACK_LINE(69)
											Float tmp96 = (a21 * b13);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(69)
											Float tmp97 = (a22 * b23);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(69)
											Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(69)
											Float tmp99 = (a23 * b33);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(69)
											Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(69)
											Float tmp101 = (a24 * b43);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(69)
											Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(69)
											te[(int)9] = tmp102;
											HX_STACK_LINE(69)
											Float tmp103 = (a21 * b14);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(69)
											Float tmp104 = (a22 * b24);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(69)
											Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(69)
											Float tmp106 = (a23 * b34);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(69)
											Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(69)
											Float tmp108 = (a24 * b44);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(69)
											Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(69)
											te[(int)13] = tmp109;
											HX_STACK_LINE(69)
											Float tmp110 = (a31 * b11);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(69)
											Float tmp111 = (a32 * b21);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(69)
											Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(69)
											Float tmp113 = (a33 * b31);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(69)
											Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(69)
											Float tmp115 = (a34 * b41);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(69)
											Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(69)
											te[(int)2] = tmp116;
											HX_STACK_LINE(69)
											Float tmp117 = (a31 * b12);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(69)
											Float tmp118 = (a32 * b22);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(69)
											Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(69)
											Float tmp120 = (a33 * b32);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(69)
											Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(69)
											Float tmp122 = (a34 * b42);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(69)
											Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(69)
											te[(int)6] = tmp123;
											HX_STACK_LINE(69)
											Float tmp124 = (a31 * b13);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(69)
											Float tmp125 = (a32 * b23);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(69)
											Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(69)
											Float tmp127 = (a33 * b33);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(69)
											Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(69)
											Float tmp129 = (a34 * b43);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(69)
											Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(69)
											te[(int)10] = tmp130;
											HX_STACK_LINE(69)
											Float tmp131 = (a31 * b14);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(69)
											Float tmp132 = (a32 * b24);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(69)
											Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(69)
											Float tmp134 = (a33 * b34);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(69)
											Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(69)
											Float tmp136 = (a34 * b44);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(69)
											Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(69)
											te[(int)14] = tmp137;
											HX_STACK_LINE(69)
											Float tmp138 = (a41 * b11);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(69)
											Float tmp139 = (a42 * b21);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(69)
											Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(69)
											Float tmp141 = (a43 * b31);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(69)
											Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(69)
											Float tmp143 = (a44 * b41);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(69)
											Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(69)
											te[(int)3] = tmp144;
											HX_STACK_LINE(69)
											Float tmp145 = (a41 * b12);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(69)
											Float tmp146 = (a42 * b22);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(69)
											Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(69)
											Float tmp148 = (a43 * b32);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(69)
											Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(69)
											Float tmp150 = (a44 * b42);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(69)
											Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(69)
											te[(int)7] = tmp151;
											HX_STACK_LINE(69)
											Float tmp152 = (a41 * b13);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(69)
											Float tmp153 = (a42 * b23);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(69)
											Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(69)
											Float tmp155 = (a43 * b33);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(69)
											Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
											HX_STACK_LINE(69)
											Float tmp157 = (a44 * b43);		HX_STACK_VAR(tmp157,"tmp157");
											HX_STACK_LINE(69)
											Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(69)
											te[(int)11] = tmp158;
											HX_STACK_LINE(69)
											Float tmp159 = (a41 * b14);		HX_STACK_VAR(tmp159,"tmp159");
											HX_STACK_LINE(69)
											Float tmp160 = (a42 * b24);		HX_STACK_VAR(tmp160,"tmp160");
											HX_STACK_LINE(69)
											Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
											HX_STACK_LINE(69)
											Float tmp162 = (a43 * b34);		HX_STACK_VAR(tmp162,"tmp162");
											HX_STACK_LINE(69)
											Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
											HX_STACK_LINE(69)
											Float tmp164 = (a44 * b44);		HX_STACK_VAR(tmp164,"tmp164");
											HX_STACK_LINE(69)
											Float tmp165 = (tmp163 + tmp164);		HX_STACK_VAR(tmp165,"tmp165");
											HX_STACK_LINE(69)
											te[(int)15] = tmp165;
											HX_STACK_LINE(69)
											tmp18 = _this3;
										}
										HX_STACK_LINE(69)
										::phoenix::Matrix _m = tmp18;		HX_STACK_VAR(_m,"_m");
										HX_STACK_LINE(69)
										_this2->matrix = _m;
										HX_STACK_LINE(69)
										bool tmp19 = (_m != null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(69)
										if ((tmp19)){
											HX_STACK_LINE(69)
											::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
												HX_STACK_LINE(69)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(69)
												bool tmp21 = (array != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(69)
												if ((tmp21)){
													HX_STACK_LINE(69)
													::snow::api::buffers::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(69)
													{
														HX_STACK_LINE(69)
														::snow::api::buffers::ArrayBufferView tmp23 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(69)
														::snow::api::buffers::ArrayBufferView _this3 = tmp23;		HX_STACK_VAR(_this3,"_this3");
														HX_STACK_LINE(69)
														_this3->byteOffset = (int)0;
														HX_STACK_LINE(69)
														_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
														HX_STACK_LINE(69)
														int tmp24 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(69)
														_this3->byteLength = tmp24;
														HX_STACK_LINE(69)
														::haxe::io::Bytes tmp25;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(69)
														{
															HX_STACK_LINE(69)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(69)
															int tmp26 = _this3->byteLength;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(69)
															::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(69)
															this2 = tmp27;
															HX_STACK_LINE(69)
															tmp25 = this2;
														}
														HX_STACK_LINE(69)
														_this3->buffer = tmp25;
														HX_STACK_LINE(69)
														_this3->copyFromArray(((Array< Float >)(array)),null());
														HX_STACK_LINE(69)
														tmp22 = _this3;
													}
													HX_STACK_LINE(69)
													this1 = tmp22;
												}
												else{
													HX_STACK_LINE(69)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
												}
												HX_STACK_LINE(69)
												tmp20 = this1;
											}
											HX_STACK_LINE(69)
											_this2->floats = tmp20;
										}
										HX_STACK_LINE(69)
										_this2->matrix;
									}
									else{
										HX_STACK_LINE(69)
										::phoenix::Spatial tmp17 = _this1->get_world();		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(69)
										::phoenix::Spatial _this2 = tmp17;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(69)
										::phoenix::Matrix tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(69)
										{
											HX_STACK_LINE(69)
											::phoenix::Matrix tmp19 = _this1->local->matrix;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											Array< Float > te = tmp19->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(69)
											Float tmp20 = te->__get((int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											Float tmp21 = te->__get((int)4);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(69)
											Float tmp22 = te->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(69)
											Float tmp23 = te->__get((int)12);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(69)
											Float tmp24 = te->__get((int)1);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(69)
											Float tmp25 = te->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(69)
											Float tmp26 = te->__get((int)9);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(69)
											Float tmp27 = te->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(69)
											Float tmp28 = te->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(69)
											Float tmp29 = te->__get((int)6);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(69)
											Float tmp30 = te->__get((int)10);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(69)
											Float tmp31 = te->__get((int)14);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(69)
											Float tmp32 = te->__get((int)3);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(69)
											Float tmp33 = te->__get((int)7);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(69)
											Float tmp34 = te->__get((int)11);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(69)
											Float tmp35 = te->__get((int)15);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(69)
											tmp18 = ::phoenix::Matrix_obj::__new(tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31,tmp32,tmp33,tmp34,tmp35);
										}
										HX_STACK_LINE(69)
										::phoenix::Matrix _m = tmp18;		HX_STACK_VAR(_m,"_m");
										HX_STACK_LINE(69)
										_this2->matrix = _m;
										HX_STACK_LINE(69)
										bool tmp19 = (_m != null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(69)
										if ((tmp19)){
											HX_STACK_LINE(69)
											::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
												HX_STACK_LINE(69)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(69)
												bool tmp21 = (array != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(69)
												if ((tmp21)){
													HX_STACK_LINE(69)
													::snow::api::buffers::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(69)
													{
														HX_STACK_LINE(69)
														::snow::api::buffers::ArrayBufferView tmp23 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(69)
														::snow::api::buffers::ArrayBufferView _this3 = tmp23;		HX_STACK_VAR(_this3,"_this3");
														HX_STACK_LINE(69)
														_this3->byteOffset = (int)0;
														HX_STACK_LINE(69)
														_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
														HX_STACK_LINE(69)
														int tmp24 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(69)
														_this3->byteLength = tmp24;
														HX_STACK_LINE(69)
														::haxe::io::Bytes tmp25;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(69)
														{
															HX_STACK_LINE(69)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(69)
															int tmp26 = _this3->byteLength;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(69)
															::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(69)
															this2 = tmp27;
															HX_STACK_LINE(69)
															tmp25 = this2;
														}
														HX_STACK_LINE(69)
														_this3->buffer = tmp25;
														HX_STACK_LINE(69)
														_this3->copyFromArray(((Array< Float >)(array)),null());
														HX_STACK_LINE(69)
														tmp22 = _this3;
													}
													HX_STACK_LINE(69)
													this1 = tmp22;
												}
												else{
													HX_STACK_LINE(69)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
												}
												HX_STACK_LINE(69)
												tmp20 = this1;
											}
											HX_STACK_LINE(69)
											_this2->floats = tmp20;
										}
										HX_STACK_LINE(69)
										_this2->matrix;
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										::phoenix::Spatial tmp17 = _this1->get_world();		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(69)
										::phoenix::Spatial _this2 = tmp17;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(69)
										bool tmp18 = _this2->auto_decompose;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(69)
										if ((tmp18)){
											HX_STACK_LINE(69)
											::phoenix::MatrixTransform tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
												HX_STACK_LINE(69)
												::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
												HX_STACK_LINE(69)
												::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
												HX_STACK_LINE(69)
												::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
												HX_STACK_LINE(69)
												Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(69)
												::phoenix::Matrix tmp20 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(69)
												::phoenix::Matrix matrix = tmp20;		HX_STACK_VAR(matrix,"matrix");
												HX_STACK_LINE(69)
												Float tmp21 = te->__get((int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(69)
												Float _ax_x = tmp21;		HX_STACK_VAR(_ax_x,"_ax_x");
												HX_STACK_LINE(69)
												Float tmp22 = te->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(69)
												Float _ax_y = tmp22;		HX_STACK_VAR(_ax_y,"_ax_y");
												HX_STACK_LINE(69)
												Float tmp23 = te->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(69)
												Float _ax_z = tmp23;		HX_STACK_VAR(_ax_z,"_ax_z");
												HX_STACK_LINE(69)
												Float tmp24 = te->__get((int)4);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(69)
												Float _ay_x = tmp24;		HX_STACK_VAR(_ay_x,"_ay_x");
												HX_STACK_LINE(69)
												Float tmp25 = te->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(69)
												Float _ay_y = tmp25;		HX_STACK_VAR(_ay_y,"_ay_y");
												HX_STACK_LINE(69)
												Float tmp26 = te->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(69)
												Float _ay_z = tmp26;		HX_STACK_VAR(_ay_z,"_ay_z");
												HX_STACK_LINE(69)
												Float tmp27 = te->__get((int)8);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(69)
												Float _az_x = tmp27;		HX_STACK_VAR(_az_x,"_az_x");
												HX_STACK_LINE(69)
												Float tmp28 = te->__get((int)9);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(69)
												Float _az_y = tmp28;		HX_STACK_VAR(_az_y,"_az_y");
												HX_STACK_LINE(69)
												Float tmp29 = te->__get((int)10);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(69)
												Float _az_z = tmp29;		HX_STACK_VAR(_az_z,"_az_z");
												HX_STACK_LINE(69)
												Float tmp30 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(69)
												Float tmp31 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(69)
												Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(69)
												Float tmp33 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(69)
												Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(69)
												Float tmp35 = ::Math_obj::sqrt(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(69)
												Float _ax_length = tmp35;		HX_STACK_VAR(_ax_length,"_ax_length");
												HX_STACK_LINE(69)
												Float tmp36 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(69)
												Float tmp37 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(69)
												Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(69)
												Float tmp39 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(69)
												Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(69)
												Float tmp41 = ::Math_obj::sqrt(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(69)
												Float _ay_length = tmp41;		HX_STACK_VAR(_ay_length,"_ay_length");
												HX_STACK_LINE(69)
												Float tmp42 = (_az_x * _az_x);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(69)
												Float tmp43 = (_az_y * _az_y);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(69)
												Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(69)
												Float tmp45 = (_az_z * _az_z);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(69)
												Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(69)
												Float tmp47 = ::Math_obj::sqrt(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(69)
												Float _az_length = tmp47;		HX_STACK_VAR(_az_length,"_az_length");
												HX_STACK_LINE(69)
												bool tmp48 = (_quaternion == null());		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(69)
												if ((tmp48)){
													HX_STACK_LINE(69)
													::phoenix::Quaternion tmp49 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(69)
													_quaternion = tmp49;
												}
												HX_STACK_LINE(69)
												bool tmp49 = (_position == null());		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(69)
												if ((tmp49)){
													HX_STACK_LINE(69)
													Float tmp50 = te->__get((int)12);		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(69)
													Float tmp51 = te->__get((int)13);		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(69)
													Float tmp52 = te->__get((int)14);		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(69)
													::phoenix::Vector tmp53 = ::phoenix::Vector_obj::__new(tmp50,tmp51,tmp52,null());		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(69)
													_position = tmp53;
												}
												else{
													HX_STACK_LINE(69)
													{
														HX_STACK_LINE(69)
														Float tmp50 = te->__get((int)12);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(69)
														Float _x = tmp50;		HX_STACK_VAR(_x,"_x");
														HX_STACK_LINE(69)
														_position->x = _x;
														HX_STACK_LINE(69)
														bool tmp51 = _position->_construct;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(69)
														if ((tmp51)){
															HX_STACK_LINE(69)
															_position->x;
														}
														else{
															HX_STACK_LINE(69)
															bool tmp52 = (_position->listen_x != null());		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(69)
															bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(69)
															if ((tmp52)){
																HX_STACK_LINE(69)
																bool tmp54 = _position->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(69)
																bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(69)
																tmp53 = !(tmp55);
															}
															else{
																HX_STACK_LINE(69)
																tmp53 = false;
															}
															HX_STACK_LINE(69)
															if ((tmp53)){
																HX_STACK_LINE(69)
																Float tmp54 = _x;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(69)
																_position->listen_x(tmp54);
															}
															HX_STACK_LINE(69)
															_position->x;
														}
													}
													HX_STACK_LINE(69)
													{
														HX_STACK_LINE(69)
														Float tmp50 = te->__get((int)13);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(69)
														Float _y = tmp50;		HX_STACK_VAR(_y,"_y");
														HX_STACK_LINE(69)
														_position->y = _y;
														HX_STACK_LINE(69)
														bool tmp51 = _position->_construct;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(69)
														if ((tmp51)){
															HX_STACK_LINE(69)
															_position->y;
														}
														else{
															HX_STACK_LINE(69)
															bool tmp52 = (_position->listen_y != null());		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(69)
															bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(69)
															if ((tmp52)){
																HX_STACK_LINE(69)
																bool tmp54 = _position->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(69)
																bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(69)
																tmp53 = !(tmp55);
															}
															else{
																HX_STACK_LINE(69)
																tmp53 = false;
															}
															HX_STACK_LINE(69)
															if ((tmp53)){
																HX_STACK_LINE(69)
																Float tmp54 = _y;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(69)
																_position->listen_y(tmp54);
															}
															HX_STACK_LINE(69)
															_position->y;
														}
													}
													HX_STACK_LINE(69)
													{
														HX_STACK_LINE(69)
														Float tmp50 = te->__get((int)14);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(69)
														Float _z = tmp50;		HX_STACK_VAR(_z,"_z");
														HX_STACK_LINE(69)
														_position->z = _z;
														HX_STACK_LINE(69)
														bool tmp51 = _position->_construct;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(69)
														if ((tmp51)){
															HX_STACK_LINE(69)
															_position->z;
														}
														else{
															HX_STACK_LINE(69)
															bool tmp52 = (_position->listen_z != null());		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(69)
															bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(69)
															if ((tmp52)){
																HX_STACK_LINE(69)
																bool tmp54 = _position->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(69)
																bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(69)
																tmp53 = !(tmp55);
															}
															else{
																HX_STACK_LINE(69)
																tmp53 = false;
															}
															HX_STACK_LINE(69)
															if ((tmp53)){
																HX_STACK_LINE(69)
																Float tmp54 = _z;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(69)
																_position->listen_z(tmp54);
															}
															HX_STACK_LINE(69)
															_position->z;
														}
													}
												}
												HX_STACK_LINE(69)
												bool tmp50 = (_scale == null());		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(69)
												if ((tmp50)){
													HX_STACK_LINE(69)
													::phoenix::Vector tmp51 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(69)
													_scale = tmp51;
												}
												else{
													HX_STACK_LINE(69)
													{
														HX_STACK_LINE(69)
														_scale->x = _ax_length;
														HX_STACK_LINE(69)
														bool tmp51 = _scale->_construct;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(69)
														if ((tmp51)){
															HX_STACK_LINE(69)
															_scale->x;
														}
														else{
															HX_STACK_LINE(69)
															bool tmp52 = (_scale->listen_x != null());		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(69)
															bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(69)
															if ((tmp52)){
																HX_STACK_LINE(69)
																bool tmp54 = _scale->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(69)
																bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(69)
																tmp53 = !(tmp55);
															}
															else{
																HX_STACK_LINE(69)
																tmp53 = false;
															}
															HX_STACK_LINE(69)
															if ((tmp53)){
																HX_STACK_LINE(69)
																Float tmp54 = _ax_length;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(69)
																_scale->listen_x(tmp54);
															}
															HX_STACK_LINE(69)
															_scale->x;
														}
													}
													HX_STACK_LINE(69)
													{
														HX_STACK_LINE(69)
														_scale->y = _ay_length;
														HX_STACK_LINE(69)
														bool tmp51 = _scale->_construct;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(69)
														if ((tmp51)){
															HX_STACK_LINE(69)
															_scale->y;
														}
														else{
															HX_STACK_LINE(69)
															bool tmp52 = (_scale->listen_y != null());		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(69)
															bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(69)
															if ((tmp52)){
																HX_STACK_LINE(69)
																bool tmp54 = _scale->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(69)
																bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(69)
																tmp53 = !(tmp55);
															}
															else{
																HX_STACK_LINE(69)
																tmp53 = false;
															}
															HX_STACK_LINE(69)
															if ((tmp53)){
																HX_STACK_LINE(69)
																Float tmp54 = _ay_length;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(69)
																_scale->listen_y(tmp54);
															}
															HX_STACK_LINE(69)
															_scale->y;
														}
													}
													HX_STACK_LINE(69)
													{
														HX_STACK_LINE(69)
														_scale->z = _az_length;
														HX_STACK_LINE(69)
														bool tmp51 = _scale->_construct;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(69)
														if ((tmp51)){
															HX_STACK_LINE(69)
															_scale->z;
														}
														else{
															HX_STACK_LINE(69)
															bool tmp52 = (_scale->listen_z != null());		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(69)
															bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(69)
															if ((tmp52)){
																HX_STACK_LINE(69)
																bool tmp54 = _scale->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(69)
																bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(69)
																tmp53 = !(tmp55);
															}
															else{
																HX_STACK_LINE(69)
																tmp53 = false;
															}
															HX_STACK_LINE(69)
															if ((tmp53)){
																HX_STACK_LINE(69)
																Float tmp54 = _az_length;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(69)
																_scale->listen_z(tmp54);
															}
															HX_STACK_LINE(69)
															_scale->z;
														}
													}
												}
												HX_STACK_LINE(69)
												matrix->elements = _this3->elements->concat(Array_obj< Float >::__new());
												HX_STACK_LINE(69)
												Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
												HX_STACK_LINE(69)
												Float tmp51 = _ax_length;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(69)
												hx::DivEq(me[(int)0],tmp51);
												HX_STACK_LINE(69)
												Float tmp52 = _ax_length;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(69)
												hx::DivEq(me[(int)1],tmp52);
												HX_STACK_LINE(69)
												Float tmp53 = _ax_length;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(69)
												hx::DivEq(me[(int)2],tmp53);
												HX_STACK_LINE(69)
												Float tmp54 = _ay_length;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(69)
												hx::DivEq(me[(int)4],tmp54);
												HX_STACK_LINE(69)
												Float tmp55 = _ay_length;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(69)
												hx::DivEq(me[(int)5],tmp55);
												HX_STACK_LINE(69)
												Float tmp56 = _ay_length;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(69)
												hx::DivEq(me[(int)6],tmp56);
												HX_STACK_LINE(69)
												Float tmp57 = _az_length;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(69)
												hx::DivEq(me[(int)8],tmp57);
												HX_STACK_LINE(69)
												Float tmp58 = _az_length;		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(69)
												hx::DivEq(me[(int)9],tmp58);
												HX_STACK_LINE(69)
												Float tmp59 = _az_length;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(69)
												hx::DivEq(me[(int)10],tmp59);
												HX_STACK_LINE(69)
												::phoenix::Matrix tmp60 = matrix;		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(69)
												_quaternion->setFromRotationMatrix(tmp60);
												HX_STACK_LINE(69)
												bool tmp61 = (_this3->_transform == null());		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(69)
												if ((tmp61)){
													HX_STACK_LINE(69)
													::phoenix::MatrixTransform tmp62 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(69)
													_this3->_transform = tmp62;
												}
												else{
													HX_STACK_LINE(69)
													_this3->_transform->pos = _position;
													HX_STACK_LINE(69)
													_this3->_transform->rotation = _quaternion;
													HX_STACK_LINE(69)
													_this3->_transform->scale = _scale;
												}
												HX_STACK_LINE(69)
												tmp19 = _this3->_transform;
											}
											HX_STACK_LINE(69)
											::phoenix::MatrixTransform _transform = tmp19;		HX_STACK_VAR(_transform,"_transform");
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
												HX_STACK_LINE(69)
												_this2->pos = _p;
												HX_STACK_LINE(69)
												bool tmp20 = (_p != null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(69)
												if ((tmp20)){
													HX_STACK_LINE(69)
													::phoenix::Vector tmp21 = _this2->pos;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(69)
													Dynamic tmp22 = _this2->_pos_change_dyn();		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(69)
													::phoenix::Vector_obj::Listen(tmp21,tmp22);
													HX_STACK_LINE(69)
													bool tmp23 = (_this2->pos_changed != null());		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(69)
													bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(69)
													if ((tmp23)){
														HX_STACK_LINE(69)
														bool tmp25 = _this2->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(69)
														bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(69)
														tmp24 = !(tmp26);
													}
													else{
														HX_STACK_LINE(69)
														tmp24 = false;
													}
													HX_STACK_LINE(69)
													if ((tmp24)){
														HX_STACK_LINE(69)
														::phoenix::Vector tmp25 = _this2->pos;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(69)
														_this2->pos_changed(tmp25);
													}
												}
												HX_STACK_LINE(69)
												_this2->pos;
											}
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
												HX_STACK_LINE(69)
												_this2->rotation = _r;
												HX_STACK_LINE(69)
												bool tmp20 = (_r != null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(69)
												if ((tmp20)){
													HX_STACK_LINE(69)
													{
														HX_STACK_LINE(69)
														::phoenix::Quaternion _q = _this2->rotation;		HX_STACK_VAR(_q,"_q");
														HX_STACK_LINE(69)
														Dynamic listener = _this2->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
														HX_STACK_LINE(69)
														_q->listen_x = listener;
														HX_STACK_LINE(69)
														_q->listen_y = listener;
														HX_STACK_LINE(69)
														_q->listen_z = listener;
														HX_STACK_LINE(69)
														_q->listen_w = listener;
													}
													HX_STACK_LINE(69)
													bool tmp21 = (_this2->rotation_changed != null());		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(69)
													bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(69)
													if ((tmp21)){
														HX_STACK_LINE(69)
														bool tmp23 = _this2->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(69)
														bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(69)
														tmp22 = !(tmp24);
													}
													else{
														HX_STACK_LINE(69)
														tmp22 = false;
													}
													HX_STACK_LINE(69)
													if ((tmp22)){
														HX_STACK_LINE(69)
														::phoenix::Quaternion tmp23 = _this2->rotation;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(69)
														_this2->rotation_changed(tmp23);
													}
												}
												HX_STACK_LINE(69)
												_this2->rotation;
											}
											HX_STACK_LINE(69)
											{
												HX_STACK_LINE(69)
												::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
												HX_STACK_LINE(69)
												_this2->scale = _s;
												HX_STACK_LINE(69)
												bool tmp20 = (_s != null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(69)
												if ((tmp20)){
													HX_STACK_LINE(69)
													::phoenix::Vector tmp21 = _this2->scale;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(69)
													Dynamic tmp22 = _this2->_scale_change_dyn();		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(69)
													::phoenix::Vector_obj::Listen(tmp21,tmp22);
													HX_STACK_LINE(69)
													bool tmp23 = (_this2->scale_changed != null());		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(69)
													bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(69)
													if ((tmp23)){
														HX_STACK_LINE(69)
														bool tmp25 = _this2->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(69)
														bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(69)
														tmp24 = !(tmp26);
													}
													else{
														HX_STACK_LINE(69)
														tmp24 = false;
													}
													HX_STACK_LINE(69)
													if ((tmp24)){
														HX_STACK_LINE(69)
														::phoenix::Vector tmp25 = _this2->scale;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(69)
														_this2->scale_changed(tmp25);
													}
												}
												HX_STACK_LINE(69)
												_this2->scale;
											}
										}
										HX_STACK_LINE(69)
										_this2;
									}
									HX_STACK_LINE(69)
									{
										HX_STACK_LINE(69)
										_this1->dirty = false;
										HX_STACK_LINE(69)
										bool tmp17 = _this1->dirty;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(69)
										bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(69)
										bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(69)
										if ((tmp18)){
											HX_STACK_LINE(69)
											bool tmp20 = _this1->_setup;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(69)
											bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(69)
											tmp19 = !(tmp22);
										}
										else{
											HX_STACK_LINE(69)
											tmp19 = false;
										}
										HX_STACK_LINE(69)
										bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(69)
										bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(69)
										if ((tmp20)){
											HX_STACK_LINE(69)
											tmp21 = (_this1->_dirty_handlers != null());
										}
										else{
											HX_STACK_LINE(69)
											tmp21 = false;
										}
										HX_STACK_LINE(69)
										bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(69)
										if ((tmp21)){
											HX_STACK_LINE(69)
											int tmp23 = _this1->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(69)
											int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(69)
											tmp22 = (tmp24 > (int)0);
										}
										else{
											HX_STACK_LINE(69)
											tmp22 = false;
										}
										HX_STACK_LINE(69)
										if ((tmp22)){
											HX_STACK_LINE(69)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(69)
											cpp::ArrayBase _g11 = _this1->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(69)
											while((true)){
												HX_STACK_LINE(69)
												bool tmp23 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(69)
												bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(69)
												if ((tmp24)){
													HX_STACK_LINE(69)
													break;
												}
												HX_STACK_LINE(69)
												Dynamic tmp25 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(69)
												Dynamic _handler = tmp25;		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(69)
												++(_g1);
												HX_STACK_LINE(69)
												bool tmp26 = (_handler != null());		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(69)
												if ((tmp26)){
													HX_STACK_LINE(69)
													::phoenix::Transform tmp27 = _this1;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(69)
													_handler(tmp27).Cast< Void >();
												}
											}
										}
										HX_STACK_LINE(69)
										_this1->dirty;
									}
									HX_STACK_LINE(69)
									_this1->_cleaning = false;
									HX_STACK_LINE(69)
									bool tmp17 = (_this1->_clean_handlers != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(69)
									bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(69)
									if ((tmp17)){
										HX_STACK_LINE(69)
										int tmp19 = _this1->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(69)
										int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(69)
										tmp18 = (tmp20 > (int)0);
									}
									else{
										HX_STACK_LINE(69)
										tmp18 = false;
									}
									HX_STACK_LINE(69)
									if ((tmp18)){
										HX_STACK_LINE(69)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(69)
										cpp::ArrayBase _g11 = _this1->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(69)
										while((true)){
											HX_STACK_LINE(69)
											bool tmp19 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(69)
											bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(69)
											if ((tmp20)){
												HX_STACK_LINE(69)
												break;
											}
											HX_STACK_LINE(69)
											Dynamic tmp21 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(69)
											Dynamic _handler = tmp21;		HX_STACK_VAR(_handler,"_handler");
											HX_STACK_LINE(69)
											++(_g1);
											HX_STACK_LINE(69)
											bool tmp22 = (_handler != null());		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(69)
											if ((tmp22)){
												HX_STACK_LINE(69)
												::phoenix::Transform tmp23 = _this1;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(69)
												_handler(tmp23).Cast< Void >();
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(69)
						tmp8 = _this1->world;
					}
					HX_STACK_LINE(69)
					::phoenix::Spatial _this1 = tmp8;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(69)
					tmp7 = _this1->matrix;
				}
				HX_STACK_LINE(69)
				::phoenix::Matrix _m = tmp7;		HX_STACK_VAR(_m,"_m");
				HX_STACK_LINE(69)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(69)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(69)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(69)
				Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					Float tmp8 = e->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(69)
					Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(69)
					Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(69)
					Float tmp11 = e->__get((int)4);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(69)
					Float tmp12 = _y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(69)
					Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(69)
					Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(69)
					Float tmp15 = e->__get((int)8);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(69)
					Float tmp16 = _z;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(69)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(69)
					Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(69)
					Float tmp19 = e->__get((int)12);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(69)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(69)
					Float _x1 = tmp20;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(69)
					Float tmp21 = e->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(69)
					Float tmp22 = _x;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(69)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(69)
					Float tmp24 = e->__get((int)5);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(69)
					Float tmp25 = _y;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(69)
					Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(69)
					Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(69)
					Float tmp28 = e->__get((int)9);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(69)
					Float tmp29 = _z;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(69)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(69)
					Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(69)
					Float tmp32 = e->__get((int)13);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(69)
					Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(69)
					Float _y1 = tmp33;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(69)
					Float tmp34 = e->__get((int)2);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(69)
					Float tmp35 = _x;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(69)
					Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(69)
					Float tmp37 = e->__get((int)6);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(69)
					Float tmp38 = _y;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(69)
					Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(69)
					Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(69)
					Float tmp41 = e->__get((int)10);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(69)
					Float tmp42 = _z;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(69)
					Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(69)
					Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(69)
					Float tmp45 = e->__get((int)14);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(69)
					Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(69)
					Float _z1 = tmp46;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(69)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(69)
					_this->ignore_listeners = true;
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						_this->x = _x1;
						HX_STACK_LINE(69)
						bool tmp47 = _this->_construct;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(69)
						if ((tmp47)){
							HX_STACK_LINE(69)
							_this->x;
						}
						else{
							HX_STACK_LINE(69)
							bool tmp48 = (_this->listen_x != null());		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(69)
							bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(69)
							if ((tmp48)){
								HX_STACK_LINE(69)
								bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(69)
								bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(69)
								tmp49 = !(tmp51);
							}
							else{
								HX_STACK_LINE(69)
								tmp49 = false;
							}
							HX_STACK_LINE(69)
							if ((tmp49)){
								HX_STACK_LINE(69)
								Float tmp50 = _x1;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(69)
								_this->listen_x(tmp50);
							}
							HX_STACK_LINE(69)
							_this->x;
						}
					}
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						_this->y = _y1;
						HX_STACK_LINE(69)
						bool tmp47 = _this->_construct;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(69)
						if ((tmp47)){
							HX_STACK_LINE(69)
							_this->y;
						}
						else{
							HX_STACK_LINE(69)
							bool tmp48 = (_this->listen_y != null());		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(69)
							bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(69)
							if ((tmp48)){
								HX_STACK_LINE(69)
								bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(69)
								bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(69)
								tmp49 = !(tmp51);
							}
							else{
								HX_STACK_LINE(69)
								tmp49 = false;
							}
							HX_STACK_LINE(69)
							if ((tmp49)){
								HX_STACK_LINE(69)
								Float tmp50 = _y1;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(69)
								_this->listen_y(tmp50);
							}
							HX_STACK_LINE(69)
							_this->y;
						}
					}
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						_this->z = _z1;
						HX_STACK_LINE(69)
						bool tmp47 = _this->_construct;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(69)
						if ((tmp47)){
							HX_STACK_LINE(69)
							_this->z;
						}
						else{
							HX_STACK_LINE(69)
							bool tmp48 = (_this->listen_z != null());		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(69)
							bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(69)
							if ((tmp48)){
								HX_STACK_LINE(69)
								bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(69)
								bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(69)
								tmp49 = !(tmp51);
							}
							else{
								HX_STACK_LINE(69)
								tmp49 = false;
							}
							HX_STACK_LINE(69)
							if ((tmp49)){
								HX_STACK_LINE(69)
								Float tmp50 = _z1;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(69)
								_this->listen_z(tmp50);
							}
							HX_STACK_LINE(69)
							_this->z;
						}
					}
					HX_STACK_LINE(69)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(69)
					bool tmp47 = (_this->listen_x != null());		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(69)
					bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(69)
					if ((tmp47)){
						HX_STACK_LINE(69)
						bool tmp49 = _this->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(69)
						bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(69)
						tmp48 = !(tmp50);
					}
					else{
						HX_STACK_LINE(69)
						tmp48 = false;
					}
					HX_STACK_LINE(69)
					if ((tmp48)){
						HX_STACK_LINE(69)
						Float tmp49 = _this->x;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(69)
						_this->listen_x(tmp49);
					}
					HX_STACK_LINE(69)
					bool tmp49 = (_this->listen_y != null());		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(69)
					bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(69)
					if ((tmp49)){
						HX_STACK_LINE(69)
						bool tmp51 = _this->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(69)
						bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(69)
						tmp50 = !(tmp52);
					}
					else{
						HX_STACK_LINE(69)
						tmp50 = false;
					}
					HX_STACK_LINE(69)
					if ((tmp50)){
						HX_STACK_LINE(69)
						Float tmp51 = _this->y;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(69)
						_this->listen_y(tmp51);
					}
					HX_STACK_LINE(69)
					bool tmp51 = (_this->listen_z != null());		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(69)
					bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(69)
					if ((tmp51)){
						HX_STACK_LINE(69)
						bool tmp53 = _this->ignore_listeners;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(69)
						bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(69)
						tmp52 = !(tmp54);
					}
					else{
						HX_STACK_LINE(69)
						tmp52 = false;
					}
					HX_STACK_LINE(69)
					if ((tmp52)){
						HX_STACK_LINE(69)
						Float tmp53 = _this->z;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(69)
						_this->listen_z(tmp53);
					}
					HX_STACK_LINE(69)
					_this;
				}
				HX_STACK_LINE(69)
				tmp5 = _this;
			}
			HX_STACK_LINE(69)
			::phoenix::Vector _vert_i_pos = tmp5;		HX_STACK_VAR(_vert_i_pos,"_vert_i_pos");
			HX_STACK_LINE(70)
			::phoenix::Vector tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::phoenix::Vector tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(70)
				{
					HX_STACK_LINE(70)
					::phoenix::geometry::Vertex tmp8 = _geometry->vertices->__get(j).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(70)
					::phoenix::Vector _this = tmp8->pos;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(70)
					tmp7 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
				}
				HX_STACK_LINE(70)
				::phoenix::Vector _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(70)
				::phoenix::Matrix tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(70)
				{
					HX_STACK_LINE(70)
					::phoenix::Spatial tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						::phoenix::Transform _this1 = _geometry->transform;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(70)
						bool tmp10 = _this1->_destroying;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(70)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(70)
						if ((tmp11)){
							HX_STACK_LINE(70)
							bool tmp12 = (_this1->parent != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(70)
							if ((tmp12)){
								HX_STACK_LINE(70)
								bool tmp13 = _this1->parent->dirty;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(70)
								if ((tmp13)){
									HX_STACK_LINE(70)
									::phoenix::Transform _this2 = _this1->parent;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(70)
									bool tmp14 = _this2->dirty;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(70)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(70)
									if ((tmp15)){
										HX_STACK_LINE(70)
										Dynamic();
									}
									else{
										HX_STACK_LINE(70)
										_this2->_cleaning = true;
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											::phoenix::Matrix _this3 = _this2->_pos_matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(70)
												e[(int)0] = (int)1;
												HX_STACK_LINE(70)
												e[(int)4] = (int)0;
												HX_STACK_LINE(70)
												e[(int)8] = (int)0;
												HX_STACK_LINE(70)
												::phoenix::Vector tmp16 = _this2->local->pos;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(70)
												Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(70)
												e[(int)12] = tmp17;
												HX_STACK_LINE(70)
												e[(int)1] = (int)0;
												HX_STACK_LINE(70)
												e[(int)5] = (int)1;
												HX_STACK_LINE(70)
												e[(int)9] = (int)0;
												HX_STACK_LINE(70)
												::phoenix::Vector tmp18 = _this2->local->pos;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(70)
												Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(70)
												e[(int)13] = tmp19;
												HX_STACK_LINE(70)
												e[(int)2] = (int)0;
												HX_STACK_LINE(70)
												e[(int)6] = (int)0;
												HX_STACK_LINE(70)
												e[(int)10] = (int)1;
												HX_STACK_LINE(70)
												::phoenix::Vector tmp20 = _this2->local->pos;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(70)
												Float tmp21 = tmp20->z;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(70)
												e[(int)14] = tmp21;
												HX_STACK_LINE(70)
												e[(int)3] = (int)0;
												HX_STACK_LINE(70)
												e[(int)7] = (int)0;
												HX_STACK_LINE(70)
												e[(int)11] = (int)0;
												HX_STACK_LINE(70)
												e[(int)15] = (int)1;
												HX_STACK_LINE(70)
												_this3;
											}
											HX_STACK_LINE(70)
											_this3;
										}
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											::phoenix::Matrix _this3 = _this2->_rotation_matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(70)
											::phoenix::Quaternion tmp16 = _this2->local->rotation;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(70)
											::phoenix::Quaternion q = tmp16;		HX_STACK_VAR(q,"q");
											HX_STACK_LINE(70)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(70)
											Float tmp17 = (q->x + q->x);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(70)
											Float x2 = tmp17;		HX_STACK_VAR(x2,"x2");
											HX_STACK_LINE(70)
											Float tmp18 = (q->y + q->y);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(70)
											Float y2 = tmp18;		HX_STACK_VAR(y2,"y2");
											HX_STACK_LINE(70)
											Float tmp19 = (q->z + q->z);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(70)
											Float z2 = tmp19;		HX_STACK_VAR(z2,"z2");
											HX_STACK_LINE(70)
											Float tmp20 = (q->x * x2);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(70)
											Float xx = tmp20;		HX_STACK_VAR(xx,"xx");
											HX_STACK_LINE(70)
											Float tmp21 = (q->x * y2);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(70)
											Float xy = tmp21;		HX_STACK_VAR(xy,"xy");
											HX_STACK_LINE(70)
											Float tmp22 = (q->x * z2);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(70)
											Float xz = tmp22;		HX_STACK_VAR(xz,"xz");
											HX_STACK_LINE(70)
											Float tmp23 = (q->y * y2);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(70)
											Float yy = tmp23;		HX_STACK_VAR(yy,"yy");
											HX_STACK_LINE(70)
											Float tmp24 = (q->y * z2);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(70)
											Float yz = tmp24;		HX_STACK_VAR(yz,"yz");
											HX_STACK_LINE(70)
											Float tmp25 = (q->z * z2);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(70)
											Float zz = tmp25;		HX_STACK_VAR(zz,"zz");
											HX_STACK_LINE(70)
											Float tmp26 = (q->w * x2);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(70)
											Float wx = tmp26;		HX_STACK_VAR(wx,"wx");
											HX_STACK_LINE(70)
											Float tmp27 = (q->w * y2);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(70)
											Float wy = tmp27;		HX_STACK_VAR(wy,"wy");
											HX_STACK_LINE(70)
											Float tmp28 = (q->w * z2);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(70)
											Float wz = tmp28;		HX_STACK_VAR(wz,"wz");
											HX_STACK_LINE(70)
											Float tmp29 = (yy + zz);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(70)
											Float tmp30 = ((int)1 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(70)
											te[(int)0] = tmp30;
											HX_STACK_LINE(70)
											Float tmp31 = (xy - wz);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(70)
											te[(int)4] = tmp31;
											HX_STACK_LINE(70)
											Float tmp32 = (xz + wy);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(70)
											te[(int)8] = tmp32;
											HX_STACK_LINE(70)
											Float tmp33 = (xy + wz);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(70)
											te[(int)1] = tmp33;
											HX_STACK_LINE(70)
											Float tmp34 = (xx + zz);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(70)
											Float tmp35 = ((int)1 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(70)
											te[(int)5] = tmp35;
											HX_STACK_LINE(70)
											Float tmp36 = (yz - wx);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(70)
											te[(int)9] = tmp36;
											HX_STACK_LINE(70)
											Float tmp37 = (xz - wy);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(70)
											te[(int)2] = tmp37;
											HX_STACK_LINE(70)
											Float tmp38 = (yz + wx);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(70)
											te[(int)6] = tmp38;
											HX_STACK_LINE(70)
											Float tmp39 = (xx + yy);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(70)
											Float tmp40 = ((int)1 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(70)
											te[(int)10] = tmp40;
											HX_STACK_LINE(70)
											te[(int)3] = (int)0;
											HX_STACK_LINE(70)
											te[(int)7] = (int)0;
											HX_STACK_LINE(70)
											te[(int)11] = (int)0;
											HX_STACK_LINE(70)
											te[(int)12] = (int)0;
											HX_STACK_LINE(70)
											te[(int)13] = (int)0;
											HX_STACK_LINE(70)
											te[(int)14] = (int)0;
											HX_STACK_LINE(70)
											te[(int)15] = (int)1;
											HX_STACK_LINE(70)
											_this3;
										}
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											::phoenix::Matrix _this3 = _this2->_origin_undo_matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(70)
												e[(int)0] = (int)1;
												HX_STACK_LINE(70)
												e[(int)4] = (int)0;
												HX_STACK_LINE(70)
												e[(int)8] = (int)0;
												HX_STACK_LINE(70)
												Float tmp16 = _this2->origin->x;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(70)
												Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(70)
												e[(int)12] = tmp17;
												HX_STACK_LINE(70)
												e[(int)1] = (int)0;
												HX_STACK_LINE(70)
												e[(int)5] = (int)1;
												HX_STACK_LINE(70)
												e[(int)9] = (int)0;
												HX_STACK_LINE(70)
												Float tmp18 = _this2->origin->y;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(70)
												Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(70)
												e[(int)13] = tmp19;
												HX_STACK_LINE(70)
												e[(int)2] = (int)0;
												HX_STACK_LINE(70)
												e[(int)6] = (int)0;
												HX_STACK_LINE(70)
												e[(int)10] = (int)1;
												HX_STACK_LINE(70)
												Float tmp20 = _this2->origin->z;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(70)
												Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(70)
												e[(int)14] = tmp21;
												HX_STACK_LINE(70)
												e[(int)3] = (int)0;
												HX_STACK_LINE(70)
												e[(int)7] = (int)0;
												HX_STACK_LINE(70)
												e[(int)11] = (int)0;
												HX_STACK_LINE(70)
												e[(int)15] = (int)1;
												HX_STACK_LINE(70)
												_this3;
											}
											HX_STACK_LINE(70)
											_this3;
										}
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											::phoenix::Matrix tmp16 = _this2->local->matrix;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(70)
											::phoenix::Matrix _this3 = tmp16;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												Array< Float > e = _this3->elements;		HX_STACK_VAR(e,"e");
												HX_STACK_LINE(70)
												e[(int)0] = (int)1;
												HX_STACK_LINE(70)
												e[(int)4] = (int)0;
												HX_STACK_LINE(70)
												e[(int)8] = (int)0;
												HX_STACK_LINE(70)
												Float tmp17 = _this2->origin->x;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(70)
												e[(int)12] = tmp17;
												HX_STACK_LINE(70)
												e[(int)1] = (int)0;
												HX_STACK_LINE(70)
												e[(int)5] = (int)1;
												HX_STACK_LINE(70)
												e[(int)9] = (int)0;
												HX_STACK_LINE(70)
												Float tmp18 = _this2->origin->y;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(70)
												e[(int)13] = tmp18;
												HX_STACK_LINE(70)
												e[(int)2] = (int)0;
												HX_STACK_LINE(70)
												e[(int)6] = (int)0;
												HX_STACK_LINE(70)
												e[(int)10] = (int)1;
												HX_STACK_LINE(70)
												Float tmp19 = _this2->origin->z;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(70)
												e[(int)14] = tmp19;
												HX_STACK_LINE(70)
												e[(int)3] = (int)0;
												HX_STACK_LINE(70)
												e[(int)7] = (int)0;
												HX_STACK_LINE(70)
												e[(int)11] = (int)0;
												HX_STACK_LINE(70)
												e[(int)15] = (int)1;
												HX_STACK_LINE(70)
												_this3;
											}
											HX_STACK_LINE(70)
											_this3;
										}
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											::phoenix::Matrix tmp16 = _this2->local->matrix;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(70)
											::phoenix::Matrix _this3 = tmp16;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(70)
												Array< Float > be = _this2->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(70)
												Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(70)
												Float tmp17 = ae->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(70)
												Float a11 = tmp17;		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(70)
												Float tmp18 = ae->__get((int)4);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(70)
												Float a12 = tmp18;		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(70)
												Float tmp19 = ae->__get((int)8);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(70)
												Float a13 = tmp19;		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(70)
												Float tmp20 = ae->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(70)
												Float a14 = tmp20;		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(70)
												Float tmp21 = ae->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(70)
												Float a21 = tmp21;		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(70)
												Float tmp22 = ae->__get((int)5);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(70)
												Float a22 = tmp22;		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(70)
												Float tmp23 = ae->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(70)
												Float a23 = tmp23;		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(70)
												Float tmp24 = ae->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(70)
												Float a24 = tmp24;		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(70)
												Float tmp25 = ae->__get((int)2);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(70)
												Float a31 = tmp25;		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(70)
												Float tmp26 = ae->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(70)
												Float a32 = tmp26;		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(70)
												Float tmp27 = ae->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(70)
												Float a33 = tmp27;		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(70)
												Float tmp28 = ae->__get((int)14);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(70)
												Float a34 = tmp28;		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(70)
												Float tmp29 = ae->__get((int)3);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(70)
												Float a41 = tmp29;		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(70)
												Float tmp30 = ae->__get((int)7);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(70)
												Float a42 = tmp30;		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(70)
												Float tmp31 = ae->__get((int)11);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(70)
												Float a43 = tmp31;		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(70)
												Float tmp32 = ae->__get((int)15);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(70)
												Float a44 = tmp32;		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(70)
												Float tmp33 = be->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(70)
												Float b11 = tmp33;		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(70)
												Float tmp34 = be->__get((int)4);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(70)
												Float b12 = tmp34;		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(70)
												Float tmp35 = be->__get((int)8);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(70)
												Float b13 = tmp35;		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(70)
												Float tmp36 = be->__get((int)12);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(70)
												Float b14 = tmp36;		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(70)
												Float tmp37 = be->__get((int)1);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(70)
												Float b21 = tmp37;		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(70)
												Float tmp38 = be->__get((int)5);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(70)
												Float b22 = tmp38;		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(70)
												Float tmp39 = be->__get((int)9);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(70)
												Float b23 = tmp39;		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(70)
												Float tmp40 = be->__get((int)13);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(70)
												Float b24 = tmp40;		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(70)
												Float tmp41 = be->__get((int)2);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(70)
												Float b31 = tmp41;		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(70)
												Float tmp42 = be->__get((int)6);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(70)
												Float b32 = tmp42;		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(70)
												Float tmp43 = be->__get((int)10);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(70)
												Float b33 = tmp43;		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(70)
												Float tmp44 = be->__get((int)14);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(70)
												Float b34 = tmp44;		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(70)
												Float tmp45 = be->__get((int)3);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(70)
												Float b41 = tmp45;		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(70)
												Float tmp46 = be->__get((int)7);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(70)
												Float b42 = tmp46;		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(70)
												Float tmp47 = be->__get((int)11);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(70)
												Float b43 = tmp47;		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(70)
												Float tmp48 = be->__get((int)15);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(70)
												Float b44 = tmp48;		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(70)
												Float tmp49 = (a11 * b11);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(70)
												Float tmp50 = (a12 * b21);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(70)
												Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(70)
												Float tmp52 = (a13 * b31);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(70)
												Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(70)
												Float tmp54 = (a14 * b41);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(70)
												Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(70)
												te[(int)0] = tmp55;
												HX_STACK_LINE(70)
												Float tmp56 = (a11 * b12);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(70)
												Float tmp57 = (a12 * b22);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(70)
												Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(70)
												Float tmp59 = (a13 * b32);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(70)
												Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(70)
												Float tmp61 = (a14 * b42);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(70)
												Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(70)
												te[(int)4] = tmp62;
												HX_STACK_LINE(70)
												Float tmp63 = (a11 * b13);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(70)
												Float tmp64 = (a12 * b23);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(70)
												Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(70)
												Float tmp66 = (a13 * b33);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(70)
												Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(70)
												Float tmp68 = (a14 * b43);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(70)
												Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(70)
												te[(int)8] = tmp69;
												HX_STACK_LINE(70)
												Float tmp70 = (a11 * b14);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(70)
												Float tmp71 = (a12 * b24);		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(70)
												Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(70)
												Float tmp73 = (a13 * b34);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(70)
												Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(70)
												Float tmp75 = (a14 * b44);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(70)
												Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(70)
												te[(int)12] = tmp76;
												HX_STACK_LINE(70)
												Float tmp77 = (a21 * b11);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(70)
												Float tmp78 = (a22 * b21);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(70)
												Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(70)
												Float tmp80 = (a23 * b31);		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(70)
												Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(70)
												Float tmp82 = (a24 * b41);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(70)
												Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(70)
												te[(int)1] = tmp83;
												HX_STACK_LINE(70)
												Float tmp84 = (a21 * b12);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(70)
												Float tmp85 = (a22 * b22);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(70)
												Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(70)
												Float tmp87 = (a23 * b32);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(70)
												Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(70)
												Float tmp89 = (a24 * b42);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(70)
												Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(70)
												te[(int)5] = tmp90;
												HX_STACK_LINE(70)
												Float tmp91 = (a21 * b13);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(70)
												Float tmp92 = (a22 * b23);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(70)
												Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(70)
												Float tmp94 = (a23 * b33);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(70)
												Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(70)
												Float tmp96 = (a24 * b43);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(70)
												Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(70)
												te[(int)9] = tmp97;
												HX_STACK_LINE(70)
												Float tmp98 = (a21 * b14);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(70)
												Float tmp99 = (a22 * b24);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(70)
												Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(70)
												Float tmp101 = (a23 * b34);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(70)
												Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(70)
												Float tmp103 = (a24 * b44);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(70)
												Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(70)
												te[(int)13] = tmp104;
												HX_STACK_LINE(70)
												Float tmp105 = (a31 * b11);		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(70)
												Float tmp106 = (a32 * b21);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(70)
												Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(70)
												Float tmp108 = (a33 * b31);		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(70)
												Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(70)
												Float tmp110 = (a34 * b41);		HX_STACK_VAR(tmp110,"tmp110");
												HX_STACK_LINE(70)
												Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
												HX_STACK_LINE(70)
												te[(int)2] = tmp111;
												HX_STACK_LINE(70)
												Float tmp112 = (a31 * b12);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(70)
												Float tmp113 = (a32 * b22);		HX_STACK_VAR(tmp113,"tmp113");
												HX_STACK_LINE(70)
												Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
												HX_STACK_LINE(70)
												Float tmp115 = (a33 * b32);		HX_STACK_VAR(tmp115,"tmp115");
												HX_STACK_LINE(70)
												Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
												HX_STACK_LINE(70)
												Float tmp117 = (a34 * b42);		HX_STACK_VAR(tmp117,"tmp117");
												HX_STACK_LINE(70)
												Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
												HX_STACK_LINE(70)
												te[(int)6] = tmp118;
												HX_STACK_LINE(70)
												Float tmp119 = (a31 * b13);		HX_STACK_VAR(tmp119,"tmp119");
												HX_STACK_LINE(70)
												Float tmp120 = (a32 * b23);		HX_STACK_VAR(tmp120,"tmp120");
												HX_STACK_LINE(70)
												Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
												HX_STACK_LINE(70)
												Float tmp122 = (a33 * b33);		HX_STACK_VAR(tmp122,"tmp122");
												HX_STACK_LINE(70)
												Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
												HX_STACK_LINE(70)
												Float tmp124 = (a34 * b43);		HX_STACK_VAR(tmp124,"tmp124");
												HX_STACK_LINE(70)
												Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
												HX_STACK_LINE(70)
												te[(int)10] = tmp125;
												HX_STACK_LINE(70)
												Float tmp126 = (a31 * b14);		HX_STACK_VAR(tmp126,"tmp126");
												HX_STACK_LINE(70)
												Float tmp127 = (a32 * b24);		HX_STACK_VAR(tmp127,"tmp127");
												HX_STACK_LINE(70)
												Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
												HX_STACK_LINE(70)
												Float tmp129 = (a33 * b34);		HX_STACK_VAR(tmp129,"tmp129");
												HX_STACK_LINE(70)
												Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
												HX_STACK_LINE(70)
												Float tmp131 = (a34 * b44);		HX_STACK_VAR(tmp131,"tmp131");
												HX_STACK_LINE(70)
												Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
												HX_STACK_LINE(70)
												te[(int)14] = tmp132;
												HX_STACK_LINE(70)
												Float tmp133 = (a41 * b11);		HX_STACK_VAR(tmp133,"tmp133");
												HX_STACK_LINE(70)
												Float tmp134 = (a42 * b21);		HX_STACK_VAR(tmp134,"tmp134");
												HX_STACK_LINE(70)
												Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
												HX_STACK_LINE(70)
												Float tmp136 = (a43 * b31);		HX_STACK_VAR(tmp136,"tmp136");
												HX_STACK_LINE(70)
												Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
												HX_STACK_LINE(70)
												Float tmp138 = (a44 * b41);		HX_STACK_VAR(tmp138,"tmp138");
												HX_STACK_LINE(70)
												Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
												HX_STACK_LINE(70)
												te[(int)3] = tmp139;
												HX_STACK_LINE(70)
												Float tmp140 = (a41 * b12);		HX_STACK_VAR(tmp140,"tmp140");
												HX_STACK_LINE(70)
												Float tmp141 = (a42 * b22);		HX_STACK_VAR(tmp141,"tmp141");
												HX_STACK_LINE(70)
												Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
												HX_STACK_LINE(70)
												Float tmp143 = (a43 * b32);		HX_STACK_VAR(tmp143,"tmp143");
												HX_STACK_LINE(70)
												Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
												HX_STACK_LINE(70)
												Float tmp145 = (a44 * b42);		HX_STACK_VAR(tmp145,"tmp145");
												HX_STACK_LINE(70)
												Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
												HX_STACK_LINE(70)
												te[(int)7] = tmp146;
												HX_STACK_LINE(70)
												Float tmp147 = (a41 * b13);		HX_STACK_VAR(tmp147,"tmp147");
												HX_STACK_LINE(70)
												Float tmp148 = (a42 * b23);		HX_STACK_VAR(tmp148,"tmp148");
												HX_STACK_LINE(70)
												Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
												HX_STACK_LINE(70)
												Float tmp150 = (a43 * b33);		HX_STACK_VAR(tmp150,"tmp150");
												HX_STACK_LINE(70)
												Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
												HX_STACK_LINE(70)
												Float tmp152 = (a44 * b43);		HX_STACK_VAR(tmp152,"tmp152");
												HX_STACK_LINE(70)
												Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
												HX_STACK_LINE(70)
												te[(int)11] = tmp153;
												HX_STACK_LINE(70)
												Float tmp154 = (a41 * b14);		HX_STACK_VAR(tmp154,"tmp154");
												HX_STACK_LINE(70)
												Float tmp155 = (a42 * b24);		HX_STACK_VAR(tmp155,"tmp155");
												HX_STACK_LINE(70)
												Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
												HX_STACK_LINE(70)
												Float tmp157 = (a43 * b34);		HX_STACK_VAR(tmp157,"tmp157");
												HX_STACK_LINE(70)
												Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
												HX_STACK_LINE(70)
												Float tmp159 = (a44 * b44);		HX_STACK_VAR(tmp159,"tmp159");
												HX_STACK_LINE(70)
												Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
												HX_STACK_LINE(70)
												te[(int)15] = tmp160;
												HX_STACK_LINE(70)
												_this3;
											}
										}
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											::phoenix::Matrix tmp16 = _this2->local->matrix;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(70)
											::phoenix::Matrix _this3 = tmp16;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(70)
											::phoenix::Vector tmp17 = _this2->local->scale;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(70)
											::phoenix::Vector _v = tmp17;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(70)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(70)
											Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
											HX_STACK_LINE(70)
											Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
											HX_STACK_LINE(70)
											Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
											HX_STACK_LINE(70)
											Float tmp18 = _x;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(70)
											hx::MultEq(te[(int)0],tmp18);
											HX_STACK_LINE(70)
											Float tmp19 = _y;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(70)
											hx::MultEq(te[(int)4],tmp19);
											HX_STACK_LINE(70)
											Float tmp20 = _z;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(70)
											hx::MultEq(te[(int)8],tmp20);
											HX_STACK_LINE(70)
											Float tmp21 = _x;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(70)
											hx::MultEq(te[(int)1],tmp21);
											HX_STACK_LINE(70)
											Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(70)
											hx::MultEq(te[(int)5],tmp22);
											HX_STACK_LINE(70)
											Float tmp23 = _z;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(70)
											hx::MultEq(te[(int)9],tmp23);
											HX_STACK_LINE(70)
											Float tmp24 = _x;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(70)
											hx::MultEq(te[(int)2],tmp24);
											HX_STACK_LINE(70)
											Float tmp25 = _y;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(70)
											hx::MultEq(te[(int)6],tmp25);
											HX_STACK_LINE(70)
											Float tmp26 = _z;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(70)
											hx::MultEq(te[(int)10],tmp26);
											HX_STACK_LINE(70)
											Float tmp27 = _x;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(70)
											hx::MultEq(te[(int)3],tmp27);
											HX_STACK_LINE(70)
											Float tmp28 = _y;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(70)
											hx::MultEq(te[(int)7],tmp28);
											HX_STACK_LINE(70)
											Float tmp29 = _z;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(70)
											hx::MultEq(te[(int)11],tmp29);
											HX_STACK_LINE(70)
											_this3;
										}
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											::phoenix::Matrix tmp16 = _this2->local->matrix;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(70)
											::phoenix::Matrix _this3 = tmp16;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(70)
											::phoenix::Vector tmp17 = _this2->local->pos;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(70)
											::phoenix::Vector _v = tmp17;		HX_STACK_VAR(_v,"_v");
											HX_STACK_LINE(70)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(70)
											Float tmp18 = _v->x;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(70)
											te[(int)12] = tmp18;
											HX_STACK_LINE(70)
											Float tmp19 = _v->y;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(70)
											te[(int)13] = tmp19;
											HX_STACK_LINE(70)
											Float tmp20 = _v->z;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(70)
											te[(int)14] = tmp20;
											HX_STACK_LINE(70)
											_this3;
										}
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											::phoenix::Matrix tmp16 = _this2->local->matrix;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(70)
											::phoenix::Matrix _this3 = tmp16;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												Array< Float > ae = _this3->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(70)
												Array< Float > be = _this2->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(70)
												Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(70)
												Float tmp17 = ae->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(70)
												Float a11 = tmp17;		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(70)
												Float tmp18 = ae->__get((int)4);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(70)
												Float a12 = tmp18;		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(70)
												Float tmp19 = ae->__get((int)8);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(70)
												Float a13 = tmp19;		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(70)
												Float tmp20 = ae->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(70)
												Float a14 = tmp20;		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(70)
												Float tmp21 = ae->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(70)
												Float a21 = tmp21;		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(70)
												Float tmp22 = ae->__get((int)5);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(70)
												Float a22 = tmp22;		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(70)
												Float tmp23 = ae->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(70)
												Float a23 = tmp23;		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(70)
												Float tmp24 = ae->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(70)
												Float a24 = tmp24;		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(70)
												Float tmp25 = ae->__get((int)2);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(70)
												Float a31 = tmp25;		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(70)
												Float tmp26 = ae->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(70)
												Float a32 = tmp26;		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(70)
												Float tmp27 = ae->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(70)
												Float a33 = tmp27;		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(70)
												Float tmp28 = ae->__get((int)14);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(70)
												Float a34 = tmp28;		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(70)
												Float tmp29 = ae->__get((int)3);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(70)
												Float a41 = tmp29;		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(70)
												Float tmp30 = ae->__get((int)7);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(70)
												Float a42 = tmp30;		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(70)
												Float tmp31 = ae->__get((int)11);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(70)
												Float a43 = tmp31;		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(70)
												Float tmp32 = ae->__get((int)15);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(70)
												Float a44 = tmp32;		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(70)
												Float tmp33 = be->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(70)
												Float b11 = tmp33;		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(70)
												Float tmp34 = be->__get((int)4);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(70)
												Float b12 = tmp34;		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(70)
												Float tmp35 = be->__get((int)8);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(70)
												Float b13 = tmp35;		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(70)
												Float tmp36 = be->__get((int)12);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(70)
												Float b14 = tmp36;		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(70)
												Float tmp37 = be->__get((int)1);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(70)
												Float b21 = tmp37;		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(70)
												Float tmp38 = be->__get((int)5);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(70)
												Float b22 = tmp38;		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(70)
												Float tmp39 = be->__get((int)9);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(70)
												Float b23 = tmp39;		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(70)
												Float tmp40 = be->__get((int)13);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(70)
												Float b24 = tmp40;		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(70)
												Float tmp41 = be->__get((int)2);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(70)
												Float b31 = tmp41;		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(70)
												Float tmp42 = be->__get((int)6);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(70)
												Float b32 = tmp42;		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(70)
												Float tmp43 = be->__get((int)10);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(70)
												Float b33 = tmp43;		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(70)
												Float tmp44 = be->__get((int)14);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(70)
												Float b34 = tmp44;		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(70)
												Float tmp45 = be->__get((int)3);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(70)
												Float b41 = tmp45;		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(70)
												Float tmp46 = be->__get((int)7);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(70)
												Float b42 = tmp46;		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(70)
												Float tmp47 = be->__get((int)11);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(70)
												Float b43 = tmp47;		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(70)
												Float tmp48 = be->__get((int)15);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(70)
												Float b44 = tmp48;		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(70)
												Float tmp49 = (a11 * b11);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(70)
												Float tmp50 = (a12 * b21);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(70)
												Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(70)
												Float tmp52 = (a13 * b31);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(70)
												Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(70)
												Float tmp54 = (a14 * b41);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(70)
												Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(70)
												te[(int)0] = tmp55;
												HX_STACK_LINE(70)
												Float tmp56 = (a11 * b12);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(70)
												Float tmp57 = (a12 * b22);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(70)
												Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(70)
												Float tmp59 = (a13 * b32);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(70)
												Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(70)
												Float tmp61 = (a14 * b42);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(70)
												Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(70)
												te[(int)4] = tmp62;
												HX_STACK_LINE(70)
												Float tmp63 = (a11 * b13);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(70)
												Float tmp64 = (a12 * b23);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(70)
												Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(70)
												Float tmp66 = (a13 * b33);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(70)
												Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(70)
												Float tmp68 = (a14 * b43);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(70)
												Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(70)
												te[(int)8] = tmp69;
												HX_STACK_LINE(70)
												Float tmp70 = (a11 * b14);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(70)
												Float tmp71 = (a12 * b24);		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(70)
												Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(70)
												Float tmp73 = (a13 * b34);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(70)
												Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(70)
												Float tmp75 = (a14 * b44);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(70)
												Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(70)
												te[(int)12] = tmp76;
												HX_STACK_LINE(70)
												Float tmp77 = (a21 * b11);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(70)
												Float tmp78 = (a22 * b21);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(70)
												Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(70)
												Float tmp80 = (a23 * b31);		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(70)
												Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(70)
												Float tmp82 = (a24 * b41);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(70)
												Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(70)
												te[(int)1] = tmp83;
												HX_STACK_LINE(70)
												Float tmp84 = (a21 * b12);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(70)
												Float tmp85 = (a22 * b22);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(70)
												Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(70)
												Float tmp87 = (a23 * b32);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(70)
												Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(70)
												Float tmp89 = (a24 * b42);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(70)
												Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(70)
												te[(int)5] = tmp90;
												HX_STACK_LINE(70)
												Float tmp91 = (a21 * b13);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(70)
												Float tmp92 = (a22 * b23);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(70)
												Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(70)
												Float tmp94 = (a23 * b33);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(70)
												Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(70)
												Float tmp96 = (a24 * b43);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(70)
												Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(70)
												te[(int)9] = tmp97;
												HX_STACK_LINE(70)
												Float tmp98 = (a21 * b14);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(70)
												Float tmp99 = (a22 * b24);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(70)
												Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(70)
												Float tmp101 = (a23 * b34);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(70)
												Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(70)
												Float tmp103 = (a24 * b44);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(70)
												Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(70)
												te[(int)13] = tmp104;
												HX_STACK_LINE(70)
												Float tmp105 = (a31 * b11);		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(70)
												Float tmp106 = (a32 * b21);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(70)
												Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(70)
												Float tmp108 = (a33 * b31);		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(70)
												Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(70)
												Float tmp110 = (a34 * b41);		HX_STACK_VAR(tmp110,"tmp110");
												HX_STACK_LINE(70)
												Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
												HX_STACK_LINE(70)
												te[(int)2] = tmp111;
												HX_STACK_LINE(70)
												Float tmp112 = (a31 * b12);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(70)
												Float tmp113 = (a32 * b22);		HX_STACK_VAR(tmp113,"tmp113");
												HX_STACK_LINE(70)
												Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
												HX_STACK_LINE(70)
												Float tmp115 = (a33 * b32);		HX_STACK_VAR(tmp115,"tmp115");
												HX_STACK_LINE(70)
												Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
												HX_STACK_LINE(70)
												Float tmp117 = (a34 * b42);		HX_STACK_VAR(tmp117,"tmp117");
												HX_STACK_LINE(70)
												Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
												HX_STACK_LINE(70)
												te[(int)6] = tmp118;
												HX_STACK_LINE(70)
												Float tmp119 = (a31 * b13);		HX_STACK_VAR(tmp119,"tmp119");
												HX_STACK_LINE(70)
												Float tmp120 = (a32 * b23);		HX_STACK_VAR(tmp120,"tmp120");
												HX_STACK_LINE(70)
												Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
												HX_STACK_LINE(70)
												Float tmp122 = (a33 * b33);		HX_STACK_VAR(tmp122,"tmp122");
												HX_STACK_LINE(70)
												Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
												HX_STACK_LINE(70)
												Float tmp124 = (a34 * b43);		HX_STACK_VAR(tmp124,"tmp124");
												HX_STACK_LINE(70)
												Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
												HX_STACK_LINE(70)
												te[(int)10] = tmp125;
												HX_STACK_LINE(70)
												Float tmp126 = (a31 * b14);		HX_STACK_VAR(tmp126,"tmp126");
												HX_STACK_LINE(70)
												Float tmp127 = (a32 * b24);		HX_STACK_VAR(tmp127,"tmp127");
												HX_STACK_LINE(70)
												Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
												HX_STACK_LINE(70)
												Float tmp129 = (a33 * b34);		HX_STACK_VAR(tmp129,"tmp129");
												HX_STACK_LINE(70)
												Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
												HX_STACK_LINE(70)
												Float tmp131 = (a34 * b44);		HX_STACK_VAR(tmp131,"tmp131");
												HX_STACK_LINE(70)
												Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
												HX_STACK_LINE(70)
												te[(int)14] = tmp132;
												HX_STACK_LINE(70)
												Float tmp133 = (a41 * b11);		HX_STACK_VAR(tmp133,"tmp133");
												HX_STACK_LINE(70)
												Float tmp134 = (a42 * b21);		HX_STACK_VAR(tmp134,"tmp134");
												HX_STACK_LINE(70)
												Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
												HX_STACK_LINE(70)
												Float tmp136 = (a43 * b31);		HX_STACK_VAR(tmp136,"tmp136");
												HX_STACK_LINE(70)
												Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
												HX_STACK_LINE(70)
												Float tmp138 = (a44 * b41);		HX_STACK_VAR(tmp138,"tmp138");
												HX_STACK_LINE(70)
												Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
												HX_STACK_LINE(70)
												te[(int)3] = tmp139;
												HX_STACK_LINE(70)
												Float tmp140 = (a41 * b12);		HX_STACK_VAR(tmp140,"tmp140");
												HX_STACK_LINE(70)
												Float tmp141 = (a42 * b22);		HX_STACK_VAR(tmp141,"tmp141");
												HX_STACK_LINE(70)
												Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
												HX_STACK_LINE(70)
												Float tmp143 = (a43 * b32);		HX_STACK_VAR(tmp143,"tmp143");
												HX_STACK_LINE(70)
												Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
												HX_STACK_LINE(70)
												Float tmp145 = (a44 * b42);		HX_STACK_VAR(tmp145,"tmp145");
												HX_STACK_LINE(70)
												Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
												HX_STACK_LINE(70)
												te[(int)7] = tmp146;
												HX_STACK_LINE(70)
												Float tmp147 = (a41 * b13);		HX_STACK_VAR(tmp147,"tmp147");
												HX_STACK_LINE(70)
												Float tmp148 = (a42 * b23);		HX_STACK_VAR(tmp148,"tmp148");
												HX_STACK_LINE(70)
												Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
												HX_STACK_LINE(70)
												Float tmp150 = (a43 * b33);		HX_STACK_VAR(tmp150,"tmp150");
												HX_STACK_LINE(70)
												Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
												HX_STACK_LINE(70)
												Float tmp152 = (a44 * b43);		HX_STACK_VAR(tmp152,"tmp152");
												HX_STACK_LINE(70)
												Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
												HX_STACK_LINE(70)
												te[(int)11] = tmp153;
												HX_STACK_LINE(70)
												Float tmp154 = (a41 * b14);		HX_STACK_VAR(tmp154,"tmp154");
												HX_STACK_LINE(70)
												Float tmp155 = (a42 * b24);		HX_STACK_VAR(tmp155,"tmp155");
												HX_STACK_LINE(70)
												Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
												HX_STACK_LINE(70)
												Float tmp157 = (a43 * b34);		HX_STACK_VAR(tmp157,"tmp157");
												HX_STACK_LINE(70)
												Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
												HX_STACK_LINE(70)
												Float tmp159 = (a44 * b44);		HX_STACK_VAR(tmp159,"tmp159");
												HX_STACK_LINE(70)
												Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
												HX_STACK_LINE(70)
												te[(int)15] = tmp160;
												HX_STACK_LINE(70)
												_this3;
											}
										}
										HX_STACK_LINE(70)
										bool tmp16 = (_this2->parent != null());		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(70)
										if ((tmp16)){
											HX_STACK_LINE(70)
											::phoenix::Spatial tmp17 = _this2->get_world();		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(70)
											::phoenix::Spatial _this3 = tmp17;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(70)
											::phoenix::Matrix tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												::phoenix::Matrix tmp19;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													::phoenix::Spatial tmp20 = _this2->get_world();		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(70)
													::phoenix::Spatial _this4 = tmp20;		HX_STACK_VAR(_this4,"_this4");
													HX_STACK_LINE(70)
													tmp19 = _this4->matrix;
												}
												HX_STACK_LINE(70)
												::phoenix::Matrix _this4 = tmp19;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(70)
												::phoenix::Matrix tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													::phoenix::Spatial tmp21 = _this2->parent->get_world();		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(70)
													::phoenix::Spatial _this5 = tmp21;		HX_STACK_VAR(_this5,"_this5");
													HX_STACK_LINE(70)
													tmp20 = _this5->matrix;
												}
												HX_STACK_LINE(70)
												::phoenix::Matrix _a = tmp20;		HX_STACK_VAR(_a,"_a");
												HX_STACK_LINE(70)
												Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
												HX_STACK_LINE(70)
												::phoenix::Matrix tmp21 = _this2->local->matrix;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(70)
												Array< Float > be = tmp21->elements;		HX_STACK_VAR(be,"be");
												HX_STACK_LINE(70)
												Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(70)
												Float tmp22 = ae->__get((int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(70)
												Float a11 = tmp22;		HX_STACK_VAR(a11,"a11");
												HX_STACK_LINE(70)
												Float tmp23 = ae->__get((int)4);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(70)
												Float a12 = tmp23;		HX_STACK_VAR(a12,"a12");
												HX_STACK_LINE(70)
												Float tmp24 = ae->__get((int)8);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(70)
												Float a13 = tmp24;		HX_STACK_VAR(a13,"a13");
												HX_STACK_LINE(70)
												Float tmp25 = ae->__get((int)12);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(70)
												Float a14 = tmp25;		HX_STACK_VAR(a14,"a14");
												HX_STACK_LINE(70)
												Float tmp26 = ae->__get((int)1);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(70)
												Float a21 = tmp26;		HX_STACK_VAR(a21,"a21");
												HX_STACK_LINE(70)
												Float tmp27 = ae->__get((int)5);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(70)
												Float a22 = tmp27;		HX_STACK_VAR(a22,"a22");
												HX_STACK_LINE(70)
												Float tmp28 = ae->__get((int)9);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(70)
												Float a23 = tmp28;		HX_STACK_VAR(a23,"a23");
												HX_STACK_LINE(70)
												Float tmp29 = ae->__get((int)13);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(70)
												Float a24 = tmp29;		HX_STACK_VAR(a24,"a24");
												HX_STACK_LINE(70)
												Float tmp30 = ae->__get((int)2);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(70)
												Float a31 = tmp30;		HX_STACK_VAR(a31,"a31");
												HX_STACK_LINE(70)
												Float tmp31 = ae->__get((int)6);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(70)
												Float a32 = tmp31;		HX_STACK_VAR(a32,"a32");
												HX_STACK_LINE(70)
												Float tmp32 = ae->__get((int)10);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(70)
												Float a33 = tmp32;		HX_STACK_VAR(a33,"a33");
												HX_STACK_LINE(70)
												Float tmp33 = ae->__get((int)14);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(70)
												Float a34 = tmp33;		HX_STACK_VAR(a34,"a34");
												HX_STACK_LINE(70)
												Float tmp34 = ae->__get((int)3);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(70)
												Float a41 = tmp34;		HX_STACK_VAR(a41,"a41");
												HX_STACK_LINE(70)
												Float tmp35 = ae->__get((int)7);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(70)
												Float a42 = tmp35;		HX_STACK_VAR(a42,"a42");
												HX_STACK_LINE(70)
												Float tmp36 = ae->__get((int)11);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(70)
												Float a43 = tmp36;		HX_STACK_VAR(a43,"a43");
												HX_STACK_LINE(70)
												Float tmp37 = ae->__get((int)15);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(70)
												Float a44 = tmp37;		HX_STACK_VAR(a44,"a44");
												HX_STACK_LINE(70)
												Float tmp38 = be->__get((int)0);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(70)
												Float b11 = tmp38;		HX_STACK_VAR(b11,"b11");
												HX_STACK_LINE(70)
												Float tmp39 = be->__get((int)4);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(70)
												Float b12 = tmp39;		HX_STACK_VAR(b12,"b12");
												HX_STACK_LINE(70)
												Float tmp40 = be->__get((int)8);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(70)
												Float b13 = tmp40;		HX_STACK_VAR(b13,"b13");
												HX_STACK_LINE(70)
												Float tmp41 = be->__get((int)12);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(70)
												Float b14 = tmp41;		HX_STACK_VAR(b14,"b14");
												HX_STACK_LINE(70)
												Float tmp42 = be->__get((int)1);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(70)
												Float b21 = tmp42;		HX_STACK_VAR(b21,"b21");
												HX_STACK_LINE(70)
												Float tmp43 = be->__get((int)5);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(70)
												Float b22 = tmp43;		HX_STACK_VAR(b22,"b22");
												HX_STACK_LINE(70)
												Float tmp44 = be->__get((int)9);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(70)
												Float b23 = tmp44;		HX_STACK_VAR(b23,"b23");
												HX_STACK_LINE(70)
												Float tmp45 = be->__get((int)13);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(70)
												Float b24 = tmp45;		HX_STACK_VAR(b24,"b24");
												HX_STACK_LINE(70)
												Float tmp46 = be->__get((int)2);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(70)
												Float b31 = tmp46;		HX_STACK_VAR(b31,"b31");
												HX_STACK_LINE(70)
												Float tmp47 = be->__get((int)6);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(70)
												Float b32 = tmp47;		HX_STACK_VAR(b32,"b32");
												HX_STACK_LINE(70)
												Float tmp48 = be->__get((int)10);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(70)
												Float b33 = tmp48;		HX_STACK_VAR(b33,"b33");
												HX_STACK_LINE(70)
												Float tmp49 = be->__get((int)14);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(70)
												Float b34 = tmp49;		HX_STACK_VAR(b34,"b34");
												HX_STACK_LINE(70)
												Float tmp50 = be->__get((int)3);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(70)
												Float b41 = tmp50;		HX_STACK_VAR(b41,"b41");
												HX_STACK_LINE(70)
												Float tmp51 = be->__get((int)7);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(70)
												Float b42 = tmp51;		HX_STACK_VAR(b42,"b42");
												HX_STACK_LINE(70)
												Float tmp52 = be->__get((int)11);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(70)
												Float b43 = tmp52;		HX_STACK_VAR(b43,"b43");
												HX_STACK_LINE(70)
												Float tmp53 = be->__get((int)15);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(70)
												Float b44 = tmp53;		HX_STACK_VAR(b44,"b44");
												HX_STACK_LINE(70)
												Float tmp54 = (a11 * b11);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(70)
												Float tmp55 = (a12 * b21);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(70)
												Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(70)
												Float tmp57 = (a13 * b31);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(70)
												Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(70)
												Float tmp59 = (a14 * b41);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(70)
												Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(70)
												te[(int)0] = tmp60;
												HX_STACK_LINE(70)
												Float tmp61 = (a11 * b12);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(70)
												Float tmp62 = (a12 * b22);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(70)
												Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(70)
												Float tmp64 = (a13 * b32);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(70)
												Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(70)
												Float tmp66 = (a14 * b42);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(70)
												Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(70)
												te[(int)4] = tmp67;
												HX_STACK_LINE(70)
												Float tmp68 = (a11 * b13);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(70)
												Float tmp69 = (a12 * b23);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(70)
												Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(70)
												Float tmp71 = (a13 * b33);		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(70)
												Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(70)
												Float tmp73 = (a14 * b43);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(70)
												Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(70)
												te[(int)8] = tmp74;
												HX_STACK_LINE(70)
												Float tmp75 = (a11 * b14);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(70)
												Float tmp76 = (a12 * b24);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(70)
												Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(70)
												Float tmp78 = (a13 * b34);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(70)
												Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(70)
												Float tmp80 = (a14 * b44);		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(70)
												Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(70)
												te[(int)12] = tmp81;
												HX_STACK_LINE(70)
												Float tmp82 = (a21 * b11);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(70)
												Float tmp83 = (a22 * b21);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(70)
												Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(70)
												Float tmp85 = (a23 * b31);		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(70)
												Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(70)
												Float tmp87 = (a24 * b41);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(70)
												Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(70)
												te[(int)1] = tmp88;
												HX_STACK_LINE(70)
												Float tmp89 = (a21 * b12);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(70)
												Float tmp90 = (a22 * b22);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(70)
												Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(70)
												Float tmp92 = (a23 * b32);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(70)
												Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(70)
												Float tmp94 = (a24 * b42);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(70)
												Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(70)
												te[(int)5] = tmp95;
												HX_STACK_LINE(70)
												Float tmp96 = (a21 * b13);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(70)
												Float tmp97 = (a22 * b23);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(70)
												Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(70)
												Float tmp99 = (a23 * b33);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(70)
												Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(70)
												Float tmp101 = (a24 * b43);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(70)
												Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(70)
												te[(int)9] = tmp102;
												HX_STACK_LINE(70)
												Float tmp103 = (a21 * b14);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(70)
												Float tmp104 = (a22 * b24);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(70)
												Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(70)
												Float tmp106 = (a23 * b34);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(70)
												Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(70)
												Float tmp108 = (a24 * b44);		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(70)
												Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(70)
												te[(int)13] = tmp109;
												HX_STACK_LINE(70)
												Float tmp110 = (a31 * b11);		HX_STACK_VAR(tmp110,"tmp110");
												HX_STACK_LINE(70)
												Float tmp111 = (a32 * b21);		HX_STACK_VAR(tmp111,"tmp111");
												HX_STACK_LINE(70)
												Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(70)
												Float tmp113 = (a33 * b31);		HX_STACK_VAR(tmp113,"tmp113");
												HX_STACK_LINE(70)
												Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
												HX_STACK_LINE(70)
												Float tmp115 = (a34 * b41);		HX_STACK_VAR(tmp115,"tmp115");
												HX_STACK_LINE(70)
												Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
												HX_STACK_LINE(70)
												te[(int)2] = tmp116;
												HX_STACK_LINE(70)
												Float tmp117 = (a31 * b12);		HX_STACK_VAR(tmp117,"tmp117");
												HX_STACK_LINE(70)
												Float tmp118 = (a32 * b22);		HX_STACK_VAR(tmp118,"tmp118");
												HX_STACK_LINE(70)
												Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
												HX_STACK_LINE(70)
												Float tmp120 = (a33 * b32);		HX_STACK_VAR(tmp120,"tmp120");
												HX_STACK_LINE(70)
												Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
												HX_STACK_LINE(70)
												Float tmp122 = (a34 * b42);		HX_STACK_VAR(tmp122,"tmp122");
												HX_STACK_LINE(70)
												Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
												HX_STACK_LINE(70)
												te[(int)6] = tmp123;
												HX_STACK_LINE(70)
												Float tmp124 = (a31 * b13);		HX_STACK_VAR(tmp124,"tmp124");
												HX_STACK_LINE(70)
												Float tmp125 = (a32 * b23);		HX_STACK_VAR(tmp125,"tmp125");
												HX_STACK_LINE(70)
												Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
												HX_STACK_LINE(70)
												Float tmp127 = (a33 * b33);		HX_STACK_VAR(tmp127,"tmp127");
												HX_STACK_LINE(70)
												Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
												HX_STACK_LINE(70)
												Float tmp129 = (a34 * b43);		HX_STACK_VAR(tmp129,"tmp129");
												HX_STACK_LINE(70)
												Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
												HX_STACK_LINE(70)
												te[(int)10] = tmp130;
												HX_STACK_LINE(70)
												Float tmp131 = (a31 * b14);		HX_STACK_VAR(tmp131,"tmp131");
												HX_STACK_LINE(70)
												Float tmp132 = (a32 * b24);		HX_STACK_VAR(tmp132,"tmp132");
												HX_STACK_LINE(70)
												Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
												HX_STACK_LINE(70)
												Float tmp134 = (a33 * b34);		HX_STACK_VAR(tmp134,"tmp134");
												HX_STACK_LINE(70)
												Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
												HX_STACK_LINE(70)
												Float tmp136 = (a34 * b44);		HX_STACK_VAR(tmp136,"tmp136");
												HX_STACK_LINE(70)
												Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
												HX_STACK_LINE(70)
												te[(int)14] = tmp137;
												HX_STACK_LINE(70)
												Float tmp138 = (a41 * b11);		HX_STACK_VAR(tmp138,"tmp138");
												HX_STACK_LINE(70)
												Float tmp139 = (a42 * b21);		HX_STACK_VAR(tmp139,"tmp139");
												HX_STACK_LINE(70)
												Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
												HX_STACK_LINE(70)
												Float tmp141 = (a43 * b31);		HX_STACK_VAR(tmp141,"tmp141");
												HX_STACK_LINE(70)
												Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
												HX_STACK_LINE(70)
												Float tmp143 = (a44 * b41);		HX_STACK_VAR(tmp143,"tmp143");
												HX_STACK_LINE(70)
												Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
												HX_STACK_LINE(70)
												te[(int)3] = tmp144;
												HX_STACK_LINE(70)
												Float tmp145 = (a41 * b12);		HX_STACK_VAR(tmp145,"tmp145");
												HX_STACK_LINE(70)
												Float tmp146 = (a42 * b22);		HX_STACK_VAR(tmp146,"tmp146");
												HX_STACK_LINE(70)
												Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
												HX_STACK_LINE(70)
												Float tmp148 = (a43 * b32);		HX_STACK_VAR(tmp148,"tmp148");
												HX_STACK_LINE(70)
												Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
												HX_STACK_LINE(70)
												Float tmp150 = (a44 * b42);		HX_STACK_VAR(tmp150,"tmp150");
												HX_STACK_LINE(70)
												Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
												HX_STACK_LINE(70)
												te[(int)7] = tmp151;
												HX_STACK_LINE(70)
												Float tmp152 = (a41 * b13);		HX_STACK_VAR(tmp152,"tmp152");
												HX_STACK_LINE(70)
												Float tmp153 = (a42 * b23);		HX_STACK_VAR(tmp153,"tmp153");
												HX_STACK_LINE(70)
												Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
												HX_STACK_LINE(70)
												Float tmp155 = (a43 * b33);		HX_STACK_VAR(tmp155,"tmp155");
												HX_STACK_LINE(70)
												Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
												HX_STACK_LINE(70)
												Float tmp157 = (a44 * b43);		HX_STACK_VAR(tmp157,"tmp157");
												HX_STACK_LINE(70)
												Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
												HX_STACK_LINE(70)
												te[(int)11] = tmp158;
												HX_STACK_LINE(70)
												Float tmp159 = (a41 * b14);		HX_STACK_VAR(tmp159,"tmp159");
												HX_STACK_LINE(70)
												Float tmp160 = (a42 * b24);		HX_STACK_VAR(tmp160,"tmp160");
												HX_STACK_LINE(70)
												Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
												HX_STACK_LINE(70)
												Float tmp162 = (a43 * b34);		HX_STACK_VAR(tmp162,"tmp162");
												HX_STACK_LINE(70)
												Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
												HX_STACK_LINE(70)
												Float tmp164 = (a44 * b44);		HX_STACK_VAR(tmp164,"tmp164");
												HX_STACK_LINE(70)
												Float tmp165 = (tmp163 + tmp164);		HX_STACK_VAR(tmp165,"tmp165");
												HX_STACK_LINE(70)
												te[(int)15] = tmp165;
												HX_STACK_LINE(70)
												tmp18 = _this4;
											}
											HX_STACK_LINE(70)
											::phoenix::Matrix _m = tmp18;		HX_STACK_VAR(_m,"_m");
											HX_STACK_LINE(70)
											_this3->matrix = _m;
											HX_STACK_LINE(70)
											bool tmp19 = (_m != null());		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(70)
											if ((tmp19)){
												HX_STACK_LINE(70)
												::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													cpp::ArrayBase array = _this3->matrix->elements;		HX_STACK_VAR(array,"array");
													HX_STACK_LINE(70)
													::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(70)
													bool tmp21 = (array != null());		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(70)
													if ((tmp21)){
														HX_STACK_LINE(70)
														::snow::api::buffers::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(70)
														{
															HX_STACK_LINE(70)
															::snow::api::buffers::ArrayBufferView tmp23 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(70)
															::snow::api::buffers::ArrayBufferView _this4 = tmp23;		HX_STACK_VAR(_this4,"_this4");
															HX_STACK_LINE(70)
															_this4->byteOffset = (int)0;
															HX_STACK_LINE(70)
															_this4->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
															HX_STACK_LINE(70)
															int tmp24 = (_this4->length * _this4->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(70)
															_this4->byteLength = tmp24;
															HX_STACK_LINE(70)
															::haxe::io::Bytes tmp25;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(70)
															{
																HX_STACK_LINE(70)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(70)
																int tmp26 = _this4->byteLength;		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(70)
																::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(70)
																this2 = tmp27;
																HX_STACK_LINE(70)
																tmp25 = this2;
															}
															HX_STACK_LINE(70)
															_this4->buffer = tmp25;
															HX_STACK_LINE(70)
															_this4->copyFromArray(((Array< Float >)(array)),null());
															HX_STACK_LINE(70)
															tmp22 = _this4;
														}
														HX_STACK_LINE(70)
														this1 = tmp22;
													}
													else{
														HX_STACK_LINE(70)
														HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
													}
													HX_STACK_LINE(70)
													tmp20 = this1;
												}
												HX_STACK_LINE(70)
												_this3->floats = tmp20;
											}
											HX_STACK_LINE(70)
											_this3->matrix;
										}
										else{
											HX_STACK_LINE(70)
											::phoenix::Spatial tmp17 = _this2->get_world();		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(70)
											::phoenix::Spatial _this3 = tmp17;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(70)
											::phoenix::Matrix tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												::phoenix::Matrix tmp19 = _this2->local->matrix;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(70)
												Array< Float > te = tmp19->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(70)
												Float tmp20 = te->__get((int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(70)
												Float tmp21 = te->__get((int)4);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(70)
												Float tmp22 = te->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(70)
												Float tmp23 = te->__get((int)12);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(70)
												Float tmp24 = te->__get((int)1);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(70)
												Float tmp25 = te->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(70)
												Float tmp26 = te->__get((int)9);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(70)
												Float tmp27 = te->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(70)
												Float tmp28 = te->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(70)
												Float tmp29 = te->__get((int)6);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(70)
												Float tmp30 = te->__get((int)10);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(70)
												Float tmp31 = te->__get((int)14);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(70)
												Float tmp32 = te->__get((int)3);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(70)
												Float tmp33 = te->__get((int)7);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(70)
												Float tmp34 = te->__get((int)11);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(70)
												Float tmp35 = te->__get((int)15);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(70)
												tmp18 = ::phoenix::Matrix_obj::__new(tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31,tmp32,tmp33,tmp34,tmp35);
											}
											HX_STACK_LINE(70)
											::phoenix::Matrix _m = tmp18;		HX_STACK_VAR(_m,"_m");
											HX_STACK_LINE(70)
											_this3->matrix = _m;
											HX_STACK_LINE(70)
											bool tmp19 = (_m != null());		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(70)
											if ((tmp19)){
												HX_STACK_LINE(70)
												::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													cpp::ArrayBase array = _this3->matrix->elements;		HX_STACK_VAR(array,"array");
													HX_STACK_LINE(70)
													::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(70)
													bool tmp21 = (array != null());		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(70)
													if ((tmp21)){
														HX_STACK_LINE(70)
														::snow::api::buffers::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(70)
														{
															HX_STACK_LINE(70)
															::snow::api::buffers::ArrayBufferView tmp23 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(70)
															::snow::api::buffers::ArrayBufferView _this4 = tmp23;		HX_STACK_VAR(_this4,"_this4");
															HX_STACK_LINE(70)
															_this4->byteOffset = (int)0;
															HX_STACK_LINE(70)
															_this4->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
															HX_STACK_LINE(70)
															int tmp24 = (_this4->length * _this4->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(70)
															_this4->byteLength = tmp24;
															HX_STACK_LINE(70)
															::haxe::io::Bytes tmp25;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(70)
															{
																HX_STACK_LINE(70)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(70)
																int tmp26 = _this4->byteLength;		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(70)
																::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(70)
																this2 = tmp27;
																HX_STACK_LINE(70)
																tmp25 = this2;
															}
															HX_STACK_LINE(70)
															_this4->buffer = tmp25;
															HX_STACK_LINE(70)
															_this4->copyFromArray(((Array< Float >)(array)),null());
															HX_STACK_LINE(70)
															tmp22 = _this4;
														}
														HX_STACK_LINE(70)
														this1 = tmp22;
													}
													else{
														HX_STACK_LINE(70)
														HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
													}
													HX_STACK_LINE(70)
													tmp20 = this1;
												}
												HX_STACK_LINE(70)
												_this3->floats = tmp20;
											}
											HX_STACK_LINE(70)
											_this3->matrix;
										}
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											::phoenix::Spatial tmp17 = _this2->get_world();		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(70)
											::phoenix::Spatial _this3 = tmp17;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(70)
											bool tmp18 = _this3->auto_decompose;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(70)
											if ((tmp18)){
												HX_STACK_LINE(70)
												::phoenix::MatrixTransform tmp19;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													::phoenix::Matrix _this4 = _this3->matrix;		HX_STACK_VAR(_this4,"_this4");
													HX_STACK_LINE(70)
													::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
													HX_STACK_LINE(70)
													::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
													HX_STACK_LINE(70)
													::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
													HX_STACK_LINE(70)
													Array< Float > te = _this4->elements;		HX_STACK_VAR(te,"te");
													HX_STACK_LINE(70)
													::phoenix::Matrix tmp20 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(70)
													::phoenix::Matrix matrix = tmp20;		HX_STACK_VAR(matrix,"matrix");
													HX_STACK_LINE(70)
													Float tmp21 = te->__get((int)0);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(70)
													Float _ax_x = tmp21;		HX_STACK_VAR(_ax_x,"_ax_x");
													HX_STACK_LINE(70)
													Float tmp22 = te->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(70)
													Float _ax_y = tmp22;		HX_STACK_VAR(_ax_y,"_ax_y");
													HX_STACK_LINE(70)
													Float tmp23 = te->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(70)
													Float _ax_z = tmp23;		HX_STACK_VAR(_ax_z,"_ax_z");
													HX_STACK_LINE(70)
													Float tmp24 = te->__get((int)4);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(70)
													Float _ay_x = tmp24;		HX_STACK_VAR(_ay_x,"_ay_x");
													HX_STACK_LINE(70)
													Float tmp25 = te->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(70)
													Float _ay_y = tmp25;		HX_STACK_VAR(_ay_y,"_ay_y");
													HX_STACK_LINE(70)
													Float tmp26 = te->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(70)
													Float _ay_z = tmp26;		HX_STACK_VAR(_ay_z,"_ay_z");
													HX_STACK_LINE(70)
													Float tmp27 = te->__get((int)8);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(70)
													Float _az_x = tmp27;		HX_STACK_VAR(_az_x,"_az_x");
													HX_STACK_LINE(70)
													Float tmp28 = te->__get((int)9);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(70)
													Float _az_y = tmp28;		HX_STACK_VAR(_az_y,"_az_y");
													HX_STACK_LINE(70)
													Float tmp29 = te->__get((int)10);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(70)
													Float _az_z = tmp29;		HX_STACK_VAR(_az_z,"_az_z");
													HX_STACK_LINE(70)
													Float tmp30 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(70)
													Float tmp31 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(70)
													Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(70)
													Float tmp33 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(70)
													Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(70)
													Float tmp35 = ::Math_obj::sqrt(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(70)
													Float _ax_length = tmp35;		HX_STACK_VAR(_ax_length,"_ax_length");
													HX_STACK_LINE(70)
													Float tmp36 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(70)
													Float tmp37 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(70)
													Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(70)
													Float tmp39 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(70)
													Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(70)
													Float tmp41 = ::Math_obj::sqrt(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(70)
													Float _ay_length = tmp41;		HX_STACK_VAR(_ay_length,"_ay_length");
													HX_STACK_LINE(70)
													Float tmp42 = (_az_x * _az_x);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(70)
													Float tmp43 = (_az_y * _az_y);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(70)
													Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(70)
													Float tmp45 = (_az_z * _az_z);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(70)
													Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(70)
													Float tmp47 = ::Math_obj::sqrt(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(70)
													Float _az_length = tmp47;		HX_STACK_VAR(_az_length,"_az_length");
													HX_STACK_LINE(70)
													bool tmp48 = (_quaternion == null());		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(70)
													if ((tmp48)){
														HX_STACK_LINE(70)
														::phoenix::Quaternion tmp49 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(70)
														_quaternion = tmp49;
													}
													HX_STACK_LINE(70)
													bool tmp49 = (_position == null());		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(70)
													if ((tmp49)){
														HX_STACK_LINE(70)
														Float tmp50 = te->__get((int)12);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(70)
														Float tmp51 = te->__get((int)13);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(70)
														Float tmp52 = te->__get((int)14);		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(70)
														::phoenix::Vector tmp53 = ::phoenix::Vector_obj::__new(tmp50,tmp51,tmp52,null());		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(70)
														_position = tmp53;
													}
													else{
														HX_STACK_LINE(70)
														{
															HX_STACK_LINE(70)
															Float tmp50 = te->__get((int)12);		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(70)
															Float _x = tmp50;		HX_STACK_VAR(_x,"_x");
															HX_STACK_LINE(70)
															_position->x = _x;
															HX_STACK_LINE(70)
															bool tmp51 = _position->_construct;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(70)
															if ((tmp51)){
																HX_STACK_LINE(70)
																_position->x;
															}
															else{
																HX_STACK_LINE(70)
																bool tmp52 = (_position->listen_x != null());		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(70)
																bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(70)
																if ((tmp52)){
																	HX_STACK_LINE(70)
																	bool tmp54 = _position->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(70)
																	bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(70)
																	tmp53 = !(tmp55);
																}
																else{
																	HX_STACK_LINE(70)
																	tmp53 = false;
																}
																HX_STACK_LINE(70)
																if ((tmp53)){
																	HX_STACK_LINE(70)
																	Float tmp54 = _x;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(70)
																	_position->listen_x(tmp54);
																}
																HX_STACK_LINE(70)
																_position->x;
															}
														}
														HX_STACK_LINE(70)
														{
															HX_STACK_LINE(70)
															Float tmp50 = te->__get((int)13);		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(70)
															Float _y = tmp50;		HX_STACK_VAR(_y,"_y");
															HX_STACK_LINE(70)
															_position->y = _y;
															HX_STACK_LINE(70)
															bool tmp51 = _position->_construct;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(70)
															if ((tmp51)){
																HX_STACK_LINE(70)
																_position->y;
															}
															else{
																HX_STACK_LINE(70)
																bool tmp52 = (_position->listen_y != null());		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(70)
																bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(70)
																if ((tmp52)){
																	HX_STACK_LINE(70)
																	bool tmp54 = _position->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(70)
																	bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(70)
																	tmp53 = !(tmp55);
																}
																else{
																	HX_STACK_LINE(70)
																	tmp53 = false;
																}
																HX_STACK_LINE(70)
																if ((tmp53)){
																	HX_STACK_LINE(70)
																	Float tmp54 = _y;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(70)
																	_position->listen_y(tmp54);
																}
																HX_STACK_LINE(70)
																_position->y;
															}
														}
														HX_STACK_LINE(70)
														{
															HX_STACK_LINE(70)
															Float tmp50 = te->__get((int)14);		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(70)
															Float _z = tmp50;		HX_STACK_VAR(_z,"_z");
															HX_STACK_LINE(70)
															_position->z = _z;
															HX_STACK_LINE(70)
															bool tmp51 = _position->_construct;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(70)
															if ((tmp51)){
																HX_STACK_LINE(70)
																_position->z;
															}
															else{
																HX_STACK_LINE(70)
																bool tmp52 = (_position->listen_z != null());		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(70)
																bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(70)
																if ((tmp52)){
																	HX_STACK_LINE(70)
																	bool tmp54 = _position->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(70)
																	bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(70)
																	tmp53 = !(tmp55);
																}
																else{
																	HX_STACK_LINE(70)
																	tmp53 = false;
																}
																HX_STACK_LINE(70)
																if ((tmp53)){
																	HX_STACK_LINE(70)
																	Float tmp54 = _z;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(70)
																	_position->listen_z(tmp54);
																}
																HX_STACK_LINE(70)
																_position->z;
															}
														}
													}
													HX_STACK_LINE(70)
													bool tmp50 = (_scale == null());		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(70)
													if ((tmp50)){
														HX_STACK_LINE(70)
														::phoenix::Vector tmp51 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(70)
														_scale = tmp51;
													}
													else{
														HX_STACK_LINE(70)
														{
															HX_STACK_LINE(70)
															_scale->x = _ax_length;
															HX_STACK_LINE(70)
															bool tmp51 = _scale->_construct;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(70)
															if ((tmp51)){
																HX_STACK_LINE(70)
																_scale->x;
															}
															else{
																HX_STACK_LINE(70)
																bool tmp52 = (_scale->listen_x != null());		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(70)
																bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(70)
																if ((tmp52)){
																	HX_STACK_LINE(70)
																	bool tmp54 = _scale->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(70)
																	bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(70)
																	tmp53 = !(tmp55);
																}
																else{
																	HX_STACK_LINE(70)
																	tmp53 = false;
																}
																HX_STACK_LINE(70)
																if ((tmp53)){
																	HX_STACK_LINE(70)
																	Float tmp54 = _ax_length;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(70)
																	_scale->listen_x(tmp54);
																}
																HX_STACK_LINE(70)
																_scale->x;
															}
														}
														HX_STACK_LINE(70)
														{
															HX_STACK_LINE(70)
															_scale->y = _ay_length;
															HX_STACK_LINE(70)
															bool tmp51 = _scale->_construct;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(70)
															if ((tmp51)){
																HX_STACK_LINE(70)
																_scale->y;
															}
															else{
																HX_STACK_LINE(70)
																bool tmp52 = (_scale->listen_y != null());		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(70)
																bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(70)
																if ((tmp52)){
																	HX_STACK_LINE(70)
																	bool tmp54 = _scale->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(70)
																	bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(70)
																	tmp53 = !(tmp55);
																}
																else{
																	HX_STACK_LINE(70)
																	tmp53 = false;
																}
																HX_STACK_LINE(70)
																if ((tmp53)){
																	HX_STACK_LINE(70)
																	Float tmp54 = _ay_length;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(70)
																	_scale->listen_y(tmp54);
																}
																HX_STACK_LINE(70)
																_scale->y;
															}
														}
														HX_STACK_LINE(70)
														{
															HX_STACK_LINE(70)
															_scale->z = _az_length;
															HX_STACK_LINE(70)
															bool tmp51 = _scale->_construct;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(70)
															if ((tmp51)){
																HX_STACK_LINE(70)
																_scale->z;
															}
															else{
																HX_STACK_LINE(70)
																bool tmp52 = (_scale->listen_z != null());		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(70)
																bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(70)
																if ((tmp52)){
																	HX_STACK_LINE(70)
																	bool tmp54 = _scale->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(70)
																	bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(70)
																	tmp53 = !(tmp55);
																}
																else{
																	HX_STACK_LINE(70)
																	tmp53 = false;
																}
																HX_STACK_LINE(70)
																if ((tmp53)){
																	HX_STACK_LINE(70)
																	Float tmp54 = _az_length;		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(70)
																	_scale->listen_z(tmp54);
																}
																HX_STACK_LINE(70)
																_scale->z;
															}
														}
													}
													HX_STACK_LINE(70)
													matrix->elements = _this4->elements->concat(Array_obj< Float >::__new());
													HX_STACK_LINE(70)
													Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
													HX_STACK_LINE(70)
													Float tmp51 = _ax_length;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(70)
													hx::DivEq(me[(int)0],tmp51);
													HX_STACK_LINE(70)
													Float tmp52 = _ax_length;		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(70)
													hx::DivEq(me[(int)1],tmp52);
													HX_STACK_LINE(70)
													Float tmp53 = _ax_length;		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(70)
													hx::DivEq(me[(int)2],tmp53);
													HX_STACK_LINE(70)
													Float tmp54 = _ay_length;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(70)
													hx::DivEq(me[(int)4],tmp54);
													HX_STACK_LINE(70)
													Float tmp55 = _ay_length;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(70)
													hx::DivEq(me[(int)5],tmp55);
													HX_STACK_LINE(70)
													Float tmp56 = _ay_length;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(70)
													hx::DivEq(me[(int)6],tmp56);
													HX_STACK_LINE(70)
													Float tmp57 = _az_length;		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(70)
													hx::DivEq(me[(int)8],tmp57);
													HX_STACK_LINE(70)
													Float tmp58 = _az_length;		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(70)
													hx::DivEq(me[(int)9],tmp58);
													HX_STACK_LINE(70)
													Float tmp59 = _az_length;		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(70)
													hx::DivEq(me[(int)10],tmp59);
													HX_STACK_LINE(70)
													::phoenix::Matrix tmp60 = matrix;		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(70)
													_quaternion->setFromRotationMatrix(tmp60);
													HX_STACK_LINE(70)
													bool tmp61 = (_this4->_transform == null());		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(70)
													if ((tmp61)){
														HX_STACK_LINE(70)
														::phoenix::MatrixTransform tmp62 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(70)
														_this4->_transform = tmp62;
													}
													else{
														HX_STACK_LINE(70)
														_this4->_transform->pos = _position;
														HX_STACK_LINE(70)
														_this4->_transform->rotation = _quaternion;
														HX_STACK_LINE(70)
														_this4->_transform->scale = _scale;
													}
													HX_STACK_LINE(70)
													tmp19 = _this4->_transform;
												}
												HX_STACK_LINE(70)
												::phoenix::MatrixTransform _transform = tmp19;		HX_STACK_VAR(_transform,"_transform");
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
													HX_STACK_LINE(70)
													_this3->pos = _p;
													HX_STACK_LINE(70)
													bool tmp20 = (_p != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(70)
													if ((tmp20)){
														HX_STACK_LINE(70)
														::phoenix::Vector tmp21 = _this3->pos;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(70)
														Dynamic tmp22 = _this3->_pos_change_dyn();		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(70)
														::phoenix::Vector_obj::Listen(tmp21,tmp22);
														HX_STACK_LINE(70)
														bool tmp23 = (_this3->pos_changed != null());		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(70)
														bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(70)
														if ((tmp23)){
															HX_STACK_LINE(70)
															bool tmp25 = _this3->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(70)
															bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(70)
															tmp24 = !(tmp26);
														}
														else{
															HX_STACK_LINE(70)
															tmp24 = false;
														}
														HX_STACK_LINE(70)
														if ((tmp24)){
															HX_STACK_LINE(70)
															::phoenix::Vector tmp25 = _this3->pos;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(70)
															_this3->pos_changed(tmp25);
														}
													}
													HX_STACK_LINE(70)
													_this3->pos;
												}
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
													HX_STACK_LINE(70)
													_this3->rotation = _r;
													HX_STACK_LINE(70)
													bool tmp20 = (_r != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(70)
													if ((tmp20)){
														HX_STACK_LINE(70)
														{
															HX_STACK_LINE(70)
															::phoenix::Quaternion _q = _this3->rotation;		HX_STACK_VAR(_q,"_q");
															HX_STACK_LINE(70)
															Dynamic listener = _this3->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
															HX_STACK_LINE(70)
															_q->listen_x = listener;
															HX_STACK_LINE(70)
															_q->listen_y = listener;
															HX_STACK_LINE(70)
															_q->listen_z = listener;
															HX_STACK_LINE(70)
															_q->listen_w = listener;
														}
														HX_STACK_LINE(70)
														bool tmp21 = (_this3->rotation_changed != null());		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(70)
														bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(70)
														if ((tmp21)){
															HX_STACK_LINE(70)
															bool tmp23 = _this3->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(70)
															bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(70)
															tmp22 = !(tmp24);
														}
														else{
															HX_STACK_LINE(70)
															tmp22 = false;
														}
														HX_STACK_LINE(70)
														if ((tmp22)){
															HX_STACK_LINE(70)
															::phoenix::Quaternion tmp23 = _this3->rotation;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(70)
															_this3->rotation_changed(tmp23);
														}
													}
													HX_STACK_LINE(70)
													_this3->rotation;
												}
												HX_STACK_LINE(70)
												{
													HX_STACK_LINE(70)
													::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
													HX_STACK_LINE(70)
													_this3->scale = _s;
													HX_STACK_LINE(70)
													bool tmp20 = (_s != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(70)
													if ((tmp20)){
														HX_STACK_LINE(70)
														::phoenix::Vector tmp21 = _this3->scale;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(70)
														Dynamic tmp22 = _this3->_scale_change_dyn();		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(70)
														::phoenix::Vector_obj::Listen(tmp21,tmp22);
														HX_STACK_LINE(70)
														bool tmp23 = (_this3->scale_changed != null());		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(70)
														bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(70)
														if ((tmp23)){
															HX_STACK_LINE(70)
															bool tmp25 = _this3->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(70)
															bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(70)
															tmp24 = !(tmp26);
														}
														else{
															HX_STACK_LINE(70)
															tmp24 = false;
														}
														HX_STACK_LINE(70)
														if ((tmp24)){
															HX_STACK_LINE(70)
															::phoenix::Vector tmp25 = _this3->scale;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(70)
															_this3->scale_changed(tmp25);
														}
													}
													HX_STACK_LINE(70)
													_this3->scale;
												}
											}
											HX_STACK_LINE(70)
											_this3;
										}
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											_this2->dirty = false;
											HX_STACK_LINE(70)
											bool tmp17 = _this2->dirty;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(70)
											bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(70)
											bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(70)
											if ((tmp18)){
												HX_STACK_LINE(70)
												bool tmp20 = _this2->_setup;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(70)
												bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(70)
												bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(70)
												tmp19 = !(tmp22);
											}
											else{
												HX_STACK_LINE(70)
												tmp19 = false;
											}
											HX_STACK_LINE(70)
											bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(70)
											bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(70)
											if ((tmp20)){
												HX_STACK_LINE(70)
												tmp21 = (_this2->_dirty_handlers != null());
											}
											else{
												HX_STACK_LINE(70)
												tmp21 = false;
											}
											HX_STACK_LINE(70)
											bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(70)
											if ((tmp21)){
												HX_STACK_LINE(70)
												int tmp23 = _this2->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(70)
												int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(70)
												tmp22 = (tmp24 > (int)0);
											}
											else{
												HX_STACK_LINE(70)
												tmp22 = false;
											}
											HX_STACK_LINE(70)
											if ((tmp22)){
												HX_STACK_LINE(70)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(70)
												cpp::ArrayBase _g11 = _this2->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(70)
												while((true)){
													HX_STACK_LINE(70)
													bool tmp23 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(70)
													bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(70)
													if ((tmp24)){
														HX_STACK_LINE(70)
														break;
													}
													HX_STACK_LINE(70)
													Dynamic tmp25 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(70)
													Dynamic _handler = tmp25;		HX_STACK_VAR(_handler,"_handler");
													HX_STACK_LINE(70)
													++(_g1);
													HX_STACK_LINE(70)
													bool tmp26 = (_handler != null());		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(70)
													if ((tmp26)){
														HX_STACK_LINE(70)
														::phoenix::Transform tmp27 = _this2;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(70)
														_handler(tmp27).Cast< Void >();
													}
												}
											}
											HX_STACK_LINE(70)
											_this2->dirty;
										}
										HX_STACK_LINE(70)
										_this2->_cleaning = false;
										HX_STACK_LINE(70)
										bool tmp17 = (_this2->_clean_handlers != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(70)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(70)
										if ((tmp17)){
											HX_STACK_LINE(70)
											int tmp19 = _this2->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(70)
											int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(70)
											tmp18 = (tmp20 > (int)0);
										}
										else{
											HX_STACK_LINE(70)
											tmp18 = false;
										}
										HX_STACK_LINE(70)
										if ((tmp18)){
											HX_STACK_LINE(70)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(70)
											cpp::ArrayBase _g11 = _this2->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(70)
											while((true)){
												HX_STACK_LINE(70)
												bool tmp19 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(70)
												bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(70)
												if ((tmp20)){
													HX_STACK_LINE(70)
													break;
												}
												HX_STACK_LINE(70)
												Dynamic tmp21 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(70)
												Dynamic _handler = tmp21;		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(70)
												++(_g1);
												HX_STACK_LINE(70)
												bool tmp22 = (_handler != null());		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(70)
												if ((tmp22)){
													HX_STACK_LINE(70)
													::phoenix::Transform tmp23 = _this2;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(70)
													_handler(tmp23).Cast< Void >();
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(70)
							bool tmp13 = _this1->dirty;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(70)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(70)
							if ((tmp13)){
								HX_STACK_LINE(70)
								bool tmp15 = _this1->_cleaning;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(70)
								bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(70)
								tmp14 = !(tmp16);
							}
							else{
								HX_STACK_LINE(70)
								tmp14 = false;
							}
							HX_STACK_LINE(70)
							if ((tmp14)){
								HX_STACK_LINE(70)
								bool tmp15 = _this1->dirty;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(70)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(70)
								if ((tmp16)){
									HX_STACK_LINE(70)
									Dynamic();
								}
								else{
									HX_STACK_LINE(70)
									_this1->_cleaning = true;
									HX_STACK_LINE(70)
									{
										HX_STACK_LINE(70)
										::phoenix::Matrix _this2 = _this1->_pos_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(70)
											e[(int)0] = (int)1;
											HX_STACK_LINE(70)
											e[(int)4] = (int)0;
											HX_STACK_LINE(70)
											e[(int)8] = (int)0;
											HX_STACK_LINE(70)
											::phoenix::Vector tmp17 = _this1->local->pos;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(70)
											Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(70)
											e[(int)12] = tmp18;
											HX_STACK_LINE(70)
											e[(int)1] = (int)0;
											HX_STACK_LINE(70)
											e[(int)5] = (int)1;
											HX_STACK_LINE(70)
											e[(int)9] = (int)0;
											HX_STACK_LINE(70)
											::phoenix::Vector tmp19 = _this1->local->pos;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(70)
											Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(70)
											e[(int)13] = tmp20;
											HX_STACK_LINE(70)
											e[(int)2] = (int)0;
											HX_STACK_LINE(70)
											e[(int)6] = (int)0;
											HX_STACK_LINE(70)
											e[(int)10] = (int)1;
											HX_STACK_LINE(70)
											::phoenix::Vector tmp21 = _this1->local->pos;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(70)
											Float tmp22 = tmp21->z;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(70)
											e[(int)14] = tmp22;
											HX_STACK_LINE(70)
											e[(int)3] = (int)0;
											HX_STACK_LINE(70)
											e[(int)7] = (int)0;
											HX_STACK_LINE(70)
											e[(int)11] = (int)0;
											HX_STACK_LINE(70)
											e[(int)15] = (int)1;
											HX_STACK_LINE(70)
											_this2;
										}
										HX_STACK_LINE(70)
										_this2;
									}
									HX_STACK_LINE(70)
									{
										HX_STACK_LINE(70)
										::phoenix::Matrix _this2 = _this1->_rotation_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(70)
										::phoenix::Quaternion tmp17 = _this1->local->rotation;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(70)
										::phoenix::Quaternion q = tmp17;		HX_STACK_VAR(q,"q");
										HX_STACK_LINE(70)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(70)
										Float tmp18 = (q->x + q->x);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(70)
										Float x2 = tmp18;		HX_STACK_VAR(x2,"x2");
										HX_STACK_LINE(70)
										Float tmp19 = (q->y + q->y);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(70)
										Float y2 = tmp19;		HX_STACK_VAR(y2,"y2");
										HX_STACK_LINE(70)
										Float tmp20 = (q->z + q->z);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(70)
										Float z2 = tmp20;		HX_STACK_VAR(z2,"z2");
										HX_STACK_LINE(70)
										Float tmp21 = (q->x * x2);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(70)
										Float xx = tmp21;		HX_STACK_VAR(xx,"xx");
										HX_STACK_LINE(70)
										Float tmp22 = (q->x * y2);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(70)
										Float xy = tmp22;		HX_STACK_VAR(xy,"xy");
										HX_STACK_LINE(70)
										Float tmp23 = (q->x * z2);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(70)
										Float xz = tmp23;		HX_STACK_VAR(xz,"xz");
										HX_STACK_LINE(70)
										Float tmp24 = (q->y * y2);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(70)
										Float yy = tmp24;		HX_STACK_VAR(yy,"yy");
										HX_STACK_LINE(70)
										Float tmp25 = (q->y * z2);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(70)
										Float yz = tmp25;		HX_STACK_VAR(yz,"yz");
										HX_STACK_LINE(70)
										Float tmp26 = (q->z * z2);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(70)
										Float zz = tmp26;		HX_STACK_VAR(zz,"zz");
										HX_STACK_LINE(70)
										Float tmp27 = (q->w * x2);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(70)
										Float wx = tmp27;		HX_STACK_VAR(wx,"wx");
										HX_STACK_LINE(70)
										Float tmp28 = (q->w * y2);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(70)
										Float wy = tmp28;		HX_STACK_VAR(wy,"wy");
										HX_STACK_LINE(70)
										Float tmp29 = (q->w * z2);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(70)
										Float wz = tmp29;		HX_STACK_VAR(wz,"wz");
										HX_STACK_LINE(70)
										Float tmp30 = (yy + zz);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(70)
										Float tmp31 = ((int)1 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(70)
										te[(int)0] = tmp31;
										HX_STACK_LINE(70)
										Float tmp32 = (xy - wz);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(70)
										te[(int)4] = tmp32;
										HX_STACK_LINE(70)
										Float tmp33 = (xz + wy);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(70)
										te[(int)8] = tmp33;
										HX_STACK_LINE(70)
										Float tmp34 = (xy + wz);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(70)
										te[(int)1] = tmp34;
										HX_STACK_LINE(70)
										Float tmp35 = (xx + zz);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(70)
										Float tmp36 = ((int)1 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(70)
										te[(int)5] = tmp36;
										HX_STACK_LINE(70)
										Float tmp37 = (yz - wx);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(70)
										te[(int)9] = tmp37;
										HX_STACK_LINE(70)
										Float tmp38 = (xz - wy);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(70)
										te[(int)2] = tmp38;
										HX_STACK_LINE(70)
										Float tmp39 = (yz + wx);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(70)
										te[(int)6] = tmp39;
										HX_STACK_LINE(70)
										Float tmp40 = (xx + yy);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(70)
										Float tmp41 = ((int)1 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(70)
										te[(int)10] = tmp41;
										HX_STACK_LINE(70)
										te[(int)3] = (int)0;
										HX_STACK_LINE(70)
										te[(int)7] = (int)0;
										HX_STACK_LINE(70)
										te[(int)11] = (int)0;
										HX_STACK_LINE(70)
										te[(int)12] = (int)0;
										HX_STACK_LINE(70)
										te[(int)13] = (int)0;
										HX_STACK_LINE(70)
										te[(int)14] = (int)0;
										HX_STACK_LINE(70)
										te[(int)15] = (int)1;
										HX_STACK_LINE(70)
										_this2;
									}
									HX_STACK_LINE(70)
									{
										HX_STACK_LINE(70)
										::phoenix::Matrix _this2 = _this1->_origin_undo_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(70)
											e[(int)0] = (int)1;
											HX_STACK_LINE(70)
											e[(int)4] = (int)0;
											HX_STACK_LINE(70)
											e[(int)8] = (int)0;
											HX_STACK_LINE(70)
											Float tmp17 = _this1->origin->x;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(70)
											Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(70)
											e[(int)12] = tmp18;
											HX_STACK_LINE(70)
											e[(int)1] = (int)0;
											HX_STACK_LINE(70)
											e[(int)5] = (int)1;
											HX_STACK_LINE(70)
											e[(int)9] = (int)0;
											HX_STACK_LINE(70)
											Float tmp19 = _this1->origin->y;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(70)
											Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(70)
											e[(int)13] = tmp20;
											HX_STACK_LINE(70)
											e[(int)2] = (int)0;
											HX_STACK_LINE(70)
											e[(int)6] = (int)0;
											HX_STACK_LINE(70)
											e[(int)10] = (int)1;
											HX_STACK_LINE(70)
											Float tmp21 = _this1->origin->z;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(70)
											Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(70)
											e[(int)14] = tmp22;
											HX_STACK_LINE(70)
											e[(int)3] = (int)0;
											HX_STACK_LINE(70)
											e[(int)7] = (int)0;
											HX_STACK_LINE(70)
											e[(int)11] = (int)0;
											HX_STACK_LINE(70)
											e[(int)15] = (int)1;
											HX_STACK_LINE(70)
											_this2;
										}
										HX_STACK_LINE(70)
										_this2;
									}
									HX_STACK_LINE(70)
									{
										HX_STACK_LINE(70)
										::phoenix::Matrix tmp17 = _this1->local->matrix;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(70)
										::phoenix::Matrix _this2 = tmp17;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(70)
											e[(int)0] = (int)1;
											HX_STACK_LINE(70)
											e[(int)4] = (int)0;
											HX_STACK_LINE(70)
											e[(int)8] = (int)0;
											HX_STACK_LINE(70)
											Float tmp18 = _this1->origin->x;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(70)
											e[(int)12] = tmp18;
											HX_STACK_LINE(70)
											e[(int)1] = (int)0;
											HX_STACK_LINE(70)
											e[(int)5] = (int)1;
											HX_STACK_LINE(70)
											e[(int)9] = (int)0;
											HX_STACK_LINE(70)
											Float tmp19 = _this1->origin->y;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(70)
											e[(int)13] = tmp19;
											HX_STACK_LINE(70)
											e[(int)2] = (int)0;
											HX_STACK_LINE(70)
											e[(int)6] = (int)0;
											HX_STACK_LINE(70)
											e[(int)10] = (int)1;
											HX_STACK_LINE(70)
											Float tmp20 = _this1->origin->z;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(70)
											e[(int)14] = tmp20;
											HX_STACK_LINE(70)
											e[(int)3] = (int)0;
											HX_STACK_LINE(70)
											e[(int)7] = (int)0;
											HX_STACK_LINE(70)
											e[(int)11] = (int)0;
											HX_STACK_LINE(70)
											e[(int)15] = (int)1;
											HX_STACK_LINE(70)
											_this2;
										}
										HX_STACK_LINE(70)
										_this2;
									}
									HX_STACK_LINE(70)
									{
										HX_STACK_LINE(70)
										::phoenix::Matrix tmp17 = _this1->local->matrix;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(70)
										::phoenix::Matrix _this2 = tmp17;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(70)
											Array< Float > be = _this1->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(70)
											Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(70)
											Float tmp18 = ae->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(70)
											Float a11 = tmp18;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(70)
											Float tmp19 = ae->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(70)
											Float a12 = tmp19;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(70)
											Float tmp20 = ae->__get((int)8);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(70)
											Float a13 = tmp20;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(70)
											Float tmp21 = ae->__get((int)12);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(70)
											Float a14 = tmp21;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(70)
											Float tmp22 = ae->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(70)
											Float a21 = tmp22;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(70)
											Float tmp23 = ae->__get((int)5);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(70)
											Float a22 = tmp23;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(70)
											Float tmp24 = ae->__get((int)9);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(70)
											Float a23 = tmp24;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(70)
											Float tmp25 = ae->__get((int)13);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(70)
											Float a24 = tmp25;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(70)
											Float tmp26 = ae->__get((int)2);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(70)
											Float a31 = tmp26;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(70)
											Float tmp27 = ae->__get((int)6);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(70)
											Float a32 = tmp27;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(70)
											Float tmp28 = ae->__get((int)10);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(70)
											Float a33 = tmp28;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(70)
											Float tmp29 = ae->__get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(70)
											Float a34 = tmp29;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(70)
											Float tmp30 = ae->__get((int)3);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(70)
											Float a41 = tmp30;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(70)
											Float tmp31 = ae->__get((int)7);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(70)
											Float a42 = tmp31;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(70)
											Float tmp32 = ae->__get((int)11);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(70)
											Float a43 = tmp32;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(70)
											Float tmp33 = ae->__get((int)15);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(70)
											Float a44 = tmp33;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(70)
											Float tmp34 = be->__get((int)0);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(70)
											Float b11 = tmp34;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(70)
											Float tmp35 = be->__get((int)4);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(70)
											Float b12 = tmp35;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(70)
											Float tmp36 = be->__get((int)8);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(70)
											Float b13 = tmp36;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(70)
											Float tmp37 = be->__get((int)12);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(70)
											Float b14 = tmp37;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(70)
											Float tmp38 = be->__get((int)1);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(70)
											Float b21 = tmp38;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(70)
											Float tmp39 = be->__get((int)5);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(70)
											Float b22 = tmp39;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(70)
											Float tmp40 = be->__get((int)9);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(70)
											Float b23 = tmp40;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(70)
											Float tmp41 = be->__get((int)13);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(70)
											Float b24 = tmp41;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(70)
											Float tmp42 = be->__get((int)2);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(70)
											Float b31 = tmp42;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(70)
											Float tmp43 = be->__get((int)6);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(70)
											Float b32 = tmp43;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(70)
											Float tmp44 = be->__get((int)10);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(70)
											Float b33 = tmp44;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(70)
											Float tmp45 = be->__get((int)14);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(70)
											Float b34 = tmp45;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(70)
											Float tmp46 = be->__get((int)3);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(70)
											Float b41 = tmp46;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(70)
											Float tmp47 = be->__get((int)7);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(70)
											Float b42 = tmp47;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(70)
											Float tmp48 = be->__get((int)11);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(70)
											Float b43 = tmp48;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(70)
											Float tmp49 = be->__get((int)15);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(70)
											Float b44 = tmp49;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(70)
											Float tmp50 = (a11 * b11);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(70)
											Float tmp51 = (a12 * b21);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(70)
											Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(70)
											Float tmp53 = (a13 * b31);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(70)
											Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(70)
											Float tmp55 = (a14 * b41);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(70)
											Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(70)
											te[(int)0] = tmp56;
											HX_STACK_LINE(70)
											Float tmp57 = (a11 * b12);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(70)
											Float tmp58 = (a12 * b22);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(70)
											Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(70)
											Float tmp60 = (a13 * b32);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(70)
											Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(70)
											Float tmp62 = (a14 * b42);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(70)
											Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(70)
											te[(int)4] = tmp63;
											HX_STACK_LINE(70)
											Float tmp64 = (a11 * b13);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(70)
											Float tmp65 = (a12 * b23);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(70)
											Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(70)
											Float tmp67 = (a13 * b33);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(70)
											Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(70)
											Float tmp69 = (a14 * b43);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(70)
											Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(70)
											te[(int)8] = tmp70;
											HX_STACK_LINE(70)
											Float tmp71 = (a11 * b14);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(70)
											Float tmp72 = (a12 * b24);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(70)
											Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(70)
											Float tmp74 = (a13 * b34);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(70)
											Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(70)
											Float tmp76 = (a14 * b44);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(70)
											Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(70)
											te[(int)12] = tmp77;
											HX_STACK_LINE(70)
											Float tmp78 = (a21 * b11);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(70)
											Float tmp79 = (a22 * b21);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(70)
											Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(70)
											Float tmp81 = (a23 * b31);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(70)
											Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(70)
											Float tmp83 = (a24 * b41);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(70)
											Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(70)
											te[(int)1] = tmp84;
											HX_STACK_LINE(70)
											Float tmp85 = (a21 * b12);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(70)
											Float tmp86 = (a22 * b22);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(70)
											Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(70)
											Float tmp88 = (a23 * b32);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(70)
											Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(70)
											Float tmp90 = (a24 * b42);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(70)
											Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(70)
											te[(int)5] = tmp91;
											HX_STACK_LINE(70)
											Float tmp92 = (a21 * b13);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(70)
											Float tmp93 = (a22 * b23);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(70)
											Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(70)
											Float tmp95 = (a23 * b33);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(70)
											Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(70)
											Float tmp97 = (a24 * b43);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(70)
											Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(70)
											te[(int)9] = tmp98;
											HX_STACK_LINE(70)
											Float tmp99 = (a21 * b14);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(70)
											Float tmp100 = (a22 * b24);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(70)
											Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(70)
											Float tmp102 = (a23 * b34);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(70)
											Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(70)
											Float tmp104 = (a24 * b44);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(70)
											Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(70)
											te[(int)13] = tmp105;
											HX_STACK_LINE(70)
											Float tmp106 = (a31 * b11);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(70)
											Float tmp107 = (a32 * b21);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(70)
											Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(70)
											Float tmp109 = (a33 * b31);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(70)
											Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(70)
											Float tmp111 = (a34 * b41);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(70)
											Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(70)
											te[(int)2] = tmp112;
											HX_STACK_LINE(70)
											Float tmp113 = (a31 * b12);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(70)
											Float tmp114 = (a32 * b22);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(70)
											Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(70)
											Float tmp116 = (a33 * b32);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(70)
											Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(70)
											Float tmp118 = (a34 * b42);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(70)
											Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(70)
											te[(int)6] = tmp119;
											HX_STACK_LINE(70)
											Float tmp120 = (a31 * b13);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(70)
											Float tmp121 = (a32 * b23);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(70)
											Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(70)
											Float tmp123 = (a33 * b33);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(70)
											Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(70)
											Float tmp125 = (a34 * b43);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(70)
											Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(70)
											te[(int)10] = tmp126;
											HX_STACK_LINE(70)
											Float tmp127 = (a31 * b14);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(70)
											Float tmp128 = (a32 * b24);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(70)
											Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(70)
											Float tmp130 = (a33 * b34);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(70)
											Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(70)
											Float tmp132 = (a34 * b44);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(70)
											Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(70)
											te[(int)14] = tmp133;
											HX_STACK_LINE(70)
											Float tmp134 = (a41 * b11);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(70)
											Float tmp135 = (a42 * b21);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(70)
											Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(70)
											Float tmp137 = (a43 * b31);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(70)
											Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(70)
											Float tmp139 = (a44 * b41);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(70)
											Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(70)
											te[(int)3] = tmp140;
											HX_STACK_LINE(70)
											Float tmp141 = (a41 * b12);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(70)
											Float tmp142 = (a42 * b22);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(70)
											Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(70)
											Float tmp144 = (a43 * b32);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(70)
											Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(70)
											Float tmp146 = (a44 * b42);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(70)
											Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(70)
											te[(int)7] = tmp147;
											HX_STACK_LINE(70)
											Float tmp148 = (a41 * b13);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(70)
											Float tmp149 = (a42 * b23);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(70)
											Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(70)
											Float tmp151 = (a43 * b33);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(70)
											Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(70)
											Float tmp153 = (a44 * b43);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(70)
											Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(70)
											te[(int)11] = tmp154;
											HX_STACK_LINE(70)
											Float tmp155 = (a41 * b14);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(70)
											Float tmp156 = (a42 * b24);		HX_STACK_VAR(tmp156,"tmp156");
											HX_STACK_LINE(70)
											Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
											HX_STACK_LINE(70)
											Float tmp158 = (a43 * b34);		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(70)
											Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
											HX_STACK_LINE(70)
											Float tmp160 = (a44 * b44);		HX_STACK_VAR(tmp160,"tmp160");
											HX_STACK_LINE(70)
											Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
											HX_STACK_LINE(70)
											te[(int)15] = tmp161;
											HX_STACK_LINE(70)
											_this2;
										}
									}
									HX_STACK_LINE(70)
									{
										HX_STACK_LINE(70)
										::phoenix::Matrix tmp17 = _this1->local->matrix;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(70)
										::phoenix::Matrix _this2 = tmp17;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(70)
										::phoenix::Vector tmp18 = _this1->local->scale;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(70)
										::phoenix::Vector _v = tmp18;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(70)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(70)
										Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(70)
										Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(70)
										Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(70)
										Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(70)
										hx::MultEq(te[(int)0],tmp19);
										HX_STACK_LINE(70)
										Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(70)
										hx::MultEq(te[(int)4],tmp20);
										HX_STACK_LINE(70)
										Float tmp21 = _z;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(70)
										hx::MultEq(te[(int)8],tmp21);
										HX_STACK_LINE(70)
										Float tmp22 = _x;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(70)
										hx::MultEq(te[(int)1],tmp22);
										HX_STACK_LINE(70)
										Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(70)
										hx::MultEq(te[(int)5],tmp23);
										HX_STACK_LINE(70)
										Float tmp24 = _z;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(70)
										hx::MultEq(te[(int)9],tmp24);
										HX_STACK_LINE(70)
										Float tmp25 = _x;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(70)
										hx::MultEq(te[(int)2],tmp25);
										HX_STACK_LINE(70)
										Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(70)
										hx::MultEq(te[(int)6],tmp26);
										HX_STACK_LINE(70)
										Float tmp27 = _z;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(70)
										hx::MultEq(te[(int)10],tmp27);
										HX_STACK_LINE(70)
										Float tmp28 = _x;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(70)
										hx::MultEq(te[(int)3],tmp28);
										HX_STACK_LINE(70)
										Float tmp29 = _y;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(70)
										hx::MultEq(te[(int)7],tmp29);
										HX_STACK_LINE(70)
										Float tmp30 = _z;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(70)
										hx::MultEq(te[(int)11],tmp30);
										HX_STACK_LINE(70)
										_this2;
									}
									HX_STACK_LINE(70)
									{
										HX_STACK_LINE(70)
										::phoenix::Matrix tmp17 = _this1->local->matrix;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(70)
										::phoenix::Matrix _this2 = tmp17;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(70)
										::phoenix::Vector tmp18 = _this1->local->pos;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(70)
										::phoenix::Vector _v = tmp18;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(70)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(70)
										Float tmp19 = _v->x;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(70)
										te[(int)12] = tmp19;
										HX_STACK_LINE(70)
										Float tmp20 = _v->y;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(70)
										te[(int)13] = tmp20;
										HX_STACK_LINE(70)
										Float tmp21 = _v->z;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(70)
										te[(int)14] = tmp21;
										HX_STACK_LINE(70)
										_this2;
									}
									HX_STACK_LINE(70)
									{
										HX_STACK_LINE(70)
										::phoenix::Matrix tmp17 = _this1->local->matrix;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(70)
										::phoenix::Matrix _this2 = tmp17;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(70)
											Array< Float > be = _this1->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(70)
											Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(70)
											Float tmp18 = ae->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(70)
											Float a11 = tmp18;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(70)
											Float tmp19 = ae->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(70)
											Float a12 = tmp19;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(70)
											Float tmp20 = ae->__get((int)8);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(70)
											Float a13 = tmp20;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(70)
											Float tmp21 = ae->__get((int)12);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(70)
											Float a14 = tmp21;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(70)
											Float tmp22 = ae->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(70)
											Float a21 = tmp22;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(70)
											Float tmp23 = ae->__get((int)5);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(70)
											Float a22 = tmp23;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(70)
											Float tmp24 = ae->__get((int)9);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(70)
											Float a23 = tmp24;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(70)
											Float tmp25 = ae->__get((int)13);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(70)
											Float a24 = tmp25;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(70)
											Float tmp26 = ae->__get((int)2);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(70)
											Float a31 = tmp26;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(70)
											Float tmp27 = ae->__get((int)6);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(70)
											Float a32 = tmp27;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(70)
											Float tmp28 = ae->__get((int)10);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(70)
											Float a33 = tmp28;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(70)
											Float tmp29 = ae->__get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(70)
											Float a34 = tmp29;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(70)
											Float tmp30 = ae->__get((int)3);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(70)
											Float a41 = tmp30;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(70)
											Float tmp31 = ae->__get((int)7);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(70)
											Float a42 = tmp31;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(70)
											Float tmp32 = ae->__get((int)11);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(70)
											Float a43 = tmp32;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(70)
											Float tmp33 = ae->__get((int)15);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(70)
											Float a44 = tmp33;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(70)
											Float tmp34 = be->__get((int)0);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(70)
											Float b11 = tmp34;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(70)
											Float tmp35 = be->__get((int)4);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(70)
											Float b12 = tmp35;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(70)
											Float tmp36 = be->__get((int)8);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(70)
											Float b13 = tmp36;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(70)
											Float tmp37 = be->__get((int)12);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(70)
											Float b14 = tmp37;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(70)
											Float tmp38 = be->__get((int)1);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(70)
											Float b21 = tmp38;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(70)
											Float tmp39 = be->__get((int)5);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(70)
											Float b22 = tmp39;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(70)
											Float tmp40 = be->__get((int)9);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(70)
											Float b23 = tmp40;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(70)
											Float tmp41 = be->__get((int)13);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(70)
											Float b24 = tmp41;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(70)
											Float tmp42 = be->__get((int)2);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(70)
											Float b31 = tmp42;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(70)
											Float tmp43 = be->__get((int)6);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(70)
											Float b32 = tmp43;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(70)
											Float tmp44 = be->__get((int)10);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(70)
											Float b33 = tmp44;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(70)
											Float tmp45 = be->__get((int)14);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(70)
											Float b34 = tmp45;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(70)
											Float tmp46 = be->__get((int)3);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(70)
											Float b41 = tmp46;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(70)
											Float tmp47 = be->__get((int)7);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(70)
											Float b42 = tmp47;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(70)
											Float tmp48 = be->__get((int)11);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(70)
											Float b43 = tmp48;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(70)
											Float tmp49 = be->__get((int)15);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(70)
											Float b44 = tmp49;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(70)
											Float tmp50 = (a11 * b11);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(70)
											Float tmp51 = (a12 * b21);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(70)
											Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(70)
											Float tmp53 = (a13 * b31);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(70)
											Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(70)
											Float tmp55 = (a14 * b41);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(70)
											Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(70)
											te[(int)0] = tmp56;
											HX_STACK_LINE(70)
											Float tmp57 = (a11 * b12);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(70)
											Float tmp58 = (a12 * b22);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(70)
											Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(70)
											Float tmp60 = (a13 * b32);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(70)
											Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(70)
											Float tmp62 = (a14 * b42);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(70)
											Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(70)
											te[(int)4] = tmp63;
											HX_STACK_LINE(70)
											Float tmp64 = (a11 * b13);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(70)
											Float tmp65 = (a12 * b23);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(70)
											Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(70)
											Float tmp67 = (a13 * b33);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(70)
											Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(70)
											Float tmp69 = (a14 * b43);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(70)
											Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(70)
											te[(int)8] = tmp70;
											HX_STACK_LINE(70)
											Float tmp71 = (a11 * b14);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(70)
											Float tmp72 = (a12 * b24);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(70)
											Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(70)
											Float tmp74 = (a13 * b34);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(70)
											Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(70)
											Float tmp76 = (a14 * b44);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(70)
											Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(70)
											te[(int)12] = tmp77;
											HX_STACK_LINE(70)
											Float tmp78 = (a21 * b11);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(70)
											Float tmp79 = (a22 * b21);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(70)
											Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(70)
											Float tmp81 = (a23 * b31);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(70)
											Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(70)
											Float tmp83 = (a24 * b41);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(70)
											Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(70)
											te[(int)1] = tmp84;
											HX_STACK_LINE(70)
											Float tmp85 = (a21 * b12);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(70)
											Float tmp86 = (a22 * b22);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(70)
											Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(70)
											Float tmp88 = (a23 * b32);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(70)
											Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(70)
											Float tmp90 = (a24 * b42);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(70)
											Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(70)
											te[(int)5] = tmp91;
											HX_STACK_LINE(70)
											Float tmp92 = (a21 * b13);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(70)
											Float tmp93 = (a22 * b23);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(70)
											Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(70)
											Float tmp95 = (a23 * b33);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(70)
											Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(70)
											Float tmp97 = (a24 * b43);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(70)
											Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(70)
											te[(int)9] = tmp98;
											HX_STACK_LINE(70)
											Float tmp99 = (a21 * b14);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(70)
											Float tmp100 = (a22 * b24);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(70)
											Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(70)
											Float tmp102 = (a23 * b34);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(70)
											Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(70)
											Float tmp104 = (a24 * b44);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(70)
											Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(70)
											te[(int)13] = tmp105;
											HX_STACK_LINE(70)
											Float tmp106 = (a31 * b11);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(70)
											Float tmp107 = (a32 * b21);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(70)
											Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(70)
											Float tmp109 = (a33 * b31);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(70)
											Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(70)
											Float tmp111 = (a34 * b41);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(70)
											Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(70)
											te[(int)2] = tmp112;
											HX_STACK_LINE(70)
											Float tmp113 = (a31 * b12);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(70)
											Float tmp114 = (a32 * b22);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(70)
											Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(70)
											Float tmp116 = (a33 * b32);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(70)
											Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(70)
											Float tmp118 = (a34 * b42);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(70)
											Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(70)
											te[(int)6] = tmp119;
											HX_STACK_LINE(70)
											Float tmp120 = (a31 * b13);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(70)
											Float tmp121 = (a32 * b23);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(70)
											Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(70)
											Float tmp123 = (a33 * b33);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(70)
											Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(70)
											Float tmp125 = (a34 * b43);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(70)
											Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(70)
											te[(int)10] = tmp126;
											HX_STACK_LINE(70)
											Float tmp127 = (a31 * b14);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(70)
											Float tmp128 = (a32 * b24);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(70)
											Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(70)
											Float tmp130 = (a33 * b34);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(70)
											Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(70)
											Float tmp132 = (a34 * b44);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(70)
											Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(70)
											te[(int)14] = tmp133;
											HX_STACK_LINE(70)
											Float tmp134 = (a41 * b11);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(70)
											Float tmp135 = (a42 * b21);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(70)
											Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(70)
											Float tmp137 = (a43 * b31);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(70)
											Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(70)
											Float tmp139 = (a44 * b41);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(70)
											Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(70)
											te[(int)3] = tmp140;
											HX_STACK_LINE(70)
											Float tmp141 = (a41 * b12);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(70)
											Float tmp142 = (a42 * b22);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(70)
											Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(70)
											Float tmp144 = (a43 * b32);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(70)
											Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(70)
											Float tmp146 = (a44 * b42);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(70)
											Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(70)
											te[(int)7] = tmp147;
											HX_STACK_LINE(70)
											Float tmp148 = (a41 * b13);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(70)
											Float tmp149 = (a42 * b23);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(70)
											Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(70)
											Float tmp151 = (a43 * b33);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(70)
											Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(70)
											Float tmp153 = (a44 * b43);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(70)
											Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(70)
											te[(int)11] = tmp154;
											HX_STACK_LINE(70)
											Float tmp155 = (a41 * b14);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(70)
											Float tmp156 = (a42 * b24);		HX_STACK_VAR(tmp156,"tmp156");
											HX_STACK_LINE(70)
											Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
											HX_STACK_LINE(70)
											Float tmp158 = (a43 * b34);		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(70)
											Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
											HX_STACK_LINE(70)
											Float tmp160 = (a44 * b44);		HX_STACK_VAR(tmp160,"tmp160");
											HX_STACK_LINE(70)
											Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
											HX_STACK_LINE(70)
											te[(int)15] = tmp161;
											HX_STACK_LINE(70)
											_this2;
										}
									}
									HX_STACK_LINE(70)
									bool tmp17 = (_this1->parent != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(70)
									if ((tmp17)){
										HX_STACK_LINE(70)
										::phoenix::Spatial tmp18 = _this1->get_world();		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(70)
										::phoenix::Spatial _this2 = tmp18;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(70)
										::phoenix::Matrix tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											::phoenix::Matrix tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												::phoenix::Spatial tmp21 = _this1->get_world();		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(70)
												::phoenix::Spatial _this3 = tmp21;		HX_STACK_VAR(_this3,"_this3");
												HX_STACK_LINE(70)
												tmp20 = _this3->matrix;
											}
											HX_STACK_LINE(70)
											::phoenix::Matrix _this3 = tmp20;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(70)
											::phoenix::Matrix tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												::phoenix::Spatial tmp22 = _this1->parent->get_world();		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(70)
												::phoenix::Spatial _this4 = tmp22;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(70)
												tmp21 = _this4->matrix;
											}
											HX_STACK_LINE(70)
											::phoenix::Matrix _a = tmp21;		HX_STACK_VAR(_a,"_a");
											HX_STACK_LINE(70)
											Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(70)
											::phoenix::Matrix tmp22 = _this1->local->matrix;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(70)
											Array< Float > be = tmp22->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(70)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(70)
											Float tmp23 = ae->__get((int)0);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(70)
											Float a11 = tmp23;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(70)
											Float tmp24 = ae->__get((int)4);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(70)
											Float a12 = tmp24;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(70)
											Float tmp25 = ae->__get((int)8);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(70)
											Float a13 = tmp25;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(70)
											Float tmp26 = ae->__get((int)12);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(70)
											Float a14 = tmp26;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(70)
											Float tmp27 = ae->__get((int)1);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(70)
											Float a21 = tmp27;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(70)
											Float tmp28 = ae->__get((int)5);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(70)
											Float a22 = tmp28;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(70)
											Float tmp29 = ae->__get((int)9);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(70)
											Float a23 = tmp29;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(70)
											Float tmp30 = ae->__get((int)13);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(70)
											Float a24 = tmp30;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(70)
											Float tmp31 = ae->__get((int)2);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(70)
											Float a31 = tmp31;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(70)
											Float tmp32 = ae->__get((int)6);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(70)
											Float a32 = tmp32;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(70)
											Float tmp33 = ae->__get((int)10);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(70)
											Float a33 = tmp33;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(70)
											Float tmp34 = ae->__get((int)14);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(70)
											Float a34 = tmp34;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(70)
											Float tmp35 = ae->__get((int)3);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(70)
											Float a41 = tmp35;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(70)
											Float tmp36 = ae->__get((int)7);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(70)
											Float a42 = tmp36;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(70)
											Float tmp37 = ae->__get((int)11);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(70)
											Float a43 = tmp37;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(70)
											Float tmp38 = ae->__get((int)15);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(70)
											Float a44 = tmp38;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(70)
											Float tmp39 = be->__get((int)0);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(70)
											Float b11 = tmp39;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(70)
											Float tmp40 = be->__get((int)4);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(70)
											Float b12 = tmp40;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(70)
											Float tmp41 = be->__get((int)8);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(70)
											Float b13 = tmp41;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(70)
											Float tmp42 = be->__get((int)12);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(70)
											Float b14 = tmp42;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(70)
											Float tmp43 = be->__get((int)1);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(70)
											Float b21 = tmp43;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(70)
											Float tmp44 = be->__get((int)5);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(70)
											Float b22 = tmp44;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(70)
											Float tmp45 = be->__get((int)9);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(70)
											Float b23 = tmp45;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(70)
											Float tmp46 = be->__get((int)13);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(70)
											Float b24 = tmp46;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(70)
											Float tmp47 = be->__get((int)2);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(70)
											Float b31 = tmp47;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(70)
											Float tmp48 = be->__get((int)6);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(70)
											Float b32 = tmp48;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(70)
											Float tmp49 = be->__get((int)10);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(70)
											Float b33 = tmp49;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(70)
											Float tmp50 = be->__get((int)14);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(70)
											Float b34 = tmp50;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(70)
											Float tmp51 = be->__get((int)3);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(70)
											Float b41 = tmp51;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(70)
											Float tmp52 = be->__get((int)7);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(70)
											Float b42 = tmp52;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(70)
											Float tmp53 = be->__get((int)11);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(70)
											Float b43 = tmp53;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(70)
											Float tmp54 = be->__get((int)15);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(70)
											Float b44 = tmp54;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(70)
											Float tmp55 = (a11 * b11);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(70)
											Float tmp56 = (a12 * b21);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(70)
											Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(70)
											Float tmp58 = (a13 * b31);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(70)
											Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(70)
											Float tmp60 = (a14 * b41);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(70)
											Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(70)
											te[(int)0] = tmp61;
											HX_STACK_LINE(70)
											Float tmp62 = (a11 * b12);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(70)
											Float tmp63 = (a12 * b22);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(70)
											Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(70)
											Float tmp65 = (a13 * b32);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(70)
											Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(70)
											Float tmp67 = (a14 * b42);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(70)
											Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(70)
											te[(int)4] = tmp68;
											HX_STACK_LINE(70)
											Float tmp69 = (a11 * b13);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(70)
											Float tmp70 = (a12 * b23);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(70)
											Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(70)
											Float tmp72 = (a13 * b33);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(70)
											Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(70)
											Float tmp74 = (a14 * b43);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(70)
											Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(70)
											te[(int)8] = tmp75;
											HX_STACK_LINE(70)
											Float tmp76 = (a11 * b14);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(70)
											Float tmp77 = (a12 * b24);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(70)
											Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(70)
											Float tmp79 = (a13 * b34);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(70)
											Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(70)
											Float tmp81 = (a14 * b44);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(70)
											Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(70)
											te[(int)12] = tmp82;
											HX_STACK_LINE(70)
											Float tmp83 = (a21 * b11);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(70)
											Float tmp84 = (a22 * b21);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(70)
											Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(70)
											Float tmp86 = (a23 * b31);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(70)
											Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(70)
											Float tmp88 = (a24 * b41);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(70)
											Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(70)
											te[(int)1] = tmp89;
											HX_STACK_LINE(70)
											Float tmp90 = (a21 * b12);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(70)
											Float tmp91 = (a22 * b22);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(70)
											Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(70)
											Float tmp93 = (a23 * b32);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(70)
											Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(70)
											Float tmp95 = (a24 * b42);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(70)
											Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(70)
											te[(int)5] = tmp96;
											HX_STACK_LINE(70)
											Float tmp97 = (a21 * b13);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(70)
											Float tmp98 = (a22 * b23);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(70)
											Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(70)
											Float tmp100 = (a23 * b33);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(70)
											Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(70)
											Float tmp102 = (a24 * b43);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(70)
											Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(70)
											te[(int)9] = tmp103;
											HX_STACK_LINE(70)
											Float tmp104 = (a21 * b14);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(70)
											Float tmp105 = (a22 * b24);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(70)
											Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(70)
											Float tmp107 = (a23 * b34);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(70)
											Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(70)
											Float tmp109 = (a24 * b44);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(70)
											Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(70)
											te[(int)13] = tmp110;
											HX_STACK_LINE(70)
											Float tmp111 = (a31 * b11);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(70)
											Float tmp112 = (a32 * b21);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(70)
											Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(70)
											Float tmp114 = (a33 * b31);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(70)
											Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(70)
											Float tmp116 = (a34 * b41);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(70)
											Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(70)
											te[(int)2] = tmp117;
											HX_STACK_LINE(70)
											Float tmp118 = (a31 * b12);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(70)
											Float tmp119 = (a32 * b22);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(70)
											Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(70)
											Float tmp121 = (a33 * b32);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(70)
											Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(70)
											Float tmp123 = (a34 * b42);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(70)
											Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(70)
											te[(int)6] = tmp124;
											HX_STACK_LINE(70)
											Float tmp125 = (a31 * b13);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(70)
											Float tmp126 = (a32 * b23);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(70)
											Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(70)
											Float tmp128 = (a33 * b33);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(70)
											Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(70)
											Float tmp130 = (a34 * b43);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(70)
											Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(70)
											te[(int)10] = tmp131;
											HX_STACK_LINE(70)
											Float tmp132 = (a31 * b14);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(70)
											Float tmp133 = (a32 * b24);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(70)
											Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(70)
											Float tmp135 = (a33 * b34);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(70)
											Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(70)
											Float tmp137 = (a34 * b44);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(70)
											Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(70)
											te[(int)14] = tmp138;
											HX_STACK_LINE(70)
											Float tmp139 = (a41 * b11);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(70)
											Float tmp140 = (a42 * b21);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(70)
											Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(70)
											Float tmp142 = (a43 * b31);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(70)
											Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(70)
											Float tmp144 = (a44 * b41);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(70)
											Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(70)
											te[(int)3] = tmp145;
											HX_STACK_LINE(70)
											Float tmp146 = (a41 * b12);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(70)
											Float tmp147 = (a42 * b22);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(70)
											Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(70)
											Float tmp149 = (a43 * b32);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(70)
											Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(70)
											Float tmp151 = (a44 * b42);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(70)
											Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(70)
											te[(int)7] = tmp152;
											HX_STACK_LINE(70)
											Float tmp153 = (a41 * b13);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(70)
											Float tmp154 = (a42 * b23);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(70)
											Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(70)
											Float tmp156 = (a43 * b33);		HX_STACK_VAR(tmp156,"tmp156");
											HX_STACK_LINE(70)
											Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
											HX_STACK_LINE(70)
											Float tmp158 = (a44 * b43);		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(70)
											Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
											HX_STACK_LINE(70)
											te[(int)11] = tmp159;
											HX_STACK_LINE(70)
											Float tmp160 = (a41 * b14);		HX_STACK_VAR(tmp160,"tmp160");
											HX_STACK_LINE(70)
											Float tmp161 = (a42 * b24);		HX_STACK_VAR(tmp161,"tmp161");
											HX_STACK_LINE(70)
											Float tmp162 = (tmp160 + tmp161);		HX_STACK_VAR(tmp162,"tmp162");
											HX_STACK_LINE(70)
											Float tmp163 = (a43 * b34);		HX_STACK_VAR(tmp163,"tmp163");
											HX_STACK_LINE(70)
											Float tmp164 = (tmp162 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
											HX_STACK_LINE(70)
											Float tmp165 = (a44 * b44);		HX_STACK_VAR(tmp165,"tmp165");
											HX_STACK_LINE(70)
											Float tmp166 = (tmp164 + tmp165);		HX_STACK_VAR(tmp166,"tmp166");
											HX_STACK_LINE(70)
											te[(int)15] = tmp166;
											HX_STACK_LINE(70)
											tmp19 = _this3;
										}
										HX_STACK_LINE(70)
										::phoenix::Matrix _m = tmp19;		HX_STACK_VAR(_m,"_m");
										HX_STACK_LINE(70)
										_this2->matrix = _m;
										HX_STACK_LINE(70)
										bool tmp20 = (_m != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(70)
										if ((tmp20)){
											HX_STACK_LINE(70)
											::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
												HX_STACK_LINE(70)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(70)
												bool tmp22 = (array != null());		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(70)
												if ((tmp22)){
													HX_STACK_LINE(70)
													::snow::api::buffers::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(70)
													{
														HX_STACK_LINE(70)
														::snow::api::buffers::ArrayBufferView tmp24 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(70)
														::snow::api::buffers::ArrayBufferView _this3 = tmp24;		HX_STACK_VAR(_this3,"_this3");
														HX_STACK_LINE(70)
														_this3->byteOffset = (int)0;
														HX_STACK_LINE(70)
														_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
														HX_STACK_LINE(70)
														int tmp25 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(70)
														_this3->byteLength = tmp25;
														HX_STACK_LINE(70)
														::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(70)
														{
															HX_STACK_LINE(70)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(70)
															int tmp27 = _this3->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(70)
															::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(70)
															this2 = tmp28;
															HX_STACK_LINE(70)
															tmp26 = this2;
														}
														HX_STACK_LINE(70)
														_this3->buffer = tmp26;
														HX_STACK_LINE(70)
														_this3->copyFromArray(((Array< Float >)(array)),null());
														HX_STACK_LINE(70)
														tmp23 = _this3;
													}
													HX_STACK_LINE(70)
													this1 = tmp23;
												}
												else{
													HX_STACK_LINE(70)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
												}
												HX_STACK_LINE(70)
												tmp21 = this1;
											}
											HX_STACK_LINE(70)
											_this2->floats = tmp21;
										}
										HX_STACK_LINE(70)
										_this2->matrix;
									}
									else{
										HX_STACK_LINE(70)
										::phoenix::Spatial tmp18 = _this1->get_world();		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(70)
										::phoenix::Spatial _this2 = tmp18;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(70)
										::phoenix::Matrix tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(70)
										{
											HX_STACK_LINE(70)
											::phoenix::Matrix tmp20 = _this1->local->matrix;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(70)
											Array< Float > te = tmp20->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(70)
											Float tmp21 = te->__get((int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(70)
											Float tmp22 = te->__get((int)4);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(70)
											Float tmp23 = te->__get((int)8);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(70)
											Float tmp24 = te->__get((int)12);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(70)
											Float tmp25 = te->__get((int)1);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(70)
											Float tmp26 = te->__get((int)5);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(70)
											Float tmp27 = te->__get((int)9);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(70)
											Float tmp28 = te->__get((int)13);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(70)
											Float tmp29 = te->__get((int)2);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(70)
											Float tmp30 = te->__get((int)6);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(70)
											Float tmp31 = te->__get((int)10);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(70)
											Float tmp32 = te->__get((int)14);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(70)
											Float tmp33 = te->__get((int)3);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(70)
											Float tmp34 = te->__get((int)7);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(70)
											Float tmp35 = te->__get((int)11);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(70)
											Float tmp36 = te->__get((int)15);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(70)
											tmp19 = ::phoenix::Matrix_obj::__new(tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31,tmp32,tmp33,tmp34,tmp35,tmp36);
										}
										HX_STACK_LINE(70)
										::phoenix::Matrix _m = tmp19;		HX_STACK_VAR(_m,"_m");
										HX_STACK_LINE(70)
										_this2->matrix = _m;
										HX_STACK_LINE(70)
										bool tmp20 = (_m != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(70)
										if ((tmp20)){
											HX_STACK_LINE(70)
											::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
												HX_STACK_LINE(70)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(70)
												bool tmp22 = (array != null());		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(70)
												if ((tmp22)){
													HX_STACK_LINE(70)
													::snow::api::buffers::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(70)
													{
														HX_STACK_LINE(70)
														::snow::api::buffers::ArrayBufferView tmp24 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(70)
														::snow::api::buffers::ArrayBufferView _this3 = tmp24;		HX_STACK_VAR(_this3,"_this3");
														HX_STACK_LINE(70)
														_this3->byteOffset = (int)0;
														HX_STACK_LINE(70)
														_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
														HX_STACK_LINE(70)
														int tmp25 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(70)
														_this3->byteLength = tmp25;
														HX_STACK_LINE(70)
														::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(70)
														{
															HX_STACK_LINE(70)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(70)
															int tmp27 = _this3->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(70)
															::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(70)
															this2 = tmp28;
															HX_STACK_LINE(70)
															tmp26 = this2;
														}
														HX_STACK_LINE(70)
														_this3->buffer = tmp26;
														HX_STACK_LINE(70)
														_this3->copyFromArray(((Array< Float >)(array)),null());
														HX_STACK_LINE(70)
														tmp23 = _this3;
													}
													HX_STACK_LINE(70)
													this1 = tmp23;
												}
												else{
													HX_STACK_LINE(70)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
												}
												HX_STACK_LINE(70)
												tmp21 = this1;
											}
											HX_STACK_LINE(70)
											_this2->floats = tmp21;
										}
										HX_STACK_LINE(70)
										_this2->matrix;
									}
									HX_STACK_LINE(70)
									{
										HX_STACK_LINE(70)
										::phoenix::Spatial tmp18 = _this1->get_world();		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(70)
										::phoenix::Spatial _this2 = tmp18;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(70)
										bool tmp19 = _this2->auto_decompose;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(70)
										if ((tmp19)){
											HX_STACK_LINE(70)
											::phoenix::MatrixTransform tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
												HX_STACK_LINE(70)
												::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
												HX_STACK_LINE(70)
												::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
												HX_STACK_LINE(70)
												::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
												HX_STACK_LINE(70)
												Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(70)
												::phoenix::Matrix tmp21 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(70)
												::phoenix::Matrix matrix = tmp21;		HX_STACK_VAR(matrix,"matrix");
												HX_STACK_LINE(70)
												Float tmp22 = te->__get((int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(70)
												Float _ax_x = tmp22;		HX_STACK_VAR(_ax_x,"_ax_x");
												HX_STACK_LINE(70)
												Float tmp23 = te->__get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(70)
												Float _ax_y = tmp23;		HX_STACK_VAR(_ax_y,"_ax_y");
												HX_STACK_LINE(70)
												Float tmp24 = te->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(70)
												Float _ax_z = tmp24;		HX_STACK_VAR(_ax_z,"_ax_z");
												HX_STACK_LINE(70)
												Float tmp25 = te->__get((int)4);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(70)
												Float _ay_x = tmp25;		HX_STACK_VAR(_ay_x,"_ay_x");
												HX_STACK_LINE(70)
												Float tmp26 = te->__get((int)5);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(70)
												Float _ay_y = tmp26;		HX_STACK_VAR(_ay_y,"_ay_y");
												HX_STACK_LINE(70)
												Float tmp27 = te->__get((int)6);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(70)
												Float _ay_z = tmp27;		HX_STACK_VAR(_ay_z,"_ay_z");
												HX_STACK_LINE(70)
												Float tmp28 = te->__get((int)8);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(70)
												Float _az_x = tmp28;		HX_STACK_VAR(_az_x,"_az_x");
												HX_STACK_LINE(70)
												Float tmp29 = te->__get((int)9);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(70)
												Float _az_y = tmp29;		HX_STACK_VAR(_az_y,"_az_y");
												HX_STACK_LINE(70)
												Float tmp30 = te->__get((int)10);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(70)
												Float _az_z = tmp30;		HX_STACK_VAR(_az_z,"_az_z");
												HX_STACK_LINE(70)
												Float tmp31 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(70)
												Float tmp32 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(70)
												Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(70)
												Float tmp34 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(70)
												Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(70)
												Float tmp36 = ::Math_obj::sqrt(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(70)
												Float _ax_length = tmp36;		HX_STACK_VAR(_ax_length,"_ax_length");
												HX_STACK_LINE(70)
												Float tmp37 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(70)
												Float tmp38 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(70)
												Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(70)
												Float tmp40 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(70)
												Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(70)
												Float tmp42 = ::Math_obj::sqrt(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(70)
												Float _ay_length = tmp42;		HX_STACK_VAR(_ay_length,"_ay_length");
												HX_STACK_LINE(70)
												Float tmp43 = (_az_x * _az_x);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(70)
												Float tmp44 = (_az_y * _az_y);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(70)
												Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(70)
												Float tmp46 = (_az_z * _az_z);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(70)
												Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(70)
												Float tmp48 = ::Math_obj::sqrt(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(70)
												Float _az_length = tmp48;		HX_STACK_VAR(_az_length,"_az_length");
												HX_STACK_LINE(70)
												bool tmp49 = (_quaternion == null());		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(70)
												if ((tmp49)){
													HX_STACK_LINE(70)
													::phoenix::Quaternion tmp50 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(70)
													_quaternion = tmp50;
												}
												HX_STACK_LINE(70)
												bool tmp50 = (_position == null());		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(70)
												if ((tmp50)){
													HX_STACK_LINE(70)
													Float tmp51 = te->__get((int)12);		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(70)
													Float tmp52 = te->__get((int)13);		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(70)
													Float tmp53 = te->__get((int)14);		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(70)
													::phoenix::Vector tmp54 = ::phoenix::Vector_obj::__new(tmp51,tmp52,tmp53,null());		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(70)
													_position = tmp54;
												}
												else{
													HX_STACK_LINE(70)
													{
														HX_STACK_LINE(70)
														Float tmp51 = te->__get((int)12);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(70)
														Float _x = tmp51;		HX_STACK_VAR(_x,"_x");
														HX_STACK_LINE(70)
														_position->x = _x;
														HX_STACK_LINE(70)
														bool tmp52 = _position->_construct;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(70)
														if ((tmp52)){
															HX_STACK_LINE(70)
															_position->x;
														}
														else{
															HX_STACK_LINE(70)
															bool tmp53 = (_position->listen_x != null());		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(70)
															bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
															HX_STACK_LINE(70)
															if ((tmp53)){
																HX_STACK_LINE(70)
																bool tmp55 = _position->ignore_listeners;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(70)
																bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
																HX_STACK_LINE(70)
																tmp54 = !(tmp56);
															}
															else{
																HX_STACK_LINE(70)
																tmp54 = false;
															}
															HX_STACK_LINE(70)
															if ((tmp54)){
																HX_STACK_LINE(70)
																Float tmp55 = _x;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(70)
																_position->listen_x(tmp55);
															}
															HX_STACK_LINE(70)
															_position->x;
														}
													}
													HX_STACK_LINE(70)
													{
														HX_STACK_LINE(70)
														Float tmp51 = te->__get((int)13);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(70)
														Float _y = tmp51;		HX_STACK_VAR(_y,"_y");
														HX_STACK_LINE(70)
														_position->y = _y;
														HX_STACK_LINE(70)
														bool tmp52 = _position->_construct;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(70)
														if ((tmp52)){
															HX_STACK_LINE(70)
															_position->y;
														}
														else{
															HX_STACK_LINE(70)
															bool tmp53 = (_position->listen_y != null());		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(70)
															bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
															HX_STACK_LINE(70)
															if ((tmp53)){
																HX_STACK_LINE(70)
																bool tmp55 = _position->ignore_listeners;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(70)
																bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
																HX_STACK_LINE(70)
																tmp54 = !(tmp56);
															}
															else{
																HX_STACK_LINE(70)
																tmp54 = false;
															}
															HX_STACK_LINE(70)
															if ((tmp54)){
																HX_STACK_LINE(70)
																Float tmp55 = _y;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(70)
																_position->listen_y(tmp55);
															}
															HX_STACK_LINE(70)
															_position->y;
														}
													}
													HX_STACK_LINE(70)
													{
														HX_STACK_LINE(70)
														Float tmp51 = te->__get((int)14);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(70)
														Float _z = tmp51;		HX_STACK_VAR(_z,"_z");
														HX_STACK_LINE(70)
														_position->z = _z;
														HX_STACK_LINE(70)
														bool tmp52 = _position->_construct;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(70)
														if ((tmp52)){
															HX_STACK_LINE(70)
															_position->z;
														}
														else{
															HX_STACK_LINE(70)
															bool tmp53 = (_position->listen_z != null());		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(70)
															bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
															HX_STACK_LINE(70)
															if ((tmp53)){
																HX_STACK_LINE(70)
																bool tmp55 = _position->ignore_listeners;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(70)
																bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
																HX_STACK_LINE(70)
																tmp54 = !(tmp56);
															}
															else{
																HX_STACK_LINE(70)
																tmp54 = false;
															}
															HX_STACK_LINE(70)
															if ((tmp54)){
																HX_STACK_LINE(70)
																Float tmp55 = _z;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(70)
																_position->listen_z(tmp55);
															}
															HX_STACK_LINE(70)
															_position->z;
														}
													}
												}
												HX_STACK_LINE(70)
												bool tmp51 = (_scale == null());		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(70)
												if ((tmp51)){
													HX_STACK_LINE(70)
													::phoenix::Vector tmp52 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(70)
													_scale = tmp52;
												}
												else{
													HX_STACK_LINE(70)
													{
														HX_STACK_LINE(70)
														_scale->x = _ax_length;
														HX_STACK_LINE(70)
														bool tmp52 = _scale->_construct;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(70)
														if ((tmp52)){
															HX_STACK_LINE(70)
															_scale->x;
														}
														else{
															HX_STACK_LINE(70)
															bool tmp53 = (_scale->listen_x != null());		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(70)
															bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
															HX_STACK_LINE(70)
															if ((tmp53)){
																HX_STACK_LINE(70)
																bool tmp55 = _scale->ignore_listeners;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(70)
																bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
																HX_STACK_LINE(70)
																tmp54 = !(tmp56);
															}
															else{
																HX_STACK_LINE(70)
																tmp54 = false;
															}
															HX_STACK_LINE(70)
															if ((tmp54)){
																HX_STACK_LINE(70)
																Float tmp55 = _ax_length;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(70)
																_scale->listen_x(tmp55);
															}
															HX_STACK_LINE(70)
															_scale->x;
														}
													}
													HX_STACK_LINE(70)
													{
														HX_STACK_LINE(70)
														_scale->y = _ay_length;
														HX_STACK_LINE(70)
														bool tmp52 = _scale->_construct;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(70)
														if ((tmp52)){
															HX_STACK_LINE(70)
															_scale->y;
														}
														else{
															HX_STACK_LINE(70)
															bool tmp53 = (_scale->listen_y != null());		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(70)
															bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
															HX_STACK_LINE(70)
															if ((tmp53)){
																HX_STACK_LINE(70)
																bool tmp55 = _scale->ignore_listeners;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(70)
																bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
																HX_STACK_LINE(70)
																tmp54 = !(tmp56);
															}
															else{
																HX_STACK_LINE(70)
																tmp54 = false;
															}
															HX_STACK_LINE(70)
															if ((tmp54)){
																HX_STACK_LINE(70)
																Float tmp55 = _ay_length;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(70)
																_scale->listen_y(tmp55);
															}
															HX_STACK_LINE(70)
															_scale->y;
														}
													}
													HX_STACK_LINE(70)
													{
														HX_STACK_LINE(70)
														_scale->z = _az_length;
														HX_STACK_LINE(70)
														bool tmp52 = _scale->_construct;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(70)
														if ((tmp52)){
															HX_STACK_LINE(70)
															_scale->z;
														}
														else{
															HX_STACK_LINE(70)
															bool tmp53 = (_scale->listen_z != null());		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(70)
															bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
															HX_STACK_LINE(70)
															if ((tmp53)){
																HX_STACK_LINE(70)
																bool tmp55 = _scale->ignore_listeners;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(70)
																bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
																HX_STACK_LINE(70)
																tmp54 = !(tmp56);
															}
															else{
																HX_STACK_LINE(70)
																tmp54 = false;
															}
															HX_STACK_LINE(70)
															if ((tmp54)){
																HX_STACK_LINE(70)
																Float tmp55 = _az_length;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(70)
																_scale->listen_z(tmp55);
															}
															HX_STACK_LINE(70)
															_scale->z;
														}
													}
												}
												HX_STACK_LINE(70)
												matrix->elements = _this3->elements->concat(Array_obj< Float >::__new());
												HX_STACK_LINE(70)
												Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
												HX_STACK_LINE(70)
												Float tmp52 = _ax_length;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(70)
												hx::DivEq(me[(int)0],tmp52);
												HX_STACK_LINE(70)
												Float tmp53 = _ax_length;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(70)
												hx::DivEq(me[(int)1],tmp53);
												HX_STACK_LINE(70)
												Float tmp54 = _ax_length;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(70)
												hx::DivEq(me[(int)2],tmp54);
												HX_STACK_LINE(70)
												Float tmp55 = _ay_length;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(70)
												hx::DivEq(me[(int)4],tmp55);
												HX_STACK_LINE(70)
												Float tmp56 = _ay_length;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(70)
												hx::DivEq(me[(int)5],tmp56);
												HX_STACK_LINE(70)
												Float tmp57 = _ay_length;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(70)
												hx::DivEq(me[(int)6],tmp57);
												HX_STACK_LINE(70)
												Float tmp58 = _az_length;		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(70)
												hx::DivEq(me[(int)8],tmp58);
												HX_STACK_LINE(70)
												Float tmp59 = _az_length;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(70)
												hx::DivEq(me[(int)9],tmp59);
												HX_STACK_LINE(70)
												Float tmp60 = _az_length;		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(70)
												hx::DivEq(me[(int)10],tmp60);
												HX_STACK_LINE(70)
												::phoenix::Matrix tmp61 = matrix;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(70)
												_quaternion->setFromRotationMatrix(tmp61);
												HX_STACK_LINE(70)
												bool tmp62 = (_this3->_transform == null());		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(70)
												if ((tmp62)){
													HX_STACK_LINE(70)
													::phoenix::MatrixTransform tmp63 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(70)
													_this3->_transform = tmp63;
												}
												else{
													HX_STACK_LINE(70)
													_this3->_transform->pos = _position;
													HX_STACK_LINE(70)
													_this3->_transform->rotation = _quaternion;
													HX_STACK_LINE(70)
													_this3->_transform->scale = _scale;
												}
												HX_STACK_LINE(70)
												tmp20 = _this3->_transform;
											}
											HX_STACK_LINE(70)
											::phoenix::MatrixTransform _transform = tmp20;		HX_STACK_VAR(_transform,"_transform");
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
												HX_STACK_LINE(70)
												_this2->pos = _p;
												HX_STACK_LINE(70)
												bool tmp21 = (_p != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(70)
												if ((tmp21)){
													HX_STACK_LINE(70)
													::phoenix::Vector tmp22 = _this2->pos;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(70)
													Dynamic tmp23 = _this2->_pos_change_dyn();		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(70)
													::phoenix::Vector_obj::Listen(tmp22,tmp23);
													HX_STACK_LINE(70)
													bool tmp24 = (_this2->pos_changed != null());		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(70)
													bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(70)
													if ((tmp24)){
														HX_STACK_LINE(70)
														bool tmp26 = _this2->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(70)
														bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(70)
														tmp25 = !(tmp27);
													}
													else{
														HX_STACK_LINE(70)
														tmp25 = false;
													}
													HX_STACK_LINE(70)
													if ((tmp25)){
														HX_STACK_LINE(70)
														::phoenix::Vector tmp26 = _this2->pos;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(70)
														_this2->pos_changed(tmp26);
													}
												}
												HX_STACK_LINE(70)
												_this2->pos;
											}
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
												HX_STACK_LINE(70)
												_this2->rotation = _r;
												HX_STACK_LINE(70)
												bool tmp21 = (_r != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(70)
												if ((tmp21)){
													HX_STACK_LINE(70)
													{
														HX_STACK_LINE(70)
														::phoenix::Quaternion _q = _this2->rotation;		HX_STACK_VAR(_q,"_q");
														HX_STACK_LINE(70)
														Dynamic listener = _this2->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
														HX_STACK_LINE(70)
														_q->listen_x = listener;
														HX_STACK_LINE(70)
														_q->listen_y = listener;
														HX_STACK_LINE(70)
														_q->listen_z = listener;
														HX_STACK_LINE(70)
														_q->listen_w = listener;
													}
													HX_STACK_LINE(70)
													bool tmp22 = (_this2->rotation_changed != null());		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(70)
													bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(70)
													if ((tmp22)){
														HX_STACK_LINE(70)
														bool tmp24 = _this2->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(70)
														bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(70)
														tmp23 = !(tmp25);
													}
													else{
														HX_STACK_LINE(70)
														tmp23 = false;
													}
													HX_STACK_LINE(70)
													if ((tmp23)){
														HX_STACK_LINE(70)
														::phoenix::Quaternion tmp24 = _this2->rotation;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(70)
														_this2->rotation_changed(tmp24);
													}
												}
												HX_STACK_LINE(70)
												_this2->rotation;
											}
											HX_STACK_LINE(70)
											{
												HX_STACK_LINE(70)
												::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
												HX_STACK_LINE(70)
												_this2->scale = _s;
												HX_STACK_LINE(70)
												bool tmp21 = (_s != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(70)
												if ((tmp21)){
													HX_STACK_LINE(70)
													::phoenix::Vector tmp22 = _this2->scale;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(70)
													Dynamic tmp23 = _this2->_scale_change_dyn();		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(70)
													::phoenix::Vector_obj::Listen(tmp22,tmp23);
													HX_STACK_LINE(70)
													bool tmp24 = (_this2->scale_changed != null());		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(70)
													bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(70)
													if ((tmp24)){
														HX_STACK_LINE(70)
														bool tmp26 = _this2->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(70)
														bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(70)
														tmp25 = !(tmp27);
													}
													else{
														HX_STACK_LINE(70)
														tmp25 = false;
													}
													HX_STACK_LINE(70)
													if ((tmp25)){
														HX_STACK_LINE(70)
														::phoenix::Vector tmp26 = _this2->scale;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(70)
														_this2->scale_changed(tmp26);
													}
												}
												HX_STACK_LINE(70)
												_this2->scale;
											}
										}
										HX_STACK_LINE(70)
										_this2;
									}
									HX_STACK_LINE(70)
									{
										HX_STACK_LINE(70)
										_this1->dirty = false;
										HX_STACK_LINE(70)
										bool tmp18 = _this1->dirty;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(70)
										bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(70)
										bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(70)
										if ((tmp19)){
											HX_STACK_LINE(70)
											bool tmp21 = _this1->_setup;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(70)
											bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(70)
											bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(70)
											tmp20 = !(tmp23);
										}
										else{
											HX_STACK_LINE(70)
											tmp20 = false;
										}
										HX_STACK_LINE(70)
										bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(70)
										bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(70)
										if ((tmp21)){
											HX_STACK_LINE(70)
											tmp22 = (_this1->_dirty_handlers != null());
										}
										else{
											HX_STACK_LINE(70)
											tmp22 = false;
										}
										HX_STACK_LINE(70)
										bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(70)
										if ((tmp22)){
											HX_STACK_LINE(70)
											int tmp24 = _this1->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(70)
											int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(70)
											tmp23 = (tmp25 > (int)0);
										}
										else{
											HX_STACK_LINE(70)
											tmp23 = false;
										}
										HX_STACK_LINE(70)
										if ((tmp23)){
											HX_STACK_LINE(70)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(70)
											cpp::ArrayBase _g11 = _this1->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(70)
											while((true)){
												HX_STACK_LINE(70)
												bool tmp24 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(70)
												bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(70)
												if ((tmp25)){
													HX_STACK_LINE(70)
													break;
												}
												HX_STACK_LINE(70)
												Dynamic tmp26 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(70)
												Dynamic _handler = tmp26;		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(70)
												++(_g1);
												HX_STACK_LINE(70)
												bool tmp27 = (_handler != null());		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(70)
												if ((tmp27)){
													HX_STACK_LINE(70)
													::phoenix::Transform tmp28 = _this1;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(70)
													_handler(tmp28).Cast< Void >();
												}
											}
										}
										HX_STACK_LINE(70)
										_this1->dirty;
									}
									HX_STACK_LINE(70)
									_this1->_cleaning = false;
									HX_STACK_LINE(70)
									bool tmp18 = (_this1->_clean_handlers != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(70)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(70)
									if ((tmp18)){
										HX_STACK_LINE(70)
										int tmp20 = _this1->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(70)
										int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(70)
										tmp19 = (tmp21 > (int)0);
									}
									else{
										HX_STACK_LINE(70)
										tmp19 = false;
									}
									HX_STACK_LINE(70)
									if ((tmp19)){
										HX_STACK_LINE(70)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(70)
										cpp::ArrayBase _g11 = _this1->_clean_handlers;		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(70)
										while((true)){
											HX_STACK_LINE(70)
											bool tmp20 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(70)
											bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(70)
											if ((tmp21)){
												HX_STACK_LINE(70)
												break;
											}
											HX_STACK_LINE(70)
											Dynamic tmp22 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(70)
											Dynamic _handler = tmp22;		HX_STACK_VAR(_handler,"_handler");
											HX_STACK_LINE(70)
											++(_g1);
											HX_STACK_LINE(70)
											bool tmp23 = (_handler != null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(70)
											if ((tmp23)){
												HX_STACK_LINE(70)
												::phoenix::Transform tmp24 = _this1;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(70)
												_handler(tmp24).Cast< Void >();
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(70)
						tmp9 = _this1->world;
					}
					HX_STACK_LINE(70)
					::phoenix::Spatial _this1 = tmp9;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(70)
					tmp8 = _this1->matrix;
				}
				HX_STACK_LINE(70)
				::phoenix::Matrix _m = tmp8;		HX_STACK_VAR(_m,"_m");
				HX_STACK_LINE(70)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(70)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(70)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(70)
				Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(70)
				{
					HX_STACK_LINE(70)
					Float tmp9 = e->__get((int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(70)
					Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(70)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(70)
					Float tmp12 = e->__get((int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(70)
					Float tmp13 = _y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(70)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(70)
					Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(70)
					Float tmp16 = e->__get((int)8);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(70)
					Float tmp17 = _z;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(70)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(70)
					Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(70)
					Float tmp20 = e->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(70)
					Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(70)
					Float _x1 = tmp21;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(70)
					Float tmp22 = e->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(70)
					Float tmp23 = _x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(70)
					Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(70)
					Float tmp25 = e->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(70)
					Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(70)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(70)
					Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(70)
					Float tmp29 = e->__get((int)9);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(70)
					Float tmp30 = _z;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(70)
					Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(70)
					Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(70)
					Float tmp33 = e->__get((int)13);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(70)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(70)
					Float _y1 = tmp34;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(70)
					Float tmp35 = e->__get((int)2);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(70)
					Float tmp36 = _x;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(70)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(70)
					Float tmp38 = e->__get((int)6);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(70)
					Float tmp39 = _y;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(70)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(70)
					Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(70)
					Float tmp42 = e->__get((int)10);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(70)
					Float tmp43 = _z;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(70)
					Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(70)
					Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(70)
					Float tmp46 = e->__get((int)14);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(70)
					Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(70)
					Float _z1 = tmp47;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(70)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(70)
					_this->ignore_listeners = true;
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						_this->x = _x1;
						HX_STACK_LINE(70)
						bool tmp48 = _this->_construct;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(70)
						if ((tmp48)){
							HX_STACK_LINE(70)
							_this->x;
						}
						else{
							HX_STACK_LINE(70)
							bool tmp49 = (_this->listen_x != null());		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(70)
							bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(70)
							if ((tmp49)){
								HX_STACK_LINE(70)
								bool tmp51 = _this->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(70)
								bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(70)
								tmp50 = !(tmp52);
							}
							else{
								HX_STACK_LINE(70)
								tmp50 = false;
							}
							HX_STACK_LINE(70)
							if ((tmp50)){
								HX_STACK_LINE(70)
								Float tmp51 = _x1;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(70)
								_this->listen_x(tmp51);
							}
							HX_STACK_LINE(70)
							_this->x;
						}
					}
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						_this->y = _y1;
						HX_STACK_LINE(70)
						bool tmp48 = _this->_construct;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(70)
						if ((tmp48)){
							HX_STACK_LINE(70)
							_this->y;
						}
						else{
							HX_STACK_LINE(70)
							bool tmp49 = (_this->listen_y != null());		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(70)
							bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(70)
							if ((tmp49)){
								HX_STACK_LINE(70)
								bool tmp51 = _this->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(70)
								bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(70)
								tmp50 = !(tmp52);
							}
							else{
								HX_STACK_LINE(70)
								tmp50 = false;
							}
							HX_STACK_LINE(70)
							if ((tmp50)){
								HX_STACK_LINE(70)
								Float tmp51 = _y1;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(70)
								_this->listen_y(tmp51);
							}
							HX_STACK_LINE(70)
							_this->y;
						}
					}
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						_this->z = _z1;
						HX_STACK_LINE(70)
						bool tmp48 = _this->_construct;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(70)
						if ((tmp48)){
							HX_STACK_LINE(70)
							_this->z;
						}
						else{
							HX_STACK_LINE(70)
							bool tmp49 = (_this->listen_z != null());		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(70)
							bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(70)
							if ((tmp49)){
								HX_STACK_LINE(70)
								bool tmp51 = _this->ignore_listeners;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(70)
								bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(70)
								tmp50 = !(tmp52);
							}
							else{
								HX_STACK_LINE(70)
								tmp50 = false;
							}
							HX_STACK_LINE(70)
							if ((tmp50)){
								HX_STACK_LINE(70)
								Float tmp51 = _z1;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(70)
								_this->listen_z(tmp51);
							}
							HX_STACK_LINE(70)
							_this->z;
						}
					}
					HX_STACK_LINE(70)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(70)
					bool tmp48 = (_this->listen_x != null());		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(70)
					bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(70)
					if ((tmp48)){
						HX_STACK_LINE(70)
						bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(70)
						bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(70)
						tmp49 = !(tmp51);
					}
					else{
						HX_STACK_LINE(70)
						tmp49 = false;
					}
					HX_STACK_LINE(70)
					if ((tmp49)){
						HX_STACK_LINE(70)
						Float tmp50 = _this->x;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(70)
						_this->listen_x(tmp50);
					}
					HX_STACK_LINE(70)
					bool tmp50 = (_this->listen_y != null());		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(70)
					bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(70)
					if ((tmp50)){
						HX_STACK_LINE(70)
						bool tmp52 = _this->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(70)
						bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(70)
						tmp51 = !(tmp53);
					}
					else{
						HX_STACK_LINE(70)
						tmp51 = false;
					}
					HX_STACK_LINE(70)
					if ((tmp51)){
						HX_STACK_LINE(70)
						Float tmp52 = _this->y;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(70)
						_this->listen_y(tmp52);
					}
					HX_STACK_LINE(70)
					bool tmp52 = (_this->listen_z != null());		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(70)
					bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(70)
					if ((tmp52)){
						HX_STACK_LINE(70)
						bool tmp54 = _this->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(70)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(70)
						tmp53 = !(tmp55);
					}
					else{
						HX_STACK_LINE(70)
						tmp53 = false;
					}
					HX_STACK_LINE(70)
					if ((tmp53)){
						HX_STACK_LINE(70)
						Float tmp54 = _this->z;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(70)
						_this->listen_z(tmp54);
					}
					HX_STACK_LINE(70)
					_this;
				}
				HX_STACK_LINE(70)
				tmp6 = _this;
			}
			HX_STACK_LINE(70)
			::phoenix::Vector _vert_j_pos = tmp6;		HX_STACK_VAR(_vert_j_pos,"_vert_j_pos");
			HX_STACK_LINE(72)
			bool tmp7 = (_vert_i_pos->y > _point->y);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			bool tmp8 = (_vert_j_pos->y > _point->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(72)
			bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(72)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(72)
			if ((tmp9)){
				HX_STACK_LINE(73)
				Float tmp11 = _point->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(73)
				Float tmp12 = (_vert_j_pos->x - _vert_i_pos->x);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(73)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				Float tmp14 = (_point->y - _vert_i_pos->y);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(73)
				Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(73)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(74)
				Float tmp18 = (_vert_j_pos->y - _vert_i_pos->y);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(74)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(73)
				Float tmp20 = (Float(tmp17) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(73)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(74)
				Float tmp22 = _vert_i_pos->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(73)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(73)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(73)
				tmp10 = (tmp11 < tmp24);
			}
			else{
				HX_STACK_LINE(72)
				tmp10 = false;
			}
			HX_STACK_LINE(72)
			if ((tmp10)){
				HX_STACK_LINE(75)
				bool tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(75)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(75)
				c = tmp12;
			}
			HX_STACK_LINE(78)
			j = i;
		}
	}
	HX_STACK_LINE(81)
	bool tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(GeometryUtils_obj,point_in_geometry,return )

::phoenix::Vector GeometryUtils_obj::intersect_ray_plane( ::phoenix::Vector _ray_start,::phoenix::Vector _ray_dir,::phoenix::Vector _plane_normal,::phoenix::Vector _plane_point){
	HX_STACK_FRAME("luxe.utils.GeometryUtils","intersect_ray_plane",0xfb92d043,"luxe.utils.GeometryUtils.intersect_ray_plane","luxe/utils/GeometryUtils.hx",87,0x749c9d76)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_ray_start,"_ray_start")
	HX_STACK_ARG(_ray_dir,"_ray_dir")
	HX_STACK_ARG(_plane_normal,"_plane_normal")
	HX_STACK_ARG(_plane_point,"_plane_point")
	HX_STACK_LINE(93)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		Float tmp1 = (_plane_point->x - _ray_start->x);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		Float tmp2 = (_plane_point->y - _ray_start->y);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		Float tmp3 = (_plane_point->z - _ray_start->z);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(tmp1,tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		::phoenix::Vector other = tmp4;		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(93)
		Float tmp5 = (_plane_normal->x * other->x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		Float tmp6 = (_plane_normal->y * other->y);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		Float tmp8 = (_plane_normal->z * other->z);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		tmp = (tmp7 + tmp8);
	}
	HX_STACK_LINE(93)
	Float part1 = tmp;		HX_STACK_VAR(part1,"part1");
	HX_STACK_LINE(94)
	Float tmp1 = (_plane_normal->x * _ray_dir->x);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	Float tmp2 = (_plane_normal->y * _ray_dir->y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(94)
	Float tmp4 = (_plane_normal->z * _ray_dir->z);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(94)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(94)
	Float part2 = tmp5;		HX_STACK_VAR(part2,"part2");
	HX_STACK_LINE(96)
	Float tmp6 = (Float(part1) / Float(part2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(96)
	Float T = tmp6;		HX_STACK_VAR(T,"T");
	HX_STACK_LINE(98)
	::phoenix::Vector tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		::phoenix::Vector tmp8 = _ray_dir;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(98)
		Float tmp9 = T;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(98)
		::phoenix::Vector tmp10 = ::phoenix::Vector_obj::Multiply(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(98)
		::phoenix::Vector b = tmp10;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(98)
		Float tmp11 = (_ray_start->x + b->x);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(98)
		Float tmp12 = (_ray_start->y + b->y);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(98)
		Float tmp13 = (_ray_start->z + b->z);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(98)
		tmp7 = ::phoenix::Vector_obj::__new(tmp11,tmp12,tmp13,null());
	}
	HX_STACK_LINE(98)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC4(GeometryUtils_obj,intersect_ray_plane,return )

Float GeometryUtils_obj::two_pi;


GeometryUtils_obj::GeometryUtils_obj()
{
}

Dynamic GeometryUtils_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"point_in_polygon") ) { return point_in_polygon_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"point_in_geometry") ) { return point_in_geometry_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"intersect_ray_plane") ) { return intersect_ray_plane_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"segments_for_smooth_circle") ) { return segments_for_smooth_circle_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"random_point_in_unit_circle") ) { return random_point_in_unit_circle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &GeometryUtils_obj::two_pi,HX_HCSTRING("two_pi","\x0c","\x0a","\xbc","\x2f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("segments_for_smooth_circle","\x6c","\xfc","\xe4","\xef"),
	HX_HCSTRING("random_point_in_unit_circle","\x5c","\x14","\x01","\x5f"),
	HX_HCSTRING("point_in_polygon","\xaf","\x7f","\xd0","\xfb"),
	HX_HCSTRING("point_in_geometry","\xdd","\x13","\xf7","\x00"),
	HX_HCSTRING("intersect_ray_plane","\x67","\x50","\xcf","\x67"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeometryUtils_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GeometryUtils_obj::two_pi,"two_pi");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeometryUtils_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GeometryUtils_obj::two_pi,"two_pi");
};

#endif

hx::Class GeometryUtils_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("two_pi","\x0c","\x0a","\xbc","\x2f"),
	::String(null()) };

void GeometryUtils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.GeometryUtils","\x4a","\x4a","\x01","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GeometryUtils_obj >;
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

void GeometryUtils_obj::__boot()
{
	two_pi= ((Float)6.283185307179586);
}

} // end namespace luxe
} // end namespace utils
