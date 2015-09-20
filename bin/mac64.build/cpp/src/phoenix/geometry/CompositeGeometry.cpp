#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
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
#ifndef INCLUDED_phoenix_geometry_CompositeGeometry
#include <phoenix/geometry/CompositeGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
namespace phoenix{
namespace geometry{

Void CompositeGeometry_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","new",0x5514d06e,"phoenix.geometry.CompositeGeometry.new","phoenix/geometry/CompositeGeometry.hx",20,0xbffd3ea2)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(22)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	super::__construct(tmp);
	HX_STACK_LINE(24)
	this->geometry = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//CompositeGeometry_obj::~CompositeGeometry_obj() { }

Dynamic CompositeGeometry_obj::__CreateEmpty() { return  new CompositeGeometry_obj; }
hx::ObjectPtr< CompositeGeometry_obj > CompositeGeometry_obj::__new(Dynamic _options)
{  hx::ObjectPtr< CompositeGeometry_obj > _result_ = new CompositeGeometry_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic CompositeGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CompositeGeometry_obj > _result_ = new CompositeGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String CompositeGeometry_obj::toString( ){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","toString",0xa10cddde,"phoenix.geometry.CompositeGeometry.toString","phoenix/geometry/CompositeGeometry.hx",28,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	::String tmp = ::Std_obj::string(this->geometry);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	::String tmp1 = (HX_HCSTRING("CompositeGeometry ","\x47","\x94","\xd0","\xb0") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	::String tmp2 = (tmp1 + HX_HCSTRING(" : ","\xc6","\x7a","\x18","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	::String tmp3 = ::Std_obj::string(this->geometry);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(CompositeGeometry_obj,toString,return )

Void CompositeGeometry_obj::clear( ){
{
		HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","clear",0x0f67111b,"phoenix.geometry.CompositeGeometry.clear","phoenix/geometry/CompositeGeometry.hx",34,0xbffd3ea2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(37)
			while((true)){
				HX_STACK_LINE(37)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(37)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(37)
				if ((tmp1)){
					HX_STACK_LINE(37)
					break;
				}
				HX_STACK_LINE(37)
				::phoenix::geometry::Geometry tmp2 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(37)
				::phoenix::geometry::Geometry geom = tmp2;		HX_STACK_VAR(geom,"geom");
				HX_STACK_LINE(37)
				++(_g);
				HX_STACK_LINE(38)
				{
					HX_STACK_LINE(38)
					::phoenix::Transform _this = geom->transform;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(38)
					{
						HX_STACK_LINE(38)
						_this->dirty = true;
						HX_STACK_LINE(38)
						bool tmp3 = _this->dirty;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(38)
						bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(38)
						bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(38)
						if ((tmp4)){
							HX_STACK_LINE(38)
							bool tmp6 = _this->_setup;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(38)
							bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(38)
							bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(38)
							tmp5 = !(tmp8);
						}
						else{
							HX_STACK_LINE(38)
							tmp5 = false;
						}
						HX_STACK_LINE(38)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(38)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(38)
						if ((tmp6)){
							HX_STACK_LINE(38)
							tmp7 = (_this->_dirty_handlers != null());
						}
						else{
							HX_STACK_LINE(38)
							tmp7 = false;
						}
						HX_STACK_LINE(38)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(38)
						if ((tmp7)){
							HX_STACK_LINE(38)
							int tmp9 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(38)
							int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(38)
							tmp8 = (tmp10 > (int)0);
						}
						else{
							HX_STACK_LINE(38)
							tmp8 = false;
						}
						HX_STACK_LINE(38)
						if ((tmp8)){
							HX_STACK_LINE(38)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(38)
							cpp::ArrayBase _g11 = _this->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(38)
							while((true)){
								HX_STACK_LINE(38)
								bool tmp9 = (_g2 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(38)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(38)
								if ((tmp10)){
									HX_STACK_LINE(38)
									break;
								}
								HX_STACK_LINE(38)
								Dynamic tmp11 = _g11->__GetItem(_g2);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(38)
								Dynamic _handler = tmp11;		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(38)
								++(_g2);
								HX_STACK_LINE(38)
								bool tmp12 = (_handler != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(38)
								if ((tmp12)){
									HX_STACK_LINE(38)
									::phoenix::Transform tmp13 = _this;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(38)
									_handler(tmp13).Cast< Void >();
								}
							}
						}
						HX_STACK_LINE(38)
						_this->dirty;
					}
					HX_STACK_LINE(38)
					bool tmp3 = (_this->parent != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(38)
					if ((tmp3)){
						HX_STACK_LINE(38)
						::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(38)
						bool tmp4 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(38)
						if ((tmp4)){
							HX_STACK_LINE(38)
							false;
						}
						else{
							HX_STACK_LINE(38)
							Dynamic tmp5 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(38)
							_this1->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp5);
						}
					}
					HX_STACK_LINE(38)
					_this->parent = null();
					HX_STACK_LINE(38)
					bool tmp4 = (_this->_parent_handlers != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(38)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(38)
					if ((tmp4)){
						HX_STACK_LINE(38)
						int tmp6 = _this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(38)
						int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(38)
						tmp5 = (tmp7 > (int)0);
					}
					else{
						HX_STACK_LINE(38)
						tmp5 = false;
					}
					HX_STACK_LINE(38)
					if ((tmp5)){
						HX_STACK_LINE(38)
						::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
						HX_STACK_LINE(38)
						{
							HX_STACK_LINE(38)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(38)
							cpp::ArrayBase _g11 = _this->_parent_handlers;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(38)
							while((true)){
								HX_STACK_LINE(38)
								bool tmp6 = (_g2 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(38)
								bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(38)
								if ((tmp7)){
									HX_STACK_LINE(38)
									break;
								}
								HX_STACK_LINE(38)
								Dynamic tmp8 = _g11->__GetItem(_g2);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(38)
								Dynamic _handler = tmp8;		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(38)
								++(_g2);
								HX_STACK_LINE(38)
								bool tmp9 = (_handler != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(38)
								if ((tmp9)){
									HX_STACK_LINE(38)
									::phoenix::Transform tmp10 = _parent;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(38)
									_handler(tmp10).Cast< Void >();
								}
							}
						}
					}
					HX_STACK_LINE(38)
					bool tmp6 = (_this->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(38)
					if ((tmp6)){
						HX_STACK_LINE(38)
						::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(38)
						bool tmp7 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(38)
						if ((tmp7)){
							HX_STACK_LINE(38)
							_this1->_clean_handlers = cpp::ArrayBase_obj::__new();
						}
						HX_STACK_LINE(38)
						Dynamic tmp8 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(38)
						_this1->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
					}
					HX_STACK_LINE(38)
					_this->parent;
				}
			}
		}
		HX_STACK_LINE(40)
		int tmp = this->geometry->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		this->geometry->splice((int)0,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompositeGeometry_obj,clear,(void))

Void CompositeGeometry_obj::replace( Array< ::Dynamic > _geometry){
{
		HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","replace",0x04056742,"phoenix.geometry.CompositeGeometry.replace","phoenix/geometry/CompositeGeometry.hx",45,0xbffd3ea2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_geometry,"_geometry")
		HX_STACK_LINE(48)
		this->clear();
		HX_STACK_LINE(50)
		this->geometry = _geometry;
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(52)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(52)
				if ((tmp1)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				::phoenix::geometry::Geometry tmp2 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				::phoenix::geometry::Geometry geom = tmp2;		HX_STACK_VAR(geom,"geom");
				HX_STACK_LINE(52)
				++(_g);
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(53)
					::phoenix::Transform _this = geom->transform;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(53)
					{
						HX_STACK_LINE(53)
						_this->dirty = true;
						HX_STACK_LINE(53)
						bool tmp3 = _this->dirty;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(53)
						bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(53)
						bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(53)
						if ((tmp4)){
							HX_STACK_LINE(53)
							bool tmp6 = _this->_setup;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(53)
							bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(53)
							bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(53)
							tmp5 = !(tmp8);
						}
						else{
							HX_STACK_LINE(53)
							tmp5 = false;
						}
						HX_STACK_LINE(53)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(53)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(53)
						if ((tmp6)){
							HX_STACK_LINE(53)
							tmp7 = (_this->_dirty_handlers != null());
						}
						else{
							HX_STACK_LINE(53)
							tmp7 = false;
						}
						HX_STACK_LINE(53)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(53)
						if ((tmp7)){
							HX_STACK_LINE(53)
							int tmp9 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(53)
							int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(53)
							tmp8 = (tmp10 > (int)0);
						}
						else{
							HX_STACK_LINE(53)
							tmp8 = false;
						}
						HX_STACK_LINE(53)
						if ((tmp8)){
							HX_STACK_LINE(53)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(53)
							cpp::ArrayBase _g11 = _this->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(53)
							while((true)){
								HX_STACK_LINE(53)
								bool tmp9 = (_g2 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(53)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(53)
								if ((tmp10)){
									HX_STACK_LINE(53)
									break;
								}
								HX_STACK_LINE(53)
								Dynamic tmp11 = _g11->__GetItem(_g2);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(53)
								Dynamic _handler = tmp11;		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(53)
								++(_g2);
								HX_STACK_LINE(53)
								bool tmp12 = (_handler != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(53)
								if ((tmp12)){
									HX_STACK_LINE(53)
									::phoenix::Transform tmp13 = _this;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(53)
									_handler(tmp13).Cast< Void >();
								}
							}
						}
						HX_STACK_LINE(53)
						_this->dirty;
					}
					HX_STACK_LINE(53)
					bool tmp3 = (_this->parent != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(53)
					if ((tmp3)){
						HX_STACK_LINE(53)
						::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(53)
						bool tmp4 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(53)
						if ((tmp4)){
							HX_STACK_LINE(53)
							false;
						}
						else{
							HX_STACK_LINE(53)
							Dynamic tmp5 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(53)
							_this1->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp5);
						}
					}
					HX_STACK_LINE(53)
					::phoenix::Transform tmp4 = this->transform;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(53)
					_this->parent = tmp4;
					HX_STACK_LINE(53)
					bool tmp5 = (_this->_parent_handlers != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(53)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(53)
					if ((tmp5)){
						HX_STACK_LINE(53)
						int tmp7 = _this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(53)
						int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(53)
						tmp6 = (tmp8 > (int)0);
					}
					else{
						HX_STACK_LINE(53)
						tmp6 = false;
					}
					HX_STACK_LINE(53)
					if ((tmp6)){
						HX_STACK_LINE(53)
						::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
						HX_STACK_LINE(53)
						{
							HX_STACK_LINE(53)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(53)
							cpp::ArrayBase _g11 = _this->_parent_handlers;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(53)
							while((true)){
								HX_STACK_LINE(53)
								bool tmp7 = (_g2 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(53)
								bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(53)
								if ((tmp8)){
									HX_STACK_LINE(53)
									break;
								}
								HX_STACK_LINE(53)
								Dynamic tmp9 = _g11->__GetItem(_g2);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(53)
								Dynamic _handler = tmp9;		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(53)
								++(_g2);
								HX_STACK_LINE(53)
								bool tmp10 = (_handler != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(53)
								if ((tmp10)){
									HX_STACK_LINE(53)
									::phoenix::Transform tmp11 = _parent;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(53)
									_handler(tmp11).Cast< Void >();
								}
							}
						}
					}
					HX_STACK_LINE(53)
					bool tmp7 = (_this->parent != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(53)
					if ((tmp7)){
						HX_STACK_LINE(53)
						::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(53)
						bool tmp8 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(53)
						if ((tmp8)){
							HX_STACK_LINE(53)
							_this1->_clean_handlers = cpp::ArrayBase_obj::__new();
						}
						HX_STACK_LINE(53)
						Dynamic tmp9 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(53)
						_this1->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
					}
					HX_STACK_LINE(53)
					_this->parent;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompositeGeometry_obj,replace,(void))

bool CompositeGeometry_obj::has_geometry( ::phoenix::geometry::Geometry geom){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","has_geometry",0x14ef8da9,"phoenix.geometry.CompositeGeometry.has_geometry","phoenix/geometry/CompositeGeometry.hx",58,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(geom,"geom")
	HX_STACK_LINE(60)
	::phoenix::geometry::Geometry tmp = geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	bool tmp1 = ::Lambda_obj::has(this->geometry,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(CompositeGeometry_obj,has_geometry,return )

Void CompositeGeometry_obj::add_geometry( ::phoenix::geometry::Geometry geom){
{
		HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","add_geometry",0x86f1ca02,"phoenix.geometry.CompositeGeometry.add_geometry","phoenix/geometry/CompositeGeometry.hx",64,0xbffd3ea2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(geom,"geom")
		HX_STACK_LINE(66)
		bool tmp = (geom != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		if ((tmp)){
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::phoenix::Transform _this = geom->transform;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					_this->dirty = true;
					HX_STACK_LINE(67)
					bool tmp1 = _this->dirty;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(67)
					bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(67)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(67)
					if ((tmp2)){
						HX_STACK_LINE(67)
						bool tmp4 = _this->_setup;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(67)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(67)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(67)
						tmp3 = !(tmp6);
					}
					else{
						HX_STACK_LINE(67)
						tmp3 = false;
					}
					HX_STACK_LINE(67)
					bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(67)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(67)
					if ((tmp4)){
						HX_STACK_LINE(67)
						tmp5 = (_this->_dirty_handlers != null());
					}
					else{
						HX_STACK_LINE(67)
						tmp5 = false;
					}
					HX_STACK_LINE(67)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(67)
					if ((tmp5)){
						HX_STACK_LINE(67)
						int tmp7 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(67)
						int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(67)
						tmp6 = (tmp8 > (int)0);
					}
					else{
						HX_STACK_LINE(67)
						tmp6 = false;
					}
					HX_STACK_LINE(67)
					if ((tmp6)){
						HX_STACK_LINE(67)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(67)
						cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(67)
						while((true)){
							HX_STACK_LINE(67)
							bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(67)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(67)
							if ((tmp8)){
								HX_STACK_LINE(67)
								break;
							}
							HX_STACK_LINE(67)
							Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(67)
							Dynamic _handler = tmp9;		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(67)
							++(_g);
							HX_STACK_LINE(67)
							bool tmp10 = (_handler != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(67)
							if ((tmp10)){
								HX_STACK_LINE(67)
								::phoenix::Transform tmp11 = _this;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(67)
								_handler(tmp11).Cast< Void >();
							}
						}
					}
					HX_STACK_LINE(67)
					_this->dirty;
				}
				HX_STACK_LINE(67)
				bool tmp1 = (_this->parent != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(67)
				if ((tmp1)){
					HX_STACK_LINE(67)
					::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(67)
					bool tmp2 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(67)
					if ((tmp2)){
						HX_STACK_LINE(67)
						false;
					}
					else{
						HX_STACK_LINE(67)
						Dynamic tmp3 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(67)
						_this1->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp3);
					}
				}
				HX_STACK_LINE(67)
				::phoenix::Transform tmp2 = this->transform;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(67)
				_this->parent = tmp2;
				HX_STACK_LINE(67)
				bool tmp3 = (_this->_parent_handlers != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(67)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(67)
				if ((tmp3)){
					HX_STACK_LINE(67)
					int tmp5 = _this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(67)
					int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(67)
					tmp4 = (tmp6 > (int)0);
				}
				else{
					HX_STACK_LINE(67)
					tmp4 = false;
				}
				HX_STACK_LINE(67)
				if ((tmp4)){
					HX_STACK_LINE(67)
					::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(67)
						cpp::ArrayBase _g1 = _this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(67)
						while((true)){
							HX_STACK_LINE(67)
							bool tmp5 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(67)
							bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(67)
							if ((tmp6)){
								HX_STACK_LINE(67)
								break;
							}
							HX_STACK_LINE(67)
							Dynamic tmp7 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(67)
							Dynamic _handler = tmp7;		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(67)
							++(_g);
							HX_STACK_LINE(67)
							bool tmp8 = (_handler != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(67)
							if ((tmp8)){
								HX_STACK_LINE(67)
								::phoenix::Transform tmp9 = _parent;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(67)
								_handler(tmp9).Cast< Void >();
							}
						}
					}
				}
				HX_STACK_LINE(67)
				bool tmp5 = (_this->parent != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(67)
				if ((tmp5)){
					HX_STACK_LINE(67)
					::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(67)
					bool tmp6 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(67)
					if ((tmp6)){
						HX_STACK_LINE(67)
						_this1->_clean_handlers = cpp::ArrayBase_obj::__new();
					}
					HX_STACK_LINE(67)
					Dynamic tmp7 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(67)
					_this1->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
				}
				HX_STACK_LINE(67)
				_this->parent;
			}
			HX_STACK_LINE(68)
			::phoenix::geometry::Geometry tmp1 = geom;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(68)
			this->geometry->push(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompositeGeometry_obj,add_geometry,(void))

Void CompositeGeometry_obj::remove_geometry( ::phoenix::geometry::Geometry g){
{
		HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","remove_geometry",0x7c52925b,"phoenix.geometry.CompositeGeometry.remove_geometry","phoenix/geometry/CompositeGeometry.hx",73,0xbffd3ea2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(75)
		::phoenix::geometry::Geometry tmp = g;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		bool tmp1 = this->geometry->remove(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		if ((tmp1)){
			HX_STACK_LINE(76)
			::phoenix::Transform _this = g->transform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				_this->dirty = true;
				HX_STACK_LINE(76)
				bool tmp2 = _this->dirty;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(76)
				bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(76)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(76)
				if ((tmp3)){
					HX_STACK_LINE(76)
					bool tmp5 = _this->_setup;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(76)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(76)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(76)
					tmp4 = !(tmp7);
				}
				else{
					HX_STACK_LINE(76)
					tmp4 = false;
				}
				HX_STACK_LINE(76)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(76)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				if ((tmp5)){
					HX_STACK_LINE(76)
					tmp6 = (_this->_dirty_handlers != null());
				}
				else{
					HX_STACK_LINE(76)
					tmp6 = false;
				}
				HX_STACK_LINE(76)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(76)
				if ((tmp6)){
					HX_STACK_LINE(76)
					int tmp8 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(76)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(76)
					tmp7 = (tmp9 > (int)0);
				}
				else{
					HX_STACK_LINE(76)
					tmp7 = false;
				}
				HX_STACK_LINE(76)
				if ((tmp7)){
					HX_STACK_LINE(76)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(76)
					cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(76)
					while((true)){
						HX_STACK_LINE(76)
						bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(76)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(76)
						if ((tmp9)){
							HX_STACK_LINE(76)
							break;
						}
						HX_STACK_LINE(76)
						Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(76)
						Dynamic _handler = tmp10;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(76)
						++(_g);
						HX_STACK_LINE(76)
						bool tmp11 = (_handler != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(76)
						if ((tmp11)){
							HX_STACK_LINE(76)
							::phoenix::Transform tmp12 = _this;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(76)
							_handler(tmp12).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(76)
				_this->dirty;
			}
			HX_STACK_LINE(76)
			bool tmp2 = (_this->parent != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			if ((tmp2)){
				HX_STACK_LINE(76)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(76)
				bool tmp3 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(76)
				if ((tmp3)){
					HX_STACK_LINE(76)
					false;
				}
				else{
					HX_STACK_LINE(76)
					Dynamic tmp4 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(76)
					_this1->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp4);
				}
			}
			HX_STACK_LINE(76)
			_this->parent = null();
			HX_STACK_LINE(76)
			bool tmp3 = (_this->_parent_handlers != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			if ((tmp3)){
				HX_STACK_LINE(76)
				int tmp5 = _this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(76)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				tmp4 = (tmp6 > (int)0);
			}
			else{
				HX_STACK_LINE(76)
				tmp4 = false;
			}
			HX_STACK_LINE(76)
			if ((tmp4)){
				HX_STACK_LINE(76)
				::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
				HX_STACK_LINE(76)
				{
					HX_STACK_LINE(76)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(76)
					cpp::ArrayBase _g1 = _this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(76)
					while((true)){
						HX_STACK_LINE(76)
						bool tmp5 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(76)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(76)
						if ((tmp6)){
							HX_STACK_LINE(76)
							break;
						}
						HX_STACK_LINE(76)
						Dynamic tmp7 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(76)
						Dynamic _handler = tmp7;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(76)
						++(_g);
						HX_STACK_LINE(76)
						bool tmp8 = (_handler != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(76)
						if ((tmp8)){
							HX_STACK_LINE(76)
							::phoenix::Transform tmp9 = _parent;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(76)
							_handler(tmp9).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(76)
			bool tmp5 = (_this->parent != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			if ((tmp5)){
				HX_STACK_LINE(76)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(76)
				bool tmp6 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				if ((tmp6)){
					HX_STACK_LINE(76)
					_this1->_clean_handlers = cpp::ArrayBase_obj::__new();
				}
				HX_STACK_LINE(76)
				Dynamic tmp7 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(76)
				_this1->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
			}
			HX_STACK_LINE(76)
			_this->parent;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompositeGeometry_obj,remove_geometry,(void))

Void CompositeGeometry_obj::add_to_batcher( ::phoenix::Batcher _batcher){
{
		HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","add_to_batcher",0x7fb88ff3,"phoenix.geometry.CompositeGeometry.add_to_batcher","phoenix/geometry/CompositeGeometry.hx",83,0xbffd3ea2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_batcher,"_batcher")
		HX_STACK_LINE(83)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(83)
		while((true)){
			HX_STACK_LINE(83)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(83)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(83)
			if ((tmp1)){
				HX_STACK_LINE(83)
				break;
			}
			HX_STACK_LINE(83)
			::phoenix::geometry::Geometry tmp2 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			::phoenix::geometry::Geometry geom = tmp2;		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(83)
			++(_g);
			HX_STACK_LINE(84)
			::phoenix::geometry::Geometry tmp3 = geom;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			_batcher->add(tmp3,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompositeGeometry_obj,add_to_batcher,(void))

Void CompositeGeometry_obj::drop( Dynamic __o_remove){
Dynamic remove = __o_remove.Default(true);
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","drop",0x168f4461,"phoenix.geometry.CompositeGeometry.drop","phoenix/geometry/CompositeGeometry.hx",89,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(remove,"remove")
{
		HX_STACK_LINE(91)
		Dynamic tmp = remove;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		this->super::drop(tmp);
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(93)
			while((true)){
				HX_STACK_LINE(93)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(93)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(93)
				if ((tmp2)){
					HX_STACK_LINE(93)
					break;
				}
				HX_STACK_LINE(93)
				::phoenix::geometry::Geometry tmp3 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(93)
				::phoenix::geometry::Geometry geom = tmp3;		HX_STACK_VAR(geom,"geom");
				HX_STACK_LINE(93)
				++(_g);
				HX_STACK_LINE(94)
				Dynamic tmp4 = remove;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(94)
				geom->drop(tmp4);
				HX_STACK_LINE(95)
				geom = null();
			}
		}
		HX_STACK_LINE(98)
		this->geometry = null();
		HX_STACK_LINE(99)
		this->geometry = Array_obj< ::Dynamic >::__new();
	}
return null();
}


Void CompositeGeometry_obj::translate( ::phoenix::Vector _offset){
{
		HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","translate",0x6b2d55dc,"phoenix.geometry.CompositeGeometry.translate","phoenix/geometry/CompositeGeometry.hx",103,0xbffd3ea2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_offset,"_offset")
		HX_STACK_LINE(105)
		bool tmp = (this->geometry != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		if ((tmp)){
			HX_STACK_LINE(106)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(106)
			Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(106)
			while((true)){
				HX_STACK_LINE(106)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(106)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(106)
				if ((tmp2)){
					HX_STACK_LINE(106)
					break;
				}
				HX_STACK_LINE(106)
				::phoenix::geometry::Geometry tmp3 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(106)
				::phoenix::geometry::Geometry geom = tmp3;		HX_STACK_VAR(geom,"geom");
				HX_STACK_LINE(106)
				++(_g);
				HX_STACK_LINE(107)
				::phoenix::Vector tmp4 = _offset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(107)
				geom->translate(tmp4);
			}
		}
	}
return null();
}


::phoenix::Color CompositeGeometry_obj::set_color( ::phoenix::Color _color){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_color",0x93043854,"phoenix.geometry.CompositeGeometry.set_color","phoenix/geometry/CompositeGeometry.hx",117,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_color,"_color")
	HX_STACK_LINE(119)
	bool tmp = (this->geometry != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	if ((tmp)){
		HX_STACK_LINE(120)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		while((true)){
			HX_STACK_LINE(120)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(120)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(120)
			if ((tmp2)){
				HX_STACK_LINE(120)
				break;
			}
			HX_STACK_LINE(120)
			::phoenix::geometry::Geometry tmp3 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(120)
			::phoenix::geometry::Geometry geom = tmp3;		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(120)
			++(_g);
			HX_STACK_LINE(121)
			::phoenix::Color tmp4 = _color;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			geom->set_color(tmp4);
		}
	}
	HX_STACK_LINE(125)
	::phoenix::Color tmp1 = this->color = _color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	return tmp1;
}


int CompositeGeometry_obj::set_primitive_type( int val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_primitive_type",0x11b81b81,"phoenix.geometry.CompositeGeometry.set_primitive_type","phoenix/geometry/CompositeGeometry.hx",129,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(131)
	bool tmp = (this->geometry != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	if ((tmp)){
		HX_STACK_LINE(132)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(132)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(132)
		while((true)){
			HX_STACK_LINE(132)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(132)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			if ((tmp2)){
				HX_STACK_LINE(132)
				break;
			}
			HX_STACK_LINE(132)
			::phoenix::geometry::Geometry tmp3 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			::phoenix::geometry::Geometry geom = tmp3;		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(132)
			++(_g);
			HX_STACK_LINE(133)
			int tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(133)
			geom->set_primitive_type(tmp4);
		}
	}
	HX_STACK_LINE(137)
	int tmp1 = this->primitive_type = val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	return tmp1;
}


::phoenix::Shader CompositeGeometry_obj::set_shader( ::phoenix::Shader val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_shader",0x67470b14,"phoenix.geometry.CompositeGeometry.set_shader","phoenix/geometry/CompositeGeometry.hx",141,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(143)
	bool tmp = (this->geometry != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	if ((tmp)){
		HX_STACK_LINE(144)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(144)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(144)
		while((true)){
			HX_STACK_LINE(144)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(144)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			if ((tmp2)){
				HX_STACK_LINE(144)
				break;
			}
			HX_STACK_LINE(144)
			::phoenix::geometry::Geometry tmp3 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			::phoenix::geometry::Geometry geom = tmp3;		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(144)
			++(_g);
			HX_STACK_LINE(145)
			::phoenix::Shader tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			geom->set_shader(tmp4);
		}
	}
	HX_STACK_LINE(149)
	::phoenix::Shader tmp1 = this->shader = val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	return tmp1;
}


::phoenix::Texture CompositeGeometry_obj::set_texture( ::phoenix::Texture val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_texture",0x363cee0c,"phoenix.geometry.CompositeGeometry.set_texture","phoenix/geometry/CompositeGeometry.hx",153,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(155)
	bool tmp = (this->geometry != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	if ((tmp)){
		HX_STACK_LINE(157)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(157)
		while((true)){
			HX_STACK_LINE(157)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(157)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(157)
			if ((tmp2)){
				HX_STACK_LINE(157)
				break;
			}
			HX_STACK_LINE(157)
			::phoenix::geometry::Geometry tmp3 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(157)
			::phoenix::geometry::Geometry geom = tmp3;		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(157)
			++(_g);
			HX_STACK_LINE(158)
			::phoenix::Texture tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			geom->set_texture(tmp4);
		}
	}
	HX_STACK_LINE(162)
	::phoenix::Texture tmp1 = this->texture = val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	return tmp1;
}


Float CompositeGeometry_obj::set_depth( Float val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_depth",0x1fd1b7f4,"phoenix.geometry.CompositeGeometry.set_depth","phoenix/geometry/CompositeGeometry.hx",166,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(168)
	bool tmp = (this->geometry != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	if ((tmp)){
		HX_STACK_LINE(169)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(169)
		while((true)){
			HX_STACK_LINE(169)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(169)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(169)
			if ((tmp2)){
				HX_STACK_LINE(169)
				break;
			}
			HX_STACK_LINE(169)
			::phoenix::geometry::Geometry tmp3 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			::phoenix::geometry::Geometry geom = tmp3;		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(169)
			++(_g);
			HX_STACK_LINE(170)
			Float tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			geom->set_depth(tmp4);
		}
	}
	HX_STACK_LINE(174)
	Float tmp1 = this->depth = val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	return tmp1;
}


int CompositeGeometry_obj::set_group( int val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_group",0xe29c7a30,"phoenix.geometry.CompositeGeometry.set_group","phoenix/geometry/CompositeGeometry.hx",178,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(180)
	bool tmp = (this->geometry != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	if ((tmp)){
		HX_STACK_LINE(181)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(181)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(181)
		while((true)){
			HX_STACK_LINE(181)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(181)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(181)
			if ((tmp2)){
				HX_STACK_LINE(181)
				break;
			}
			HX_STACK_LINE(181)
			::phoenix::geometry::Geometry tmp3 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(181)
			::phoenix::geometry::Geometry geom = tmp3;		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(181)
			++(_g);
			HX_STACK_LINE(182)
			int tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(182)
			geom->set_group(tmp4);
		}
	}
	HX_STACK_LINE(186)
	int tmp1 = this->group = val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(186)
	return tmp1;
}


bool CompositeGeometry_obj::set_locked( bool val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_locked",0xa3ed50f9,"phoenix.geometry.CompositeGeometry.set_locked","phoenix/geometry/CompositeGeometry.hx",190,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(192)
	bool tmp = (this->geometry != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	if ((tmp)){
		HX_STACK_LINE(193)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(193)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(193)
		while((true)){
			HX_STACK_LINE(193)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(193)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			if ((tmp2)){
				HX_STACK_LINE(193)
				break;
			}
			HX_STACK_LINE(193)
			::phoenix::geometry::Geometry tmp3 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			::phoenix::geometry::Geometry geom = tmp3;		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(193)
			++(_g);
			HX_STACK_LINE(194)
			bool tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			geom->set_locked(tmp4);
		}
	}
	HX_STACK_LINE(198)
	bool tmp1 = this->locked = val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	return tmp1;
}


bool CompositeGeometry_obj::set_dirty( bool val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_dirty",0x22781703,"phoenix.geometry.CompositeGeometry.set_dirty","phoenix/geometry/CompositeGeometry.hx",202,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(204)
	bool tmp = (this->geometry != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	if ((tmp)){
		HX_STACK_LINE(205)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(205)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(205)
		while((true)){
			HX_STACK_LINE(205)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(205)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(205)
			if ((tmp2)){
				HX_STACK_LINE(205)
				break;
			}
			HX_STACK_LINE(205)
			::phoenix::geometry::Geometry tmp3 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(205)
			::phoenix::geometry::Geometry geom = tmp3;		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(205)
			++(_g);
			HX_STACK_LINE(206)
			bool tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(206)
			geom->set_dirty(tmp4);
		}
	}
	HX_STACK_LINE(210)
	bool tmp1 = this->dirty = val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(210)
	return tmp1;
}


::phoenix::Rectangle CompositeGeometry_obj::set_clip_rect( ::phoenix::Rectangle val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_clip_rect",0xcc36dba4,"phoenix.geometry.CompositeGeometry.set_clip_rect","phoenix/geometry/CompositeGeometry.hx",214,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(216)
	bool tmp = (this->geometry != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	if ((tmp)){
		HX_STACK_LINE(217)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(217)
		while((true)){
			HX_STACK_LINE(217)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			if ((tmp2)){
				HX_STACK_LINE(217)
				break;
			}
			HX_STACK_LINE(217)
			::phoenix::geometry::Geometry tmp3 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			::phoenix::geometry::Geometry geom = tmp3;		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(217)
			++(_g);
			HX_STACK_LINE(218)
			::phoenix::Rectangle tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(218)
			geom->set_clip_rect(tmp4);
		}
	}
	HX_STACK_LINE(222)
	::phoenix::Rectangle tmp1 = this->clip_rect = val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	return tmp1;
}


bool CompositeGeometry_obj::set_visible( bool val){
	HX_STACK_FRAME("phoenix.geometry.CompositeGeometry","set_visible",0x3a809da3,"phoenix.geometry.CompositeGeometry.set_visible","phoenix/geometry/CompositeGeometry.hx",226,0xbffd3ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(228)
	bool tmp = (this->geometry != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	if ((tmp)){
		HX_STACK_LINE(229)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		Array< ::Dynamic > _g1 = this->geometry;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(229)
		while((true)){
			HX_STACK_LINE(229)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(229)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(229)
			if ((tmp2)){
				HX_STACK_LINE(229)
				break;
			}
			HX_STACK_LINE(229)
			::phoenix::geometry::Geometry tmp3 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			::phoenix::geometry::Geometry geom = tmp3;		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(229)
			++(_g);
			HX_STACK_LINE(230)
			bool tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(230)
			geom->set_visible(tmp4);
		}
	}
	HX_STACK_LINE(234)
	bool tmp1 = this->visible = val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	return tmp1;
}



CompositeGeometry_obj::CompositeGeometry_obj()
{
}

void CompositeGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompositeGeometry);
	HX_MARK_MEMBER_NAME(geometry,"geometry");
	::phoenix::geometry::Geometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CompositeGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(geometry,"geometry");
	::phoenix::geometry::Geometry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CompositeGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"drop") ) { return drop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { return geometry; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dirty") ) { return set_dirty_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"set_locked") ) { return set_locked_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_geometry") ) { return has_geometry_dyn(); }
		if (HX_FIELD_EQ(inName,"add_geometry") ) { return add_geometry_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_clip_rect") ) { return set_clip_rect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"add_to_batcher") ) { return add_to_batcher_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"remove_geometry") ) { return remove_geometry_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_primitive_type") ) { return set_primitive_type_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CompositeGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { geometry=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CompositeGeometry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CompositeGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CompositeGeometry_obj,geometry),HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	HX_HCSTRING("has_geometry","\x77","\xff","\xbd","\x05"),
	HX_HCSTRING("add_geometry","\xd0","\x3b","\xc0","\x77"),
	HX_HCSTRING("remove_geometry","\x4d","\xb5","\x8a","\xb9"),
	HX_HCSTRING("add_to_batcher","\x41","\x91","\x61","\x16"),
	HX_HCSTRING("drop","\x2f","\x38","\x70","\x42"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_primitive_type","\xcf","\xdb","\xb6","\x00"),
	HX_HCSTRING("set_shader","\x62","\xcd","\x25","\x11"),
	HX_HCSTRING("set_texture","\xfe","\x2f","\x48","\x2f"),
	HX_HCSTRING("set_depth","\x66","\x39","\x24","\xfe"),
	HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"),
	HX_HCSTRING("set_locked","\x47","\x13","\xcc","\x4d"),
	HX_HCSTRING("set_dirty","\x75","\x98","\xca","\x00"),
	HX_HCSTRING("set_clip_rect","\x16","\xfe","\x0b","\x90"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompositeGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompositeGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class CompositeGeometry_obj::__mClass;

void CompositeGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.CompositeGeometry","\x7c","\xc1","\xb4","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CompositeGeometry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CompositeGeometry_obj >;
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
