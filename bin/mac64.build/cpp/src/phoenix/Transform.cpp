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
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
namespace phoenix{

Void Transform_obj::__construct()
{
HX_STACK_FRAME("phoenix.Transform","new",0x37b5fb1f,"phoenix.Transform.new","phoenix/Transform.hx",11,0x44da8ab2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(65)
	this->_destroying = false;
	HX_STACK_LINE(31)
	this->_cleaning = false;
	HX_STACK_LINE(30)
	this->_setup = true;
	HX_STACK_LINE(20)
	this->dirty = true;
	HX_STACK_LINE(44)
	super::__construct(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),null());
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::phoenix::Spatial tmp = ::phoenix::Spatial_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::phoenix::Spatial l = tmp;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(46)
		bool tmp1 = (l != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		if ((tmp1)){
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				this->dirty = true;
				HX_STACK_LINE(46)
				bool tmp2 = this->dirty;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(46)
				bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(46)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(46)
				if ((tmp3)){
					HX_STACK_LINE(46)
					bool tmp5 = this->_setup;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(46)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(46)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(46)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(46)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(46)
					tmp4 = !(tmp9);
				}
				else{
					HX_STACK_LINE(46)
					tmp4 = false;
				}
				HX_STACK_LINE(46)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(46)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(46)
				if ((tmp5)){
					HX_STACK_LINE(46)
					tmp6 = (this->_dirty_handlers != null());
				}
				else{
					HX_STACK_LINE(46)
					tmp6 = false;
				}
				HX_STACK_LINE(46)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(46)
				if ((tmp6)){
					HX_STACK_LINE(46)
					int tmp8 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(46)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(46)
					tmp7 = (tmp9 > (int)0);
				}
				else{
					HX_STACK_LINE(46)
					tmp7 = false;
				}
				HX_STACK_LINE(46)
				if ((tmp7)){
					HX_STACK_LINE(46)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(46)
					cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(46)
					while((true)){
						HX_STACK_LINE(46)
						bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(46)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(46)
						if ((tmp9)){
							HX_STACK_LINE(46)
							break;
						}
						HX_STACK_LINE(46)
						Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(46)
						Dynamic _handler = tmp10;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(46)
						++(_g);
						HX_STACK_LINE(46)
						bool tmp11 = (_handler != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(46)
						if ((tmp11)){
							HX_STACK_LINE(46)
							_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(46)
				this->dirty;
			}
			HX_STACK_LINE(46)
			Dynamic tmp2 = this->on_local_pos_change_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			l->pos_changed = tmp2;
			HX_STACK_LINE(46)
			Dynamic tmp3 = this->on_local_rotation_change_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			l->rotation_changed = tmp3;
			HX_STACK_LINE(46)
			Dynamic tmp4 = this->on_local_scale_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			l->scale_changed = tmp4;
		}
		HX_STACK_LINE(46)
		this->local = l;
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		::phoenix::Spatial tmp = ::phoenix::Spatial_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		::phoenix::Spatial w = tmp;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(47)
		bool tmp1 = (w == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		if ((tmp1)){
			HX_STACK_LINE(47)
			this->world = w;
		}
		else{
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				this->dirty = true;
				HX_STACK_LINE(47)
				bool tmp2 = this->dirty;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(47)
				bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(47)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(47)
				if ((tmp3)){
					HX_STACK_LINE(47)
					bool tmp5 = this->_setup;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(47)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(47)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(47)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(47)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(47)
					tmp4 = !(tmp9);
				}
				else{
					HX_STACK_LINE(47)
					tmp4 = false;
				}
				HX_STACK_LINE(47)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(47)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(47)
				if ((tmp5)){
					HX_STACK_LINE(47)
					tmp6 = (this->_dirty_handlers != null());
				}
				else{
					HX_STACK_LINE(47)
					tmp6 = false;
				}
				HX_STACK_LINE(47)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(47)
				if ((tmp6)){
					HX_STACK_LINE(47)
					int tmp8 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(47)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(47)
					tmp7 = (tmp9 > (int)0);
				}
				else{
					HX_STACK_LINE(47)
					tmp7 = false;
				}
				HX_STACK_LINE(47)
				if ((tmp7)){
					HX_STACK_LINE(47)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(47)
					cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(47)
					while((true)){
						HX_STACK_LINE(47)
						bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(47)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(47)
						if ((tmp9)){
							HX_STACK_LINE(47)
							break;
						}
						HX_STACK_LINE(47)
						Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(47)
						Dynamic _handler = tmp10;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(47)
						++(_g);
						HX_STACK_LINE(47)
						bool tmp11 = (_handler != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(47)
						if ((tmp11)){
							HX_STACK_LINE(47)
							_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(47)
				this->dirty;
			}
			HX_STACK_LINE(47)
			this->world = w;
		}
	}
	HX_STACK_LINE(49)
	::phoenix::Matrix tmp = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	this->_origin_undo_matrix = tmp;
	HX_STACK_LINE(50)
	::phoenix::Matrix tmp1 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	this->_pos_matrix = tmp1;
	HX_STACK_LINE(51)
	::phoenix::Matrix tmp2 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	this->_rotation_matrix = tmp2;
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		::phoenix::Vector o = tmp3;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			this->dirty = true;
			HX_STACK_LINE(53)
			bool tmp4 = this->dirty;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			if ((tmp5)){
				HX_STACK_LINE(53)
				bool tmp7 = this->_setup;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(53)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(53)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(53)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(53)
				tmp6 = !(tmp11);
			}
			else{
				HX_STACK_LINE(53)
				tmp6 = false;
			}
			HX_STACK_LINE(53)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			if ((tmp7)){
				HX_STACK_LINE(53)
				tmp8 = (this->_dirty_handlers != null());
			}
			else{
				HX_STACK_LINE(53)
				tmp8 = false;
			}
			HX_STACK_LINE(53)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(53)
			if ((tmp8)){
				HX_STACK_LINE(53)
				int tmp10 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(53)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(53)
				tmp9 = (tmp11 > (int)0);
			}
			else{
				HX_STACK_LINE(53)
				tmp9 = false;
			}
			HX_STACK_LINE(53)
			if ((tmp9)){
				HX_STACK_LINE(53)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(53)
				while((true)){
					HX_STACK_LINE(53)
					bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(53)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(53)
					if ((tmp11)){
						HX_STACK_LINE(53)
						break;
					}
					HX_STACK_LINE(53)
					Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(53)
					Dynamic _handler = tmp12;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(53)
					++(_g);
					HX_STACK_LINE(53)
					bool tmp13 = (_handler != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(53)
					if ((tmp13)){
						HX_STACK_LINE(53)
						_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(53)
			this->dirty;
		}
		HX_STACK_LINE(53)
		this->origin = o;
		HX_STACK_LINE(53)
		bool tmp4 = (this->_origin_handlers != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		if ((tmp4)){
			HX_STACK_LINE(53)
			int tmp6 = this->_origin_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			tmp5 = (tmp7 > (int)0);
		}
		else{
			HX_STACK_LINE(53)
			tmp5 = false;
		}
		HX_STACK_LINE(53)
		if ((tmp5)){
			HX_STACK_LINE(53)
			::phoenix::Vector tmp6 = this->origin;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			::phoenix::Vector _origin = tmp6;		HX_STACK_VAR(_origin,"_origin");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				cpp::ArrayBase _g1 = this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(53)
				while((true)){
					HX_STACK_LINE(53)
					bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(53)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					if ((tmp8)){
						HX_STACK_LINE(53)
						break;
					}
					HX_STACK_LINE(53)
					Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(53)
					Dynamic _handler = tmp9;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(53)
					++(_g);
					HX_STACK_LINE(53)
					bool tmp10 = (_handler != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(53)
					if ((tmp10)){
						HX_STACK_LINE(53)
						::phoenix::Vector tmp11 = _origin;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(53)
						_handler(tmp11).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(53)
		this->origin;
	}
	HX_STACK_LINE(56)
	Dynamic tmp3 = this->on_local_pos_change_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	::phoenix::Spatial tmp4 = this->local;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	tmp4->pos_changed = tmp3;
	HX_STACK_LINE(57)
	Dynamic tmp5 = this->on_local_rotation_change_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	::phoenix::Spatial tmp6 = this->local;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(57)
	tmp6->rotation_changed = tmp5;
	HX_STACK_LINE(58)
	Dynamic tmp7 = this->on_local_scale_change_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(58)
	::phoenix::Spatial tmp8 = this->local;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(58)
	tmp8->scale_changed = tmp7;
	HX_STACK_LINE(60)
	this->_setup = false;
}
;
	return null();
}

//Transform_obj::~Transform_obj() { }

Dynamic Transform_obj::__CreateEmpty() { return  new Transform_obj; }
hx::ObjectPtr< Transform_obj > Transform_obj::__new()
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct();
	return _result_;}

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct();
	return _result_;}

Void Transform_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.Transform","destroy",0x82ce2339,"phoenix.Transform.destroy","phoenix/Transform.hx",67,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		this->_destroying = true;
		HX_STACK_LINE(72)
		::phoenix::Transform tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		if ((tmp1)){
			HX_STACK_LINE(73)
			::phoenix::Transform tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(73)
			bool tmp3 = (_this->_clean_handlers == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			if ((tmp3)){
				HX_STACK_LINE(73)
				false;
			}
			else{
				HX_STACK_LINE(73)
				Dynamic tmp4 = this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				_this->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp4);
			}
		}
		HX_STACK_LINE(77)
		this->_clean_handlers = null();
		HX_STACK_LINE(78)
		this->_dirty_handlers = null();
		HX_STACK_LINE(79)
		this->_pos_handlers = null();
		HX_STACK_LINE(80)
		this->_rotation_handlers = null();
		HX_STACK_LINE(81)
		this->_scale_handlers = null();
		HX_STACK_LINE(82)
		this->_origin_handlers = null();
		HX_STACK_LINE(83)
		this->_parent_handlers = null();
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			::phoenix::Spatial tmp2 = this->local;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			::phoenix::Spatial _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				_this->matrix = null();
				HX_STACK_LINE(86)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(86)
				if ((tmp3)){
					HX_STACK_LINE(86)
					::snow::api::buffers::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						cpp::ArrayBase array = _this->matrix->elements;		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(86)
						::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(86)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(86)
						if ((tmp5)){
							HX_STACK_LINE(86)
							::snow::api::buffers::ArrayBufferView tmp6 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(86)
							this1 = tmp6;
						}
						else{
							HX_STACK_LINE(86)
							bool tmp6 = (array != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(86)
							if ((tmp6)){
								HX_STACK_LINE(86)
								::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(86)
								{
									HX_STACK_LINE(86)
									::snow::api::buffers::ArrayBufferView tmp8 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(86)
									::snow::api::buffers::ArrayBufferView _this1 = tmp8;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(86)
									_this1->byteOffset = (int)0;
									HX_STACK_LINE(86)
									_this1->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
									HX_STACK_LINE(86)
									int tmp9 = (_this1->length * _this1->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(86)
									_this1->byteLength = tmp9;
									HX_STACK_LINE(86)
									::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(86)
									{
										HX_STACK_LINE(86)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(86)
										int tmp11 = _this1->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(86)
										::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(86)
										this2 = tmp12;
										HX_STACK_LINE(86)
										tmp10 = this2;
									}
									HX_STACK_LINE(86)
									_this1->buffer = tmp10;
									HX_STACK_LINE(86)
									_this1->copyFromArray(((Array< Float >)(array)),null());
									HX_STACK_LINE(86)
									tmp7 = _this1;
								}
								HX_STACK_LINE(86)
								this1 = tmp7;
							}
							else{
								HX_STACK_LINE(86)
								bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(86)
								if ((tmp7)){
									HX_STACK_LINE(86)
									::snow::api::buffers::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(86)
									{
										HX_STACK_LINE(86)
										::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(86)
										::snow::api::buffers::ArrayBufferView _this1 = tmp9;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(86)
										::haxe::io::Bytes tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(86)
										::haxe::io::Bytes srcData = tmp10;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(86)
										int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(86)
										int srcLength = tmp11;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(86)
										int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(86)
										int srcByteOffset = tmp12;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(86)
										int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(86)
										int srcElementSize = tmp13;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(86)
										int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(86)
										int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(86)
										int tmp15 = _this1->type;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(86)
										bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(86)
										if ((tmp16)){
											HX_STACK_LINE(86)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(86)
											int tmp17 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(86)
											int cloneLength = tmp17;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(86)
											::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(86)
											{
												HX_STACK_LINE(86)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(86)
												int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(86)
												::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(86)
												this2 = tmp20;
												HX_STACK_LINE(86)
												tmp18 = this2;
											}
											HX_STACK_LINE(86)
											_this1->buffer = tmp18;
											HX_STACK_LINE(86)
											::haxe::io::Bytes tmp19 = srcData;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(86)
											int tmp20 = srcByteOffset;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(86)
											int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(86)
											_this1->buffer->blit((int)0,tmp19,tmp20,tmp21);
										}
										else{
											HX_STACK_LINE(86)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(86)
										int tmp17 = (_this1->bytesPerElement * srcLength);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(86)
										_this1->byteLength = tmp17;
										HX_STACK_LINE(86)
										_this1->byteOffset = (int)0;
										HX_STACK_LINE(86)
										_this1->length = srcLength;
										HX_STACK_LINE(86)
										tmp8 = _this1;
									}
									HX_STACK_LINE(86)
									this1 = tmp8;
								}
								else{
									HX_STACK_LINE(86)
									bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(86)
									if ((tmp8)){
										HX_STACK_LINE(86)
										::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(86)
										{
											HX_STACK_LINE(86)
											::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(86)
											::snow::api::buffers::ArrayBufferView _this1 = tmp10;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(86)
											bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(86)
											if ((tmp11)){
												HX_STACK_LINE(86)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(86)
											int tmp12 = hx::Mod((int)0,_this1->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(86)
											bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(86)
											if ((tmp13)){
												HX_STACK_LINE(86)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(86)
											int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(86)
											int bufferByteLength = tmp14;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(86)
											int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(86)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(86)
											bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(86)
											if ((tmp15)){
												HX_STACK_LINE(86)
												int tmp16 = bufferByteLength;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(86)
												newByteLength = tmp16;
												HX_STACK_LINE(86)
												int tmp17 = hx::Mod(bufferByteLength,_this1->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(86)
												bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(86)
												if ((tmp18)){
													HX_STACK_LINE(86)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
												HX_STACK_LINE(86)
												bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(86)
												if ((tmp19)){
													HX_STACK_LINE(86)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(86)
												int tmp16 = (null() * _this1->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(86)
												newByteLength = tmp16;
												HX_STACK_LINE(86)
												int tmp17 = newByteLength;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(86)
												int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(86)
												bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(86)
												if ((tmp18)){
													HX_STACK_LINE(86)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(86)
											_this1->buffer = null();
											HX_STACK_LINE(86)
											_this1->byteOffset = (int)0;
											HX_STACK_LINE(86)
											_this1->byteLength = newByteLength;
											HX_STACK_LINE(86)
											Float tmp16 = (Float(newByteLength) / Float(_this1->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(86)
											int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(86)
											_this1->length = tmp17;
											HX_STACK_LINE(86)
											tmp9 = _this1;
										}
										HX_STACK_LINE(86)
										this1 = tmp9;
									}
									else{
										HX_STACK_LINE(86)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
									}
								}
							}
						}
						HX_STACK_LINE(86)
						tmp4 = this1;
					}
					HX_STACK_LINE(86)
					_this->floats = tmp4;
				}
				HX_STACK_LINE(86)
				_this->matrix;
			}
			HX_STACK_LINE(86)
			_this->floats = null();
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				_this->pos = null();
				HX_STACK_LINE(86)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(86)
				if ((tmp3)){
					HX_STACK_LINE(86)
					::phoenix::Vector tmp4 = _this->pos;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(86)
					Dynamic tmp5 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(86)
					::phoenix::Vector_obj::Listen(tmp4,tmp5);
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						bool tmp6 = (_this->pos_changed != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(86)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(86)
						if ((tmp6)){
							HX_STACK_LINE(86)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(86)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(86)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(86)
							tmp7 = false;
						}
						HX_STACK_LINE(86)
						if ((tmp7)){
							HX_STACK_LINE(86)
							::phoenix::Vector tmp8 = _this->pos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(86)
							_this->pos_changed(tmp8);
						}
					}
				}
				HX_STACK_LINE(86)
				_this->pos;
			}
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				_this->rotation = null();
				HX_STACK_LINE(86)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(86)
				if ((tmp3)){
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
						HX_STACK_LINE(86)
						Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(86)
						_q->listen_x = listener;
						HX_STACK_LINE(86)
						_q->listen_y = listener;
						HX_STACK_LINE(86)
						_q->listen_z = listener;
						HX_STACK_LINE(86)
						_q->listen_w = listener;
					}
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						bool tmp4 = (_this->rotation_changed != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(86)
						bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(86)
						if ((tmp4)){
							HX_STACK_LINE(86)
							bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(86)
							bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(86)
							tmp5 = !(tmp7);
						}
						else{
							HX_STACK_LINE(86)
							tmp5 = false;
						}
						HX_STACK_LINE(86)
						if ((tmp5)){
							HX_STACK_LINE(86)
							::phoenix::Quaternion tmp6 = _this->rotation;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(86)
							_this->rotation_changed(tmp6);
						}
					}
				}
				HX_STACK_LINE(86)
				_this->rotation;
			}
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				_this->scale = null();
				HX_STACK_LINE(86)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(86)
				if ((tmp3)){
					HX_STACK_LINE(86)
					::phoenix::Vector tmp4 = _this->scale;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(86)
					Dynamic tmp5 = _this->_scale_change_dyn();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(86)
					::phoenix::Vector_obj::Listen(tmp4,tmp5);
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						bool tmp6 = (_this->scale_changed != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(86)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(86)
						if ((tmp6)){
							HX_STACK_LINE(86)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(86)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(86)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(86)
							tmp7 = false;
						}
						HX_STACK_LINE(86)
						if ((tmp7)){
							HX_STACK_LINE(86)
							::phoenix::Vector tmp8 = _this->scale;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(86)
							_this->scale_changed(tmp8);
						}
					}
				}
				HX_STACK_LINE(86)
				_this->scale;
			}
		}
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::phoenix::Spatial tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				bool tmp3 = this->_destroying;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(87)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(87)
				if ((tmp4)){
					HX_STACK_LINE(87)
					::phoenix::Transform tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(87)
					bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(87)
					if ((tmp6)){
						HX_STACK_LINE(87)
						::phoenix::Transform tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(87)
						bool tmp8 = tmp7->dirty;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(87)
						if ((tmp8)){
							HX_STACK_LINE(87)
							::phoenix::Transform tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(87)
							::phoenix::Transform _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(87)
							bool tmp10 = _this->dirty;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(87)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(87)
							if ((tmp11)){
								HX_STACK_LINE(87)
								Dynamic();
							}
							else{
								HX_STACK_LINE(87)
								_this->_cleaning = true;
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix _this1 = _this->_pos_matrix;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(87)
										e[(int)0] = (int)1;
										HX_STACK_LINE(87)
										e[(int)4] = (int)0;
										HX_STACK_LINE(87)
										e[(int)8] = (int)0;
										HX_STACK_LINE(87)
										::phoenix::Vector tmp12 = _this->local->pos;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(87)
										Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(87)
										e[(int)12] = tmp13;
										HX_STACK_LINE(87)
										e[(int)1] = (int)0;
										HX_STACK_LINE(87)
										e[(int)5] = (int)1;
										HX_STACK_LINE(87)
										e[(int)9] = (int)0;
										HX_STACK_LINE(87)
										::phoenix::Vector tmp14 = _this->local->pos;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(87)
										Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(87)
										e[(int)13] = tmp15;
										HX_STACK_LINE(87)
										e[(int)2] = (int)0;
										HX_STACK_LINE(87)
										e[(int)6] = (int)0;
										HX_STACK_LINE(87)
										e[(int)10] = (int)1;
										HX_STACK_LINE(87)
										::phoenix::Vector tmp16 = _this->local->pos;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(87)
										Float tmp17 = tmp16->z;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(87)
										e[(int)14] = tmp17;
										HX_STACK_LINE(87)
										e[(int)3] = (int)0;
										HX_STACK_LINE(87)
										e[(int)7] = (int)0;
										HX_STACK_LINE(87)
										e[(int)11] = (int)0;
										HX_STACK_LINE(87)
										e[(int)15] = (int)1;
										HX_STACK_LINE(87)
										_this1;
									}
									HX_STACK_LINE(87)
									_this1;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix _this1 = _this->_rotation_matrix;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(87)
									::phoenix::Quaternion tmp12 = _this->local->rotation;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(87)
									::phoenix::Quaternion q = tmp12;		HX_STACK_VAR(q,"q");
									HX_STACK_LINE(87)
									Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(87)
									Float tmp13 = (q->x + q->x);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(87)
									Float x2 = tmp13;		HX_STACK_VAR(x2,"x2");
									HX_STACK_LINE(87)
									Float tmp14 = (q->y + q->y);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(87)
									Float y2 = tmp14;		HX_STACK_VAR(y2,"y2");
									HX_STACK_LINE(87)
									Float tmp15 = (q->z + q->z);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									Float z2 = tmp15;		HX_STACK_VAR(z2,"z2");
									HX_STACK_LINE(87)
									Float tmp16 = (q->x * x2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									Float xx = tmp16;		HX_STACK_VAR(xx,"xx");
									HX_STACK_LINE(87)
									Float tmp17 = (q->x * y2);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(87)
									Float xy = tmp17;		HX_STACK_VAR(xy,"xy");
									HX_STACK_LINE(87)
									Float tmp18 = (q->x * z2);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(87)
									Float xz = tmp18;		HX_STACK_VAR(xz,"xz");
									HX_STACK_LINE(87)
									Float tmp19 = (q->y * y2);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(87)
									Float yy = tmp19;		HX_STACK_VAR(yy,"yy");
									HX_STACK_LINE(87)
									Float tmp20 = (q->y * z2);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(87)
									Float yz = tmp20;		HX_STACK_VAR(yz,"yz");
									HX_STACK_LINE(87)
									Float tmp21 = (q->z * z2);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(87)
									Float zz = tmp21;		HX_STACK_VAR(zz,"zz");
									HX_STACK_LINE(87)
									Float tmp22 = (q->w * x2);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(87)
									Float wx = tmp22;		HX_STACK_VAR(wx,"wx");
									HX_STACK_LINE(87)
									Float tmp23 = (q->w * y2);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(87)
									Float wy = tmp23;		HX_STACK_VAR(wy,"wy");
									HX_STACK_LINE(87)
									Float tmp24 = (q->w * z2);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(87)
									Float wz = tmp24;		HX_STACK_VAR(wz,"wz");
									HX_STACK_LINE(87)
									Float tmp25 = (yy + zz);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(87)
									Float tmp26 = ((int)1 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(87)
									te[(int)0] = tmp26;
									HX_STACK_LINE(87)
									Float tmp27 = (xy - wz);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(87)
									te[(int)4] = tmp27;
									HX_STACK_LINE(87)
									Float tmp28 = (xz + wy);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(87)
									te[(int)8] = tmp28;
									HX_STACK_LINE(87)
									Float tmp29 = (xy + wz);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(87)
									te[(int)1] = tmp29;
									HX_STACK_LINE(87)
									Float tmp30 = (xx + zz);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(87)
									Float tmp31 = ((int)1 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(87)
									te[(int)5] = tmp31;
									HX_STACK_LINE(87)
									Float tmp32 = (yz - wx);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(87)
									te[(int)9] = tmp32;
									HX_STACK_LINE(87)
									Float tmp33 = (xz - wy);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(87)
									te[(int)2] = tmp33;
									HX_STACK_LINE(87)
									Float tmp34 = (yz + wx);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(87)
									te[(int)6] = tmp34;
									HX_STACK_LINE(87)
									Float tmp35 = (xx + yy);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(87)
									Float tmp36 = ((int)1 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(87)
									te[(int)10] = tmp36;
									HX_STACK_LINE(87)
									te[(int)3] = (int)0;
									HX_STACK_LINE(87)
									te[(int)7] = (int)0;
									HX_STACK_LINE(87)
									te[(int)11] = (int)0;
									HX_STACK_LINE(87)
									te[(int)12] = (int)0;
									HX_STACK_LINE(87)
									te[(int)13] = (int)0;
									HX_STACK_LINE(87)
									te[(int)14] = (int)0;
									HX_STACK_LINE(87)
									te[(int)15] = (int)1;
									HX_STACK_LINE(87)
									_this1;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix _this1 = _this->_origin_undo_matrix;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(87)
										e[(int)0] = (int)1;
										HX_STACK_LINE(87)
										e[(int)4] = (int)0;
										HX_STACK_LINE(87)
										e[(int)8] = (int)0;
										HX_STACK_LINE(87)
										Float tmp12 = _this->origin->x;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(87)
										Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(87)
										e[(int)12] = tmp13;
										HX_STACK_LINE(87)
										e[(int)1] = (int)0;
										HX_STACK_LINE(87)
										e[(int)5] = (int)1;
										HX_STACK_LINE(87)
										e[(int)9] = (int)0;
										HX_STACK_LINE(87)
										Float tmp14 = _this->origin->y;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(87)
										Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(87)
										e[(int)13] = tmp15;
										HX_STACK_LINE(87)
										e[(int)2] = (int)0;
										HX_STACK_LINE(87)
										e[(int)6] = (int)0;
										HX_STACK_LINE(87)
										e[(int)10] = (int)1;
										HX_STACK_LINE(87)
										Float tmp16 = _this->origin->z;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(87)
										Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(87)
										e[(int)14] = tmp17;
										HX_STACK_LINE(87)
										e[(int)3] = (int)0;
										HX_STACK_LINE(87)
										e[(int)7] = (int)0;
										HX_STACK_LINE(87)
										e[(int)11] = (int)0;
										HX_STACK_LINE(87)
										e[(int)15] = (int)1;
										HX_STACK_LINE(87)
										_this1;
									}
									HX_STACK_LINE(87)
									_this1;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix tmp12 = _this->local->matrix;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(87)
									::phoenix::Matrix _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(87)
										e[(int)0] = (int)1;
										HX_STACK_LINE(87)
										e[(int)4] = (int)0;
										HX_STACK_LINE(87)
										e[(int)8] = (int)0;
										HX_STACK_LINE(87)
										Float tmp13 = _this->origin->x;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(87)
										e[(int)12] = tmp13;
										HX_STACK_LINE(87)
										e[(int)1] = (int)0;
										HX_STACK_LINE(87)
										e[(int)5] = (int)1;
										HX_STACK_LINE(87)
										e[(int)9] = (int)0;
										HX_STACK_LINE(87)
										Float tmp14 = _this->origin->y;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(87)
										e[(int)13] = tmp14;
										HX_STACK_LINE(87)
										e[(int)2] = (int)0;
										HX_STACK_LINE(87)
										e[(int)6] = (int)0;
										HX_STACK_LINE(87)
										e[(int)10] = (int)1;
										HX_STACK_LINE(87)
										Float tmp15 = _this->origin->z;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(87)
										e[(int)14] = tmp15;
										HX_STACK_LINE(87)
										e[(int)3] = (int)0;
										HX_STACK_LINE(87)
										e[(int)7] = (int)0;
										HX_STACK_LINE(87)
										e[(int)11] = (int)0;
										HX_STACK_LINE(87)
										e[(int)15] = (int)1;
										HX_STACK_LINE(87)
										_this1;
									}
									HX_STACK_LINE(87)
									_this1;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix tmp12 = _this->local->matrix;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(87)
									::phoenix::Matrix _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(87)
										Array< Float > be = _this->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(87)
										Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(87)
										Float tmp13 = ae->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(87)
										Float a11 = tmp13;		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(87)
										Float tmp14 = ae->__get((int)4);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(87)
										Float a12 = tmp14;		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(87)
										Float tmp15 = ae->__get((int)8);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(87)
										Float a13 = tmp15;		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(87)
										Float tmp16 = ae->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(87)
										Float a14 = tmp16;		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(87)
										Float tmp17 = ae->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(87)
										Float a21 = tmp17;		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(87)
										Float tmp18 = ae->__get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(87)
										Float a22 = tmp18;		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(87)
										Float tmp19 = ae->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(87)
										Float a23 = tmp19;		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(87)
										Float tmp20 = ae->__get((int)13);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(87)
										Float a24 = tmp20;		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(87)
										Float tmp21 = ae->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(87)
										Float a31 = tmp21;		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(87)
										Float tmp22 = ae->__get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(87)
										Float a32 = tmp22;		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(87)
										Float tmp23 = ae->__get((int)10);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(87)
										Float a33 = tmp23;		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(87)
										Float tmp24 = ae->__get((int)14);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(87)
										Float a34 = tmp24;		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(87)
										Float tmp25 = ae->__get((int)3);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(87)
										Float a41 = tmp25;		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(87)
										Float tmp26 = ae->__get((int)7);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(87)
										Float a42 = tmp26;		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(87)
										Float tmp27 = ae->__get((int)11);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(87)
										Float a43 = tmp27;		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(87)
										Float tmp28 = ae->__get((int)15);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(87)
										Float a44 = tmp28;		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(87)
										Float tmp29 = be->__get((int)0);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(87)
										Float b11 = tmp29;		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(87)
										Float tmp30 = be->__get((int)4);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(87)
										Float b12 = tmp30;		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(87)
										Float tmp31 = be->__get((int)8);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(87)
										Float b13 = tmp31;		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(87)
										Float tmp32 = be->__get((int)12);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(87)
										Float b14 = tmp32;		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(87)
										Float tmp33 = be->__get((int)1);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(87)
										Float b21 = tmp33;		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(87)
										Float tmp34 = be->__get((int)5);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(87)
										Float b22 = tmp34;		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(87)
										Float tmp35 = be->__get((int)9);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(87)
										Float b23 = tmp35;		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(87)
										Float tmp36 = be->__get((int)13);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(87)
										Float b24 = tmp36;		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(87)
										Float tmp37 = be->__get((int)2);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(87)
										Float b31 = tmp37;		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(87)
										Float tmp38 = be->__get((int)6);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(87)
										Float b32 = tmp38;		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(87)
										Float tmp39 = be->__get((int)10);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(87)
										Float b33 = tmp39;		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(87)
										Float tmp40 = be->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(87)
										Float b34 = tmp40;		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(87)
										Float tmp41 = be->__get((int)3);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(87)
										Float b41 = tmp41;		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(87)
										Float tmp42 = be->__get((int)7);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(87)
										Float b42 = tmp42;		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(87)
										Float tmp43 = be->__get((int)11);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(87)
										Float b43 = tmp43;		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(87)
										Float tmp44 = be->__get((int)15);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(87)
										Float b44 = tmp44;		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(87)
										Float tmp45 = (a11 * b11);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(87)
										Float tmp46 = (a12 * b21);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(87)
										Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(87)
										Float tmp48 = (a13 * b31);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(87)
										Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(87)
										Float tmp50 = (a14 * b41);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(87)
										Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(87)
										te[(int)0] = tmp51;
										HX_STACK_LINE(87)
										Float tmp52 = (a11 * b12);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(87)
										Float tmp53 = (a12 * b22);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(87)
										Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(87)
										Float tmp55 = (a13 * b32);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(87)
										Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(87)
										Float tmp57 = (a14 * b42);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(87)
										Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(87)
										te[(int)4] = tmp58;
										HX_STACK_LINE(87)
										Float tmp59 = (a11 * b13);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(87)
										Float tmp60 = (a12 * b23);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(87)
										Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(87)
										Float tmp62 = (a13 * b33);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(87)
										Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(87)
										Float tmp64 = (a14 * b43);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(87)
										Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(87)
										te[(int)8] = tmp65;
										HX_STACK_LINE(87)
										Float tmp66 = (a11 * b14);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(87)
										Float tmp67 = (a12 * b24);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(87)
										Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(87)
										Float tmp69 = (a13 * b34);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(87)
										Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(87)
										Float tmp71 = (a14 * b44);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(87)
										Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(87)
										te[(int)12] = tmp72;
										HX_STACK_LINE(87)
										Float tmp73 = (a21 * b11);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(87)
										Float tmp74 = (a22 * b21);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(87)
										Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(87)
										Float tmp76 = (a23 * b31);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(87)
										Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(87)
										Float tmp78 = (a24 * b41);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(87)
										Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(87)
										te[(int)1] = tmp79;
										HX_STACK_LINE(87)
										Float tmp80 = (a21 * b12);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(87)
										Float tmp81 = (a22 * b22);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(87)
										Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(87)
										Float tmp83 = (a23 * b32);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(87)
										Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(87)
										Float tmp85 = (a24 * b42);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(87)
										Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(87)
										te[(int)5] = tmp86;
										HX_STACK_LINE(87)
										Float tmp87 = (a21 * b13);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(87)
										Float tmp88 = (a22 * b23);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(87)
										Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(87)
										Float tmp90 = (a23 * b33);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(87)
										Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(87)
										Float tmp92 = (a24 * b43);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(87)
										Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(87)
										te[(int)9] = tmp93;
										HX_STACK_LINE(87)
										Float tmp94 = (a21 * b14);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(87)
										Float tmp95 = (a22 * b24);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(87)
										Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(87)
										Float tmp97 = (a23 * b34);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(87)
										Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(87)
										Float tmp99 = (a24 * b44);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(87)
										Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(87)
										te[(int)13] = tmp100;
										HX_STACK_LINE(87)
										Float tmp101 = (a31 * b11);		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(87)
										Float tmp102 = (a32 * b21);		HX_STACK_VAR(tmp102,"tmp102");
										HX_STACK_LINE(87)
										Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
										HX_STACK_LINE(87)
										Float tmp104 = (a33 * b31);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(87)
										Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
										HX_STACK_LINE(87)
										Float tmp106 = (a34 * b41);		HX_STACK_VAR(tmp106,"tmp106");
										HX_STACK_LINE(87)
										Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(87)
										te[(int)2] = tmp107;
										HX_STACK_LINE(87)
										Float tmp108 = (a31 * b12);		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(87)
										Float tmp109 = (a32 * b22);		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(87)
										Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
										HX_STACK_LINE(87)
										Float tmp111 = (a33 * b32);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(87)
										Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
										HX_STACK_LINE(87)
										Float tmp113 = (a34 * b42);		HX_STACK_VAR(tmp113,"tmp113");
										HX_STACK_LINE(87)
										Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
										HX_STACK_LINE(87)
										te[(int)6] = tmp114;
										HX_STACK_LINE(87)
										Float tmp115 = (a31 * b13);		HX_STACK_VAR(tmp115,"tmp115");
										HX_STACK_LINE(87)
										Float tmp116 = (a32 * b23);		HX_STACK_VAR(tmp116,"tmp116");
										HX_STACK_LINE(87)
										Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
										HX_STACK_LINE(87)
										Float tmp118 = (a33 * b33);		HX_STACK_VAR(tmp118,"tmp118");
										HX_STACK_LINE(87)
										Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
										HX_STACK_LINE(87)
										Float tmp120 = (a34 * b43);		HX_STACK_VAR(tmp120,"tmp120");
										HX_STACK_LINE(87)
										Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
										HX_STACK_LINE(87)
										te[(int)10] = tmp121;
										HX_STACK_LINE(87)
										Float tmp122 = (a31 * b14);		HX_STACK_VAR(tmp122,"tmp122");
										HX_STACK_LINE(87)
										Float tmp123 = (a32 * b24);		HX_STACK_VAR(tmp123,"tmp123");
										HX_STACK_LINE(87)
										Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
										HX_STACK_LINE(87)
										Float tmp125 = (a33 * b34);		HX_STACK_VAR(tmp125,"tmp125");
										HX_STACK_LINE(87)
										Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
										HX_STACK_LINE(87)
										Float tmp127 = (a34 * b44);		HX_STACK_VAR(tmp127,"tmp127");
										HX_STACK_LINE(87)
										Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
										HX_STACK_LINE(87)
										te[(int)14] = tmp128;
										HX_STACK_LINE(87)
										Float tmp129 = (a41 * b11);		HX_STACK_VAR(tmp129,"tmp129");
										HX_STACK_LINE(87)
										Float tmp130 = (a42 * b21);		HX_STACK_VAR(tmp130,"tmp130");
										HX_STACK_LINE(87)
										Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
										HX_STACK_LINE(87)
										Float tmp132 = (a43 * b31);		HX_STACK_VAR(tmp132,"tmp132");
										HX_STACK_LINE(87)
										Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
										HX_STACK_LINE(87)
										Float tmp134 = (a44 * b41);		HX_STACK_VAR(tmp134,"tmp134");
										HX_STACK_LINE(87)
										Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
										HX_STACK_LINE(87)
										te[(int)3] = tmp135;
										HX_STACK_LINE(87)
										Float tmp136 = (a41 * b12);		HX_STACK_VAR(tmp136,"tmp136");
										HX_STACK_LINE(87)
										Float tmp137 = (a42 * b22);		HX_STACK_VAR(tmp137,"tmp137");
										HX_STACK_LINE(87)
										Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
										HX_STACK_LINE(87)
										Float tmp139 = (a43 * b32);		HX_STACK_VAR(tmp139,"tmp139");
										HX_STACK_LINE(87)
										Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
										HX_STACK_LINE(87)
										Float tmp141 = (a44 * b42);		HX_STACK_VAR(tmp141,"tmp141");
										HX_STACK_LINE(87)
										Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
										HX_STACK_LINE(87)
										te[(int)7] = tmp142;
										HX_STACK_LINE(87)
										Float tmp143 = (a41 * b13);		HX_STACK_VAR(tmp143,"tmp143");
										HX_STACK_LINE(87)
										Float tmp144 = (a42 * b23);		HX_STACK_VAR(tmp144,"tmp144");
										HX_STACK_LINE(87)
										Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
										HX_STACK_LINE(87)
										Float tmp146 = (a43 * b33);		HX_STACK_VAR(tmp146,"tmp146");
										HX_STACK_LINE(87)
										Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
										HX_STACK_LINE(87)
										Float tmp148 = (a44 * b43);		HX_STACK_VAR(tmp148,"tmp148");
										HX_STACK_LINE(87)
										Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
										HX_STACK_LINE(87)
										te[(int)11] = tmp149;
										HX_STACK_LINE(87)
										Float tmp150 = (a41 * b14);		HX_STACK_VAR(tmp150,"tmp150");
										HX_STACK_LINE(87)
										Float tmp151 = (a42 * b24);		HX_STACK_VAR(tmp151,"tmp151");
										HX_STACK_LINE(87)
										Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
										HX_STACK_LINE(87)
										Float tmp153 = (a43 * b34);		HX_STACK_VAR(tmp153,"tmp153");
										HX_STACK_LINE(87)
										Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
										HX_STACK_LINE(87)
										Float tmp155 = (a44 * b44);		HX_STACK_VAR(tmp155,"tmp155");
										HX_STACK_LINE(87)
										Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
										HX_STACK_LINE(87)
										te[(int)15] = tmp156;
										HX_STACK_LINE(87)
										_this1;
									}
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix tmp12 = _this->local->matrix;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(87)
									::phoenix::Matrix _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(87)
									::phoenix::Vector tmp13 = _this->local->scale;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(87)
									::phoenix::Vector _v = tmp13;		HX_STACK_VAR(_v,"_v");
									HX_STACK_LINE(87)
									Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(87)
									Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
									HX_STACK_LINE(87)
									Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(87)
									Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
									HX_STACK_LINE(87)
									Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)0],tmp14);
									HX_STACK_LINE(87)
									Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)4],tmp15);
									HX_STACK_LINE(87)
									Float tmp16 = _z;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)8],tmp16);
									HX_STACK_LINE(87)
									Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)1],tmp17);
									HX_STACK_LINE(87)
									Float tmp18 = _y;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)5],tmp18);
									HX_STACK_LINE(87)
									Float tmp19 = _z;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)9],tmp19);
									HX_STACK_LINE(87)
									Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)2],tmp20);
									HX_STACK_LINE(87)
									Float tmp21 = _y;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)6],tmp21);
									HX_STACK_LINE(87)
									Float tmp22 = _z;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)10],tmp22);
									HX_STACK_LINE(87)
									Float tmp23 = _x;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)3],tmp23);
									HX_STACK_LINE(87)
									Float tmp24 = _y;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)7],tmp24);
									HX_STACK_LINE(87)
									Float tmp25 = _z;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(87)
									hx::MultEq(te[(int)11],tmp25);
									HX_STACK_LINE(87)
									_this1;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix tmp12 = _this->local->matrix;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(87)
									::phoenix::Matrix _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(87)
									::phoenix::Vector tmp13 = _this->local->pos;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(87)
									::phoenix::Vector _v = tmp13;		HX_STACK_VAR(_v,"_v");
									HX_STACK_LINE(87)
									Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(87)
									Float tmp14 = _v->x;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(87)
									te[(int)12] = tmp14;
									HX_STACK_LINE(87)
									Float tmp15 = _v->y;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									te[(int)13] = tmp15;
									HX_STACK_LINE(87)
									Float tmp16 = _v->z;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									te[(int)14] = tmp16;
									HX_STACK_LINE(87)
									_this1;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix tmp12 = _this->local->matrix;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(87)
									::phoenix::Matrix _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(87)
										Array< Float > be = _this->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(87)
										Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(87)
										Float tmp13 = ae->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(87)
										Float a11 = tmp13;		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(87)
										Float tmp14 = ae->__get((int)4);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(87)
										Float a12 = tmp14;		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(87)
										Float tmp15 = ae->__get((int)8);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(87)
										Float a13 = tmp15;		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(87)
										Float tmp16 = ae->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(87)
										Float a14 = tmp16;		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(87)
										Float tmp17 = ae->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(87)
										Float a21 = tmp17;		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(87)
										Float tmp18 = ae->__get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(87)
										Float a22 = tmp18;		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(87)
										Float tmp19 = ae->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(87)
										Float a23 = tmp19;		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(87)
										Float tmp20 = ae->__get((int)13);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(87)
										Float a24 = tmp20;		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(87)
										Float tmp21 = ae->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(87)
										Float a31 = tmp21;		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(87)
										Float tmp22 = ae->__get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(87)
										Float a32 = tmp22;		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(87)
										Float tmp23 = ae->__get((int)10);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(87)
										Float a33 = tmp23;		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(87)
										Float tmp24 = ae->__get((int)14);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(87)
										Float a34 = tmp24;		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(87)
										Float tmp25 = ae->__get((int)3);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(87)
										Float a41 = tmp25;		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(87)
										Float tmp26 = ae->__get((int)7);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(87)
										Float a42 = tmp26;		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(87)
										Float tmp27 = ae->__get((int)11);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(87)
										Float a43 = tmp27;		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(87)
										Float tmp28 = ae->__get((int)15);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(87)
										Float a44 = tmp28;		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(87)
										Float tmp29 = be->__get((int)0);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(87)
										Float b11 = tmp29;		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(87)
										Float tmp30 = be->__get((int)4);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(87)
										Float b12 = tmp30;		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(87)
										Float tmp31 = be->__get((int)8);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(87)
										Float b13 = tmp31;		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(87)
										Float tmp32 = be->__get((int)12);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(87)
										Float b14 = tmp32;		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(87)
										Float tmp33 = be->__get((int)1);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(87)
										Float b21 = tmp33;		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(87)
										Float tmp34 = be->__get((int)5);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(87)
										Float b22 = tmp34;		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(87)
										Float tmp35 = be->__get((int)9);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(87)
										Float b23 = tmp35;		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(87)
										Float tmp36 = be->__get((int)13);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(87)
										Float b24 = tmp36;		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(87)
										Float tmp37 = be->__get((int)2);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(87)
										Float b31 = tmp37;		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(87)
										Float tmp38 = be->__get((int)6);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(87)
										Float b32 = tmp38;		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(87)
										Float tmp39 = be->__get((int)10);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(87)
										Float b33 = tmp39;		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(87)
										Float tmp40 = be->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(87)
										Float b34 = tmp40;		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(87)
										Float tmp41 = be->__get((int)3);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(87)
										Float b41 = tmp41;		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(87)
										Float tmp42 = be->__get((int)7);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(87)
										Float b42 = tmp42;		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(87)
										Float tmp43 = be->__get((int)11);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(87)
										Float b43 = tmp43;		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(87)
										Float tmp44 = be->__get((int)15);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(87)
										Float b44 = tmp44;		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(87)
										Float tmp45 = (a11 * b11);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(87)
										Float tmp46 = (a12 * b21);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(87)
										Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(87)
										Float tmp48 = (a13 * b31);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(87)
										Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(87)
										Float tmp50 = (a14 * b41);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(87)
										Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(87)
										te[(int)0] = tmp51;
										HX_STACK_LINE(87)
										Float tmp52 = (a11 * b12);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(87)
										Float tmp53 = (a12 * b22);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(87)
										Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(87)
										Float tmp55 = (a13 * b32);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(87)
										Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(87)
										Float tmp57 = (a14 * b42);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(87)
										Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(87)
										te[(int)4] = tmp58;
										HX_STACK_LINE(87)
										Float tmp59 = (a11 * b13);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(87)
										Float tmp60 = (a12 * b23);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(87)
										Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(87)
										Float tmp62 = (a13 * b33);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(87)
										Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(87)
										Float tmp64 = (a14 * b43);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(87)
										Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(87)
										te[(int)8] = tmp65;
										HX_STACK_LINE(87)
										Float tmp66 = (a11 * b14);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(87)
										Float tmp67 = (a12 * b24);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(87)
										Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(87)
										Float tmp69 = (a13 * b34);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(87)
										Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(87)
										Float tmp71 = (a14 * b44);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(87)
										Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(87)
										te[(int)12] = tmp72;
										HX_STACK_LINE(87)
										Float tmp73 = (a21 * b11);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(87)
										Float tmp74 = (a22 * b21);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(87)
										Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(87)
										Float tmp76 = (a23 * b31);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(87)
										Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(87)
										Float tmp78 = (a24 * b41);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(87)
										Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(87)
										te[(int)1] = tmp79;
										HX_STACK_LINE(87)
										Float tmp80 = (a21 * b12);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(87)
										Float tmp81 = (a22 * b22);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(87)
										Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(87)
										Float tmp83 = (a23 * b32);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(87)
										Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(87)
										Float tmp85 = (a24 * b42);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(87)
										Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(87)
										te[(int)5] = tmp86;
										HX_STACK_LINE(87)
										Float tmp87 = (a21 * b13);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(87)
										Float tmp88 = (a22 * b23);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(87)
										Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(87)
										Float tmp90 = (a23 * b33);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(87)
										Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(87)
										Float tmp92 = (a24 * b43);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(87)
										Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(87)
										te[(int)9] = tmp93;
										HX_STACK_LINE(87)
										Float tmp94 = (a21 * b14);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(87)
										Float tmp95 = (a22 * b24);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(87)
										Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(87)
										Float tmp97 = (a23 * b34);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(87)
										Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(87)
										Float tmp99 = (a24 * b44);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(87)
										Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(87)
										te[(int)13] = tmp100;
										HX_STACK_LINE(87)
										Float tmp101 = (a31 * b11);		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(87)
										Float tmp102 = (a32 * b21);		HX_STACK_VAR(tmp102,"tmp102");
										HX_STACK_LINE(87)
										Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
										HX_STACK_LINE(87)
										Float tmp104 = (a33 * b31);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(87)
										Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
										HX_STACK_LINE(87)
										Float tmp106 = (a34 * b41);		HX_STACK_VAR(tmp106,"tmp106");
										HX_STACK_LINE(87)
										Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(87)
										te[(int)2] = tmp107;
										HX_STACK_LINE(87)
										Float tmp108 = (a31 * b12);		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(87)
										Float tmp109 = (a32 * b22);		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(87)
										Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
										HX_STACK_LINE(87)
										Float tmp111 = (a33 * b32);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(87)
										Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
										HX_STACK_LINE(87)
										Float tmp113 = (a34 * b42);		HX_STACK_VAR(tmp113,"tmp113");
										HX_STACK_LINE(87)
										Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
										HX_STACK_LINE(87)
										te[(int)6] = tmp114;
										HX_STACK_LINE(87)
										Float tmp115 = (a31 * b13);		HX_STACK_VAR(tmp115,"tmp115");
										HX_STACK_LINE(87)
										Float tmp116 = (a32 * b23);		HX_STACK_VAR(tmp116,"tmp116");
										HX_STACK_LINE(87)
										Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
										HX_STACK_LINE(87)
										Float tmp118 = (a33 * b33);		HX_STACK_VAR(tmp118,"tmp118");
										HX_STACK_LINE(87)
										Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
										HX_STACK_LINE(87)
										Float tmp120 = (a34 * b43);		HX_STACK_VAR(tmp120,"tmp120");
										HX_STACK_LINE(87)
										Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
										HX_STACK_LINE(87)
										te[(int)10] = tmp121;
										HX_STACK_LINE(87)
										Float tmp122 = (a31 * b14);		HX_STACK_VAR(tmp122,"tmp122");
										HX_STACK_LINE(87)
										Float tmp123 = (a32 * b24);		HX_STACK_VAR(tmp123,"tmp123");
										HX_STACK_LINE(87)
										Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
										HX_STACK_LINE(87)
										Float tmp125 = (a33 * b34);		HX_STACK_VAR(tmp125,"tmp125");
										HX_STACK_LINE(87)
										Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
										HX_STACK_LINE(87)
										Float tmp127 = (a34 * b44);		HX_STACK_VAR(tmp127,"tmp127");
										HX_STACK_LINE(87)
										Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
										HX_STACK_LINE(87)
										te[(int)14] = tmp128;
										HX_STACK_LINE(87)
										Float tmp129 = (a41 * b11);		HX_STACK_VAR(tmp129,"tmp129");
										HX_STACK_LINE(87)
										Float tmp130 = (a42 * b21);		HX_STACK_VAR(tmp130,"tmp130");
										HX_STACK_LINE(87)
										Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
										HX_STACK_LINE(87)
										Float tmp132 = (a43 * b31);		HX_STACK_VAR(tmp132,"tmp132");
										HX_STACK_LINE(87)
										Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
										HX_STACK_LINE(87)
										Float tmp134 = (a44 * b41);		HX_STACK_VAR(tmp134,"tmp134");
										HX_STACK_LINE(87)
										Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
										HX_STACK_LINE(87)
										te[(int)3] = tmp135;
										HX_STACK_LINE(87)
										Float tmp136 = (a41 * b12);		HX_STACK_VAR(tmp136,"tmp136");
										HX_STACK_LINE(87)
										Float tmp137 = (a42 * b22);		HX_STACK_VAR(tmp137,"tmp137");
										HX_STACK_LINE(87)
										Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
										HX_STACK_LINE(87)
										Float tmp139 = (a43 * b32);		HX_STACK_VAR(tmp139,"tmp139");
										HX_STACK_LINE(87)
										Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
										HX_STACK_LINE(87)
										Float tmp141 = (a44 * b42);		HX_STACK_VAR(tmp141,"tmp141");
										HX_STACK_LINE(87)
										Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
										HX_STACK_LINE(87)
										te[(int)7] = tmp142;
										HX_STACK_LINE(87)
										Float tmp143 = (a41 * b13);		HX_STACK_VAR(tmp143,"tmp143");
										HX_STACK_LINE(87)
										Float tmp144 = (a42 * b23);		HX_STACK_VAR(tmp144,"tmp144");
										HX_STACK_LINE(87)
										Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
										HX_STACK_LINE(87)
										Float tmp146 = (a43 * b33);		HX_STACK_VAR(tmp146,"tmp146");
										HX_STACK_LINE(87)
										Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
										HX_STACK_LINE(87)
										Float tmp148 = (a44 * b43);		HX_STACK_VAR(tmp148,"tmp148");
										HX_STACK_LINE(87)
										Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
										HX_STACK_LINE(87)
										te[(int)11] = tmp149;
										HX_STACK_LINE(87)
										Float tmp150 = (a41 * b14);		HX_STACK_VAR(tmp150,"tmp150");
										HX_STACK_LINE(87)
										Float tmp151 = (a42 * b24);		HX_STACK_VAR(tmp151,"tmp151");
										HX_STACK_LINE(87)
										Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
										HX_STACK_LINE(87)
										Float tmp153 = (a43 * b34);		HX_STACK_VAR(tmp153,"tmp153");
										HX_STACK_LINE(87)
										Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
										HX_STACK_LINE(87)
										Float tmp155 = (a44 * b44);		HX_STACK_VAR(tmp155,"tmp155");
										HX_STACK_LINE(87)
										Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
										HX_STACK_LINE(87)
										te[(int)15] = tmp156;
										HX_STACK_LINE(87)
										_this1;
									}
								}
								HX_STACK_LINE(87)
								bool tmp12 = (_this->parent != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(87)
								if ((tmp12)){
									HX_STACK_LINE(87)
									::phoenix::Spatial tmp13 = _this->get_world();		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(87)
									::phoenix::Spatial _this1 = tmp13;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(87)
									::phoenix::Matrix tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Matrix tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::phoenix::Spatial tmp16 = _this->get_world();		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(87)
											::phoenix::Spatial _this2 = tmp16;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(87)
											tmp15 = _this2->matrix;
										}
										HX_STACK_LINE(87)
										::phoenix::Matrix _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(87)
										::phoenix::Matrix tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::phoenix::Spatial tmp17 = _this->parent->get_world();		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(87)
											::phoenix::Spatial _this3 = tmp17;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(87)
											tmp16 = _this3->matrix;
										}
										HX_STACK_LINE(87)
										::phoenix::Matrix _a = tmp16;		HX_STACK_VAR(_a,"_a");
										HX_STACK_LINE(87)
										Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(87)
										::phoenix::Matrix tmp17 = _this->local->matrix;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(87)
										Array< Float > be = tmp17->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(87)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(87)
										Float tmp18 = ae->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(87)
										Float a11 = tmp18;		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(87)
										Float tmp19 = ae->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(87)
										Float a12 = tmp19;		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(87)
										Float tmp20 = ae->__get((int)8);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(87)
										Float a13 = tmp20;		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(87)
										Float tmp21 = ae->__get((int)12);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(87)
										Float a14 = tmp21;		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(87)
										Float tmp22 = ae->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(87)
										Float a21 = tmp22;		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(87)
										Float tmp23 = ae->__get((int)5);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(87)
										Float a22 = tmp23;		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(87)
										Float tmp24 = ae->__get((int)9);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(87)
										Float a23 = tmp24;		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(87)
										Float tmp25 = ae->__get((int)13);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(87)
										Float a24 = tmp25;		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(87)
										Float tmp26 = ae->__get((int)2);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(87)
										Float a31 = tmp26;		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(87)
										Float tmp27 = ae->__get((int)6);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(87)
										Float a32 = tmp27;		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(87)
										Float tmp28 = ae->__get((int)10);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(87)
										Float a33 = tmp28;		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(87)
										Float tmp29 = ae->__get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(87)
										Float a34 = tmp29;		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(87)
										Float tmp30 = ae->__get((int)3);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(87)
										Float a41 = tmp30;		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(87)
										Float tmp31 = ae->__get((int)7);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(87)
										Float a42 = tmp31;		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(87)
										Float tmp32 = ae->__get((int)11);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(87)
										Float a43 = tmp32;		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(87)
										Float tmp33 = ae->__get((int)15);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(87)
										Float a44 = tmp33;		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(87)
										Float tmp34 = be->__get((int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(87)
										Float b11 = tmp34;		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(87)
										Float tmp35 = be->__get((int)4);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(87)
										Float b12 = tmp35;		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(87)
										Float tmp36 = be->__get((int)8);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(87)
										Float b13 = tmp36;		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(87)
										Float tmp37 = be->__get((int)12);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(87)
										Float b14 = tmp37;		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(87)
										Float tmp38 = be->__get((int)1);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(87)
										Float b21 = tmp38;		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(87)
										Float tmp39 = be->__get((int)5);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(87)
										Float b22 = tmp39;		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(87)
										Float tmp40 = be->__get((int)9);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(87)
										Float b23 = tmp40;		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(87)
										Float tmp41 = be->__get((int)13);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(87)
										Float b24 = tmp41;		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(87)
										Float tmp42 = be->__get((int)2);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(87)
										Float b31 = tmp42;		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(87)
										Float tmp43 = be->__get((int)6);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(87)
										Float b32 = tmp43;		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(87)
										Float tmp44 = be->__get((int)10);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(87)
										Float b33 = tmp44;		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(87)
										Float tmp45 = be->__get((int)14);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(87)
										Float b34 = tmp45;		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(87)
										Float tmp46 = be->__get((int)3);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(87)
										Float b41 = tmp46;		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(87)
										Float tmp47 = be->__get((int)7);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(87)
										Float b42 = tmp47;		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(87)
										Float tmp48 = be->__get((int)11);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(87)
										Float b43 = tmp48;		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(87)
										Float tmp49 = be->__get((int)15);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(87)
										Float b44 = tmp49;		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(87)
										Float tmp50 = (a11 * b11);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(87)
										Float tmp51 = (a12 * b21);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(87)
										Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(87)
										Float tmp53 = (a13 * b31);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(87)
										Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(87)
										Float tmp55 = (a14 * b41);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(87)
										Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(87)
										te[(int)0] = tmp56;
										HX_STACK_LINE(87)
										Float tmp57 = (a11 * b12);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(87)
										Float tmp58 = (a12 * b22);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(87)
										Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(87)
										Float tmp60 = (a13 * b32);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(87)
										Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(87)
										Float tmp62 = (a14 * b42);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(87)
										Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(87)
										te[(int)4] = tmp63;
										HX_STACK_LINE(87)
										Float tmp64 = (a11 * b13);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(87)
										Float tmp65 = (a12 * b23);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(87)
										Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(87)
										Float tmp67 = (a13 * b33);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(87)
										Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(87)
										Float tmp69 = (a14 * b43);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(87)
										Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(87)
										te[(int)8] = tmp70;
										HX_STACK_LINE(87)
										Float tmp71 = (a11 * b14);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(87)
										Float tmp72 = (a12 * b24);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(87)
										Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(87)
										Float tmp74 = (a13 * b34);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(87)
										Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(87)
										Float tmp76 = (a14 * b44);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(87)
										Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(87)
										te[(int)12] = tmp77;
										HX_STACK_LINE(87)
										Float tmp78 = (a21 * b11);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(87)
										Float tmp79 = (a22 * b21);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(87)
										Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(87)
										Float tmp81 = (a23 * b31);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(87)
										Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(87)
										Float tmp83 = (a24 * b41);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(87)
										Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(87)
										te[(int)1] = tmp84;
										HX_STACK_LINE(87)
										Float tmp85 = (a21 * b12);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(87)
										Float tmp86 = (a22 * b22);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(87)
										Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(87)
										Float tmp88 = (a23 * b32);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(87)
										Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(87)
										Float tmp90 = (a24 * b42);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(87)
										Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(87)
										te[(int)5] = tmp91;
										HX_STACK_LINE(87)
										Float tmp92 = (a21 * b13);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(87)
										Float tmp93 = (a22 * b23);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(87)
										Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(87)
										Float tmp95 = (a23 * b33);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(87)
										Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(87)
										Float tmp97 = (a24 * b43);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(87)
										Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(87)
										te[(int)9] = tmp98;
										HX_STACK_LINE(87)
										Float tmp99 = (a21 * b14);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(87)
										Float tmp100 = (a22 * b24);		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(87)
										Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(87)
										Float tmp102 = (a23 * b34);		HX_STACK_VAR(tmp102,"tmp102");
										HX_STACK_LINE(87)
										Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
										HX_STACK_LINE(87)
										Float tmp104 = (a24 * b44);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(87)
										Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
										HX_STACK_LINE(87)
										te[(int)13] = tmp105;
										HX_STACK_LINE(87)
										Float tmp106 = (a31 * b11);		HX_STACK_VAR(tmp106,"tmp106");
										HX_STACK_LINE(87)
										Float tmp107 = (a32 * b21);		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(87)
										Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(87)
										Float tmp109 = (a33 * b31);		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(87)
										Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
										HX_STACK_LINE(87)
										Float tmp111 = (a34 * b41);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(87)
										Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
										HX_STACK_LINE(87)
										te[(int)2] = tmp112;
										HX_STACK_LINE(87)
										Float tmp113 = (a31 * b12);		HX_STACK_VAR(tmp113,"tmp113");
										HX_STACK_LINE(87)
										Float tmp114 = (a32 * b22);		HX_STACK_VAR(tmp114,"tmp114");
										HX_STACK_LINE(87)
										Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
										HX_STACK_LINE(87)
										Float tmp116 = (a33 * b32);		HX_STACK_VAR(tmp116,"tmp116");
										HX_STACK_LINE(87)
										Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
										HX_STACK_LINE(87)
										Float tmp118 = (a34 * b42);		HX_STACK_VAR(tmp118,"tmp118");
										HX_STACK_LINE(87)
										Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
										HX_STACK_LINE(87)
										te[(int)6] = tmp119;
										HX_STACK_LINE(87)
										Float tmp120 = (a31 * b13);		HX_STACK_VAR(tmp120,"tmp120");
										HX_STACK_LINE(87)
										Float tmp121 = (a32 * b23);		HX_STACK_VAR(tmp121,"tmp121");
										HX_STACK_LINE(87)
										Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
										HX_STACK_LINE(87)
										Float tmp123 = (a33 * b33);		HX_STACK_VAR(tmp123,"tmp123");
										HX_STACK_LINE(87)
										Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
										HX_STACK_LINE(87)
										Float tmp125 = (a34 * b43);		HX_STACK_VAR(tmp125,"tmp125");
										HX_STACK_LINE(87)
										Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
										HX_STACK_LINE(87)
										te[(int)10] = tmp126;
										HX_STACK_LINE(87)
										Float tmp127 = (a31 * b14);		HX_STACK_VAR(tmp127,"tmp127");
										HX_STACK_LINE(87)
										Float tmp128 = (a32 * b24);		HX_STACK_VAR(tmp128,"tmp128");
										HX_STACK_LINE(87)
										Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
										HX_STACK_LINE(87)
										Float tmp130 = (a33 * b34);		HX_STACK_VAR(tmp130,"tmp130");
										HX_STACK_LINE(87)
										Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
										HX_STACK_LINE(87)
										Float tmp132 = (a34 * b44);		HX_STACK_VAR(tmp132,"tmp132");
										HX_STACK_LINE(87)
										Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
										HX_STACK_LINE(87)
										te[(int)14] = tmp133;
										HX_STACK_LINE(87)
										Float tmp134 = (a41 * b11);		HX_STACK_VAR(tmp134,"tmp134");
										HX_STACK_LINE(87)
										Float tmp135 = (a42 * b21);		HX_STACK_VAR(tmp135,"tmp135");
										HX_STACK_LINE(87)
										Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
										HX_STACK_LINE(87)
										Float tmp137 = (a43 * b31);		HX_STACK_VAR(tmp137,"tmp137");
										HX_STACK_LINE(87)
										Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
										HX_STACK_LINE(87)
										Float tmp139 = (a44 * b41);		HX_STACK_VAR(tmp139,"tmp139");
										HX_STACK_LINE(87)
										Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
										HX_STACK_LINE(87)
										te[(int)3] = tmp140;
										HX_STACK_LINE(87)
										Float tmp141 = (a41 * b12);		HX_STACK_VAR(tmp141,"tmp141");
										HX_STACK_LINE(87)
										Float tmp142 = (a42 * b22);		HX_STACK_VAR(tmp142,"tmp142");
										HX_STACK_LINE(87)
										Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
										HX_STACK_LINE(87)
										Float tmp144 = (a43 * b32);		HX_STACK_VAR(tmp144,"tmp144");
										HX_STACK_LINE(87)
										Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
										HX_STACK_LINE(87)
										Float tmp146 = (a44 * b42);		HX_STACK_VAR(tmp146,"tmp146");
										HX_STACK_LINE(87)
										Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
										HX_STACK_LINE(87)
										te[(int)7] = tmp147;
										HX_STACK_LINE(87)
										Float tmp148 = (a41 * b13);		HX_STACK_VAR(tmp148,"tmp148");
										HX_STACK_LINE(87)
										Float tmp149 = (a42 * b23);		HX_STACK_VAR(tmp149,"tmp149");
										HX_STACK_LINE(87)
										Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
										HX_STACK_LINE(87)
										Float tmp151 = (a43 * b33);		HX_STACK_VAR(tmp151,"tmp151");
										HX_STACK_LINE(87)
										Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
										HX_STACK_LINE(87)
										Float tmp153 = (a44 * b43);		HX_STACK_VAR(tmp153,"tmp153");
										HX_STACK_LINE(87)
										Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
										HX_STACK_LINE(87)
										te[(int)11] = tmp154;
										HX_STACK_LINE(87)
										Float tmp155 = (a41 * b14);		HX_STACK_VAR(tmp155,"tmp155");
										HX_STACK_LINE(87)
										Float tmp156 = (a42 * b24);		HX_STACK_VAR(tmp156,"tmp156");
										HX_STACK_LINE(87)
										Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
										HX_STACK_LINE(87)
										Float tmp158 = (a43 * b34);		HX_STACK_VAR(tmp158,"tmp158");
										HX_STACK_LINE(87)
										Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
										HX_STACK_LINE(87)
										Float tmp160 = (a44 * b44);		HX_STACK_VAR(tmp160,"tmp160");
										HX_STACK_LINE(87)
										Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
										HX_STACK_LINE(87)
										te[(int)15] = tmp161;
										HX_STACK_LINE(87)
										tmp14 = _this2;
									}
									HX_STACK_LINE(87)
									::phoenix::Matrix _m = tmp14;		HX_STACK_VAR(_m,"_m");
									HX_STACK_LINE(87)
									_this1->matrix = _m;
									HX_STACK_LINE(87)
									bool tmp15 = (_m != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									if ((tmp15)){
										HX_STACK_LINE(87)
										::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											cpp::ArrayBase array = _this1->matrix->elements;		HX_STACK_VAR(array,"array");
											HX_STACK_LINE(87)
											::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(87)
											bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(87)
											if ((tmp17)){
												HX_STACK_LINE(87)
												::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(87)
												this1 = tmp18;
											}
											else{
												HX_STACK_LINE(87)
												bool tmp18 = (array != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(87)
												if ((tmp18)){
													HX_STACK_LINE(87)
													::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(87)
													{
														HX_STACK_LINE(87)
														::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(87)
														::snow::api::buffers::ArrayBufferView _this2 = tmp20;		HX_STACK_VAR(_this2,"_this2");
														HX_STACK_LINE(87)
														_this2->byteOffset = (int)0;
														HX_STACK_LINE(87)
														_this2->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
														HX_STACK_LINE(87)
														int tmp21 = (_this2->length * _this2->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(87)
														_this2->byteLength = tmp21;
														HX_STACK_LINE(87)
														::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(87)
														{
															HX_STACK_LINE(87)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(87)
															int tmp23 = _this2->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(87)
															::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(87)
															this2 = tmp24;
															HX_STACK_LINE(87)
															tmp22 = this2;
														}
														HX_STACK_LINE(87)
														_this2->buffer = tmp22;
														HX_STACK_LINE(87)
														_this2->copyFromArray(((Array< Float >)(array)),null());
														HX_STACK_LINE(87)
														tmp19 = _this2;
													}
													HX_STACK_LINE(87)
													this1 = tmp19;
												}
												else{
													HX_STACK_LINE(87)
													bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(87)
													if ((tmp19)){
														HX_STACK_LINE(87)
														::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(87)
														{
															HX_STACK_LINE(87)
															::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(87)
															::snow::api::buffers::ArrayBufferView _this2 = tmp21;		HX_STACK_VAR(_this2,"_this2");
															HX_STACK_LINE(87)
															::haxe::io::Bytes tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(87)
															::haxe::io::Bytes srcData = tmp22;		HX_STACK_VAR(srcData,"srcData");
															HX_STACK_LINE(87)
															int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(87)
															int srcLength = tmp23;		HX_STACK_VAR(srcLength,"srcLength");
															HX_STACK_LINE(87)
															int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(87)
															int srcByteOffset = tmp24;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
															HX_STACK_LINE(87)
															int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(87)
															int srcElementSize = tmp25;		HX_STACK_VAR(srcElementSize,"srcElementSize");
															HX_STACK_LINE(87)
															int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
															HX_STACK_LINE(87)
															int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(87)
															int tmp27 = _this2->type;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(87)
															bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(87)
															if ((tmp28)){
																HX_STACK_LINE(87)
																int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																HX_STACK_LINE(87)
																int tmp29 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(87)
																int cloneLength = tmp29;		HX_STACK_VAR(cloneLength,"cloneLength");
																HX_STACK_LINE(87)
																::haxe::io::Bytes tmp30;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(87)
																{
																	HX_STACK_LINE(87)
																	::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																	HX_STACK_LINE(87)
																	int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(87)
																	::haxe::io::Bytes tmp32 = ::haxe::io::Bytes_obj::alloc(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(87)
																	this2 = tmp32;
																	HX_STACK_LINE(87)
																	tmp30 = this2;
																}
																HX_STACK_LINE(87)
																_this2->buffer = tmp30;
																HX_STACK_LINE(87)
																::haxe::io::Bytes tmp31 = srcData;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(87)
																int tmp32 = srcByteOffset;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(87)
																int tmp33 = cloneLength;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(87)
																_this2->buffer->blit((int)0,tmp31,tmp32,tmp33);
															}
															else{
																HX_STACK_LINE(87)
																HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
															}
															HX_STACK_LINE(87)
															int tmp29 = (_this2->bytesPerElement * srcLength);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(87)
															_this2->byteLength = tmp29;
															HX_STACK_LINE(87)
															_this2->byteOffset = (int)0;
															HX_STACK_LINE(87)
															_this2->length = srcLength;
															HX_STACK_LINE(87)
															tmp20 = _this2;
														}
														HX_STACK_LINE(87)
														this1 = tmp20;
													}
													else{
														HX_STACK_LINE(87)
														bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(87)
														if ((tmp20)){
															HX_STACK_LINE(87)
															::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(87)
															{
																HX_STACK_LINE(87)
																::snow::api::buffers::ArrayBufferView tmp22 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(87)
																::snow::api::buffers::ArrayBufferView _this2 = tmp22;		HX_STACK_VAR(_this2,"_this2");
																HX_STACK_LINE(87)
																bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(87)
																if ((tmp23)){
																	HX_STACK_LINE(87)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
																HX_STACK_LINE(87)
																int tmp24 = hx::Mod((int)0,_this2->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(87)
																bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(87)
																if ((tmp25)){
																	HX_STACK_LINE(87)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
																HX_STACK_LINE(87)
																int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(87)
																int bufferByteLength = tmp26;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																HX_STACK_LINE(87)
																int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																HX_STACK_LINE(87)
																int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																HX_STACK_LINE(87)
																bool tmp27 = true;		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(87)
																if ((tmp27)){
																	HX_STACK_LINE(87)
																	int tmp28 = bufferByteLength;		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(87)
																	newByteLength = tmp28;
																	HX_STACK_LINE(87)
																	int tmp29 = hx::Mod(bufferByteLength,_this2->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(87)
																	bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(87)
																	if ((tmp30)){
																		HX_STACK_LINE(87)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(87)
																	bool tmp31 = (newByteLength < (int)0);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(87)
																	if ((tmp31)){
																		HX_STACK_LINE(87)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																}
																else{
																	HX_STACK_LINE(87)
																	int tmp28 = (null() * _this2->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(87)
																	newByteLength = tmp28;
																	HX_STACK_LINE(87)
																	int tmp29 = newByteLength;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(87)
																	int newRange = tmp29;		HX_STACK_VAR(newRange,"newRange");
																	HX_STACK_LINE(87)
																	bool tmp30 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(87)
																	if ((tmp30)){
																		HX_STACK_LINE(87)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																}
																HX_STACK_LINE(87)
																_this2->buffer = null();
																HX_STACK_LINE(87)
																_this2->byteOffset = (int)0;
																HX_STACK_LINE(87)
																_this2->byteLength = newByteLength;
																HX_STACK_LINE(87)
																Float tmp28 = (Float(newByteLength) / Float(_this2->bytesPerElement));		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(87)
																int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(87)
																_this2->length = tmp29;
																HX_STACK_LINE(87)
																tmp21 = _this2;
															}
															HX_STACK_LINE(87)
															this1 = tmp21;
														}
														else{
															HX_STACK_LINE(87)
															HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
														}
													}
												}
											}
											HX_STACK_LINE(87)
											tmp16 = this1;
										}
										HX_STACK_LINE(87)
										_this1->floats = tmp16;
									}
									HX_STACK_LINE(87)
									_this1->matrix;
								}
								else{
									HX_STACK_LINE(87)
									::phoenix::Spatial tmp13 = _this->get_world();		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(87)
									::phoenix::Spatial _this1 = tmp13;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(87)
									::phoenix::Matrix tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Matrix tmp15 = _this->local->matrix;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(87)
										Array< Float > te = tmp15->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(87)
										Float tmp16 = te->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(87)
										Float tmp17 = te->__get((int)4);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(87)
										Float tmp18 = te->__get((int)8);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(87)
										Float tmp19 = te->__get((int)12);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(87)
										Float tmp20 = te->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(87)
										Float tmp21 = te->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(87)
										Float tmp22 = te->__get((int)9);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(87)
										Float tmp23 = te->__get((int)13);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(87)
										Float tmp24 = te->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(87)
										Float tmp25 = te->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(87)
										Float tmp26 = te->__get((int)10);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(87)
										Float tmp27 = te->__get((int)14);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(87)
										Float tmp28 = te->__get((int)3);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(87)
										Float tmp29 = te->__get((int)7);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(87)
										Float tmp30 = te->__get((int)11);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(87)
										Float tmp31 = te->__get((int)15);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(87)
										tmp14 = ::phoenix::Matrix_obj::__new(tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31);
									}
									HX_STACK_LINE(87)
									::phoenix::Matrix _m = tmp14;		HX_STACK_VAR(_m,"_m");
									HX_STACK_LINE(87)
									_this1->matrix = _m;
									HX_STACK_LINE(87)
									bool tmp15 = (_m != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									if ((tmp15)){
										HX_STACK_LINE(87)
										::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											cpp::ArrayBase array = _this1->matrix->elements;		HX_STACK_VAR(array,"array");
											HX_STACK_LINE(87)
											::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(87)
											bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(87)
											if ((tmp17)){
												HX_STACK_LINE(87)
												::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(87)
												this1 = tmp18;
											}
											else{
												HX_STACK_LINE(87)
												bool tmp18 = (array != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(87)
												if ((tmp18)){
													HX_STACK_LINE(87)
													::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(87)
													{
														HX_STACK_LINE(87)
														::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(87)
														::snow::api::buffers::ArrayBufferView _this2 = tmp20;		HX_STACK_VAR(_this2,"_this2");
														HX_STACK_LINE(87)
														_this2->byteOffset = (int)0;
														HX_STACK_LINE(87)
														_this2->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
														HX_STACK_LINE(87)
														int tmp21 = (_this2->length * _this2->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(87)
														_this2->byteLength = tmp21;
														HX_STACK_LINE(87)
														::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(87)
														{
															HX_STACK_LINE(87)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(87)
															int tmp23 = _this2->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(87)
															::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(87)
															this2 = tmp24;
															HX_STACK_LINE(87)
															tmp22 = this2;
														}
														HX_STACK_LINE(87)
														_this2->buffer = tmp22;
														HX_STACK_LINE(87)
														_this2->copyFromArray(((Array< Float >)(array)),null());
														HX_STACK_LINE(87)
														tmp19 = _this2;
													}
													HX_STACK_LINE(87)
													this1 = tmp19;
												}
												else{
													HX_STACK_LINE(87)
													bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(87)
													if ((tmp19)){
														HX_STACK_LINE(87)
														::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(87)
														{
															HX_STACK_LINE(87)
															::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(87)
															::snow::api::buffers::ArrayBufferView _this2 = tmp21;		HX_STACK_VAR(_this2,"_this2");
															HX_STACK_LINE(87)
															::haxe::io::Bytes tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(87)
															::haxe::io::Bytes srcData = tmp22;		HX_STACK_VAR(srcData,"srcData");
															HX_STACK_LINE(87)
															int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(87)
															int srcLength = tmp23;		HX_STACK_VAR(srcLength,"srcLength");
															HX_STACK_LINE(87)
															int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(87)
															int srcByteOffset = tmp24;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
															HX_STACK_LINE(87)
															int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(87)
															int srcElementSize = tmp25;		HX_STACK_VAR(srcElementSize,"srcElementSize");
															HX_STACK_LINE(87)
															int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
															HX_STACK_LINE(87)
															int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(87)
															int tmp27 = _this2->type;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(87)
															bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(87)
															if ((tmp28)){
																HX_STACK_LINE(87)
																int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																HX_STACK_LINE(87)
																int tmp29 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(87)
																int cloneLength = tmp29;		HX_STACK_VAR(cloneLength,"cloneLength");
																HX_STACK_LINE(87)
																::haxe::io::Bytes tmp30;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(87)
																{
																	HX_STACK_LINE(87)
																	::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																	HX_STACK_LINE(87)
																	int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(87)
																	::haxe::io::Bytes tmp32 = ::haxe::io::Bytes_obj::alloc(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(87)
																	this2 = tmp32;
																	HX_STACK_LINE(87)
																	tmp30 = this2;
																}
																HX_STACK_LINE(87)
																_this2->buffer = tmp30;
																HX_STACK_LINE(87)
																::haxe::io::Bytes tmp31 = srcData;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(87)
																int tmp32 = srcByteOffset;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(87)
																int tmp33 = cloneLength;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(87)
																_this2->buffer->blit((int)0,tmp31,tmp32,tmp33);
															}
															else{
																HX_STACK_LINE(87)
																HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
															}
															HX_STACK_LINE(87)
															int tmp29 = (_this2->bytesPerElement * srcLength);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(87)
															_this2->byteLength = tmp29;
															HX_STACK_LINE(87)
															_this2->byteOffset = (int)0;
															HX_STACK_LINE(87)
															_this2->length = srcLength;
															HX_STACK_LINE(87)
															tmp20 = _this2;
														}
														HX_STACK_LINE(87)
														this1 = tmp20;
													}
													else{
														HX_STACK_LINE(87)
														bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(87)
														if ((tmp20)){
															HX_STACK_LINE(87)
															::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(87)
															{
																HX_STACK_LINE(87)
																::snow::api::buffers::ArrayBufferView tmp22 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(87)
																::snow::api::buffers::ArrayBufferView _this2 = tmp22;		HX_STACK_VAR(_this2,"_this2");
																HX_STACK_LINE(87)
																bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(87)
																if ((tmp23)){
																	HX_STACK_LINE(87)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
																HX_STACK_LINE(87)
																int tmp24 = hx::Mod((int)0,_this2->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(87)
																bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(87)
																if ((tmp25)){
																	HX_STACK_LINE(87)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
																HX_STACK_LINE(87)
																int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(87)
																int bufferByteLength = tmp26;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																HX_STACK_LINE(87)
																int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																HX_STACK_LINE(87)
																int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																HX_STACK_LINE(87)
																bool tmp27 = true;		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(87)
																if ((tmp27)){
																	HX_STACK_LINE(87)
																	int tmp28 = bufferByteLength;		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(87)
																	newByteLength = tmp28;
																	HX_STACK_LINE(87)
																	int tmp29 = hx::Mod(bufferByteLength,_this2->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(87)
																	bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(87)
																	if ((tmp30)){
																		HX_STACK_LINE(87)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(87)
																	bool tmp31 = (newByteLength < (int)0);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(87)
																	if ((tmp31)){
																		HX_STACK_LINE(87)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																}
																else{
																	HX_STACK_LINE(87)
																	int tmp28 = (null() * _this2->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(87)
																	newByteLength = tmp28;
																	HX_STACK_LINE(87)
																	int tmp29 = newByteLength;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(87)
																	int newRange = tmp29;		HX_STACK_VAR(newRange,"newRange");
																	HX_STACK_LINE(87)
																	bool tmp30 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(87)
																	if ((tmp30)){
																		HX_STACK_LINE(87)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																}
																HX_STACK_LINE(87)
																_this2->buffer = null();
																HX_STACK_LINE(87)
																_this2->byteOffset = (int)0;
																HX_STACK_LINE(87)
																_this2->byteLength = newByteLength;
																HX_STACK_LINE(87)
																Float tmp28 = (Float(newByteLength) / Float(_this2->bytesPerElement));		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(87)
																int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(87)
																_this2->length = tmp29;
																HX_STACK_LINE(87)
																tmp21 = _this2;
															}
															HX_STACK_LINE(87)
															this1 = tmp21;
														}
														else{
															HX_STACK_LINE(87)
															HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
														}
													}
												}
											}
											HX_STACK_LINE(87)
											tmp16 = this1;
										}
										HX_STACK_LINE(87)
										_this1->floats = tmp16;
									}
									HX_STACK_LINE(87)
									_this1->matrix;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Spatial tmp13 = _this->get_world();		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(87)
									::phoenix::Spatial _this1 = tmp13;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(87)
									bool tmp14 = _this1->auto_decompose;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(87)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									if ((tmp15)){
										HX_STACK_LINE(87)
										tmp16 = false;
									}
									else{
										HX_STACK_LINE(87)
										tmp16 = true;
									}
									HX_STACK_LINE(87)
									if ((tmp16)){
										HX_STACK_LINE(87)
										::phoenix::MatrixTransform tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(87)
											::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
											HX_STACK_LINE(87)
											::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
											HX_STACK_LINE(87)
											::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
											HX_STACK_LINE(87)
											Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(87)
											::phoenix::Matrix tmp18 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(87)
											::phoenix::Matrix matrix = tmp18;		HX_STACK_VAR(matrix,"matrix");
											HX_STACK_LINE(87)
											Float tmp19 = te->__get((int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(87)
											Float _ax_x = tmp19;		HX_STACK_VAR(_ax_x,"_ax_x");
											HX_STACK_LINE(87)
											Float tmp20 = te->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(87)
											Float _ax_y = tmp20;		HX_STACK_VAR(_ax_y,"_ax_y");
											HX_STACK_LINE(87)
											Float tmp21 = te->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(87)
											Float _ax_z = tmp21;		HX_STACK_VAR(_ax_z,"_ax_z");
											HX_STACK_LINE(87)
											Float tmp22 = te->__get((int)4);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(87)
											Float _ay_x = tmp22;		HX_STACK_VAR(_ay_x,"_ay_x");
											HX_STACK_LINE(87)
											Float tmp23 = te->__get((int)5);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(87)
											Float _ay_y = tmp23;		HX_STACK_VAR(_ay_y,"_ay_y");
											HX_STACK_LINE(87)
											Float tmp24 = te->__get((int)6);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(87)
											Float _ay_z = tmp24;		HX_STACK_VAR(_ay_z,"_ay_z");
											HX_STACK_LINE(87)
											Float tmp25 = te->__get((int)8);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(87)
											Float _az_x = tmp25;		HX_STACK_VAR(_az_x,"_az_x");
											HX_STACK_LINE(87)
											Float tmp26 = te->__get((int)9);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(87)
											Float _az_y = tmp26;		HX_STACK_VAR(_az_y,"_az_y");
											HX_STACK_LINE(87)
											Float tmp27 = te->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(87)
											Float _az_z = tmp27;		HX_STACK_VAR(_az_z,"_az_z");
											HX_STACK_LINE(87)
											Float tmp28 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(87)
											Float tmp29 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(87)
											Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(87)
											Float tmp31 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(87)
											Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(87)
											Float tmp33 = ::Math_obj::sqrt(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(87)
											Float _ax_length = tmp33;		HX_STACK_VAR(_ax_length,"_ax_length");
											HX_STACK_LINE(87)
											Float tmp34 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(87)
											Float tmp35 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(87)
											Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(87)
											Float tmp37 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(87)
											Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(87)
											Float tmp39 = ::Math_obj::sqrt(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(87)
											Float _ay_length = tmp39;		HX_STACK_VAR(_ay_length,"_ay_length");
											HX_STACK_LINE(87)
											Float tmp40 = (_az_x * _az_x);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(87)
											Float tmp41 = (_az_y * _az_y);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(87)
											Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(87)
											Float tmp43 = (_az_z * _az_z);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(87)
											Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(87)
											Float tmp45 = ::Math_obj::sqrt(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(87)
											Float _az_length = tmp45;		HX_STACK_VAR(_az_length,"_az_length");
											HX_STACK_LINE(87)
											bool tmp46 = (_quaternion == null());		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(87)
											if ((tmp46)){
												HX_STACK_LINE(87)
												::phoenix::Quaternion tmp47 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(87)
												_quaternion = tmp47;
											}
											HX_STACK_LINE(87)
											bool tmp47 = (_position == null());		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(87)
											if ((tmp47)){
												HX_STACK_LINE(87)
												Float tmp48 = te->__get((int)12);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(87)
												Float tmp49 = te->__get((int)13);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(87)
												Float tmp50 = te->__get((int)14);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(87)
												::phoenix::Vector tmp51 = ::phoenix::Vector_obj::__new(tmp48,tmp49,tmp50,null());		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(87)
												_position = tmp51;
											}
											else{
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													Float tmp48 = te->__get((int)12);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(87)
													Float _x = tmp48;		HX_STACK_VAR(_x,"_x");
													HX_STACK_LINE(87)
													_position->x = _x;
													HX_STACK_LINE(87)
													bool tmp49 = _position->_construct;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(87)
													if ((tmp49)){
														HX_STACK_LINE(87)
														_position->x;
													}
													else{
														HX_STACK_LINE(87)
														bool tmp50 = (_position->listen_x != null());		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(87)
														bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(87)
														if ((tmp50)){
															HX_STACK_LINE(87)
															bool tmp52 = _position->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(87)
															bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(87)
															tmp51 = !(tmp53);
														}
														else{
															HX_STACK_LINE(87)
															tmp51 = false;
														}
														HX_STACK_LINE(87)
														if ((tmp51)){
															HX_STACK_LINE(87)
															Float tmp52 = _x;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(87)
															_position->listen_x(tmp52);
														}
														HX_STACK_LINE(87)
														_position->x;
													}
												}
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													Float tmp48 = te->__get((int)13);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(87)
													Float _y = tmp48;		HX_STACK_VAR(_y,"_y");
													HX_STACK_LINE(87)
													_position->y = _y;
													HX_STACK_LINE(87)
													bool tmp49 = _position->_construct;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(87)
													if ((tmp49)){
														HX_STACK_LINE(87)
														_position->y;
													}
													else{
														HX_STACK_LINE(87)
														bool tmp50 = (_position->listen_y != null());		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(87)
														bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(87)
														if ((tmp50)){
															HX_STACK_LINE(87)
															bool tmp52 = _position->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(87)
															bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(87)
															tmp51 = !(tmp53);
														}
														else{
															HX_STACK_LINE(87)
															tmp51 = false;
														}
														HX_STACK_LINE(87)
														if ((tmp51)){
															HX_STACK_LINE(87)
															Float tmp52 = _y;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(87)
															_position->listen_y(tmp52);
														}
														HX_STACK_LINE(87)
														_position->y;
													}
												}
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													Float tmp48 = te->__get((int)14);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(87)
													Float _z = tmp48;		HX_STACK_VAR(_z,"_z");
													HX_STACK_LINE(87)
													_position->z = _z;
													HX_STACK_LINE(87)
													bool tmp49 = _position->_construct;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(87)
													if ((tmp49)){
														HX_STACK_LINE(87)
														_position->z;
													}
													else{
														HX_STACK_LINE(87)
														bool tmp50 = (_position->listen_z != null());		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(87)
														bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(87)
														if ((tmp50)){
															HX_STACK_LINE(87)
															bool tmp52 = _position->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(87)
															bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(87)
															tmp51 = !(tmp53);
														}
														else{
															HX_STACK_LINE(87)
															tmp51 = false;
														}
														HX_STACK_LINE(87)
														if ((tmp51)){
															HX_STACK_LINE(87)
															Float tmp52 = _z;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(87)
															_position->listen_z(tmp52);
														}
														HX_STACK_LINE(87)
														_position->z;
													}
												}
											}
											HX_STACK_LINE(87)
											bool tmp48 = (_scale == null());		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(87)
											if ((tmp48)){
												HX_STACK_LINE(87)
												::phoenix::Vector tmp49 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(87)
												_scale = tmp49;
											}
											else{
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													_scale->x = _ax_length;
													HX_STACK_LINE(87)
													bool tmp49 = _scale->_construct;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(87)
													if ((tmp49)){
														HX_STACK_LINE(87)
														_scale->x;
													}
													else{
														HX_STACK_LINE(87)
														bool tmp50 = (_scale->listen_x != null());		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(87)
														bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(87)
														if ((tmp50)){
															HX_STACK_LINE(87)
															bool tmp52 = _scale->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(87)
															bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(87)
															tmp51 = !(tmp53);
														}
														else{
															HX_STACK_LINE(87)
															tmp51 = false;
														}
														HX_STACK_LINE(87)
														if ((tmp51)){
															HX_STACK_LINE(87)
															Float tmp52 = _ax_length;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(87)
															_scale->listen_x(tmp52);
														}
														HX_STACK_LINE(87)
														_scale->x;
													}
												}
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													_scale->y = _ay_length;
													HX_STACK_LINE(87)
													bool tmp49 = _scale->_construct;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(87)
													if ((tmp49)){
														HX_STACK_LINE(87)
														_scale->y;
													}
													else{
														HX_STACK_LINE(87)
														bool tmp50 = (_scale->listen_y != null());		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(87)
														bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(87)
														if ((tmp50)){
															HX_STACK_LINE(87)
															bool tmp52 = _scale->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(87)
															bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(87)
															tmp51 = !(tmp53);
														}
														else{
															HX_STACK_LINE(87)
															tmp51 = false;
														}
														HX_STACK_LINE(87)
														if ((tmp51)){
															HX_STACK_LINE(87)
															Float tmp52 = _ay_length;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(87)
															_scale->listen_y(tmp52);
														}
														HX_STACK_LINE(87)
														_scale->y;
													}
												}
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													_scale->z = _az_length;
													HX_STACK_LINE(87)
													bool tmp49 = _scale->_construct;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(87)
													if ((tmp49)){
														HX_STACK_LINE(87)
														_scale->z;
													}
													else{
														HX_STACK_LINE(87)
														bool tmp50 = (_scale->listen_z != null());		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(87)
														bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(87)
														if ((tmp50)){
															HX_STACK_LINE(87)
															bool tmp52 = _scale->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(87)
															bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(87)
															tmp51 = !(tmp53);
														}
														else{
															HX_STACK_LINE(87)
															tmp51 = false;
														}
														HX_STACK_LINE(87)
														if ((tmp51)){
															HX_STACK_LINE(87)
															Float tmp52 = _az_length;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(87)
															_scale->listen_z(tmp52);
														}
														HX_STACK_LINE(87)
														_scale->z;
													}
												}
											}
											HX_STACK_LINE(87)
											matrix->elements = _this2->elements->concat(Array_obj< Float >::__new());
											HX_STACK_LINE(87)
											Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
											HX_STACK_LINE(87)
											Float tmp49 = _ax_length;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)0],tmp49);
											HX_STACK_LINE(87)
											Float tmp50 = _ax_length;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)1],tmp50);
											HX_STACK_LINE(87)
											Float tmp51 = _ax_length;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)2],tmp51);
											HX_STACK_LINE(87)
											Float tmp52 = _ay_length;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)4],tmp52);
											HX_STACK_LINE(87)
											Float tmp53 = _ay_length;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)5],tmp53);
											HX_STACK_LINE(87)
											Float tmp54 = _ay_length;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)6],tmp54);
											HX_STACK_LINE(87)
											Float tmp55 = _az_length;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)8],tmp55);
											HX_STACK_LINE(87)
											Float tmp56 = _az_length;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)9],tmp56);
											HX_STACK_LINE(87)
											Float tmp57 = _az_length;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(87)
											hx::DivEq(me[(int)10],tmp57);
											HX_STACK_LINE(87)
											::phoenix::Matrix tmp58 = matrix;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(87)
											_quaternion->setFromRotationMatrix(tmp58);
											HX_STACK_LINE(87)
											bool tmp59 = (_this2->_transform == null());		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(87)
											if ((tmp59)){
												HX_STACK_LINE(87)
												::phoenix::MatrixTransform tmp60 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(87)
												_this2->_transform = tmp60;
											}
											else{
												HX_STACK_LINE(87)
												_this2->_transform->pos = _position;
												HX_STACK_LINE(87)
												_this2->_transform->rotation = _quaternion;
												HX_STACK_LINE(87)
												_this2->_transform->scale = _scale;
											}
											HX_STACK_LINE(87)
											tmp17 = _this2->_transform;
										}
										HX_STACK_LINE(87)
										::phoenix::MatrixTransform _transform = tmp17;		HX_STACK_VAR(_transform,"_transform");
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
											HX_STACK_LINE(87)
											_this1->pos = _p;
											HX_STACK_LINE(87)
											bool tmp18 = (_p != null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(87)
											if ((tmp18)){
												HX_STACK_LINE(87)
												::phoenix::Vector tmp19 = _this1->pos;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(87)
												Dynamic tmp20 = _this1->_pos_change_dyn();		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(87)
												::phoenix::Vector_obj::Listen(tmp19,tmp20);
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													bool tmp21 = (_this1->pos_changed != null());		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(87)
													bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(87)
													if ((tmp21)){
														HX_STACK_LINE(87)
														bool tmp23 = _this1->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(87)
														bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(87)
														tmp22 = !(tmp24);
													}
													else{
														HX_STACK_LINE(87)
														tmp22 = false;
													}
													HX_STACK_LINE(87)
													if ((tmp22)){
														HX_STACK_LINE(87)
														::phoenix::Vector tmp23 = _this1->pos;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(87)
														_this1->pos_changed(tmp23);
													}
												}
											}
											HX_STACK_LINE(87)
											_this1->pos;
										}
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
											HX_STACK_LINE(87)
											_this1->rotation = _r;
											HX_STACK_LINE(87)
											bool tmp18 = (_r != null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(87)
											if ((tmp18)){
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
													HX_STACK_LINE(87)
													Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
													HX_STACK_LINE(87)
													_q->listen_x = listener;
													HX_STACK_LINE(87)
													_q->listen_y = listener;
													HX_STACK_LINE(87)
													_q->listen_z = listener;
													HX_STACK_LINE(87)
													_q->listen_w = listener;
												}
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													bool tmp19 = (_this1->rotation_changed != null());		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(87)
													bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(87)
													if ((tmp19)){
														HX_STACK_LINE(87)
														bool tmp21 = _this1->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(87)
														bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(87)
														tmp20 = !(tmp22);
													}
													else{
														HX_STACK_LINE(87)
														tmp20 = false;
													}
													HX_STACK_LINE(87)
													if ((tmp20)){
														HX_STACK_LINE(87)
														::phoenix::Quaternion tmp21 = _this1->rotation;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(87)
														_this1->rotation_changed(tmp21);
													}
												}
											}
											HX_STACK_LINE(87)
											_this1->rotation;
										}
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
											HX_STACK_LINE(87)
											_this1->scale = _s;
											HX_STACK_LINE(87)
											bool tmp18 = (_s != null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(87)
											if ((tmp18)){
												HX_STACK_LINE(87)
												::phoenix::Vector tmp19 = _this1->scale;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(87)
												Dynamic tmp20 = _this1->_scale_change_dyn();		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(87)
												::phoenix::Vector_obj::Listen(tmp19,tmp20);
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													bool tmp21 = (_this1->scale_changed != null());		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(87)
													bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(87)
													if ((tmp21)){
														HX_STACK_LINE(87)
														bool tmp23 = _this1->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(87)
														bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(87)
														tmp22 = !(tmp24);
													}
													else{
														HX_STACK_LINE(87)
														tmp22 = false;
													}
													HX_STACK_LINE(87)
													if ((tmp22)){
														HX_STACK_LINE(87)
														::phoenix::Vector tmp23 = _this1->scale;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(87)
														_this1->scale_changed(tmp23);
													}
												}
											}
											HX_STACK_LINE(87)
											_this1->scale;
										}
									}
									HX_STACK_LINE(87)
									_this1;
								}
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									_this->dirty = false;
									HX_STACK_LINE(87)
									bool tmp13 = _this->dirty;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(87)
									bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(87)
									bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									if ((tmp14)){
										HX_STACK_LINE(87)
										bool tmp16 = _this->_setup;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(87)
										bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(87)
										bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(87)
										tmp15 = !(tmp18);
									}
									else{
										HX_STACK_LINE(87)
										tmp15 = false;
									}
									HX_STACK_LINE(87)
									bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(87)
									if ((tmp16)){
										HX_STACK_LINE(87)
										tmp17 = (_this->_dirty_handlers != null());
									}
									else{
										HX_STACK_LINE(87)
										tmp17 = false;
									}
									HX_STACK_LINE(87)
									bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(87)
									if ((tmp17)){
										HX_STACK_LINE(87)
										int tmp19 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(87)
										int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(87)
										tmp18 = (tmp20 > (int)0);
									}
									else{
										HX_STACK_LINE(87)
										tmp18 = false;
									}
									HX_STACK_LINE(87)
									if ((tmp18)){
										HX_STACK_LINE(87)
										int _g = (int)0;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(87)
										cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(87)
										while((true)){
											HX_STACK_LINE(87)
											bool tmp19 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(87)
											bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(87)
											if ((tmp20)){
												HX_STACK_LINE(87)
												break;
											}
											HX_STACK_LINE(87)
											Dynamic tmp21 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(87)
											Dynamic _handler = tmp21;		HX_STACK_VAR(_handler,"_handler");
											HX_STACK_LINE(87)
											++(_g);
											HX_STACK_LINE(87)
											bool tmp22 = (_handler != null());		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(87)
											if ((tmp22)){
												HX_STACK_LINE(87)
												::phoenix::Transform tmp23 = _this;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(87)
												_handler(tmp23).Cast< Void >();
											}
										}
									}
									HX_STACK_LINE(87)
									_this->dirty;
								}
								HX_STACK_LINE(87)
								_this->_cleaning = false;
								HX_STACK_LINE(87)
								bool tmp13 = (_this->_clean_handlers != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(87)
								bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(87)
								if ((tmp13)){
									HX_STACK_LINE(87)
									int tmp15 = _this->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									tmp14 = (tmp16 > (int)0);
								}
								else{
									HX_STACK_LINE(87)
									tmp14 = false;
								}
								HX_STACK_LINE(87)
								if ((tmp14)){
									HX_STACK_LINE(87)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(87)
									cpp::ArrayBase _g1 = _this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(87)
									while((true)){
										HX_STACK_LINE(87)
										bool tmp15 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(87)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(87)
										if ((tmp16)){
											HX_STACK_LINE(87)
											break;
										}
										HX_STACK_LINE(87)
										Dynamic tmp17 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(87)
										Dynamic _handler = tmp17;		HX_STACK_VAR(_handler,"_handler");
										HX_STACK_LINE(87)
										++(_g);
										HX_STACK_LINE(87)
										bool tmp18 = (_handler != null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(87)
										if ((tmp18)){
											HX_STACK_LINE(87)
											::phoenix::Transform tmp19 = _this;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(87)
											_handler(tmp19).Cast< Void >();
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(87)
					bool tmp7 = this->dirty;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(87)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(87)
					if ((tmp7)){
						HX_STACK_LINE(87)
						bool tmp9 = this->_cleaning;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(87)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(87)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(87)
						tmp8 = !(tmp11);
					}
					else{
						HX_STACK_LINE(87)
						tmp8 = false;
					}
					HX_STACK_LINE(87)
					if ((tmp8)){
						HX_STACK_LINE(87)
						bool tmp9 = this->dirty;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(87)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(87)
						if ((tmp10)){
							HX_STACK_LINE(87)
							Dynamic();
						}
						else{
							HX_STACK_LINE(87)
							this->_cleaning = true;
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Matrix tmp11 = this->_pos_matrix;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(87)
								::phoenix::Matrix _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(87)
									e[(int)0] = (int)1;
									HX_STACK_LINE(87)
									e[(int)4] = (int)0;
									HX_STACK_LINE(87)
									e[(int)8] = (int)0;
									HX_STACK_LINE(87)
									::phoenix::Spatial tmp12 = this->local;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(87)
									Float tmp13 = tmp12->pos->x;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(87)
									e[(int)12] = tmp13;
									HX_STACK_LINE(87)
									e[(int)1] = (int)0;
									HX_STACK_LINE(87)
									e[(int)5] = (int)1;
									HX_STACK_LINE(87)
									e[(int)9] = (int)0;
									HX_STACK_LINE(87)
									::phoenix::Spatial tmp14 = this->local;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(87)
									Float tmp15 = tmp14->pos->y;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									e[(int)13] = tmp15;
									HX_STACK_LINE(87)
									e[(int)2] = (int)0;
									HX_STACK_LINE(87)
									e[(int)6] = (int)0;
									HX_STACK_LINE(87)
									e[(int)10] = (int)1;
									HX_STACK_LINE(87)
									::phoenix::Spatial tmp16 = this->local;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									Float tmp17 = tmp16->pos->z;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(87)
									e[(int)14] = tmp17;
									HX_STACK_LINE(87)
									e[(int)3] = (int)0;
									HX_STACK_LINE(87)
									e[(int)7] = (int)0;
									HX_STACK_LINE(87)
									e[(int)11] = (int)0;
									HX_STACK_LINE(87)
									e[(int)15] = (int)1;
									HX_STACK_LINE(87)
									_this;
								}
								HX_STACK_LINE(87)
								_this;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Matrix tmp11 = this->_rotation_matrix;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(87)
								::phoenix::Matrix _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(87)
								::phoenix::Spatial tmp12 = this->local;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(87)
								::phoenix::Quaternion q = tmp12->rotation;		HX_STACK_VAR(q,"q");
								HX_STACK_LINE(87)
								Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(87)
								Float tmp13 = (q->x + q->x);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(87)
								Float x2 = tmp13;		HX_STACK_VAR(x2,"x2");
								HX_STACK_LINE(87)
								Float tmp14 = (q->y + q->y);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(87)
								Float y2 = tmp14;		HX_STACK_VAR(y2,"y2");
								HX_STACK_LINE(87)
								Float tmp15 = (q->z + q->z);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(87)
								Float z2 = tmp15;		HX_STACK_VAR(z2,"z2");
								HX_STACK_LINE(87)
								Float tmp16 = (q->x * x2);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(87)
								Float xx = tmp16;		HX_STACK_VAR(xx,"xx");
								HX_STACK_LINE(87)
								Float tmp17 = (q->x * y2);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(87)
								Float xy = tmp17;		HX_STACK_VAR(xy,"xy");
								HX_STACK_LINE(87)
								Float tmp18 = (q->x * z2);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(87)
								Float xz = tmp18;		HX_STACK_VAR(xz,"xz");
								HX_STACK_LINE(87)
								Float tmp19 = (q->y * y2);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(87)
								Float yy = tmp19;		HX_STACK_VAR(yy,"yy");
								HX_STACK_LINE(87)
								Float tmp20 = (q->y * z2);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(87)
								Float yz = tmp20;		HX_STACK_VAR(yz,"yz");
								HX_STACK_LINE(87)
								Float tmp21 = (q->z * z2);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(87)
								Float zz = tmp21;		HX_STACK_VAR(zz,"zz");
								HX_STACK_LINE(87)
								Float tmp22 = (q->w * x2);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(87)
								Float wx = tmp22;		HX_STACK_VAR(wx,"wx");
								HX_STACK_LINE(87)
								Float tmp23 = (q->w * y2);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(87)
								Float wy = tmp23;		HX_STACK_VAR(wy,"wy");
								HX_STACK_LINE(87)
								Float tmp24 = (q->w * z2);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(87)
								Float wz = tmp24;		HX_STACK_VAR(wz,"wz");
								HX_STACK_LINE(87)
								Float tmp25 = (yy + zz);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(87)
								Float tmp26 = ((int)1 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(87)
								te[(int)0] = tmp26;
								HX_STACK_LINE(87)
								Float tmp27 = (xy - wz);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(87)
								te[(int)4] = tmp27;
								HX_STACK_LINE(87)
								Float tmp28 = (xz + wy);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(87)
								te[(int)8] = tmp28;
								HX_STACK_LINE(87)
								Float tmp29 = (xy + wz);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(87)
								te[(int)1] = tmp29;
								HX_STACK_LINE(87)
								Float tmp30 = (xx + zz);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(87)
								Float tmp31 = ((int)1 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(87)
								te[(int)5] = tmp31;
								HX_STACK_LINE(87)
								Float tmp32 = (yz - wx);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(87)
								te[(int)9] = tmp32;
								HX_STACK_LINE(87)
								Float tmp33 = (xz - wy);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(87)
								te[(int)2] = tmp33;
								HX_STACK_LINE(87)
								Float tmp34 = (yz + wx);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(87)
								te[(int)6] = tmp34;
								HX_STACK_LINE(87)
								Float tmp35 = (xx + yy);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(87)
								Float tmp36 = ((int)1 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(87)
								te[(int)10] = tmp36;
								HX_STACK_LINE(87)
								te[(int)3] = (int)0;
								HX_STACK_LINE(87)
								te[(int)7] = (int)0;
								HX_STACK_LINE(87)
								te[(int)11] = (int)0;
								HX_STACK_LINE(87)
								te[(int)12] = (int)0;
								HX_STACK_LINE(87)
								te[(int)13] = (int)0;
								HX_STACK_LINE(87)
								te[(int)14] = (int)0;
								HX_STACK_LINE(87)
								te[(int)15] = (int)1;
								HX_STACK_LINE(87)
								_this;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Matrix tmp11 = this->_origin_undo_matrix;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(87)
								::phoenix::Matrix _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(87)
									e[(int)0] = (int)1;
									HX_STACK_LINE(87)
									e[(int)4] = (int)0;
									HX_STACK_LINE(87)
									e[(int)8] = (int)0;
									HX_STACK_LINE(87)
									::phoenix::Vector tmp12 = this->origin;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(87)
									Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(87)
									Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(87)
									e[(int)12] = tmp14;
									HX_STACK_LINE(87)
									e[(int)1] = (int)0;
									HX_STACK_LINE(87)
									e[(int)5] = (int)1;
									HX_STACK_LINE(87)
									e[(int)9] = (int)0;
									HX_STACK_LINE(87)
									::phoenix::Vector tmp15 = this->origin;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(87)
									e[(int)13] = tmp17;
									HX_STACK_LINE(87)
									e[(int)2] = (int)0;
									HX_STACK_LINE(87)
									e[(int)6] = (int)0;
									HX_STACK_LINE(87)
									e[(int)10] = (int)1;
									HX_STACK_LINE(87)
									::phoenix::Vector tmp18 = this->origin;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(87)
									Float tmp19 = tmp18->z;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(87)
									Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(87)
									e[(int)14] = tmp20;
									HX_STACK_LINE(87)
									e[(int)3] = (int)0;
									HX_STACK_LINE(87)
									e[(int)7] = (int)0;
									HX_STACK_LINE(87)
									e[(int)11] = (int)0;
									HX_STACK_LINE(87)
									e[(int)15] = (int)1;
									HX_STACK_LINE(87)
									_this;
								}
								HX_STACK_LINE(87)
								_this;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Spatial tmp11 = this->local;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(87)
								::phoenix::Matrix _this = tmp11->matrix;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(87)
									e[(int)0] = (int)1;
									HX_STACK_LINE(87)
									e[(int)4] = (int)0;
									HX_STACK_LINE(87)
									e[(int)8] = (int)0;
									HX_STACK_LINE(87)
									::phoenix::Vector tmp12 = this->origin;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(87)
									Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(87)
									e[(int)12] = tmp13;
									HX_STACK_LINE(87)
									e[(int)1] = (int)0;
									HX_STACK_LINE(87)
									e[(int)5] = (int)1;
									HX_STACK_LINE(87)
									e[(int)9] = (int)0;
									HX_STACK_LINE(87)
									::phoenix::Vector tmp14 = this->origin;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(87)
									Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									e[(int)13] = tmp15;
									HX_STACK_LINE(87)
									e[(int)2] = (int)0;
									HX_STACK_LINE(87)
									e[(int)6] = (int)0;
									HX_STACK_LINE(87)
									e[(int)10] = (int)1;
									HX_STACK_LINE(87)
									::phoenix::Vector tmp16 = this->origin;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									Float tmp17 = tmp16->z;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(87)
									e[(int)14] = tmp17;
									HX_STACK_LINE(87)
									e[(int)3] = (int)0;
									HX_STACK_LINE(87)
									e[(int)7] = (int)0;
									HX_STACK_LINE(87)
									e[(int)11] = (int)0;
									HX_STACK_LINE(87)
									e[(int)15] = (int)1;
									HX_STACK_LINE(87)
									_this;
								}
								HX_STACK_LINE(87)
								_this;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Spatial tmp11 = this->local;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(87)
								::phoenix::Matrix _this = tmp11->matrix;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									Array< Float > ae = _this->elements;		HX_STACK_VAR(ae,"ae");
									HX_STACK_LINE(87)
									::phoenix::Matrix tmp12 = this->_rotation_matrix;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(87)
									Array< Float > be = tmp12->elements;		HX_STACK_VAR(be,"be");
									HX_STACK_LINE(87)
									Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(87)
									Float tmp13 = ae->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(87)
									Float a11 = tmp13;		HX_STACK_VAR(a11,"a11");
									HX_STACK_LINE(87)
									Float tmp14 = ae->__get((int)4);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(87)
									Float a12 = tmp14;		HX_STACK_VAR(a12,"a12");
									HX_STACK_LINE(87)
									Float tmp15 = ae->__get((int)8);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									Float a13 = tmp15;		HX_STACK_VAR(a13,"a13");
									HX_STACK_LINE(87)
									Float tmp16 = ae->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									Float a14 = tmp16;		HX_STACK_VAR(a14,"a14");
									HX_STACK_LINE(87)
									Float tmp17 = ae->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(87)
									Float a21 = tmp17;		HX_STACK_VAR(a21,"a21");
									HX_STACK_LINE(87)
									Float tmp18 = ae->__get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(87)
									Float a22 = tmp18;		HX_STACK_VAR(a22,"a22");
									HX_STACK_LINE(87)
									Float tmp19 = ae->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(87)
									Float a23 = tmp19;		HX_STACK_VAR(a23,"a23");
									HX_STACK_LINE(87)
									Float tmp20 = ae->__get((int)13);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(87)
									Float a24 = tmp20;		HX_STACK_VAR(a24,"a24");
									HX_STACK_LINE(87)
									Float tmp21 = ae->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(87)
									Float a31 = tmp21;		HX_STACK_VAR(a31,"a31");
									HX_STACK_LINE(87)
									Float tmp22 = ae->__get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(87)
									Float a32 = tmp22;		HX_STACK_VAR(a32,"a32");
									HX_STACK_LINE(87)
									Float tmp23 = ae->__get((int)10);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(87)
									Float a33 = tmp23;		HX_STACK_VAR(a33,"a33");
									HX_STACK_LINE(87)
									Float tmp24 = ae->__get((int)14);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(87)
									Float a34 = tmp24;		HX_STACK_VAR(a34,"a34");
									HX_STACK_LINE(87)
									Float tmp25 = ae->__get((int)3);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(87)
									Float a41 = tmp25;		HX_STACK_VAR(a41,"a41");
									HX_STACK_LINE(87)
									Float tmp26 = ae->__get((int)7);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(87)
									Float a42 = tmp26;		HX_STACK_VAR(a42,"a42");
									HX_STACK_LINE(87)
									Float tmp27 = ae->__get((int)11);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(87)
									Float a43 = tmp27;		HX_STACK_VAR(a43,"a43");
									HX_STACK_LINE(87)
									Float tmp28 = ae->__get((int)15);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(87)
									Float a44 = tmp28;		HX_STACK_VAR(a44,"a44");
									HX_STACK_LINE(87)
									Float tmp29 = be->__get((int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(87)
									Float b11 = tmp29;		HX_STACK_VAR(b11,"b11");
									HX_STACK_LINE(87)
									Float tmp30 = be->__get((int)4);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(87)
									Float b12 = tmp30;		HX_STACK_VAR(b12,"b12");
									HX_STACK_LINE(87)
									Float tmp31 = be->__get((int)8);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(87)
									Float b13 = tmp31;		HX_STACK_VAR(b13,"b13");
									HX_STACK_LINE(87)
									Float tmp32 = be->__get((int)12);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(87)
									Float b14 = tmp32;		HX_STACK_VAR(b14,"b14");
									HX_STACK_LINE(87)
									Float tmp33 = be->__get((int)1);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(87)
									Float b21 = tmp33;		HX_STACK_VAR(b21,"b21");
									HX_STACK_LINE(87)
									Float tmp34 = be->__get((int)5);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(87)
									Float b22 = tmp34;		HX_STACK_VAR(b22,"b22");
									HX_STACK_LINE(87)
									Float tmp35 = be->__get((int)9);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(87)
									Float b23 = tmp35;		HX_STACK_VAR(b23,"b23");
									HX_STACK_LINE(87)
									Float tmp36 = be->__get((int)13);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(87)
									Float b24 = tmp36;		HX_STACK_VAR(b24,"b24");
									HX_STACK_LINE(87)
									Float tmp37 = be->__get((int)2);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(87)
									Float b31 = tmp37;		HX_STACK_VAR(b31,"b31");
									HX_STACK_LINE(87)
									Float tmp38 = be->__get((int)6);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(87)
									Float b32 = tmp38;		HX_STACK_VAR(b32,"b32");
									HX_STACK_LINE(87)
									Float tmp39 = be->__get((int)10);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(87)
									Float b33 = tmp39;		HX_STACK_VAR(b33,"b33");
									HX_STACK_LINE(87)
									Float tmp40 = be->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(87)
									Float b34 = tmp40;		HX_STACK_VAR(b34,"b34");
									HX_STACK_LINE(87)
									Float tmp41 = be->__get((int)3);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(87)
									Float b41 = tmp41;		HX_STACK_VAR(b41,"b41");
									HX_STACK_LINE(87)
									Float tmp42 = be->__get((int)7);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(87)
									Float b42 = tmp42;		HX_STACK_VAR(b42,"b42");
									HX_STACK_LINE(87)
									Float tmp43 = be->__get((int)11);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(87)
									Float b43 = tmp43;		HX_STACK_VAR(b43,"b43");
									HX_STACK_LINE(87)
									Float tmp44 = be->__get((int)15);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(87)
									Float b44 = tmp44;		HX_STACK_VAR(b44,"b44");
									HX_STACK_LINE(87)
									Float tmp45 = (a11 * b11);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(87)
									Float tmp46 = (a12 * b21);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(87)
									Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(87)
									Float tmp48 = (a13 * b31);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(87)
									Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(87)
									Float tmp50 = (a14 * b41);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(87)
									Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(87)
									te[(int)0] = tmp51;
									HX_STACK_LINE(87)
									Float tmp52 = (a11 * b12);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(87)
									Float tmp53 = (a12 * b22);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(87)
									Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(87)
									Float tmp55 = (a13 * b32);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(87)
									Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(87)
									Float tmp57 = (a14 * b42);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(87)
									Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(87)
									te[(int)4] = tmp58;
									HX_STACK_LINE(87)
									Float tmp59 = (a11 * b13);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(87)
									Float tmp60 = (a12 * b23);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(87)
									Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(87)
									Float tmp62 = (a13 * b33);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(87)
									Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(87)
									Float tmp64 = (a14 * b43);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(87)
									Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(87)
									te[(int)8] = tmp65;
									HX_STACK_LINE(87)
									Float tmp66 = (a11 * b14);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(87)
									Float tmp67 = (a12 * b24);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(87)
									Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(87)
									Float tmp69 = (a13 * b34);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(87)
									Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(87)
									Float tmp71 = (a14 * b44);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(87)
									Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(87)
									te[(int)12] = tmp72;
									HX_STACK_LINE(87)
									Float tmp73 = (a21 * b11);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(87)
									Float tmp74 = (a22 * b21);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(87)
									Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(87)
									Float tmp76 = (a23 * b31);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(87)
									Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(87)
									Float tmp78 = (a24 * b41);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(87)
									Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(87)
									te[(int)1] = tmp79;
									HX_STACK_LINE(87)
									Float tmp80 = (a21 * b12);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(87)
									Float tmp81 = (a22 * b22);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(87)
									Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(87)
									Float tmp83 = (a23 * b32);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(87)
									Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(87)
									Float tmp85 = (a24 * b42);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(87)
									Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(87)
									te[(int)5] = tmp86;
									HX_STACK_LINE(87)
									Float tmp87 = (a21 * b13);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(87)
									Float tmp88 = (a22 * b23);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(87)
									Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(87)
									Float tmp90 = (a23 * b33);		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(87)
									Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(87)
									Float tmp92 = (a24 * b43);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(87)
									Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(87)
									te[(int)9] = tmp93;
									HX_STACK_LINE(87)
									Float tmp94 = (a21 * b14);		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(87)
									Float tmp95 = (a22 * b24);		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(87)
									Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(87)
									Float tmp97 = (a23 * b34);		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(87)
									Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
									HX_STACK_LINE(87)
									Float tmp99 = (a24 * b44);		HX_STACK_VAR(tmp99,"tmp99");
									HX_STACK_LINE(87)
									Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
									HX_STACK_LINE(87)
									te[(int)13] = tmp100;
									HX_STACK_LINE(87)
									Float tmp101 = (a31 * b11);		HX_STACK_VAR(tmp101,"tmp101");
									HX_STACK_LINE(87)
									Float tmp102 = (a32 * b21);		HX_STACK_VAR(tmp102,"tmp102");
									HX_STACK_LINE(87)
									Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(87)
									Float tmp104 = (a33 * b31);		HX_STACK_VAR(tmp104,"tmp104");
									HX_STACK_LINE(87)
									Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
									HX_STACK_LINE(87)
									Float tmp106 = (a34 * b41);		HX_STACK_VAR(tmp106,"tmp106");
									HX_STACK_LINE(87)
									Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
									HX_STACK_LINE(87)
									te[(int)2] = tmp107;
									HX_STACK_LINE(87)
									Float tmp108 = (a31 * b12);		HX_STACK_VAR(tmp108,"tmp108");
									HX_STACK_LINE(87)
									Float tmp109 = (a32 * b22);		HX_STACK_VAR(tmp109,"tmp109");
									HX_STACK_LINE(87)
									Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
									HX_STACK_LINE(87)
									Float tmp111 = (a33 * b32);		HX_STACK_VAR(tmp111,"tmp111");
									HX_STACK_LINE(87)
									Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
									HX_STACK_LINE(87)
									Float tmp113 = (a34 * b42);		HX_STACK_VAR(tmp113,"tmp113");
									HX_STACK_LINE(87)
									Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
									HX_STACK_LINE(87)
									te[(int)6] = tmp114;
									HX_STACK_LINE(87)
									Float tmp115 = (a31 * b13);		HX_STACK_VAR(tmp115,"tmp115");
									HX_STACK_LINE(87)
									Float tmp116 = (a32 * b23);		HX_STACK_VAR(tmp116,"tmp116");
									HX_STACK_LINE(87)
									Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
									HX_STACK_LINE(87)
									Float tmp118 = (a33 * b33);		HX_STACK_VAR(tmp118,"tmp118");
									HX_STACK_LINE(87)
									Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
									HX_STACK_LINE(87)
									Float tmp120 = (a34 * b43);		HX_STACK_VAR(tmp120,"tmp120");
									HX_STACK_LINE(87)
									Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
									HX_STACK_LINE(87)
									te[(int)10] = tmp121;
									HX_STACK_LINE(87)
									Float tmp122 = (a31 * b14);		HX_STACK_VAR(tmp122,"tmp122");
									HX_STACK_LINE(87)
									Float tmp123 = (a32 * b24);		HX_STACK_VAR(tmp123,"tmp123");
									HX_STACK_LINE(87)
									Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
									HX_STACK_LINE(87)
									Float tmp125 = (a33 * b34);		HX_STACK_VAR(tmp125,"tmp125");
									HX_STACK_LINE(87)
									Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
									HX_STACK_LINE(87)
									Float tmp127 = (a34 * b44);		HX_STACK_VAR(tmp127,"tmp127");
									HX_STACK_LINE(87)
									Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
									HX_STACK_LINE(87)
									te[(int)14] = tmp128;
									HX_STACK_LINE(87)
									Float tmp129 = (a41 * b11);		HX_STACK_VAR(tmp129,"tmp129");
									HX_STACK_LINE(87)
									Float tmp130 = (a42 * b21);		HX_STACK_VAR(tmp130,"tmp130");
									HX_STACK_LINE(87)
									Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
									HX_STACK_LINE(87)
									Float tmp132 = (a43 * b31);		HX_STACK_VAR(tmp132,"tmp132");
									HX_STACK_LINE(87)
									Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
									HX_STACK_LINE(87)
									Float tmp134 = (a44 * b41);		HX_STACK_VAR(tmp134,"tmp134");
									HX_STACK_LINE(87)
									Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
									HX_STACK_LINE(87)
									te[(int)3] = tmp135;
									HX_STACK_LINE(87)
									Float tmp136 = (a41 * b12);		HX_STACK_VAR(tmp136,"tmp136");
									HX_STACK_LINE(87)
									Float tmp137 = (a42 * b22);		HX_STACK_VAR(tmp137,"tmp137");
									HX_STACK_LINE(87)
									Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
									HX_STACK_LINE(87)
									Float tmp139 = (a43 * b32);		HX_STACK_VAR(tmp139,"tmp139");
									HX_STACK_LINE(87)
									Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
									HX_STACK_LINE(87)
									Float tmp141 = (a44 * b42);		HX_STACK_VAR(tmp141,"tmp141");
									HX_STACK_LINE(87)
									Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
									HX_STACK_LINE(87)
									te[(int)7] = tmp142;
									HX_STACK_LINE(87)
									Float tmp143 = (a41 * b13);		HX_STACK_VAR(tmp143,"tmp143");
									HX_STACK_LINE(87)
									Float tmp144 = (a42 * b23);		HX_STACK_VAR(tmp144,"tmp144");
									HX_STACK_LINE(87)
									Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
									HX_STACK_LINE(87)
									Float tmp146 = (a43 * b33);		HX_STACK_VAR(tmp146,"tmp146");
									HX_STACK_LINE(87)
									Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
									HX_STACK_LINE(87)
									Float tmp148 = (a44 * b43);		HX_STACK_VAR(tmp148,"tmp148");
									HX_STACK_LINE(87)
									Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
									HX_STACK_LINE(87)
									te[(int)11] = tmp149;
									HX_STACK_LINE(87)
									Float tmp150 = (a41 * b14);		HX_STACK_VAR(tmp150,"tmp150");
									HX_STACK_LINE(87)
									Float tmp151 = (a42 * b24);		HX_STACK_VAR(tmp151,"tmp151");
									HX_STACK_LINE(87)
									Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
									HX_STACK_LINE(87)
									Float tmp153 = (a43 * b34);		HX_STACK_VAR(tmp153,"tmp153");
									HX_STACK_LINE(87)
									Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
									HX_STACK_LINE(87)
									Float tmp155 = (a44 * b44);		HX_STACK_VAR(tmp155,"tmp155");
									HX_STACK_LINE(87)
									Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
									HX_STACK_LINE(87)
									te[(int)15] = tmp156;
									HX_STACK_LINE(87)
									_this;
								}
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Spatial tmp11 = this->local;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(87)
								::phoenix::Matrix _this = tmp11->matrix;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(87)
								::phoenix::Spatial tmp12 = this->local;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(87)
								::phoenix::Vector _v = tmp12->scale;		HX_STACK_VAR(_v,"_v");
								HX_STACK_LINE(87)
								Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(87)
								Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
								HX_STACK_LINE(87)
								Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
								HX_STACK_LINE(87)
								Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
								HX_STACK_LINE(87)
								Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)0],tmp13);
								HX_STACK_LINE(87)
								Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)4],tmp14);
								HX_STACK_LINE(87)
								Float tmp15 = _z;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)8],tmp15);
								HX_STACK_LINE(87)
								Float tmp16 = _x;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)1],tmp16);
								HX_STACK_LINE(87)
								Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)5],tmp17);
								HX_STACK_LINE(87)
								Float tmp18 = _z;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)9],tmp18);
								HX_STACK_LINE(87)
								Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)2],tmp19);
								HX_STACK_LINE(87)
								Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)6],tmp20);
								HX_STACK_LINE(87)
								Float tmp21 = _z;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)10],tmp21);
								HX_STACK_LINE(87)
								Float tmp22 = _x;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)3],tmp22);
								HX_STACK_LINE(87)
								Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)7],tmp23);
								HX_STACK_LINE(87)
								Float tmp24 = _z;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(87)
								hx::MultEq(te[(int)11],tmp24);
								HX_STACK_LINE(87)
								_this;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Spatial tmp11 = this->local;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(87)
								::phoenix::Matrix _this = tmp11->matrix;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(87)
								::phoenix::Spatial tmp12 = this->local;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(87)
								::phoenix::Vector _v = tmp12->pos;		HX_STACK_VAR(_v,"_v");
								HX_STACK_LINE(87)
								Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(87)
								Float tmp13 = _v->x;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(87)
								te[(int)12] = tmp13;
								HX_STACK_LINE(87)
								Float tmp14 = _v->y;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(87)
								te[(int)13] = tmp14;
								HX_STACK_LINE(87)
								Float tmp15 = _v->z;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(87)
								te[(int)14] = tmp15;
								HX_STACK_LINE(87)
								_this;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Spatial tmp11 = this->local;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(87)
								::phoenix::Matrix _this = tmp11->matrix;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									Array< Float > ae = _this->elements;		HX_STACK_VAR(ae,"ae");
									HX_STACK_LINE(87)
									::phoenix::Matrix tmp12 = this->_origin_undo_matrix;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(87)
									Array< Float > be = tmp12->elements;		HX_STACK_VAR(be,"be");
									HX_STACK_LINE(87)
									Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(87)
									Float tmp13 = ae->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(87)
									Float a11 = tmp13;		HX_STACK_VAR(a11,"a11");
									HX_STACK_LINE(87)
									Float tmp14 = ae->__get((int)4);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(87)
									Float a12 = tmp14;		HX_STACK_VAR(a12,"a12");
									HX_STACK_LINE(87)
									Float tmp15 = ae->__get((int)8);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									Float a13 = tmp15;		HX_STACK_VAR(a13,"a13");
									HX_STACK_LINE(87)
									Float tmp16 = ae->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									Float a14 = tmp16;		HX_STACK_VAR(a14,"a14");
									HX_STACK_LINE(87)
									Float tmp17 = ae->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(87)
									Float a21 = tmp17;		HX_STACK_VAR(a21,"a21");
									HX_STACK_LINE(87)
									Float tmp18 = ae->__get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(87)
									Float a22 = tmp18;		HX_STACK_VAR(a22,"a22");
									HX_STACK_LINE(87)
									Float tmp19 = ae->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(87)
									Float a23 = tmp19;		HX_STACK_VAR(a23,"a23");
									HX_STACK_LINE(87)
									Float tmp20 = ae->__get((int)13);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(87)
									Float a24 = tmp20;		HX_STACK_VAR(a24,"a24");
									HX_STACK_LINE(87)
									Float tmp21 = ae->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(87)
									Float a31 = tmp21;		HX_STACK_VAR(a31,"a31");
									HX_STACK_LINE(87)
									Float tmp22 = ae->__get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(87)
									Float a32 = tmp22;		HX_STACK_VAR(a32,"a32");
									HX_STACK_LINE(87)
									Float tmp23 = ae->__get((int)10);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(87)
									Float a33 = tmp23;		HX_STACK_VAR(a33,"a33");
									HX_STACK_LINE(87)
									Float tmp24 = ae->__get((int)14);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(87)
									Float a34 = tmp24;		HX_STACK_VAR(a34,"a34");
									HX_STACK_LINE(87)
									Float tmp25 = ae->__get((int)3);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(87)
									Float a41 = tmp25;		HX_STACK_VAR(a41,"a41");
									HX_STACK_LINE(87)
									Float tmp26 = ae->__get((int)7);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(87)
									Float a42 = tmp26;		HX_STACK_VAR(a42,"a42");
									HX_STACK_LINE(87)
									Float tmp27 = ae->__get((int)11);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(87)
									Float a43 = tmp27;		HX_STACK_VAR(a43,"a43");
									HX_STACK_LINE(87)
									Float tmp28 = ae->__get((int)15);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(87)
									Float a44 = tmp28;		HX_STACK_VAR(a44,"a44");
									HX_STACK_LINE(87)
									Float tmp29 = be->__get((int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(87)
									Float b11 = tmp29;		HX_STACK_VAR(b11,"b11");
									HX_STACK_LINE(87)
									Float tmp30 = be->__get((int)4);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(87)
									Float b12 = tmp30;		HX_STACK_VAR(b12,"b12");
									HX_STACK_LINE(87)
									Float tmp31 = be->__get((int)8);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(87)
									Float b13 = tmp31;		HX_STACK_VAR(b13,"b13");
									HX_STACK_LINE(87)
									Float tmp32 = be->__get((int)12);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(87)
									Float b14 = tmp32;		HX_STACK_VAR(b14,"b14");
									HX_STACK_LINE(87)
									Float tmp33 = be->__get((int)1);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(87)
									Float b21 = tmp33;		HX_STACK_VAR(b21,"b21");
									HX_STACK_LINE(87)
									Float tmp34 = be->__get((int)5);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(87)
									Float b22 = tmp34;		HX_STACK_VAR(b22,"b22");
									HX_STACK_LINE(87)
									Float tmp35 = be->__get((int)9);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(87)
									Float b23 = tmp35;		HX_STACK_VAR(b23,"b23");
									HX_STACK_LINE(87)
									Float tmp36 = be->__get((int)13);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(87)
									Float b24 = tmp36;		HX_STACK_VAR(b24,"b24");
									HX_STACK_LINE(87)
									Float tmp37 = be->__get((int)2);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(87)
									Float b31 = tmp37;		HX_STACK_VAR(b31,"b31");
									HX_STACK_LINE(87)
									Float tmp38 = be->__get((int)6);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(87)
									Float b32 = tmp38;		HX_STACK_VAR(b32,"b32");
									HX_STACK_LINE(87)
									Float tmp39 = be->__get((int)10);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(87)
									Float b33 = tmp39;		HX_STACK_VAR(b33,"b33");
									HX_STACK_LINE(87)
									Float tmp40 = be->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(87)
									Float b34 = tmp40;		HX_STACK_VAR(b34,"b34");
									HX_STACK_LINE(87)
									Float tmp41 = be->__get((int)3);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(87)
									Float b41 = tmp41;		HX_STACK_VAR(b41,"b41");
									HX_STACK_LINE(87)
									Float tmp42 = be->__get((int)7);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(87)
									Float b42 = tmp42;		HX_STACK_VAR(b42,"b42");
									HX_STACK_LINE(87)
									Float tmp43 = be->__get((int)11);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(87)
									Float b43 = tmp43;		HX_STACK_VAR(b43,"b43");
									HX_STACK_LINE(87)
									Float tmp44 = be->__get((int)15);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(87)
									Float b44 = tmp44;		HX_STACK_VAR(b44,"b44");
									HX_STACK_LINE(87)
									Float tmp45 = (a11 * b11);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(87)
									Float tmp46 = (a12 * b21);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(87)
									Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(87)
									Float tmp48 = (a13 * b31);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(87)
									Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(87)
									Float tmp50 = (a14 * b41);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(87)
									Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(87)
									te[(int)0] = tmp51;
									HX_STACK_LINE(87)
									Float tmp52 = (a11 * b12);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(87)
									Float tmp53 = (a12 * b22);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(87)
									Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(87)
									Float tmp55 = (a13 * b32);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(87)
									Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(87)
									Float tmp57 = (a14 * b42);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(87)
									Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(87)
									te[(int)4] = tmp58;
									HX_STACK_LINE(87)
									Float tmp59 = (a11 * b13);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(87)
									Float tmp60 = (a12 * b23);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(87)
									Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(87)
									Float tmp62 = (a13 * b33);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(87)
									Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(87)
									Float tmp64 = (a14 * b43);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(87)
									Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(87)
									te[(int)8] = tmp65;
									HX_STACK_LINE(87)
									Float tmp66 = (a11 * b14);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(87)
									Float tmp67 = (a12 * b24);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(87)
									Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(87)
									Float tmp69 = (a13 * b34);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(87)
									Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(87)
									Float tmp71 = (a14 * b44);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(87)
									Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(87)
									te[(int)12] = tmp72;
									HX_STACK_LINE(87)
									Float tmp73 = (a21 * b11);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(87)
									Float tmp74 = (a22 * b21);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(87)
									Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(87)
									Float tmp76 = (a23 * b31);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(87)
									Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(87)
									Float tmp78 = (a24 * b41);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(87)
									Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(87)
									te[(int)1] = tmp79;
									HX_STACK_LINE(87)
									Float tmp80 = (a21 * b12);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(87)
									Float tmp81 = (a22 * b22);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(87)
									Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(87)
									Float tmp83 = (a23 * b32);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(87)
									Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(87)
									Float tmp85 = (a24 * b42);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(87)
									Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(87)
									te[(int)5] = tmp86;
									HX_STACK_LINE(87)
									Float tmp87 = (a21 * b13);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(87)
									Float tmp88 = (a22 * b23);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(87)
									Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(87)
									Float tmp90 = (a23 * b33);		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(87)
									Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(87)
									Float tmp92 = (a24 * b43);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(87)
									Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(87)
									te[(int)9] = tmp93;
									HX_STACK_LINE(87)
									Float tmp94 = (a21 * b14);		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(87)
									Float tmp95 = (a22 * b24);		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(87)
									Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(87)
									Float tmp97 = (a23 * b34);		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(87)
									Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
									HX_STACK_LINE(87)
									Float tmp99 = (a24 * b44);		HX_STACK_VAR(tmp99,"tmp99");
									HX_STACK_LINE(87)
									Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
									HX_STACK_LINE(87)
									te[(int)13] = tmp100;
									HX_STACK_LINE(87)
									Float tmp101 = (a31 * b11);		HX_STACK_VAR(tmp101,"tmp101");
									HX_STACK_LINE(87)
									Float tmp102 = (a32 * b21);		HX_STACK_VAR(tmp102,"tmp102");
									HX_STACK_LINE(87)
									Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(87)
									Float tmp104 = (a33 * b31);		HX_STACK_VAR(tmp104,"tmp104");
									HX_STACK_LINE(87)
									Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
									HX_STACK_LINE(87)
									Float tmp106 = (a34 * b41);		HX_STACK_VAR(tmp106,"tmp106");
									HX_STACK_LINE(87)
									Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
									HX_STACK_LINE(87)
									te[(int)2] = tmp107;
									HX_STACK_LINE(87)
									Float tmp108 = (a31 * b12);		HX_STACK_VAR(tmp108,"tmp108");
									HX_STACK_LINE(87)
									Float tmp109 = (a32 * b22);		HX_STACK_VAR(tmp109,"tmp109");
									HX_STACK_LINE(87)
									Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
									HX_STACK_LINE(87)
									Float tmp111 = (a33 * b32);		HX_STACK_VAR(tmp111,"tmp111");
									HX_STACK_LINE(87)
									Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
									HX_STACK_LINE(87)
									Float tmp113 = (a34 * b42);		HX_STACK_VAR(tmp113,"tmp113");
									HX_STACK_LINE(87)
									Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
									HX_STACK_LINE(87)
									te[(int)6] = tmp114;
									HX_STACK_LINE(87)
									Float tmp115 = (a31 * b13);		HX_STACK_VAR(tmp115,"tmp115");
									HX_STACK_LINE(87)
									Float tmp116 = (a32 * b23);		HX_STACK_VAR(tmp116,"tmp116");
									HX_STACK_LINE(87)
									Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
									HX_STACK_LINE(87)
									Float tmp118 = (a33 * b33);		HX_STACK_VAR(tmp118,"tmp118");
									HX_STACK_LINE(87)
									Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
									HX_STACK_LINE(87)
									Float tmp120 = (a34 * b43);		HX_STACK_VAR(tmp120,"tmp120");
									HX_STACK_LINE(87)
									Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
									HX_STACK_LINE(87)
									te[(int)10] = tmp121;
									HX_STACK_LINE(87)
									Float tmp122 = (a31 * b14);		HX_STACK_VAR(tmp122,"tmp122");
									HX_STACK_LINE(87)
									Float tmp123 = (a32 * b24);		HX_STACK_VAR(tmp123,"tmp123");
									HX_STACK_LINE(87)
									Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
									HX_STACK_LINE(87)
									Float tmp125 = (a33 * b34);		HX_STACK_VAR(tmp125,"tmp125");
									HX_STACK_LINE(87)
									Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
									HX_STACK_LINE(87)
									Float tmp127 = (a34 * b44);		HX_STACK_VAR(tmp127,"tmp127");
									HX_STACK_LINE(87)
									Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
									HX_STACK_LINE(87)
									te[(int)14] = tmp128;
									HX_STACK_LINE(87)
									Float tmp129 = (a41 * b11);		HX_STACK_VAR(tmp129,"tmp129");
									HX_STACK_LINE(87)
									Float tmp130 = (a42 * b21);		HX_STACK_VAR(tmp130,"tmp130");
									HX_STACK_LINE(87)
									Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
									HX_STACK_LINE(87)
									Float tmp132 = (a43 * b31);		HX_STACK_VAR(tmp132,"tmp132");
									HX_STACK_LINE(87)
									Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
									HX_STACK_LINE(87)
									Float tmp134 = (a44 * b41);		HX_STACK_VAR(tmp134,"tmp134");
									HX_STACK_LINE(87)
									Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
									HX_STACK_LINE(87)
									te[(int)3] = tmp135;
									HX_STACK_LINE(87)
									Float tmp136 = (a41 * b12);		HX_STACK_VAR(tmp136,"tmp136");
									HX_STACK_LINE(87)
									Float tmp137 = (a42 * b22);		HX_STACK_VAR(tmp137,"tmp137");
									HX_STACK_LINE(87)
									Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
									HX_STACK_LINE(87)
									Float tmp139 = (a43 * b32);		HX_STACK_VAR(tmp139,"tmp139");
									HX_STACK_LINE(87)
									Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
									HX_STACK_LINE(87)
									Float tmp141 = (a44 * b42);		HX_STACK_VAR(tmp141,"tmp141");
									HX_STACK_LINE(87)
									Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
									HX_STACK_LINE(87)
									te[(int)7] = tmp142;
									HX_STACK_LINE(87)
									Float tmp143 = (a41 * b13);		HX_STACK_VAR(tmp143,"tmp143");
									HX_STACK_LINE(87)
									Float tmp144 = (a42 * b23);		HX_STACK_VAR(tmp144,"tmp144");
									HX_STACK_LINE(87)
									Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
									HX_STACK_LINE(87)
									Float tmp146 = (a43 * b33);		HX_STACK_VAR(tmp146,"tmp146");
									HX_STACK_LINE(87)
									Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
									HX_STACK_LINE(87)
									Float tmp148 = (a44 * b43);		HX_STACK_VAR(tmp148,"tmp148");
									HX_STACK_LINE(87)
									Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
									HX_STACK_LINE(87)
									te[(int)11] = tmp149;
									HX_STACK_LINE(87)
									Float tmp150 = (a41 * b14);		HX_STACK_VAR(tmp150,"tmp150");
									HX_STACK_LINE(87)
									Float tmp151 = (a42 * b24);		HX_STACK_VAR(tmp151,"tmp151");
									HX_STACK_LINE(87)
									Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
									HX_STACK_LINE(87)
									Float tmp153 = (a43 * b34);		HX_STACK_VAR(tmp153,"tmp153");
									HX_STACK_LINE(87)
									Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
									HX_STACK_LINE(87)
									Float tmp155 = (a44 * b44);		HX_STACK_VAR(tmp155,"tmp155");
									HX_STACK_LINE(87)
									Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
									HX_STACK_LINE(87)
									te[(int)15] = tmp156;
									HX_STACK_LINE(87)
									_this;
								}
							}
							HX_STACK_LINE(87)
							::phoenix::Transform tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(87)
							bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(87)
							if ((tmp12)){
								HX_STACK_LINE(87)
								::phoenix::Spatial tmp13 = this->get_world();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(87)
								::phoenix::Spatial _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(87)
								::phoenix::Matrix tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Matrix tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Spatial tmp16 = this->get_world();		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(87)
										::phoenix::Spatial _this1 = tmp16;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(87)
										tmp15 = _this1->matrix;
									}
									HX_STACK_LINE(87)
									::phoenix::Matrix _this1 = tmp15;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(87)
									::phoenix::Matrix tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Transform tmp17 = this->parent;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(87)
										::phoenix::Spatial tmp18 = tmp17->get_world();		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(87)
										::phoenix::Spatial _this2 = tmp18;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(87)
										tmp16 = _this2->matrix;
									}
									HX_STACK_LINE(87)
									::phoenix::Matrix _a = tmp16;		HX_STACK_VAR(_a,"_a");
									HX_STACK_LINE(87)
									Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
									HX_STACK_LINE(87)
									::phoenix::Spatial tmp17 = this->local;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(87)
									Array< Float > be = tmp17->matrix->elements;		HX_STACK_VAR(be,"be");
									HX_STACK_LINE(87)
									Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(87)
									Float tmp18 = ae->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(87)
									Float a11 = tmp18;		HX_STACK_VAR(a11,"a11");
									HX_STACK_LINE(87)
									Float tmp19 = ae->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(87)
									Float a12 = tmp19;		HX_STACK_VAR(a12,"a12");
									HX_STACK_LINE(87)
									Float tmp20 = ae->__get((int)8);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(87)
									Float a13 = tmp20;		HX_STACK_VAR(a13,"a13");
									HX_STACK_LINE(87)
									Float tmp21 = ae->__get((int)12);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(87)
									Float a14 = tmp21;		HX_STACK_VAR(a14,"a14");
									HX_STACK_LINE(87)
									Float tmp22 = ae->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(87)
									Float a21 = tmp22;		HX_STACK_VAR(a21,"a21");
									HX_STACK_LINE(87)
									Float tmp23 = ae->__get((int)5);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(87)
									Float a22 = tmp23;		HX_STACK_VAR(a22,"a22");
									HX_STACK_LINE(87)
									Float tmp24 = ae->__get((int)9);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(87)
									Float a23 = tmp24;		HX_STACK_VAR(a23,"a23");
									HX_STACK_LINE(87)
									Float tmp25 = ae->__get((int)13);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(87)
									Float a24 = tmp25;		HX_STACK_VAR(a24,"a24");
									HX_STACK_LINE(87)
									Float tmp26 = ae->__get((int)2);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(87)
									Float a31 = tmp26;		HX_STACK_VAR(a31,"a31");
									HX_STACK_LINE(87)
									Float tmp27 = ae->__get((int)6);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(87)
									Float a32 = tmp27;		HX_STACK_VAR(a32,"a32");
									HX_STACK_LINE(87)
									Float tmp28 = ae->__get((int)10);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(87)
									Float a33 = tmp28;		HX_STACK_VAR(a33,"a33");
									HX_STACK_LINE(87)
									Float tmp29 = ae->__get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(87)
									Float a34 = tmp29;		HX_STACK_VAR(a34,"a34");
									HX_STACK_LINE(87)
									Float tmp30 = ae->__get((int)3);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(87)
									Float a41 = tmp30;		HX_STACK_VAR(a41,"a41");
									HX_STACK_LINE(87)
									Float tmp31 = ae->__get((int)7);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(87)
									Float a42 = tmp31;		HX_STACK_VAR(a42,"a42");
									HX_STACK_LINE(87)
									Float tmp32 = ae->__get((int)11);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(87)
									Float a43 = tmp32;		HX_STACK_VAR(a43,"a43");
									HX_STACK_LINE(87)
									Float tmp33 = ae->__get((int)15);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(87)
									Float a44 = tmp33;		HX_STACK_VAR(a44,"a44");
									HX_STACK_LINE(87)
									Float tmp34 = be->__get((int)0);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(87)
									Float b11 = tmp34;		HX_STACK_VAR(b11,"b11");
									HX_STACK_LINE(87)
									Float tmp35 = be->__get((int)4);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(87)
									Float b12 = tmp35;		HX_STACK_VAR(b12,"b12");
									HX_STACK_LINE(87)
									Float tmp36 = be->__get((int)8);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(87)
									Float b13 = tmp36;		HX_STACK_VAR(b13,"b13");
									HX_STACK_LINE(87)
									Float tmp37 = be->__get((int)12);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(87)
									Float b14 = tmp37;		HX_STACK_VAR(b14,"b14");
									HX_STACK_LINE(87)
									Float tmp38 = be->__get((int)1);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(87)
									Float b21 = tmp38;		HX_STACK_VAR(b21,"b21");
									HX_STACK_LINE(87)
									Float tmp39 = be->__get((int)5);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(87)
									Float b22 = tmp39;		HX_STACK_VAR(b22,"b22");
									HX_STACK_LINE(87)
									Float tmp40 = be->__get((int)9);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(87)
									Float b23 = tmp40;		HX_STACK_VAR(b23,"b23");
									HX_STACK_LINE(87)
									Float tmp41 = be->__get((int)13);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(87)
									Float b24 = tmp41;		HX_STACK_VAR(b24,"b24");
									HX_STACK_LINE(87)
									Float tmp42 = be->__get((int)2);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(87)
									Float b31 = tmp42;		HX_STACK_VAR(b31,"b31");
									HX_STACK_LINE(87)
									Float tmp43 = be->__get((int)6);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(87)
									Float b32 = tmp43;		HX_STACK_VAR(b32,"b32");
									HX_STACK_LINE(87)
									Float tmp44 = be->__get((int)10);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(87)
									Float b33 = tmp44;		HX_STACK_VAR(b33,"b33");
									HX_STACK_LINE(87)
									Float tmp45 = be->__get((int)14);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(87)
									Float b34 = tmp45;		HX_STACK_VAR(b34,"b34");
									HX_STACK_LINE(87)
									Float tmp46 = be->__get((int)3);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(87)
									Float b41 = tmp46;		HX_STACK_VAR(b41,"b41");
									HX_STACK_LINE(87)
									Float tmp47 = be->__get((int)7);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(87)
									Float b42 = tmp47;		HX_STACK_VAR(b42,"b42");
									HX_STACK_LINE(87)
									Float tmp48 = be->__get((int)11);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(87)
									Float b43 = tmp48;		HX_STACK_VAR(b43,"b43");
									HX_STACK_LINE(87)
									Float tmp49 = be->__get((int)15);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(87)
									Float b44 = tmp49;		HX_STACK_VAR(b44,"b44");
									HX_STACK_LINE(87)
									Float tmp50 = (a11 * b11);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(87)
									Float tmp51 = (a12 * b21);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(87)
									Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(87)
									Float tmp53 = (a13 * b31);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(87)
									Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(87)
									Float tmp55 = (a14 * b41);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(87)
									Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(87)
									te[(int)0] = tmp56;
									HX_STACK_LINE(87)
									Float tmp57 = (a11 * b12);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(87)
									Float tmp58 = (a12 * b22);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(87)
									Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(87)
									Float tmp60 = (a13 * b32);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(87)
									Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(87)
									Float tmp62 = (a14 * b42);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(87)
									Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(87)
									te[(int)4] = tmp63;
									HX_STACK_LINE(87)
									Float tmp64 = (a11 * b13);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(87)
									Float tmp65 = (a12 * b23);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(87)
									Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(87)
									Float tmp67 = (a13 * b33);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(87)
									Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(87)
									Float tmp69 = (a14 * b43);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(87)
									Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(87)
									te[(int)8] = tmp70;
									HX_STACK_LINE(87)
									Float tmp71 = (a11 * b14);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(87)
									Float tmp72 = (a12 * b24);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(87)
									Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(87)
									Float tmp74 = (a13 * b34);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(87)
									Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(87)
									Float tmp76 = (a14 * b44);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(87)
									Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(87)
									te[(int)12] = tmp77;
									HX_STACK_LINE(87)
									Float tmp78 = (a21 * b11);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(87)
									Float tmp79 = (a22 * b21);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(87)
									Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(87)
									Float tmp81 = (a23 * b31);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(87)
									Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(87)
									Float tmp83 = (a24 * b41);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(87)
									Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(87)
									te[(int)1] = tmp84;
									HX_STACK_LINE(87)
									Float tmp85 = (a21 * b12);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(87)
									Float tmp86 = (a22 * b22);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(87)
									Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(87)
									Float tmp88 = (a23 * b32);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(87)
									Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(87)
									Float tmp90 = (a24 * b42);		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(87)
									Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(87)
									te[(int)5] = tmp91;
									HX_STACK_LINE(87)
									Float tmp92 = (a21 * b13);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(87)
									Float tmp93 = (a22 * b23);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(87)
									Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(87)
									Float tmp95 = (a23 * b33);		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(87)
									Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(87)
									Float tmp97 = (a24 * b43);		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(87)
									Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
									HX_STACK_LINE(87)
									te[(int)9] = tmp98;
									HX_STACK_LINE(87)
									Float tmp99 = (a21 * b14);		HX_STACK_VAR(tmp99,"tmp99");
									HX_STACK_LINE(87)
									Float tmp100 = (a22 * b24);		HX_STACK_VAR(tmp100,"tmp100");
									HX_STACK_LINE(87)
									Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
									HX_STACK_LINE(87)
									Float tmp102 = (a23 * b34);		HX_STACK_VAR(tmp102,"tmp102");
									HX_STACK_LINE(87)
									Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(87)
									Float tmp104 = (a24 * b44);		HX_STACK_VAR(tmp104,"tmp104");
									HX_STACK_LINE(87)
									Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
									HX_STACK_LINE(87)
									te[(int)13] = tmp105;
									HX_STACK_LINE(87)
									Float tmp106 = (a31 * b11);		HX_STACK_VAR(tmp106,"tmp106");
									HX_STACK_LINE(87)
									Float tmp107 = (a32 * b21);		HX_STACK_VAR(tmp107,"tmp107");
									HX_STACK_LINE(87)
									Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
									HX_STACK_LINE(87)
									Float tmp109 = (a33 * b31);		HX_STACK_VAR(tmp109,"tmp109");
									HX_STACK_LINE(87)
									Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
									HX_STACK_LINE(87)
									Float tmp111 = (a34 * b41);		HX_STACK_VAR(tmp111,"tmp111");
									HX_STACK_LINE(87)
									Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
									HX_STACK_LINE(87)
									te[(int)2] = tmp112;
									HX_STACK_LINE(87)
									Float tmp113 = (a31 * b12);		HX_STACK_VAR(tmp113,"tmp113");
									HX_STACK_LINE(87)
									Float tmp114 = (a32 * b22);		HX_STACK_VAR(tmp114,"tmp114");
									HX_STACK_LINE(87)
									Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
									HX_STACK_LINE(87)
									Float tmp116 = (a33 * b32);		HX_STACK_VAR(tmp116,"tmp116");
									HX_STACK_LINE(87)
									Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
									HX_STACK_LINE(87)
									Float tmp118 = (a34 * b42);		HX_STACK_VAR(tmp118,"tmp118");
									HX_STACK_LINE(87)
									Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
									HX_STACK_LINE(87)
									te[(int)6] = tmp119;
									HX_STACK_LINE(87)
									Float tmp120 = (a31 * b13);		HX_STACK_VAR(tmp120,"tmp120");
									HX_STACK_LINE(87)
									Float tmp121 = (a32 * b23);		HX_STACK_VAR(tmp121,"tmp121");
									HX_STACK_LINE(87)
									Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
									HX_STACK_LINE(87)
									Float tmp123 = (a33 * b33);		HX_STACK_VAR(tmp123,"tmp123");
									HX_STACK_LINE(87)
									Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
									HX_STACK_LINE(87)
									Float tmp125 = (a34 * b43);		HX_STACK_VAR(tmp125,"tmp125");
									HX_STACK_LINE(87)
									Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
									HX_STACK_LINE(87)
									te[(int)10] = tmp126;
									HX_STACK_LINE(87)
									Float tmp127 = (a31 * b14);		HX_STACK_VAR(tmp127,"tmp127");
									HX_STACK_LINE(87)
									Float tmp128 = (a32 * b24);		HX_STACK_VAR(tmp128,"tmp128");
									HX_STACK_LINE(87)
									Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
									HX_STACK_LINE(87)
									Float tmp130 = (a33 * b34);		HX_STACK_VAR(tmp130,"tmp130");
									HX_STACK_LINE(87)
									Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
									HX_STACK_LINE(87)
									Float tmp132 = (a34 * b44);		HX_STACK_VAR(tmp132,"tmp132");
									HX_STACK_LINE(87)
									Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
									HX_STACK_LINE(87)
									te[(int)14] = tmp133;
									HX_STACK_LINE(87)
									Float tmp134 = (a41 * b11);		HX_STACK_VAR(tmp134,"tmp134");
									HX_STACK_LINE(87)
									Float tmp135 = (a42 * b21);		HX_STACK_VAR(tmp135,"tmp135");
									HX_STACK_LINE(87)
									Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
									HX_STACK_LINE(87)
									Float tmp137 = (a43 * b31);		HX_STACK_VAR(tmp137,"tmp137");
									HX_STACK_LINE(87)
									Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
									HX_STACK_LINE(87)
									Float tmp139 = (a44 * b41);		HX_STACK_VAR(tmp139,"tmp139");
									HX_STACK_LINE(87)
									Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
									HX_STACK_LINE(87)
									te[(int)3] = tmp140;
									HX_STACK_LINE(87)
									Float tmp141 = (a41 * b12);		HX_STACK_VAR(tmp141,"tmp141");
									HX_STACK_LINE(87)
									Float tmp142 = (a42 * b22);		HX_STACK_VAR(tmp142,"tmp142");
									HX_STACK_LINE(87)
									Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
									HX_STACK_LINE(87)
									Float tmp144 = (a43 * b32);		HX_STACK_VAR(tmp144,"tmp144");
									HX_STACK_LINE(87)
									Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
									HX_STACK_LINE(87)
									Float tmp146 = (a44 * b42);		HX_STACK_VAR(tmp146,"tmp146");
									HX_STACK_LINE(87)
									Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
									HX_STACK_LINE(87)
									te[(int)7] = tmp147;
									HX_STACK_LINE(87)
									Float tmp148 = (a41 * b13);		HX_STACK_VAR(tmp148,"tmp148");
									HX_STACK_LINE(87)
									Float tmp149 = (a42 * b23);		HX_STACK_VAR(tmp149,"tmp149");
									HX_STACK_LINE(87)
									Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
									HX_STACK_LINE(87)
									Float tmp151 = (a43 * b33);		HX_STACK_VAR(tmp151,"tmp151");
									HX_STACK_LINE(87)
									Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
									HX_STACK_LINE(87)
									Float tmp153 = (a44 * b43);		HX_STACK_VAR(tmp153,"tmp153");
									HX_STACK_LINE(87)
									Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
									HX_STACK_LINE(87)
									te[(int)11] = tmp154;
									HX_STACK_LINE(87)
									Float tmp155 = (a41 * b14);		HX_STACK_VAR(tmp155,"tmp155");
									HX_STACK_LINE(87)
									Float tmp156 = (a42 * b24);		HX_STACK_VAR(tmp156,"tmp156");
									HX_STACK_LINE(87)
									Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
									HX_STACK_LINE(87)
									Float tmp158 = (a43 * b34);		HX_STACK_VAR(tmp158,"tmp158");
									HX_STACK_LINE(87)
									Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
									HX_STACK_LINE(87)
									Float tmp160 = (a44 * b44);		HX_STACK_VAR(tmp160,"tmp160");
									HX_STACK_LINE(87)
									Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
									HX_STACK_LINE(87)
									te[(int)15] = tmp161;
									HX_STACK_LINE(87)
									tmp14 = _this1;
								}
								HX_STACK_LINE(87)
								::phoenix::Matrix _m = tmp14;		HX_STACK_VAR(_m,"_m");
								HX_STACK_LINE(87)
								_this->matrix = _m;
								HX_STACK_LINE(87)
								bool tmp15 = (_m != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(87)
								if ((tmp15)){
									HX_STACK_LINE(87)
									::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										cpp::ArrayBase array = _this->matrix->elements;		HX_STACK_VAR(array,"array");
										HX_STACK_LINE(87)
										::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(87)
										bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(87)
										if ((tmp17)){
											HX_STACK_LINE(87)
											::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(87)
											this1 = tmp18;
										}
										else{
											HX_STACK_LINE(87)
											bool tmp18 = (array != null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(87)
											if ((tmp18)){
												HX_STACK_LINE(87)
												::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(87)
													::snow::api::buffers::ArrayBufferView _this1 = tmp20;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(87)
													_this1->byteOffset = (int)0;
													HX_STACK_LINE(87)
													_this1->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
													HX_STACK_LINE(87)
													int tmp21 = (_this1->length * _this1->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(87)
													_this1->byteLength = tmp21;
													HX_STACK_LINE(87)
													::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(87)
													{
														HX_STACK_LINE(87)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(87)
														int tmp23 = _this1->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(87)
														::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(87)
														this2 = tmp24;
														HX_STACK_LINE(87)
														tmp22 = this2;
													}
													HX_STACK_LINE(87)
													_this1->buffer = tmp22;
													HX_STACK_LINE(87)
													_this1->copyFromArray(((Array< Float >)(array)),null());
													HX_STACK_LINE(87)
													tmp19 = _this1;
												}
												HX_STACK_LINE(87)
												this1 = tmp19;
											}
											else{
												HX_STACK_LINE(87)
												bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(87)
												if ((tmp19)){
													HX_STACK_LINE(87)
													::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(87)
													{
														HX_STACK_LINE(87)
														::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(87)
														::snow::api::buffers::ArrayBufferView _this1 = tmp21;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(87)
														::haxe::io::Bytes tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(87)
														::haxe::io::Bytes srcData = tmp22;		HX_STACK_VAR(srcData,"srcData");
														HX_STACK_LINE(87)
														int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(87)
														int srcLength = tmp23;		HX_STACK_VAR(srcLength,"srcLength");
														HX_STACK_LINE(87)
														int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(87)
														int srcByteOffset = tmp24;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
														HX_STACK_LINE(87)
														int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(87)
														int srcElementSize = tmp25;		HX_STACK_VAR(srcElementSize,"srcElementSize");
														HX_STACK_LINE(87)
														int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
														HX_STACK_LINE(87)
														int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(87)
														int tmp27 = _this1->type;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(87)
														bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(87)
														if ((tmp28)){
															HX_STACK_LINE(87)
															int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
															HX_STACK_LINE(87)
															int tmp29 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(87)
															int cloneLength = tmp29;		HX_STACK_VAR(cloneLength,"cloneLength");
															HX_STACK_LINE(87)
															::haxe::io::Bytes tmp30;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(87)
															{
																HX_STACK_LINE(87)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(87)
																int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(87)
																::haxe::io::Bytes tmp32 = ::haxe::io::Bytes_obj::alloc(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(87)
																this2 = tmp32;
																HX_STACK_LINE(87)
																tmp30 = this2;
															}
															HX_STACK_LINE(87)
															_this1->buffer = tmp30;
															HX_STACK_LINE(87)
															::haxe::io::Bytes tmp31 = srcData;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(87)
															int tmp32 = srcByteOffset;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(87)
															int tmp33 = cloneLength;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(87)
															_this1->buffer->blit((int)0,tmp31,tmp32,tmp33);
														}
														else{
															HX_STACK_LINE(87)
															HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
														}
														HX_STACK_LINE(87)
														int tmp29 = (_this1->bytesPerElement * srcLength);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(87)
														_this1->byteLength = tmp29;
														HX_STACK_LINE(87)
														_this1->byteOffset = (int)0;
														HX_STACK_LINE(87)
														_this1->length = srcLength;
														HX_STACK_LINE(87)
														tmp20 = _this1;
													}
													HX_STACK_LINE(87)
													this1 = tmp20;
												}
												else{
													HX_STACK_LINE(87)
													bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(87)
													if ((tmp20)){
														HX_STACK_LINE(87)
														::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(87)
														{
															HX_STACK_LINE(87)
															::snow::api::buffers::ArrayBufferView tmp22 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(87)
															::snow::api::buffers::ArrayBufferView _this1 = tmp22;		HX_STACK_VAR(_this1,"_this1");
															HX_STACK_LINE(87)
															bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(87)
															if ((tmp23)){
																HX_STACK_LINE(87)
																HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
															}
															HX_STACK_LINE(87)
															int tmp24 = hx::Mod((int)0,_this1->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(87)
															bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(87)
															if ((tmp25)){
																HX_STACK_LINE(87)
																HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
															}
															HX_STACK_LINE(87)
															int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(87)
															int bufferByteLength = tmp26;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
															HX_STACK_LINE(87)
															int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
															HX_STACK_LINE(87)
															int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
															HX_STACK_LINE(87)
															bool tmp27 = true;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(87)
															if ((tmp27)){
																HX_STACK_LINE(87)
																int tmp28 = bufferByteLength;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(87)
																newByteLength = tmp28;
																HX_STACK_LINE(87)
																int tmp29 = hx::Mod(bufferByteLength,_this1->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(87)
																bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(87)
																if ((tmp30)){
																	HX_STACK_LINE(87)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
																HX_STACK_LINE(87)
																bool tmp31 = (newByteLength < (int)0);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(87)
																if ((tmp31)){
																	HX_STACK_LINE(87)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
															}
															else{
																HX_STACK_LINE(87)
																int tmp28 = (null() * _this1->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(87)
																newByteLength = tmp28;
																HX_STACK_LINE(87)
																int tmp29 = newByteLength;		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(87)
																int newRange = tmp29;		HX_STACK_VAR(newRange,"newRange");
																HX_STACK_LINE(87)
																bool tmp30 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(87)
																if ((tmp30)){
																	HX_STACK_LINE(87)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
															}
															HX_STACK_LINE(87)
															_this1->buffer = null();
															HX_STACK_LINE(87)
															_this1->byteOffset = (int)0;
															HX_STACK_LINE(87)
															_this1->byteLength = newByteLength;
															HX_STACK_LINE(87)
															Float tmp28 = (Float(newByteLength) / Float(_this1->bytesPerElement));		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(87)
															int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(87)
															_this1->length = tmp29;
															HX_STACK_LINE(87)
															tmp21 = _this1;
														}
														HX_STACK_LINE(87)
														this1 = tmp21;
													}
													else{
														HX_STACK_LINE(87)
														HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
													}
												}
											}
										}
										HX_STACK_LINE(87)
										tmp16 = this1;
									}
									HX_STACK_LINE(87)
									_this->floats = tmp16;
								}
								HX_STACK_LINE(87)
								_this->matrix;
							}
							else{
								HX_STACK_LINE(87)
								::phoenix::Spatial tmp13 = this->get_world();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(87)
								::phoenix::Spatial _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(87)
								::phoenix::Matrix tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::phoenix::Spatial tmp15 = this->local;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									Array< Float > te = tmp15->matrix->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(87)
									Float tmp16 = te->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									Float tmp17 = te->__get((int)4);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(87)
									Float tmp18 = te->__get((int)8);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(87)
									Float tmp19 = te->__get((int)12);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(87)
									Float tmp20 = te->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(87)
									Float tmp21 = te->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(87)
									Float tmp22 = te->__get((int)9);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(87)
									Float tmp23 = te->__get((int)13);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(87)
									Float tmp24 = te->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(87)
									Float tmp25 = te->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(87)
									Float tmp26 = te->__get((int)10);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(87)
									Float tmp27 = te->__get((int)14);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(87)
									Float tmp28 = te->__get((int)3);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(87)
									Float tmp29 = te->__get((int)7);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(87)
									Float tmp30 = te->__get((int)11);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(87)
									Float tmp31 = te->__get((int)15);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(87)
									tmp14 = ::phoenix::Matrix_obj::__new(tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31);
								}
								HX_STACK_LINE(87)
								::phoenix::Matrix _m = tmp14;		HX_STACK_VAR(_m,"_m");
								HX_STACK_LINE(87)
								_this->matrix = _m;
								HX_STACK_LINE(87)
								bool tmp15 = (_m != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(87)
								if ((tmp15)){
									HX_STACK_LINE(87)
									::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										cpp::ArrayBase array = _this->matrix->elements;		HX_STACK_VAR(array,"array");
										HX_STACK_LINE(87)
										::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(87)
										bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(87)
										if ((tmp17)){
											HX_STACK_LINE(87)
											::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(87)
											this1 = tmp18;
										}
										else{
											HX_STACK_LINE(87)
											bool tmp18 = (array != null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(87)
											if ((tmp18)){
												HX_STACK_LINE(87)
												::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(87)
												{
													HX_STACK_LINE(87)
													::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(87)
													::snow::api::buffers::ArrayBufferView _this1 = tmp20;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(87)
													_this1->byteOffset = (int)0;
													HX_STACK_LINE(87)
													_this1->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
													HX_STACK_LINE(87)
													int tmp21 = (_this1->length * _this1->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(87)
													_this1->byteLength = tmp21;
													HX_STACK_LINE(87)
													::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(87)
													{
														HX_STACK_LINE(87)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(87)
														int tmp23 = _this1->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(87)
														::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(87)
														this2 = tmp24;
														HX_STACK_LINE(87)
														tmp22 = this2;
													}
													HX_STACK_LINE(87)
													_this1->buffer = tmp22;
													HX_STACK_LINE(87)
													_this1->copyFromArray(((Array< Float >)(array)),null());
													HX_STACK_LINE(87)
													tmp19 = _this1;
												}
												HX_STACK_LINE(87)
												this1 = tmp19;
											}
											else{
												HX_STACK_LINE(87)
												bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(87)
												if ((tmp19)){
													HX_STACK_LINE(87)
													::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(87)
													{
														HX_STACK_LINE(87)
														::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(87)
														::snow::api::buffers::ArrayBufferView _this1 = tmp21;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(87)
														::haxe::io::Bytes tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(87)
														::haxe::io::Bytes srcData = tmp22;		HX_STACK_VAR(srcData,"srcData");
														HX_STACK_LINE(87)
														int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(87)
														int srcLength = tmp23;		HX_STACK_VAR(srcLength,"srcLength");
														HX_STACK_LINE(87)
														int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(87)
														int srcByteOffset = tmp24;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
														HX_STACK_LINE(87)
														int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(87)
														int srcElementSize = tmp25;		HX_STACK_VAR(srcElementSize,"srcElementSize");
														HX_STACK_LINE(87)
														int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
														HX_STACK_LINE(87)
														int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(87)
														int tmp27 = _this1->type;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(87)
														bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(87)
														if ((tmp28)){
															HX_STACK_LINE(87)
															int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
															HX_STACK_LINE(87)
															int tmp29 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(87)
															int cloneLength = tmp29;		HX_STACK_VAR(cloneLength,"cloneLength");
															HX_STACK_LINE(87)
															::haxe::io::Bytes tmp30;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(87)
															{
																HX_STACK_LINE(87)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(87)
																int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(87)
																::haxe::io::Bytes tmp32 = ::haxe::io::Bytes_obj::alloc(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(87)
																this2 = tmp32;
																HX_STACK_LINE(87)
																tmp30 = this2;
															}
															HX_STACK_LINE(87)
															_this1->buffer = tmp30;
															HX_STACK_LINE(87)
															::haxe::io::Bytes tmp31 = srcData;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(87)
															int tmp32 = srcByteOffset;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(87)
															int tmp33 = cloneLength;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(87)
															_this1->buffer->blit((int)0,tmp31,tmp32,tmp33);
														}
														else{
															HX_STACK_LINE(87)
															HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
														}
														HX_STACK_LINE(87)
														int tmp29 = (_this1->bytesPerElement * srcLength);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(87)
														_this1->byteLength = tmp29;
														HX_STACK_LINE(87)
														_this1->byteOffset = (int)0;
														HX_STACK_LINE(87)
														_this1->length = srcLength;
														HX_STACK_LINE(87)
														tmp20 = _this1;
													}
													HX_STACK_LINE(87)
													this1 = tmp20;
												}
												else{
													HX_STACK_LINE(87)
													bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(87)
													if ((tmp20)){
														HX_STACK_LINE(87)
														::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(87)
														{
															HX_STACK_LINE(87)
															::snow::api::buffers::ArrayBufferView tmp22 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(87)
															::snow::api::buffers::ArrayBufferView _this1 = tmp22;		HX_STACK_VAR(_this1,"_this1");
															HX_STACK_LINE(87)
															bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(87)
															if ((tmp23)){
																HX_STACK_LINE(87)
																HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
															}
															HX_STACK_LINE(87)
															int tmp24 = hx::Mod((int)0,_this1->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(87)
															bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(87)
															if ((tmp25)){
																HX_STACK_LINE(87)
																HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
															}
															HX_STACK_LINE(87)
															int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(87)
															int bufferByteLength = tmp26;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
															HX_STACK_LINE(87)
															int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
															HX_STACK_LINE(87)
															int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
															HX_STACK_LINE(87)
															bool tmp27 = true;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(87)
															if ((tmp27)){
																HX_STACK_LINE(87)
																int tmp28 = bufferByteLength;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(87)
																newByteLength = tmp28;
																HX_STACK_LINE(87)
																int tmp29 = hx::Mod(bufferByteLength,_this1->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(87)
																bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(87)
																if ((tmp30)){
																	HX_STACK_LINE(87)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
																HX_STACK_LINE(87)
																bool tmp31 = (newByteLength < (int)0);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(87)
																if ((tmp31)){
																	HX_STACK_LINE(87)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
															}
															else{
																HX_STACK_LINE(87)
																int tmp28 = (null() * _this1->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(87)
																newByteLength = tmp28;
																HX_STACK_LINE(87)
																int tmp29 = newByteLength;		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(87)
																int newRange = tmp29;		HX_STACK_VAR(newRange,"newRange");
																HX_STACK_LINE(87)
																bool tmp30 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(87)
																if ((tmp30)){
																	HX_STACK_LINE(87)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
															}
															HX_STACK_LINE(87)
															_this1->buffer = null();
															HX_STACK_LINE(87)
															_this1->byteOffset = (int)0;
															HX_STACK_LINE(87)
															_this1->byteLength = newByteLength;
															HX_STACK_LINE(87)
															Float tmp28 = (Float(newByteLength) / Float(_this1->bytesPerElement));		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(87)
															int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(87)
															_this1->length = tmp29;
															HX_STACK_LINE(87)
															tmp21 = _this1;
														}
														HX_STACK_LINE(87)
														this1 = tmp21;
													}
													else{
														HX_STACK_LINE(87)
														HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
													}
												}
											}
										}
										HX_STACK_LINE(87)
										tmp16 = this1;
									}
									HX_STACK_LINE(87)
									_this->floats = tmp16;
								}
								HX_STACK_LINE(87)
								_this->matrix;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::phoenix::Spatial tmp13 = this->get_world();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(87)
								::phoenix::Spatial _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(87)
								bool tmp14 = _this->auto_decompose;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(87)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(87)
								bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(87)
								if ((tmp15)){
									HX_STACK_LINE(87)
									tmp16 = false;
								}
								else{
									HX_STACK_LINE(87)
									tmp16 = true;
								}
								HX_STACK_LINE(87)
								if ((tmp16)){
									HX_STACK_LINE(87)
									::phoenix::MatrixTransform tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Matrix _this1 = _this->matrix;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(87)
										::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
										HX_STACK_LINE(87)
										::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
										HX_STACK_LINE(87)
										::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
										HX_STACK_LINE(87)
										Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(87)
										::phoenix::Matrix tmp18 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(87)
										::phoenix::Matrix matrix = tmp18;		HX_STACK_VAR(matrix,"matrix");
										HX_STACK_LINE(87)
										Float tmp19 = te->__get((int)0);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(87)
										Float _ax_x = tmp19;		HX_STACK_VAR(_ax_x,"_ax_x");
										HX_STACK_LINE(87)
										Float tmp20 = te->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(87)
										Float _ax_y = tmp20;		HX_STACK_VAR(_ax_y,"_ax_y");
										HX_STACK_LINE(87)
										Float tmp21 = te->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(87)
										Float _ax_z = tmp21;		HX_STACK_VAR(_ax_z,"_ax_z");
										HX_STACK_LINE(87)
										Float tmp22 = te->__get((int)4);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(87)
										Float _ay_x = tmp22;		HX_STACK_VAR(_ay_x,"_ay_x");
										HX_STACK_LINE(87)
										Float tmp23 = te->__get((int)5);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(87)
										Float _ay_y = tmp23;		HX_STACK_VAR(_ay_y,"_ay_y");
										HX_STACK_LINE(87)
										Float tmp24 = te->__get((int)6);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(87)
										Float _ay_z = tmp24;		HX_STACK_VAR(_ay_z,"_ay_z");
										HX_STACK_LINE(87)
										Float tmp25 = te->__get((int)8);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(87)
										Float _az_x = tmp25;		HX_STACK_VAR(_az_x,"_az_x");
										HX_STACK_LINE(87)
										Float tmp26 = te->__get((int)9);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(87)
										Float _az_y = tmp26;		HX_STACK_VAR(_az_y,"_az_y");
										HX_STACK_LINE(87)
										Float tmp27 = te->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(87)
										Float _az_z = tmp27;		HX_STACK_VAR(_az_z,"_az_z");
										HX_STACK_LINE(87)
										Float tmp28 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(87)
										Float tmp29 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(87)
										Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(87)
										Float tmp31 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(87)
										Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(87)
										Float tmp33 = ::Math_obj::sqrt(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(87)
										Float _ax_length = tmp33;		HX_STACK_VAR(_ax_length,"_ax_length");
										HX_STACK_LINE(87)
										Float tmp34 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(87)
										Float tmp35 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(87)
										Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(87)
										Float tmp37 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(87)
										Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(87)
										Float tmp39 = ::Math_obj::sqrt(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(87)
										Float _ay_length = tmp39;		HX_STACK_VAR(_ay_length,"_ay_length");
										HX_STACK_LINE(87)
										Float tmp40 = (_az_x * _az_x);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(87)
										Float tmp41 = (_az_y * _az_y);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(87)
										Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(87)
										Float tmp43 = (_az_z * _az_z);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(87)
										Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(87)
										Float tmp45 = ::Math_obj::sqrt(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(87)
										Float _az_length = tmp45;		HX_STACK_VAR(_az_length,"_az_length");
										HX_STACK_LINE(87)
										bool tmp46 = (_quaternion == null());		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(87)
										if ((tmp46)){
											HX_STACK_LINE(87)
											::phoenix::Quaternion tmp47 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(87)
											_quaternion = tmp47;
										}
										HX_STACK_LINE(87)
										bool tmp47 = (_position == null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(87)
										if ((tmp47)){
											HX_STACK_LINE(87)
											Float tmp48 = te->__get((int)12);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(87)
											Float tmp49 = te->__get((int)13);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(87)
											Float tmp50 = te->__get((int)14);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(87)
											::phoenix::Vector tmp51 = ::phoenix::Vector_obj::__new(tmp48,tmp49,tmp50,null());		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(87)
											_position = tmp51;
										}
										else{
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												Float tmp48 = te->__get((int)12);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(87)
												Float _x = tmp48;		HX_STACK_VAR(_x,"_x");
												HX_STACK_LINE(87)
												_position->x = _x;
												HX_STACK_LINE(87)
												bool tmp49 = _position->_construct;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(87)
												if ((tmp49)){
													HX_STACK_LINE(87)
													_position->x;
												}
												else{
													HX_STACK_LINE(87)
													bool tmp50 = (_position->listen_x != null());		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(87)
													bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(87)
													if ((tmp50)){
														HX_STACK_LINE(87)
														bool tmp52 = _position->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(87)
														bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(87)
														tmp51 = !(tmp53);
													}
													else{
														HX_STACK_LINE(87)
														tmp51 = false;
													}
													HX_STACK_LINE(87)
													if ((tmp51)){
														HX_STACK_LINE(87)
														Float tmp52 = _x;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(87)
														_position->listen_x(tmp52);
													}
													HX_STACK_LINE(87)
													_position->x;
												}
											}
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												Float tmp48 = te->__get((int)13);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(87)
												Float _y = tmp48;		HX_STACK_VAR(_y,"_y");
												HX_STACK_LINE(87)
												_position->y = _y;
												HX_STACK_LINE(87)
												bool tmp49 = _position->_construct;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(87)
												if ((tmp49)){
													HX_STACK_LINE(87)
													_position->y;
												}
												else{
													HX_STACK_LINE(87)
													bool tmp50 = (_position->listen_y != null());		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(87)
													bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(87)
													if ((tmp50)){
														HX_STACK_LINE(87)
														bool tmp52 = _position->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(87)
														bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(87)
														tmp51 = !(tmp53);
													}
													else{
														HX_STACK_LINE(87)
														tmp51 = false;
													}
													HX_STACK_LINE(87)
													if ((tmp51)){
														HX_STACK_LINE(87)
														Float tmp52 = _y;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(87)
														_position->listen_y(tmp52);
													}
													HX_STACK_LINE(87)
													_position->y;
												}
											}
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												Float tmp48 = te->__get((int)14);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(87)
												Float _z = tmp48;		HX_STACK_VAR(_z,"_z");
												HX_STACK_LINE(87)
												_position->z = _z;
												HX_STACK_LINE(87)
												bool tmp49 = _position->_construct;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(87)
												if ((tmp49)){
													HX_STACK_LINE(87)
													_position->z;
												}
												else{
													HX_STACK_LINE(87)
													bool tmp50 = (_position->listen_z != null());		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(87)
													bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(87)
													if ((tmp50)){
														HX_STACK_LINE(87)
														bool tmp52 = _position->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(87)
														bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(87)
														tmp51 = !(tmp53);
													}
													else{
														HX_STACK_LINE(87)
														tmp51 = false;
													}
													HX_STACK_LINE(87)
													if ((tmp51)){
														HX_STACK_LINE(87)
														Float tmp52 = _z;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(87)
														_position->listen_z(tmp52);
													}
													HX_STACK_LINE(87)
													_position->z;
												}
											}
										}
										HX_STACK_LINE(87)
										bool tmp48 = (_scale == null());		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(87)
										if ((tmp48)){
											HX_STACK_LINE(87)
											::phoenix::Vector tmp49 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(87)
											_scale = tmp49;
										}
										else{
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												_scale->x = _ax_length;
												HX_STACK_LINE(87)
												bool tmp49 = _scale->_construct;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(87)
												if ((tmp49)){
													HX_STACK_LINE(87)
													_scale->x;
												}
												else{
													HX_STACK_LINE(87)
													bool tmp50 = (_scale->listen_x != null());		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(87)
													bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(87)
													if ((tmp50)){
														HX_STACK_LINE(87)
														bool tmp52 = _scale->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(87)
														bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(87)
														tmp51 = !(tmp53);
													}
													else{
														HX_STACK_LINE(87)
														tmp51 = false;
													}
													HX_STACK_LINE(87)
													if ((tmp51)){
														HX_STACK_LINE(87)
														Float tmp52 = _ax_length;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(87)
														_scale->listen_x(tmp52);
													}
													HX_STACK_LINE(87)
													_scale->x;
												}
											}
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												_scale->y = _ay_length;
												HX_STACK_LINE(87)
												bool tmp49 = _scale->_construct;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(87)
												if ((tmp49)){
													HX_STACK_LINE(87)
													_scale->y;
												}
												else{
													HX_STACK_LINE(87)
													bool tmp50 = (_scale->listen_y != null());		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(87)
													bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(87)
													if ((tmp50)){
														HX_STACK_LINE(87)
														bool tmp52 = _scale->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(87)
														bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(87)
														tmp51 = !(tmp53);
													}
													else{
														HX_STACK_LINE(87)
														tmp51 = false;
													}
													HX_STACK_LINE(87)
													if ((tmp51)){
														HX_STACK_LINE(87)
														Float tmp52 = _ay_length;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(87)
														_scale->listen_y(tmp52);
													}
													HX_STACK_LINE(87)
													_scale->y;
												}
											}
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												_scale->z = _az_length;
												HX_STACK_LINE(87)
												bool tmp49 = _scale->_construct;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(87)
												if ((tmp49)){
													HX_STACK_LINE(87)
													_scale->z;
												}
												else{
													HX_STACK_LINE(87)
													bool tmp50 = (_scale->listen_z != null());		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(87)
													bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(87)
													if ((tmp50)){
														HX_STACK_LINE(87)
														bool tmp52 = _scale->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(87)
														bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(87)
														tmp51 = !(tmp53);
													}
													else{
														HX_STACK_LINE(87)
														tmp51 = false;
													}
													HX_STACK_LINE(87)
													if ((tmp51)){
														HX_STACK_LINE(87)
														Float tmp52 = _az_length;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(87)
														_scale->listen_z(tmp52);
													}
													HX_STACK_LINE(87)
													_scale->z;
												}
											}
										}
										HX_STACK_LINE(87)
										matrix->elements = _this1->elements->concat(Array_obj< Float >::__new());
										HX_STACK_LINE(87)
										Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
										HX_STACK_LINE(87)
										Float tmp49 = _ax_length;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)0],tmp49);
										HX_STACK_LINE(87)
										Float tmp50 = _ax_length;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)1],tmp50);
										HX_STACK_LINE(87)
										Float tmp51 = _ax_length;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)2],tmp51);
										HX_STACK_LINE(87)
										Float tmp52 = _ay_length;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)4],tmp52);
										HX_STACK_LINE(87)
										Float tmp53 = _ay_length;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)5],tmp53);
										HX_STACK_LINE(87)
										Float tmp54 = _ay_length;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)6],tmp54);
										HX_STACK_LINE(87)
										Float tmp55 = _az_length;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)8],tmp55);
										HX_STACK_LINE(87)
										Float tmp56 = _az_length;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)9],tmp56);
										HX_STACK_LINE(87)
										Float tmp57 = _az_length;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(87)
										hx::DivEq(me[(int)10],tmp57);
										HX_STACK_LINE(87)
										::phoenix::Matrix tmp58 = matrix;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(87)
										_quaternion->setFromRotationMatrix(tmp58);
										HX_STACK_LINE(87)
										bool tmp59 = (_this1->_transform == null());		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(87)
										if ((tmp59)){
											HX_STACK_LINE(87)
											::phoenix::MatrixTransform tmp60 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(87)
											_this1->_transform = tmp60;
										}
										else{
											HX_STACK_LINE(87)
											_this1->_transform->pos = _position;
											HX_STACK_LINE(87)
											_this1->_transform->rotation = _quaternion;
											HX_STACK_LINE(87)
											_this1->_transform->scale = _scale;
										}
										HX_STACK_LINE(87)
										tmp17 = _this1->_transform;
									}
									HX_STACK_LINE(87)
									::phoenix::MatrixTransform _transform = tmp17;		HX_STACK_VAR(_transform,"_transform");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
										HX_STACK_LINE(87)
										_this->pos = _p;
										HX_STACK_LINE(87)
										bool tmp18 = (_p != null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(87)
										if ((tmp18)){
											HX_STACK_LINE(87)
											::phoenix::Vector tmp19 = _this->pos;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(87)
											Dynamic tmp20 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(87)
											::phoenix::Vector_obj::Listen(tmp19,tmp20);
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												bool tmp21 = (_this->pos_changed != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(87)
												bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(87)
												if ((tmp21)){
													HX_STACK_LINE(87)
													bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(87)
													bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(87)
													tmp22 = !(tmp24);
												}
												else{
													HX_STACK_LINE(87)
													tmp22 = false;
												}
												HX_STACK_LINE(87)
												if ((tmp22)){
													HX_STACK_LINE(87)
													::phoenix::Vector tmp23 = _this->pos;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(87)
													_this->pos_changed(tmp23);
												}
											}
										}
										HX_STACK_LINE(87)
										_this->pos;
									}
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
										HX_STACK_LINE(87)
										_this->rotation = _r;
										HX_STACK_LINE(87)
										bool tmp18 = (_r != null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(87)
										if ((tmp18)){
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
												HX_STACK_LINE(87)
												Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
												HX_STACK_LINE(87)
												_q->listen_x = listener;
												HX_STACK_LINE(87)
												_q->listen_y = listener;
												HX_STACK_LINE(87)
												_q->listen_z = listener;
												HX_STACK_LINE(87)
												_q->listen_w = listener;
											}
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												bool tmp19 = (_this->rotation_changed != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(87)
												bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(87)
												if ((tmp19)){
													HX_STACK_LINE(87)
													bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(87)
													bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(87)
													tmp20 = !(tmp22);
												}
												else{
													HX_STACK_LINE(87)
													tmp20 = false;
												}
												HX_STACK_LINE(87)
												if ((tmp20)){
													HX_STACK_LINE(87)
													::phoenix::Quaternion tmp21 = _this->rotation;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(87)
													_this->rotation_changed(tmp21);
												}
											}
										}
										HX_STACK_LINE(87)
										_this->rotation;
									}
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
										HX_STACK_LINE(87)
										_this->scale = _s;
										HX_STACK_LINE(87)
										bool tmp18 = (_s != null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(87)
										if ((tmp18)){
											HX_STACK_LINE(87)
											::phoenix::Vector tmp19 = _this->scale;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(87)
											Dynamic tmp20 = _this->_scale_change_dyn();		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(87)
											::phoenix::Vector_obj::Listen(tmp19,tmp20);
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												bool tmp21 = (_this->scale_changed != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(87)
												bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(87)
												if ((tmp21)){
													HX_STACK_LINE(87)
													bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(87)
													bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(87)
													tmp22 = !(tmp24);
												}
												else{
													HX_STACK_LINE(87)
													tmp22 = false;
												}
												HX_STACK_LINE(87)
												if ((tmp22)){
													HX_STACK_LINE(87)
													::phoenix::Vector tmp23 = _this->scale;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(87)
													_this->scale_changed(tmp23);
												}
											}
										}
										HX_STACK_LINE(87)
										_this->scale;
									}
								}
								HX_STACK_LINE(87)
								_this;
							}
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								this->dirty = false;
								HX_STACK_LINE(87)
								bool tmp13 = this->dirty;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(87)
								bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(87)
								bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(87)
								if ((tmp14)){
									HX_STACK_LINE(87)
									bool tmp16 = this->_setup;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(87)
									bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(87)
									bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(87)
									bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(87)
									tmp15 = !(tmp20);
								}
								else{
									HX_STACK_LINE(87)
									tmp15 = false;
								}
								HX_STACK_LINE(87)
								bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(87)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(87)
								if ((tmp16)){
									HX_STACK_LINE(87)
									tmp17 = (this->_dirty_handlers != null());
								}
								else{
									HX_STACK_LINE(87)
									tmp17 = false;
								}
								HX_STACK_LINE(87)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(87)
								if ((tmp17)){
									HX_STACK_LINE(87)
									int tmp19 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(87)
									int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(87)
									tmp18 = (tmp20 > (int)0);
								}
								else{
									HX_STACK_LINE(87)
									tmp18 = false;
								}
								HX_STACK_LINE(87)
								if ((tmp18)){
									HX_STACK_LINE(87)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(87)
									cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(87)
									while((true)){
										HX_STACK_LINE(87)
										bool tmp19 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(87)
										bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(87)
										if ((tmp20)){
											HX_STACK_LINE(87)
											break;
										}
										HX_STACK_LINE(87)
										Dynamic tmp21 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(87)
										Dynamic _handler = tmp21;		HX_STACK_VAR(_handler,"_handler");
										HX_STACK_LINE(87)
										++(_g);
										HX_STACK_LINE(87)
										bool tmp22 = (_handler != null());		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(87)
										if ((tmp22)){
											HX_STACK_LINE(87)
											_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
										}
									}
								}
								HX_STACK_LINE(87)
								this->dirty;
							}
							HX_STACK_LINE(87)
							this->_cleaning = false;
							HX_STACK_LINE(87)
							bool tmp13 = (this->_clean_handlers != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(87)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(87)
							if ((tmp13)){
								HX_STACK_LINE(87)
								int tmp15 = this->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(87)
								int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(87)
								tmp14 = (tmp16 > (int)0);
							}
							else{
								HX_STACK_LINE(87)
								tmp14 = false;
							}
							HX_STACK_LINE(87)
							if ((tmp14)){
								HX_STACK_LINE(87)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(87)
								cpp::ArrayBase _g1 = this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(87)
								while((true)){
									HX_STACK_LINE(87)
									bool tmp15 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									if ((tmp16)){
										HX_STACK_LINE(87)
										break;
									}
									HX_STACK_LINE(87)
									Dynamic tmp17 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(87)
									Dynamic _handler = tmp17;		HX_STACK_VAR(_handler,"_handler");
									HX_STACK_LINE(87)
									++(_g);
									HX_STACK_LINE(87)
									bool tmp18 = (_handler != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(87)
									if ((tmp18)){
										HX_STACK_LINE(87)
										_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(87)
				tmp2 = this->world;
			}
			HX_STACK_LINE(87)
			::phoenix::Spatial _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				_this->matrix = null();
				HX_STACK_LINE(87)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(87)
				if ((tmp3)){
					HX_STACK_LINE(87)
					::snow::api::buffers::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						cpp::ArrayBase array = _this->matrix->elements;		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(87)
						::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(87)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(87)
						if ((tmp5)){
							HX_STACK_LINE(87)
							::snow::api::buffers::ArrayBufferView tmp6 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(87)
							this1 = tmp6;
						}
						else{
							HX_STACK_LINE(87)
							bool tmp6 = (array != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(87)
							if ((tmp6)){
								HX_STACK_LINE(87)
								::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::snow::api::buffers::ArrayBufferView tmp8 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(87)
									::snow::api::buffers::ArrayBufferView _this1 = tmp8;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(87)
									_this1->byteOffset = (int)0;
									HX_STACK_LINE(87)
									_this1->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
									HX_STACK_LINE(87)
									int tmp9 = (_this1->length * _this1->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(87)
									_this1->byteLength = tmp9;
									HX_STACK_LINE(87)
									::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(87)
										int tmp11 = _this1->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(87)
										::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(87)
										this2 = tmp12;
										HX_STACK_LINE(87)
										tmp10 = this2;
									}
									HX_STACK_LINE(87)
									_this1->buffer = tmp10;
									HX_STACK_LINE(87)
									_this1->copyFromArray(((Array< Float >)(array)),null());
									HX_STACK_LINE(87)
									tmp7 = _this1;
								}
								HX_STACK_LINE(87)
								this1 = tmp7;
							}
							else{
								HX_STACK_LINE(87)
								bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(87)
								if ((tmp7)){
									HX_STACK_LINE(87)
									::snow::api::buffers::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(87)
									{
										HX_STACK_LINE(87)
										::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(87)
										::snow::api::buffers::ArrayBufferView _this1 = tmp9;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(87)
										::haxe::io::Bytes tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(87)
										::haxe::io::Bytes srcData = tmp10;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(87)
										int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(87)
										int srcLength = tmp11;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(87)
										int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(87)
										int srcByteOffset = tmp12;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(87)
										int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(87)
										int srcElementSize = tmp13;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(87)
										int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(87)
										int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(87)
										int tmp15 = _this1->type;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(87)
										bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(87)
										if ((tmp16)){
											HX_STACK_LINE(87)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(87)
											int tmp17 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(87)
											int cloneLength = tmp17;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(87)
											::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(87)
											{
												HX_STACK_LINE(87)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(87)
												int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(87)
												::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(87)
												this2 = tmp20;
												HX_STACK_LINE(87)
												tmp18 = this2;
											}
											HX_STACK_LINE(87)
											_this1->buffer = tmp18;
											HX_STACK_LINE(87)
											::haxe::io::Bytes tmp19 = srcData;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(87)
											int tmp20 = srcByteOffset;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(87)
											int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(87)
											_this1->buffer->blit((int)0,tmp19,tmp20,tmp21);
										}
										else{
											HX_STACK_LINE(87)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(87)
										int tmp17 = (_this1->bytesPerElement * srcLength);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(87)
										_this1->byteLength = tmp17;
										HX_STACK_LINE(87)
										_this1->byteOffset = (int)0;
										HX_STACK_LINE(87)
										_this1->length = srcLength;
										HX_STACK_LINE(87)
										tmp8 = _this1;
									}
									HX_STACK_LINE(87)
									this1 = tmp8;
								}
								else{
									HX_STACK_LINE(87)
									bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(87)
									if ((tmp8)){
										HX_STACK_LINE(87)
										::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(87)
										{
											HX_STACK_LINE(87)
											::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(87)
											::snow::api::buffers::ArrayBufferView _this1 = tmp10;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(87)
											bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(87)
											if ((tmp11)){
												HX_STACK_LINE(87)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(87)
											int tmp12 = hx::Mod((int)0,_this1->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(87)
											bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(87)
											if ((tmp13)){
												HX_STACK_LINE(87)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(87)
											int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(87)
											int bufferByteLength = tmp14;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(87)
											int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(87)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(87)
											bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(87)
											if ((tmp15)){
												HX_STACK_LINE(87)
												int tmp16 = bufferByteLength;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(87)
												newByteLength = tmp16;
												HX_STACK_LINE(87)
												int tmp17 = hx::Mod(bufferByteLength,_this1->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(87)
												bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(87)
												if ((tmp18)){
													HX_STACK_LINE(87)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
												HX_STACK_LINE(87)
												bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(87)
												if ((tmp19)){
													HX_STACK_LINE(87)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(87)
												int tmp16 = (null() * _this1->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(87)
												newByteLength = tmp16;
												HX_STACK_LINE(87)
												int tmp17 = newByteLength;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(87)
												int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(87)
												bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(87)
												if ((tmp18)){
													HX_STACK_LINE(87)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(87)
											_this1->buffer = null();
											HX_STACK_LINE(87)
											_this1->byteOffset = (int)0;
											HX_STACK_LINE(87)
											_this1->byteLength = newByteLength;
											HX_STACK_LINE(87)
											Float tmp16 = (Float(newByteLength) / Float(_this1->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(87)
											int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(87)
											_this1->length = tmp17;
											HX_STACK_LINE(87)
											tmp9 = _this1;
										}
										HX_STACK_LINE(87)
										this1 = tmp9;
									}
									else{
										HX_STACK_LINE(87)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
									}
								}
							}
						}
						HX_STACK_LINE(87)
						tmp4 = this1;
					}
					HX_STACK_LINE(87)
					_this->floats = tmp4;
				}
				HX_STACK_LINE(87)
				_this->matrix;
			}
			HX_STACK_LINE(87)
			_this->floats = null();
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				_this->pos = null();
				HX_STACK_LINE(87)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(87)
				if ((tmp3)){
					HX_STACK_LINE(87)
					::phoenix::Vector tmp4 = _this->pos;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(87)
					Dynamic tmp5 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(87)
					::phoenix::Vector_obj::Listen(tmp4,tmp5);
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						bool tmp6 = (_this->pos_changed != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(87)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(87)
						if ((tmp6)){
							HX_STACK_LINE(87)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(87)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(87)
							tmp7 = false;
						}
						HX_STACK_LINE(87)
						if ((tmp7)){
							HX_STACK_LINE(87)
							::phoenix::Vector tmp8 = _this->pos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							_this->pos_changed(tmp8);
						}
					}
				}
				HX_STACK_LINE(87)
				_this->pos;
			}
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				_this->rotation = null();
				HX_STACK_LINE(87)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(87)
				if ((tmp3)){
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
						HX_STACK_LINE(87)
						Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(87)
						_q->listen_x = listener;
						HX_STACK_LINE(87)
						_q->listen_y = listener;
						HX_STACK_LINE(87)
						_q->listen_z = listener;
						HX_STACK_LINE(87)
						_q->listen_w = listener;
					}
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						bool tmp4 = (_this->rotation_changed != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(87)
						bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(87)
						if ((tmp4)){
							HX_STACK_LINE(87)
							bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(87)
							bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(87)
							tmp5 = !(tmp7);
						}
						else{
							HX_STACK_LINE(87)
							tmp5 = false;
						}
						HX_STACK_LINE(87)
						if ((tmp5)){
							HX_STACK_LINE(87)
							::phoenix::Quaternion tmp6 = _this->rotation;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(87)
							_this->rotation_changed(tmp6);
						}
					}
				}
				HX_STACK_LINE(87)
				_this->rotation;
			}
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				_this->scale = null();
				HX_STACK_LINE(87)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(87)
				if ((tmp3)){
					HX_STACK_LINE(87)
					::phoenix::Vector tmp4 = _this->scale;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(87)
					Dynamic tmp5 = _this->_scale_change_dyn();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(87)
					::phoenix::Vector_obj::Listen(tmp4,tmp5);
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						bool tmp6 = (_this->scale_changed != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(87)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(87)
						if ((tmp6)){
							HX_STACK_LINE(87)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(87)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(87)
							tmp7 = false;
						}
						HX_STACK_LINE(87)
						if ((tmp7)){
							HX_STACK_LINE(87)
							::phoenix::Vector tmp8 = _this->scale;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							_this->scale_changed(tmp8);
						}
					}
				}
				HX_STACK_LINE(87)
				_this->scale;
			}
		}
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			if ((tmp2)){
				HX_STACK_LINE(89)
				{
					HX_STACK_LINE(89)
					this->dirty = true;
					HX_STACK_LINE(89)
					bool tmp3 = this->dirty;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(89)
					bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(89)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(89)
					if ((tmp4)){
						HX_STACK_LINE(89)
						bool tmp6 = this->_setup;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(89)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(89)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(89)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(89)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(89)
						tmp5 = !(tmp10);
					}
					else{
						HX_STACK_LINE(89)
						tmp5 = false;
					}
					HX_STACK_LINE(89)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(89)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(89)
					if ((tmp6)){
						HX_STACK_LINE(89)
						tmp7 = (this->_dirty_handlers != null());
					}
					else{
						HX_STACK_LINE(89)
						tmp7 = false;
					}
					HX_STACK_LINE(89)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(89)
					if ((tmp7)){
						HX_STACK_LINE(89)
						int tmp9 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(89)
						int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(89)
						tmp8 = (tmp10 > (int)0);
					}
					else{
						HX_STACK_LINE(89)
						tmp8 = false;
					}
					HX_STACK_LINE(89)
					if ((tmp8)){
						HX_STACK_LINE(89)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(89)
						cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(89)
						while((true)){
							HX_STACK_LINE(89)
							bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(89)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(89)
							if ((tmp10)){
								HX_STACK_LINE(89)
								break;
							}
							HX_STACK_LINE(89)
							Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(89)
							Dynamic _handler = tmp11;		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(89)
							++(_g);
							HX_STACK_LINE(89)
							bool tmp12 = (_handler != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(89)
							if ((tmp12)){
								HX_STACK_LINE(89)
								_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
							}
						}
					}
					HX_STACK_LINE(89)
					this->dirty;
				}
				HX_STACK_LINE(89)
				Dynamic tmp3 = this->on_local_pos_change_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(89)
				hx::Throw(HX_CSTRING("Invalid field access on null object")) = tmp3;
				HX_STACK_LINE(89)
				Dynamic tmp4 = this->on_local_rotation_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(89)
				hx::Throw(HX_CSTRING("Invalid field access on null object")) = tmp4;
				HX_STACK_LINE(89)
				Dynamic tmp5 = this->on_local_scale_change_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(89)
				hx::Throw(HX_CSTRING("Invalid field access on null object")) = tmp5;
			}
			HX_STACK_LINE(89)
			this->local = null();
		}
		HX_STACK_LINE(90)
		bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		if ((tmp2)){
			HX_STACK_LINE(90)
			this->world = null();
		}
		else{
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				this->dirty = true;
				HX_STACK_LINE(90)
				bool tmp3 = this->dirty;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(90)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(90)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(90)
				if ((tmp4)){
					HX_STACK_LINE(90)
					bool tmp6 = this->_setup;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(90)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(90)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(90)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(90)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(90)
					tmp5 = !(tmp10);
				}
				else{
					HX_STACK_LINE(90)
					tmp5 = false;
				}
				HX_STACK_LINE(90)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(90)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(90)
				if ((tmp6)){
					HX_STACK_LINE(90)
					tmp7 = (this->_dirty_handlers != null());
				}
				else{
					HX_STACK_LINE(90)
					tmp7 = false;
				}
				HX_STACK_LINE(90)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(90)
				if ((tmp7)){
					HX_STACK_LINE(90)
					int tmp9 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(90)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(90)
					tmp8 = (tmp10 > (int)0);
				}
				else{
					HX_STACK_LINE(90)
					tmp8 = false;
				}
				HX_STACK_LINE(90)
				if ((tmp8)){
					HX_STACK_LINE(90)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(90)
					cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(90)
					while((true)){
						HX_STACK_LINE(90)
						bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(90)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(90)
						if ((tmp10)){
							HX_STACK_LINE(90)
							break;
						}
						HX_STACK_LINE(90)
						Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(90)
						Dynamic _handler = tmp11;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(90)
						++(_g);
						HX_STACK_LINE(90)
						bool tmp12 = (_handler != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(90)
						if ((tmp12)){
							HX_STACK_LINE(90)
							_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(90)
				this->dirty;
			}
			HX_STACK_LINE(90)
			this->world = null();
		}
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				this->dirty = true;
				HX_STACK_LINE(91)
				bool tmp3 = this->dirty;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(91)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(91)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(91)
				if ((tmp4)){
					HX_STACK_LINE(91)
					bool tmp6 = this->_setup;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(91)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(91)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(91)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(91)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(91)
					tmp5 = !(tmp10);
				}
				else{
					HX_STACK_LINE(91)
					tmp5 = false;
				}
				HX_STACK_LINE(91)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(91)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(91)
				if ((tmp6)){
					HX_STACK_LINE(91)
					tmp7 = (this->_dirty_handlers != null());
				}
				else{
					HX_STACK_LINE(91)
					tmp7 = false;
				}
				HX_STACK_LINE(91)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(91)
				if ((tmp7)){
					HX_STACK_LINE(91)
					int tmp9 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(91)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(91)
					tmp8 = (tmp10 > (int)0);
				}
				else{
					HX_STACK_LINE(91)
					tmp8 = false;
				}
				HX_STACK_LINE(91)
				if ((tmp8)){
					HX_STACK_LINE(91)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(91)
					cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(91)
					while((true)){
						HX_STACK_LINE(91)
						bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(91)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(91)
						if ((tmp10)){
							HX_STACK_LINE(91)
							break;
						}
						HX_STACK_LINE(91)
						Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(91)
						Dynamic _handler = tmp11;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(91)
						++(_g);
						HX_STACK_LINE(91)
						bool tmp12 = (_handler != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(91)
						if ((tmp12)){
							HX_STACK_LINE(91)
							_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(91)
				this->dirty;
			}
			HX_STACK_LINE(91)
			this->origin = null();
			HX_STACK_LINE(91)
			bool tmp3 = (this->_origin_handlers != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			if ((tmp3)){
				HX_STACK_LINE(91)
				int tmp5 = this->_origin_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(91)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(91)
				tmp4 = (tmp6 > (int)0);
			}
			else{
				HX_STACK_LINE(91)
				tmp4 = false;
			}
			HX_STACK_LINE(91)
			if ((tmp4)){
				HX_STACK_LINE(91)
				::phoenix::Vector tmp5 = this->origin;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(91)
				::phoenix::Vector _origin = tmp5;		HX_STACK_VAR(_origin,"_origin");
				HX_STACK_LINE(91)
				{
					HX_STACK_LINE(91)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(91)
					cpp::ArrayBase _g1 = this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(91)
					while((true)){
						HX_STACK_LINE(91)
						bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(91)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(91)
						if ((tmp7)){
							HX_STACK_LINE(91)
							break;
						}
						HX_STACK_LINE(91)
						Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(91)
						Dynamic _handler = tmp8;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(91)
						++(_g);
						HX_STACK_LINE(91)
						bool tmp9 = (_handler != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(91)
						if ((tmp9)){
							HX_STACK_LINE(91)
							::phoenix::Vector tmp10 = _origin;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(91)
							_handler(tmp10).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(91)
			this->origin;
		}
		HX_STACK_LINE(92)
		this->_origin_undo_matrix = null();
		HX_STACK_LINE(93)
		this->_pos_matrix = null();
		HX_STACK_LINE(94)
		this->_rotation_matrix = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,destroy,(void))

bool Transform_obj::set_dirty( bool _dirty){
	HX_STACK_FRAME("phoenix.Transform","set_dirty",0x79abdc74,"phoenix.Transform.set_dirty","phoenix/Transform.hx",98,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dirty,"_dirty")
	HX_STACK_LINE(100)
	this->dirty = _dirty;
	HX_STACK_LINE(102)
	bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	if ((tmp1)){
		HX_STACK_LINE(103)
		bool tmp3 = this->_setup;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(103)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(103)
		tmp2 = !(tmp7);
	}
	else{
		HX_STACK_LINE(102)
		tmp2 = false;
	}
	HX_STACK_LINE(102)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(102)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(102)
	if ((tmp3)){
		HX_STACK_LINE(104)
		tmp4 = (this->_dirty_handlers != null());
	}
	else{
		HX_STACK_LINE(102)
		tmp4 = false;
	}
	HX_STACK_LINE(102)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(102)
	if ((tmp4)){
		HX_STACK_LINE(105)
		int tmp6 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		tmp5 = (tmp7 > (int)0);
	}
	else{
		HX_STACK_LINE(102)
		tmp5 = false;
	}
	HX_STACK_LINE(102)
	if ((tmp5)){
		HX_STACK_LINE(107)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(107)
		while((true)){
			HX_STACK_LINE(107)
			bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(107)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			if ((tmp7)){
				HX_STACK_LINE(107)
				break;
			}
			HX_STACK_LINE(107)
			Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(107)
			Dynamic _handler = tmp8;		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(107)
			++(_g);
			HX_STACK_LINE(107)
			bool tmp9 = (_handler != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(107)
			if ((tmp9)){
				HX_STACK_LINE(107)
				_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
	HX_STACK_LINE(110)
	bool tmp6 = this->dirty;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(110)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_dirty,return )

Void Transform_obj::on_local_pos_change( ::phoenix::Vector v){
{
		HX_STACK_FRAME("phoenix.Transform","on_local_pos_change",0x565988ae,"phoenix.Transform.on_local_pos_change","phoenix/Transform.hx",115,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			this->dirty = true;
			HX_STACK_LINE(117)
			bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(117)
			bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(117)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(117)
			if ((tmp1)){
				HX_STACK_LINE(117)
				bool tmp3 = this->_setup;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(117)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(117)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(117)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(117)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(117)
				tmp2 = !(tmp7);
			}
			else{
				HX_STACK_LINE(117)
				tmp2 = false;
			}
			HX_STACK_LINE(117)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(117)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(117)
			if ((tmp3)){
				HX_STACK_LINE(117)
				tmp4 = (this->_dirty_handlers != null());
			}
			else{
				HX_STACK_LINE(117)
				tmp4 = false;
			}
			HX_STACK_LINE(117)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(117)
			if ((tmp4)){
				HX_STACK_LINE(117)
				int tmp6 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(117)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(117)
				tmp5 = (tmp7 > (int)0);
			}
			else{
				HX_STACK_LINE(117)
				tmp5 = false;
			}
			HX_STACK_LINE(117)
			if ((tmp5)){
				HX_STACK_LINE(117)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(117)
				cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(117)
				while((true)){
					HX_STACK_LINE(117)
					bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(117)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(117)
					if ((tmp7)){
						HX_STACK_LINE(117)
						break;
					}
					HX_STACK_LINE(117)
					Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(117)
					Dynamic _handler = tmp8;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(117)
					++(_g);
					HX_STACK_LINE(117)
					bool tmp9 = (_handler != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(117)
					if ((tmp9)){
						HX_STACK_LINE(117)
						_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(117)
			this->dirty;
		}
		HX_STACK_LINE(119)
		bool tmp = (this->_pos_handlers != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		if ((tmp)){
			HX_STACK_LINE(120)
			int tmp2 = this->_pos_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(120)
			int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(120)
			tmp1 = (tmp3 > (int)0);
		}
		else{
			HX_STACK_LINE(119)
			tmp1 = false;
		}
		HX_STACK_LINE(119)
		if ((tmp1)){
			HX_STACK_LINE(121)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(121)
			cpp::ArrayBase _g1 = this->_pos_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(121)
			while((true)){
				HX_STACK_LINE(121)
				bool tmp2 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(121)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(121)
				if ((tmp3)){
					HX_STACK_LINE(121)
					break;
				}
				HX_STACK_LINE(121)
				Dynamic tmp4 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(121)
				Dynamic _handler = tmp4;		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(121)
				++(_g);
				HX_STACK_LINE(121)
				bool tmp5 = (_handler != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(121)
				if ((tmp5)){
					HX_STACK_LINE(121)
					::phoenix::Vector tmp6 = v;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(121)
					_handler(tmp6).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,on_local_pos_change,(void))

Void Transform_obj::on_local_rotation_change( ::phoenix::Quaternion r){
{
		HX_STACK_FRAME("phoenix.Transform","on_local_rotation_change",0xf66797fe,"phoenix.Transform.on_local_rotation_change","phoenix/Transform.hx",126,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			this->dirty = true;
			HX_STACK_LINE(128)
			bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(128)
			bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(128)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(128)
			if ((tmp1)){
				HX_STACK_LINE(128)
				bool tmp3 = this->_setup;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(128)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(128)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(128)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(128)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(128)
				tmp2 = !(tmp7);
			}
			else{
				HX_STACK_LINE(128)
				tmp2 = false;
			}
			HX_STACK_LINE(128)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			if ((tmp3)){
				HX_STACK_LINE(128)
				tmp4 = (this->_dirty_handlers != null());
			}
			else{
				HX_STACK_LINE(128)
				tmp4 = false;
			}
			HX_STACK_LINE(128)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			if ((tmp4)){
				HX_STACK_LINE(128)
				int tmp6 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(128)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(128)
				tmp5 = (tmp7 > (int)0);
			}
			else{
				HX_STACK_LINE(128)
				tmp5 = false;
			}
			HX_STACK_LINE(128)
			if ((tmp5)){
				HX_STACK_LINE(128)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(128)
				cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(128)
				while((true)){
					HX_STACK_LINE(128)
					bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(128)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(128)
					if ((tmp7)){
						HX_STACK_LINE(128)
						break;
					}
					HX_STACK_LINE(128)
					Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(128)
					Dynamic _handler = tmp8;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(128)
					++(_g);
					HX_STACK_LINE(128)
					bool tmp9 = (_handler != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(128)
					if ((tmp9)){
						HX_STACK_LINE(128)
						_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(128)
			this->dirty;
		}
		HX_STACK_LINE(130)
		bool tmp = (this->_rotation_handlers != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		if ((tmp)){
			HX_STACK_LINE(131)
			int tmp2 = this->_rotation_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(131)
			int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(131)
			tmp1 = (tmp3 > (int)0);
		}
		else{
			HX_STACK_LINE(130)
			tmp1 = false;
		}
		HX_STACK_LINE(130)
		if ((tmp1)){
			HX_STACK_LINE(132)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			cpp::ArrayBase _g1 = this->_rotation_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(132)
			while((true)){
				HX_STACK_LINE(132)
				bool tmp2 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(132)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(132)
				if ((tmp3)){
					HX_STACK_LINE(132)
					break;
				}
				HX_STACK_LINE(132)
				Dynamic tmp4 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(132)
				Dynamic _handler = tmp4;		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(132)
				++(_g);
				HX_STACK_LINE(132)
				bool tmp5 = (_handler != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(132)
				if ((tmp5)){
					HX_STACK_LINE(132)
					::phoenix::Quaternion tmp6 = r;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(132)
					_handler(tmp6).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,on_local_rotation_change,(void))

Void Transform_obj::on_local_scale_change( ::phoenix::Vector s){
{
		HX_STACK_FRAME("phoenix.Transform","on_local_scale_change",0x02a99538,"phoenix.Transform.on_local_scale_change","phoenix/Transform.hx",137,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			this->dirty = true;
			HX_STACK_LINE(139)
			bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(139)
			bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(139)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(139)
			if ((tmp1)){
				HX_STACK_LINE(139)
				bool tmp3 = this->_setup;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(139)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(139)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(139)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(139)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(139)
				tmp2 = !(tmp7);
			}
			else{
				HX_STACK_LINE(139)
				tmp2 = false;
			}
			HX_STACK_LINE(139)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			if ((tmp3)){
				HX_STACK_LINE(139)
				tmp4 = (this->_dirty_handlers != null());
			}
			else{
				HX_STACK_LINE(139)
				tmp4 = false;
			}
			HX_STACK_LINE(139)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			if ((tmp4)){
				HX_STACK_LINE(139)
				int tmp6 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(139)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(139)
				tmp5 = (tmp7 > (int)0);
			}
			else{
				HX_STACK_LINE(139)
				tmp5 = false;
			}
			HX_STACK_LINE(139)
			if ((tmp5)){
				HX_STACK_LINE(139)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(139)
				cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(139)
				while((true)){
					HX_STACK_LINE(139)
					bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(139)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(139)
					if ((tmp7)){
						HX_STACK_LINE(139)
						break;
					}
					HX_STACK_LINE(139)
					Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(139)
					Dynamic _handler = tmp8;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(139)
					++(_g);
					HX_STACK_LINE(139)
					bool tmp9 = (_handler != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(139)
					if ((tmp9)){
						HX_STACK_LINE(139)
						_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(139)
			this->dirty;
		}
		HX_STACK_LINE(141)
		bool tmp = (this->_scale_handlers != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		if ((tmp)){
			HX_STACK_LINE(142)
			int tmp2 = this->_scale_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(142)
			int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(142)
			tmp1 = (tmp3 > (int)0);
		}
		else{
			HX_STACK_LINE(141)
			tmp1 = false;
		}
		HX_STACK_LINE(141)
		if ((tmp1)){
			HX_STACK_LINE(143)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(143)
			cpp::ArrayBase _g1 = this->_scale_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(143)
			while((true)){
				HX_STACK_LINE(143)
				bool tmp2 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(143)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(143)
				if ((tmp3)){
					HX_STACK_LINE(143)
					break;
				}
				HX_STACK_LINE(143)
				Dynamic tmp4 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(143)
				Dynamic _handler = tmp4;		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(143)
				++(_g);
				HX_STACK_LINE(143)
				bool tmp5 = (_handler != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(143)
				if ((tmp5)){
					HX_STACK_LINE(143)
					::phoenix::Vector tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(143)
					_handler(tmp6).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,on_local_scale_change,(void))

Void Transform_obj::on_parent_cleaned( ::phoenix::Transform p){
{
		HX_STACK_FRAME("phoenix.Transform","on_parent_cleaned",0x89be7432,"phoenix.Transform.on_parent_cleaned","phoenix/Transform.hx",150,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(150)
		this->dirty = true;
		HX_STACK_LINE(150)
		bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		if ((tmp1)){
			HX_STACK_LINE(150)
			bool tmp3 = this->_setup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(150)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			tmp2 = !(tmp7);
		}
		else{
			HX_STACK_LINE(150)
			tmp2 = false;
		}
		HX_STACK_LINE(150)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		if ((tmp3)){
			HX_STACK_LINE(150)
			tmp4 = (this->_dirty_handlers != null());
		}
		else{
			HX_STACK_LINE(150)
			tmp4 = false;
		}
		HX_STACK_LINE(150)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		if ((tmp4)){
			HX_STACK_LINE(150)
			int tmp6 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			tmp5 = (tmp7 > (int)0);
		}
		else{
			HX_STACK_LINE(150)
			tmp5 = false;
		}
		HX_STACK_LINE(150)
		if ((tmp5)){
			HX_STACK_LINE(150)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(150)
			cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(150)
			while((true)){
				HX_STACK_LINE(150)
				bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(150)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(150)
				if ((tmp7)){
					HX_STACK_LINE(150)
					break;
				}
				HX_STACK_LINE(150)
				Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(150)
				Dynamic _handler = tmp8;		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(150)
				++(_g);
				HX_STACK_LINE(150)
				bool tmp9 = (_handler != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(150)
				if ((tmp9)){
					HX_STACK_LINE(150)
					_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
			}
		}
		HX_STACK_LINE(150)
		this->dirty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,on_parent_cleaned,(void))

::phoenix::Spatial Transform_obj::get_local( ){
	HX_STACK_FRAME("phoenix.Transform","get_local",0x357b69c1,"phoenix.Transform.get_local","phoenix/Transform.hx",154,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	::phoenix::Spatial tmp = this->local;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_local,return )

::phoenix::Spatial Transform_obj::set_local( ::phoenix::Spatial l){
	HX_STACK_FRAME("phoenix.Transform","set_local",0x18cc55cd,"phoenix.Transform.set_local","phoenix/Transform.hx",160,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(162)
	bool tmp = (l != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			this->dirty = true;
			HX_STACK_LINE(164)
			bool tmp1 = this->dirty;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(164)
			bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(164)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			if ((tmp2)){
				HX_STACK_LINE(164)
				bool tmp4 = this->_setup;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(164)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(164)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(164)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(164)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(164)
				tmp3 = !(tmp8);
			}
			else{
				HX_STACK_LINE(164)
				tmp3 = false;
			}
			HX_STACK_LINE(164)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			if ((tmp4)){
				HX_STACK_LINE(164)
				tmp5 = (this->_dirty_handlers != null());
			}
			else{
				HX_STACK_LINE(164)
				tmp5 = false;
			}
			HX_STACK_LINE(164)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			if ((tmp5)){
				HX_STACK_LINE(164)
				int tmp7 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(164)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(164)
				tmp6 = (tmp8 > (int)0);
			}
			else{
				HX_STACK_LINE(164)
				tmp6 = false;
			}
			HX_STACK_LINE(164)
			if ((tmp6)){
				HX_STACK_LINE(164)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(164)
				cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(164)
				while((true)){
					HX_STACK_LINE(164)
					bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(164)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(164)
					if ((tmp8)){
						HX_STACK_LINE(164)
						break;
					}
					HX_STACK_LINE(164)
					Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(164)
					Dynamic _handler = tmp9;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(164)
					++(_g);
					HX_STACK_LINE(164)
					bool tmp10 = (_handler != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(164)
					if ((tmp10)){
						HX_STACK_LINE(164)
						_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(164)
			this->dirty;
		}
		HX_STACK_LINE(166)
		Dynamic tmp1 = this->on_local_pos_change_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		l->pos_changed = tmp1;
		HX_STACK_LINE(167)
		Dynamic tmp2 = this->on_local_rotation_change_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		l->rotation_changed = tmp2;
		HX_STACK_LINE(168)
		Dynamic tmp3 = this->on_local_scale_change_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		l->scale_changed = tmp3;
	}
	HX_STACK_LINE(172)
	::phoenix::Spatial tmp1 = this->local = l;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_local,return )

::phoenix::Spatial Transform_obj::get_world( ){
	HX_STACK_FRAME("phoenix.Transform","get_world",0x8aef36a8,"phoenix.Transform.get_world","phoenix/Transform.hx",177,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	bool tmp = this->_destroying;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	if ((tmp1)){
		HX_STACK_LINE(180)
		::phoenix::Transform tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		if ((tmp3)){
			HX_STACK_LINE(180)
			::phoenix::Transform tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(180)
			bool tmp5 = tmp4->dirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(180)
			if ((tmp5)){
				HX_STACK_LINE(180)
				::phoenix::Transform tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(180)
				::phoenix::Transform _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(180)
				bool tmp7 = _this->dirty;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(180)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(180)
				if ((tmp8)){
					HX_STACK_LINE(180)
					Dynamic();
				}
				else{
					HX_STACK_LINE(180)
					_this->_cleaning = true;
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = _this->_pos_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(180)
							e[(int)0] = (int)1;
							HX_STACK_LINE(180)
							e[(int)4] = (int)0;
							HX_STACK_LINE(180)
							e[(int)8] = (int)0;
							HX_STACK_LINE(180)
							::phoenix::Vector tmp9 = _this->local->pos;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(180)
							Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(180)
							e[(int)12] = tmp10;
							HX_STACK_LINE(180)
							e[(int)1] = (int)0;
							HX_STACK_LINE(180)
							e[(int)5] = (int)1;
							HX_STACK_LINE(180)
							e[(int)9] = (int)0;
							HX_STACK_LINE(180)
							::phoenix::Vector tmp11 = _this->local->pos;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(180)
							Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(180)
							e[(int)13] = tmp12;
							HX_STACK_LINE(180)
							e[(int)2] = (int)0;
							HX_STACK_LINE(180)
							e[(int)6] = (int)0;
							HX_STACK_LINE(180)
							e[(int)10] = (int)1;
							HX_STACK_LINE(180)
							::phoenix::Vector tmp13 = _this->local->pos;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(180)
							Float tmp14 = tmp13->z;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(180)
							e[(int)14] = tmp14;
							HX_STACK_LINE(180)
							e[(int)3] = (int)0;
							HX_STACK_LINE(180)
							e[(int)7] = (int)0;
							HX_STACK_LINE(180)
							e[(int)11] = (int)0;
							HX_STACK_LINE(180)
							e[(int)15] = (int)1;
							HX_STACK_LINE(180)
							_this1;
						}
						HX_STACK_LINE(180)
						_this1;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = _this->_rotation_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						::phoenix::Quaternion tmp9 = _this->local->rotation;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(180)
						::phoenix::Quaternion q = tmp9;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(180)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(180)
						Float tmp10 = (q->x + q->x);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(180)
						Float x2 = tmp10;		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(180)
						Float tmp11 = (q->y + q->y);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(180)
						Float y2 = tmp11;		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(180)
						Float tmp12 = (q->z + q->z);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						Float z2 = tmp12;		HX_STACK_VAR(z2,"z2");
						HX_STACK_LINE(180)
						Float tmp13 = (q->x * x2);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						Float xx = tmp13;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(180)
						Float tmp14 = (q->x * y2);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						Float xy = tmp14;		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(180)
						Float tmp15 = (q->x * z2);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(180)
						Float xz = tmp15;		HX_STACK_VAR(xz,"xz");
						HX_STACK_LINE(180)
						Float tmp16 = (q->y * y2);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(180)
						Float yy = tmp16;		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(180)
						Float tmp17 = (q->y * z2);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(180)
						Float yz = tmp17;		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(180)
						Float tmp18 = (q->z * z2);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(180)
						Float zz = tmp18;		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(180)
						Float tmp19 = (q->w * x2);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(180)
						Float wx = tmp19;		HX_STACK_VAR(wx,"wx");
						HX_STACK_LINE(180)
						Float tmp20 = (q->w * y2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(180)
						Float wy = tmp20;		HX_STACK_VAR(wy,"wy");
						HX_STACK_LINE(180)
						Float tmp21 = (q->w * z2);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(180)
						Float wz = tmp21;		HX_STACK_VAR(wz,"wz");
						HX_STACK_LINE(180)
						Float tmp22 = (yy + zz);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(180)
						Float tmp23 = ((int)1 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(180)
						te[(int)0] = tmp23;
						HX_STACK_LINE(180)
						Float tmp24 = (xy - wz);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(180)
						te[(int)4] = tmp24;
						HX_STACK_LINE(180)
						Float tmp25 = (xz + wy);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(180)
						te[(int)8] = tmp25;
						HX_STACK_LINE(180)
						Float tmp26 = (xy + wz);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(180)
						te[(int)1] = tmp26;
						HX_STACK_LINE(180)
						Float tmp27 = (xx + zz);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(180)
						Float tmp28 = ((int)1 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(180)
						te[(int)5] = tmp28;
						HX_STACK_LINE(180)
						Float tmp29 = (yz - wx);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(180)
						te[(int)9] = tmp29;
						HX_STACK_LINE(180)
						Float tmp30 = (xz - wy);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(180)
						te[(int)2] = tmp30;
						HX_STACK_LINE(180)
						Float tmp31 = (yz + wx);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(180)
						te[(int)6] = tmp31;
						HX_STACK_LINE(180)
						Float tmp32 = (xx + yy);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(180)
						Float tmp33 = ((int)1 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(180)
						te[(int)10] = tmp33;
						HX_STACK_LINE(180)
						te[(int)3] = (int)0;
						HX_STACK_LINE(180)
						te[(int)7] = (int)0;
						HX_STACK_LINE(180)
						te[(int)11] = (int)0;
						HX_STACK_LINE(180)
						te[(int)12] = (int)0;
						HX_STACK_LINE(180)
						te[(int)13] = (int)0;
						HX_STACK_LINE(180)
						te[(int)14] = (int)0;
						HX_STACK_LINE(180)
						te[(int)15] = (int)1;
						HX_STACK_LINE(180)
						_this1;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = _this->_origin_undo_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(180)
							e[(int)0] = (int)1;
							HX_STACK_LINE(180)
							e[(int)4] = (int)0;
							HX_STACK_LINE(180)
							e[(int)8] = (int)0;
							HX_STACK_LINE(180)
							Float tmp9 = _this->origin->x;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(180)
							Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(180)
							e[(int)12] = tmp10;
							HX_STACK_LINE(180)
							e[(int)1] = (int)0;
							HX_STACK_LINE(180)
							e[(int)5] = (int)1;
							HX_STACK_LINE(180)
							e[(int)9] = (int)0;
							HX_STACK_LINE(180)
							Float tmp11 = _this->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(180)
							Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(180)
							e[(int)13] = tmp12;
							HX_STACK_LINE(180)
							e[(int)2] = (int)0;
							HX_STACK_LINE(180)
							e[(int)6] = (int)0;
							HX_STACK_LINE(180)
							e[(int)10] = (int)1;
							HX_STACK_LINE(180)
							Float tmp13 = _this->origin->z;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(180)
							Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(180)
							e[(int)14] = tmp14;
							HX_STACK_LINE(180)
							e[(int)3] = (int)0;
							HX_STACK_LINE(180)
							e[(int)7] = (int)0;
							HX_STACK_LINE(180)
							e[(int)11] = (int)0;
							HX_STACK_LINE(180)
							e[(int)15] = (int)1;
							HX_STACK_LINE(180)
							_this1;
						}
						HX_STACK_LINE(180)
						_this1;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix tmp9 = _this->local->matrix;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = tmp9;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(180)
							e[(int)0] = (int)1;
							HX_STACK_LINE(180)
							e[(int)4] = (int)0;
							HX_STACK_LINE(180)
							e[(int)8] = (int)0;
							HX_STACK_LINE(180)
							Float tmp10 = _this->origin->x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(180)
							e[(int)12] = tmp10;
							HX_STACK_LINE(180)
							e[(int)1] = (int)0;
							HX_STACK_LINE(180)
							e[(int)5] = (int)1;
							HX_STACK_LINE(180)
							e[(int)9] = (int)0;
							HX_STACK_LINE(180)
							Float tmp11 = _this->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(180)
							e[(int)13] = tmp11;
							HX_STACK_LINE(180)
							e[(int)2] = (int)0;
							HX_STACK_LINE(180)
							e[(int)6] = (int)0;
							HX_STACK_LINE(180)
							e[(int)10] = (int)1;
							HX_STACK_LINE(180)
							Float tmp12 = _this->origin->z;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(180)
							e[(int)14] = tmp12;
							HX_STACK_LINE(180)
							e[(int)3] = (int)0;
							HX_STACK_LINE(180)
							e[(int)7] = (int)0;
							HX_STACK_LINE(180)
							e[(int)11] = (int)0;
							HX_STACK_LINE(180)
							e[(int)15] = (int)1;
							HX_STACK_LINE(180)
							_this1;
						}
						HX_STACK_LINE(180)
						_this1;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix tmp9 = _this->local->matrix;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = tmp9;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(180)
							Array< Float > be = _this->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(180)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(180)
							Float tmp10 = ae->__get((int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(180)
							Float a11 = tmp10;		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(180)
							Float tmp11 = ae->__get((int)4);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(180)
							Float a12 = tmp11;		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(180)
							Float tmp12 = ae->__get((int)8);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(180)
							Float a13 = tmp12;		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(180)
							Float tmp13 = ae->__get((int)12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(180)
							Float a14 = tmp13;		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(180)
							Float tmp14 = ae->__get((int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(180)
							Float a21 = tmp14;		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(180)
							Float tmp15 = ae->__get((int)5);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(180)
							Float a22 = tmp15;		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(180)
							Float tmp16 = ae->__get((int)9);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(180)
							Float a23 = tmp16;		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(180)
							Float tmp17 = ae->__get((int)13);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(180)
							Float a24 = tmp17;		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(180)
							Float tmp18 = ae->__get((int)2);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(180)
							Float a31 = tmp18;		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(180)
							Float tmp19 = ae->__get((int)6);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(180)
							Float a32 = tmp19;		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(180)
							Float tmp20 = ae->__get((int)10);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(180)
							Float a33 = tmp20;		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(180)
							Float tmp21 = ae->__get((int)14);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(180)
							Float a34 = tmp21;		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(180)
							Float tmp22 = ae->__get((int)3);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(180)
							Float a41 = tmp22;		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(180)
							Float tmp23 = ae->__get((int)7);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(180)
							Float a42 = tmp23;		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(180)
							Float tmp24 = ae->__get((int)11);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(180)
							Float a43 = tmp24;		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(180)
							Float tmp25 = ae->__get((int)15);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(180)
							Float a44 = tmp25;		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(180)
							Float tmp26 = be->__get((int)0);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(180)
							Float b11 = tmp26;		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(180)
							Float tmp27 = be->__get((int)4);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(180)
							Float b12 = tmp27;		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(180)
							Float tmp28 = be->__get((int)8);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(180)
							Float b13 = tmp28;		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(180)
							Float tmp29 = be->__get((int)12);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(180)
							Float b14 = tmp29;		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(180)
							Float tmp30 = be->__get((int)1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(180)
							Float b21 = tmp30;		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(180)
							Float tmp31 = be->__get((int)5);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(180)
							Float b22 = tmp31;		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(180)
							Float tmp32 = be->__get((int)9);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(180)
							Float b23 = tmp32;		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(180)
							Float tmp33 = be->__get((int)13);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(180)
							Float b24 = tmp33;		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(180)
							Float tmp34 = be->__get((int)2);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(180)
							Float b31 = tmp34;		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(180)
							Float tmp35 = be->__get((int)6);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(180)
							Float b32 = tmp35;		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(180)
							Float tmp36 = be->__get((int)10);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(180)
							Float b33 = tmp36;		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(180)
							Float tmp37 = be->__get((int)14);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(180)
							Float b34 = tmp37;		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(180)
							Float tmp38 = be->__get((int)3);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(180)
							Float b41 = tmp38;		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(180)
							Float tmp39 = be->__get((int)7);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(180)
							Float b42 = tmp39;		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(180)
							Float tmp40 = be->__get((int)11);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(180)
							Float b43 = tmp40;		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(180)
							Float tmp41 = be->__get((int)15);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(180)
							Float b44 = tmp41;		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(180)
							Float tmp42 = (a11 * b11);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(180)
							Float tmp43 = (a12 * b21);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(180)
							Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(180)
							Float tmp45 = (a13 * b31);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(180)
							Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(180)
							Float tmp47 = (a14 * b41);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(180)
							Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(180)
							te[(int)0] = tmp48;
							HX_STACK_LINE(180)
							Float tmp49 = (a11 * b12);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(180)
							Float tmp50 = (a12 * b22);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(180)
							Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(180)
							Float tmp52 = (a13 * b32);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(180)
							Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(180)
							Float tmp54 = (a14 * b42);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(180)
							Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(180)
							te[(int)4] = tmp55;
							HX_STACK_LINE(180)
							Float tmp56 = (a11 * b13);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(180)
							Float tmp57 = (a12 * b23);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(180)
							Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(180)
							Float tmp59 = (a13 * b33);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(180)
							Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(180)
							Float tmp61 = (a14 * b43);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(180)
							Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(180)
							te[(int)8] = tmp62;
							HX_STACK_LINE(180)
							Float tmp63 = (a11 * b14);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(180)
							Float tmp64 = (a12 * b24);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(180)
							Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(180)
							Float tmp66 = (a13 * b34);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(180)
							Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(180)
							Float tmp68 = (a14 * b44);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(180)
							Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(180)
							te[(int)12] = tmp69;
							HX_STACK_LINE(180)
							Float tmp70 = (a21 * b11);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(180)
							Float tmp71 = (a22 * b21);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(180)
							Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(180)
							Float tmp73 = (a23 * b31);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(180)
							Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(180)
							Float tmp75 = (a24 * b41);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(180)
							Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(180)
							te[(int)1] = tmp76;
							HX_STACK_LINE(180)
							Float tmp77 = (a21 * b12);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(180)
							Float tmp78 = (a22 * b22);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(180)
							Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(180)
							Float tmp80 = (a23 * b32);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(180)
							Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(180)
							Float tmp82 = (a24 * b42);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(180)
							Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(180)
							te[(int)5] = tmp83;
							HX_STACK_LINE(180)
							Float tmp84 = (a21 * b13);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(180)
							Float tmp85 = (a22 * b23);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(180)
							Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(180)
							Float tmp87 = (a23 * b33);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(180)
							Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(180)
							Float tmp89 = (a24 * b43);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(180)
							Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(180)
							te[(int)9] = tmp90;
							HX_STACK_LINE(180)
							Float tmp91 = (a21 * b14);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(180)
							Float tmp92 = (a22 * b24);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(180)
							Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(180)
							Float tmp94 = (a23 * b34);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(180)
							Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(180)
							Float tmp96 = (a24 * b44);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(180)
							Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(180)
							te[(int)13] = tmp97;
							HX_STACK_LINE(180)
							Float tmp98 = (a31 * b11);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(180)
							Float tmp99 = (a32 * b21);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(180)
							Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(180)
							Float tmp101 = (a33 * b31);		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(180)
							Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(180)
							Float tmp103 = (a34 * b41);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(180)
							Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(180)
							te[(int)2] = tmp104;
							HX_STACK_LINE(180)
							Float tmp105 = (a31 * b12);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(180)
							Float tmp106 = (a32 * b22);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(180)
							Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(180)
							Float tmp108 = (a33 * b32);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(180)
							Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(180)
							Float tmp110 = (a34 * b42);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(180)
							Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(180)
							te[(int)6] = tmp111;
							HX_STACK_LINE(180)
							Float tmp112 = (a31 * b13);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(180)
							Float tmp113 = (a32 * b23);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(180)
							Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(180)
							Float tmp115 = (a33 * b33);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(180)
							Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(180)
							Float tmp117 = (a34 * b43);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(180)
							Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(180)
							te[(int)10] = tmp118;
							HX_STACK_LINE(180)
							Float tmp119 = (a31 * b14);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(180)
							Float tmp120 = (a32 * b24);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(180)
							Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(180)
							Float tmp122 = (a33 * b34);		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(180)
							Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(180)
							Float tmp124 = (a34 * b44);		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(180)
							Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(180)
							te[(int)14] = tmp125;
							HX_STACK_LINE(180)
							Float tmp126 = (a41 * b11);		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(180)
							Float tmp127 = (a42 * b21);		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(180)
							Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
							HX_STACK_LINE(180)
							Float tmp129 = (a43 * b31);		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(180)
							Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(180)
							Float tmp131 = (a44 * b41);		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(180)
							Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(180)
							te[(int)3] = tmp132;
							HX_STACK_LINE(180)
							Float tmp133 = (a41 * b12);		HX_STACK_VAR(tmp133,"tmp133");
							HX_STACK_LINE(180)
							Float tmp134 = (a42 * b22);		HX_STACK_VAR(tmp134,"tmp134");
							HX_STACK_LINE(180)
							Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
							HX_STACK_LINE(180)
							Float tmp136 = (a43 * b32);		HX_STACK_VAR(tmp136,"tmp136");
							HX_STACK_LINE(180)
							Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(180)
							Float tmp138 = (a44 * b42);		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(180)
							Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(180)
							te[(int)7] = tmp139;
							HX_STACK_LINE(180)
							Float tmp140 = (a41 * b13);		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(180)
							Float tmp141 = (a42 * b23);		HX_STACK_VAR(tmp141,"tmp141");
							HX_STACK_LINE(180)
							Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
							HX_STACK_LINE(180)
							Float tmp143 = (a43 * b33);		HX_STACK_VAR(tmp143,"tmp143");
							HX_STACK_LINE(180)
							Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
							HX_STACK_LINE(180)
							Float tmp145 = (a44 * b43);		HX_STACK_VAR(tmp145,"tmp145");
							HX_STACK_LINE(180)
							Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
							HX_STACK_LINE(180)
							te[(int)11] = tmp146;
							HX_STACK_LINE(180)
							Float tmp147 = (a41 * b14);		HX_STACK_VAR(tmp147,"tmp147");
							HX_STACK_LINE(180)
							Float tmp148 = (a42 * b24);		HX_STACK_VAR(tmp148,"tmp148");
							HX_STACK_LINE(180)
							Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
							HX_STACK_LINE(180)
							Float tmp150 = (a43 * b34);		HX_STACK_VAR(tmp150,"tmp150");
							HX_STACK_LINE(180)
							Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
							HX_STACK_LINE(180)
							Float tmp152 = (a44 * b44);		HX_STACK_VAR(tmp152,"tmp152");
							HX_STACK_LINE(180)
							Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
							HX_STACK_LINE(180)
							te[(int)15] = tmp153;
							HX_STACK_LINE(180)
							_this1;
						}
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix tmp9 = _this->local->matrix;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = tmp9;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						::phoenix::Vector tmp10 = _this->local->scale;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(180)
						::phoenix::Vector _v = tmp10;		HX_STACK_VAR(_v,"_v");
						HX_STACK_LINE(180)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(180)
						Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(180)
						Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(180)
						Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(180)
						Float tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)0],tmp11);
						HX_STACK_LINE(180)
						Float tmp12 = _y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)4],tmp12);
						HX_STACK_LINE(180)
						Float tmp13 = _z;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)8],tmp13);
						HX_STACK_LINE(180)
						Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)1],tmp14);
						HX_STACK_LINE(180)
						Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)5],tmp15);
						HX_STACK_LINE(180)
						Float tmp16 = _z;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)9],tmp16);
						HX_STACK_LINE(180)
						Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)2],tmp17);
						HX_STACK_LINE(180)
						Float tmp18 = _y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)6],tmp18);
						HX_STACK_LINE(180)
						Float tmp19 = _z;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)10],tmp19);
						HX_STACK_LINE(180)
						Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)3],tmp20);
						HX_STACK_LINE(180)
						Float tmp21 = _y;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)7],tmp21);
						HX_STACK_LINE(180)
						Float tmp22 = _z;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(180)
						hx::MultEq(te[(int)11],tmp22);
						HX_STACK_LINE(180)
						_this1;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix tmp9 = _this->local->matrix;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = tmp9;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						::phoenix::Vector tmp10 = _this->local->pos;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(180)
						::phoenix::Vector _v = tmp10;		HX_STACK_VAR(_v,"_v");
						HX_STACK_LINE(180)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(180)
						Float tmp11 = _v->x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(180)
						te[(int)12] = tmp11;
						HX_STACK_LINE(180)
						Float tmp12 = _v->y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						te[(int)13] = tmp12;
						HX_STACK_LINE(180)
						Float tmp13 = _v->z;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						te[(int)14] = tmp13;
						HX_STACK_LINE(180)
						_this1;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix tmp9 = _this->local->matrix;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = tmp9;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(180)
							Array< Float > be = _this->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(180)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(180)
							Float tmp10 = ae->__get((int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(180)
							Float a11 = tmp10;		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(180)
							Float tmp11 = ae->__get((int)4);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(180)
							Float a12 = tmp11;		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(180)
							Float tmp12 = ae->__get((int)8);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(180)
							Float a13 = tmp12;		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(180)
							Float tmp13 = ae->__get((int)12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(180)
							Float a14 = tmp13;		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(180)
							Float tmp14 = ae->__get((int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(180)
							Float a21 = tmp14;		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(180)
							Float tmp15 = ae->__get((int)5);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(180)
							Float a22 = tmp15;		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(180)
							Float tmp16 = ae->__get((int)9);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(180)
							Float a23 = tmp16;		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(180)
							Float tmp17 = ae->__get((int)13);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(180)
							Float a24 = tmp17;		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(180)
							Float tmp18 = ae->__get((int)2);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(180)
							Float a31 = tmp18;		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(180)
							Float tmp19 = ae->__get((int)6);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(180)
							Float a32 = tmp19;		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(180)
							Float tmp20 = ae->__get((int)10);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(180)
							Float a33 = tmp20;		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(180)
							Float tmp21 = ae->__get((int)14);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(180)
							Float a34 = tmp21;		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(180)
							Float tmp22 = ae->__get((int)3);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(180)
							Float a41 = tmp22;		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(180)
							Float tmp23 = ae->__get((int)7);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(180)
							Float a42 = tmp23;		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(180)
							Float tmp24 = ae->__get((int)11);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(180)
							Float a43 = tmp24;		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(180)
							Float tmp25 = ae->__get((int)15);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(180)
							Float a44 = tmp25;		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(180)
							Float tmp26 = be->__get((int)0);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(180)
							Float b11 = tmp26;		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(180)
							Float tmp27 = be->__get((int)4);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(180)
							Float b12 = tmp27;		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(180)
							Float tmp28 = be->__get((int)8);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(180)
							Float b13 = tmp28;		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(180)
							Float tmp29 = be->__get((int)12);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(180)
							Float b14 = tmp29;		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(180)
							Float tmp30 = be->__get((int)1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(180)
							Float b21 = tmp30;		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(180)
							Float tmp31 = be->__get((int)5);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(180)
							Float b22 = tmp31;		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(180)
							Float tmp32 = be->__get((int)9);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(180)
							Float b23 = tmp32;		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(180)
							Float tmp33 = be->__get((int)13);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(180)
							Float b24 = tmp33;		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(180)
							Float tmp34 = be->__get((int)2);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(180)
							Float b31 = tmp34;		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(180)
							Float tmp35 = be->__get((int)6);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(180)
							Float b32 = tmp35;		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(180)
							Float tmp36 = be->__get((int)10);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(180)
							Float b33 = tmp36;		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(180)
							Float tmp37 = be->__get((int)14);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(180)
							Float b34 = tmp37;		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(180)
							Float tmp38 = be->__get((int)3);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(180)
							Float b41 = tmp38;		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(180)
							Float tmp39 = be->__get((int)7);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(180)
							Float b42 = tmp39;		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(180)
							Float tmp40 = be->__get((int)11);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(180)
							Float b43 = tmp40;		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(180)
							Float tmp41 = be->__get((int)15);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(180)
							Float b44 = tmp41;		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(180)
							Float tmp42 = (a11 * b11);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(180)
							Float tmp43 = (a12 * b21);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(180)
							Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(180)
							Float tmp45 = (a13 * b31);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(180)
							Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(180)
							Float tmp47 = (a14 * b41);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(180)
							Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(180)
							te[(int)0] = tmp48;
							HX_STACK_LINE(180)
							Float tmp49 = (a11 * b12);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(180)
							Float tmp50 = (a12 * b22);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(180)
							Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(180)
							Float tmp52 = (a13 * b32);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(180)
							Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(180)
							Float tmp54 = (a14 * b42);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(180)
							Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(180)
							te[(int)4] = tmp55;
							HX_STACK_LINE(180)
							Float tmp56 = (a11 * b13);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(180)
							Float tmp57 = (a12 * b23);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(180)
							Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(180)
							Float tmp59 = (a13 * b33);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(180)
							Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(180)
							Float tmp61 = (a14 * b43);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(180)
							Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(180)
							te[(int)8] = tmp62;
							HX_STACK_LINE(180)
							Float tmp63 = (a11 * b14);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(180)
							Float tmp64 = (a12 * b24);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(180)
							Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(180)
							Float tmp66 = (a13 * b34);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(180)
							Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(180)
							Float tmp68 = (a14 * b44);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(180)
							Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(180)
							te[(int)12] = tmp69;
							HX_STACK_LINE(180)
							Float tmp70 = (a21 * b11);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(180)
							Float tmp71 = (a22 * b21);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(180)
							Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(180)
							Float tmp73 = (a23 * b31);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(180)
							Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(180)
							Float tmp75 = (a24 * b41);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(180)
							Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(180)
							te[(int)1] = tmp76;
							HX_STACK_LINE(180)
							Float tmp77 = (a21 * b12);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(180)
							Float tmp78 = (a22 * b22);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(180)
							Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(180)
							Float tmp80 = (a23 * b32);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(180)
							Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(180)
							Float tmp82 = (a24 * b42);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(180)
							Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(180)
							te[(int)5] = tmp83;
							HX_STACK_LINE(180)
							Float tmp84 = (a21 * b13);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(180)
							Float tmp85 = (a22 * b23);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(180)
							Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(180)
							Float tmp87 = (a23 * b33);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(180)
							Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(180)
							Float tmp89 = (a24 * b43);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(180)
							Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(180)
							te[(int)9] = tmp90;
							HX_STACK_LINE(180)
							Float tmp91 = (a21 * b14);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(180)
							Float tmp92 = (a22 * b24);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(180)
							Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(180)
							Float tmp94 = (a23 * b34);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(180)
							Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(180)
							Float tmp96 = (a24 * b44);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(180)
							Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(180)
							te[(int)13] = tmp97;
							HX_STACK_LINE(180)
							Float tmp98 = (a31 * b11);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(180)
							Float tmp99 = (a32 * b21);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(180)
							Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(180)
							Float tmp101 = (a33 * b31);		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(180)
							Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(180)
							Float tmp103 = (a34 * b41);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(180)
							Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(180)
							te[(int)2] = tmp104;
							HX_STACK_LINE(180)
							Float tmp105 = (a31 * b12);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(180)
							Float tmp106 = (a32 * b22);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(180)
							Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(180)
							Float tmp108 = (a33 * b32);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(180)
							Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(180)
							Float tmp110 = (a34 * b42);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(180)
							Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(180)
							te[(int)6] = tmp111;
							HX_STACK_LINE(180)
							Float tmp112 = (a31 * b13);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(180)
							Float tmp113 = (a32 * b23);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(180)
							Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(180)
							Float tmp115 = (a33 * b33);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(180)
							Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(180)
							Float tmp117 = (a34 * b43);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(180)
							Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(180)
							te[(int)10] = tmp118;
							HX_STACK_LINE(180)
							Float tmp119 = (a31 * b14);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(180)
							Float tmp120 = (a32 * b24);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(180)
							Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(180)
							Float tmp122 = (a33 * b34);		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(180)
							Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(180)
							Float tmp124 = (a34 * b44);		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(180)
							Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(180)
							te[(int)14] = tmp125;
							HX_STACK_LINE(180)
							Float tmp126 = (a41 * b11);		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(180)
							Float tmp127 = (a42 * b21);		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(180)
							Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
							HX_STACK_LINE(180)
							Float tmp129 = (a43 * b31);		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(180)
							Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(180)
							Float tmp131 = (a44 * b41);		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(180)
							Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(180)
							te[(int)3] = tmp132;
							HX_STACK_LINE(180)
							Float tmp133 = (a41 * b12);		HX_STACK_VAR(tmp133,"tmp133");
							HX_STACK_LINE(180)
							Float tmp134 = (a42 * b22);		HX_STACK_VAR(tmp134,"tmp134");
							HX_STACK_LINE(180)
							Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
							HX_STACK_LINE(180)
							Float tmp136 = (a43 * b32);		HX_STACK_VAR(tmp136,"tmp136");
							HX_STACK_LINE(180)
							Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(180)
							Float tmp138 = (a44 * b42);		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(180)
							Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(180)
							te[(int)7] = tmp139;
							HX_STACK_LINE(180)
							Float tmp140 = (a41 * b13);		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(180)
							Float tmp141 = (a42 * b23);		HX_STACK_VAR(tmp141,"tmp141");
							HX_STACK_LINE(180)
							Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
							HX_STACK_LINE(180)
							Float tmp143 = (a43 * b33);		HX_STACK_VAR(tmp143,"tmp143");
							HX_STACK_LINE(180)
							Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
							HX_STACK_LINE(180)
							Float tmp145 = (a44 * b43);		HX_STACK_VAR(tmp145,"tmp145");
							HX_STACK_LINE(180)
							Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
							HX_STACK_LINE(180)
							te[(int)11] = tmp146;
							HX_STACK_LINE(180)
							Float tmp147 = (a41 * b14);		HX_STACK_VAR(tmp147,"tmp147");
							HX_STACK_LINE(180)
							Float tmp148 = (a42 * b24);		HX_STACK_VAR(tmp148,"tmp148");
							HX_STACK_LINE(180)
							Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
							HX_STACK_LINE(180)
							Float tmp150 = (a43 * b34);		HX_STACK_VAR(tmp150,"tmp150");
							HX_STACK_LINE(180)
							Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
							HX_STACK_LINE(180)
							Float tmp152 = (a44 * b44);		HX_STACK_VAR(tmp152,"tmp152");
							HX_STACK_LINE(180)
							Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
							HX_STACK_LINE(180)
							te[(int)15] = tmp153;
							HX_STACK_LINE(180)
							_this1;
						}
					}
					HX_STACK_LINE(180)
					bool tmp9 = (_this->parent != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(180)
					if ((tmp9)){
						HX_STACK_LINE(180)
						::phoenix::Spatial tmp10 = _this->get_world();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(180)
						::phoenix::Spatial _this1 = tmp10;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						::phoenix::Matrix tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Matrix tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::phoenix::Spatial tmp13 = _this->get_world();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(180)
								::phoenix::Spatial _this2 = tmp13;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(180)
								tmp12 = _this2->matrix;
							}
							HX_STACK_LINE(180)
							::phoenix::Matrix _this2 = tmp12;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(180)
							::phoenix::Matrix tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::phoenix::Spatial tmp14 = _this->parent->get_world();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(180)
								::phoenix::Spatial _this3 = tmp14;		HX_STACK_VAR(_this3,"_this3");
								HX_STACK_LINE(180)
								tmp13 = _this3->matrix;
							}
							HX_STACK_LINE(180)
							::phoenix::Matrix _a = tmp13;		HX_STACK_VAR(_a,"_a");
							HX_STACK_LINE(180)
							Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(180)
							::phoenix::Matrix tmp14 = _this->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(180)
							Array< Float > be = tmp14->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(180)
							Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(180)
							Float tmp15 = ae->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(180)
							Float a11 = tmp15;		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(180)
							Float tmp16 = ae->__get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(180)
							Float a12 = tmp16;		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(180)
							Float tmp17 = ae->__get((int)8);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(180)
							Float a13 = tmp17;		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(180)
							Float tmp18 = ae->__get((int)12);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(180)
							Float a14 = tmp18;		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(180)
							Float tmp19 = ae->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(180)
							Float a21 = tmp19;		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(180)
							Float tmp20 = ae->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(180)
							Float a22 = tmp20;		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(180)
							Float tmp21 = ae->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(180)
							Float a23 = tmp21;		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(180)
							Float tmp22 = ae->__get((int)13);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(180)
							Float a24 = tmp22;		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(180)
							Float tmp23 = ae->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(180)
							Float a31 = tmp23;		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(180)
							Float tmp24 = ae->__get((int)6);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(180)
							Float a32 = tmp24;		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(180)
							Float tmp25 = ae->__get((int)10);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(180)
							Float a33 = tmp25;		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(180)
							Float tmp26 = ae->__get((int)14);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(180)
							Float a34 = tmp26;		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(180)
							Float tmp27 = ae->__get((int)3);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(180)
							Float a41 = tmp27;		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(180)
							Float tmp28 = ae->__get((int)7);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(180)
							Float a42 = tmp28;		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(180)
							Float tmp29 = ae->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(180)
							Float a43 = tmp29;		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(180)
							Float tmp30 = ae->__get((int)15);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(180)
							Float a44 = tmp30;		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(180)
							Float tmp31 = be->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(180)
							Float b11 = tmp31;		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(180)
							Float tmp32 = be->__get((int)4);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(180)
							Float b12 = tmp32;		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(180)
							Float tmp33 = be->__get((int)8);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(180)
							Float b13 = tmp33;		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(180)
							Float tmp34 = be->__get((int)12);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(180)
							Float b14 = tmp34;		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(180)
							Float tmp35 = be->__get((int)1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(180)
							Float b21 = tmp35;		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(180)
							Float tmp36 = be->__get((int)5);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(180)
							Float b22 = tmp36;		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(180)
							Float tmp37 = be->__get((int)9);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(180)
							Float b23 = tmp37;		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(180)
							Float tmp38 = be->__get((int)13);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(180)
							Float b24 = tmp38;		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(180)
							Float tmp39 = be->__get((int)2);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(180)
							Float b31 = tmp39;		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(180)
							Float tmp40 = be->__get((int)6);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(180)
							Float b32 = tmp40;		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(180)
							Float tmp41 = be->__get((int)10);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(180)
							Float b33 = tmp41;		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(180)
							Float tmp42 = be->__get((int)14);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(180)
							Float b34 = tmp42;		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(180)
							Float tmp43 = be->__get((int)3);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(180)
							Float b41 = tmp43;		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(180)
							Float tmp44 = be->__get((int)7);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(180)
							Float b42 = tmp44;		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(180)
							Float tmp45 = be->__get((int)11);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(180)
							Float b43 = tmp45;		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(180)
							Float tmp46 = be->__get((int)15);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(180)
							Float b44 = tmp46;		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(180)
							Float tmp47 = (a11 * b11);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(180)
							Float tmp48 = (a12 * b21);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(180)
							Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(180)
							Float tmp50 = (a13 * b31);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(180)
							Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(180)
							Float tmp52 = (a14 * b41);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(180)
							Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(180)
							te[(int)0] = tmp53;
							HX_STACK_LINE(180)
							Float tmp54 = (a11 * b12);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(180)
							Float tmp55 = (a12 * b22);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(180)
							Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(180)
							Float tmp57 = (a13 * b32);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(180)
							Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(180)
							Float tmp59 = (a14 * b42);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(180)
							Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(180)
							te[(int)4] = tmp60;
							HX_STACK_LINE(180)
							Float tmp61 = (a11 * b13);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(180)
							Float tmp62 = (a12 * b23);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(180)
							Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(180)
							Float tmp64 = (a13 * b33);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(180)
							Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(180)
							Float tmp66 = (a14 * b43);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(180)
							Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(180)
							te[(int)8] = tmp67;
							HX_STACK_LINE(180)
							Float tmp68 = (a11 * b14);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(180)
							Float tmp69 = (a12 * b24);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(180)
							Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(180)
							Float tmp71 = (a13 * b34);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(180)
							Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(180)
							Float tmp73 = (a14 * b44);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(180)
							Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(180)
							te[(int)12] = tmp74;
							HX_STACK_LINE(180)
							Float tmp75 = (a21 * b11);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(180)
							Float tmp76 = (a22 * b21);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(180)
							Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(180)
							Float tmp78 = (a23 * b31);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(180)
							Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(180)
							Float tmp80 = (a24 * b41);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(180)
							Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(180)
							te[(int)1] = tmp81;
							HX_STACK_LINE(180)
							Float tmp82 = (a21 * b12);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(180)
							Float tmp83 = (a22 * b22);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(180)
							Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(180)
							Float tmp85 = (a23 * b32);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(180)
							Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(180)
							Float tmp87 = (a24 * b42);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(180)
							Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(180)
							te[(int)5] = tmp88;
							HX_STACK_LINE(180)
							Float tmp89 = (a21 * b13);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(180)
							Float tmp90 = (a22 * b23);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(180)
							Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(180)
							Float tmp92 = (a23 * b33);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(180)
							Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(180)
							Float tmp94 = (a24 * b43);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(180)
							Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(180)
							te[(int)9] = tmp95;
							HX_STACK_LINE(180)
							Float tmp96 = (a21 * b14);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(180)
							Float tmp97 = (a22 * b24);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(180)
							Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(180)
							Float tmp99 = (a23 * b34);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(180)
							Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(180)
							Float tmp101 = (a24 * b44);		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(180)
							Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(180)
							te[(int)13] = tmp102;
							HX_STACK_LINE(180)
							Float tmp103 = (a31 * b11);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(180)
							Float tmp104 = (a32 * b21);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(180)
							Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(180)
							Float tmp106 = (a33 * b31);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(180)
							Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(180)
							Float tmp108 = (a34 * b41);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(180)
							Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(180)
							te[(int)2] = tmp109;
							HX_STACK_LINE(180)
							Float tmp110 = (a31 * b12);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(180)
							Float tmp111 = (a32 * b22);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(180)
							Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(180)
							Float tmp113 = (a33 * b32);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(180)
							Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(180)
							Float tmp115 = (a34 * b42);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(180)
							Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(180)
							te[(int)6] = tmp116;
							HX_STACK_LINE(180)
							Float tmp117 = (a31 * b13);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(180)
							Float tmp118 = (a32 * b23);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(180)
							Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(180)
							Float tmp120 = (a33 * b33);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(180)
							Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(180)
							Float tmp122 = (a34 * b43);		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(180)
							Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(180)
							te[(int)10] = tmp123;
							HX_STACK_LINE(180)
							Float tmp124 = (a31 * b14);		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(180)
							Float tmp125 = (a32 * b24);		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(180)
							Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(180)
							Float tmp127 = (a33 * b34);		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(180)
							Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
							HX_STACK_LINE(180)
							Float tmp129 = (a34 * b44);		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(180)
							Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(180)
							te[(int)14] = tmp130;
							HX_STACK_LINE(180)
							Float tmp131 = (a41 * b11);		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(180)
							Float tmp132 = (a42 * b21);		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(180)
							Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
							HX_STACK_LINE(180)
							Float tmp134 = (a43 * b31);		HX_STACK_VAR(tmp134,"tmp134");
							HX_STACK_LINE(180)
							Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
							HX_STACK_LINE(180)
							Float tmp136 = (a44 * b41);		HX_STACK_VAR(tmp136,"tmp136");
							HX_STACK_LINE(180)
							Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(180)
							te[(int)3] = tmp137;
							HX_STACK_LINE(180)
							Float tmp138 = (a41 * b12);		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(180)
							Float tmp139 = (a42 * b22);		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(180)
							Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(180)
							Float tmp141 = (a43 * b32);		HX_STACK_VAR(tmp141,"tmp141");
							HX_STACK_LINE(180)
							Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
							HX_STACK_LINE(180)
							Float tmp143 = (a44 * b42);		HX_STACK_VAR(tmp143,"tmp143");
							HX_STACK_LINE(180)
							Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
							HX_STACK_LINE(180)
							te[(int)7] = tmp144;
							HX_STACK_LINE(180)
							Float tmp145 = (a41 * b13);		HX_STACK_VAR(tmp145,"tmp145");
							HX_STACK_LINE(180)
							Float tmp146 = (a42 * b23);		HX_STACK_VAR(tmp146,"tmp146");
							HX_STACK_LINE(180)
							Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
							HX_STACK_LINE(180)
							Float tmp148 = (a43 * b33);		HX_STACK_VAR(tmp148,"tmp148");
							HX_STACK_LINE(180)
							Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
							HX_STACK_LINE(180)
							Float tmp150 = (a44 * b43);		HX_STACK_VAR(tmp150,"tmp150");
							HX_STACK_LINE(180)
							Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
							HX_STACK_LINE(180)
							te[(int)11] = tmp151;
							HX_STACK_LINE(180)
							Float tmp152 = (a41 * b14);		HX_STACK_VAR(tmp152,"tmp152");
							HX_STACK_LINE(180)
							Float tmp153 = (a42 * b24);		HX_STACK_VAR(tmp153,"tmp153");
							HX_STACK_LINE(180)
							Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
							HX_STACK_LINE(180)
							Float tmp155 = (a43 * b34);		HX_STACK_VAR(tmp155,"tmp155");
							HX_STACK_LINE(180)
							Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
							HX_STACK_LINE(180)
							Float tmp157 = (a44 * b44);		HX_STACK_VAR(tmp157,"tmp157");
							HX_STACK_LINE(180)
							Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
							HX_STACK_LINE(180)
							te[(int)15] = tmp158;
							HX_STACK_LINE(180)
							tmp11 = _this2;
						}
						HX_STACK_LINE(180)
						::phoenix::Matrix _m = tmp11;		HX_STACK_VAR(_m,"_m");
						HX_STACK_LINE(180)
						_this1->matrix = _m;
						HX_STACK_LINE(180)
						bool tmp12 = (_m != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						if ((tmp12)){
							HX_STACK_LINE(180)
							::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								cpp::ArrayBase array = _this1->matrix->elements;		HX_STACK_VAR(array,"array");
								HX_STACK_LINE(180)
								::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(180)
								bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(180)
								if ((tmp14)){
									HX_STACK_LINE(180)
									::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(180)
									this1 = tmp15;
								}
								else{
									HX_STACK_LINE(180)
									bool tmp15 = (array != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(180)
									if ((tmp15)){
										HX_STACK_LINE(180)
										::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(180)
										{
											HX_STACK_LINE(180)
											::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(180)
											::snow::api::buffers::ArrayBufferView _this2 = tmp17;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(180)
											_this2->byteOffset = (int)0;
											HX_STACK_LINE(180)
											_this2->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
											HX_STACK_LINE(180)
											int tmp18 = (_this2->length * _this2->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(180)
											_this2->byteLength = tmp18;
											HX_STACK_LINE(180)
											::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(180)
											{
												HX_STACK_LINE(180)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(180)
												int tmp20 = _this2->byteLength;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(180)
												::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(180)
												this2 = tmp21;
												HX_STACK_LINE(180)
												tmp19 = this2;
											}
											HX_STACK_LINE(180)
											_this2->buffer = tmp19;
											HX_STACK_LINE(180)
											_this2->copyFromArray(((Array< Float >)(array)),null());
											HX_STACK_LINE(180)
											tmp16 = _this2;
										}
										HX_STACK_LINE(180)
										this1 = tmp16;
									}
									else{
										HX_STACK_LINE(180)
										bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(180)
										if ((tmp16)){
											HX_STACK_LINE(180)
											::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(180)
											{
												HX_STACK_LINE(180)
												::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(180)
												::snow::api::buffers::ArrayBufferView _this2 = tmp18;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(180)
												::haxe::io::Bytes tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(180)
												::haxe::io::Bytes srcData = tmp19;		HX_STACK_VAR(srcData,"srcData");
												HX_STACK_LINE(180)
												int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(180)
												int srcLength = tmp20;		HX_STACK_VAR(srcLength,"srcLength");
												HX_STACK_LINE(180)
												int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(180)
												int srcByteOffset = tmp21;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
												HX_STACK_LINE(180)
												int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(180)
												int srcElementSize = tmp22;		HX_STACK_VAR(srcElementSize,"srcElementSize");
												HX_STACK_LINE(180)
												int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(180)
												int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(180)
												int tmp24 = _this2->type;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(180)
												bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(180)
												if ((tmp25)){
													HX_STACK_LINE(180)
													int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
													HX_STACK_LINE(180)
													int tmp26 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(180)
													int cloneLength = tmp26;		HX_STACK_VAR(cloneLength,"cloneLength");
													HX_STACK_LINE(180)
													::haxe::io::Bytes tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(180)
													{
														HX_STACK_LINE(180)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(180)
														int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(180)
														::haxe::io::Bytes tmp29 = ::haxe::io::Bytes_obj::alloc(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(180)
														this2 = tmp29;
														HX_STACK_LINE(180)
														tmp27 = this2;
													}
													HX_STACK_LINE(180)
													_this2->buffer = tmp27;
													HX_STACK_LINE(180)
													::haxe::io::Bytes tmp28 = srcData;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(180)
													int tmp29 = srcByteOffset;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(180)
													int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(180)
													_this2->buffer->blit((int)0,tmp28,tmp29,tmp30);
												}
												else{
													HX_STACK_LINE(180)
													HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
												}
												HX_STACK_LINE(180)
												int tmp26 = (_this2->bytesPerElement * srcLength);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(180)
												_this2->byteLength = tmp26;
												HX_STACK_LINE(180)
												_this2->byteOffset = (int)0;
												HX_STACK_LINE(180)
												_this2->length = srcLength;
												HX_STACK_LINE(180)
												tmp17 = _this2;
											}
											HX_STACK_LINE(180)
											this1 = tmp17;
										}
										else{
											HX_STACK_LINE(180)
											bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(180)
											if ((tmp17)){
												HX_STACK_LINE(180)
												::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(180)
												{
													HX_STACK_LINE(180)
													::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(180)
													::snow::api::buffers::ArrayBufferView _this2 = tmp19;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(180)
													bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(180)
													if ((tmp20)){
														HX_STACK_LINE(180)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(180)
													int tmp21 = hx::Mod((int)0,_this2->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(180)
													bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(180)
													if ((tmp22)){
														HX_STACK_LINE(180)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(180)
													int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(180)
													int bufferByteLength = tmp23;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
													HX_STACK_LINE(180)
													int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(180)
													int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
													HX_STACK_LINE(180)
													bool tmp24 = true;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(180)
													if ((tmp24)){
														HX_STACK_LINE(180)
														int tmp25 = bufferByteLength;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(180)
														newByteLength = tmp25;
														HX_STACK_LINE(180)
														int tmp26 = hx::Mod(bufferByteLength,_this2->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(180)
														bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(180)
														if ((tmp27)){
															HX_STACK_LINE(180)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
														HX_STACK_LINE(180)
														bool tmp28 = (newByteLength < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(180)
														if ((tmp28)){
															HX_STACK_LINE(180)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													else{
														HX_STACK_LINE(180)
														int tmp25 = (null() * _this2->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(180)
														newByteLength = tmp25;
														HX_STACK_LINE(180)
														int tmp26 = newByteLength;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(180)
														int newRange = tmp26;		HX_STACK_VAR(newRange,"newRange");
														HX_STACK_LINE(180)
														bool tmp27 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(180)
														if ((tmp27)){
															HX_STACK_LINE(180)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													HX_STACK_LINE(180)
													_this2->buffer = null();
													HX_STACK_LINE(180)
													_this2->byteOffset = (int)0;
													HX_STACK_LINE(180)
													_this2->byteLength = newByteLength;
													HX_STACK_LINE(180)
													Float tmp25 = (Float(newByteLength) / Float(_this2->bytesPerElement));		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(180)
													int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(180)
													_this2->length = tmp26;
													HX_STACK_LINE(180)
													tmp18 = _this2;
												}
												HX_STACK_LINE(180)
												this1 = tmp18;
											}
											else{
												HX_STACK_LINE(180)
												HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
											}
										}
									}
								}
								HX_STACK_LINE(180)
								tmp13 = this1;
							}
							HX_STACK_LINE(180)
							_this1->floats = tmp13;
						}
						HX_STACK_LINE(180)
						_this1->matrix;
					}
					else{
						HX_STACK_LINE(180)
						::phoenix::Spatial tmp10 = _this->get_world();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(180)
						::phoenix::Spatial _this1 = tmp10;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						::phoenix::Matrix tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Matrix tmp12 = _this->local->matrix;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(180)
							Array< Float > te = tmp12->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(180)
							Float tmp13 = te->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(180)
							Float tmp14 = te->__get((int)4);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(180)
							Float tmp15 = te->__get((int)8);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(180)
							Float tmp16 = te->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(180)
							Float tmp17 = te->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(180)
							Float tmp18 = te->__get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(180)
							Float tmp19 = te->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(180)
							Float tmp20 = te->__get((int)13);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(180)
							Float tmp21 = te->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(180)
							Float tmp22 = te->__get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(180)
							Float tmp23 = te->__get((int)10);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(180)
							Float tmp24 = te->__get((int)14);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(180)
							Float tmp25 = te->__get((int)3);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(180)
							Float tmp26 = te->__get((int)7);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(180)
							Float tmp27 = te->__get((int)11);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(180)
							Float tmp28 = te->__get((int)15);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(180)
							tmp11 = ::phoenix::Matrix_obj::__new(tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28);
						}
						HX_STACK_LINE(180)
						::phoenix::Matrix _m = tmp11;		HX_STACK_VAR(_m,"_m");
						HX_STACK_LINE(180)
						_this1->matrix = _m;
						HX_STACK_LINE(180)
						bool tmp12 = (_m != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						if ((tmp12)){
							HX_STACK_LINE(180)
							::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								cpp::ArrayBase array = _this1->matrix->elements;		HX_STACK_VAR(array,"array");
								HX_STACK_LINE(180)
								::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(180)
								bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(180)
								if ((tmp14)){
									HX_STACK_LINE(180)
									::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(180)
									this1 = tmp15;
								}
								else{
									HX_STACK_LINE(180)
									bool tmp15 = (array != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(180)
									if ((tmp15)){
										HX_STACK_LINE(180)
										::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(180)
										{
											HX_STACK_LINE(180)
											::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(180)
											::snow::api::buffers::ArrayBufferView _this2 = tmp17;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(180)
											_this2->byteOffset = (int)0;
											HX_STACK_LINE(180)
											_this2->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
											HX_STACK_LINE(180)
											int tmp18 = (_this2->length * _this2->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(180)
											_this2->byteLength = tmp18;
											HX_STACK_LINE(180)
											::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(180)
											{
												HX_STACK_LINE(180)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(180)
												int tmp20 = _this2->byteLength;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(180)
												::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(180)
												this2 = tmp21;
												HX_STACK_LINE(180)
												tmp19 = this2;
											}
											HX_STACK_LINE(180)
											_this2->buffer = tmp19;
											HX_STACK_LINE(180)
											_this2->copyFromArray(((Array< Float >)(array)),null());
											HX_STACK_LINE(180)
											tmp16 = _this2;
										}
										HX_STACK_LINE(180)
										this1 = tmp16;
									}
									else{
										HX_STACK_LINE(180)
										bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(180)
										if ((tmp16)){
											HX_STACK_LINE(180)
											::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(180)
											{
												HX_STACK_LINE(180)
												::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(180)
												::snow::api::buffers::ArrayBufferView _this2 = tmp18;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(180)
												::haxe::io::Bytes tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(180)
												::haxe::io::Bytes srcData = tmp19;		HX_STACK_VAR(srcData,"srcData");
												HX_STACK_LINE(180)
												int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(180)
												int srcLength = tmp20;		HX_STACK_VAR(srcLength,"srcLength");
												HX_STACK_LINE(180)
												int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(180)
												int srcByteOffset = tmp21;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
												HX_STACK_LINE(180)
												int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(180)
												int srcElementSize = tmp22;		HX_STACK_VAR(srcElementSize,"srcElementSize");
												HX_STACK_LINE(180)
												int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(180)
												int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(180)
												int tmp24 = _this2->type;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(180)
												bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(180)
												if ((tmp25)){
													HX_STACK_LINE(180)
													int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
													HX_STACK_LINE(180)
													int tmp26 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(180)
													int cloneLength = tmp26;		HX_STACK_VAR(cloneLength,"cloneLength");
													HX_STACK_LINE(180)
													::haxe::io::Bytes tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(180)
													{
														HX_STACK_LINE(180)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(180)
														int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(180)
														::haxe::io::Bytes tmp29 = ::haxe::io::Bytes_obj::alloc(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(180)
														this2 = tmp29;
														HX_STACK_LINE(180)
														tmp27 = this2;
													}
													HX_STACK_LINE(180)
													_this2->buffer = tmp27;
													HX_STACK_LINE(180)
													::haxe::io::Bytes tmp28 = srcData;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(180)
													int tmp29 = srcByteOffset;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(180)
													int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(180)
													_this2->buffer->blit((int)0,tmp28,tmp29,tmp30);
												}
												else{
													HX_STACK_LINE(180)
													HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
												}
												HX_STACK_LINE(180)
												int tmp26 = (_this2->bytesPerElement * srcLength);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(180)
												_this2->byteLength = tmp26;
												HX_STACK_LINE(180)
												_this2->byteOffset = (int)0;
												HX_STACK_LINE(180)
												_this2->length = srcLength;
												HX_STACK_LINE(180)
												tmp17 = _this2;
											}
											HX_STACK_LINE(180)
											this1 = tmp17;
										}
										else{
											HX_STACK_LINE(180)
											bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(180)
											if ((tmp17)){
												HX_STACK_LINE(180)
												::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(180)
												{
													HX_STACK_LINE(180)
													::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(180)
													::snow::api::buffers::ArrayBufferView _this2 = tmp19;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(180)
													bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(180)
													if ((tmp20)){
														HX_STACK_LINE(180)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(180)
													int tmp21 = hx::Mod((int)0,_this2->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(180)
													bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(180)
													if ((tmp22)){
														HX_STACK_LINE(180)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(180)
													int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(180)
													int bufferByteLength = tmp23;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
													HX_STACK_LINE(180)
													int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(180)
													int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
													HX_STACK_LINE(180)
													bool tmp24 = true;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(180)
													if ((tmp24)){
														HX_STACK_LINE(180)
														int tmp25 = bufferByteLength;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(180)
														newByteLength = tmp25;
														HX_STACK_LINE(180)
														int tmp26 = hx::Mod(bufferByteLength,_this2->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(180)
														bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(180)
														if ((tmp27)){
															HX_STACK_LINE(180)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
														HX_STACK_LINE(180)
														bool tmp28 = (newByteLength < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(180)
														if ((tmp28)){
															HX_STACK_LINE(180)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													else{
														HX_STACK_LINE(180)
														int tmp25 = (null() * _this2->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(180)
														newByteLength = tmp25;
														HX_STACK_LINE(180)
														int tmp26 = newByteLength;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(180)
														int newRange = tmp26;		HX_STACK_VAR(newRange,"newRange");
														HX_STACK_LINE(180)
														bool tmp27 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(180)
														if ((tmp27)){
															HX_STACK_LINE(180)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													HX_STACK_LINE(180)
													_this2->buffer = null();
													HX_STACK_LINE(180)
													_this2->byteOffset = (int)0;
													HX_STACK_LINE(180)
													_this2->byteLength = newByteLength;
													HX_STACK_LINE(180)
													Float tmp25 = (Float(newByteLength) / Float(_this2->bytesPerElement));		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(180)
													int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(180)
													_this2->length = tmp26;
													HX_STACK_LINE(180)
													tmp18 = _this2;
												}
												HX_STACK_LINE(180)
												this1 = tmp18;
											}
											else{
												HX_STACK_LINE(180)
												HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
											}
										}
									}
								}
								HX_STACK_LINE(180)
								tmp13 = this1;
							}
							HX_STACK_LINE(180)
							_this1->floats = tmp13;
						}
						HX_STACK_LINE(180)
						_this1->matrix;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Spatial tmp10 = _this->get_world();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(180)
						::phoenix::Spatial _this1 = tmp10;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						bool tmp11 = _this1->auto_decompose;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(180)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						if ((tmp12)){
							HX_STACK_LINE(180)
							tmp13 = false;
						}
						else{
							HX_STACK_LINE(180)
							tmp13 = true;
						}
						HX_STACK_LINE(180)
						if ((tmp13)){
							HX_STACK_LINE(180)
							::phoenix::MatrixTransform tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(180)
								::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
								HX_STACK_LINE(180)
								::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
								HX_STACK_LINE(180)
								::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
								HX_STACK_LINE(180)
								Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(180)
								::phoenix::Matrix tmp15 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(180)
								::phoenix::Matrix matrix = tmp15;		HX_STACK_VAR(matrix,"matrix");
								HX_STACK_LINE(180)
								Float tmp16 = te->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(180)
								Float _ax_x = tmp16;		HX_STACK_VAR(_ax_x,"_ax_x");
								HX_STACK_LINE(180)
								Float tmp17 = te->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(180)
								Float _ax_y = tmp17;		HX_STACK_VAR(_ax_y,"_ax_y");
								HX_STACK_LINE(180)
								Float tmp18 = te->__get((int)2);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(180)
								Float _ax_z = tmp18;		HX_STACK_VAR(_ax_z,"_ax_z");
								HX_STACK_LINE(180)
								Float tmp19 = te->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(180)
								Float _ay_x = tmp19;		HX_STACK_VAR(_ay_x,"_ay_x");
								HX_STACK_LINE(180)
								Float tmp20 = te->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(180)
								Float _ay_y = tmp20;		HX_STACK_VAR(_ay_y,"_ay_y");
								HX_STACK_LINE(180)
								Float tmp21 = te->__get((int)6);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(180)
								Float _ay_z = tmp21;		HX_STACK_VAR(_ay_z,"_ay_z");
								HX_STACK_LINE(180)
								Float tmp22 = te->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(180)
								Float _az_x = tmp22;		HX_STACK_VAR(_az_x,"_az_x");
								HX_STACK_LINE(180)
								Float tmp23 = te->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(180)
								Float _az_y = tmp23;		HX_STACK_VAR(_az_y,"_az_y");
								HX_STACK_LINE(180)
								Float tmp24 = te->__get((int)10);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(180)
								Float _az_z = tmp24;		HX_STACK_VAR(_az_z,"_az_z");
								HX_STACK_LINE(180)
								Float tmp25 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(180)
								Float tmp26 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(180)
								Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(180)
								Float tmp28 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(180)
								Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(180)
								Float tmp30 = ::Math_obj::sqrt(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(180)
								Float _ax_length = tmp30;		HX_STACK_VAR(_ax_length,"_ax_length");
								HX_STACK_LINE(180)
								Float tmp31 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(180)
								Float tmp32 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(180)
								Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(180)
								Float tmp34 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(180)
								Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(180)
								Float tmp36 = ::Math_obj::sqrt(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(180)
								Float _ay_length = tmp36;		HX_STACK_VAR(_ay_length,"_ay_length");
								HX_STACK_LINE(180)
								Float tmp37 = (_az_x * _az_x);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(180)
								Float tmp38 = (_az_y * _az_y);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(180)
								Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(180)
								Float tmp40 = (_az_z * _az_z);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(180)
								Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(180)
								Float tmp42 = ::Math_obj::sqrt(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(180)
								Float _az_length = tmp42;		HX_STACK_VAR(_az_length,"_az_length");
								HX_STACK_LINE(180)
								bool tmp43 = (_quaternion == null());		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(180)
								if ((tmp43)){
									HX_STACK_LINE(180)
									::phoenix::Quaternion tmp44 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(180)
									_quaternion = tmp44;
								}
								HX_STACK_LINE(180)
								bool tmp44 = (_position == null());		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(180)
								if ((tmp44)){
									HX_STACK_LINE(180)
									Float tmp45 = te->__get((int)12);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(180)
									Float tmp46 = te->__get((int)13);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(180)
									Float tmp47 = te->__get((int)14);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(180)
									::phoenix::Vector tmp48 = ::phoenix::Vector_obj::__new(tmp45,tmp46,tmp47,null());		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(180)
									_position = tmp48;
								}
								else{
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										Float tmp45 = te->__get((int)12);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(180)
										Float _x = tmp45;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(180)
										_position->x = _x;
										HX_STACK_LINE(180)
										bool tmp46 = _position->_construct;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(180)
										if ((tmp46)){
											HX_STACK_LINE(180)
											_position->x;
										}
										else{
											HX_STACK_LINE(180)
											bool tmp47 = (_position->listen_x != null());		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(180)
											bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(180)
											if ((tmp47)){
												HX_STACK_LINE(180)
												bool tmp49 = _position->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(180)
												bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(180)
												tmp48 = !(tmp50);
											}
											else{
												HX_STACK_LINE(180)
												tmp48 = false;
											}
											HX_STACK_LINE(180)
											if ((tmp48)){
												HX_STACK_LINE(180)
												Float tmp49 = _x;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(180)
												_position->listen_x(tmp49);
											}
											HX_STACK_LINE(180)
											_position->x;
										}
									}
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										Float tmp45 = te->__get((int)13);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(180)
										Float _y = tmp45;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(180)
										_position->y = _y;
										HX_STACK_LINE(180)
										bool tmp46 = _position->_construct;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(180)
										if ((tmp46)){
											HX_STACK_LINE(180)
											_position->y;
										}
										else{
											HX_STACK_LINE(180)
											bool tmp47 = (_position->listen_y != null());		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(180)
											bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(180)
											if ((tmp47)){
												HX_STACK_LINE(180)
												bool tmp49 = _position->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(180)
												bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(180)
												tmp48 = !(tmp50);
											}
											else{
												HX_STACK_LINE(180)
												tmp48 = false;
											}
											HX_STACK_LINE(180)
											if ((tmp48)){
												HX_STACK_LINE(180)
												Float tmp49 = _y;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(180)
												_position->listen_y(tmp49);
											}
											HX_STACK_LINE(180)
											_position->y;
										}
									}
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										Float tmp45 = te->__get((int)14);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(180)
										Float _z = tmp45;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(180)
										_position->z = _z;
										HX_STACK_LINE(180)
										bool tmp46 = _position->_construct;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(180)
										if ((tmp46)){
											HX_STACK_LINE(180)
											_position->z;
										}
										else{
											HX_STACK_LINE(180)
											bool tmp47 = (_position->listen_z != null());		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(180)
											bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(180)
											if ((tmp47)){
												HX_STACK_LINE(180)
												bool tmp49 = _position->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(180)
												bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(180)
												tmp48 = !(tmp50);
											}
											else{
												HX_STACK_LINE(180)
												tmp48 = false;
											}
											HX_STACK_LINE(180)
											if ((tmp48)){
												HX_STACK_LINE(180)
												Float tmp49 = _z;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(180)
												_position->listen_z(tmp49);
											}
											HX_STACK_LINE(180)
											_position->z;
										}
									}
								}
								HX_STACK_LINE(180)
								bool tmp45 = (_scale == null());		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(180)
								if ((tmp45)){
									HX_STACK_LINE(180)
									::phoenix::Vector tmp46 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(180)
									_scale = tmp46;
								}
								else{
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										_scale->x = _ax_length;
										HX_STACK_LINE(180)
										bool tmp46 = _scale->_construct;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(180)
										if ((tmp46)){
											HX_STACK_LINE(180)
											_scale->x;
										}
										else{
											HX_STACK_LINE(180)
											bool tmp47 = (_scale->listen_x != null());		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(180)
											bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(180)
											if ((tmp47)){
												HX_STACK_LINE(180)
												bool tmp49 = _scale->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(180)
												bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(180)
												tmp48 = !(tmp50);
											}
											else{
												HX_STACK_LINE(180)
												tmp48 = false;
											}
											HX_STACK_LINE(180)
											if ((tmp48)){
												HX_STACK_LINE(180)
												Float tmp49 = _ax_length;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(180)
												_scale->listen_x(tmp49);
											}
											HX_STACK_LINE(180)
											_scale->x;
										}
									}
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										_scale->y = _ay_length;
										HX_STACK_LINE(180)
										bool tmp46 = _scale->_construct;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(180)
										if ((tmp46)){
											HX_STACK_LINE(180)
											_scale->y;
										}
										else{
											HX_STACK_LINE(180)
											bool tmp47 = (_scale->listen_y != null());		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(180)
											bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(180)
											if ((tmp47)){
												HX_STACK_LINE(180)
												bool tmp49 = _scale->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(180)
												bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(180)
												tmp48 = !(tmp50);
											}
											else{
												HX_STACK_LINE(180)
												tmp48 = false;
											}
											HX_STACK_LINE(180)
											if ((tmp48)){
												HX_STACK_LINE(180)
												Float tmp49 = _ay_length;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(180)
												_scale->listen_y(tmp49);
											}
											HX_STACK_LINE(180)
											_scale->y;
										}
									}
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										_scale->z = _az_length;
										HX_STACK_LINE(180)
										bool tmp46 = _scale->_construct;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(180)
										if ((tmp46)){
											HX_STACK_LINE(180)
											_scale->z;
										}
										else{
											HX_STACK_LINE(180)
											bool tmp47 = (_scale->listen_z != null());		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(180)
											bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(180)
											if ((tmp47)){
												HX_STACK_LINE(180)
												bool tmp49 = _scale->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(180)
												bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(180)
												tmp48 = !(tmp50);
											}
											else{
												HX_STACK_LINE(180)
												tmp48 = false;
											}
											HX_STACK_LINE(180)
											if ((tmp48)){
												HX_STACK_LINE(180)
												Float tmp49 = _az_length;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(180)
												_scale->listen_z(tmp49);
											}
											HX_STACK_LINE(180)
											_scale->z;
										}
									}
								}
								HX_STACK_LINE(180)
								matrix->elements = _this2->elements->concat(Array_obj< Float >::__new());
								HX_STACK_LINE(180)
								Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
								HX_STACK_LINE(180)
								Float tmp46 = _ax_length;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)0],tmp46);
								HX_STACK_LINE(180)
								Float tmp47 = _ax_length;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)1],tmp47);
								HX_STACK_LINE(180)
								Float tmp48 = _ax_length;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)2],tmp48);
								HX_STACK_LINE(180)
								Float tmp49 = _ay_length;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)4],tmp49);
								HX_STACK_LINE(180)
								Float tmp50 = _ay_length;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)5],tmp50);
								HX_STACK_LINE(180)
								Float tmp51 = _ay_length;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)6],tmp51);
								HX_STACK_LINE(180)
								Float tmp52 = _az_length;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)8],tmp52);
								HX_STACK_LINE(180)
								Float tmp53 = _az_length;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)9],tmp53);
								HX_STACK_LINE(180)
								Float tmp54 = _az_length;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(180)
								hx::DivEq(me[(int)10],tmp54);
								HX_STACK_LINE(180)
								::phoenix::Matrix tmp55 = matrix;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(180)
								_quaternion->setFromRotationMatrix(tmp55);
								HX_STACK_LINE(180)
								bool tmp56 = (_this2->_transform == null());		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(180)
								if ((tmp56)){
									HX_STACK_LINE(180)
									::phoenix::MatrixTransform tmp57 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(180)
									_this2->_transform = tmp57;
								}
								else{
									HX_STACK_LINE(180)
									_this2->_transform->pos = _position;
									HX_STACK_LINE(180)
									_this2->_transform->rotation = _quaternion;
									HX_STACK_LINE(180)
									_this2->_transform->scale = _scale;
								}
								HX_STACK_LINE(180)
								tmp14 = _this2->_transform;
							}
							HX_STACK_LINE(180)
							::phoenix::MatrixTransform _transform = tmp14;		HX_STACK_VAR(_transform,"_transform");
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
								HX_STACK_LINE(180)
								_this1->pos = _p;
								HX_STACK_LINE(180)
								bool tmp15 = (_p != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(180)
								if ((tmp15)){
									HX_STACK_LINE(180)
									::phoenix::Vector tmp16 = _this1->pos;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(180)
									Dynamic tmp17 = _this1->_pos_change_dyn();		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(180)
									::phoenix::Vector_obj::Listen(tmp16,tmp17);
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										bool tmp18 = (_this1->pos_changed != null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(180)
										bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(180)
										if ((tmp18)){
											HX_STACK_LINE(180)
											bool tmp20 = _this1->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(180)
											bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(180)
											tmp19 = !(tmp21);
										}
										else{
											HX_STACK_LINE(180)
											tmp19 = false;
										}
										HX_STACK_LINE(180)
										if ((tmp19)){
											HX_STACK_LINE(180)
											::phoenix::Vector tmp20 = _this1->pos;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(180)
											_this1->pos_changed(tmp20);
										}
									}
								}
								HX_STACK_LINE(180)
								_this1->pos;
							}
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
								HX_STACK_LINE(180)
								_this1->rotation = _r;
								HX_STACK_LINE(180)
								bool tmp15 = (_r != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(180)
								if ((tmp15)){
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
										HX_STACK_LINE(180)
										Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
										HX_STACK_LINE(180)
										_q->listen_x = listener;
										HX_STACK_LINE(180)
										_q->listen_y = listener;
										HX_STACK_LINE(180)
										_q->listen_z = listener;
										HX_STACK_LINE(180)
										_q->listen_w = listener;
									}
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										bool tmp16 = (_this1->rotation_changed != null());		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(180)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(180)
										if ((tmp16)){
											HX_STACK_LINE(180)
											bool tmp18 = _this1->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(180)
											bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(180)
											tmp17 = !(tmp19);
										}
										else{
											HX_STACK_LINE(180)
											tmp17 = false;
										}
										HX_STACK_LINE(180)
										if ((tmp17)){
											HX_STACK_LINE(180)
											::phoenix::Quaternion tmp18 = _this1->rotation;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(180)
											_this1->rotation_changed(tmp18);
										}
									}
								}
								HX_STACK_LINE(180)
								_this1->rotation;
							}
							HX_STACK_LINE(180)
							{
								HX_STACK_LINE(180)
								::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
								HX_STACK_LINE(180)
								_this1->scale = _s;
								HX_STACK_LINE(180)
								bool tmp15 = (_s != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(180)
								if ((tmp15)){
									HX_STACK_LINE(180)
									::phoenix::Vector tmp16 = _this1->scale;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(180)
									Dynamic tmp17 = _this1->_scale_change_dyn();		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(180)
									::phoenix::Vector_obj::Listen(tmp16,tmp17);
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										bool tmp18 = (_this1->scale_changed != null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(180)
										bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(180)
										if ((tmp18)){
											HX_STACK_LINE(180)
											bool tmp20 = _this1->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(180)
											bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(180)
											tmp19 = !(tmp21);
										}
										else{
											HX_STACK_LINE(180)
											tmp19 = false;
										}
										HX_STACK_LINE(180)
										if ((tmp19)){
											HX_STACK_LINE(180)
											::phoenix::Vector tmp20 = _this1->scale;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(180)
											_this1->scale_changed(tmp20);
										}
									}
								}
								HX_STACK_LINE(180)
								_this1->scale;
							}
						}
						HX_STACK_LINE(180)
						_this1;
					}
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						_this->dirty = false;
						HX_STACK_LINE(180)
						bool tmp10 = _this->dirty;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(180)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(180)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						if ((tmp11)){
							HX_STACK_LINE(180)
							bool tmp13 = _this->_setup;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(180)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(180)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(180)
							tmp12 = !(tmp15);
						}
						else{
							HX_STACK_LINE(180)
							tmp12 = false;
						}
						HX_STACK_LINE(180)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						if ((tmp13)){
							HX_STACK_LINE(180)
							tmp14 = (_this->_dirty_handlers != null());
						}
						else{
							HX_STACK_LINE(180)
							tmp14 = false;
						}
						HX_STACK_LINE(180)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(180)
						if ((tmp14)){
							HX_STACK_LINE(180)
							int tmp16 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(180)
							int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(180)
							tmp15 = (tmp17 > (int)0);
						}
						else{
							HX_STACK_LINE(180)
							tmp15 = false;
						}
						HX_STACK_LINE(180)
						if ((tmp15)){
							HX_STACK_LINE(180)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(180)
							cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(180)
							while((true)){
								HX_STACK_LINE(180)
								bool tmp16 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(180)
								bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(180)
								if ((tmp17)){
									HX_STACK_LINE(180)
									break;
								}
								HX_STACK_LINE(180)
								Dynamic tmp18 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(180)
								Dynamic _handler = tmp18;		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(180)
								++(_g);
								HX_STACK_LINE(180)
								bool tmp19 = (_handler != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(180)
								if ((tmp19)){
									HX_STACK_LINE(180)
									::phoenix::Transform tmp20 = _this;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(180)
									_handler(tmp20).Cast< Void >();
								}
							}
						}
						HX_STACK_LINE(180)
						_this->dirty;
					}
					HX_STACK_LINE(180)
					_this->_cleaning = false;
					HX_STACK_LINE(180)
					bool tmp10 = (_this->_clean_handlers != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(180)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(180)
					if ((tmp10)){
						HX_STACK_LINE(180)
						int tmp12 = _this->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						tmp11 = (tmp13 > (int)0);
					}
					else{
						HX_STACK_LINE(180)
						tmp11 = false;
					}
					HX_STACK_LINE(180)
					if ((tmp11)){
						HX_STACK_LINE(180)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(180)
						cpp::ArrayBase _g1 = _this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(180)
						while((true)){
							HX_STACK_LINE(180)
							bool tmp12 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(180)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(180)
							if ((tmp13)){
								HX_STACK_LINE(180)
								break;
							}
							HX_STACK_LINE(180)
							Dynamic tmp14 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(180)
							Dynamic _handler = tmp14;		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(180)
							++(_g);
							HX_STACK_LINE(180)
							bool tmp15 = (_handler != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(180)
							if ((tmp15)){
								HX_STACK_LINE(180)
								::phoenix::Transform tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(180)
								_handler(tmp16).Cast< Void >();
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(180)
		bool tmp4 = this->dirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(180)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(180)
		if ((tmp4)){
			HX_STACK_LINE(180)
			bool tmp6 = this->_cleaning;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(180)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(180)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(180)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(180)
			tmp5 = false;
		}
		HX_STACK_LINE(180)
		if ((tmp5)){
			HX_STACK_LINE(180)
			bool tmp6 = this->dirty;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(180)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(180)
			if ((tmp7)){
				HX_STACK_LINE(180)
				Dynamic();
			}
			else{
				HX_STACK_LINE(180)
				this->_cleaning = true;
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Matrix tmp8 = this->_pos_matrix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(180)
						e[(int)0] = (int)1;
						HX_STACK_LINE(180)
						e[(int)4] = (int)0;
						HX_STACK_LINE(180)
						e[(int)8] = (int)0;
						HX_STACK_LINE(180)
						::phoenix::Spatial tmp9 = this->local;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(180)
						Float tmp10 = tmp9->pos->x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(180)
						e[(int)12] = tmp10;
						HX_STACK_LINE(180)
						e[(int)1] = (int)0;
						HX_STACK_LINE(180)
						e[(int)5] = (int)1;
						HX_STACK_LINE(180)
						e[(int)9] = (int)0;
						HX_STACK_LINE(180)
						::phoenix::Spatial tmp11 = this->local;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(180)
						Float tmp12 = tmp11->pos->y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						e[(int)13] = tmp12;
						HX_STACK_LINE(180)
						e[(int)2] = (int)0;
						HX_STACK_LINE(180)
						e[(int)6] = (int)0;
						HX_STACK_LINE(180)
						e[(int)10] = (int)1;
						HX_STACK_LINE(180)
						::phoenix::Spatial tmp13 = this->local;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						Float tmp14 = tmp13->pos->z;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						e[(int)14] = tmp14;
						HX_STACK_LINE(180)
						e[(int)3] = (int)0;
						HX_STACK_LINE(180)
						e[(int)7] = (int)0;
						HX_STACK_LINE(180)
						e[(int)11] = (int)0;
						HX_STACK_LINE(180)
						e[(int)15] = (int)1;
						HX_STACK_LINE(180)
						_this;
					}
					HX_STACK_LINE(180)
					_this;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Matrix tmp8 = this->_rotation_matrix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					::phoenix::Spatial tmp9 = this->local;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(180)
					::phoenix::Quaternion q = tmp9->rotation;		HX_STACK_VAR(q,"q");
					HX_STACK_LINE(180)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(180)
					Float tmp10 = (q->x + q->x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(180)
					Float x2 = tmp10;		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(180)
					Float tmp11 = (q->y + q->y);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(180)
					Float y2 = tmp11;		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(180)
					Float tmp12 = (q->z + q->z);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(180)
					Float z2 = tmp12;		HX_STACK_VAR(z2,"z2");
					HX_STACK_LINE(180)
					Float tmp13 = (q->x * x2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(180)
					Float xx = tmp13;		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(180)
					Float tmp14 = (q->x * y2);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(180)
					Float xy = tmp14;		HX_STACK_VAR(xy,"xy");
					HX_STACK_LINE(180)
					Float tmp15 = (q->x * z2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(180)
					Float xz = tmp15;		HX_STACK_VAR(xz,"xz");
					HX_STACK_LINE(180)
					Float tmp16 = (q->y * y2);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(180)
					Float yy = tmp16;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(180)
					Float tmp17 = (q->y * z2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(180)
					Float yz = tmp17;		HX_STACK_VAR(yz,"yz");
					HX_STACK_LINE(180)
					Float tmp18 = (q->z * z2);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(180)
					Float zz = tmp18;		HX_STACK_VAR(zz,"zz");
					HX_STACK_LINE(180)
					Float tmp19 = (q->w * x2);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(180)
					Float wx = tmp19;		HX_STACK_VAR(wx,"wx");
					HX_STACK_LINE(180)
					Float tmp20 = (q->w * y2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(180)
					Float wy = tmp20;		HX_STACK_VAR(wy,"wy");
					HX_STACK_LINE(180)
					Float tmp21 = (q->w * z2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(180)
					Float wz = tmp21;		HX_STACK_VAR(wz,"wz");
					HX_STACK_LINE(180)
					Float tmp22 = (yy + zz);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(180)
					Float tmp23 = ((int)1 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(180)
					te[(int)0] = tmp23;
					HX_STACK_LINE(180)
					Float tmp24 = (xy - wz);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(180)
					te[(int)4] = tmp24;
					HX_STACK_LINE(180)
					Float tmp25 = (xz + wy);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(180)
					te[(int)8] = tmp25;
					HX_STACK_LINE(180)
					Float tmp26 = (xy + wz);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(180)
					te[(int)1] = tmp26;
					HX_STACK_LINE(180)
					Float tmp27 = (xx + zz);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(180)
					Float tmp28 = ((int)1 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(180)
					te[(int)5] = tmp28;
					HX_STACK_LINE(180)
					Float tmp29 = (yz - wx);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(180)
					te[(int)9] = tmp29;
					HX_STACK_LINE(180)
					Float tmp30 = (xz - wy);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(180)
					te[(int)2] = tmp30;
					HX_STACK_LINE(180)
					Float tmp31 = (yz + wx);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(180)
					te[(int)6] = tmp31;
					HX_STACK_LINE(180)
					Float tmp32 = (xx + yy);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(180)
					Float tmp33 = ((int)1 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(180)
					te[(int)10] = tmp33;
					HX_STACK_LINE(180)
					te[(int)3] = (int)0;
					HX_STACK_LINE(180)
					te[(int)7] = (int)0;
					HX_STACK_LINE(180)
					te[(int)11] = (int)0;
					HX_STACK_LINE(180)
					te[(int)12] = (int)0;
					HX_STACK_LINE(180)
					te[(int)13] = (int)0;
					HX_STACK_LINE(180)
					te[(int)14] = (int)0;
					HX_STACK_LINE(180)
					te[(int)15] = (int)1;
					HX_STACK_LINE(180)
					_this;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Matrix tmp8 = this->_origin_undo_matrix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(180)
						e[(int)0] = (int)1;
						HX_STACK_LINE(180)
						e[(int)4] = (int)0;
						HX_STACK_LINE(180)
						e[(int)8] = (int)0;
						HX_STACK_LINE(180)
						::phoenix::Vector tmp9 = this->origin;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(180)
						Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(180)
						Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(180)
						e[(int)12] = tmp11;
						HX_STACK_LINE(180)
						e[(int)1] = (int)0;
						HX_STACK_LINE(180)
						e[(int)5] = (int)1;
						HX_STACK_LINE(180)
						e[(int)9] = (int)0;
						HX_STACK_LINE(180)
						::phoenix::Vector tmp12 = this->origin;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						e[(int)13] = tmp14;
						HX_STACK_LINE(180)
						e[(int)2] = (int)0;
						HX_STACK_LINE(180)
						e[(int)6] = (int)0;
						HX_STACK_LINE(180)
						e[(int)10] = (int)1;
						HX_STACK_LINE(180)
						::phoenix::Vector tmp15 = this->origin;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(180)
						Float tmp16 = tmp15->z;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(180)
						Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(180)
						e[(int)14] = tmp17;
						HX_STACK_LINE(180)
						e[(int)3] = (int)0;
						HX_STACK_LINE(180)
						e[(int)7] = (int)0;
						HX_STACK_LINE(180)
						e[(int)11] = (int)0;
						HX_STACK_LINE(180)
						e[(int)15] = (int)1;
						HX_STACK_LINE(180)
						_this;
					}
					HX_STACK_LINE(180)
					_this;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Spatial tmp8 = this->local;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = tmp8->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(180)
						e[(int)0] = (int)1;
						HX_STACK_LINE(180)
						e[(int)4] = (int)0;
						HX_STACK_LINE(180)
						e[(int)8] = (int)0;
						HX_STACK_LINE(180)
						::phoenix::Vector tmp9 = this->origin;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(180)
						Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(180)
						e[(int)12] = tmp10;
						HX_STACK_LINE(180)
						e[(int)1] = (int)0;
						HX_STACK_LINE(180)
						e[(int)5] = (int)1;
						HX_STACK_LINE(180)
						e[(int)9] = (int)0;
						HX_STACK_LINE(180)
						::phoenix::Vector tmp11 = this->origin;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(180)
						Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						e[(int)13] = tmp12;
						HX_STACK_LINE(180)
						e[(int)2] = (int)0;
						HX_STACK_LINE(180)
						e[(int)6] = (int)0;
						HX_STACK_LINE(180)
						e[(int)10] = (int)1;
						HX_STACK_LINE(180)
						::phoenix::Vector tmp13 = this->origin;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						Float tmp14 = tmp13->z;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						e[(int)14] = tmp14;
						HX_STACK_LINE(180)
						e[(int)3] = (int)0;
						HX_STACK_LINE(180)
						e[(int)7] = (int)0;
						HX_STACK_LINE(180)
						e[(int)11] = (int)0;
						HX_STACK_LINE(180)
						e[(int)15] = (int)1;
						HX_STACK_LINE(180)
						_this;
					}
					HX_STACK_LINE(180)
					_this;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Spatial tmp8 = this->local;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = tmp8->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						Array< Float > ae = _this->elements;		HX_STACK_VAR(ae,"ae");
						HX_STACK_LINE(180)
						::phoenix::Matrix tmp9 = this->_rotation_matrix;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(180)
						Array< Float > be = tmp9->elements;		HX_STACK_VAR(be,"be");
						HX_STACK_LINE(180)
						Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(180)
						Float tmp10 = ae->__get((int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(180)
						Float a11 = tmp10;		HX_STACK_VAR(a11,"a11");
						HX_STACK_LINE(180)
						Float tmp11 = ae->__get((int)4);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(180)
						Float a12 = tmp11;		HX_STACK_VAR(a12,"a12");
						HX_STACK_LINE(180)
						Float tmp12 = ae->__get((int)8);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						Float a13 = tmp12;		HX_STACK_VAR(a13,"a13");
						HX_STACK_LINE(180)
						Float tmp13 = ae->__get((int)12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						Float a14 = tmp13;		HX_STACK_VAR(a14,"a14");
						HX_STACK_LINE(180)
						Float tmp14 = ae->__get((int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						Float a21 = tmp14;		HX_STACK_VAR(a21,"a21");
						HX_STACK_LINE(180)
						Float tmp15 = ae->__get((int)5);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(180)
						Float a22 = tmp15;		HX_STACK_VAR(a22,"a22");
						HX_STACK_LINE(180)
						Float tmp16 = ae->__get((int)9);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(180)
						Float a23 = tmp16;		HX_STACK_VAR(a23,"a23");
						HX_STACK_LINE(180)
						Float tmp17 = ae->__get((int)13);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(180)
						Float a24 = tmp17;		HX_STACK_VAR(a24,"a24");
						HX_STACK_LINE(180)
						Float tmp18 = ae->__get((int)2);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(180)
						Float a31 = tmp18;		HX_STACK_VAR(a31,"a31");
						HX_STACK_LINE(180)
						Float tmp19 = ae->__get((int)6);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(180)
						Float a32 = tmp19;		HX_STACK_VAR(a32,"a32");
						HX_STACK_LINE(180)
						Float tmp20 = ae->__get((int)10);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(180)
						Float a33 = tmp20;		HX_STACK_VAR(a33,"a33");
						HX_STACK_LINE(180)
						Float tmp21 = ae->__get((int)14);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(180)
						Float a34 = tmp21;		HX_STACK_VAR(a34,"a34");
						HX_STACK_LINE(180)
						Float tmp22 = ae->__get((int)3);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(180)
						Float a41 = tmp22;		HX_STACK_VAR(a41,"a41");
						HX_STACK_LINE(180)
						Float tmp23 = ae->__get((int)7);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(180)
						Float a42 = tmp23;		HX_STACK_VAR(a42,"a42");
						HX_STACK_LINE(180)
						Float tmp24 = ae->__get((int)11);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(180)
						Float a43 = tmp24;		HX_STACK_VAR(a43,"a43");
						HX_STACK_LINE(180)
						Float tmp25 = ae->__get((int)15);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(180)
						Float a44 = tmp25;		HX_STACK_VAR(a44,"a44");
						HX_STACK_LINE(180)
						Float tmp26 = be->__get((int)0);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(180)
						Float b11 = tmp26;		HX_STACK_VAR(b11,"b11");
						HX_STACK_LINE(180)
						Float tmp27 = be->__get((int)4);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(180)
						Float b12 = tmp27;		HX_STACK_VAR(b12,"b12");
						HX_STACK_LINE(180)
						Float tmp28 = be->__get((int)8);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(180)
						Float b13 = tmp28;		HX_STACK_VAR(b13,"b13");
						HX_STACK_LINE(180)
						Float tmp29 = be->__get((int)12);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(180)
						Float b14 = tmp29;		HX_STACK_VAR(b14,"b14");
						HX_STACK_LINE(180)
						Float tmp30 = be->__get((int)1);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(180)
						Float b21 = tmp30;		HX_STACK_VAR(b21,"b21");
						HX_STACK_LINE(180)
						Float tmp31 = be->__get((int)5);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(180)
						Float b22 = tmp31;		HX_STACK_VAR(b22,"b22");
						HX_STACK_LINE(180)
						Float tmp32 = be->__get((int)9);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(180)
						Float b23 = tmp32;		HX_STACK_VAR(b23,"b23");
						HX_STACK_LINE(180)
						Float tmp33 = be->__get((int)13);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(180)
						Float b24 = tmp33;		HX_STACK_VAR(b24,"b24");
						HX_STACK_LINE(180)
						Float tmp34 = be->__get((int)2);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(180)
						Float b31 = tmp34;		HX_STACK_VAR(b31,"b31");
						HX_STACK_LINE(180)
						Float tmp35 = be->__get((int)6);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(180)
						Float b32 = tmp35;		HX_STACK_VAR(b32,"b32");
						HX_STACK_LINE(180)
						Float tmp36 = be->__get((int)10);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(180)
						Float b33 = tmp36;		HX_STACK_VAR(b33,"b33");
						HX_STACK_LINE(180)
						Float tmp37 = be->__get((int)14);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(180)
						Float b34 = tmp37;		HX_STACK_VAR(b34,"b34");
						HX_STACK_LINE(180)
						Float tmp38 = be->__get((int)3);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(180)
						Float b41 = tmp38;		HX_STACK_VAR(b41,"b41");
						HX_STACK_LINE(180)
						Float tmp39 = be->__get((int)7);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(180)
						Float b42 = tmp39;		HX_STACK_VAR(b42,"b42");
						HX_STACK_LINE(180)
						Float tmp40 = be->__get((int)11);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(180)
						Float b43 = tmp40;		HX_STACK_VAR(b43,"b43");
						HX_STACK_LINE(180)
						Float tmp41 = be->__get((int)15);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(180)
						Float b44 = tmp41;		HX_STACK_VAR(b44,"b44");
						HX_STACK_LINE(180)
						Float tmp42 = (a11 * b11);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(180)
						Float tmp43 = (a12 * b21);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(180)
						Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(180)
						Float tmp45 = (a13 * b31);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(180)
						Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(180)
						Float tmp47 = (a14 * b41);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(180)
						Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(180)
						te[(int)0] = tmp48;
						HX_STACK_LINE(180)
						Float tmp49 = (a11 * b12);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(180)
						Float tmp50 = (a12 * b22);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(180)
						Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(180)
						Float tmp52 = (a13 * b32);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(180)
						Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(180)
						Float tmp54 = (a14 * b42);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(180)
						Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(180)
						te[(int)4] = tmp55;
						HX_STACK_LINE(180)
						Float tmp56 = (a11 * b13);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(180)
						Float tmp57 = (a12 * b23);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(180)
						Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(180)
						Float tmp59 = (a13 * b33);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(180)
						Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(180)
						Float tmp61 = (a14 * b43);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(180)
						Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(180)
						te[(int)8] = tmp62;
						HX_STACK_LINE(180)
						Float tmp63 = (a11 * b14);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(180)
						Float tmp64 = (a12 * b24);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(180)
						Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(180)
						Float tmp66 = (a13 * b34);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(180)
						Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(180)
						Float tmp68 = (a14 * b44);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(180)
						Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(180)
						te[(int)12] = tmp69;
						HX_STACK_LINE(180)
						Float tmp70 = (a21 * b11);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(180)
						Float tmp71 = (a22 * b21);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(180)
						Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(180)
						Float tmp73 = (a23 * b31);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(180)
						Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(180)
						Float tmp75 = (a24 * b41);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(180)
						Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(180)
						te[(int)1] = tmp76;
						HX_STACK_LINE(180)
						Float tmp77 = (a21 * b12);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(180)
						Float tmp78 = (a22 * b22);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(180)
						Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(180)
						Float tmp80 = (a23 * b32);		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(180)
						Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(180)
						Float tmp82 = (a24 * b42);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(180)
						Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(180)
						te[(int)5] = tmp83;
						HX_STACK_LINE(180)
						Float tmp84 = (a21 * b13);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(180)
						Float tmp85 = (a22 * b23);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(180)
						Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(180)
						Float tmp87 = (a23 * b33);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(180)
						Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(180)
						Float tmp89 = (a24 * b43);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(180)
						Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(180)
						te[(int)9] = tmp90;
						HX_STACK_LINE(180)
						Float tmp91 = (a21 * b14);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(180)
						Float tmp92 = (a22 * b24);		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(180)
						Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(180)
						Float tmp94 = (a23 * b34);		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(180)
						Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(180)
						Float tmp96 = (a24 * b44);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(180)
						Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(180)
						te[(int)13] = tmp97;
						HX_STACK_LINE(180)
						Float tmp98 = (a31 * b11);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(180)
						Float tmp99 = (a32 * b21);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(180)
						Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(180)
						Float tmp101 = (a33 * b31);		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(180)
						Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(180)
						Float tmp103 = (a34 * b41);		HX_STACK_VAR(tmp103,"tmp103");
						HX_STACK_LINE(180)
						Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(180)
						te[(int)2] = tmp104;
						HX_STACK_LINE(180)
						Float tmp105 = (a31 * b12);		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(180)
						Float tmp106 = (a32 * b22);		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(180)
						Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(180)
						Float tmp108 = (a33 * b32);		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(180)
						Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(180)
						Float tmp110 = (a34 * b42);		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(180)
						Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(180)
						te[(int)6] = tmp111;
						HX_STACK_LINE(180)
						Float tmp112 = (a31 * b13);		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(180)
						Float tmp113 = (a32 * b23);		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(180)
						Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(180)
						Float tmp115 = (a33 * b33);		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(180)
						Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(180)
						Float tmp117 = (a34 * b43);		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(180)
						Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(180)
						te[(int)10] = tmp118;
						HX_STACK_LINE(180)
						Float tmp119 = (a31 * b14);		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(180)
						Float tmp120 = (a32 * b24);		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(180)
						Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(180)
						Float tmp122 = (a33 * b34);		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(180)
						Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(180)
						Float tmp124 = (a34 * b44);		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(180)
						Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(180)
						te[(int)14] = tmp125;
						HX_STACK_LINE(180)
						Float tmp126 = (a41 * b11);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(180)
						Float tmp127 = (a42 * b21);		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(180)
						Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(180)
						Float tmp129 = (a43 * b31);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(180)
						Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(180)
						Float tmp131 = (a44 * b41);		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(180)
						Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(180)
						te[(int)3] = tmp132;
						HX_STACK_LINE(180)
						Float tmp133 = (a41 * b12);		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(180)
						Float tmp134 = (a42 * b22);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(180)
						Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(180)
						Float tmp136 = (a43 * b32);		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(180)
						Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(180)
						Float tmp138 = (a44 * b42);		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(180)
						Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(180)
						te[(int)7] = tmp139;
						HX_STACK_LINE(180)
						Float tmp140 = (a41 * b13);		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(180)
						Float tmp141 = (a42 * b23);		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(180)
						Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(180)
						Float tmp143 = (a43 * b33);		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(180)
						Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
						HX_STACK_LINE(180)
						Float tmp145 = (a44 * b43);		HX_STACK_VAR(tmp145,"tmp145");
						HX_STACK_LINE(180)
						Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
						HX_STACK_LINE(180)
						te[(int)11] = tmp146;
						HX_STACK_LINE(180)
						Float tmp147 = (a41 * b14);		HX_STACK_VAR(tmp147,"tmp147");
						HX_STACK_LINE(180)
						Float tmp148 = (a42 * b24);		HX_STACK_VAR(tmp148,"tmp148");
						HX_STACK_LINE(180)
						Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
						HX_STACK_LINE(180)
						Float tmp150 = (a43 * b34);		HX_STACK_VAR(tmp150,"tmp150");
						HX_STACK_LINE(180)
						Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
						HX_STACK_LINE(180)
						Float tmp152 = (a44 * b44);		HX_STACK_VAR(tmp152,"tmp152");
						HX_STACK_LINE(180)
						Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
						HX_STACK_LINE(180)
						te[(int)15] = tmp153;
						HX_STACK_LINE(180)
						_this;
					}
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Spatial tmp8 = this->local;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = tmp8->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					::phoenix::Spatial tmp9 = this->local;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(180)
					::phoenix::Vector _v = tmp9->scale;		HX_STACK_VAR(_v,"_v");
					HX_STACK_LINE(180)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(180)
					Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(180)
					Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(180)
					Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(180)
					Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)0],tmp10);
					HX_STACK_LINE(180)
					Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)4],tmp11);
					HX_STACK_LINE(180)
					Float tmp12 = _z;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)8],tmp12);
					HX_STACK_LINE(180)
					Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)1],tmp13);
					HX_STACK_LINE(180)
					Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)5],tmp14);
					HX_STACK_LINE(180)
					Float tmp15 = _z;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)9],tmp15);
					HX_STACK_LINE(180)
					Float tmp16 = _x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)2],tmp16);
					HX_STACK_LINE(180)
					Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)6],tmp17);
					HX_STACK_LINE(180)
					Float tmp18 = _z;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)10],tmp18);
					HX_STACK_LINE(180)
					Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)3],tmp19);
					HX_STACK_LINE(180)
					Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)7],tmp20);
					HX_STACK_LINE(180)
					Float tmp21 = _z;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(180)
					hx::MultEq(te[(int)11],tmp21);
					HX_STACK_LINE(180)
					_this;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Spatial tmp8 = this->local;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = tmp8->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					::phoenix::Spatial tmp9 = this->local;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(180)
					::phoenix::Vector _v = tmp9->pos;		HX_STACK_VAR(_v,"_v");
					HX_STACK_LINE(180)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(180)
					Float tmp10 = _v->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(180)
					te[(int)12] = tmp10;
					HX_STACK_LINE(180)
					Float tmp11 = _v->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(180)
					te[(int)13] = tmp11;
					HX_STACK_LINE(180)
					Float tmp12 = _v->z;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(180)
					te[(int)14] = tmp12;
					HX_STACK_LINE(180)
					_this;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Spatial tmp8 = this->local;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(180)
					::phoenix::Matrix _this = tmp8->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						Array< Float > ae = _this->elements;		HX_STACK_VAR(ae,"ae");
						HX_STACK_LINE(180)
						::phoenix::Matrix tmp9 = this->_origin_undo_matrix;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(180)
						Array< Float > be = tmp9->elements;		HX_STACK_VAR(be,"be");
						HX_STACK_LINE(180)
						Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(180)
						Float tmp10 = ae->__get((int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(180)
						Float a11 = tmp10;		HX_STACK_VAR(a11,"a11");
						HX_STACK_LINE(180)
						Float tmp11 = ae->__get((int)4);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(180)
						Float a12 = tmp11;		HX_STACK_VAR(a12,"a12");
						HX_STACK_LINE(180)
						Float tmp12 = ae->__get((int)8);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						Float a13 = tmp12;		HX_STACK_VAR(a13,"a13");
						HX_STACK_LINE(180)
						Float tmp13 = ae->__get((int)12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						Float a14 = tmp13;		HX_STACK_VAR(a14,"a14");
						HX_STACK_LINE(180)
						Float tmp14 = ae->__get((int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						Float a21 = tmp14;		HX_STACK_VAR(a21,"a21");
						HX_STACK_LINE(180)
						Float tmp15 = ae->__get((int)5);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(180)
						Float a22 = tmp15;		HX_STACK_VAR(a22,"a22");
						HX_STACK_LINE(180)
						Float tmp16 = ae->__get((int)9);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(180)
						Float a23 = tmp16;		HX_STACK_VAR(a23,"a23");
						HX_STACK_LINE(180)
						Float tmp17 = ae->__get((int)13);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(180)
						Float a24 = tmp17;		HX_STACK_VAR(a24,"a24");
						HX_STACK_LINE(180)
						Float tmp18 = ae->__get((int)2);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(180)
						Float a31 = tmp18;		HX_STACK_VAR(a31,"a31");
						HX_STACK_LINE(180)
						Float tmp19 = ae->__get((int)6);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(180)
						Float a32 = tmp19;		HX_STACK_VAR(a32,"a32");
						HX_STACK_LINE(180)
						Float tmp20 = ae->__get((int)10);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(180)
						Float a33 = tmp20;		HX_STACK_VAR(a33,"a33");
						HX_STACK_LINE(180)
						Float tmp21 = ae->__get((int)14);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(180)
						Float a34 = tmp21;		HX_STACK_VAR(a34,"a34");
						HX_STACK_LINE(180)
						Float tmp22 = ae->__get((int)3);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(180)
						Float a41 = tmp22;		HX_STACK_VAR(a41,"a41");
						HX_STACK_LINE(180)
						Float tmp23 = ae->__get((int)7);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(180)
						Float a42 = tmp23;		HX_STACK_VAR(a42,"a42");
						HX_STACK_LINE(180)
						Float tmp24 = ae->__get((int)11);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(180)
						Float a43 = tmp24;		HX_STACK_VAR(a43,"a43");
						HX_STACK_LINE(180)
						Float tmp25 = ae->__get((int)15);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(180)
						Float a44 = tmp25;		HX_STACK_VAR(a44,"a44");
						HX_STACK_LINE(180)
						Float tmp26 = be->__get((int)0);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(180)
						Float b11 = tmp26;		HX_STACK_VAR(b11,"b11");
						HX_STACK_LINE(180)
						Float tmp27 = be->__get((int)4);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(180)
						Float b12 = tmp27;		HX_STACK_VAR(b12,"b12");
						HX_STACK_LINE(180)
						Float tmp28 = be->__get((int)8);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(180)
						Float b13 = tmp28;		HX_STACK_VAR(b13,"b13");
						HX_STACK_LINE(180)
						Float tmp29 = be->__get((int)12);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(180)
						Float b14 = tmp29;		HX_STACK_VAR(b14,"b14");
						HX_STACK_LINE(180)
						Float tmp30 = be->__get((int)1);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(180)
						Float b21 = tmp30;		HX_STACK_VAR(b21,"b21");
						HX_STACK_LINE(180)
						Float tmp31 = be->__get((int)5);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(180)
						Float b22 = tmp31;		HX_STACK_VAR(b22,"b22");
						HX_STACK_LINE(180)
						Float tmp32 = be->__get((int)9);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(180)
						Float b23 = tmp32;		HX_STACK_VAR(b23,"b23");
						HX_STACK_LINE(180)
						Float tmp33 = be->__get((int)13);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(180)
						Float b24 = tmp33;		HX_STACK_VAR(b24,"b24");
						HX_STACK_LINE(180)
						Float tmp34 = be->__get((int)2);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(180)
						Float b31 = tmp34;		HX_STACK_VAR(b31,"b31");
						HX_STACK_LINE(180)
						Float tmp35 = be->__get((int)6);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(180)
						Float b32 = tmp35;		HX_STACK_VAR(b32,"b32");
						HX_STACK_LINE(180)
						Float tmp36 = be->__get((int)10);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(180)
						Float b33 = tmp36;		HX_STACK_VAR(b33,"b33");
						HX_STACK_LINE(180)
						Float tmp37 = be->__get((int)14);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(180)
						Float b34 = tmp37;		HX_STACK_VAR(b34,"b34");
						HX_STACK_LINE(180)
						Float tmp38 = be->__get((int)3);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(180)
						Float b41 = tmp38;		HX_STACK_VAR(b41,"b41");
						HX_STACK_LINE(180)
						Float tmp39 = be->__get((int)7);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(180)
						Float b42 = tmp39;		HX_STACK_VAR(b42,"b42");
						HX_STACK_LINE(180)
						Float tmp40 = be->__get((int)11);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(180)
						Float b43 = tmp40;		HX_STACK_VAR(b43,"b43");
						HX_STACK_LINE(180)
						Float tmp41 = be->__get((int)15);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(180)
						Float b44 = tmp41;		HX_STACK_VAR(b44,"b44");
						HX_STACK_LINE(180)
						Float tmp42 = (a11 * b11);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(180)
						Float tmp43 = (a12 * b21);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(180)
						Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(180)
						Float tmp45 = (a13 * b31);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(180)
						Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(180)
						Float tmp47 = (a14 * b41);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(180)
						Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(180)
						te[(int)0] = tmp48;
						HX_STACK_LINE(180)
						Float tmp49 = (a11 * b12);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(180)
						Float tmp50 = (a12 * b22);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(180)
						Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(180)
						Float tmp52 = (a13 * b32);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(180)
						Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(180)
						Float tmp54 = (a14 * b42);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(180)
						Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(180)
						te[(int)4] = tmp55;
						HX_STACK_LINE(180)
						Float tmp56 = (a11 * b13);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(180)
						Float tmp57 = (a12 * b23);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(180)
						Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(180)
						Float tmp59 = (a13 * b33);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(180)
						Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(180)
						Float tmp61 = (a14 * b43);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(180)
						Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(180)
						te[(int)8] = tmp62;
						HX_STACK_LINE(180)
						Float tmp63 = (a11 * b14);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(180)
						Float tmp64 = (a12 * b24);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(180)
						Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(180)
						Float tmp66 = (a13 * b34);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(180)
						Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(180)
						Float tmp68 = (a14 * b44);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(180)
						Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(180)
						te[(int)12] = tmp69;
						HX_STACK_LINE(180)
						Float tmp70 = (a21 * b11);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(180)
						Float tmp71 = (a22 * b21);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(180)
						Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(180)
						Float tmp73 = (a23 * b31);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(180)
						Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(180)
						Float tmp75 = (a24 * b41);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(180)
						Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(180)
						te[(int)1] = tmp76;
						HX_STACK_LINE(180)
						Float tmp77 = (a21 * b12);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(180)
						Float tmp78 = (a22 * b22);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(180)
						Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(180)
						Float tmp80 = (a23 * b32);		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(180)
						Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(180)
						Float tmp82 = (a24 * b42);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(180)
						Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(180)
						te[(int)5] = tmp83;
						HX_STACK_LINE(180)
						Float tmp84 = (a21 * b13);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(180)
						Float tmp85 = (a22 * b23);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(180)
						Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(180)
						Float tmp87 = (a23 * b33);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(180)
						Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(180)
						Float tmp89 = (a24 * b43);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(180)
						Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(180)
						te[(int)9] = tmp90;
						HX_STACK_LINE(180)
						Float tmp91 = (a21 * b14);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(180)
						Float tmp92 = (a22 * b24);		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(180)
						Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(180)
						Float tmp94 = (a23 * b34);		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(180)
						Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(180)
						Float tmp96 = (a24 * b44);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(180)
						Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(180)
						te[(int)13] = tmp97;
						HX_STACK_LINE(180)
						Float tmp98 = (a31 * b11);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(180)
						Float tmp99 = (a32 * b21);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(180)
						Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(180)
						Float tmp101 = (a33 * b31);		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(180)
						Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(180)
						Float tmp103 = (a34 * b41);		HX_STACK_VAR(tmp103,"tmp103");
						HX_STACK_LINE(180)
						Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(180)
						te[(int)2] = tmp104;
						HX_STACK_LINE(180)
						Float tmp105 = (a31 * b12);		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(180)
						Float tmp106 = (a32 * b22);		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(180)
						Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(180)
						Float tmp108 = (a33 * b32);		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(180)
						Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(180)
						Float tmp110 = (a34 * b42);		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(180)
						Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(180)
						te[(int)6] = tmp111;
						HX_STACK_LINE(180)
						Float tmp112 = (a31 * b13);		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(180)
						Float tmp113 = (a32 * b23);		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(180)
						Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(180)
						Float tmp115 = (a33 * b33);		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(180)
						Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(180)
						Float tmp117 = (a34 * b43);		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(180)
						Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(180)
						te[(int)10] = tmp118;
						HX_STACK_LINE(180)
						Float tmp119 = (a31 * b14);		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(180)
						Float tmp120 = (a32 * b24);		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(180)
						Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(180)
						Float tmp122 = (a33 * b34);		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(180)
						Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(180)
						Float tmp124 = (a34 * b44);		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(180)
						Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(180)
						te[(int)14] = tmp125;
						HX_STACK_LINE(180)
						Float tmp126 = (a41 * b11);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(180)
						Float tmp127 = (a42 * b21);		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(180)
						Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(180)
						Float tmp129 = (a43 * b31);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(180)
						Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(180)
						Float tmp131 = (a44 * b41);		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(180)
						Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(180)
						te[(int)3] = tmp132;
						HX_STACK_LINE(180)
						Float tmp133 = (a41 * b12);		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(180)
						Float tmp134 = (a42 * b22);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(180)
						Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(180)
						Float tmp136 = (a43 * b32);		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(180)
						Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(180)
						Float tmp138 = (a44 * b42);		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(180)
						Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(180)
						te[(int)7] = tmp139;
						HX_STACK_LINE(180)
						Float tmp140 = (a41 * b13);		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(180)
						Float tmp141 = (a42 * b23);		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(180)
						Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(180)
						Float tmp143 = (a43 * b33);		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(180)
						Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
						HX_STACK_LINE(180)
						Float tmp145 = (a44 * b43);		HX_STACK_VAR(tmp145,"tmp145");
						HX_STACK_LINE(180)
						Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
						HX_STACK_LINE(180)
						te[(int)11] = tmp146;
						HX_STACK_LINE(180)
						Float tmp147 = (a41 * b14);		HX_STACK_VAR(tmp147,"tmp147");
						HX_STACK_LINE(180)
						Float tmp148 = (a42 * b24);		HX_STACK_VAR(tmp148,"tmp148");
						HX_STACK_LINE(180)
						Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
						HX_STACK_LINE(180)
						Float tmp150 = (a43 * b34);		HX_STACK_VAR(tmp150,"tmp150");
						HX_STACK_LINE(180)
						Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
						HX_STACK_LINE(180)
						Float tmp152 = (a44 * b44);		HX_STACK_VAR(tmp152,"tmp152");
						HX_STACK_LINE(180)
						Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
						HX_STACK_LINE(180)
						te[(int)15] = tmp153;
						HX_STACK_LINE(180)
						_this;
					}
				}
				HX_STACK_LINE(180)
				::phoenix::Transform tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(180)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(180)
				if ((tmp9)){
					HX_STACK_LINE(180)
					::phoenix::Spatial tmp10 = this->get_world();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(180)
					::phoenix::Spatial _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					::phoenix::Matrix tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Matrix tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Spatial tmp13 = this->get_world();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(180)
							::phoenix::Spatial _this1 = tmp13;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(180)
							tmp12 = _this1->matrix;
						}
						HX_STACK_LINE(180)
						::phoenix::Matrix _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(180)
						::phoenix::Matrix tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Transform tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(180)
							::phoenix::Spatial tmp15 = tmp14->get_world();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(180)
							::phoenix::Spatial _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(180)
							tmp13 = _this2->matrix;
						}
						HX_STACK_LINE(180)
						::phoenix::Matrix _a = tmp13;		HX_STACK_VAR(_a,"_a");
						HX_STACK_LINE(180)
						Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
						HX_STACK_LINE(180)
						::phoenix::Spatial tmp14 = this->local;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						Array< Float > be = tmp14->matrix->elements;		HX_STACK_VAR(be,"be");
						HX_STACK_LINE(180)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(180)
						Float tmp15 = ae->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(180)
						Float a11 = tmp15;		HX_STACK_VAR(a11,"a11");
						HX_STACK_LINE(180)
						Float tmp16 = ae->__get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(180)
						Float a12 = tmp16;		HX_STACK_VAR(a12,"a12");
						HX_STACK_LINE(180)
						Float tmp17 = ae->__get((int)8);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(180)
						Float a13 = tmp17;		HX_STACK_VAR(a13,"a13");
						HX_STACK_LINE(180)
						Float tmp18 = ae->__get((int)12);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(180)
						Float a14 = tmp18;		HX_STACK_VAR(a14,"a14");
						HX_STACK_LINE(180)
						Float tmp19 = ae->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(180)
						Float a21 = tmp19;		HX_STACK_VAR(a21,"a21");
						HX_STACK_LINE(180)
						Float tmp20 = ae->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(180)
						Float a22 = tmp20;		HX_STACK_VAR(a22,"a22");
						HX_STACK_LINE(180)
						Float tmp21 = ae->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(180)
						Float a23 = tmp21;		HX_STACK_VAR(a23,"a23");
						HX_STACK_LINE(180)
						Float tmp22 = ae->__get((int)13);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(180)
						Float a24 = tmp22;		HX_STACK_VAR(a24,"a24");
						HX_STACK_LINE(180)
						Float tmp23 = ae->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(180)
						Float a31 = tmp23;		HX_STACK_VAR(a31,"a31");
						HX_STACK_LINE(180)
						Float tmp24 = ae->__get((int)6);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(180)
						Float a32 = tmp24;		HX_STACK_VAR(a32,"a32");
						HX_STACK_LINE(180)
						Float tmp25 = ae->__get((int)10);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(180)
						Float a33 = tmp25;		HX_STACK_VAR(a33,"a33");
						HX_STACK_LINE(180)
						Float tmp26 = ae->__get((int)14);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(180)
						Float a34 = tmp26;		HX_STACK_VAR(a34,"a34");
						HX_STACK_LINE(180)
						Float tmp27 = ae->__get((int)3);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(180)
						Float a41 = tmp27;		HX_STACK_VAR(a41,"a41");
						HX_STACK_LINE(180)
						Float tmp28 = ae->__get((int)7);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(180)
						Float a42 = tmp28;		HX_STACK_VAR(a42,"a42");
						HX_STACK_LINE(180)
						Float tmp29 = ae->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(180)
						Float a43 = tmp29;		HX_STACK_VAR(a43,"a43");
						HX_STACK_LINE(180)
						Float tmp30 = ae->__get((int)15);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(180)
						Float a44 = tmp30;		HX_STACK_VAR(a44,"a44");
						HX_STACK_LINE(180)
						Float tmp31 = be->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(180)
						Float b11 = tmp31;		HX_STACK_VAR(b11,"b11");
						HX_STACK_LINE(180)
						Float tmp32 = be->__get((int)4);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(180)
						Float b12 = tmp32;		HX_STACK_VAR(b12,"b12");
						HX_STACK_LINE(180)
						Float tmp33 = be->__get((int)8);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(180)
						Float b13 = tmp33;		HX_STACK_VAR(b13,"b13");
						HX_STACK_LINE(180)
						Float tmp34 = be->__get((int)12);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(180)
						Float b14 = tmp34;		HX_STACK_VAR(b14,"b14");
						HX_STACK_LINE(180)
						Float tmp35 = be->__get((int)1);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(180)
						Float b21 = tmp35;		HX_STACK_VAR(b21,"b21");
						HX_STACK_LINE(180)
						Float tmp36 = be->__get((int)5);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(180)
						Float b22 = tmp36;		HX_STACK_VAR(b22,"b22");
						HX_STACK_LINE(180)
						Float tmp37 = be->__get((int)9);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(180)
						Float b23 = tmp37;		HX_STACK_VAR(b23,"b23");
						HX_STACK_LINE(180)
						Float tmp38 = be->__get((int)13);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(180)
						Float b24 = tmp38;		HX_STACK_VAR(b24,"b24");
						HX_STACK_LINE(180)
						Float tmp39 = be->__get((int)2);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(180)
						Float b31 = tmp39;		HX_STACK_VAR(b31,"b31");
						HX_STACK_LINE(180)
						Float tmp40 = be->__get((int)6);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(180)
						Float b32 = tmp40;		HX_STACK_VAR(b32,"b32");
						HX_STACK_LINE(180)
						Float tmp41 = be->__get((int)10);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(180)
						Float b33 = tmp41;		HX_STACK_VAR(b33,"b33");
						HX_STACK_LINE(180)
						Float tmp42 = be->__get((int)14);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(180)
						Float b34 = tmp42;		HX_STACK_VAR(b34,"b34");
						HX_STACK_LINE(180)
						Float tmp43 = be->__get((int)3);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(180)
						Float b41 = tmp43;		HX_STACK_VAR(b41,"b41");
						HX_STACK_LINE(180)
						Float tmp44 = be->__get((int)7);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(180)
						Float b42 = tmp44;		HX_STACK_VAR(b42,"b42");
						HX_STACK_LINE(180)
						Float tmp45 = be->__get((int)11);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(180)
						Float b43 = tmp45;		HX_STACK_VAR(b43,"b43");
						HX_STACK_LINE(180)
						Float tmp46 = be->__get((int)15);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(180)
						Float b44 = tmp46;		HX_STACK_VAR(b44,"b44");
						HX_STACK_LINE(180)
						Float tmp47 = (a11 * b11);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(180)
						Float tmp48 = (a12 * b21);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(180)
						Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(180)
						Float tmp50 = (a13 * b31);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(180)
						Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(180)
						Float tmp52 = (a14 * b41);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(180)
						Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(180)
						te[(int)0] = tmp53;
						HX_STACK_LINE(180)
						Float tmp54 = (a11 * b12);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(180)
						Float tmp55 = (a12 * b22);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(180)
						Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(180)
						Float tmp57 = (a13 * b32);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(180)
						Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(180)
						Float tmp59 = (a14 * b42);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(180)
						Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(180)
						te[(int)4] = tmp60;
						HX_STACK_LINE(180)
						Float tmp61 = (a11 * b13);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(180)
						Float tmp62 = (a12 * b23);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(180)
						Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(180)
						Float tmp64 = (a13 * b33);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(180)
						Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(180)
						Float tmp66 = (a14 * b43);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(180)
						Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(180)
						te[(int)8] = tmp67;
						HX_STACK_LINE(180)
						Float tmp68 = (a11 * b14);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(180)
						Float tmp69 = (a12 * b24);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(180)
						Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(180)
						Float tmp71 = (a13 * b34);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(180)
						Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(180)
						Float tmp73 = (a14 * b44);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(180)
						Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(180)
						te[(int)12] = tmp74;
						HX_STACK_LINE(180)
						Float tmp75 = (a21 * b11);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(180)
						Float tmp76 = (a22 * b21);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(180)
						Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(180)
						Float tmp78 = (a23 * b31);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(180)
						Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(180)
						Float tmp80 = (a24 * b41);		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(180)
						Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(180)
						te[(int)1] = tmp81;
						HX_STACK_LINE(180)
						Float tmp82 = (a21 * b12);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(180)
						Float tmp83 = (a22 * b22);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(180)
						Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(180)
						Float tmp85 = (a23 * b32);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(180)
						Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(180)
						Float tmp87 = (a24 * b42);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(180)
						Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(180)
						te[(int)5] = tmp88;
						HX_STACK_LINE(180)
						Float tmp89 = (a21 * b13);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(180)
						Float tmp90 = (a22 * b23);		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(180)
						Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(180)
						Float tmp92 = (a23 * b33);		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(180)
						Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(180)
						Float tmp94 = (a24 * b43);		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(180)
						Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(180)
						te[(int)9] = tmp95;
						HX_STACK_LINE(180)
						Float tmp96 = (a21 * b14);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(180)
						Float tmp97 = (a22 * b24);		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(180)
						Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(180)
						Float tmp99 = (a23 * b34);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(180)
						Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(180)
						Float tmp101 = (a24 * b44);		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(180)
						Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(180)
						te[(int)13] = tmp102;
						HX_STACK_LINE(180)
						Float tmp103 = (a31 * b11);		HX_STACK_VAR(tmp103,"tmp103");
						HX_STACK_LINE(180)
						Float tmp104 = (a32 * b21);		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(180)
						Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(180)
						Float tmp106 = (a33 * b31);		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(180)
						Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(180)
						Float tmp108 = (a34 * b41);		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(180)
						Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(180)
						te[(int)2] = tmp109;
						HX_STACK_LINE(180)
						Float tmp110 = (a31 * b12);		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(180)
						Float tmp111 = (a32 * b22);		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(180)
						Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(180)
						Float tmp113 = (a33 * b32);		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(180)
						Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(180)
						Float tmp115 = (a34 * b42);		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(180)
						Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(180)
						te[(int)6] = tmp116;
						HX_STACK_LINE(180)
						Float tmp117 = (a31 * b13);		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(180)
						Float tmp118 = (a32 * b23);		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(180)
						Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(180)
						Float tmp120 = (a33 * b33);		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(180)
						Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(180)
						Float tmp122 = (a34 * b43);		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(180)
						Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(180)
						te[(int)10] = tmp123;
						HX_STACK_LINE(180)
						Float tmp124 = (a31 * b14);		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(180)
						Float tmp125 = (a32 * b24);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(180)
						Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(180)
						Float tmp127 = (a33 * b34);		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(180)
						Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(180)
						Float tmp129 = (a34 * b44);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(180)
						Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(180)
						te[(int)14] = tmp130;
						HX_STACK_LINE(180)
						Float tmp131 = (a41 * b11);		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(180)
						Float tmp132 = (a42 * b21);		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(180)
						Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(180)
						Float tmp134 = (a43 * b31);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(180)
						Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(180)
						Float tmp136 = (a44 * b41);		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(180)
						Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(180)
						te[(int)3] = tmp137;
						HX_STACK_LINE(180)
						Float tmp138 = (a41 * b12);		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(180)
						Float tmp139 = (a42 * b22);		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(180)
						Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(180)
						Float tmp141 = (a43 * b32);		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(180)
						Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(180)
						Float tmp143 = (a44 * b42);		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(180)
						Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
						HX_STACK_LINE(180)
						te[(int)7] = tmp144;
						HX_STACK_LINE(180)
						Float tmp145 = (a41 * b13);		HX_STACK_VAR(tmp145,"tmp145");
						HX_STACK_LINE(180)
						Float tmp146 = (a42 * b23);		HX_STACK_VAR(tmp146,"tmp146");
						HX_STACK_LINE(180)
						Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
						HX_STACK_LINE(180)
						Float tmp148 = (a43 * b33);		HX_STACK_VAR(tmp148,"tmp148");
						HX_STACK_LINE(180)
						Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
						HX_STACK_LINE(180)
						Float tmp150 = (a44 * b43);		HX_STACK_VAR(tmp150,"tmp150");
						HX_STACK_LINE(180)
						Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
						HX_STACK_LINE(180)
						te[(int)11] = tmp151;
						HX_STACK_LINE(180)
						Float tmp152 = (a41 * b14);		HX_STACK_VAR(tmp152,"tmp152");
						HX_STACK_LINE(180)
						Float tmp153 = (a42 * b24);		HX_STACK_VAR(tmp153,"tmp153");
						HX_STACK_LINE(180)
						Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
						HX_STACK_LINE(180)
						Float tmp155 = (a43 * b34);		HX_STACK_VAR(tmp155,"tmp155");
						HX_STACK_LINE(180)
						Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
						HX_STACK_LINE(180)
						Float tmp157 = (a44 * b44);		HX_STACK_VAR(tmp157,"tmp157");
						HX_STACK_LINE(180)
						Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
						HX_STACK_LINE(180)
						te[(int)15] = tmp158;
						HX_STACK_LINE(180)
						tmp11 = _this1;
					}
					HX_STACK_LINE(180)
					::phoenix::Matrix _m = tmp11;		HX_STACK_VAR(_m,"_m");
					HX_STACK_LINE(180)
					_this->matrix = _m;
					HX_STACK_LINE(180)
					bool tmp12 = (_m != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(180)
					if ((tmp12)){
						HX_STACK_LINE(180)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							cpp::ArrayBase array = _this->matrix->elements;		HX_STACK_VAR(array,"array");
							HX_STACK_LINE(180)
							::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(180)
							bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(180)
							if ((tmp14)){
								HX_STACK_LINE(180)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(180)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(180)
								bool tmp15 = (array != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(180)
								if ((tmp15)){
									HX_STACK_LINE(180)
									::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(180)
										::snow::api::buffers::ArrayBufferView _this1 = tmp17;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(180)
										_this1->byteOffset = (int)0;
										HX_STACK_LINE(180)
										_this1->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
										HX_STACK_LINE(180)
										int tmp18 = (_this1->length * _this1->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(180)
										_this1->byteLength = tmp18;
										HX_STACK_LINE(180)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(180)
										{
											HX_STACK_LINE(180)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(180)
											int tmp20 = _this1->byteLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(180)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(180)
											this2 = tmp21;
											HX_STACK_LINE(180)
											tmp19 = this2;
										}
										HX_STACK_LINE(180)
										_this1->buffer = tmp19;
										HX_STACK_LINE(180)
										_this1->copyFromArray(((Array< Float >)(array)),null());
										HX_STACK_LINE(180)
										tmp16 = _this1;
									}
									HX_STACK_LINE(180)
									this1 = tmp16;
								}
								else{
									HX_STACK_LINE(180)
									bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(180)
									if ((tmp16)){
										HX_STACK_LINE(180)
										::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(180)
										{
											HX_STACK_LINE(180)
											::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(180)
											::snow::api::buffers::ArrayBufferView _this1 = tmp18;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(180)
											::haxe::io::Bytes tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(180)
											::haxe::io::Bytes srcData = tmp19;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(180)
											int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(180)
											int srcLength = tmp20;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(180)
											int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(180)
											int srcByteOffset = tmp21;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(180)
											int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(180)
											int srcElementSize = tmp22;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(180)
											int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(180)
											int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(180)
											int tmp24 = _this1->type;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(180)
											bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(180)
											if ((tmp25)){
												HX_STACK_LINE(180)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(180)
												int tmp26 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(180)
												int cloneLength = tmp26;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(180)
												::haxe::io::Bytes tmp27;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(180)
												{
													HX_STACK_LINE(180)
													::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(180)
													int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(180)
													::haxe::io::Bytes tmp29 = ::haxe::io::Bytes_obj::alloc(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(180)
													this2 = tmp29;
													HX_STACK_LINE(180)
													tmp27 = this2;
												}
												HX_STACK_LINE(180)
												_this1->buffer = tmp27;
												HX_STACK_LINE(180)
												::haxe::io::Bytes tmp28 = srcData;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(180)
												int tmp29 = srcByteOffset;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(180)
												int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(180)
												_this1->buffer->blit((int)0,tmp28,tmp29,tmp30);
											}
											else{
												HX_STACK_LINE(180)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(180)
											int tmp26 = (_this1->bytesPerElement * srcLength);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(180)
											_this1->byteLength = tmp26;
											HX_STACK_LINE(180)
											_this1->byteOffset = (int)0;
											HX_STACK_LINE(180)
											_this1->length = srcLength;
											HX_STACK_LINE(180)
											tmp17 = _this1;
										}
										HX_STACK_LINE(180)
										this1 = tmp17;
									}
									else{
										HX_STACK_LINE(180)
										bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(180)
										if ((tmp17)){
											HX_STACK_LINE(180)
											::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(180)
											{
												HX_STACK_LINE(180)
												::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(180)
												::snow::api::buffers::ArrayBufferView _this1 = tmp19;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(180)
												bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(180)
												if ((tmp20)){
													HX_STACK_LINE(180)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
												HX_STACK_LINE(180)
												int tmp21 = hx::Mod((int)0,_this1->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(180)
												bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(180)
												if ((tmp22)){
													HX_STACK_LINE(180)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
												HX_STACK_LINE(180)
												int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(180)
												int bufferByteLength = tmp23;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(180)
												int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(180)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(180)
												bool tmp24 = true;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(180)
												if ((tmp24)){
													HX_STACK_LINE(180)
													int tmp25 = bufferByteLength;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(180)
													newByteLength = tmp25;
													HX_STACK_LINE(180)
													int tmp26 = hx::Mod(bufferByteLength,_this1->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(180)
													bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(180)
													if ((tmp27)){
														HX_STACK_LINE(180)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(180)
													bool tmp28 = (newByteLength < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(180)
													if ((tmp28)){
														HX_STACK_LINE(180)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(180)
													int tmp25 = (null() * _this1->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(180)
													newByteLength = tmp25;
													HX_STACK_LINE(180)
													int tmp26 = newByteLength;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(180)
													int newRange = tmp26;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(180)
													bool tmp27 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(180)
													if ((tmp27)){
														HX_STACK_LINE(180)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(180)
												_this1->buffer = null();
												HX_STACK_LINE(180)
												_this1->byteOffset = (int)0;
												HX_STACK_LINE(180)
												_this1->byteLength = newByteLength;
												HX_STACK_LINE(180)
												Float tmp25 = (Float(newByteLength) / Float(_this1->bytesPerElement));		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(180)
												int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(180)
												_this1->length = tmp26;
												HX_STACK_LINE(180)
												tmp18 = _this1;
											}
											HX_STACK_LINE(180)
											this1 = tmp18;
										}
										else{
											HX_STACK_LINE(180)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
										}
									}
								}
							}
							HX_STACK_LINE(180)
							tmp13 = this1;
						}
						HX_STACK_LINE(180)
						_this->floats = tmp13;
					}
					HX_STACK_LINE(180)
					_this->matrix;
				}
				else{
					HX_STACK_LINE(180)
					::phoenix::Spatial tmp10 = this->get_world();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(180)
					::phoenix::Spatial _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					::phoenix::Matrix tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::phoenix::Spatial tmp12 = this->local;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						Array< Float > te = tmp12->matrix->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(180)
						Float tmp13 = te->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						Float tmp14 = te->__get((int)4);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						Float tmp15 = te->__get((int)8);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(180)
						Float tmp16 = te->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(180)
						Float tmp17 = te->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(180)
						Float tmp18 = te->__get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(180)
						Float tmp19 = te->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(180)
						Float tmp20 = te->__get((int)13);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(180)
						Float tmp21 = te->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(180)
						Float tmp22 = te->__get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(180)
						Float tmp23 = te->__get((int)10);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(180)
						Float tmp24 = te->__get((int)14);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(180)
						Float tmp25 = te->__get((int)3);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(180)
						Float tmp26 = te->__get((int)7);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(180)
						Float tmp27 = te->__get((int)11);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(180)
						Float tmp28 = te->__get((int)15);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(180)
						tmp11 = ::phoenix::Matrix_obj::__new(tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28);
					}
					HX_STACK_LINE(180)
					::phoenix::Matrix _m = tmp11;		HX_STACK_VAR(_m,"_m");
					HX_STACK_LINE(180)
					_this->matrix = _m;
					HX_STACK_LINE(180)
					bool tmp12 = (_m != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(180)
					if ((tmp12)){
						HX_STACK_LINE(180)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							cpp::ArrayBase array = _this->matrix->elements;		HX_STACK_VAR(array,"array");
							HX_STACK_LINE(180)
							::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(180)
							bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(180)
							if ((tmp14)){
								HX_STACK_LINE(180)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(180)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(180)
								bool tmp15 = (array != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(180)
								if ((tmp15)){
									HX_STACK_LINE(180)
									::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(180)
									{
										HX_STACK_LINE(180)
										::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(180)
										::snow::api::buffers::ArrayBufferView _this1 = tmp17;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(180)
										_this1->byteOffset = (int)0;
										HX_STACK_LINE(180)
										_this1->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
										HX_STACK_LINE(180)
										int tmp18 = (_this1->length * _this1->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(180)
										_this1->byteLength = tmp18;
										HX_STACK_LINE(180)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(180)
										{
											HX_STACK_LINE(180)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(180)
											int tmp20 = _this1->byteLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(180)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(180)
											this2 = tmp21;
											HX_STACK_LINE(180)
											tmp19 = this2;
										}
										HX_STACK_LINE(180)
										_this1->buffer = tmp19;
										HX_STACK_LINE(180)
										_this1->copyFromArray(((Array< Float >)(array)),null());
										HX_STACK_LINE(180)
										tmp16 = _this1;
									}
									HX_STACK_LINE(180)
									this1 = tmp16;
								}
								else{
									HX_STACK_LINE(180)
									bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(180)
									if ((tmp16)){
										HX_STACK_LINE(180)
										::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(180)
										{
											HX_STACK_LINE(180)
											::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(180)
											::snow::api::buffers::ArrayBufferView _this1 = tmp18;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(180)
											::haxe::io::Bytes tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(180)
											::haxe::io::Bytes srcData = tmp19;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(180)
											int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(180)
											int srcLength = tmp20;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(180)
											int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(180)
											int srcByteOffset = tmp21;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(180)
											int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(180)
											int srcElementSize = tmp22;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(180)
											int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(180)
											int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(180)
											int tmp24 = _this1->type;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(180)
											bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(180)
											if ((tmp25)){
												HX_STACK_LINE(180)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(180)
												int tmp26 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(180)
												int cloneLength = tmp26;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(180)
												::haxe::io::Bytes tmp27;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(180)
												{
													HX_STACK_LINE(180)
													::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(180)
													int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(180)
													::haxe::io::Bytes tmp29 = ::haxe::io::Bytes_obj::alloc(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(180)
													this2 = tmp29;
													HX_STACK_LINE(180)
													tmp27 = this2;
												}
												HX_STACK_LINE(180)
												_this1->buffer = tmp27;
												HX_STACK_LINE(180)
												::haxe::io::Bytes tmp28 = srcData;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(180)
												int tmp29 = srcByteOffset;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(180)
												int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(180)
												_this1->buffer->blit((int)0,tmp28,tmp29,tmp30);
											}
											else{
												HX_STACK_LINE(180)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(180)
											int tmp26 = (_this1->bytesPerElement * srcLength);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(180)
											_this1->byteLength = tmp26;
											HX_STACK_LINE(180)
											_this1->byteOffset = (int)0;
											HX_STACK_LINE(180)
											_this1->length = srcLength;
											HX_STACK_LINE(180)
											tmp17 = _this1;
										}
										HX_STACK_LINE(180)
										this1 = tmp17;
									}
									else{
										HX_STACK_LINE(180)
										bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(180)
										if ((tmp17)){
											HX_STACK_LINE(180)
											::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(180)
											{
												HX_STACK_LINE(180)
												::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(180)
												::snow::api::buffers::ArrayBufferView _this1 = tmp19;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(180)
												bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(180)
												if ((tmp20)){
													HX_STACK_LINE(180)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
												HX_STACK_LINE(180)
												int tmp21 = hx::Mod((int)0,_this1->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(180)
												bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(180)
												if ((tmp22)){
													HX_STACK_LINE(180)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
												HX_STACK_LINE(180)
												int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(180)
												int bufferByteLength = tmp23;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(180)
												int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(180)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(180)
												bool tmp24 = true;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(180)
												if ((tmp24)){
													HX_STACK_LINE(180)
													int tmp25 = bufferByteLength;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(180)
													newByteLength = tmp25;
													HX_STACK_LINE(180)
													int tmp26 = hx::Mod(bufferByteLength,_this1->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(180)
													bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(180)
													if ((tmp27)){
														HX_STACK_LINE(180)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(180)
													bool tmp28 = (newByteLength < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(180)
													if ((tmp28)){
														HX_STACK_LINE(180)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(180)
													int tmp25 = (null() * _this1->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(180)
													newByteLength = tmp25;
													HX_STACK_LINE(180)
													int tmp26 = newByteLength;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(180)
													int newRange = tmp26;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(180)
													bool tmp27 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(180)
													if ((tmp27)){
														HX_STACK_LINE(180)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(180)
												_this1->buffer = null();
												HX_STACK_LINE(180)
												_this1->byteOffset = (int)0;
												HX_STACK_LINE(180)
												_this1->byteLength = newByteLength;
												HX_STACK_LINE(180)
												Float tmp25 = (Float(newByteLength) / Float(_this1->bytesPerElement));		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(180)
												int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(180)
												_this1->length = tmp26;
												HX_STACK_LINE(180)
												tmp18 = _this1;
											}
											HX_STACK_LINE(180)
											this1 = tmp18;
										}
										else{
											HX_STACK_LINE(180)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
										}
									}
								}
							}
							HX_STACK_LINE(180)
							tmp13 = this1;
						}
						HX_STACK_LINE(180)
						_this->floats = tmp13;
					}
					HX_STACK_LINE(180)
					_this->matrix;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::phoenix::Spatial tmp10 = this->get_world();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(180)
					::phoenix::Spatial _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(180)
					bool tmp11 = _this->auto_decompose;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(180)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(180)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(180)
					if ((tmp12)){
						HX_STACK_LINE(180)
						tmp13 = false;
					}
					else{
						HX_STACK_LINE(180)
						tmp13 = true;
					}
					HX_STACK_LINE(180)
					if ((tmp13)){
						HX_STACK_LINE(180)
						::phoenix::MatrixTransform tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Matrix _this1 = _this->matrix;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(180)
							::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
							HX_STACK_LINE(180)
							::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
							HX_STACK_LINE(180)
							::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
							HX_STACK_LINE(180)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(180)
							::phoenix::Matrix tmp15 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(180)
							::phoenix::Matrix matrix = tmp15;		HX_STACK_VAR(matrix,"matrix");
							HX_STACK_LINE(180)
							Float tmp16 = te->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(180)
							Float _ax_x = tmp16;		HX_STACK_VAR(_ax_x,"_ax_x");
							HX_STACK_LINE(180)
							Float tmp17 = te->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(180)
							Float _ax_y = tmp17;		HX_STACK_VAR(_ax_y,"_ax_y");
							HX_STACK_LINE(180)
							Float tmp18 = te->__get((int)2);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(180)
							Float _ax_z = tmp18;		HX_STACK_VAR(_ax_z,"_ax_z");
							HX_STACK_LINE(180)
							Float tmp19 = te->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(180)
							Float _ay_x = tmp19;		HX_STACK_VAR(_ay_x,"_ay_x");
							HX_STACK_LINE(180)
							Float tmp20 = te->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(180)
							Float _ay_y = tmp20;		HX_STACK_VAR(_ay_y,"_ay_y");
							HX_STACK_LINE(180)
							Float tmp21 = te->__get((int)6);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(180)
							Float _ay_z = tmp21;		HX_STACK_VAR(_ay_z,"_ay_z");
							HX_STACK_LINE(180)
							Float tmp22 = te->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(180)
							Float _az_x = tmp22;		HX_STACK_VAR(_az_x,"_az_x");
							HX_STACK_LINE(180)
							Float tmp23 = te->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(180)
							Float _az_y = tmp23;		HX_STACK_VAR(_az_y,"_az_y");
							HX_STACK_LINE(180)
							Float tmp24 = te->__get((int)10);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(180)
							Float _az_z = tmp24;		HX_STACK_VAR(_az_z,"_az_z");
							HX_STACK_LINE(180)
							Float tmp25 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(180)
							Float tmp26 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(180)
							Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(180)
							Float tmp28 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(180)
							Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(180)
							Float tmp30 = ::Math_obj::sqrt(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(180)
							Float _ax_length = tmp30;		HX_STACK_VAR(_ax_length,"_ax_length");
							HX_STACK_LINE(180)
							Float tmp31 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(180)
							Float tmp32 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(180)
							Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(180)
							Float tmp34 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(180)
							Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(180)
							Float tmp36 = ::Math_obj::sqrt(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(180)
							Float _ay_length = tmp36;		HX_STACK_VAR(_ay_length,"_ay_length");
							HX_STACK_LINE(180)
							Float tmp37 = (_az_x * _az_x);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(180)
							Float tmp38 = (_az_y * _az_y);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(180)
							Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(180)
							Float tmp40 = (_az_z * _az_z);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(180)
							Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(180)
							Float tmp42 = ::Math_obj::sqrt(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(180)
							Float _az_length = tmp42;		HX_STACK_VAR(_az_length,"_az_length");
							HX_STACK_LINE(180)
							bool tmp43 = (_quaternion == null());		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(180)
							if ((tmp43)){
								HX_STACK_LINE(180)
								::phoenix::Quaternion tmp44 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(180)
								_quaternion = tmp44;
							}
							HX_STACK_LINE(180)
							bool tmp44 = (_position == null());		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(180)
							if ((tmp44)){
								HX_STACK_LINE(180)
								Float tmp45 = te->__get((int)12);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(180)
								Float tmp46 = te->__get((int)13);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(180)
								Float tmp47 = te->__get((int)14);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(180)
								::phoenix::Vector tmp48 = ::phoenix::Vector_obj::__new(tmp45,tmp46,tmp47,null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(180)
								_position = tmp48;
							}
							else{
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									Float tmp45 = te->__get((int)12);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(180)
									Float _x = tmp45;		HX_STACK_VAR(_x,"_x");
									HX_STACK_LINE(180)
									_position->x = _x;
									HX_STACK_LINE(180)
									bool tmp46 = _position->_construct;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(180)
									if ((tmp46)){
										HX_STACK_LINE(180)
										_position->x;
									}
									else{
										HX_STACK_LINE(180)
										bool tmp47 = (_position->listen_x != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(180)
										bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(180)
										if ((tmp47)){
											HX_STACK_LINE(180)
											bool tmp49 = _position->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(180)
											bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(180)
											tmp48 = !(tmp50);
										}
										else{
											HX_STACK_LINE(180)
											tmp48 = false;
										}
										HX_STACK_LINE(180)
										if ((tmp48)){
											HX_STACK_LINE(180)
											Float tmp49 = _x;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(180)
											_position->listen_x(tmp49);
										}
										HX_STACK_LINE(180)
										_position->x;
									}
								}
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									Float tmp45 = te->__get((int)13);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(180)
									Float _y = tmp45;		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(180)
									_position->y = _y;
									HX_STACK_LINE(180)
									bool tmp46 = _position->_construct;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(180)
									if ((tmp46)){
										HX_STACK_LINE(180)
										_position->y;
									}
									else{
										HX_STACK_LINE(180)
										bool tmp47 = (_position->listen_y != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(180)
										bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(180)
										if ((tmp47)){
											HX_STACK_LINE(180)
											bool tmp49 = _position->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(180)
											bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(180)
											tmp48 = !(tmp50);
										}
										else{
											HX_STACK_LINE(180)
											tmp48 = false;
										}
										HX_STACK_LINE(180)
										if ((tmp48)){
											HX_STACK_LINE(180)
											Float tmp49 = _y;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(180)
											_position->listen_y(tmp49);
										}
										HX_STACK_LINE(180)
										_position->y;
									}
								}
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									Float tmp45 = te->__get((int)14);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(180)
									Float _z = tmp45;		HX_STACK_VAR(_z,"_z");
									HX_STACK_LINE(180)
									_position->z = _z;
									HX_STACK_LINE(180)
									bool tmp46 = _position->_construct;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(180)
									if ((tmp46)){
										HX_STACK_LINE(180)
										_position->z;
									}
									else{
										HX_STACK_LINE(180)
										bool tmp47 = (_position->listen_z != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(180)
										bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(180)
										if ((tmp47)){
											HX_STACK_LINE(180)
											bool tmp49 = _position->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(180)
											bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(180)
											tmp48 = !(tmp50);
										}
										else{
											HX_STACK_LINE(180)
											tmp48 = false;
										}
										HX_STACK_LINE(180)
										if ((tmp48)){
											HX_STACK_LINE(180)
											Float tmp49 = _z;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(180)
											_position->listen_z(tmp49);
										}
										HX_STACK_LINE(180)
										_position->z;
									}
								}
							}
							HX_STACK_LINE(180)
							bool tmp45 = (_scale == null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(180)
							if ((tmp45)){
								HX_STACK_LINE(180)
								::phoenix::Vector tmp46 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(180)
								_scale = tmp46;
							}
							else{
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									_scale->x = _ax_length;
									HX_STACK_LINE(180)
									bool tmp46 = _scale->_construct;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(180)
									if ((tmp46)){
										HX_STACK_LINE(180)
										_scale->x;
									}
									else{
										HX_STACK_LINE(180)
										bool tmp47 = (_scale->listen_x != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(180)
										bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(180)
										if ((tmp47)){
											HX_STACK_LINE(180)
											bool tmp49 = _scale->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(180)
											bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(180)
											tmp48 = !(tmp50);
										}
										else{
											HX_STACK_LINE(180)
											tmp48 = false;
										}
										HX_STACK_LINE(180)
										if ((tmp48)){
											HX_STACK_LINE(180)
											Float tmp49 = _ax_length;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(180)
											_scale->listen_x(tmp49);
										}
										HX_STACK_LINE(180)
										_scale->x;
									}
								}
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									_scale->y = _ay_length;
									HX_STACK_LINE(180)
									bool tmp46 = _scale->_construct;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(180)
									if ((tmp46)){
										HX_STACK_LINE(180)
										_scale->y;
									}
									else{
										HX_STACK_LINE(180)
										bool tmp47 = (_scale->listen_y != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(180)
										bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(180)
										if ((tmp47)){
											HX_STACK_LINE(180)
											bool tmp49 = _scale->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(180)
											bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(180)
											tmp48 = !(tmp50);
										}
										else{
											HX_STACK_LINE(180)
											tmp48 = false;
										}
										HX_STACK_LINE(180)
										if ((tmp48)){
											HX_STACK_LINE(180)
											Float tmp49 = _ay_length;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(180)
											_scale->listen_y(tmp49);
										}
										HX_STACK_LINE(180)
										_scale->y;
									}
								}
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									_scale->z = _az_length;
									HX_STACK_LINE(180)
									bool tmp46 = _scale->_construct;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(180)
									if ((tmp46)){
										HX_STACK_LINE(180)
										_scale->z;
									}
									else{
										HX_STACK_LINE(180)
										bool tmp47 = (_scale->listen_z != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(180)
										bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(180)
										if ((tmp47)){
											HX_STACK_LINE(180)
											bool tmp49 = _scale->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(180)
											bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(180)
											tmp48 = !(tmp50);
										}
										else{
											HX_STACK_LINE(180)
											tmp48 = false;
										}
										HX_STACK_LINE(180)
										if ((tmp48)){
											HX_STACK_LINE(180)
											Float tmp49 = _az_length;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(180)
											_scale->listen_z(tmp49);
										}
										HX_STACK_LINE(180)
										_scale->z;
									}
								}
							}
							HX_STACK_LINE(180)
							matrix->elements = _this1->elements->concat(Array_obj< Float >::__new());
							HX_STACK_LINE(180)
							Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
							HX_STACK_LINE(180)
							Float tmp46 = _ax_length;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)0],tmp46);
							HX_STACK_LINE(180)
							Float tmp47 = _ax_length;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)1],tmp47);
							HX_STACK_LINE(180)
							Float tmp48 = _ax_length;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)2],tmp48);
							HX_STACK_LINE(180)
							Float tmp49 = _ay_length;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)4],tmp49);
							HX_STACK_LINE(180)
							Float tmp50 = _ay_length;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)5],tmp50);
							HX_STACK_LINE(180)
							Float tmp51 = _ay_length;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)6],tmp51);
							HX_STACK_LINE(180)
							Float tmp52 = _az_length;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)8],tmp52);
							HX_STACK_LINE(180)
							Float tmp53 = _az_length;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)9],tmp53);
							HX_STACK_LINE(180)
							Float tmp54 = _az_length;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(180)
							hx::DivEq(me[(int)10],tmp54);
							HX_STACK_LINE(180)
							::phoenix::Matrix tmp55 = matrix;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(180)
							_quaternion->setFromRotationMatrix(tmp55);
							HX_STACK_LINE(180)
							bool tmp56 = (_this1->_transform == null());		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(180)
							if ((tmp56)){
								HX_STACK_LINE(180)
								::phoenix::MatrixTransform tmp57 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(180)
								_this1->_transform = tmp57;
							}
							else{
								HX_STACK_LINE(180)
								_this1->_transform->pos = _position;
								HX_STACK_LINE(180)
								_this1->_transform->rotation = _quaternion;
								HX_STACK_LINE(180)
								_this1->_transform->scale = _scale;
							}
							HX_STACK_LINE(180)
							tmp14 = _this1->_transform;
						}
						HX_STACK_LINE(180)
						::phoenix::MatrixTransform _transform = tmp14;		HX_STACK_VAR(_transform,"_transform");
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
							HX_STACK_LINE(180)
							_this->pos = _p;
							HX_STACK_LINE(180)
							bool tmp15 = (_p != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(180)
							if ((tmp15)){
								HX_STACK_LINE(180)
								::phoenix::Vector tmp16 = _this->pos;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(180)
								Dynamic tmp17 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(180)
								::phoenix::Vector_obj::Listen(tmp16,tmp17);
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									bool tmp18 = (_this->pos_changed != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(180)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(180)
									if ((tmp18)){
										HX_STACK_LINE(180)
										bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(180)
										bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(180)
										tmp19 = !(tmp21);
									}
									else{
										HX_STACK_LINE(180)
										tmp19 = false;
									}
									HX_STACK_LINE(180)
									if ((tmp19)){
										HX_STACK_LINE(180)
										::phoenix::Vector tmp20 = _this->pos;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(180)
										_this->pos_changed(tmp20);
									}
								}
							}
							HX_STACK_LINE(180)
							_this->pos;
						}
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
							HX_STACK_LINE(180)
							_this->rotation = _r;
							HX_STACK_LINE(180)
							bool tmp15 = (_r != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(180)
							if ((tmp15)){
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
									HX_STACK_LINE(180)
									Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
									HX_STACK_LINE(180)
									_q->listen_x = listener;
									HX_STACK_LINE(180)
									_q->listen_y = listener;
									HX_STACK_LINE(180)
									_q->listen_z = listener;
									HX_STACK_LINE(180)
									_q->listen_w = listener;
								}
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									bool tmp16 = (_this->rotation_changed != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(180)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(180)
									if ((tmp16)){
										HX_STACK_LINE(180)
										bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(180)
										bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(180)
										tmp17 = !(tmp19);
									}
									else{
										HX_STACK_LINE(180)
										tmp17 = false;
									}
									HX_STACK_LINE(180)
									if ((tmp17)){
										HX_STACK_LINE(180)
										::phoenix::Quaternion tmp18 = _this->rotation;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(180)
										_this->rotation_changed(tmp18);
									}
								}
							}
							HX_STACK_LINE(180)
							_this->rotation;
						}
						HX_STACK_LINE(180)
						{
							HX_STACK_LINE(180)
							::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
							HX_STACK_LINE(180)
							_this->scale = _s;
							HX_STACK_LINE(180)
							bool tmp15 = (_s != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(180)
							if ((tmp15)){
								HX_STACK_LINE(180)
								::phoenix::Vector tmp16 = _this->scale;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(180)
								Dynamic tmp17 = _this->_scale_change_dyn();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(180)
								::phoenix::Vector_obj::Listen(tmp16,tmp17);
								HX_STACK_LINE(180)
								{
									HX_STACK_LINE(180)
									bool tmp18 = (_this->scale_changed != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(180)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(180)
									if ((tmp18)){
										HX_STACK_LINE(180)
										bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(180)
										bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(180)
										tmp19 = !(tmp21);
									}
									else{
										HX_STACK_LINE(180)
										tmp19 = false;
									}
									HX_STACK_LINE(180)
									if ((tmp19)){
										HX_STACK_LINE(180)
										::phoenix::Vector tmp20 = _this->scale;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(180)
										_this->scale_changed(tmp20);
									}
								}
							}
							HX_STACK_LINE(180)
							_this->scale;
						}
					}
					HX_STACK_LINE(180)
					_this;
				}
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					this->dirty = false;
					HX_STACK_LINE(180)
					bool tmp10 = this->dirty;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(180)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(180)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(180)
					if ((tmp11)){
						HX_STACK_LINE(180)
						bool tmp13 = this->_setup;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(180)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(180)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(180)
						tmp12 = !(tmp17);
					}
					else{
						HX_STACK_LINE(180)
						tmp12 = false;
					}
					HX_STACK_LINE(180)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(180)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(180)
					if ((tmp13)){
						HX_STACK_LINE(180)
						tmp14 = (this->_dirty_handlers != null());
					}
					else{
						HX_STACK_LINE(180)
						tmp14 = false;
					}
					HX_STACK_LINE(180)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(180)
					if ((tmp14)){
						HX_STACK_LINE(180)
						int tmp16 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(180)
						int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(180)
						tmp15 = (tmp17 > (int)0);
					}
					else{
						HX_STACK_LINE(180)
						tmp15 = false;
					}
					HX_STACK_LINE(180)
					if ((tmp15)){
						HX_STACK_LINE(180)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(180)
						cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(180)
						while((true)){
							HX_STACK_LINE(180)
							bool tmp16 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(180)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(180)
							if ((tmp17)){
								HX_STACK_LINE(180)
								break;
							}
							HX_STACK_LINE(180)
							Dynamic tmp18 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(180)
							Dynamic _handler = tmp18;		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(180)
							++(_g);
							HX_STACK_LINE(180)
							bool tmp19 = (_handler != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(180)
							if ((tmp19)){
								HX_STACK_LINE(180)
								_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
							}
						}
					}
					HX_STACK_LINE(180)
					this->dirty;
				}
				HX_STACK_LINE(180)
				this->_cleaning = false;
				HX_STACK_LINE(180)
				bool tmp10 = (this->_clean_handlers != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(180)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(180)
				if ((tmp10)){
					HX_STACK_LINE(180)
					int tmp12 = this->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(180)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(180)
					tmp11 = (tmp13 > (int)0);
				}
				else{
					HX_STACK_LINE(180)
					tmp11 = false;
				}
				HX_STACK_LINE(180)
				if ((tmp11)){
					HX_STACK_LINE(180)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(180)
					cpp::ArrayBase _g1 = this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(180)
					while((true)){
						HX_STACK_LINE(180)
						bool tmp12 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						if ((tmp13)){
							HX_STACK_LINE(180)
							break;
						}
						HX_STACK_LINE(180)
						Dynamic tmp14 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						Dynamic _handler = tmp14;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(180)
						++(_g);
						HX_STACK_LINE(180)
						bool tmp15 = (_handler != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(180)
						if ((tmp15)){
							HX_STACK_LINE(180)
							_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(183)
	::phoenix::Spatial tmp2 = this->world;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_world,return )

Void Transform_obj::clean_check( ){
{
		HX_STACK_FRAME("phoenix.Transform","clean_check",0x615a2011,"phoenix.Transform.clean_check","phoenix/Transform.hx",187,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(190)
		::phoenix::Transform tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		if ((tmp1)){
			HX_STACK_LINE(192)
			::phoenix::Transform tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(192)
			bool tmp3 = tmp2->dirty;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			if ((tmp3)){
				HX_STACK_LINE(193)
				::phoenix::Transform tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(193)
				::phoenix::Transform _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(193)
				bool tmp5 = _this->dirty;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(193)
				if ((tmp6)){
					HX_STACK_LINE(193)
					Dynamic();
				}
				else{
					HX_STACK_LINE(193)
					_this->_cleaning = true;
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = _this->_pos_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(193)
							e[(int)0] = (int)1;
							HX_STACK_LINE(193)
							e[(int)4] = (int)0;
							HX_STACK_LINE(193)
							e[(int)8] = (int)0;
							HX_STACK_LINE(193)
							::phoenix::Vector tmp7 = _this->local->pos;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(193)
							Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(193)
							e[(int)12] = tmp8;
							HX_STACK_LINE(193)
							e[(int)1] = (int)0;
							HX_STACK_LINE(193)
							e[(int)5] = (int)1;
							HX_STACK_LINE(193)
							e[(int)9] = (int)0;
							HX_STACK_LINE(193)
							::phoenix::Vector tmp9 = _this->local->pos;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(193)
							Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							e[(int)13] = tmp10;
							HX_STACK_LINE(193)
							e[(int)2] = (int)0;
							HX_STACK_LINE(193)
							e[(int)6] = (int)0;
							HX_STACK_LINE(193)
							e[(int)10] = (int)1;
							HX_STACK_LINE(193)
							::phoenix::Vector tmp11 = _this->local->pos;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							Float tmp12 = tmp11->z;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(193)
							e[(int)14] = tmp12;
							HX_STACK_LINE(193)
							e[(int)3] = (int)0;
							HX_STACK_LINE(193)
							e[(int)7] = (int)0;
							HX_STACK_LINE(193)
							e[(int)11] = (int)0;
							HX_STACK_LINE(193)
							e[(int)15] = (int)1;
							HX_STACK_LINE(193)
							_this1;
						}
						HX_STACK_LINE(193)
						_this1;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = _this->_rotation_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						::phoenix::Quaternion tmp7 = _this->local->rotation;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(193)
						::phoenix::Quaternion q = tmp7;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(193)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(193)
						Float tmp8 = (q->x + q->x);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(193)
						Float x2 = tmp8;		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(193)
						Float tmp9 = (q->y + q->y);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(193)
						Float y2 = tmp9;		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(193)
						Float tmp10 = (q->z + q->z);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(193)
						Float z2 = tmp10;		HX_STACK_VAR(z2,"z2");
						HX_STACK_LINE(193)
						Float tmp11 = (q->x * x2);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(193)
						Float xx = tmp11;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(193)
						Float tmp12 = (q->x * y2);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(193)
						Float xy = tmp12;		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(193)
						Float tmp13 = (q->x * z2);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						Float xz = tmp13;		HX_STACK_VAR(xz,"xz");
						HX_STACK_LINE(193)
						Float tmp14 = (q->y * y2);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(193)
						Float yy = tmp14;		HX_STACK_VAR(yy,"yy");
						HX_STACK_LINE(193)
						Float tmp15 = (q->y * z2);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(193)
						Float yz = tmp15;		HX_STACK_VAR(yz,"yz");
						HX_STACK_LINE(193)
						Float tmp16 = (q->z * z2);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(193)
						Float zz = tmp16;		HX_STACK_VAR(zz,"zz");
						HX_STACK_LINE(193)
						Float tmp17 = (q->w * x2);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(193)
						Float wx = tmp17;		HX_STACK_VAR(wx,"wx");
						HX_STACK_LINE(193)
						Float tmp18 = (q->w * y2);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(193)
						Float wy = tmp18;		HX_STACK_VAR(wy,"wy");
						HX_STACK_LINE(193)
						Float tmp19 = (q->w * z2);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(193)
						Float wz = tmp19;		HX_STACK_VAR(wz,"wz");
						HX_STACK_LINE(193)
						Float tmp20 = (yy + zz);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(193)
						Float tmp21 = ((int)1 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(193)
						te[(int)0] = tmp21;
						HX_STACK_LINE(193)
						Float tmp22 = (xy - wz);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(193)
						te[(int)4] = tmp22;
						HX_STACK_LINE(193)
						Float tmp23 = (xz + wy);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(193)
						te[(int)8] = tmp23;
						HX_STACK_LINE(193)
						Float tmp24 = (xy + wz);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(193)
						te[(int)1] = tmp24;
						HX_STACK_LINE(193)
						Float tmp25 = (xx + zz);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(193)
						Float tmp26 = ((int)1 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(193)
						te[(int)5] = tmp26;
						HX_STACK_LINE(193)
						Float tmp27 = (yz - wx);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(193)
						te[(int)9] = tmp27;
						HX_STACK_LINE(193)
						Float tmp28 = (xz - wy);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(193)
						te[(int)2] = tmp28;
						HX_STACK_LINE(193)
						Float tmp29 = (yz + wx);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(193)
						te[(int)6] = tmp29;
						HX_STACK_LINE(193)
						Float tmp30 = (xx + yy);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(193)
						Float tmp31 = ((int)1 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(193)
						te[(int)10] = tmp31;
						HX_STACK_LINE(193)
						te[(int)3] = (int)0;
						HX_STACK_LINE(193)
						te[(int)7] = (int)0;
						HX_STACK_LINE(193)
						te[(int)11] = (int)0;
						HX_STACK_LINE(193)
						te[(int)12] = (int)0;
						HX_STACK_LINE(193)
						te[(int)13] = (int)0;
						HX_STACK_LINE(193)
						te[(int)14] = (int)0;
						HX_STACK_LINE(193)
						te[(int)15] = (int)1;
						HX_STACK_LINE(193)
						_this1;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = _this->_origin_undo_matrix;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(193)
							e[(int)0] = (int)1;
							HX_STACK_LINE(193)
							e[(int)4] = (int)0;
							HX_STACK_LINE(193)
							e[(int)8] = (int)0;
							HX_STACK_LINE(193)
							Float tmp7 = _this->origin->x;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(193)
							Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(193)
							e[(int)12] = tmp8;
							HX_STACK_LINE(193)
							e[(int)1] = (int)0;
							HX_STACK_LINE(193)
							e[(int)5] = (int)1;
							HX_STACK_LINE(193)
							e[(int)9] = (int)0;
							HX_STACK_LINE(193)
							Float tmp9 = _this->origin->y;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(193)
							Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							e[(int)13] = tmp10;
							HX_STACK_LINE(193)
							e[(int)2] = (int)0;
							HX_STACK_LINE(193)
							e[(int)6] = (int)0;
							HX_STACK_LINE(193)
							e[(int)10] = (int)1;
							HX_STACK_LINE(193)
							Float tmp11 = _this->origin->z;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(193)
							e[(int)14] = tmp12;
							HX_STACK_LINE(193)
							e[(int)3] = (int)0;
							HX_STACK_LINE(193)
							e[(int)7] = (int)0;
							HX_STACK_LINE(193)
							e[(int)11] = (int)0;
							HX_STACK_LINE(193)
							e[(int)15] = (int)1;
							HX_STACK_LINE(193)
							_this1;
						}
						HX_STACK_LINE(193)
						_this1;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix tmp7 = _this->local->matrix;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = tmp7;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(193)
							e[(int)0] = (int)1;
							HX_STACK_LINE(193)
							e[(int)4] = (int)0;
							HX_STACK_LINE(193)
							e[(int)8] = (int)0;
							HX_STACK_LINE(193)
							Float tmp8 = _this->origin->x;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(193)
							e[(int)12] = tmp8;
							HX_STACK_LINE(193)
							e[(int)1] = (int)0;
							HX_STACK_LINE(193)
							e[(int)5] = (int)1;
							HX_STACK_LINE(193)
							e[(int)9] = (int)0;
							HX_STACK_LINE(193)
							Float tmp9 = _this->origin->y;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(193)
							e[(int)13] = tmp9;
							HX_STACK_LINE(193)
							e[(int)2] = (int)0;
							HX_STACK_LINE(193)
							e[(int)6] = (int)0;
							HX_STACK_LINE(193)
							e[(int)10] = (int)1;
							HX_STACK_LINE(193)
							Float tmp10 = _this->origin->z;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							e[(int)14] = tmp10;
							HX_STACK_LINE(193)
							e[(int)3] = (int)0;
							HX_STACK_LINE(193)
							e[(int)7] = (int)0;
							HX_STACK_LINE(193)
							e[(int)11] = (int)0;
							HX_STACK_LINE(193)
							e[(int)15] = (int)1;
							HX_STACK_LINE(193)
							_this1;
						}
						HX_STACK_LINE(193)
						_this1;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix tmp7 = _this->local->matrix;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = tmp7;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(193)
							Array< Float > be = _this->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(193)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(193)
							Float tmp8 = ae->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(193)
							Float a11 = tmp8;		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(193)
							Float tmp9 = ae->__get((int)4);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(193)
							Float a12 = tmp9;		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(193)
							Float tmp10 = ae->__get((int)8);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							Float a13 = tmp10;		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(193)
							Float tmp11 = ae->__get((int)12);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							Float a14 = tmp11;		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(193)
							Float tmp12 = ae->__get((int)1);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(193)
							Float a21 = tmp12;		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(193)
							Float tmp13 = ae->__get((int)5);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(193)
							Float a22 = tmp13;		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(193)
							Float tmp14 = ae->__get((int)9);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							Float a23 = tmp14;		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(193)
							Float tmp15 = ae->__get((int)13);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							Float a24 = tmp15;		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(193)
							Float tmp16 = ae->__get((int)2);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(193)
							Float a31 = tmp16;		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(193)
							Float tmp17 = ae->__get((int)6);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(193)
							Float a32 = tmp17;		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(193)
							Float tmp18 = ae->__get((int)10);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(193)
							Float a33 = tmp18;		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(193)
							Float tmp19 = ae->__get((int)14);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(193)
							Float a34 = tmp19;		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(193)
							Float tmp20 = ae->__get((int)3);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(193)
							Float a41 = tmp20;		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(193)
							Float tmp21 = ae->__get((int)7);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(193)
							Float a42 = tmp21;		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(193)
							Float tmp22 = ae->__get((int)11);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(193)
							Float a43 = tmp22;		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(193)
							Float tmp23 = ae->__get((int)15);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(193)
							Float a44 = tmp23;		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(193)
							Float tmp24 = be->__get((int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(193)
							Float b11 = tmp24;		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(193)
							Float tmp25 = be->__get((int)4);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(193)
							Float b12 = tmp25;		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(193)
							Float tmp26 = be->__get((int)8);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(193)
							Float b13 = tmp26;		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(193)
							Float tmp27 = be->__get((int)12);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(193)
							Float b14 = tmp27;		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(193)
							Float tmp28 = be->__get((int)1);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(193)
							Float b21 = tmp28;		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(193)
							Float tmp29 = be->__get((int)5);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(193)
							Float b22 = tmp29;		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(193)
							Float tmp30 = be->__get((int)9);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(193)
							Float b23 = tmp30;		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(193)
							Float tmp31 = be->__get((int)13);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(193)
							Float b24 = tmp31;		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(193)
							Float tmp32 = be->__get((int)2);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(193)
							Float b31 = tmp32;		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(193)
							Float tmp33 = be->__get((int)6);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(193)
							Float b32 = tmp33;		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(193)
							Float tmp34 = be->__get((int)10);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(193)
							Float b33 = tmp34;		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(193)
							Float tmp35 = be->__get((int)14);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(193)
							Float b34 = tmp35;		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(193)
							Float tmp36 = be->__get((int)3);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(193)
							Float b41 = tmp36;		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(193)
							Float tmp37 = be->__get((int)7);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(193)
							Float b42 = tmp37;		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(193)
							Float tmp38 = be->__get((int)11);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(193)
							Float b43 = tmp38;		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(193)
							Float tmp39 = be->__get((int)15);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(193)
							Float b44 = tmp39;		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(193)
							Float tmp40 = (a11 * b11);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(193)
							Float tmp41 = (a12 * b21);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(193)
							Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(193)
							Float tmp43 = (a13 * b31);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(193)
							Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(193)
							Float tmp45 = (a14 * b41);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(193)
							Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(193)
							te[(int)0] = tmp46;
							HX_STACK_LINE(193)
							Float tmp47 = (a11 * b12);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(193)
							Float tmp48 = (a12 * b22);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(193)
							Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(193)
							Float tmp50 = (a13 * b32);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(193)
							Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(193)
							Float tmp52 = (a14 * b42);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(193)
							Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(193)
							te[(int)4] = tmp53;
							HX_STACK_LINE(193)
							Float tmp54 = (a11 * b13);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(193)
							Float tmp55 = (a12 * b23);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(193)
							Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(193)
							Float tmp57 = (a13 * b33);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(193)
							Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(193)
							Float tmp59 = (a14 * b43);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(193)
							Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(193)
							te[(int)8] = tmp60;
							HX_STACK_LINE(193)
							Float tmp61 = (a11 * b14);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(193)
							Float tmp62 = (a12 * b24);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(193)
							Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(193)
							Float tmp64 = (a13 * b34);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(193)
							Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(193)
							Float tmp66 = (a14 * b44);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(193)
							Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(193)
							te[(int)12] = tmp67;
							HX_STACK_LINE(193)
							Float tmp68 = (a21 * b11);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(193)
							Float tmp69 = (a22 * b21);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(193)
							Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(193)
							Float tmp71 = (a23 * b31);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(193)
							Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(193)
							Float tmp73 = (a24 * b41);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(193)
							Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(193)
							te[(int)1] = tmp74;
							HX_STACK_LINE(193)
							Float tmp75 = (a21 * b12);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(193)
							Float tmp76 = (a22 * b22);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(193)
							Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(193)
							Float tmp78 = (a23 * b32);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(193)
							Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(193)
							Float tmp80 = (a24 * b42);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(193)
							Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(193)
							te[(int)5] = tmp81;
							HX_STACK_LINE(193)
							Float tmp82 = (a21 * b13);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(193)
							Float tmp83 = (a22 * b23);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(193)
							Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(193)
							Float tmp85 = (a23 * b33);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(193)
							Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(193)
							Float tmp87 = (a24 * b43);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(193)
							Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(193)
							te[(int)9] = tmp88;
							HX_STACK_LINE(193)
							Float tmp89 = (a21 * b14);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(193)
							Float tmp90 = (a22 * b24);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(193)
							Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(193)
							Float tmp92 = (a23 * b34);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(193)
							Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(193)
							Float tmp94 = (a24 * b44);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(193)
							Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(193)
							te[(int)13] = tmp95;
							HX_STACK_LINE(193)
							Float tmp96 = (a31 * b11);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(193)
							Float tmp97 = (a32 * b21);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(193)
							Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(193)
							Float tmp99 = (a33 * b31);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(193)
							Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(193)
							Float tmp101 = (a34 * b41);		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(193)
							Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(193)
							te[(int)2] = tmp102;
							HX_STACK_LINE(193)
							Float tmp103 = (a31 * b12);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(193)
							Float tmp104 = (a32 * b22);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(193)
							Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(193)
							Float tmp106 = (a33 * b32);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(193)
							Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(193)
							Float tmp108 = (a34 * b42);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(193)
							Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(193)
							te[(int)6] = tmp109;
							HX_STACK_LINE(193)
							Float tmp110 = (a31 * b13);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(193)
							Float tmp111 = (a32 * b23);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(193)
							Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(193)
							Float tmp113 = (a33 * b33);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(193)
							Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(193)
							Float tmp115 = (a34 * b43);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(193)
							Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(193)
							te[(int)10] = tmp116;
							HX_STACK_LINE(193)
							Float tmp117 = (a31 * b14);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(193)
							Float tmp118 = (a32 * b24);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(193)
							Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(193)
							Float tmp120 = (a33 * b34);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(193)
							Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(193)
							Float tmp122 = (a34 * b44);		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(193)
							Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(193)
							te[(int)14] = tmp123;
							HX_STACK_LINE(193)
							Float tmp124 = (a41 * b11);		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(193)
							Float tmp125 = (a42 * b21);		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(193)
							Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(193)
							Float tmp127 = (a43 * b31);		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(193)
							Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
							HX_STACK_LINE(193)
							Float tmp129 = (a44 * b41);		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(193)
							Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(193)
							te[(int)3] = tmp130;
							HX_STACK_LINE(193)
							Float tmp131 = (a41 * b12);		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(193)
							Float tmp132 = (a42 * b22);		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(193)
							Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
							HX_STACK_LINE(193)
							Float tmp134 = (a43 * b32);		HX_STACK_VAR(tmp134,"tmp134");
							HX_STACK_LINE(193)
							Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
							HX_STACK_LINE(193)
							Float tmp136 = (a44 * b42);		HX_STACK_VAR(tmp136,"tmp136");
							HX_STACK_LINE(193)
							Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(193)
							te[(int)7] = tmp137;
							HX_STACK_LINE(193)
							Float tmp138 = (a41 * b13);		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(193)
							Float tmp139 = (a42 * b23);		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(193)
							Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(193)
							Float tmp141 = (a43 * b33);		HX_STACK_VAR(tmp141,"tmp141");
							HX_STACK_LINE(193)
							Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
							HX_STACK_LINE(193)
							Float tmp143 = (a44 * b43);		HX_STACK_VAR(tmp143,"tmp143");
							HX_STACK_LINE(193)
							Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
							HX_STACK_LINE(193)
							te[(int)11] = tmp144;
							HX_STACK_LINE(193)
							Float tmp145 = (a41 * b14);		HX_STACK_VAR(tmp145,"tmp145");
							HX_STACK_LINE(193)
							Float tmp146 = (a42 * b24);		HX_STACK_VAR(tmp146,"tmp146");
							HX_STACK_LINE(193)
							Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
							HX_STACK_LINE(193)
							Float tmp148 = (a43 * b34);		HX_STACK_VAR(tmp148,"tmp148");
							HX_STACK_LINE(193)
							Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
							HX_STACK_LINE(193)
							Float tmp150 = (a44 * b44);		HX_STACK_VAR(tmp150,"tmp150");
							HX_STACK_LINE(193)
							Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
							HX_STACK_LINE(193)
							te[(int)15] = tmp151;
							HX_STACK_LINE(193)
							_this1;
						}
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix tmp7 = _this->local->matrix;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = tmp7;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						::phoenix::Vector tmp8 = _this->local->scale;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(193)
						::phoenix::Vector _v = tmp8;		HX_STACK_VAR(_v,"_v");
						HX_STACK_LINE(193)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(193)
						Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(193)
						Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(193)
						Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(193)
						Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)0],tmp9);
						HX_STACK_LINE(193)
						Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)4],tmp10);
						HX_STACK_LINE(193)
						Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)8],tmp11);
						HX_STACK_LINE(193)
						Float tmp12 = _x;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)1],tmp12);
						HX_STACK_LINE(193)
						Float tmp13 = _y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)5],tmp13);
						HX_STACK_LINE(193)
						Float tmp14 = _z;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)9],tmp14);
						HX_STACK_LINE(193)
						Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)2],tmp15);
						HX_STACK_LINE(193)
						Float tmp16 = _y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)6],tmp16);
						HX_STACK_LINE(193)
						Float tmp17 = _z;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)10],tmp17);
						HX_STACK_LINE(193)
						Float tmp18 = _x;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)3],tmp18);
						HX_STACK_LINE(193)
						Float tmp19 = _y;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)7],tmp19);
						HX_STACK_LINE(193)
						Float tmp20 = _z;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(193)
						hx::MultEq(te[(int)11],tmp20);
						HX_STACK_LINE(193)
						_this1;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix tmp7 = _this->local->matrix;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = tmp7;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						::phoenix::Vector tmp8 = _this->local->pos;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(193)
						::phoenix::Vector _v = tmp8;		HX_STACK_VAR(_v,"_v");
						HX_STACK_LINE(193)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(193)
						Float tmp9 = _v->x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(193)
						te[(int)12] = tmp9;
						HX_STACK_LINE(193)
						Float tmp10 = _v->y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(193)
						te[(int)13] = tmp10;
						HX_STACK_LINE(193)
						Float tmp11 = _v->z;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(193)
						te[(int)14] = tmp11;
						HX_STACK_LINE(193)
						_this1;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Matrix tmp7 = _this->local->matrix;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(193)
						::phoenix::Matrix _this1 = tmp7;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(193)
							Array< Float > be = _this->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(193)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(193)
							Float tmp8 = ae->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(193)
							Float a11 = tmp8;		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(193)
							Float tmp9 = ae->__get((int)4);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(193)
							Float a12 = tmp9;		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(193)
							Float tmp10 = ae->__get((int)8);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							Float a13 = tmp10;		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(193)
							Float tmp11 = ae->__get((int)12);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							Float a14 = tmp11;		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(193)
							Float tmp12 = ae->__get((int)1);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(193)
							Float a21 = tmp12;		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(193)
							Float tmp13 = ae->__get((int)5);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(193)
							Float a22 = tmp13;		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(193)
							Float tmp14 = ae->__get((int)9);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							Float a23 = tmp14;		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(193)
							Float tmp15 = ae->__get((int)13);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							Float a24 = tmp15;		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(193)
							Float tmp16 = ae->__get((int)2);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(193)
							Float a31 = tmp16;		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(193)
							Float tmp17 = ae->__get((int)6);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(193)
							Float a32 = tmp17;		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(193)
							Float tmp18 = ae->__get((int)10);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(193)
							Float a33 = tmp18;		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(193)
							Float tmp19 = ae->__get((int)14);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(193)
							Float a34 = tmp19;		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(193)
							Float tmp20 = ae->__get((int)3);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(193)
							Float a41 = tmp20;		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(193)
							Float tmp21 = ae->__get((int)7);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(193)
							Float a42 = tmp21;		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(193)
							Float tmp22 = ae->__get((int)11);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(193)
							Float a43 = tmp22;		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(193)
							Float tmp23 = ae->__get((int)15);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(193)
							Float a44 = tmp23;		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(193)
							Float tmp24 = be->__get((int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(193)
							Float b11 = tmp24;		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(193)
							Float tmp25 = be->__get((int)4);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(193)
							Float b12 = tmp25;		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(193)
							Float tmp26 = be->__get((int)8);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(193)
							Float b13 = tmp26;		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(193)
							Float tmp27 = be->__get((int)12);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(193)
							Float b14 = tmp27;		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(193)
							Float tmp28 = be->__get((int)1);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(193)
							Float b21 = tmp28;		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(193)
							Float tmp29 = be->__get((int)5);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(193)
							Float b22 = tmp29;		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(193)
							Float tmp30 = be->__get((int)9);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(193)
							Float b23 = tmp30;		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(193)
							Float tmp31 = be->__get((int)13);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(193)
							Float b24 = tmp31;		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(193)
							Float tmp32 = be->__get((int)2);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(193)
							Float b31 = tmp32;		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(193)
							Float tmp33 = be->__get((int)6);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(193)
							Float b32 = tmp33;		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(193)
							Float tmp34 = be->__get((int)10);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(193)
							Float b33 = tmp34;		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(193)
							Float tmp35 = be->__get((int)14);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(193)
							Float b34 = tmp35;		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(193)
							Float tmp36 = be->__get((int)3);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(193)
							Float b41 = tmp36;		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(193)
							Float tmp37 = be->__get((int)7);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(193)
							Float b42 = tmp37;		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(193)
							Float tmp38 = be->__get((int)11);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(193)
							Float b43 = tmp38;		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(193)
							Float tmp39 = be->__get((int)15);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(193)
							Float b44 = tmp39;		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(193)
							Float tmp40 = (a11 * b11);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(193)
							Float tmp41 = (a12 * b21);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(193)
							Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(193)
							Float tmp43 = (a13 * b31);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(193)
							Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(193)
							Float tmp45 = (a14 * b41);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(193)
							Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(193)
							te[(int)0] = tmp46;
							HX_STACK_LINE(193)
							Float tmp47 = (a11 * b12);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(193)
							Float tmp48 = (a12 * b22);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(193)
							Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(193)
							Float tmp50 = (a13 * b32);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(193)
							Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(193)
							Float tmp52 = (a14 * b42);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(193)
							Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(193)
							te[(int)4] = tmp53;
							HX_STACK_LINE(193)
							Float tmp54 = (a11 * b13);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(193)
							Float tmp55 = (a12 * b23);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(193)
							Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(193)
							Float tmp57 = (a13 * b33);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(193)
							Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(193)
							Float tmp59 = (a14 * b43);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(193)
							Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(193)
							te[(int)8] = tmp60;
							HX_STACK_LINE(193)
							Float tmp61 = (a11 * b14);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(193)
							Float tmp62 = (a12 * b24);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(193)
							Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(193)
							Float tmp64 = (a13 * b34);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(193)
							Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(193)
							Float tmp66 = (a14 * b44);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(193)
							Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(193)
							te[(int)12] = tmp67;
							HX_STACK_LINE(193)
							Float tmp68 = (a21 * b11);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(193)
							Float tmp69 = (a22 * b21);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(193)
							Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(193)
							Float tmp71 = (a23 * b31);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(193)
							Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(193)
							Float tmp73 = (a24 * b41);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(193)
							Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(193)
							te[(int)1] = tmp74;
							HX_STACK_LINE(193)
							Float tmp75 = (a21 * b12);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(193)
							Float tmp76 = (a22 * b22);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(193)
							Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(193)
							Float tmp78 = (a23 * b32);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(193)
							Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(193)
							Float tmp80 = (a24 * b42);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(193)
							Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(193)
							te[(int)5] = tmp81;
							HX_STACK_LINE(193)
							Float tmp82 = (a21 * b13);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(193)
							Float tmp83 = (a22 * b23);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(193)
							Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(193)
							Float tmp85 = (a23 * b33);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(193)
							Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(193)
							Float tmp87 = (a24 * b43);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(193)
							Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(193)
							te[(int)9] = tmp88;
							HX_STACK_LINE(193)
							Float tmp89 = (a21 * b14);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(193)
							Float tmp90 = (a22 * b24);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(193)
							Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(193)
							Float tmp92 = (a23 * b34);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(193)
							Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(193)
							Float tmp94 = (a24 * b44);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(193)
							Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(193)
							te[(int)13] = tmp95;
							HX_STACK_LINE(193)
							Float tmp96 = (a31 * b11);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(193)
							Float tmp97 = (a32 * b21);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(193)
							Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(193)
							Float tmp99 = (a33 * b31);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(193)
							Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(193)
							Float tmp101 = (a34 * b41);		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(193)
							Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(193)
							te[(int)2] = tmp102;
							HX_STACK_LINE(193)
							Float tmp103 = (a31 * b12);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(193)
							Float tmp104 = (a32 * b22);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(193)
							Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(193)
							Float tmp106 = (a33 * b32);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(193)
							Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(193)
							Float tmp108 = (a34 * b42);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(193)
							Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(193)
							te[(int)6] = tmp109;
							HX_STACK_LINE(193)
							Float tmp110 = (a31 * b13);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(193)
							Float tmp111 = (a32 * b23);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(193)
							Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(193)
							Float tmp113 = (a33 * b33);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(193)
							Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(193)
							Float tmp115 = (a34 * b43);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(193)
							Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(193)
							te[(int)10] = tmp116;
							HX_STACK_LINE(193)
							Float tmp117 = (a31 * b14);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(193)
							Float tmp118 = (a32 * b24);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(193)
							Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(193)
							Float tmp120 = (a33 * b34);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(193)
							Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(193)
							Float tmp122 = (a34 * b44);		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(193)
							Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(193)
							te[(int)14] = tmp123;
							HX_STACK_LINE(193)
							Float tmp124 = (a41 * b11);		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(193)
							Float tmp125 = (a42 * b21);		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(193)
							Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(193)
							Float tmp127 = (a43 * b31);		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(193)
							Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
							HX_STACK_LINE(193)
							Float tmp129 = (a44 * b41);		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(193)
							Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(193)
							te[(int)3] = tmp130;
							HX_STACK_LINE(193)
							Float tmp131 = (a41 * b12);		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(193)
							Float tmp132 = (a42 * b22);		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(193)
							Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
							HX_STACK_LINE(193)
							Float tmp134 = (a43 * b32);		HX_STACK_VAR(tmp134,"tmp134");
							HX_STACK_LINE(193)
							Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
							HX_STACK_LINE(193)
							Float tmp136 = (a44 * b42);		HX_STACK_VAR(tmp136,"tmp136");
							HX_STACK_LINE(193)
							Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(193)
							te[(int)7] = tmp137;
							HX_STACK_LINE(193)
							Float tmp138 = (a41 * b13);		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(193)
							Float tmp139 = (a42 * b23);		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(193)
							Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(193)
							Float tmp141 = (a43 * b33);		HX_STACK_VAR(tmp141,"tmp141");
							HX_STACK_LINE(193)
							Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
							HX_STACK_LINE(193)
							Float tmp143 = (a44 * b43);		HX_STACK_VAR(tmp143,"tmp143");
							HX_STACK_LINE(193)
							Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
							HX_STACK_LINE(193)
							te[(int)11] = tmp144;
							HX_STACK_LINE(193)
							Float tmp145 = (a41 * b14);		HX_STACK_VAR(tmp145,"tmp145");
							HX_STACK_LINE(193)
							Float tmp146 = (a42 * b24);		HX_STACK_VAR(tmp146,"tmp146");
							HX_STACK_LINE(193)
							Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
							HX_STACK_LINE(193)
							Float tmp148 = (a43 * b34);		HX_STACK_VAR(tmp148,"tmp148");
							HX_STACK_LINE(193)
							Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
							HX_STACK_LINE(193)
							Float tmp150 = (a44 * b44);		HX_STACK_VAR(tmp150,"tmp150");
							HX_STACK_LINE(193)
							Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
							HX_STACK_LINE(193)
							te[(int)15] = tmp151;
							HX_STACK_LINE(193)
							_this1;
						}
					}
					HX_STACK_LINE(193)
					bool tmp7 = (_this->parent != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(193)
					if ((tmp7)){
						HX_STACK_LINE(193)
						::phoenix::Spatial tmp8 = _this->get_world();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(193)
						::phoenix::Spatial _this1 = tmp8;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						::phoenix::Matrix tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							::phoenix::Matrix tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::phoenix::Spatial tmp11 = _this->get_world();		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(193)
								::phoenix::Spatial _this2 = tmp11;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(193)
								tmp10 = _this2->matrix;
							}
							HX_STACK_LINE(193)
							::phoenix::Matrix _this2 = tmp10;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(193)
							::phoenix::Matrix tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::phoenix::Spatial tmp12 = _this->parent->get_world();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(193)
								::phoenix::Spatial _this3 = tmp12;		HX_STACK_VAR(_this3,"_this3");
								HX_STACK_LINE(193)
								tmp11 = _this3->matrix;
							}
							HX_STACK_LINE(193)
							::phoenix::Matrix _a = tmp11;		HX_STACK_VAR(_a,"_a");
							HX_STACK_LINE(193)
							Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
							HX_STACK_LINE(193)
							::phoenix::Matrix tmp12 = _this->local->matrix;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(193)
							Array< Float > be = tmp12->elements;		HX_STACK_VAR(be,"be");
							HX_STACK_LINE(193)
							Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(193)
							Float tmp13 = ae->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(193)
							Float a11 = tmp13;		HX_STACK_VAR(a11,"a11");
							HX_STACK_LINE(193)
							Float tmp14 = ae->__get((int)4);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							Float a12 = tmp14;		HX_STACK_VAR(a12,"a12");
							HX_STACK_LINE(193)
							Float tmp15 = ae->__get((int)8);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							Float a13 = tmp15;		HX_STACK_VAR(a13,"a13");
							HX_STACK_LINE(193)
							Float tmp16 = ae->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(193)
							Float a14 = tmp16;		HX_STACK_VAR(a14,"a14");
							HX_STACK_LINE(193)
							Float tmp17 = ae->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(193)
							Float a21 = tmp17;		HX_STACK_VAR(a21,"a21");
							HX_STACK_LINE(193)
							Float tmp18 = ae->__get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(193)
							Float a22 = tmp18;		HX_STACK_VAR(a22,"a22");
							HX_STACK_LINE(193)
							Float tmp19 = ae->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(193)
							Float a23 = tmp19;		HX_STACK_VAR(a23,"a23");
							HX_STACK_LINE(193)
							Float tmp20 = ae->__get((int)13);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(193)
							Float a24 = tmp20;		HX_STACK_VAR(a24,"a24");
							HX_STACK_LINE(193)
							Float tmp21 = ae->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(193)
							Float a31 = tmp21;		HX_STACK_VAR(a31,"a31");
							HX_STACK_LINE(193)
							Float tmp22 = ae->__get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(193)
							Float a32 = tmp22;		HX_STACK_VAR(a32,"a32");
							HX_STACK_LINE(193)
							Float tmp23 = ae->__get((int)10);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(193)
							Float a33 = tmp23;		HX_STACK_VAR(a33,"a33");
							HX_STACK_LINE(193)
							Float tmp24 = ae->__get((int)14);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(193)
							Float a34 = tmp24;		HX_STACK_VAR(a34,"a34");
							HX_STACK_LINE(193)
							Float tmp25 = ae->__get((int)3);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(193)
							Float a41 = tmp25;		HX_STACK_VAR(a41,"a41");
							HX_STACK_LINE(193)
							Float tmp26 = ae->__get((int)7);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(193)
							Float a42 = tmp26;		HX_STACK_VAR(a42,"a42");
							HX_STACK_LINE(193)
							Float tmp27 = ae->__get((int)11);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(193)
							Float a43 = tmp27;		HX_STACK_VAR(a43,"a43");
							HX_STACK_LINE(193)
							Float tmp28 = ae->__get((int)15);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(193)
							Float a44 = tmp28;		HX_STACK_VAR(a44,"a44");
							HX_STACK_LINE(193)
							Float tmp29 = be->__get((int)0);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(193)
							Float b11 = tmp29;		HX_STACK_VAR(b11,"b11");
							HX_STACK_LINE(193)
							Float tmp30 = be->__get((int)4);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(193)
							Float b12 = tmp30;		HX_STACK_VAR(b12,"b12");
							HX_STACK_LINE(193)
							Float tmp31 = be->__get((int)8);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(193)
							Float b13 = tmp31;		HX_STACK_VAR(b13,"b13");
							HX_STACK_LINE(193)
							Float tmp32 = be->__get((int)12);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(193)
							Float b14 = tmp32;		HX_STACK_VAR(b14,"b14");
							HX_STACK_LINE(193)
							Float tmp33 = be->__get((int)1);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(193)
							Float b21 = tmp33;		HX_STACK_VAR(b21,"b21");
							HX_STACK_LINE(193)
							Float tmp34 = be->__get((int)5);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(193)
							Float b22 = tmp34;		HX_STACK_VAR(b22,"b22");
							HX_STACK_LINE(193)
							Float tmp35 = be->__get((int)9);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(193)
							Float b23 = tmp35;		HX_STACK_VAR(b23,"b23");
							HX_STACK_LINE(193)
							Float tmp36 = be->__get((int)13);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(193)
							Float b24 = tmp36;		HX_STACK_VAR(b24,"b24");
							HX_STACK_LINE(193)
							Float tmp37 = be->__get((int)2);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(193)
							Float b31 = tmp37;		HX_STACK_VAR(b31,"b31");
							HX_STACK_LINE(193)
							Float tmp38 = be->__get((int)6);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(193)
							Float b32 = tmp38;		HX_STACK_VAR(b32,"b32");
							HX_STACK_LINE(193)
							Float tmp39 = be->__get((int)10);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(193)
							Float b33 = tmp39;		HX_STACK_VAR(b33,"b33");
							HX_STACK_LINE(193)
							Float tmp40 = be->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(193)
							Float b34 = tmp40;		HX_STACK_VAR(b34,"b34");
							HX_STACK_LINE(193)
							Float tmp41 = be->__get((int)3);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(193)
							Float b41 = tmp41;		HX_STACK_VAR(b41,"b41");
							HX_STACK_LINE(193)
							Float tmp42 = be->__get((int)7);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(193)
							Float b42 = tmp42;		HX_STACK_VAR(b42,"b42");
							HX_STACK_LINE(193)
							Float tmp43 = be->__get((int)11);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(193)
							Float b43 = tmp43;		HX_STACK_VAR(b43,"b43");
							HX_STACK_LINE(193)
							Float tmp44 = be->__get((int)15);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(193)
							Float b44 = tmp44;		HX_STACK_VAR(b44,"b44");
							HX_STACK_LINE(193)
							Float tmp45 = (a11 * b11);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(193)
							Float tmp46 = (a12 * b21);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(193)
							Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(193)
							Float tmp48 = (a13 * b31);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(193)
							Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(193)
							Float tmp50 = (a14 * b41);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(193)
							Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(193)
							te[(int)0] = tmp51;
							HX_STACK_LINE(193)
							Float tmp52 = (a11 * b12);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(193)
							Float tmp53 = (a12 * b22);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(193)
							Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(193)
							Float tmp55 = (a13 * b32);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(193)
							Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(193)
							Float tmp57 = (a14 * b42);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(193)
							Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(193)
							te[(int)4] = tmp58;
							HX_STACK_LINE(193)
							Float tmp59 = (a11 * b13);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(193)
							Float tmp60 = (a12 * b23);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(193)
							Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(193)
							Float tmp62 = (a13 * b33);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(193)
							Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(193)
							Float tmp64 = (a14 * b43);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(193)
							Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(193)
							te[(int)8] = tmp65;
							HX_STACK_LINE(193)
							Float tmp66 = (a11 * b14);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(193)
							Float tmp67 = (a12 * b24);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(193)
							Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(193)
							Float tmp69 = (a13 * b34);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(193)
							Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(193)
							Float tmp71 = (a14 * b44);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(193)
							Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(193)
							te[(int)12] = tmp72;
							HX_STACK_LINE(193)
							Float tmp73 = (a21 * b11);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(193)
							Float tmp74 = (a22 * b21);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(193)
							Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(193)
							Float tmp76 = (a23 * b31);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(193)
							Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(193)
							Float tmp78 = (a24 * b41);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(193)
							Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(193)
							te[(int)1] = tmp79;
							HX_STACK_LINE(193)
							Float tmp80 = (a21 * b12);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(193)
							Float tmp81 = (a22 * b22);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(193)
							Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(193)
							Float tmp83 = (a23 * b32);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(193)
							Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(193)
							Float tmp85 = (a24 * b42);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(193)
							Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(193)
							te[(int)5] = tmp86;
							HX_STACK_LINE(193)
							Float tmp87 = (a21 * b13);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(193)
							Float tmp88 = (a22 * b23);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(193)
							Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(193)
							Float tmp90 = (a23 * b33);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(193)
							Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(193)
							Float tmp92 = (a24 * b43);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(193)
							Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(193)
							te[(int)9] = tmp93;
							HX_STACK_LINE(193)
							Float tmp94 = (a21 * b14);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(193)
							Float tmp95 = (a22 * b24);		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(193)
							Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(193)
							Float tmp97 = (a23 * b34);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(193)
							Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(193)
							Float tmp99 = (a24 * b44);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(193)
							Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(193)
							te[(int)13] = tmp100;
							HX_STACK_LINE(193)
							Float tmp101 = (a31 * b11);		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(193)
							Float tmp102 = (a32 * b21);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(193)
							Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(193)
							Float tmp104 = (a33 * b31);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(193)
							Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(193)
							Float tmp106 = (a34 * b41);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(193)
							Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(193)
							te[(int)2] = tmp107;
							HX_STACK_LINE(193)
							Float tmp108 = (a31 * b12);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(193)
							Float tmp109 = (a32 * b22);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(193)
							Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(193)
							Float tmp111 = (a33 * b32);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(193)
							Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(193)
							Float tmp113 = (a34 * b42);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(193)
							Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(193)
							te[(int)6] = tmp114;
							HX_STACK_LINE(193)
							Float tmp115 = (a31 * b13);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(193)
							Float tmp116 = (a32 * b23);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(193)
							Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(193)
							Float tmp118 = (a33 * b33);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(193)
							Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(193)
							Float tmp120 = (a34 * b43);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(193)
							Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(193)
							te[(int)10] = tmp121;
							HX_STACK_LINE(193)
							Float tmp122 = (a31 * b14);		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(193)
							Float tmp123 = (a32 * b24);		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(193)
							Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(193)
							Float tmp125 = (a33 * b34);		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(193)
							Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(193)
							Float tmp127 = (a34 * b44);		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(193)
							Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
							HX_STACK_LINE(193)
							te[(int)14] = tmp128;
							HX_STACK_LINE(193)
							Float tmp129 = (a41 * b11);		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(193)
							Float tmp130 = (a42 * b21);		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(193)
							Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(193)
							Float tmp132 = (a43 * b31);		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(193)
							Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
							HX_STACK_LINE(193)
							Float tmp134 = (a44 * b41);		HX_STACK_VAR(tmp134,"tmp134");
							HX_STACK_LINE(193)
							Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
							HX_STACK_LINE(193)
							te[(int)3] = tmp135;
							HX_STACK_LINE(193)
							Float tmp136 = (a41 * b12);		HX_STACK_VAR(tmp136,"tmp136");
							HX_STACK_LINE(193)
							Float tmp137 = (a42 * b22);		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(193)
							Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(193)
							Float tmp139 = (a43 * b32);		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(193)
							Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(193)
							Float tmp141 = (a44 * b42);		HX_STACK_VAR(tmp141,"tmp141");
							HX_STACK_LINE(193)
							Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
							HX_STACK_LINE(193)
							te[(int)7] = tmp142;
							HX_STACK_LINE(193)
							Float tmp143 = (a41 * b13);		HX_STACK_VAR(tmp143,"tmp143");
							HX_STACK_LINE(193)
							Float tmp144 = (a42 * b23);		HX_STACK_VAR(tmp144,"tmp144");
							HX_STACK_LINE(193)
							Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
							HX_STACK_LINE(193)
							Float tmp146 = (a43 * b33);		HX_STACK_VAR(tmp146,"tmp146");
							HX_STACK_LINE(193)
							Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
							HX_STACK_LINE(193)
							Float tmp148 = (a44 * b43);		HX_STACK_VAR(tmp148,"tmp148");
							HX_STACK_LINE(193)
							Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
							HX_STACK_LINE(193)
							te[(int)11] = tmp149;
							HX_STACK_LINE(193)
							Float tmp150 = (a41 * b14);		HX_STACK_VAR(tmp150,"tmp150");
							HX_STACK_LINE(193)
							Float tmp151 = (a42 * b24);		HX_STACK_VAR(tmp151,"tmp151");
							HX_STACK_LINE(193)
							Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
							HX_STACK_LINE(193)
							Float tmp153 = (a43 * b34);		HX_STACK_VAR(tmp153,"tmp153");
							HX_STACK_LINE(193)
							Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
							HX_STACK_LINE(193)
							Float tmp155 = (a44 * b44);		HX_STACK_VAR(tmp155,"tmp155");
							HX_STACK_LINE(193)
							Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
							HX_STACK_LINE(193)
							te[(int)15] = tmp156;
							HX_STACK_LINE(193)
							tmp9 = _this2;
						}
						HX_STACK_LINE(193)
						::phoenix::Matrix _m = tmp9;		HX_STACK_VAR(_m,"_m");
						HX_STACK_LINE(193)
						_this1->matrix = _m;
						HX_STACK_LINE(193)
						bool tmp10 = (_m != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(193)
						if ((tmp10)){
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								cpp::ArrayBase array = _this1->matrix->elements;		HX_STACK_VAR(array,"array");
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(193)
								bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(193)
								if ((tmp12)){
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(193)
									this1 = tmp13;
								}
								else{
									HX_STACK_LINE(193)
									bool tmp13 = (array != null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(193)
									if ((tmp13)){
										HX_STACK_LINE(193)
										::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(193)
											::snow::api::buffers::ArrayBufferView _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(193)
											_this2->byteOffset = (int)0;
											HX_STACK_LINE(193)
											_this2->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
											HX_STACK_LINE(193)
											int tmp16 = (_this2->length * _this2->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(193)
											_this2->byteLength = tmp16;
											HX_STACK_LINE(193)
											::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(193)
												int tmp18 = _this2->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(193)
												::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(193)
												this2 = tmp19;
												HX_STACK_LINE(193)
												tmp17 = this2;
											}
											HX_STACK_LINE(193)
											_this2->buffer = tmp17;
											HX_STACK_LINE(193)
											_this2->copyFromArray(((Array< Float >)(array)),null());
											HX_STACK_LINE(193)
											tmp14 = _this2;
										}
										HX_STACK_LINE(193)
										this1 = tmp14;
									}
									else{
										HX_STACK_LINE(193)
										bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(193)
										if ((tmp14)){
											HX_STACK_LINE(193)
											::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(193)
												::snow::api::buffers::ArrayBufferView _this2 = tmp16;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(193)
												::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(193)
												::haxe::io::Bytes srcData = tmp17;		HX_STACK_VAR(srcData,"srcData");
												HX_STACK_LINE(193)
												int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(193)
												int srcLength = tmp18;		HX_STACK_VAR(srcLength,"srcLength");
												HX_STACK_LINE(193)
												int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(193)
												int srcByteOffset = tmp19;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
												HX_STACK_LINE(193)
												int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(193)
												int srcElementSize = tmp20;		HX_STACK_VAR(srcElementSize,"srcElementSize");
												HX_STACK_LINE(193)
												int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(193)
												int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(193)
												int tmp22 = _this2->type;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(193)
												bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(193)
												if ((tmp23)){
													HX_STACK_LINE(193)
													int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
													HX_STACK_LINE(193)
													int tmp24 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(193)
													int cloneLength = tmp24;		HX_STACK_VAR(cloneLength,"cloneLength");
													HX_STACK_LINE(193)
													::haxe::io::Bytes tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(193)
													{
														HX_STACK_LINE(193)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(193)
														int tmp26 = cloneLength;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(193)
														::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(193)
														this2 = tmp27;
														HX_STACK_LINE(193)
														tmp25 = this2;
													}
													HX_STACK_LINE(193)
													_this2->buffer = tmp25;
													HX_STACK_LINE(193)
													::haxe::io::Bytes tmp26 = srcData;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(193)
													int tmp27 = srcByteOffset;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(193)
													int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(193)
													_this2->buffer->blit((int)0,tmp26,tmp27,tmp28);
												}
												else{
													HX_STACK_LINE(193)
													HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
												}
												HX_STACK_LINE(193)
												int tmp24 = (_this2->bytesPerElement * srcLength);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(193)
												_this2->byteLength = tmp24;
												HX_STACK_LINE(193)
												_this2->byteOffset = (int)0;
												HX_STACK_LINE(193)
												_this2->length = srcLength;
												HX_STACK_LINE(193)
												tmp15 = _this2;
											}
											HX_STACK_LINE(193)
											this1 = tmp15;
										}
										else{
											HX_STACK_LINE(193)
											bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(193)
											if ((tmp15)){
												HX_STACK_LINE(193)
												::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(193)
												{
													HX_STACK_LINE(193)
													::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(193)
													::snow::api::buffers::ArrayBufferView _this2 = tmp17;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(193)
													bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(193)
													if ((tmp18)){
														HX_STACK_LINE(193)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(193)
													int tmp19 = hx::Mod((int)0,_this2->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(193)
													bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(193)
													if ((tmp20)){
														HX_STACK_LINE(193)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(193)
													int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(193)
													int bufferByteLength = tmp21;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
													HX_STACK_LINE(193)
													int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(193)
													int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
													HX_STACK_LINE(193)
													bool tmp22 = true;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(193)
													if ((tmp22)){
														HX_STACK_LINE(193)
														int tmp23 = bufferByteLength;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(193)
														newByteLength = tmp23;
														HX_STACK_LINE(193)
														int tmp24 = hx::Mod(bufferByteLength,_this2->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(193)
														bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(193)
														if ((tmp25)){
															HX_STACK_LINE(193)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
														HX_STACK_LINE(193)
														bool tmp26 = (newByteLength < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(193)
														if ((tmp26)){
															HX_STACK_LINE(193)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													else{
														HX_STACK_LINE(193)
														int tmp23 = (null() * _this2->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(193)
														newByteLength = tmp23;
														HX_STACK_LINE(193)
														int tmp24 = newByteLength;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(193)
														int newRange = tmp24;		HX_STACK_VAR(newRange,"newRange");
														HX_STACK_LINE(193)
														bool tmp25 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(193)
														if ((tmp25)){
															HX_STACK_LINE(193)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													HX_STACK_LINE(193)
													_this2->buffer = null();
													HX_STACK_LINE(193)
													_this2->byteOffset = (int)0;
													HX_STACK_LINE(193)
													_this2->byteLength = newByteLength;
													HX_STACK_LINE(193)
													Float tmp23 = (Float(newByteLength) / Float(_this2->bytesPerElement));		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(193)
													int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(193)
													_this2->length = tmp24;
													HX_STACK_LINE(193)
													tmp16 = _this2;
												}
												HX_STACK_LINE(193)
												this1 = tmp16;
											}
											else{
												HX_STACK_LINE(193)
												HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
											}
										}
									}
								}
								HX_STACK_LINE(193)
								tmp11 = this1;
							}
							HX_STACK_LINE(193)
							_this1->floats = tmp11;
						}
						HX_STACK_LINE(193)
						_this1->matrix;
					}
					else{
						HX_STACK_LINE(193)
						::phoenix::Spatial tmp8 = _this->get_world();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(193)
						::phoenix::Spatial _this1 = tmp8;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						::phoenix::Matrix tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							::phoenix::Matrix tmp10 = _this->local->matrix;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							Array< Float > te = tmp10->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(193)
							Float tmp11 = te->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							Float tmp12 = te->__get((int)4);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(193)
							Float tmp13 = te->__get((int)8);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(193)
							Float tmp14 = te->__get((int)12);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							Float tmp15 = te->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							Float tmp16 = te->__get((int)5);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(193)
							Float tmp17 = te->__get((int)9);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(193)
							Float tmp18 = te->__get((int)13);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(193)
							Float tmp19 = te->__get((int)2);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(193)
							Float tmp20 = te->__get((int)6);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(193)
							Float tmp21 = te->__get((int)10);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(193)
							Float tmp22 = te->__get((int)14);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(193)
							Float tmp23 = te->__get((int)3);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(193)
							Float tmp24 = te->__get((int)7);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(193)
							Float tmp25 = te->__get((int)11);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(193)
							Float tmp26 = te->__get((int)15);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(193)
							tmp9 = ::phoenix::Matrix_obj::__new(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26);
						}
						HX_STACK_LINE(193)
						::phoenix::Matrix _m = tmp9;		HX_STACK_VAR(_m,"_m");
						HX_STACK_LINE(193)
						_this1->matrix = _m;
						HX_STACK_LINE(193)
						bool tmp10 = (_m != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(193)
						if ((tmp10)){
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								cpp::ArrayBase array = _this1->matrix->elements;		HX_STACK_VAR(array,"array");
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(193)
								bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(193)
								if ((tmp12)){
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(193)
									this1 = tmp13;
								}
								else{
									HX_STACK_LINE(193)
									bool tmp13 = (array != null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(193)
									if ((tmp13)){
										HX_STACK_LINE(193)
										::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(193)
											::snow::api::buffers::ArrayBufferView _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(193)
											_this2->byteOffset = (int)0;
											HX_STACK_LINE(193)
											_this2->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
											HX_STACK_LINE(193)
											int tmp16 = (_this2->length * _this2->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(193)
											_this2->byteLength = tmp16;
											HX_STACK_LINE(193)
											::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(193)
												int tmp18 = _this2->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(193)
												::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(193)
												this2 = tmp19;
												HX_STACK_LINE(193)
												tmp17 = this2;
											}
											HX_STACK_LINE(193)
											_this2->buffer = tmp17;
											HX_STACK_LINE(193)
											_this2->copyFromArray(((Array< Float >)(array)),null());
											HX_STACK_LINE(193)
											tmp14 = _this2;
										}
										HX_STACK_LINE(193)
										this1 = tmp14;
									}
									else{
										HX_STACK_LINE(193)
										bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(193)
										if ((tmp14)){
											HX_STACK_LINE(193)
											::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(193)
												::snow::api::buffers::ArrayBufferView _this2 = tmp16;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(193)
												::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(193)
												::haxe::io::Bytes srcData = tmp17;		HX_STACK_VAR(srcData,"srcData");
												HX_STACK_LINE(193)
												int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(193)
												int srcLength = tmp18;		HX_STACK_VAR(srcLength,"srcLength");
												HX_STACK_LINE(193)
												int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(193)
												int srcByteOffset = tmp19;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
												HX_STACK_LINE(193)
												int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(193)
												int srcElementSize = tmp20;		HX_STACK_VAR(srcElementSize,"srcElementSize");
												HX_STACK_LINE(193)
												int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(193)
												int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(193)
												int tmp22 = _this2->type;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(193)
												bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(193)
												if ((tmp23)){
													HX_STACK_LINE(193)
													int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
													HX_STACK_LINE(193)
													int tmp24 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(193)
													int cloneLength = tmp24;		HX_STACK_VAR(cloneLength,"cloneLength");
													HX_STACK_LINE(193)
													::haxe::io::Bytes tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(193)
													{
														HX_STACK_LINE(193)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(193)
														int tmp26 = cloneLength;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(193)
														::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(193)
														this2 = tmp27;
														HX_STACK_LINE(193)
														tmp25 = this2;
													}
													HX_STACK_LINE(193)
													_this2->buffer = tmp25;
													HX_STACK_LINE(193)
													::haxe::io::Bytes tmp26 = srcData;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(193)
													int tmp27 = srcByteOffset;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(193)
													int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(193)
													_this2->buffer->blit((int)0,tmp26,tmp27,tmp28);
												}
												else{
													HX_STACK_LINE(193)
													HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
												}
												HX_STACK_LINE(193)
												int tmp24 = (_this2->bytesPerElement * srcLength);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(193)
												_this2->byteLength = tmp24;
												HX_STACK_LINE(193)
												_this2->byteOffset = (int)0;
												HX_STACK_LINE(193)
												_this2->length = srcLength;
												HX_STACK_LINE(193)
												tmp15 = _this2;
											}
											HX_STACK_LINE(193)
											this1 = tmp15;
										}
										else{
											HX_STACK_LINE(193)
											bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(193)
											if ((tmp15)){
												HX_STACK_LINE(193)
												::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(193)
												{
													HX_STACK_LINE(193)
													::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(193)
													::snow::api::buffers::ArrayBufferView _this2 = tmp17;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(193)
													bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(193)
													if ((tmp18)){
														HX_STACK_LINE(193)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(193)
													int tmp19 = hx::Mod((int)0,_this2->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(193)
													bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(193)
													if ((tmp20)){
														HX_STACK_LINE(193)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(193)
													int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(193)
													int bufferByteLength = tmp21;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
													HX_STACK_LINE(193)
													int elementSize = _this2->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(193)
													int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
													HX_STACK_LINE(193)
													bool tmp22 = true;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(193)
													if ((tmp22)){
														HX_STACK_LINE(193)
														int tmp23 = bufferByteLength;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(193)
														newByteLength = tmp23;
														HX_STACK_LINE(193)
														int tmp24 = hx::Mod(bufferByteLength,_this2->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(193)
														bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(193)
														if ((tmp25)){
															HX_STACK_LINE(193)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
														HX_STACK_LINE(193)
														bool tmp26 = (newByteLength < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(193)
														if ((tmp26)){
															HX_STACK_LINE(193)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													else{
														HX_STACK_LINE(193)
														int tmp23 = (null() * _this2->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(193)
														newByteLength = tmp23;
														HX_STACK_LINE(193)
														int tmp24 = newByteLength;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(193)
														int newRange = tmp24;		HX_STACK_VAR(newRange,"newRange");
														HX_STACK_LINE(193)
														bool tmp25 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(193)
														if ((tmp25)){
															HX_STACK_LINE(193)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													HX_STACK_LINE(193)
													_this2->buffer = null();
													HX_STACK_LINE(193)
													_this2->byteOffset = (int)0;
													HX_STACK_LINE(193)
													_this2->byteLength = newByteLength;
													HX_STACK_LINE(193)
													Float tmp23 = (Float(newByteLength) / Float(_this2->bytesPerElement));		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(193)
													int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(193)
													_this2->length = tmp24;
													HX_STACK_LINE(193)
													tmp16 = _this2;
												}
												HX_STACK_LINE(193)
												this1 = tmp16;
											}
											else{
												HX_STACK_LINE(193)
												HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
											}
										}
									}
								}
								HX_STACK_LINE(193)
								tmp11 = this1;
							}
							HX_STACK_LINE(193)
							_this1->floats = tmp11;
						}
						HX_STACK_LINE(193)
						_this1->matrix;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::phoenix::Spatial tmp8 = _this->get_world();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(193)
						::phoenix::Spatial _this1 = tmp8;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(193)
						bool tmp9 = _this1->auto_decompose;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(193)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(193)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(193)
						if ((tmp10)){
							HX_STACK_LINE(193)
							tmp11 = false;
						}
						else{
							HX_STACK_LINE(193)
							tmp11 = true;
						}
						HX_STACK_LINE(193)
						if ((tmp11)){
							HX_STACK_LINE(193)
							::phoenix::MatrixTransform tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(193)
								::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
								HX_STACK_LINE(193)
								::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
								HX_STACK_LINE(193)
								::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
								HX_STACK_LINE(193)
								Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(193)
								::phoenix::Matrix tmp13 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(193)
								::phoenix::Matrix matrix = tmp13;		HX_STACK_VAR(matrix,"matrix");
								HX_STACK_LINE(193)
								Float tmp14 = te->__get((int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(193)
								Float _ax_x = tmp14;		HX_STACK_VAR(_ax_x,"_ax_x");
								HX_STACK_LINE(193)
								Float tmp15 = te->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								Float _ax_y = tmp15;		HX_STACK_VAR(_ax_y,"_ax_y");
								HX_STACK_LINE(193)
								Float tmp16 = te->__get((int)2);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								Float _ax_z = tmp16;		HX_STACK_VAR(_ax_z,"_ax_z");
								HX_STACK_LINE(193)
								Float tmp17 = te->__get((int)4);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								Float _ay_x = tmp17;		HX_STACK_VAR(_ay_x,"_ay_x");
								HX_STACK_LINE(193)
								Float tmp18 = te->__get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								Float _ay_y = tmp18;		HX_STACK_VAR(_ay_y,"_ay_y");
								HX_STACK_LINE(193)
								Float tmp19 = te->__get((int)6);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								Float _ay_z = tmp19;		HX_STACK_VAR(_ay_z,"_ay_z");
								HX_STACK_LINE(193)
								Float tmp20 = te->__get((int)8);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(193)
								Float _az_x = tmp20;		HX_STACK_VAR(_az_x,"_az_x");
								HX_STACK_LINE(193)
								Float tmp21 = te->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(193)
								Float _az_y = tmp21;		HX_STACK_VAR(_az_y,"_az_y");
								HX_STACK_LINE(193)
								Float tmp22 = te->__get((int)10);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(193)
								Float _az_z = tmp22;		HX_STACK_VAR(_az_z,"_az_z");
								HX_STACK_LINE(193)
								Float tmp23 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(193)
								Float tmp24 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(193)
								Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(193)
								Float tmp26 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(193)
								Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(193)
								Float tmp28 = ::Math_obj::sqrt(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(193)
								Float _ax_length = tmp28;		HX_STACK_VAR(_ax_length,"_ax_length");
								HX_STACK_LINE(193)
								Float tmp29 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(193)
								Float tmp30 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(193)
								Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(193)
								Float tmp32 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(193)
								Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(193)
								Float tmp34 = ::Math_obj::sqrt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(193)
								Float _ay_length = tmp34;		HX_STACK_VAR(_ay_length,"_ay_length");
								HX_STACK_LINE(193)
								Float tmp35 = (_az_x * _az_x);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(193)
								Float tmp36 = (_az_y * _az_y);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(193)
								Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(193)
								Float tmp38 = (_az_z * _az_z);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(193)
								Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(193)
								Float tmp40 = ::Math_obj::sqrt(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(193)
								Float _az_length = tmp40;		HX_STACK_VAR(_az_length,"_az_length");
								HX_STACK_LINE(193)
								bool tmp41 = (_quaternion == null());		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(193)
								if ((tmp41)){
									HX_STACK_LINE(193)
									::phoenix::Quaternion tmp42 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(193)
									_quaternion = tmp42;
								}
								HX_STACK_LINE(193)
								bool tmp42 = (_position == null());		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(193)
								if ((tmp42)){
									HX_STACK_LINE(193)
									Float tmp43 = te->__get((int)12);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(193)
									Float tmp44 = te->__get((int)13);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(193)
									Float tmp45 = te->__get((int)14);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(193)
									::phoenix::Vector tmp46 = ::phoenix::Vector_obj::__new(tmp43,tmp44,tmp45,null());		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(193)
									_position = tmp46;
								}
								else{
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										Float tmp43 = te->__get((int)12);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(193)
										Float _x = tmp43;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(193)
										_position->x = _x;
										HX_STACK_LINE(193)
										bool tmp44 = _position->_construct;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(193)
										if ((tmp44)){
											HX_STACK_LINE(193)
											_position->x;
										}
										else{
											HX_STACK_LINE(193)
											bool tmp45 = (_position->listen_x != null());		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(193)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(193)
											if ((tmp45)){
												HX_STACK_LINE(193)
												bool tmp47 = _position->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(193)
												bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(193)
												tmp46 = !(tmp48);
											}
											else{
												HX_STACK_LINE(193)
												tmp46 = false;
											}
											HX_STACK_LINE(193)
											if ((tmp46)){
												HX_STACK_LINE(193)
												Float tmp47 = _x;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(193)
												_position->listen_x(tmp47);
											}
											HX_STACK_LINE(193)
											_position->x;
										}
									}
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										Float tmp43 = te->__get((int)13);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(193)
										Float _y = tmp43;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(193)
										_position->y = _y;
										HX_STACK_LINE(193)
										bool tmp44 = _position->_construct;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(193)
										if ((tmp44)){
											HX_STACK_LINE(193)
											_position->y;
										}
										else{
											HX_STACK_LINE(193)
											bool tmp45 = (_position->listen_y != null());		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(193)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(193)
											if ((tmp45)){
												HX_STACK_LINE(193)
												bool tmp47 = _position->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(193)
												bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(193)
												tmp46 = !(tmp48);
											}
											else{
												HX_STACK_LINE(193)
												tmp46 = false;
											}
											HX_STACK_LINE(193)
											if ((tmp46)){
												HX_STACK_LINE(193)
												Float tmp47 = _y;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(193)
												_position->listen_y(tmp47);
											}
											HX_STACK_LINE(193)
											_position->y;
										}
									}
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										Float tmp43 = te->__get((int)14);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(193)
										Float _z = tmp43;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(193)
										_position->z = _z;
										HX_STACK_LINE(193)
										bool tmp44 = _position->_construct;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(193)
										if ((tmp44)){
											HX_STACK_LINE(193)
											_position->z;
										}
										else{
											HX_STACK_LINE(193)
											bool tmp45 = (_position->listen_z != null());		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(193)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(193)
											if ((tmp45)){
												HX_STACK_LINE(193)
												bool tmp47 = _position->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(193)
												bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(193)
												tmp46 = !(tmp48);
											}
											else{
												HX_STACK_LINE(193)
												tmp46 = false;
											}
											HX_STACK_LINE(193)
											if ((tmp46)){
												HX_STACK_LINE(193)
												Float tmp47 = _z;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(193)
												_position->listen_z(tmp47);
											}
											HX_STACK_LINE(193)
											_position->z;
										}
									}
								}
								HX_STACK_LINE(193)
								bool tmp43 = (_scale == null());		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(193)
								if ((tmp43)){
									HX_STACK_LINE(193)
									::phoenix::Vector tmp44 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(193)
									_scale = tmp44;
								}
								else{
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										_scale->x = _ax_length;
										HX_STACK_LINE(193)
										bool tmp44 = _scale->_construct;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(193)
										if ((tmp44)){
											HX_STACK_LINE(193)
											_scale->x;
										}
										else{
											HX_STACK_LINE(193)
											bool tmp45 = (_scale->listen_x != null());		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(193)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(193)
											if ((tmp45)){
												HX_STACK_LINE(193)
												bool tmp47 = _scale->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(193)
												bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(193)
												tmp46 = !(tmp48);
											}
											else{
												HX_STACK_LINE(193)
												tmp46 = false;
											}
											HX_STACK_LINE(193)
											if ((tmp46)){
												HX_STACK_LINE(193)
												Float tmp47 = _ax_length;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(193)
												_scale->listen_x(tmp47);
											}
											HX_STACK_LINE(193)
											_scale->x;
										}
									}
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										_scale->y = _ay_length;
										HX_STACK_LINE(193)
										bool tmp44 = _scale->_construct;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(193)
										if ((tmp44)){
											HX_STACK_LINE(193)
											_scale->y;
										}
										else{
											HX_STACK_LINE(193)
											bool tmp45 = (_scale->listen_y != null());		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(193)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(193)
											if ((tmp45)){
												HX_STACK_LINE(193)
												bool tmp47 = _scale->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(193)
												bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(193)
												tmp46 = !(tmp48);
											}
											else{
												HX_STACK_LINE(193)
												tmp46 = false;
											}
											HX_STACK_LINE(193)
											if ((tmp46)){
												HX_STACK_LINE(193)
												Float tmp47 = _ay_length;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(193)
												_scale->listen_y(tmp47);
											}
											HX_STACK_LINE(193)
											_scale->y;
										}
									}
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										_scale->z = _az_length;
										HX_STACK_LINE(193)
										bool tmp44 = _scale->_construct;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(193)
										if ((tmp44)){
											HX_STACK_LINE(193)
											_scale->z;
										}
										else{
											HX_STACK_LINE(193)
											bool tmp45 = (_scale->listen_z != null());		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(193)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(193)
											if ((tmp45)){
												HX_STACK_LINE(193)
												bool tmp47 = _scale->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(193)
												bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(193)
												tmp46 = !(tmp48);
											}
											else{
												HX_STACK_LINE(193)
												tmp46 = false;
											}
											HX_STACK_LINE(193)
											if ((tmp46)){
												HX_STACK_LINE(193)
												Float tmp47 = _az_length;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(193)
												_scale->listen_z(tmp47);
											}
											HX_STACK_LINE(193)
											_scale->z;
										}
									}
								}
								HX_STACK_LINE(193)
								matrix->elements = _this2->elements->concat(Array_obj< Float >::__new());
								HX_STACK_LINE(193)
								Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
								HX_STACK_LINE(193)
								Float tmp44 = _ax_length;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)0],tmp44);
								HX_STACK_LINE(193)
								Float tmp45 = _ax_length;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)1],tmp45);
								HX_STACK_LINE(193)
								Float tmp46 = _ax_length;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)2],tmp46);
								HX_STACK_LINE(193)
								Float tmp47 = _ay_length;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)4],tmp47);
								HX_STACK_LINE(193)
								Float tmp48 = _ay_length;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)5],tmp48);
								HX_STACK_LINE(193)
								Float tmp49 = _ay_length;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)6],tmp49);
								HX_STACK_LINE(193)
								Float tmp50 = _az_length;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)8],tmp50);
								HX_STACK_LINE(193)
								Float tmp51 = _az_length;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)9],tmp51);
								HX_STACK_LINE(193)
								Float tmp52 = _az_length;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(193)
								hx::DivEq(me[(int)10],tmp52);
								HX_STACK_LINE(193)
								::phoenix::Matrix tmp53 = matrix;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(193)
								_quaternion->setFromRotationMatrix(tmp53);
								HX_STACK_LINE(193)
								bool tmp54 = (_this2->_transform == null());		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(193)
								if ((tmp54)){
									HX_STACK_LINE(193)
									::phoenix::MatrixTransform tmp55 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(193)
									_this2->_transform = tmp55;
								}
								else{
									HX_STACK_LINE(193)
									_this2->_transform->pos = _position;
									HX_STACK_LINE(193)
									_this2->_transform->rotation = _quaternion;
									HX_STACK_LINE(193)
									_this2->_transform->scale = _scale;
								}
								HX_STACK_LINE(193)
								tmp12 = _this2->_transform;
							}
							HX_STACK_LINE(193)
							::phoenix::MatrixTransform _transform = tmp12;		HX_STACK_VAR(_transform,"_transform");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
								HX_STACK_LINE(193)
								_this1->pos = _p;
								HX_STACK_LINE(193)
								bool tmp13 = (_p != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(193)
								if ((tmp13)){
									HX_STACK_LINE(193)
									::phoenix::Vector tmp14 = _this1->pos;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(193)
									Dynamic tmp15 = _this1->_pos_change_dyn();		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(193)
									::phoenix::Vector_obj::Listen(tmp14,tmp15);
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										bool tmp16 = (_this1->pos_changed != null());		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(193)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(193)
										if ((tmp16)){
											HX_STACK_LINE(193)
											bool tmp18 = _this1->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(193)
											bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(193)
											tmp17 = !(tmp19);
										}
										else{
											HX_STACK_LINE(193)
											tmp17 = false;
										}
										HX_STACK_LINE(193)
										if ((tmp17)){
											HX_STACK_LINE(193)
											::phoenix::Vector tmp18 = _this1->pos;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(193)
											_this1->pos_changed(tmp18);
										}
									}
								}
								HX_STACK_LINE(193)
								_this1->pos;
							}
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
								HX_STACK_LINE(193)
								_this1->rotation = _r;
								HX_STACK_LINE(193)
								bool tmp13 = (_r != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(193)
								if ((tmp13)){
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
										HX_STACK_LINE(193)
										Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
										HX_STACK_LINE(193)
										_q->listen_x = listener;
										HX_STACK_LINE(193)
										_q->listen_y = listener;
										HX_STACK_LINE(193)
										_q->listen_z = listener;
										HX_STACK_LINE(193)
										_q->listen_w = listener;
									}
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										bool tmp14 = (_this1->rotation_changed != null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(193)
										bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(193)
										if ((tmp14)){
											HX_STACK_LINE(193)
											bool tmp16 = _this1->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(193)
											bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(193)
											tmp15 = !(tmp17);
										}
										else{
											HX_STACK_LINE(193)
											tmp15 = false;
										}
										HX_STACK_LINE(193)
										if ((tmp15)){
											HX_STACK_LINE(193)
											::phoenix::Quaternion tmp16 = _this1->rotation;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(193)
											_this1->rotation_changed(tmp16);
										}
									}
								}
								HX_STACK_LINE(193)
								_this1->rotation;
							}
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
								HX_STACK_LINE(193)
								_this1->scale = _s;
								HX_STACK_LINE(193)
								bool tmp13 = (_s != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(193)
								if ((tmp13)){
									HX_STACK_LINE(193)
									::phoenix::Vector tmp14 = _this1->scale;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(193)
									Dynamic tmp15 = _this1->_scale_change_dyn();		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(193)
									::phoenix::Vector_obj::Listen(tmp14,tmp15);
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										bool tmp16 = (_this1->scale_changed != null());		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(193)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(193)
										if ((tmp16)){
											HX_STACK_LINE(193)
											bool tmp18 = _this1->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(193)
											bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(193)
											tmp17 = !(tmp19);
										}
										else{
											HX_STACK_LINE(193)
											tmp17 = false;
										}
										HX_STACK_LINE(193)
										if ((tmp17)){
											HX_STACK_LINE(193)
											::phoenix::Vector tmp18 = _this1->scale;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(193)
											_this1->scale_changed(tmp18);
										}
									}
								}
								HX_STACK_LINE(193)
								_this1->scale;
							}
						}
						HX_STACK_LINE(193)
						_this1;
					}
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						_this->dirty = false;
						HX_STACK_LINE(193)
						bool tmp8 = _this->dirty;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(193)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(193)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(193)
						if ((tmp9)){
							HX_STACK_LINE(193)
							bool tmp11 = _this->_setup;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(193)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(193)
							tmp10 = !(tmp13);
						}
						else{
							HX_STACK_LINE(193)
							tmp10 = false;
						}
						HX_STACK_LINE(193)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(193)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(193)
						if ((tmp11)){
							HX_STACK_LINE(193)
							tmp12 = (_this->_dirty_handlers != null());
						}
						else{
							HX_STACK_LINE(193)
							tmp12 = false;
						}
						HX_STACK_LINE(193)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						if ((tmp12)){
							HX_STACK_LINE(193)
							int tmp14 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							tmp13 = (tmp15 > (int)0);
						}
						else{
							HX_STACK_LINE(193)
							tmp13 = false;
						}
						HX_STACK_LINE(193)
						if ((tmp13)){
							HX_STACK_LINE(193)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(193)
							cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(193)
							while((true)){
								HX_STACK_LINE(193)
								bool tmp14 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(193)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								if ((tmp15)){
									HX_STACK_LINE(193)
									break;
								}
								HX_STACK_LINE(193)
								Dynamic tmp16 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								Dynamic _handler = tmp16;		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(193)
								++(_g);
								HX_STACK_LINE(193)
								bool tmp17 = (_handler != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								if ((tmp17)){
									HX_STACK_LINE(193)
									::phoenix::Transform tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(193)
									_handler(tmp18).Cast< Void >();
								}
							}
						}
						HX_STACK_LINE(193)
						_this->dirty;
					}
					HX_STACK_LINE(193)
					_this->_cleaning = false;
					HX_STACK_LINE(193)
					bool tmp8 = (_this->_clean_handlers != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(193)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(193)
					if ((tmp8)){
						HX_STACK_LINE(193)
						int tmp10 = _this->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(193)
						int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(193)
						tmp9 = (tmp11 > (int)0);
					}
					else{
						HX_STACK_LINE(193)
						tmp9 = false;
					}
					HX_STACK_LINE(193)
					if ((tmp9)){
						HX_STACK_LINE(193)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(193)
						cpp::ArrayBase _g1 = _this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(193)
						while((true)){
							HX_STACK_LINE(193)
							bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							if ((tmp11)){
								HX_STACK_LINE(193)
								break;
							}
							HX_STACK_LINE(193)
							Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(193)
							Dynamic _handler = tmp12;		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(193)
							++(_g);
							HX_STACK_LINE(193)
							bool tmp13 = (_handler != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(193)
							if ((tmp13)){
								HX_STACK_LINE(193)
								::phoenix::Transform tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(193)
								_handler(tmp14).Cast< Void >();
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(198)
		bool tmp2 = this->dirty;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		if ((tmp2)){
			HX_STACK_LINE(198)
			bool tmp4 = this->_cleaning;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(198)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(198)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(198)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(198)
			tmp3 = false;
		}
		HX_STACK_LINE(198)
		if ((tmp3)){
			HX_STACK_LINE(199)
			bool tmp4 = this->dirty;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(199)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(199)
			if ((tmp5)){
				HX_STACK_LINE(199)
				Dynamic();
			}
			else{
				HX_STACK_LINE(199)
				this->_cleaning = true;
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Matrix tmp6 = this->_pos_matrix;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(199)
						e[(int)0] = (int)1;
						HX_STACK_LINE(199)
						e[(int)4] = (int)0;
						HX_STACK_LINE(199)
						e[(int)8] = (int)0;
						HX_STACK_LINE(199)
						::phoenix::Spatial tmp7 = this->local;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(199)
						Float tmp8 = tmp7->pos->x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(199)
						e[(int)12] = tmp8;
						HX_STACK_LINE(199)
						e[(int)1] = (int)0;
						HX_STACK_LINE(199)
						e[(int)5] = (int)1;
						HX_STACK_LINE(199)
						e[(int)9] = (int)0;
						HX_STACK_LINE(199)
						::phoenix::Spatial tmp9 = this->local;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(199)
						Float tmp10 = tmp9->pos->y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(199)
						e[(int)13] = tmp10;
						HX_STACK_LINE(199)
						e[(int)2] = (int)0;
						HX_STACK_LINE(199)
						e[(int)6] = (int)0;
						HX_STACK_LINE(199)
						e[(int)10] = (int)1;
						HX_STACK_LINE(199)
						::phoenix::Spatial tmp11 = this->local;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(199)
						Float tmp12 = tmp11->pos->z;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(199)
						e[(int)14] = tmp12;
						HX_STACK_LINE(199)
						e[(int)3] = (int)0;
						HX_STACK_LINE(199)
						e[(int)7] = (int)0;
						HX_STACK_LINE(199)
						e[(int)11] = (int)0;
						HX_STACK_LINE(199)
						e[(int)15] = (int)1;
						HX_STACK_LINE(199)
						_this;
					}
					HX_STACK_LINE(199)
					_this;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Matrix tmp6 = this->_rotation_matrix;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					::phoenix::Spatial tmp7 = this->local;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(199)
					::phoenix::Quaternion q = tmp7->rotation;		HX_STACK_VAR(q,"q");
					HX_STACK_LINE(199)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(199)
					Float tmp8 = (q->x + q->x);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(199)
					Float x2 = tmp8;		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(199)
					Float tmp9 = (q->y + q->y);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(199)
					Float y2 = tmp9;		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(199)
					Float tmp10 = (q->z + q->z);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(199)
					Float z2 = tmp10;		HX_STACK_VAR(z2,"z2");
					HX_STACK_LINE(199)
					Float tmp11 = (q->x * x2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(199)
					Float xx = tmp11;		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(199)
					Float tmp12 = (q->x * y2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(199)
					Float xy = tmp12;		HX_STACK_VAR(xy,"xy");
					HX_STACK_LINE(199)
					Float tmp13 = (q->x * z2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(199)
					Float xz = tmp13;		HX_STACK_VAR(xz,"xz");
					HX_STACK_LINE(199)
					Float tmp14 = (q->y * y2);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(199)
					Float yy = tmp14;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(199)
					Float tmp15 = (q->y * z2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(199)
					Float yz = tmp15;		HX_STACK_VAR(yz,"yz");
					HX_STACK_LINE(199)
					Float tmp16 = (q->z * z2);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(199)
					Float zz = tmp16;		HX_STACK_VAR(zz,"zz");
					HX_STACK_LINE(199)
					Float tmp17 = (q->w * x2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(199)
					Float wx = tmp17;		HX_STACK_VAR(wx,"wx");
					HX_STACK_LINE(199)
					Float tmp18 = (q->w * y2);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(199)
					Float wy = tmp18;		HX_STACK_VAR(wy,"wy");
					HX_STACK_LINE(199)
					Float tmp19 = (q->w * z2);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(199)
					Float wz = tmp19;		HX_STACK_VAR(wz,"wz");
					HX_STACK_LINE(199)
					Float tmp20 = (yy + zz);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(199)
					Float tmp21 = ((int)1 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(199)
					te[(int)0] = tmp21;
					HX_STACK_LINE(199)
					Float tmp22 = (xy - wz);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(199)
					te[(int)4] = tmp22;
					HX_STACK_LINE(199)
					Float tmp23 = (xz + wy);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(199)
					te[(int)8] = tmp23;
					HX_STACK_LINE(199)
					Float tmp24 = (xy + wz);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(199)
					te[(int)1] = tmp24;
					HX_STACK_LINE(199)
					Float tmp25 = (xx + zz);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(199)
					Float tmp26 = ((int)1 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(199)
					te[(int)5] = tmp26;
					HX_STACK_LINE(199)
					Float tmp27 = (yz - wx);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(199)
					te[(int)9] = tmp27;
					HX_STACK_LINE(199)
					Float tmp28 = (xz - wy);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(199)
					te[(int)2] = tmp28;
					HX_STACK_LINE(199)
					Float tmp29 = (yz + wx);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(199)
					te[(int)6] = tmp29;
					HX_STACK_LINE(199)
					Float tmp30 = (xx + yy);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(199)
					Float tmp31 = ((int)1 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(199)
					te[(int)10] = tmp31;
					HX_STACK_LINE(199)
					te[(int)3] = (int)0;
					HX_STACK_LINE(199)
					te[(int)7] = (int)0;
					HX_STACK_LINE(199)
					te[(int)11] = (int)0;
					HX_STACK_LINE(199)
					te[(int)12] = (int)0;
					HX_STACK_LINE(199)
					te[(int)13] = (int)0;
					HX_STACK_LINE(199)
					te[(int)14] = (int)0;
					HX_STACK_LINE(199)
					te[(int)15] = (int)1;
					HX_STACK_LINE(199)
					_this;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Matrix tmp6 = this->_origin_undo_matrix;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(199)
						e[(int)0] = (int)1;
						HX_STACK_LINE(199)
						e[(int)4] = (int)0;
						HX_STACK_LINE(199)
						e[(int)8] = (int)0;
						HX_STACK_LINE(199)
						::phoenix::Vector tmp7 = this->origin;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(199)
						Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(199)
						Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(199)
						e[(int)12] = tmp9;
						HX_STACK_LINE(199)
						e[(int)1] = (int)0;
						HX_STACK_LINE(199)
						e[(int)5] = (int)1;
						HX_STACK_LINE(199)
						e[(int)9] = (int)0;
						HX_STACK_LINE(199)
						::phoenix::Vector tmp10 = this->origin;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(199)
						Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(199)
						Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(199)
						e[(int)13] = tmp12;
						HX_STACK_LINE(199)
						e[(int)2] = (int)0;
						HX_STACK_LINE(199)
						e[(int)6] = (int)0;
						HX_STACK_LINE(199)
						e[(int)10] = (int)1;
						HX_STACK_LINE(199)
						::phoenix::Vector tmp13 = this->origin;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(199)
						Float tmp14 = tmp13->z;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(199)
						Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(199)
						e[(int)14] = tmp15;
						HX_STACK_LINE(199)
						e[(int)3] = (int)0;
						HX_STACK_LINE(199)
						e[(int)7] = (int)0;
						HX_STACK_LINE(199)
						e[(int)11] = (int)0;
						HX_STACK_LINE(199)
						e[(int)15] = (int)1;
						HX_STACK_LINE(199)
						_this;
					}
					HX_STACK_LINE(199)
					_this;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Spatial tmp6 = this->local;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = tmp6->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(199)
						e[(int)0] = (int)1;
						HX_STACK_LINE(199)
						e[(int)4] = (int)0;
						HX_STACK_LINE(199)
						e[(int)8] = (int)0;
						HX_STACK_LINE(199)
						::phoenix::Vector tmp7 = this->origin;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(199)
						Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(199)
						e[(int)12] = tmp8;
						HX_STACK_LINE(199)
						e[(int)1] = (int)0;
						HX_STACK_LINE(199)
						e[(int)5] = (int)1;
						HX_STACK_LINE(199)
						e[(int)9] = (int)0;
						HX_STACK_LINE(199)
						::phoenix::Vector tmp9 = this->origin;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(199)
						Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(199)
						e[(int)13] = tmp10;
						HX_STACK_LINE(199)
						e[(int)2] = (int)0;
						HX_STACK_LINE(199)
						e[(int)6] = (int)0;
						HX_STACK_LINE(199)
						e[(int)10] = (int)1;
						HX_STACK_LINE(199)
						::phoenix::Vector tmp11 = this->origin;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(199)
						Float tmp12 = tmp11->z;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(199)
						e[(int)14] = tmp12;
						HX_STACK_LINE(199)
						e[(int)3] = (int)0;
						HX_STACK_LINE(199)
						e[(int)7] = (int)0;
						HX_STACK_LINE(199)
						e[(int)11] = (int)0;
						HX_STACK_LINE(199)
						e[(int)15] = (int)1;
						HX_STACK_LINE(199)
						_this;
					}
					HX_STACK_LINE(199)
					_this;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Spatial tmp6 = this->local;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = tmp6->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						Array< Float > ae = _this->elements;		HX_STACK_VAR(ae,"ae");
						HX_STACK_LINE(199)
						::phoenix::Matrix tmp7 = this->_rotation_matrix;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(199)
						Array< Float > be = tmp7->elements;		HX_STACK_VAR(be,"be");
						HX_STACK_LINE(199)
						Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(199)
						Float tmp8 = ae->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(199)
						Float a11 = tmp8;		HX_STACK_VAR(a11,"a11");
						HX_STACK_LINE(199)
						Float tmp9 = ae->__get((int)4);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(199)
						Float a12 = tmp9;		HX_STACK_VAR(a12,"a12");
						HX_STACK_LINE(199)
						Float tmp10 = ae->__get((int)8);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(199)
						Float a13 = tmp10;		HX_STACK_VAR(a13,"a13");
						HX_STACK_LINE(199)
						Float tmp11 = ae->__get((int)12);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(199)
						Float a14 = tmp11;		HX_STACK_VAR(a14,"a14");
						HX_STACK_LINE(199)
						Float tmp12 = ae->__get((int)1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(199)
						Float a21 = tmp12;		HX_STACK_VAR(a21,"a21");
						HX_STACK_LINE(199)
						Float tmp13 = ae->__get((int)5);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(199)
						Float a22 = tmp13;		HX_STACK_VAR(a22,"a22");
						HX_STACK_LINE(199)
						Float tmp14 = ae->__get((int)9);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(199)
						Float a23 = tmp14;		HX_STACK_VAR(a23,"a23");
						HX_STACK_LINE(199)
						Float tmp15 = ae->__get((int)13);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(199)
						Float a24 = tmp15;		HX_STACK_VAR(a24,"a24");
						HX_STACK_LINE(199)
						Float tmp16 = ae->__get((int)2);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(199)
						Float a31 = tmp16;		HX_STACK_VAR(a31,"a31");
						HX_STACK_LINE(199)
						Float tmp17 = ae->__get((int)6);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(199)
						Float a32 = tmp17;		HX_STACK_VAR(a32,"a32");
						HX_STACK_LINE(199)
						Float tmp18 = ae->__get((int)10);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(199)
						Float a33 = tmp18;		HX_STACK_VAR(a33,"a33");
						HX_STACK_LINE(199)
						Float tmp19 = ae->__get((int)14);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(199)
						Float a34 = tmp19;		HX_STACK_VAR(a34,"a34");
						HX_STACK_LINE(199)
						Float tmp20 = ae->__get((int)3);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(199)
						Float a41 = tmp20;		HX_STACK_VAR(a41,"a41");
						HX_STACK_LINE(199)
						Float tmp21 = ae->__get((int)7);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(199)
						Float a42 = tmp21;		HX_STACK_VAR(a42,"a42");
						HX_STACK_LINE(199)
						Float tmp22 = ae->__get((int)11);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(199)
						Float a43 = tmp22;		HX_STACK_VAR(a43,"a43");
						HX_STACK_LINE(199)
						Float tmp23 = ae->__get((int)15);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(199)
						Float a44 = tmp23;		HX_STACK_VAR(a44,"a44");
						HX_STACK_LINE(199)
						Float tmp24 = be->__get((int)0);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(199)
						Float b11 = tmp24;		HX_STACK_VAR(b11,"b11");
						HX_STACK_LINE(199)
						Float tmp25 = be->__get((int)4);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(199)
						Float b12 = tmp25;		HX_STACK_VAR(b12,"b12");
						HX_STACK_LINE(199)
						Float tmp26 = be->__get((int)8);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(199)
						Float b13 = tmp26;		HX_STACK_VAR(b13,"b13");
						HX_STACK_LINE(199)
						Float tmp27 = be->__get((int)12);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(199)
						Float b14 = tmp27;		HX_STACK_VAR(b14,"b14");
						HX_STACK_LINE(199)
						Float tmp28 = be->__get((int)1);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(199)
						Float b21 = tmp28;		HX_STACK_VAR(b21,"b21");
						HX_STACK_LINE(199)
						Float tmp29 = be->__get((int)5);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(199)
						Float b22 = tmp29;		HX_STACK_VAR(b22,"b22");
						HX_STACK_LINE(199)
						Float tmp30 = be->__get((int)9);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(199)
						Float b23 = tmp30;		HX_STACK_VAR(b23,"b23");
						HX_STACK_LINE(199)
						Float tmp31 = be->__get((int)13);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(199)
						Float b24 = tmp31;		HX_STACK_VAR(b24,"b24");
						HX_STACK_LINE(199)
						Float tmp32 = be->__get((int)2);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(199)
						Float b31 = tmp32;		HX_STACK_VAR(b31,"b31");
						HX_STACK_LINE(199)
						Float tmp33 = be->__get((int)6);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(199)
						Float b32 = tmp33;		HX_STACK_VAR(b32,"b32");
						HX_STACK_LINE(199)
						Float tmp34 = be->__get((int)10);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(199)
						Float b33 = tmp34;		HX_STACK_VAR(b33,"b33");
						HX_STACK_LINE(199)
						Float tmp35 = be->__get((int)14);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(199)
						Float b34 = tmp35;		HX_STACK_VAR(b34,"b34");
						HX_STACK_LINE(199)
						Float tmp36 = be->__get((int)3);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(199)
						Float b41 = tmp36;		HX_STACK_VAR(b41,"b41");
						HX_STACK_LINE(199)
						Float tmp37 = be->__get((int)7);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(199)
						Float b42 = tmp37;		HX_STACK_VAR(b42,"b42");
						HX_STACK_LINE(199)
						Float tmp38 = be->__get((int)11);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(199)
						Float b43 = tmp38;		HX_STACK_VAR(b43,"b43");
						HX_STACK_LINE(199)
						Float tmp39 = be->__get((int)15);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(199)
						Float b44 = tmp39;		HX_STACK_VAR(b44,"b44");
						HX_STACK_LINE(199)
						Float tmp40 = (a11 * b11);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(199)
						Float tmp41 = (a12 * b21);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(199)
						Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(199)
						Float tmp43 = (a13 * b31);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(199)
						Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(199)
						Float tmp45 = (a14 * b41);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(199)
						Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(199)
						te[(int)0] = tmp46;
						HX_STACK_LINE(199)
						Float tmp47 = (a11 * b12);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(199)
						Float tmp48 = (a12 * b22);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(199)
						Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(199)
						Float tmp50 = (a13 * b32);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(199)
						Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(199)
						Float tmp52 = (a14 * b42);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(199)
						Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(199)
						te[(int)4] = tmp53;
						HX_STACK_LINE(199)
						Float tmp54 = (a11 * b13);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(199)
						Float tmp55 = (a12 * b23);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(199)
						Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(199)
						Float tmp57 = (a13 * b33);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(199)
						Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(199)
						Float tmp59 = (a14 * b43);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(199)
						Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(199)
						te[(int)8] = tmp60;
						HX_STACK_LINE(199)
						Float tmp61 = (a11 * b14);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(199)
						Float tmp62 = (a12 * b24);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(199)
						Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(199)
						Float tmp64 = (a13 * b34);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(199)
						Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(199)
						Float tmp66 = (a14 * b44);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(199)
						Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(199)
						te[(int)12] = tmp67;
						HX_STACK_LINE(199)
						Float tmp68 = (a21 * b11);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(199)
						Float tmp69 = (a22 * b21);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(199)
						Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(199)
						Float tmp71 = (a23 * b31);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(199)
						Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(199)
						Float tmp73 = (a24 * b41);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(199)
						Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(199)
						te[(int)1] = tmp74;
						HX_STACK_LINE(199)
						Float tmp75 = (a21 * b12);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(199)
						Float tmp76 = (a22 * b22);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(199)
						Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(199)
						Float tmp78 = (a23 * b32);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(199)
						Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(199)
						Float tmp80 = (a24 * b42);		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(199)
						Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(199)
						te[(int)5] = tmp81;
						HX_STACK_LINE(199)
						Float tmp82 = (a21 * b13);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(199)
						Float tmp83 = (a22 * b23);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(199)
						Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(199)
						Float tmp85 = (a23 * b33);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(199)
						Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(199)
						Float tmp87 = (a24 * b43);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(199)
						Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(199)
						te[(int)9] = tmp88;
						HX_STACK_LINE(199)
						Float tmp89 = (a21 * b14);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(199)
						Float tmp90 = (a22 * b24);		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(199)
						Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(199)
						Float tmp92 = (a23 * b34);		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(199)
						Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(199)
						Float tmp94 = (a24 * b44);		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(199)
						Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(199)
						te[(int)13] = tmp95;
						HX_STACK_LINE(199)
						Float tmp96 = (a31 * b11);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(199)
						Float tmp97 = (a32 * b21);		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(199)
						Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(199)
						Float tmp99 = (a33 * b31);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(199)
						Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(199)
						Float tmp101 = (a34 * b41);		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(199)
						Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(199)
						te[(int)2] = tmp102;
						HX_STACK_LINE(199)
						Float tmp103 = (a31 * b12);		HX_STACK_VAR(tmp103,"tmp103");
						HX_STACK_LINE(199)
						Float tmp104 = (a32 * b22);		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(199)
						Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(199)
						Float tmp106 = (a33 * b32);		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(199)
						Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(199)
						Float tmp108 = (a34 * b42);		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(199)
						Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(199)
						te[(int)6] = tmp109;
						HX_STACK_LINE(199)
						Float tmp110 = (a31 * b13);		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(199)
						Float tmp111 = (a32 * b23);		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(199)
						Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(199)
						Float tmp113 = (a33 * b33);		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(199)
						Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(199)
						Float tmp115 = (a34 * b43);		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(199)
						Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(199)
						te[(int)10] = tmp116;
						HX_STACK_LINE(199)
						Float tmp117 = (a31 * b14);		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(199)
						Float tmp118 = (a32 * b24);		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(199)
						Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(199)
						Float tmp120 = (a33 * b34);		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(199)
						Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(199)
						Float tmp122 = (a34 * b44);		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(199)
						Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(199)
						te[(int)14] = tmp123;
						HX_STACK_LINE(199)
						Float tmp124 = (a41 * b11);		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(199)
						Float tmp125 = (a42 * b21);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(199)
						Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(199)
						Float tmp127 = (a43 * b31);		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(199)
						Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(199)
						Float tmp129 = (a44 * b41);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(199)
						Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(199)
						te[(int)3] = tmp130;
						HX_STACK_LINE(199)
						Float tmp131 = (a41 * b12);		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(199)
						Float tmp132 = (a42 * b22);		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(199)
						Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(199)
						Float tmp134 = (a43 * b32);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(199)
						Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(199)
						Float tmp136 = (a44 * b42);		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(199)
						Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(199)
						te[(int)7] = tmp137;
						HX_STACK_LINE(199)
						Float tmp138 = (a41 * b13);		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(199)
						Float tmp139 = (a42 * b23);		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(199)
						Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(199)
						Float tmp141 = (a43 * b33);		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(199)
						Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(199)
						Float tmp143 = (a44 * b43);		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(199)
						Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
						HX_STACK_LINE(199)
						te[(int)11] = tmp144;
						HX_STACK_LINE(199)
						Float tmp145 = (a41 * b14);		HX_STACK_VAR(tmp145,"tmp145");
						HX_STACK_LINE(199)
						Float tmp146 = (a42 * b24);		HX_STACK_VAR(tmp146,"tmp146");
						HX_STACK_LINE(199)
						Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
						HX_STACK_LINE(199)
						Float tmp148 = (a43 * b34);		HX_STACK_VAR(tmp148,"tmp148");
						HX_STACK_LINE(199)
						Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
						HX_STACK_LINE(199)
						Float tmp150 = (a44 * b44);		HX_STACK_VAR(tmp150,"tmp150");
						HX_STACK_LINE(199)
						Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
						HX_STACK_LINE(199)
						te[(int)15] = tmp151;
						HX_STACK_LINE(199)
						_this;
					}
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Spatial tmp6 = this->local;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = tmp6->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					::phoenix::Spatial tmp7 = this->local;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(199)
					::phoenix::Vector _v = tmp7->scale;		HX_STACK_VAR(_v,"_v");
					HX_STACK_LINE(199)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(199)
					Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(199)
					Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(199)
					Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(199)
					Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)0],tmp8);
					HX_STACK_LINE(199)
					Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)4],tmp9);
					HX_STACK_LINE(199)
					Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)8],tmp10);
					HX_STACK_LINE(199)
					Float tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)1],tmp11);
					HX_STACK_LINE(199)
					Float tmp12 = _y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)5],tmp12);
					HX_STACK_LINE(199)
					Float tmp13 = _z;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)9],tmp13);
					HX_STACK_LINE(199)
					Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)2],tmp14);
					HX_STACK_LINE(199)
					Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)6],tmp15);
					HX_STACK_LINE(199)
					Float tmp16 = _z;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)10],tmp16);
					HX_STACK_LINE(199)
					Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)3],tmp17);
					HX_STACK_LINE(199)
					Float tmp18 = _y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)7],tmp18);
					HX_STACK_LINE(199)
					Float tmp19 = _z;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(199)
					hx::MultEq(te[(int)11],tmp19);
					HX_STACK_LINE(199)
					_this;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Spatial tmp6 = this->local;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = tmp6->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					::phoenix::Spatial tmp7 = this->local;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(199)
					::phoenix::Vector _v = tmp7->pos;		HX_STACK_VAR(_v,"_v");
					HX_STACK_LINE(199)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(199)
					Float tmp8 = _v->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(199)
					te[(int)12] = tmp8;
					HX_STACK_LINE(199)
					Float tmp9 = _v->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(199)
					te[(int)13] = tmp9;
					HX_STACK_LINE(199)
					Float tmp10 = _v->z;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(199)
					te[(int)14] = tmp10;
					HX_STACK_LINE(199)
					_this;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Spatial tmp6 = this->local;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(199)
					::phoenix::Matrix _this = tmp6->matrix;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						Array< Float > ae = _this->elements;		HX_STACK_VAR(ae,"ae");
						HX_STACK_LINE(199)
						::phoenix::Matrix tmp7 = this->_origin_undo_matrix;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(199)
						Array< Float > be = tmp7->elements;		HX_STACK_VAR(be,"be");
						HX_STACK_LINE(199)
						Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(199)
						Float tmp8 = ae->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(199)
						Float a11 = tmp8;		HX_STACK_VAR(a11,"a11");
						HX_STACK_LINE(199)
						Float tmp9 = ae->__get((int)4);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(199)
						Float a12 = tmp9;		HX_STACK_VAR(a12,"a12");
						HX_STACK_LINE(199)
						Float tmp10 = ae->__get((int)8);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(199)
						Float a13 = tmp10;		HX_STACK_VAR(a13,"a13");
						HX_STACK_LINE(199)
						Float tmp11 = ae->__get((int)12);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(199)
						Float a14 = tmp11;		HX_STACK_VAR(a14,"a14");
						HX_STACK_LINE(199)
						Float tmp12 = ae->__get((int)1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(199)
						Float a21 = tmp12;		HX_STACK_VAR(a21,"a21");
						HX_STACK_LINE(199)
						Float tmp13 = ae->__get((int)5);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(199)
						Float a22 = tmp13;		HX_STACK_VAR(a22,"a22");
						HX_STACK_LINE(199)
						Float tmp14 = ae->__get((int)9);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(199)
						Float a23 = tmp14;		HX_STACK_VAR(a23,"a23");
						HX_STACK_LINE(199)
						Float tmp15 = ae->__get((int)13);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(199)
						Float a24 = tmp15;		HX_STACK_VAR(a24,"a24");
						HX_STACK_LINE(199)
						Float tmp16 = ae->__get((int)2);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(199)
						Float a31 = tmp16;		HX_STACK_VAR(a31,"a31");
						HX_STACK_LINE(199)
						Float tmp17 = ae->__get((int)6);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(199)
						Float a32 = tmp17;		HX_STACK_VAR(a32,"a32");
						HX_STACK_LINE(199)
						Float tmp18 = ae->__get((int)10);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(199)
						Float a33 = tmp18;		HX_STACK_VAR(a33,"a33");
						HX_STACK_LINE(199)
						Float tmp19 = ae->__get((int)14);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(199)
						Float a34 = tmp19;		HX_STACK_VAR(a34,"a34");
						HX_STACK_LINE(199)
						Float tmp20 = ae->__get((int)3);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(199)
						Float a41 = tmp20;		HX_STACK_VAR(a41,"a41");
						HX_STACK_LINE(199)
						Float tmp21 = ae->__get((int)7);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(199)
						Float a42 = tmp21;		HX_STACK_VAR(a42,"a42");
						HX_STACK_LINE(199)
						Float tmp22 = ae->__get((int)11);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(199)
						Float a43 = tmp22;		HX_STACK_VAR(a43,"a43");
						HX_STACK_LINE(199)
						Float tmp23 = ae->__get((int)15);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(199)
						Float a44 = tmp23;		HX_STACK_VAR(a44,"a44");
						HX_STACK_LINE(199)
						Float tmp24 = be->__get((int)0);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(199)
						Float b11 = tmp24;		HX_STACK_VAR(b11,"b11");
						HX_STACK_LINE(199)
						Float tmp25 = be->__get((int)4);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(199)
						Float b12 = tmp25;		HX_STACK_VAR(b12,"b12");
						HX_STACK_LINE(199)
						Float tmp26 = be->__get((int)8);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(199)
						Float b13 = tmp26;		HX_STACK_VAR(b13,"b13");
						HX_STACK_LINE(199)
						Float tmp27 = be->__get((int)12);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(199)
						Float b14 = tmp27;		HX_STACK_VAR(b14,"b14");
						HX_STACK_LINE(199)
						Float tmp28 = be->__get((int)1);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(199)
						Float b21 = tmp28;		HX_STACK_VAR(b21,"b21");
						HX_STACK_LINE(199)
						Float tmp29 = be->__get((int)5);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(199)
						Float b22 = tmp29;		HX_STACK_VAR(b22,"b22");
						HX_STACK_LINE(199)
						Float tmp30 = be->__get((int)9);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(199)
						Float b23 = tmp30;		HX_STACK_VAR(b23,"b23");
						HX_STACK_LINE(199)
						Float tmp31 = be->__get((int)13);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(199)
						Float b24 = tmp31;		HX_STACK_VAR(b24,"b24");
						HX_STACK_LINE(199)
						Float tmp32 = be->__get((int)2);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(199)
						Float b31 = tmp32;		HX_STACK_VAR(b31,"b31");
						HX_STACK_LINE(199)
						Float tmp33 = be->__get((int)6);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(199)
						Float b32 = tmp33;		HX_STACK_VAR(b32,"b32");
						HX_STACK_LINE(199)
						Float tmp34 = be->__get((int)10);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(199)
						Float b33 = tmp34;		HX_STACK_VAR(b33,"b33");
						HX_STACK_LINE(199)
						Float tmp35 = be->__get((int)14);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(199)
						Float b34 = tmp35;		HX_STACK_VAR(b34,"b34");
						HX_STACK_LINE(199)
						Float tmp36 = be->__get((int)3);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(199)
						Float b41 = tmp36;		HX_STACK_VAR(b41,"b41");
						HX_STACK_LINE(199)
						Float tmp37 = be->__get((int)7);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(199)
						Float b42 = tmp37;		HX_STACK_VAR(b42,"b42");
						HX_STACK_LINE(199)
						Float tmp38 = be->__get((int)11);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(199)
						Float b43 = tmp38;		HX_STACK_VAR(b43,"b43");
						HX_STACK_LINE(199)
						Float tmp39 = be->__get((int)15);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(199)
						Float b44 = tmp39;		HX_STACK_VAR(b44,"b44");
						HX_STACK_LINE(199)
						Float tmp40 = (a11 * b11);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(199)
						Float tmp41 = (a12 * b21);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(199)
						Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(199)
						Float tmp43 = (a13 * b31);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(199)
						Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(199)
						Float tmp45 = (a14 * b41);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(199)
						Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(199)
						te[(int)0] = tmp46;
						HX_STACK_LINE(199)
						Float tmp47 = (a11 * b12);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(199)
						Float tmp48 = (a12 * b22);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(199)
						Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(199)
						Float tmp50 = (a13 * b32);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(199)
						Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(199)
						Float tmp52 = (a14 * b42);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(199)
						Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(199)
						te[(int)4] = tmp53;
						HX_STACK_LINE(199)
						Float tmp54 = (a11 * b13);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(199)
						Float tmp55 = (a12 * b23);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(199)
						Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(199)
						Float tmp57 = (a13 * b33);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(199)
						Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(199)
						Float tmp59 = (a14 * b43);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(199)
						Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(199)
						te[(int)8] = tmp60;
						HX_STACK_LINE(199)
						Float tmp61 = (a11 * b14);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(199)
						Float tmp62 = (a12 * b24);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(199)
						Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(199)
						Float tmp64 = (a13 * b34);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(199)
						Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(199)
						Float tmp66 = (a14 * b44);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(199)
						Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(199)
						te[(int)12] = tmp67;
						HX_STACK_LINE(199)
						Float tmp68 = (a21 * b11);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(199)
						Float tmp69 = (a22 * b21);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(199)
						Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(199)
						Float tmp71 = (a23 * b31);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(199)
						Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(199)
						Float tmp73 = (a24 * b41);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(199)
						Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(199)
						te[(int)1] = tmp74;
						HX_STACK_LINE(199)
						Float tmp75 = (a21 * b12);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(199)
						Float tmp76 = (a22 * b22);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(199)
						Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(199)
						Float tmp78 = (a23 * b32);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(199)
						Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(199)
						Float tmp80 = (a24 * b42);		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(199)
						Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(199)
						te[(int)5] = tmp81;
						HX_STACK_LINE(199)
						Float tmp82 = (a21 * b13);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(199)
						Float tmp83 = (a22 * b23);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(199)
						Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(199)
						Float tmp85 = (a23 * b33);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(199)
						Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(199)
						Float tmp87 = (a24 * b43);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(199)
						Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(199)
						te[(int)9] = tmp88;
						HX_STACK_LINE(199)
						Float tmp89 = (a21 * b14);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(199)
						Float tmp90 = (a22 * b24);		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(199)
						Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(199)
						Float tmp92 = (a23 * b34);		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(199)
						Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(199)
						Float tmp94 = (a24 * b44);		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(199)
						Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(199)
						te[(int)13] = tmp95;
						HX_STACK_LINE(199)
						Float tmp96 = (a31 * b11);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(199)
						Float tmp97 = (a32 * b21);		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(199)
						Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(199)
						Float tmp99 = (a33 * b31);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(199)
						Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(199)
						Float tmp101 = (a34 * b41);		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(199)
						Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(199)
						te[(int)2] = tmp102;
						HX_STACK_LINE(199)
						Float tmp103 = (a31 * b12);		HX_STACK_VAR(tmp103,"tmp103");
						HX_STACK_LINE(199)
						Float tmp104 = (a32 * b22);		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(199)
						Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(199)
						Float tmp106 = (a33 * b32);		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(199)
						Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(199)
						Float tmp108 = (a34 * b42);		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(199)
						Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(199)
						te[(int)6] = tmp109;
						HX_STACK_LINE(199)
						Float tmp110 = (a31 * b13);		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(199)
						Float tmp111 = (a32 * b23);		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(199)
						Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(199)
						Float tmp113 = (a33 * b33);		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(199)
						Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(199)
						Float tmp115 = (a34 * b43);		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(199)
						Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(199)
						te[(int)10] = tmp116;
						HX_STACK_LINE(199)
						Float tmp117 = (a31 * b14);		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(199)
						Float tmp118 = (a32 * b24);		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(199)
						Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(199)
						Float tmp120 = (a33 * b34);		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(199)
						Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(199)
						Float tmp122 = (a34 * b44);		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(199)
						Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(199)
						te[(int)14] = tmp123;
						HX_STACK_LINE(199)
						Float tmp124 = (a41 * b11);		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(199)
						Float tmp125 = (a42 * b21);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(199)
						Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(199)
						Float tmp127 = (a43 * b31);		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(199)
						Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(199)
						Float tmp129 = (a44 * b41);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(199)
						Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(199)
						te[(int)3] = tmp130;
						HX_STACK_LINE(199)
						Float tmp131 = (a41 * b12);		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(199)
						Float tmp132 = (a42 * b22);		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(199)
						Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(199)
						Float tmp134 = (a43 * b32);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(199)
						Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(199)
						Float tmp136 = (a44 * b42);		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(199)
						Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(199)
						te[(int)7] = tmp137;
						HX_STACK_LINE(199)
						Float tmp138 = (a41 * b13);		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(199)
						Float tmp139 = (a42 * b23);		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(199)
						Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(199)
						Float tmp141 = (a43 * b33);		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(199)
						Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(199)
						Float tmp143 = (a44 * b43);		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(199)
						Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
						HX_STACK_LINE(199)
						te[(int)11] = tmp144;
						HX_STACK_LINE(199)
						Float tmp145 = (a41 * b14);		HX_STACK_VAR(tmp145,"tmp145");
						HX_STACK_LINE(199)
						Float tmp146 = (a42 * b24);		HX_STACK_VAR(tmp146,"tmp146");
						HX_STACK_LINE(199)
						Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
						HX_STACK_LINE(199)
						Float tmp148 = (a43 * b34);		HX_STACK_VAR(tmp148,"tmp148");
						HX_STACK_LINE(199)
						Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
						HX_STACK_LINE(199)
						Float tmp150 = (a44 * b44);		HX_STACK_VAR(tmp150,"tmp150");
						HX_STACK_LINE(199)
						Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
						HX_STACK_LINE(199)
						te[(int)15] = tmp151;
						HX_STACK_LINE(199)
						_this;
					}
				}
				HX_STACK_LINE(199)
				::phoenix::Transform tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(199)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(199)
				if ((tmp7)){
					HX_STACK_LINE(199)
					::phoenix::Spatial tmp8 = this->get_world();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(199)
					::phoenix::Spatial _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					::phoenix::Matrix tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						::phoenix::Matrix tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::phoenix::Spatial tmp11 = this->get_world();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(199)
							::phoenix::Spatial _this1 = tmp11;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(199)
							tmp10 = _this1->matrix;
						}
						HX_STACK_LINE(199)
						::phoenix::Matrix _this1 = tmp10;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(199)
						::phoenix::Matrix tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::phoenix::Transform tmp12 = this->parent;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(199)
							::phoenix::Spatial tmp13 = tmp12->get_world();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(199)
							::phoenix::Spatial _this2 = tmp13;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(199)
							tmp11 = _this2->matrix;
						}
						HX_STACK_LINE(199)
						::phoenix::Matrix _a = tmp11;		HX_STACK_VAR(_a,"_a");
						HX_STACK_LINE(199)
						Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
						HX_STACK_LINE(199)
						::phoenix::Spatial tmp12 = this->local;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(199)
						Array< Float > be = tmp12->matrix->elements;		HX_STACK_VAR(be,"be");
						HX_STACK_LINE(199)
						Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(199)
						Float tmp13 = ae->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(199)
						Float a11 = tmp13;		HX_STACK_VAR(a11,"a11");
						HX_STACK_LINE(199)
						Float tmp14 = ae->__get((int)4);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(199)
						Float a12 = tmp14;		HX_STACK_VAR(a12,"a12");
						HX_STACK_LINE(199)
						Float tmp15 = ae->__get((int)8);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(199)
						Float a13 = tmp15;		HX_STACK_VAR(a13,"a13");
						HX_STACK_LINE(199)
						Float tmp16 = ae->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(199)
						Float a14 = tmp16;		HX_STACK_VAR(a14,"a14");
						HX_STACK_LINE(199)
						Float tmp17 = ae->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(199)
						Float a21 = tmp17;		HX_STACK_VAR(a21,"a21");
						HX_STACK_LINE(199)
						Float tmp18 = ae->__get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(199)
						Float a22 = tmp18;		HX_STACK_VAR(a22,"a22");
						HX_STACK_LINE(199)
						Float tmp19 = ae->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(199)
						Float a23 = tmp19;		HX_STACK_VAR(a23,"a23");
						HX_STACK_LINE(199)
						Float tmp20 = ae->__get((int)13);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(199)
						Float a24 = tmp20;		HX_STACK_VAR(a24,"a24");
						HX_STACK_LINE(199)
						Float tmp21 = ae->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(199)
						Float a31 = tmp21;		HX_STACK_VAR(a31,"a31");
						HX_STACK_LINE(199)
						Float tmp22 = ae->__get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(199)
						Float a32 = tmp22;		HX_STACK_VAR(a32,"a32");
						HX_STACK_LINE(199)
						Float tmp23 = ae->__get((int)10);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(199)
						Float a33 = tmp23;		HX_STACK_VAR(a33,"a33");
						HX_STACK_LINE(199)
						Float tmp24 = ae->__get((int)14);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(199)
						Float a34 = tmp24;		HX_STACK_VAR(a34,"a34");
						HX_STACK_LINE(199)
						Float tmp25 = ae->__get((int)3);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(199)
						Float a41 = tmp25;		HX_STACK_VAR(a41,"a41");
						HX_STACK_LINE(199)
						Float tmp26 = ae->__get((int)7);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(199)
						Float a42 = tmp26;		HX_STACK_VAR(a42,"a42");
						HX_STACK_LINE(199)
						Float tmp27 = ae->__get((int)11);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(199)
						Float a43 = tmp27;		HX_STACK_VAR(a43,"a43");
						HX_STACK_LINE(199)
						Float tmp28 = ae->__get((int)15);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(199)
						Float a44 = tmp28;		HX_STACK_VAR(a44,"a44");
						HX_STACK_LINE(199)
						Float tmp29 = be->__get((int)0);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(199)
						Float b11 = tmp29;		HX_STACK_VAR(b11,"b11");
						HX_STACK_LINE(199)
						Float tmp30 = be->__get((int)4);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(199)
						Float b12 = tmp30;		HX_STACK_VAR(b12,"b12");
						HX_STACK_LINE(199)
						Float tmp31 = be->__get((int)8);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(199)
						Float b13 = tmp31;		HX_STACK_VAR(b13,"b13");
						HX_STACK_LINE(199)
						Float tmp32 = be->__get((int)12);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(199)
						Float b14 = tmp32;		HX_STACK_VAR(b14,"b14");
						HX_STACK_LINE(199)
						Float tmp33 = be->__get((int)1);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(199)
						Float b21 = tmp33;		HX_STACK_VAR(b21,"b21");
						HX_STACK_LINE(199)
						Float tmp34 = be->__get((int)5);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(199)
						Float b22 = tmp34;		HX_STACK_VAR(b22,"b22");
						HX_STACK_LINE(199)
						Float tmp35 = be->__get((int)9);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(199)
						Float b23 = tmp35;		HX_STACK_VAR(b23,"b23");
						HX_STACK_LINE(199)
						Float tmp36 = be->__get((int)13);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(199)
						Float b24 = tmp36;		HX_STACK_VAR(b24,"b24");
						HX_STACK_LINE(199)
						Float tmp37 = be->__get((int)2);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(199)
						Float b31 = tmp37;		HX_STACK_VAR(b31,"b31");
						HX_STACK_LINE(199)
						Float tmp38 = be->__get((int)6);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(199)
						Float b32 = tmp38;		HX_STACK_VAR(b32,"b32");
						HX_STACK_LINE(199)
						Float tmp39 = be->__get((int)10);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(199)
						Float b33 = tmp39;		HX_STACK_VAR(b33,"b33");
						HX_STACK_LINE(199)
						Float tmp40 = be->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(199)
						Float b34 = tmp40;		HX_STACK_VAR(b34,"b34");
						HX_STACK_LINE(199)
						Float tmp41 = be->__get((int)3);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(199)
						Float b41 = tmp41;		HX_STACK_VAR(b41,"b41");
						HX_STACK_LINE(199)
						Float tmp42 = be->__get((int)7);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(199)
						Float b42 = tmp42;		HX_STACK_VAR(b42,"b42");
						HX_STACK_LINE(199)
						Float tmp43 = be->__get((int)11);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(199)
						Float b43 = tmp43;		HX_STACK_VAR(b43,"b43");
						HX_STACK_LINE(199)
						Float tmp44 = be->__get((int)15);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(199)
						Float b44 = tmp44;		HX_STACK_VAR(b44,"b44");
						HX_STACK_LINE(199)
						Float tmp45 = (a11 * b11);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(199)
						Float tmp46 = (a12 * b21);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(199)
						Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(199)
						Float tmp48 = (a13 * b31);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(199)
						Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(199)
						Float tmp50 = (a14 * b41);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(199)
						Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(199)
						te[(int)0] = tmp51;
						HX_STACK_LINE(199)
						Float tmp52 = (a11 * b12);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(199)
						Float tmp53 = (a12 * b22);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(199)
						Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(199)
						Float tmp55 = (a13 * b32);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(199)
						Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(199)
						Float tmp57 = (a14 * b42);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(199)
						Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(199)
						te[(int)4] = tmp58;
						HX_STACK_LINE(199)
						Float tmp59 = (a11 * b13);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(199)
						Float tmp60 = (a12 * b23);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(199)
						Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(199)
						Float tmp62 = (a13 * b33);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(199)
						Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(199)
						Float tmp64 = (a14 * b43);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(199)
						Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(199)
						te[(int)8] = tmp65;
						HX_STACK_LINE(199)
						Float tmp66 = (a11 * b14);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(199)
						Float tmp67 = (a12 * b24);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(199)
						Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(199)
						Float tmp69 = (a13 * b34);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(199)
						Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(199)
						Float tmp71 = (a14 * b44);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(199)
						Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(199)
						te[(int)12] = tmp72;
						HX_STACK_LINE(199)
						Float tmp73 = (a21 * b11);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(199)
						Float tmp74 = (a22 * b21);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(199)
						Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(199)
						Float tmp76 = (a23 * b31);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(199)
						Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(199)
						Float tmp78 = (a24 * b41);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(199)
						Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(199)
						te[(int)1] = tmp79;
						HX_STACK_LINE(199)
						Float tmp80 = (a21 * b12);		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(199)
						Float tmp81 = (a22 * b22);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(199)
						Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(199)
						Float tmp83 = (a23 * b32);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(199)
						Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(199)
						Float tmp85 = (a24 * b42);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(199)
						Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(199)
						te[(int)5] = tmp86;
						HX_STACK_LINE(199)
						Float tmp87 = (a21 * b13);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(199)
						Float tmp88 = (a22 * b23);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(199)
						Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(199)
						Float tmp90 = (a23 * b33);		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(199)
						Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(199)
						Float tmp92 = (a24 * b43);		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(199)
						Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(199)
						te[(int)9] = tmp93;
						HX_STACK_LINE(199)
						Float tmp94 = (a21 * b14);		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(199)
						Float tmp95 = (a22 * b24);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(199)
						Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(199)
						Float tmp97 = (a23 * b34);		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(199)
						Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(199)
						Float tmp99 = (a24 * b44);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(199)
						Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(199)
						te[(int)13] = tmp100;
						HX_STACK_LINE(199)
						Float tmp101 = (a31 * b11);		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(199)
						Float tmp102 = (a32 * b21);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(199)
						Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
						HX_STACK_LINE(199)
						Float tmp104 = (a33 * b31);		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(199)
						Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(199)
						Float tmp106 = (a34 * b41);		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(199)
						Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(199)
						te[(int)2] = tmp107;
						HX_STACK_LINE(199)
						Float tmp108 = (a31 * b12);		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(199)
						Float tmp109 = (a32 * b22);		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(199)
						Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(199)
						Float tmp111 = (a33 * b32);		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(199)
						Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(199)
						Float tmp113 = (a34 * b42);		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(199)
						Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(199)
						te[(int)6] = tmp114;
						HX_STACK_LINE(199)
						Float tmp115 = (a31 * b13);		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(199)
						Float tmp116 = (a32 * b23);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(199)
						Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(199)
						Float tmp118 = (a33 * b33);		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(199)
						Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(199)
						Float tmp120 = (a34 * b43);		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(199)
						Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(199)
						te[(int)10] = tmp121;
						HX_STACK_LINE(199)
						Float tmp122 = (a31 * b14);		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(199)
						Float tmp123 = (a32 * b24);		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(199)
						Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(199)
						Float tmp125 = (a33 * b34);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(199)
						Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(199)
						Float tmp127 = (a34 * b44);		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(199)
						Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(199)
						te[(int)14] = tmp128;
						HX_STACK_LINE(199)
						Float tmp129 = (a41 * b11);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(199)
						Float tmp130 = (a42 * b21);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(199)
						Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(199)
						Float tmp132 = (a43 * b31);		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(199)
						Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(199)
						Float tmp134 = (a44 * b41);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(199)
						Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(199)
						te[(int)3] = tmp135;
						HX_STACK_LINE(199)
						Float tmp136 = (a41 * b12);		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(199)
						Float tmp137 = (a42 * b22);		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(199)
						Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(199)
						Float tmp139 = (a43 * b32);		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(199)
						Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(199)
						Float tmp141 = (a44 * b42);		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(199)
						Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(199)
						te[(int)7] = tmp142;
						HX_STACK_LINE(199)
						Float tmp143 = (a41 * b13);		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(199)
						Float tmp144 = (a42 * b23);		HX_STACK_VAR(tmp144,"tmp144");
						HX_STACK_LINE(199)
						Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
						HX_STACK_LINE(199)
						Float tmp146 = (a43 * b33);		HX_STACK_VAR(tmp146,"tmp146");
						HX_STACK_LINE(199)
						Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
						HX_STACK_LINE(199)
						Float tmp148 = (a44 * b43);		HX_STACK_VAR(tmp148,"tmp148");
						HX_STACK_LINE(199)
						Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
						HX_STACK_LINE(199)
						te[(int)11] = tmp149;
						HX_STACK_LINE(199)
						Float tmp150 = (a41 * b14);		HX_STACK_VAR(tmp150,"tmp150");
						HX_STACK_LINE(199)
						Float tmp151 = (a42 * b24);		HX_STACK_VAR(tmp151,"tmp151");
						HX_STACK_LINE(199)
						Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
						HX_STACK_LINE(199)
						Float tmp153 = (a43 * b34);		HX_STACK_VAR(tmp153,"tmp153");
						HX_STACK_LINE(199)
						Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
						HX_STACK_LINE(199)
						Float tmp155 = (a44 * b44);		HX_STACK_VAR(tmp155,"tmp155");
						HX_STACK_LINE(199)
						Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
						HX_STACK_LINE(199)
						te[(int)15] = tmp156;
						HX_STACK_LINE(199)
						tmp9 = _this1;
					}
					HX_STACK_LINE(199)
					::phoenix::Matrix _m = tmp9;		HX_STACK_VAR(_m,"_m");
					HX_STACK_LINE(199)
					_this->matrix = _m;
					HX_STACK_LINE(199)
					bool tmp10 = (_m != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(199)
					if ((tmp10)){
						HX_STACK_LINE(199)
						::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							cpp::ArrayBase array = _this->matrix->elements;		HX_STACK_VAR(array,"array");
							HX_STACK_LINE(199)
							::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(199)
							bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(199)
							if ((tmp12)){
								HX_STACK_LINE(199)
								::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(199)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(199)
								bool tmp13 = (array != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(199)
								if ((tmp13)){
									HX_STACK_LINE(199)
									::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(199)
									{
										HX_STACK_LINE(199)
										::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(199)
										::snow::api::buffers::ArrayBufferView _this1 = tmp15;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(199)
										_this1->byteOffset = (int)0;
										HX_STACK_LINE(199)
										_this1->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
										HX_STACK_LINE(199)
										int tmp16 = (_this1->length * _this1->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(199)
										_this1->byteLength = tmp16;
										HX_STACK_LINE(199)
										::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(199)
										{
											HX_STACK_LINE(199)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(199)
											int tmp18 = _this1->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(199)
											::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(199)
											this2 = tmp19;
											HX_STACK_LINE(199)
											tmp17 = this2;
										}
										HX_STACK_LINE(199)
										_this1->buffer = tmp17;
										HX_STACK_LINE(199)
										_this1->copyFromArray(((Array< Float >)(array)),null());
										HX_STACK_LINE(199)
										tmp14 = _this1;
									}
									HX_STACK_LINE(199)
									this1 = tmp14;
								}
								else{
									HX_STACK_LINE(199)
									bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(199)
									if ((tmp14)){
										HX_STACK_LINE(199)
										::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(199)
										{
											HX_STACK_LINE(199)
											::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(199)
											::snow::api::buffers::ArrayBufferView _this1 = tmp16;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(199)
											::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(199)
											::haxe::io::Bytes srcData = tmp17;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(199)
											int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(199)
											int srcLength = tmp18;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(199)
											int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(199)
											int srcByteOffset = tmp19;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(199)
											int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(199)
											int srcElementSize = tmp20;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(199)
											int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(199)
											int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(199)
											int tmp22 = _this1->type;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(199)
											bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(199)
											if ((tmp23)){
												HX_STACK_LINE(199)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(199)
												int tmp24 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(199)
												int cloneLength = tmp24;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(199)
												::haxe::io::Bytes tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(199)
												{
													HX_STACK_LINE(199)
													::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(199)
													int tmp26 = cloneLength;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(199)
													::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(199)
													this2 = tmp27;
													HX_STACK_LINE(199)
													tmp25 = this2;
												}
												HX_STACK_LINE(199)
												_this1->buffer = tmp25;
												HX_STACK_LINE(199)
												::haxe::io::Bytes tmp26 = srcData;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(199)
												int tmp27 = srcByteOffset;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(199)
												int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(199)
												_this1->buffer->blit((int)0,tmp26,tmp27,tmp28);
											}
											else{
												HX_STACK_LINE(199)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(199)
											int tmp24 = (_this1->bytesPerElement * srcLength);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(199)
											_this1->byteLength = tmp24;
											HX_STACK_LINE(199)
											_this1->byteOffset = (int)0;
											HX_STACK_LINE(199)
											_this1->length = srcLength;
											HX_STACK_LINE(199)
											tmp15 = _this1;
										}
										HX_STACK_LINE(199)
										this1 = tmp15;
									}
									else{
										HX_STACK_LINE(199)
										bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(199)
										if ((tmp15)){
											HX_STACK_LINE(199)
											::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(199)
											{
												HX_STACK_LINE(199)
												::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(199)
												::snow::api::buffers::ArrayBufferView _this1 = tmp17;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(199)
												bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(199)
												if ((tmp18)){
													HX_STACK_LINE(199)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
												HX_STACK_LINE(199)
												int tmp19 = hx::Mod((int)0,_this1->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(199)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(199)
												if ((tmp20)){
													HX_STACK_LINE(199)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
												HX_STACK_LINE(199)
												int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(199)
												int bufferByteLength = tmp21;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(199)
												int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(199)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(199)
												bool tmp22 = true;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(199)
												if ((tmp22)){
													HX_STACK_LINE(199)
													int tmp23 = bufferByteLength;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(199)
													newByteLength = tmp23;
													HX_STACK_LINE(199)
													int tmp24 = hx::Mod(bufferByteLength,_this1->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(199)
													bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(199)
													if ((tmp25)){
														HX_STACK_LINE(199)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(199)
													bool tmp26 = (newByteLength < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(199)
													if ((tmp26)){
														HX_STACK_LINE(199)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(199)
													int tmp23 = (null() * _this1->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(199)
													newByteLength = tmp23;
													HX_STACK_LINE(199)
													int tmp24 = newByteLength;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(199)
													int newRange = tmp24;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(199)
													bool tmp25 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(199)
													if ((tmp25)){
														HX_STACK_LINE(199)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(199)
												_this1->buffer = null();
												HX_STACK_LINE(199)
												_this1->byteOffset = (int)0;
												HX_STACK_LINE(199)
												_this1->byteLength = newByteLength;
												HX_STACK_LINE(199)
												Float tmp23 = (Float(newByteLength) / Float(_this1->bytesPerElement));		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(199)
												int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(199)
												_this1->length = tmp24;
												HX_STACK_LINE(199)
												tmp16 = _this1;
											}
											HX_STACK_LINE(199)
											this1 = tmp16;
										}
										else{
											HX_STACK_LINE(199)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
										}
									}
								}
							}
							HX_STACK_LINE(199)
							tmp11 = this1;
						}
						HX_STACK_LINE(199)
						_this->floats = tmp11;
					}
					HX_STACK_LINE(199)
					_this->matrix;
				}
				else{
					HX_STACK_LINE(199)
					::phoenix::Spatial tmp8 = this->get_world();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(199)
					::phoenix::Spatial _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					::phoenix::Matrix tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						::phoenix::Spatial tmp10 = this->local;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(199)
						Array< Float > te = tmp10->matrix->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(199)
						Float tmp11 = te->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(199)
						Float tmp12 = te->__get((int)4);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(199)
						Float tmp13 = te->__get((int)8);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(199)
						Float tmp14 = te->__get((int)12);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(199)
						Float tmp15 = te->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(199)
						Float tmp16 = te->__get((int)5);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(199)
						Float tmp17 = te->__get((int)9);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(199)
						Float tmp18 = te->__get((int)13);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(199)
						Float tmp19 = te->__get((int)2);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(199)
						Float tmp20 = te->__get((int)6);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(199)
						Float tmp21 = te->__get((int)10);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(199)
						Float tmp22 = te->__get((int)14);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(199)
						Float tmp23 = te->__get((int)3);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(199)
						Float tmp24 = te->__get((int)7);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(199)
						Float tmp25 = te->__get((int)11);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(199)
						Float tmp26 = te->__get((int)15);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(199)
						tmp9 = ::phoenix::Matrix_obj::__new(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26);
					}
					HX_STACK_LINE(199)
					::phoenix::Matrix _m = tmp9;		HX_STACK_VAR(_m,"_m");
					HX_STACK_LINE(199)
					_this->matrix = _m;
					HX_STACK_LINE(199)
					bool tmp10 = (_m != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(199)
					if ((tmp10)){
						HX_STACK_LINE(199)
						::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							cpp::ArrayBase array = _this->matrix->elements;		HX_STACK_VAR(array,"array");
							HX_STACK_LINE(199)
							::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(199)
							bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(199)
							if ((tmp12)){
								HX_STACK_LINE(199)
								::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(199)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(199)
								bool tmp13 = (array != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(199)
								if ((tmp13)){
									HX_STACK_LINE(199)
									::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(199)
									{
										HX_STACK_LINE(199)
										::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(199)
										::snow::api::buffers::ArrayBufferView _this1 = tmp15;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(199)
										_this1->byteOffset = (int)0;
										HX_STACK_LINE(199)
										_this1->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
										HX_STACK_LINE(199)
										int tmp16 = (_this1->length * _this1->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(199)
										_this1->byteLength = tmp16;
										HX_STACK_LINE(199)
										::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(199)
										{
											HX_STACK_LINE(199)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(199)
											int tmp18 = _this1->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(199)
											::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(199)
											this2 = tmp19;
											HX_STACK_LINE(199)
											tmp17 = this2;
										}
										HX_STACK_LINE(199)
										_this1->buffer = tmp17;
										HX_STACK_LINE(199)
										_this1->copyFromArray(((Array< Float >)(array)),null());
										HX_STACK_LINE(199)
										tmp14 = _this1;
									}
									HX_STACK_LINE(199)
									this1 = tmp14;
								}
								else{
									HX_STACK_LINE(199)
									bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(199)
									if ((tmp14)){
										HX_STACK_LINE(199)
										::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(199)
										{
											HX_STACK_LINE(199)
											::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(199)
											::snow::api::buffers::ArrayBufferView _this1 = tmp16;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(199)
											::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(199)
											::haxe::io::Bytes srcData = tmp17;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(199)
											int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(199)
											int srcLength = tmp18;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(199)
											int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(199)
											int srcByteOffset = tmp19;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(199)
											int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(199)
											int srcElementSize = tmp20;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(199)
											int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(199)
											int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(199)
											int tmp22 = _this1->type;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(199)
											bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(199)
											if ((tmp23)){
												HX_STACK_LINE(199)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(199)
												int tmp24 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(199)
												int cloneLength = tmp24;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(199)
												::haxe::io::Bytes tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(199)
												{
													HX_STACK_LINE(199)
													::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(199)
													int tmp26 = cloneLength;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(199)
													::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(199)
													this2 = tmp27;
													HX_STACK_LINE(199)
													tmp25 = this2;
												}
												HX_STACK_LINE(199)
												_this1->buffer = tmp25;
												HX_STACK_LINE(199)
												::haxe::io::Bytes tmp26 = srcData;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(199)
												int tmp27 = srcByteOffset;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(199)
												int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(199)
												_this1->buffer->blit((int)0,tmp26,tmp27,tmp28);
											}
											else{
												HX_STACK_LINE(199)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(199)
											int tmp24 = (_this1->bytesPerElement * srcLength);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(199)
											_this1->byteLength = tmp24;
											HX_STACK_LINE(199)
											_this1->byteOffset = (int)0;
											HX_STACK_LINE(199)
											_this1->length = srcLength;
											HX_STACK_LINE(199)
											tmp15 = _this1;
										}
										HX_STACK_LINE(199)
										this1 = tmp15;
									}
									else{
										HX_STACK_LINE(199)
										bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(199)
										if ((tmp15)){
											HX_STACK_LINE(199)
											::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(199)
											{
												HX_STACK_LINE(199)
												::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(199)
												::snow::api::buffers::ArrayBufferView _this1 = tmp17;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(199)
												bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(199)
												if ((tmp18)){
													HX_STACK_LINE(199)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
												HX_STACK_LINE(199)
												int tmp19 = hx::Mod((int)0,_this1->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(199)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(199)
												if ((tmp20)){
													HX_STACK_LINE(199)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
												HX_STACK_LINE(199)
												int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(199)
												int bufferByteLength = tmp21;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(199)
												int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(199)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(199)
												bool tmp22 = true;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(199)
												if ((tmp22)){
													HX_STACK_LINE(199)
													int tmp23 = bufferByteLength;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(199)
													newByteLength = tmp23;
													HX_STACK_LINE(199)
													int tmp24 = hx::Mod(bufferByteLength,_this1->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(199)
													bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(199)
													if ((tmp25)){
														HX_STACK_LINE(199)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(199)
													bool tmp26 = (newByteLength < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(199)
													if ((tmp26)){
														HX_STACK_LINE(199)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(199)
													int tmp23 = (null() * _this1->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(199)
													newByteLength = tmp23;
													HX_STACK_LINE(199)
													int tmp24 = newByteLength;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(199)
													int newRange = tmp24;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(199)
													bool tmp25 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(199)
													if ((tmp25)){
														HX_STACK_LINE(199)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(199)
												_this1->buffer = null();
												HX_STACK_LINE(199)
												_this1->byteOffset = (int)0;
												HX_STACK_LINE(199)
												_this1->byteLength = newByteLength;
												HX_STACK_LINE(199)
												Float tmp23 = (Float(newByteLength) / Float(_this1->bytesPerElement));		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(199)
												int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(199)
												_this1->length = tmp24;
												HX_STACK_LINE(199)
												tmp16 = _this1;
											}
											HX_STACK_LINE(199)
											this1 = tmp16;
										}
										else{
											HX_STACK_LINE(199)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
										}
									}
								}
							}
							HX_STACK_LINE(199)
							tmp11 = this1;
						}
						HX_STACK_LINE(199)
						_this->floats = tmp11;
					}
					HX_STACK_LINE(199)
					_this->matrix;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					::phoenix::Spatial tmp8 = this->get_world();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(199)
					::phoenix::Spatial _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(199)
					bool tmp9 = _this->auto_decompose;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(199)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(199)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(199)
					if ((tmp10)){
						HX_STACK_LINE(199)
						tmp11 = false;
					}
					else{
						HX_STACK_LINE(199)
						tmp11 = true;
					}
					HX_STACK_LINE(199)
					if ((tmp11)){
						HX_STACK_LINE(199)
						::phoenix::MatrixTransform tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::phoenix::Matrix _this1 = _this->matrix;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(199)
							::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
							HX_STACK_LINE(199)
							::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
							HX_STACK_LINE(199)
							::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
							HX_STACK_LINE(199)
							Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
							HX_STACK_LINE(199)
							::phoenix::Matrix tmp13 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(199)
							::phoenix::Matrix matrix = tmp13;		HX_STACK_VAR(matrix,"matrix");
							HX_STACK_LINE(199)
							Float tmp14 = te->__get((int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(199)
							Float _ax_x = tmp14;		HX_STACK_VAR(_ax_x,"_ax_x");
							HX_STACK_LINE(199)
							Float tmp15 = te->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(199)
							Float _ax_y = tmp15;		HX_STACK_VAR(_ax_y,"_ax_y");
							HX_STACK_LINE(199)
							Float tmp16 = te->__get((int)2);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(199)
							Float _ax_z = tmp16;		HX_STACK_VAR(_ax_z,"_ax_z");
							HX_STACK_LINE(199)
							Float tmp17 = te->__get((int)4);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(199)
							Float _ay_x = tmp17;		HX_STACK_VAR(_ay_x,"_ay_x");
							HX_STACK_LINE(199)
							Float tmp18 = te->__get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(199)
							Float _ay_y = tmp18;		HX_STACK_VAR(_ay_y,"_ay_y");
							HX_STACK_LINE(199)
							Float tmp19 = te->__get((int)6);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(199)
							Float _ay_z = tmp19;		HX_STACK_VAR(_ay_z,"_ay_z");
							HX_STACK_LINE(199)
							Float tmp20 = te->__get((int)8);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(199)
							Float _az_x = tmp20;		HX_STACK_VAR(_az_x,"_az_x");
							HX_STACK_LINE(199)
							Float tmp21 = te->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(199)
							Float _az_y = tmp21;		HX_STACK_VAR(_az_y,"_az_y");
							HX_STACK_LINE(199)
							Float tmp22 = te->__get((int)10);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(199)
							Float _az_z = tmp22;		HX_STACK_VAR(_az_z,"_az_z");
							HX_STACK_LINE(199)
							Float tmp23 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(199)
							Float tmp24 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(199)
							Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(199)
							Float tmp26 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(199)
							Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(199)
							Float tmp28 = ::Math_obj::sqrt(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(199)
							Float _ax_length = tmp28;		HX_STACK_VAR(_ax_length,"_ax_length");
							HX_STACK_LINE(199)
							Float tmp29 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(199)
							Float tmp30 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(199)
							Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(199)
							Float tmp32 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(199)
							Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(199)
							Float tmp34 = ::Math_obj::sqrt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(199)
							Float _ay_length = tmp34;		HX_STACK_VAR(_ay_length,"_ay_length");
							HX_STACK_LINE(199)
							Float tmp35 = (_az_x * _az_x);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(199)
							Float tmp36 = (_az_y * _az_y);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(199)
							Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(199)
							Float tmp38 = (_az_z * _az_z);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(199)
							Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(199)
							Float tmp40 = ::Math_obj::sqrt(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(199)
							Float _az_length = tmp40;		HX_STACK_VAR(_az_length,"_az_length");
							HX_STACK_LINE(199)
							bool tmp41 = (_quaternion == null());		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(199)
							if ((tmp41)){
								HX_STACK_LINE(199)
								::phoenix::Quaternion tmp42 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(199)
								_quaternion = tmp42;
							}
							HX_STACK_LINE(199)
							bool tmp42 = (_position == null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(199)
							if ((tmp42)){
								HX_STACK_LINE(199)
								Float tmp43 = te->__get((int)12);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(199)
								Float tmp44 = te->__get((int)13);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(199)
								Float tmp45 = te->__get((int)14);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(199)
								::phoenix::Vector tmp46 = ::phoenix::Vector_obj::__new(tmp43,tmp44,tmp45,null());		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(199)
								_position = tmp46;
							}
							else{
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									Float tmp43 = te->__get((int)12);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(199)
									Float _x = tmp43;		HX_STACK_VAR(_x,"_x");
									HX_STACK_LINE(199)
									_position->x = _x;
									HX_STACK_LINE(199)
									bool tmp44 = _position->_construct;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(199)
									if ((tmp44)){
										HX_STACK_LINE(199)
										_position->x;
									}
									else{
										HX_STACK_LINE(199)
										bool tmp45 = (_position->listen_x != null());		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(199)
										bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(199)
										if ((tmp45)){
											HX_STACK_LINE(199)
											bool tmp47 = _position->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(199)
											bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(199)
											tmp46 = !(tmp48);
										}
										else{
											HX_STACK_LINE(199)
											tmp46 = false;
										}
										HX_STACK_LINE(199)
										if ((tmp46)){
											HX_STACK_LINE(199)
											Float tmp47 = _x;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(199)
											_position->listen_x(tmp47);
										}
										HX_STACK_LINE(199)
										_position->x;
									}
								}
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									Float tmp43 = te->__get((int)13);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(199)
									Float _y = tmp43;		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(199)
									_position->y = _y;
									HX_STACK_LINE(199)
									bool tmp44 = _position->_construct;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(199)
									if ((tmp44)){
										HX_STACK_LINE(199)
										_position->y;
									}
									else{
										HX_STACK_LINE(199)
										bool tmp45 = (_position->listen_y != null());		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(199)
										bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(199)
										if ((tmp45)){
											HX_STACK_LINE(199)
											bool tmp47 = _position->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(199)
											bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(199)
											tmp46 = !(tmp48);
										}
										else{
											HX_STACK_LINE(199)
											tmp46 = false;
										}
										HX_STACK_LINE(199)
										if ((tmp46)){
											HX_STACK_LINE(199)
											Float tmp47 = _y;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(199)
											_position->listen_y(tmp47);
										}
										HX_STACK_LINE(199)
										_position->y;
									}
								}
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									Float tmp43 = te->__get((int)14);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(199)
									Float _z = tmp43;		HX_STACK_VAR(_z,"_z");
									HX_STACK_LINE(199)
									_position->z = _z;
									HX_STACK_LINE(199)
									bool tmp44 = _position->_construct;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(199)
									if ((tmp44)){
										HX_STACK_LINE(199)
										_position->z;
									}
									else{
										HX_STACK_LINE(199)
										bool tmp45 = (_position->listen_z != null());		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(199)
										bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(199)
										if ((tmp45)){
											HX_STACK_LINE(199)
											bool tmp47 = _position->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(199)
											bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(199)
											tmp46 = !(tmp48);
										}
										else{
											HX_STACK_LINE(199)
											tmp46 = false;
										}
										HX_STACK_LINE(199)
										if ((tmp46)){
											HX_STACK_LINE(199)
											Float tmp47 = _z;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(199)
											_position->listen_z(tmp47);
										}
										HX_STACK_LINE(199)
										_position->z;
									}
								}
							}
							HX_STACK_LINE(199)
							bool tmp43 = (_scale == null());		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(199)
							if ((tmp43)){
								HX_STACK_LINE(199)
								::phoenix::Vector tmp44 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(199)
								_scale = tmp44;
							}
							else{
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									_scale->x = _ax_length;
									HX_STACK_LINE(199)
									bool tmp44 = _scale->_construct;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(199)
									if ((tmp44)){
										HX_STACK_LINE(199)
										_scale->x;
									}
									else{
										HX_STACK_LINE(199)
										bool tmp45 = (_scale->listen_x != null());		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(199)
										bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(199)
										if ((tmp45)){
											HX_STACK_LINE(199)
											bool tmp47 = _scale->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(199)
											bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(199)
											tmp46 = !(tmp48);
										}
										else{
											HX_STACK_LINE(199)
											tmp46 = false;
										}
										HX_STACK_LINE(199)
										if ((tmp46)){
											HX_STACK_LINE(199)
											Float tmp47 = _ax_length;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(199)
											_scale->listen_x(tmp47);
										}
										HX_STACK_LINE(199)
										_scale->x;
									}
								}
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									_scale->y = _ay_length;
									HX_STACK_LINE(199)
									bool tmp44 = _scale->_construct;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(199)
									if ((tmp44)){
										HX_STACK_LINE(199)
										_scale->y;
									}
									else{
										HX_STACK_LINE(199)
										bool tmp45 = (_scale->listen_y != null());		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(199)
										bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(199)
										if ((tmp45)){
											HX_STACK_LINE(199)
											bool tmp47 = _scale->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(199)
											bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(199)
											tmp46 = !(tmp48);
										}
										else{
											HX_STACK_LINE(199)
											tmp46 = false;
										}
										HX_STACK_LINE(199)
										if ((tmp46)){
											HX_STACK_LINE(199)
											Float tmp47 = _ay_length;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(199)
											_scale->listen_y(tmp47);
										}
										HX_STACK_LINE(199)
										_scale->y;
									}
								}
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									_scale->z = _az_length;
									HX_STACK_LINE(199)
									bool tmp44 = _scale->_construct;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(199)
									if ((tmp44)){
										HX_STACK_LINE(199)
										_scale->z;
									}
									else{
										HX_STACK_LINE(199)
										bool tmp45 = (_scale->listen_z != null());		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(199)
										bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(199)
										if ((tmp45)){
											HX_STACK_LINE(199)
											bool tmp47 = _scale->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(199)
											bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(199)
											tmp46 = !(tmp48);
										}
										else{
											HX_STACK_LINE(199)
											tmp46 = false;
										}
										HX_STACK_LINE(199)
										if ((tmp46)){
											HX_STACK_LINE(199)
											Float tmp47 = _az_length;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(199)
											_scale->listen_z(tmp47);
										}
										HX_STACK_LINE(199)
										_scale->z;
									}
								}
							}
							HX_STACK_LINE(199)
							matrix->elements = _this1->elements->concat(Array_obj< Float >::__new());
							HX_STACK_LINE(199)
							Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
							HX_STACK_LINE(199)
							Float tmp44 = _ax_length;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)0],tmp44);
							HX_STACK_LINE(199)
							Float tmp45 = _ax_length;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)1],tmp45);
							HX_STACK_LINE(199)
							Float tmp46 = _ax_length;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)2],tmp46);
							HX_STACK_LINE(199)
							Float tmp47 = _ay_length;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)4],tmp47);
							HX_STACK_LINE(199)
							Float tmp48 = _ay_length;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)5],tmp48);
							HX_STACK_LINE(199)
							Float tmp49 = _ay_length;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)6],tmp49);
							HX_STACK_LINE(199)
							Float tmp50 = _az_length;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)8],tmp50);
							HX_STACK_LINE(199)
							Float tmp51 = _az_length;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)9],tmp51);
							HX_STACK_LINE(199)
							Float tmp52 = _az_length;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(199)
							hx::DivEq(me[(int)10],tmp52);
							HX_STACK_LINE(199)
							::phoenix::Matrix tmp53 = matrix;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(199)
							_quaternion->setFromRotationMatrix(tmp53);
							HX_STACK_LINE(199)
							bool tmp54 = (_this1->_transform == null());		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(199)
							if ((tmp54)){
								HX_STACK_LINE(199)
								::phoenix::MatrixTransform tmp55 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(199)
								_this1->_transform = tmp55;
							}
							else{
								HX_STACK_LINE(199)
								_this1->_transform->pos = _position;
								HX_STACK_LINE(199)
								_this1->_transform->rotation = _quaternion;
								HX_STACK_LINE(199)
								_this1->_transform->scale = _scale;
							}
							HX_STACK_LINE(199)
							tmp12 = _this1->_transform;
						}
						HX_STACK_LINE(199)
						::phoenix::MatrixTransform _transform = tmp12;		HX_STACK_VAR(_transform,"_transform");
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
							HX_STACK_LINE(199)
							_this->pos = _p;
							HX_STACK_LINE(199)
							bool tmp13 = (_p != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(199)
							if ((tmp13)){
								HX_STACK_LINE(199)
								::phoenix::Vector tmp14 = _this->pos;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(199)
								Dynamic tmp15 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(199)
								::phoenix::Vector_obj::Listen(tmp14,tmp15);
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									bool tmp16 = (_this->pos_changed != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(199)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(199)
									if ((tmp16)){
										HX_STACK_LINE(199)
										bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(199)
										bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(199)
										tmp17 = !(tmp19);
									}
									else{
										HX_STACK_LINE(199)
										tmp17 = false;
									}
									HX_STACK_LINE(199)
									if ((tmp17)){
										HX_STACK_LINE(199)
										::phoenix::Vector tmp18 = _this->pos;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(199)
										_this->pos_changed(tmp18);
									}
								}
							}
							HX_STACK_LINE(199)
							_this->pos;
						}
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
							HX_STACK_LINE(199)
							_this->rotation = _r;
							HX_STACK_LINE(199)
							bool tmp13 = (_r != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(199)
							if ((tmp13)){
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
									HX_STACK_LINE(199)
									Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
									HX_STACK_LINE(199)
									_q->listen_x = listener;
									HX_STACK_LINE(199)
									_q->listen_y = listener;
									HX_STACK_LINE(199)
									_q->listen_z = listener;
									HX_STACK_LINE(199)
									_q->listen_w = listener;
								}
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									bool tmp14 = (_this->rotation_changed != null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(199)
									bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(199)
									if ((tmp14)){
										HX_STACK_LINE(199)
										bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(199)
										bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(199)
										tmp15 = !(tmp17);
									}
									else{
										HX_STACK_LINE(199)
										tmp15 = false;
									}
									HX_STACK_LINE(199)
									if ((tmp15)){
										HX_STACK_LINE(199)
										::phoenix::Quaternion tmp16 = _this->rotation;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(199)
										_this->rotation_changed(tmp16);
									}
								}
							}
							HX_STACK_LINE(199)
							_this->rotation;
						}
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
							HX_STACK_LINE(199)
							_this->scale = _s;
							HX_STACK_LINE(199)
							bool tmp13 = (_s != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(199)
							if ((tmp13)){
								HX_STACK_LINE(199)
								::phoenix::Vector tmp14 = _this->scale;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(199)
								Dynamic tmp15 = _this->_scale_change_dyn();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(199)
								::phoenix::Vector_obj::Listen(tmp14,tmp15);
								HX_STACK_LINE(199)
								{
									HX_STACK_LINE(199)
									bool tmp16 = (_this->scale_changed != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(199)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(199)
									if ((tmp16)){
										HX_STACK_LINE(199)
										bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(199)
										bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(199)
										tmp17 = !(tmp19);
									}
									else{
										HX_STACK_LINE(199)
										tmp17 = false;
									}
									HX_STACK_LINE(199)
									if ((tmp17)){
										HX_STACK_LINE(199)
										::phoenix::Vector tmp18 = _this->scale;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(199)
										_this->scale_changed(tmp18);
									}
								}
							}
							HX_STACK_LINE(199)
							_this->scale;
						}
					}
					HX_STACK_LINE(199)
					_this;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					this->dirty = false;
					HX_STACK_LINE(199)
					bool tmp8 = this->dirty;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(199)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(199)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(199)
					if ((tmp9)){
						HX_STACK_LINE(199)
						bool tmp11 = this->_setup;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(199)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(199)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(199)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(199)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(199)
						tmp10 = !(tmp15);
					}
					else{
						HX_STACK_LINE(199)
						tmp10 = false;
					}
					HX_STACK_LINE(199)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(199)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(199)
					if ((tmp11)){
						HX_STACK_LINE(199)
						tmp12 = (this->_dirty_handlers != null());
					}
					else{
						HX_STACK_LINE(199)
						tmp12 = false;
					}
					HX_STACK_LINE(199)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(199)
					if ((tmp12)){
						HX_STACK_LINE(199)
						int tmp14 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(199)
						int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(199)
						tmp13 = (tmp15 > (int)0);
					}
					else{
						HX_STACK_LINE(199)
						tmp13 = false;
					}
					HX_STACK_LINE(199)
					if ((tmp13)){
						HX_STACK_LINE(199)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(199)
						cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(199)
						while((true)){
							HX_STACK_LINE(199)
							bool tmp14 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(199)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(199)
							if ((tmp15)){
								HX_STACK_LINE(199)
								break;
							}
							HX_STACK_LINE(199)
							Dynamic tmp16 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(199)
							Dynamic _handler = tmp16;		HX_STACK_VAR(_handler,"_handler");
							HX_STACK_LINE(199)
							++(_g);
							HX_STACK_LINE(199)
							bool tmp17 = (_handler != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(199)
							if ((tmp17)){
								HX_STACK_LINE(199)
								_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
							}
						}
					}
					HX_STACK_LINE(199)
					this->dirty;
				}
				HX_STACK_LINE(199)
				this->_cleaning = false;
				HX_STACK_LINE(199)
				bool tmp8 = (this->_clean_handlers != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(199)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(199)
				if ((tmp8)){
					HX_STACK_LINE(199)
					int tmp10 = this->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(199)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(199)
					tmp9 = (tmp11 > (int)0);
				}
				else{
					HX_STACK_LINE(199)
					tmp9 = false;
				}
				HX_STACK_LINE(199)
				if ((tmp9)){
					HX_STACK_LINE(199)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(199)
					cpp::ArrayBase _g1 = this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(199)
					while((true)){
						HX_STACK_LINE(199)
						bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(199)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(199)
						if ((tmp11)){
							HX_STACK_LINE(199)
							break;
						}
						HX_STACK_LINE(199)
						Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(199)
						Dynamic _handler = tmp12;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(199)
						++(_g);
						HX_STACK_LINE(199)
						bool tmp13 = (_handler != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(199)
						if ((tmp13)){
							HX_STACK_LINE(199)
							_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,clean_check,(void))

Void Transform_obj::clean( ){
{
		HX_STACK_FRAME("phoenix.Transform","clean",0xbcad0a08,"phoenix.Transform.clean","phoenix/Transform.hx",204,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		if ((tmp1)){
			HX_STACK_LINE(207)
			return null();
		}
		HX_STACK_LINE(211)
		this->_cleaning = true;
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			::phoenix::Matrix tmp2 = this->_pos_matrix;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			::phoenix::Matrix _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(214)
			{
				HX_STACK_LINE(214)
				Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(214)
				e[(int)0] = (int)1;
				HX_STACK_LINE(214)
				e[(int)4] = (int)0;
				HX_STACK_LINE(214)
				e[(int)8] = (int)0;
				HX_STACK_LINE(214)
				::phoenix::Spatial tmp3 = this->local;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(214)
				Float tmp4 = tmp3->pos->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(214)
				e[(int)12] = tmp4;
				HX_STACK_LINE(214)
				e[(int)1] = (int)0;
				HX_STACK_LINE(214)
				e[(int)5] = (int)1;
				HX_STACK_LINE(214)
				e[(int)9] = (int)0;
				HX_STACK_LINE(214)
				::phoenix::Spatial tmp5 = this->local;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(214)
				Float tmp6 = tmp5->pos->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(214)
				e[(int)13] = tmp6;
				HX_STACK_LINE(214)
				e[(int)2] = (int)0;
				HX_STACK_LINE(214)
				e[(int)6] = (int)0;
				HX_STACK_LINE(214)
				e[(int)10] = (int)1;
				HX_STACK_LINE(214)
				::phoenix::Spatial tmp7 = this->local;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(214)
				Float tmp8 = tmp7->pos->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(214)
				e[(int)14] = tmp8;
				HX_STACK_LINE(214)
				e[(int)3] = (int)0;
				HX_STACK_LINE(214)
				e[(int)7] = (int)0;
				HX_STACK_LINE(214)
				e[(int)11] = (int)0;
				HX_STACK_LINE(214)
				e[(int)15] = (int)1;
				HX_STACK_LINE(214)
				_this;
			}
			HX_STACK_LINE(214)
			_this;
		}
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			::phoenix::Matrix tmp2 = this->_rotation_matrix;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(215)
			::phoenix::Matrix _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(215)
			::phoenix::Spatial tmp3 = this->local;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(215)
			::phoenix::Quaternion q = tmp3->rotation;		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(215)
			Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(215)
			Float tmp4 = (q->x + q->x);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(215)
			Float x2 = tmp4;		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(215)
			Float tmp5 = (q->y + q->y);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(215)
			Float y2 = tmp5;		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(215)
			Float tmp6 = (q->z + q->z);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(215)
			Float z2 = tmp6;		HX_STACK_VAR(z2,"z2");
			HX_STACK_LINE(215)
			Float tmp7 = (q->x * x2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(215)
			Float xx = tmp7;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(215)
			Float tmp8 = (q->x * y2);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(215)
			Float xy = tmp8;		HX_STACK_VAR(xy,"xy");
			HX_STACK_LINE(215)
			Float tmp9 = (q->x * z2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(215)
			Float xz = tmp9;		HX_STACK_VAR(xz,"xz");
			HX_STACK_LINE(215)
			Float tmp10 = (q->y * y2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(215)
			Float yy = tmp10;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(215)
			Float tmp11 = (q->y * z2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(215)
			Float yz = tmp11;		HX_STACK_VAR(yz,"yz");
			HX_STACK_LINE(215)
			Float tmp12 = (q->z * z2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(215)
			Float zz = tmp12;		HX_STACK_VAR(zz,"zz");
			HX_STACK_LINE(215)
			Float tmp13 = (q->w * x2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(215)
			Float wx = tmp13;		HX_STACK_VAR(wx,"wx");
			HX_STACK_LINE(215)
			Float tmp14 = (q->w * y2);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(215)
			Float wy = tmp14;		HX_STACK_VAR(wy,"wy");
			HX_STACK_LINE(215)
			Float tmp15 = (q->w * z2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(215)
			Float wz = tmp15;		HX_STACK_VAR(wz,"wz");
			HX_STACK_LINE(215)
			Float tmp16 = (yy + zz);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(215)
			Float tmp17 = ((int)1 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(215)
			te[(int)0] = tmp17;
			HX_STACK_LINE(215)
			Float tmp18 = (xy - wz);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(215)
			te[(int)4] = tmp18;
			HX_STACK_LINE(215)
			Float tmp19 = (xz + wy);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(215)
			te[(int)8] = tmp19;
			HX_STACK_LINE(215)
			Float tmp20 = (xy + wz);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(215)
			te[(int)1] = tmp20;
			HX_STACK_LINE(215)
			Float tmp21 = (xx + zz);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(215)
			Float tmp22 = ((int)1 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(215)
			te[(int)5] = tmp22;
			HX_STACK_LINE(215)
			Float tmp23 = (yz - wx);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(215)
			te[(int)9] = tmp23;
			HX_STACK_LINE(215)
			Float tmp24 = (xz - wy);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(215)
			te[(int)2] = tmp24;
			HX_STACK_LINE(215)
			Float tmp25 = (yz + wx);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(215)
			te[(int)6] = tmp25;
			HX_STACK_LINE(215)
			Float tmp26 = (xx + yy);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(215)
			Float tmp27 = ((int)1 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(215)
			te[(int)10] = tmp27;
			HX_STACK_LINE(215)
			te[(int)3] = (int)0;
			HX_STACK_LINE(215)
			te[(int)7] = (int)0;
			HX_STACK_LINE(215)
			te[(int)11] = (int)0;
			HX_STACK_LINE(215)
			te[(int)12] = (int)0;
			HX_STACK_LINE(215)
			te[(int)13] = (int)0;
			HX_STACK_LINE(215)
			te[(int)14] = (int)0;
			HX_STACK_LINE(215)
			te[(int)15] = (int)1;
			HX_STACK_LINE(215)
			_this;
		}
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			::phoenix::Matrix tmp2 = this->_origin_undo_matrix;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(216)
			::phoenix::Matrix _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(216)
				Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(216)
				e[(int)0] = (int)1;
				HX_STACK_LINE(216)
				e[(int)4] = (int)0;
				HX_STACK_LINE(216)
				e[(int)8] = (int)0;
				HX_STACK_LINE(216)
				::phoenix::Vector tmp3 = this->origin;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(216)
				Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(216)
				Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(216)
				e[(int)12] = tmp5;
				HX_STACK_LINE(216)
				e[(int)1] = (int)0;
				HX_STACK_LINE(216)
				e[(int)5] = (int)1;
				HX_STACK_LINE(216)
				e[(int)9] = (int)0;
				HX_STACK_LINE(216)
				::phoenix::Vector tmp6 = this->origin;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(216)
				Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(216)
				Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(216)
				e[(int)13] = tmp8;
				HX_STACK_LINE(216)
				e[(int)2] = (int)0;
				HX_STACK_LINE(216)
				e[(int)6] = (int)0;
				HX_STACK_LINE(216)
				e[(int)10] = (int)1;
				HX_STACK_LINE(216)
				::phoenix::Vector tmp9 = this->origin;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(216)
				Float tmp10 = tmp9->z;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(216)
				Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(216)
				e[(int)14] = tmp11;
				HX_STACK_LINE(216)
				e[(int)3] = (int)0;
				HX_STACK_LINE(216)
				e[(int)7] = (int)0;
				HX_STACK_LINE(216)
				e[(int)11] = (int)0;
				HX_STACK_LINE(216)
				e[(int)15] = (int)1;
				HX_STACK_LINE(216)
				_this;
			}
			HX_STACK_LINE(216)
			_this;
		}
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			::phoenix::Spatial tmp2 = this->local;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(219)
			::phoenix::Matrix _this = tmp2->matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(219)
			{
				HX_STACK_LINE(219)
				Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(219)
				e[(int)0] = (int)1;
				HX_STACK_LINE(219)
				e[(int)4] = (int)0;
				HX_STACK_LINE(219)
				e[(int)8] = (int)0;
				HX_STACK_LINE(219)
				::phoenix::Vector tmp3 = this->origin;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(219)
				Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(219)
				e[(int)12] = tmp4;
				HX_STACK_LINE(219)
				e[(int)1] = (int)0;
				HX_STACK_LINE(219)
				e[(int)5] = (int)1;
				HX_STACK_LINE(219)
				e[(int)9] = (int)0;
				HX_STACK_LINE(219)
				::phoenix::Vector tmp5 = this->origin;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(219)
				Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(219)
				e[(int)13] = tmp6;
				HX_STACK_LINE(219)
				e[(int)2] = (int)0;
				HX_STACK_LINE(219)
				e[(int)6] = (int)0;
				HX_STACK_LINE(219)
				e[(int)10] = (int)1;
				HX_STACK_LINE(219)
				::phoenix::Vector tmp7 = this->origin;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(219)
				Float tmp8 = tmp7->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(219)
				e[(int)14] = tmp8;
				HX_STACK_LINE(219)
				e[(int)3] = (int)0;
				HX_STACK_LINE(219)
				e[(int)7] = (int)0;
				HX_STACK_LINE(219)
				e[(int)11] = (int)0;
				HX_STACK_LINE(219)
				e[(int)15] = (int)1;
				HX_STACK_LINE(219)
				_this;
			}
			HX_STACK_LINE(219)
			_this;
		}
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			::phoenix::Spatial tmp2 = this->local;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(222)
			::phoenix::Matrix _this = tmp2->matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(222)
			{
				HX_STACK_LINE(222)
				Array< Float > ae = _this->elements;		HX_STACK_VAR(ae,"ae");
				HX_STACK_LINE(222)
				::phoenix::Matrix tmp3 = this->_rotation_matrix;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(222)
				Array< Float > be = tmp3->elements;		HX_STACK_VAR(be,"be");
				HX_STACK_LINE(222)
				Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(222)
				Float tmp4 = ae->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(222)
				Float a11 = tmp4;		HX_STACK_VAR(a11,"a11");
				HX_STACK_LINE(222)
				Float tmp5 = ae->__get((int)4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(222)
				Float a12 = tmp5;		HX_STACK_VAR(a12,"a12");
				HX_STACK_LINE(222)
				Float tmp6 = ae->__get((int)8);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(222)
				Float a13 = tmp6;		HX_STACK_VAR(a13,"a13");
				HX_STACK_LINE(222)
				Float tmp7 = ae->__get((int)12);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(222)
				Float a14 = tmp7;		HX_STACK_VAR(a14,"a14");
				HX_STACK_LINE(222)
				Float tmp8 = ae->__get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(222)
				Float a21 = tmp8;		HX_STACK_VAR(a21,"a21");
				HX_STACK_LINE(222)
				Float tmp9 = ae->__get((int)5);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(222)
				Float a22 = tmp9;		HX_STACK_VAR(a22,"a22");
				HX_STACK_LINE(222)
				Float tmp10 = ae->__get((int)9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(222)
				Float a23 = tmp10;		HX_STACK_VAR(a23,"a23");
				HX_STACK_LINE(222)
				Float tmp11 = ae->__get((int)13);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(222)
				Float a24 = tmp11;		HX_STACK_VAR(a24,"a24");
				HX_STACK_LINE(222)
				Float tmp12 = ae->__get((int)2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(222)
				Float a31 = tmp12;		HX_STACK_VAR(a31,"a31");
				HX_STACK_LINE(222)
				Float tmp13 = ae->__get((int)6);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(222)
				Float a32 = tmp13;		HX_STACK_VAR(a32,"a32");
				HX_STACK_LINE(222)
				Float tmp14 = ae->__get((int)10);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(222)
				Float a33 = tmp14;		HX_STACK_VAR(a33,"a33");
				HX_STACK_LINE(222)
				Float tmp15 = ae->__get((int)14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(222)
				Float a34 = tmp15;		HX_STACK_VAR(a34,"a34");
				HX_STACK_LINE(222)
				Float tmp16 = ae->__get((int)3);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(222)
				Float a41 = tmp16;		HX_STACK_VAR(a41,"a41");
				HX_STACK_LINE(222)
				Float tmp17 = ae->__get((int)7);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(222)
				Float a42 = tmp17;		HX_STACK_VAR(a42,"a42");
				HX_STACK_LINE(222)
				Float tmp18 = ae->__get((int)11);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(222)
				Float a43 = tmp18;		HX_STACK_VAR(a43,"a43");
				HX_STACK_LINE(222)
				Float tmp19 = ae->__get((int)15);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(222)
				Float a44 = tmp19;		HX_STACK_VAR(a44,"a44");
				HX_STACK_LINE(222)
				Float tmp20 = be->__get((int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(222)
				Float b11 = tmp20;		HX_STACK_VAR(b11,"b11");
				HX_STACK_LINE(222)
				Float tmp21 = be->__get((int)4);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(222)
				Float b12 = tmp21;		HX_STACK_VAR(b12,"b12");
				HX_STACK_LINE(222)
				Float tmp22 = be->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(222)
				Float b13 = tmp22;		HX_STACK_VAR(b13,"b13");
				HX_STACK_LINE(222)
				Float tmp23 = be->__get((int)12);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(222)
				Float b14 = tmp23;		HX_STACK_VAR(b14,"b14");
				HX_STACK_LINE(222)
				Float tmp24 = be->__get((int)1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(222)
				Float b21 = tmp24;		HX_STACK_VAR(b21,"b21");
				HX_STACK_LINE(222)
				Float tmp25 = be->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(222)
				Float b22 = tmp25;		HX_STACK_VAR(b22,"b22");
				HX_STACK_LINE(222)
				Float tmp26 = be->__get((int)9);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(222)
				Float b23 = tmp26;		HX_STACK_VAR(b23,"b23");
				HX_STACK_LINE(222)
				Float tmp27 = be->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(222)
				Float b24 = tmp27;		HX_STACK_VAR(b24,"b24");
				HX_STACK_LINE(222)
				Float tmp28 = be->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(222)
				Float b31 = tmp28;		HX_STACK_VAR(b31,"b31");
				HX_STACK_LINE(222)
				Float tmp29 = be->__get((int)6);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(222)
				Float b32 = tmp29;		HX_STACK_VAR(b32,"b32");
				HX_STACK_LINE(222)
				Float tmp30 = be->__get((int)10);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(222)
				Float b33 = tmp30;		HX_STACK_VAR(b33,"b33");
				HX_STACK_LINE(222)
				Float tmp31 = be->__get((int)14);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(222)
				Float b34 = tmp31;		HX_STACK_VAR(b34,"b34");
				HX_STACK_LINE(222)
				Float tmp32 = be->__get((int)3);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(222)
				Float b41 = tmp32;		HX_STACK_VAR(b41,"b41");
				HX_STACK_LINE(222)
				Float tmp33 = be->__get((int)7);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(222)
				Float b42 = tmp33;		HX_STACK_VAR(b42,"b42");
				HX_STACK_LINE(222)
				Float tmp34 = be->__get((int)11);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(222)
				Float b43 = tmp34;		HX_STACK_VAR(b43,"b43");
				HX_STACK_LINE(222)
				Float tmp35 = be->__get((int)15);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(222)
				Float b44 = tmp35;		HX_STACK_VAR(b44,"b44");
				HX_STACK_LINE(222)
				Float tmp36 = (a11 * b11);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(222)
				Float tmp37 = (a12 * b21);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(222)
				Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(222)
				Float tmp39 = (a13 * b31);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(222)
				Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(222)
				Float tmp41 = (a14 * b41);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(222)
				Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(222)
				te[(int)0] = tmp42;
				HX_STACK_LINE(222)
				Float tmp43 = (a11 * b12);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(222)
				Float tmp44 = (a12 * b22);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(222)
				Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(222)
				Float tmp46 = (a13 * b32);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(222)
				Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(222)
				Float tmp48 = (a14 * b42);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(222)
				Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(222)
				te[(int)4] = tmp49;
				HX_STACK_LINE(222)
				Float tmp50 = (a11 * b13);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(222)
				Float tmp51 = (a12 * b23);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(222)
				Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(222)
				Float tmp53 = (a13 * b33);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(222)
				Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(222)
				Float tmp55 = (a14 * b43);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(222)
				Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(222)
				te[(int)8] = tmp56;
				HX_STACK_LINE(222)
				Float tmp57 = (a11 * b14);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(222)
				Float tmp58 = (a12 * b24);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(222)
				Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(222)
				Float tmp60 = (a13 * b34);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(222)
				Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(222)
				Float tmp62 = (a14 * b44);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(222)
				Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(222)
				te[(int)12] = tmp63;
				HX_STACK_LINE(222)
				Float tmp64 = (a21 * b11);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(222)
				Float tmp65 = (a22 * b21);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(222)
				Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(222)
				Float tmp67 = (a23 * b31);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(222)
				Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(222)
				Float tmp69 = (a24 * b41);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(222)
				Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(222)
				te[(int)1] = tmp70;
				HX_STACK_LINE(222)
				Float tmp71 = (a21 * b12);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(222)
				Float tmp72 = (a22 * b22);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(222)
				Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(222)
				Float tmp74 = (a23 * b32);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(222)
				Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(222)
				Float tmp76 = (a24 * b42);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(222)
				Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(222)
				te[(int)5] = tmp77;
				HX_STACK_LINE(222)
				Float tmp78 = (a21 * b13);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(222)
				Float tmp79 = (a22 * b23);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(222)
				Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(222)
				Float tmp81 = (a23 * b33);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(222)
				Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(222)
				Float tmp83 = (a24 * b43);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(222)
				Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(222)
				te[(int)9] = tmp84;
				HX_STACK_LINE(222)
				Float tmp85 = (a21 * b14);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(222)
				Float tmp86 = (a22 * b24);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(222)
				Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(222)
				Float tmp88 = (a23 * b34);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(222)
				Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(222)
				Float tmp90 = (a24 * b44);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(222)
				Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(222)
				te[(int)13] = tmp91;
				HX_STACK_LINE(222)
				Float tmp92 = (a31 * b11);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(222)
				Float tmp93 = (a32 * b21);		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(222)
				Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(222)
				Float tmp95 = (a33 * b31);		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(222)
				Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(222)
				Float tmp97 = (a34 * b41);		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(222)
				Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(222)
				te[(int)2] = tmp98;
				HX_STACK_LINE(222)
				Float tmp99 = (a31 * b12);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(222)
				Float tmp100 = (a32 * b22);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(222)
				Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(222)
				Float tmp102 = (a33 * b32);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(222)
				Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(222)
				Float tmp104 = (a34 * b42);		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(222)
				Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(222)
				te[(int)6] = tmp105;
				HX_STACK_LINE(222)
				Float tmp106 = (a31 * b13);		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(222)
				Float tmp107 = (a32 * b23);		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(222)
				Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(222)
				Float tmp109 = (a33 * b33);		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(222)
				Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(222)
				Float tmp111 = (a34 * b43);		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(222)
				Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(222)
				te[(int)10] = tmp112;
				HX_STACK_LINE(222)
				Float tmp113 = (a31 * b14);		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(222)
				Float tmp114 = (a32 * b24);		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(222)
				Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(222)
				Float tmp116 = (a33 * b34);		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(222)
				Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(222)
				Float tmp118 = (a34 * b44);		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(222)
				Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(222)
				te[(int)14] = tmp119;
				HX_STACK_LINE(222)
				Float tmp120 = (a41 * b11);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(222)
				Float tmp121 = (a42 * b21);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(222)
				Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(222)
				Float tmp123 = (a43 * b31);		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(222)
				Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(222)
				Float tmp125 = (a44 * b41);		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(222)
				Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(222)
				te[(int)3] = tmp126;
				HX_STACK_LINE(222)
				Float tmp127 = (a41 * b12);		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(222)
				Float tmp128 = (a42 * b22);		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(222)
				Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(222)
				Float tmp130 = (a43 * b32);		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(222)
				Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(222)
				Float tmp132 = (a44 * b42);		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(222)
				Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(222)
				te[(int)7] = tmp133;
				HX_STACK_LINE(222)
				Float tmp134 = (a41 * b13);		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(222)
				Float tmp135 = (a42 * b23);		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(222)
				Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(222)
				Float tmp137 = (a43 * b33);		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(222)
				Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(222)
				Float tmp139 = (a44 * b43);		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(222)
				Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(222)
				te[(int)11] = tmp140;
				HX_STACK_LINE(222)
				Float tmp141 = (a41 * b14);		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(222)
				Float tmp142 = (a42 * b24);		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(222)
				Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(222)
				Float tmp144 = (a43 * b34);		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(222)
				Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(222)
				Float tmp146 = (a44 * b44);		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(222)
				Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(222)
				te[(int)15] = tmp147;
				HX_STACK_LINE(222)
				_this;
			}
		}
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			::phoenix::Spatial tmp2 = this->local;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(224)
			::phoenix::Matrix _this = tmp2->matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(224)
			::phoenix::Spatial tmp3 = this->local;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(224)
			::phoenix::Vector _v = tmp3->scale;		HX_STACK_VAR(_v,"_v");
			HX_STACK_LINE(224)
			Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(224)
			Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(224)
			Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(224)
			Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(224)
			Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(224)
			hx::MultEq(te[(int)0],tmp4);
			HX_STACK_LINE(224)
			Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(224)
			hx::MultEq(te[(int)4],tmp5);
			HX_STACK_LINE(224)
			Float tmp6 = _z;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(224)
			hx::MultEq(te[(int)8],tmp6);
			HX_STACK_LINE(224)
			Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(224)
			hx::MultEq(te[(int)1],tmp7);
			HX_STACK_LINE(224)
			Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(224)
			hx::MultEq(te[(int)5],tmp8);
			HX_STACK_LINE(224)
			Float tmp9 = _z;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(224)
			hx::MultEq(te[(int)9],tmp9);
			HX_STACK_LINE(224)
			Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(224)
			hx::MultEq(te[(int)2],tmp10);
			HX_STACK_LINE(224)
			Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(224)
			hx::MultEq(te[(int)6],tmp11);
			HX_STACK_LINE(224)
			Float tmp12 = _z;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(224)
			hx::MultEq(te[(int)10],tmp12);
			HX_STACK_LINE(224)
			Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(224)
			hx::MultEq(te[(int)3],tmp13);
			HX_STACK_LINE(224)
			Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(224)
			hx::MultEq(te[(int)7],tmp14);
			HX_STACK_LINE(224)
			Float tmp15 = _z;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(224)
			hx::MultEq(te[(int)11],tmp15);
			HX_STACK_LINE(224)
			_this;
		}
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			::phoenix::Spatial tmp2 = this->local;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			::phoenix::Matrix _this = tmp2->matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(226)
			::phoenix::Spatial tmp3 = this->local;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			::phoenix::Vector _v = tmp3->pos;		HX_STACK_VAR(_v,"_v");
			HX_STACK_LINE(226)
			Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(226)
			Float tmp4 = _v->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(226)
			te[(int)12] = tmp4;
			HX_STACK_LINE(226)
			Float tmp5 = _v->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(226)
			te[(int)13] = tmp5;
			HX_STACK_LINE(226)
			Float tmp6 = _v->z;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(226)
			te[(int)14] = tmp6;
			HX_STACK_LINE(226)
			_this;
		}
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			::phoenix::Spatial tmp2 = this->local;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(229)
			::phoenix::Matrix _this = tmp2->matrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(229)
			{
				HX_STACK_LINE(229)
				Array< Float > ae = _this->elements;		HX_STACK_VAR(ae,"ae");
				HX_STACK_LINE(229)
				::phoenix::Matrix tmp3 = this->_origin_undo_matrix;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(229)
				Array< Float > be = tmp3->elements;		HX_STACK_VAR(be,"be");
				HX_STACK_LINE(229)
				Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(229)
				Float tmp4 = ae->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(229)
				Float a11 = tmp4;		HX_STACK_VAR(a11,"a11");
				HX_STACK_LINE(229)
				Float tmp5 = ae->__get((int)4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(229)
				Float a12 = tmp5;		HX_STACK_VAR(a12,"a12");
				HX_STACK_LINE(229)
				Float tmp6 = ae->__get((int)8);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(229)
				Float a13 = tmp6;		HX_STACK_VAR(a13,"a13");
				HX_STACK_LINE(229)
				Float tmp7 = ae->__get((int)12);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(229)
				Float a14 = tmp7;		HX_STACK_VAR(a14,"a14");
				HX_STACK_LINE(229)
				Float tmp8 = ae->__get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(229)
				Float a21 = tmp8;		HX_STACK_VAR(a21,"a21");
				HX_STACK_LINE(229)
				Float tmp9 = ae->__get((int)5);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(229)
				Float a22 = tmp9;		HX_STACK_VAR(a22,"a22");
				HX_STACK_LINE(229)
				Float tmp10 = ae->__get((int)9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(229)
				Float a23 = tmp10;		HX_STACK_VAR(a23,"a23");
				HX_STACK_LINE(229)
				Float tmp11 = ae->__get((int)13);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(229)
				Float a24 = tmp11;		HX_STACK_VAR(a24,"a24");
				HX_STACK_LINE(229)
				Float tmp12 = ae->__get((int)2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(229)
				Float a31 = tmp12;		HX_STACK_VAR(a31,"a31");
				HX_STACK_LINE(229)
				Float tmp13 = ae->__get((int)6);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(229)
				Float a32 = tmp13;		HX_STACK_VAR(a32,"a32");
				HX_STACK_LINE(229)
				Float tmp14 = ae->__get((int)10);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(229)
				Float a33 = tmp14;		HX_STACK_VAR(a33,"a33");
				HX_STACK_LINE(229)
				Float tmp15 = ae->__get((int)14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(229)
				Float a34 = tmp15;		HX_STACK_VAR(a34,"a34");
				HX_STACK_LINE(229)
				Float tmp16 = ae->__get((int)3);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(229)
				Float a41 = tmp16;		HX_STACK_VAR(a41,"a41");
				HX_STACK_LINE(229)
				Float tmp17 = ae->__get((int)7);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(229)
				Float a42 = tmp17;		HX_STACK_VAR(a42,"a42");
				HX_STACK_LINE(229)
				Float tmp18 = ae->__get((int)11);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(229)
				Float a43 = tmp18;		HX_STACK_VAR(a43,"a43");
				HX_STACK_LINE(229)
				Float tmp19 = ae->__get((int)15);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(229)
				Float a44 = tmp19;		HX_STACK_VAR(a44,"a44");
				HX_STACK_LINE(229)
				Float tmp20 = be->__get((int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(229)
				Float b11 = tmp20;		HX_STACK_VAR(b11,"b11");
				HX_STACK_LINE(229)
				Float tmp21 = be->__get((int)4);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(229)
				Float b12 = tmp21;		HX_STACK_VAR(b12,"b12");
				HX_STACK_LINE(229)
				Float tmp22 = be->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(229)
				Float b13 = tmp22;		HX_STACK_VAR(b13,"b13");
				HX_STACK_LINE(229)
				Float tmp23 = be->__get((int)12);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(229)
				Float b14 = tmp23;		HX_STACK_VAR(b14,"b14");
				HX_STACK_LINE(229)
				Float tmp24 = be->__get((int)1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(229)
				Float b21 = tmp24;		HX_STACK_VAR(b21,"b21");
				HX_STACK_LINE(229)
				Float tmp25 = be->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(229)
				Float b22 = tmp25;		HX_STACK_VAR(b22,"b22");
				HX_STACK_LINE(229)
				Float tmp26 = be->__get((int)9);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(229)
				Float b23 = tmp26;		HX_STACK_VAR(b23,"b23");
				HX_STACK_LINE(229)
				Float tmp27 = be->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(229)
				Float b24 = tmp27;		HX_STACK_VAR(b24,"b24");
				HX_STACK_LINE(229)
				Float tmp28 = be->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(229)
				Float b31 = tmp28;		HX_STACK_VAR(b31,"b31");
				HX_STACK_LINE(229)
				Float tmp29 = be->__get((int)6);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(229)
				Float b32 = tmp29;		HX_STACK_VAR(b32,"b32");
				HX_STACK_LINE(229)
				Float tmp30 = be->__get((int)10);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(229)
				Float b33 = tmp30;		HX_STACK_VAR(b33,"b33");
				HX_STACK_LINE(229)
				Float tmp31 = be->__get((int)14);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(229)
				Float b34 = tmp31;		HX_STACK_VAR(b34,"b34");
				HX_STACK_LINE(229)
				Float tmp32 = be->__get((int)3);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(229)
				Float b41 = tmp32;		HX_STACK_VAR(b41,"b41");
				HX_STACK_LINE(229)
				Float tmp33 = be->__get((int)7);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(229)
				Float b42 = tmp33;		HX_STACK_VAR(b42,"b42");
				HX_STACK_LINE(229)
				Float tmp34 = be->__get((int)11);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(229)
				Float b43 = tmp34;		HX_STACK_VAR(b43,"b43");
				HX_STACK_LINE(229)
				Float tmp35 = be->__get((int)15);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(229)
				Float b44 = tmp35;		HX_STACK_VAR(b44,"b44");
				HX_STACK_LINE(229)
				Float tmp36 = (a11 * b11);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(229)
				Float tmp37 = (a12 * b21);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(229)
				Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(229)
				Float tmp39 = (a13 * b31);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(229)
				Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(229)
				Float tmp41 = (a14 * b41);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(229)
				Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(229)
				te[(int)0] = tmp42;
				HX_STACK_LINE(229)
				Float tmp43 = (a11 * b12);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(229)
				Float tmp44 = (a12 * b22);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(229)
				Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(229)
				Float tmp46 = (a13 * b32);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(229)
				Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(229)
				Float tmp48 = (a14 * b42);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(229)
				Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(229)
				te[(int)4] = tmp49;
				HX_STACK_LINE(229)
				Float tmp50 = (a11 * b13);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(229)
				Float tmp51 = (a12 * b23);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(229)
				Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(229)
				Float tmp53 = (a13 * b33);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(229)
				Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(229)
				Float tmp55 = (a14 * b43);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(229)
				Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(229)
				te[(int)8] = tmp56;
				HX_STACK_LINE(229)
				Float tmp57 = (a11 * b14);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(229)
				Float tmp58 = (a12 * b24);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(229)
				Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(229)
				Float tmp60 = (a13 * b34);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(229)
				Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(229)
				Float tmp62 = (a14 * b44);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(229)
				Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(229)
				te[(int)12] = tmp63;
				HX_STACK_LINE(229)
				Float tmp64 = (a21 * b11);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(229)
				Float tmp65 = (a22 * b21);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(229)
				Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(229)
				Float tmp67 = (a23 * b31);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(229)
				Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(229)
				Float tmp69 = (a24 * b41);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(229)
				Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(229)
				te[(int)1] = tmp70;
				HX_STACK_LINE(229)
				Float tmp71 = (a21 * b12);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(229)
				Float tmp72 = (a22 * b22);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(229)
				Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(229)
				Float tmp74 = (a23 * b32);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(229)
				Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(229)
				Float tmp76 = (a24 * b42);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(229)
				Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(229)
				te[(int)5] = tmp77;
				HX_STACK_LINE(229)
				Float tmp78 = (a21 * b13);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(229)
				Float tmp79 = (a22 * b23);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(229)
				Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(229)
				Float tmp81 = (a23 * b33);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(229)
				Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(229)
				Float tmp83 = (a24 * b43);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(229)
				Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(229)
				te[(int)9] = tmp84;
				HX_STACK_LINE(229)
				Float tmp85 = (a21 * b14);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(229)
				Float tmp86 = (a22 * b24);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(229)
				Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(229)
				Float tmp88 = (a23 * b34);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(229)
				Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(229)
				Float tmp90 = (a24 * b44);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(229)
				Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(229)
				te[(int)13] = tmp91;
				HX_STACK_LINE(229)
				Float tmp92 = (a31 * b11);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(229)
				Float tmp93 = (a32 * b21);		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(229)
				Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(229)
				Float tmp95 = (a33 * b31);		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(229)
				Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(229)
				Float tmp97 = (a34 * b41);		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(229)
				Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(229)
				te[(int)2] = tmp98;
				HX_STACK_LINE(229)
				Float tmp99 = (a31 * b12);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(229)
				Float tmp100 = (a32 * b22);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(229)
				Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(229)
				Float tmp102 = (a33 * b32);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(229)
				Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(229)
				Float tmp104 = (a34 * b42);		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(229)
				Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(229)
				te[(int)6] = tmp105;
				HX_STACK_LINE(229)
				Float tmp106 = (a31 * b13);		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(229)
				Float tmp107 = (a32 * b23);		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(229)
				Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(229)
				Float tmp109 = (a33 * b33);		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(229)
				Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(229)
				Float tmp111 = (a34 * b43);		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(229)
				Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(229)
				te[(int)10] = tmp112;
				HX_STACK_LINE(229)
				Float tmp113 = (a31 * b14);		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(229)
				Float tmp114 = (a32 * b24);		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(229)
				Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(229)
				Float tmp116 = (a33 * b34);		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(229)
				Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(229)
				Float tmp118 = (a34 * b44);		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(229)
				Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(229)
				te[(int)14] = tmp119;
				HX_STACK_LINE(229)
				Float tmp120 = (a41 * b11);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(229)
				Float tmp121 = (a42 * b21);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(229)
				Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(229)
				Float tmp123 = (a43 * b31);		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(229)
				Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(229)
				Float tmp125 = (a44 * b41);		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(229)
				Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(229)
				te[(int)3] = tmp126;
				HX_STACK_LINE(229)
				Float tmp127 = (a41 * b12);		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(229)
				Float tmp128 = (a42 * b22);		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(229)
				Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(229)
				Float tmp130 = (a43 * b32);		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(229)
				Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(229)
				Float tmp132 = (a44 * b42);		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(229)
				Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(229)
				te[(int)7] = tmp133;
				HX_STACK_LINE(229)
				Float tmp134 = (a41 * b13);		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(229)
				Float tmp135 = (a42 * b23);		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(229)
				Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(229)
				Float tmp137 = (a43 * b33);		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(229)
				Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(229)
				Float tmp139 = (a44 * b43);		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(229)
				Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(229)
				te[(int)11] = tmp140;
				HX_STACK_LINE(229)
				Float tmp141 = (a41 * b14);		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(229)
				Float tmp142 = (a42 * b24);		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(229)
				Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(229)
				Float tmp144 = (a43 * b34);		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(229)
				Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(229)
				Float tmp146 = (a44 * b44);		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(229)
				Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(229)
				te[(int)15] = tmp147;
				HX_STACK_LINE(229)
				_this;
			}
		}
		HX_STACK_LINE(232)
		::phoenix::Transform tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(232)
		if ((tmp3)){
			HX_STACK_LINE(233)
			::phoenix::Spatial tmp4 = this->get_world();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(233)
			::phoenix::Spatial _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(233)
			::phoenix::Matrix tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			{
				HX_STACK_LINE(233)
				::phoenix::Matrix tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					::phoenix::Spatial tmp7 = this->get_world();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(233)
					::phoenix::Spatial _this1 = tmp7;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(233)
					tmp6 = _this1->matrix;
				}
				HX_STACK_LINE(233)
				::phoenix::Matrix _this1 = tmp6;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(233)
				::phoenix::Matrix tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					::phoenix::Transform tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(233)
					::phoenix::Spatial tmp9 = tmp8->get_world();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(233)
					::phoenix::Spatial _this2 = tmp9;		HX_STACK_VAR(_this2,"_this2");
					HX_STACK_LINE(233)
					tmp7 = _this2->matrix;
				}
				HX_STACK_LINE(233)
				::phoenix::Matrix _a = tmp7;		HX_STACK_VAR(_a,"_a");
				HX_STACK_LINE(233)
				Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
				HX_STACK_LINE(233)
				::phoenix::Spatial tmp8 = this->local;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(233)
				Array< Float > be = tmp8->matrix->elements;		HX_STACK_VAR(be,"be");
				HX_STACK_LINE(233)
				Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(233)
				Float tmp9 = ae->__get((int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(233)
				Float a11 = tmp9;		HX_STACK_VAR(a11,"a11");
				HX_STACK_LINE(233)
				Float tmp10 = ae->__get((int)4);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(233)
				Float a12 = tmp10;		HX_STACK_VAR(a12,"a12");
				HX_STACK_LINE(233)
				Float tmp11 = ae->__get((int)8);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(233)
				Float a13 = tmp11;		HX_STACK_VAR(a13,"a13");
				HX_STACK_LINE(233)
				Float tmp12 = ae->__get((int)12);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(233)
				Float a14 = tmp12;		HX_STACK_VAR(a14,"a14");
				HX_STACK_LINE(233)
				Float tmp13 = ae->__get((int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(233)
				Float a21 = tmp13;		HX_STACK_VAR(a21,"a21");
				HX_STACK_LINE(233)
				Float tmp14 = ae->__get((int)5);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(233)
				Float a22 = tmp14;		HX_STACK_VAR(a22,"a22");
				HX_STACK_LINE(233)
				Float tmp15 = ae->__get((int)9);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(233)
				Float a23 = tmp15;		HX_STACK_VAR(a23,"a23");
				HX_STACK_LINE(233)
				Float tmp16 = ae->__get((int)13);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(233)
				Float a24 = tmp16;		HX_STACK_VAR(a24,"a24");
				HX_STACK_LINE(233)
				Float tmp17 = ae->__get((int)2);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(233)
				Float a31 = tmp17;		HX_STACK_VAR(a31,"a31");
				HX_STACK_LINE(233)
				Float tmp18 = ae->__get((int)6);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(233)
				Float a32 = tmp18;		HX_STACK_VAR(a32,"a32");
				HX_STACK_LINE(233)
				Float tmp19 = ae->__get((int)10);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(233)
				Float a33 = tmp19;		HX_STACK_VAR(a33,"a33");
				HX_STACK_LINE(233)
				Float tmp20 = ae->__get((int)14);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(233)
				Float a34 = tmp20;		HX_STACK_VAR(a34,"a34");
				HX_STACK_LINE(233)
				Float tmp21 = ae->__get((int)3);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(233)
				Float a41 = tmp21;		HX_STACK_VAR(a41,"a41");
				HX_STACK_LINE(233)
				Float tmp22 = ae->__get((int)7);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(233)
				Float a42 = tmp22;		HX_STACK_VAR(a42,"a42");
				HX_STACK_LINE(233)
				Float tmp23 = ae->__get((int)11);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(233)
				Float a43 = tmp23;		HX_STACK_VAR(a43,"a43");
				HX_STACK_LINE(233)
				Float tmp24 = ae->__get((int)15);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(233)
				Float a44 = tmp24;		HX_STACK_VAR(a44,"a44");
				HX_STACK_LINE(233)
				Float tmp25 = be->__get((int)0);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(233)
				Float b11 = tmp25;		HX_STACK_VAR(b11,"b11");
				HX_STACK_LINE(233)
				Float tmp26 = be->__get((int)4);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(233)
				Float b12 = tmp26;		HX_STACK_VAR(b12,"b12");
				HX_STACK_LINE(233)
				Float tmp27 = be->__get((int)8);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(233)
				Float b13 = tmp27;		HX_STACK_VAR(b13,"b13");
				HX_STACK_LINE(233)
				Float tmp28 = be->__get((int)12);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(233)
				Float b14 = tmp28;		HX_STACK_VAR(b14,"b14");
				HX_STACK_LINE(233)
				Float tmp29 = be->__get((int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(233)
				Float b21 = tmp29;		HX_STACK_VAR(b21,"b21");
				HX_STACK_LINE(233)
				Float tmp30 = be->__get((int)5);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(233)
				Float b22 = tmp30;		HX_STACK_VAR(b22,"b22");
				HX_STACK_LINE(233)
				Float tmp31 = be->__get((int)9);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(233)
				Float b23 = tmp31;		HX_STACK_VAR(b23,"b23");
				HX_STACK_LINE(233)
				Float tmp32 = be->__get((int)13);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(233)
				Float b24 = tmp32;		HX_STACK_VAR(b24,"b24");
				HX_STACK_LINE(233)
				Float tmp33 = be->__get((int)2);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(233)
				Float b31 = tmp33;		HX_STACK_VAR(b31,"b31");
				HX_STACK_LINE(233)
				Float tmp34 = be->__get((int)6);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(233)
				Float b32 = tmp34;		HX_STACK_VAR(b32,"b32");
				HX_STACK_LINE(233)
				Float tmp35 = be->__get((int)10);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(233)
				Float b33 = tmp35;		HX_STACK_VAR(b33,"b33");
				HX_STACK_LINE(233)
				Float tmp36 = be->__get((int)14);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(233)
				Float b34 = tmp36;		HX_STACK_VAR(b34,"b34");
				HX_STACK_LINE(233)
				Float tmp37 = be->__get((int)3);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(233)
				Float b41 = tmp37;		HX_STACK_VAR(b41,"b41");
				HX_STACK_LINE(233)
				Float tmp38 = be->__get((int)7);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(233)
				Float b42 = tmp38;		HX_STACK_VAR(b42,"b42");
				HX_STACK_LINE(233)
				Float tmp39 = be->__get((int)11);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(233)
				Float b43 = tmp39;		HX_STACK_VAR(b43,"b43");
				HX_STACK_LINE(233)
				Float tmp40 = be->__get((int)15);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(233)
				Float b44 = tmp40;		HX_STACK_VAR(b44,"b44");
				HX_STACK_LINE(233)
				Float tmp41 = (a11 * b11);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(233)
				Float tmp42 = (a12 * b21);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(233)
				Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(233)
				Float tmp44 = (a13 * b31);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(233)
				Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(233)
				Float tmp46 = (a14 * b41);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(233)
				Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(233)
				te[(int)0] = tmp47;
				HX_STACK_LINE(233)
				Float tmp48 = (a11 * b12);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(233)
				Float tmp49 = (a12 * b22);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(233)
				Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(233)
				Float tmp51 = (a13 * b32);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(233)
				Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(233)
				Float tmp53 = (a14 * b42);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(233)
				Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(233)
				te[(int)4] = tmp54;
				HX_STACK_LINE(233)
				Float tmp55 = (a11 * b13);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(233)
				Float tmp56 = (a12 * b23);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(233)
				Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(233)
				Float tmp58 = (a13 * b33);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(233)
				Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(233)
				Float tmp60 = (a14 * b43);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(233)
				Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(233)
				te[(int)8] = tmp61;
				HX_STACK_LINE(233)
				Float tmp62 = (a11 * b14);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(233)
				Float tmp63 = (a12 * b24);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(233)
				Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(233)
				Float tmp65 = (a13 * b34);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(233)
				Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(233)
				Float tmp67 = (a14 * b44);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(233)
				Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(233)
				te[(int)12] = tmp68;
				HX_STACK_LINE(233)
				Float tmp69 = (a21 * b11);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(233)
				Float tmp70 = (a22 * b21);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(233)
				Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(233)
				Float tmp72 = (a23 * b31);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(233)
				Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(233)
				Float tmp74 = (a24 * b41);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(233)
				Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(233)
				te[(int)1] = tmp75;
				HX_STACK_LINE(233)
				Float tmp76 = (a21 * b12);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(233)
				Float tmp77 = (a22 * b22);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(233)
				Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(233)
				Float tmp79 = (a23 * b32);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(233)
				Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(233)
				Float tmp81 = (a24 * b42);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(233)
				Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(233)
				te[(int)5] = tmp82;
				HX_STACK_LINE(233)
				Float tmp83 = (a21 * b13);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(233)
				Float tmp84 = (a22 * b23);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(233)
				Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(233)
				Float tmp86 = (a23 * b33);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(233)
				Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(233)
				Float tmp88 = (a24 * b43);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(233)
				Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(233)
				te[(int)9] = tmp89;
				HX_STACK_LINE(233)
				Float tmp90 = (a21 * b14);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(233)
				Float tmp91 = (a22 * b24);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(233)
				Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(233)
				Float tmp93 = (a23 * b34);		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(233)
				Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(233)
				Float tmp95 = (a24 * b44);		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(233)
				Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(233)
				te[(int)13] = tmp96;
				HX_STACK_LINE(233)
				Float tmp97 = (a31 * b11);		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(233)
				Float tmp98 = (a32 * b21);		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(233)
				Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(233)
				Float tmp100 = (a33 * b31);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(233)
				Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(233)
				Float tmp102 = (a34 * b41);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(233)
				Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(233)
				te[(int)2] = tmp103;
				HX_STACK_LINE(233)
				Float tmp104 = (a31 * b12);		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(233)
				Float tmp105 = (a32 * b22);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(233)
				Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(233)
				Float tmp107 = (a33 * b32);		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(233)
				Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(233)
				Float tmp109 = (a34 * b42);		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(233)
				Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(233)
				te[(int)6] = tmp110;
				HX_STACK_LINE(233)
				Float tmp111 = (a31 * b13);		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(233)
				Float tmp112 = (a32 * b23);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(233)
				Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(233)
				Float tmp114 = (a33 * b33);		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(233)
				Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(233)
				Float tmp116 = (a34 * b43);		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(233)
				Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(233)
				te[(int)10] = tmp117;
				HX_STACK_LINE(233)
				Float tmp118 = (a31 * b14);		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(233)
				Float tmp119 = (a32 * b24);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(233)
				Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(233)
				Float tmp121 = (a33 * b34);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(233)
				Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(233)
				Float tmp123 = (a34 * b44);		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(233)
				Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(233)
				te[(int)14] = tmp124;
				HX_STACK_LINE(233)
				Float tmp125 = (a41 * b11);		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(233)
				Float tmp126 = (a42 * b21);		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(233)
				Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(233)
				Float tmp128 = (a43 * b31);		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(233)
				Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(233)
				Float tmp130 = (a44 * b41);		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(233)
				Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(233)
				te[(int)3] = tmp131;
				HX_STACK_LINE(233)
				Float tmp132 = (a41 * b12);		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(233)
				Float tmp133 = (a42 * b22);		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(233)
				Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(233)
				Float tmp135 = (a43 * b32);		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(233)
				Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(233)
				Float tmp137 = (a44 * b42);		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(233)
				Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(233)
				te[(int)7] = tmp138;
				HX_STACK_LINE(233)
				Float tmp139 = (a41 * b13);		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(233)
				Float tmp140 = (a42 * b23);		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(233)
				Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(233)
				Float tmp142 = (a43 * b33);		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(233)
				Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(233)
				Float tmp144 = (a44 * b43);		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(233)
				Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(233)
				te[(int)11] = tmp145;
				HX_STACK_LINE(233)
				Float tmp146 = (a41 * b14);		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(233)
				Float tmp147 = (a42 * b24);		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(233)
				Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
				HX_STACK_LINE(233)
				Float tmp149 = (a43 * b34);		HX_STACK_VAR(tmp149,"tmp149");
				HX_STACK_LINE(233)
				Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
				HX_STACK_LINE(233)
				Float tmp151 = (a44 * b44);		HX_STACK_VAR(tmp151,"tmp151");
				HX_STACK_LINE(233)
				Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
				HX_STACK_LINE(233)
				te[(int)15] = tmp152;
				HX_STACK_LINE(233)
				tmp5 = _this1;
			}
			HX_STACK_LINE(233)
			::phoenix::Matrix _m = tmp5;		HX_STACK_VAR(_m,"_m");
			HX_STACK_LINE(233)
			_this->matrix = _m;
			HX_STACK_LINE(233)
			bool tmp6 = (_m != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(233)
			if ((tmp6)){
				HX_STACK_LINE(233)
				::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					cpp::ArrayBase array = _this->matrix->elements;		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(233)
					::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(233)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(233)
					if ((tmp8)){
						HX_STACK_LINE(233)
						::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(233)
						this1 = tmp9;
					}
					else{
						HX_STACK_LINE(233)
						bool tmp9 = (array != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(233)
						if ((tmp9)){
							HX_STACK_LINE(233)
							::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(233)
							{
								HX_STACK_LINE(233)
								::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(233)
								::snow::api::buffers::ArrayBufferView _this1 = tmp11;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(233)
								_this1->byteOffset = (int)0;
								HX_STACK_LINE(233)
								_this1->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								HX_STACK_LINE(233)
								int tmp12 = (_this1->length * _this1->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(233)
								_this1->byteLength = tmp12;
								HX_STACK_LINE(233)
								::haxe::io::Bytes tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(233)
								{
									HX_STACK_LINE(233)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(233)
									int tmp14 = _this1->byteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(233)
									::haxe::io::Bytes tmp15 = ::haxe::io::Bytes_obj::alloc(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(233)
									this2 = tmp15;
									HX_STACK_LINE(233)
									tmp13 = this2;
								}
								HX_STACK_LINE(233)
								_this1->buffer = tmp13;
								HX_STACK_LINE(233)
								_this1->copyFromArray(((Array< Float >)(array)),null());
								HX_STACK_LINE(233)
								tmp10 = _this1;
							}
							HX_STACK_LINE(233)
							this1 = tmp10;
						}
						else{
							HX_STACK_LINE(233)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(233)
							if ((tmp10)){
								HX_STACK_LINE(233)
								::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(233)
								{
									HX_STACK_LINE(233)
									::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(233)
									::snow::api::buffers::ArrayBufferView _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(233)
									::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(233)
									::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(233)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(233)
									int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(233)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(233)
									int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(233)
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(233)
									int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(233)
									int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(233)
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(233)
									int tmp18 = _this1->type;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(233)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(233)
									if ((tmp19)){
										HX_STACK_LINE(233)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(233)
										int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(233)
										int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(233)
										::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(233)
										{
											HX_STACK_LINE(233)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(233)
											int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(233)
											::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(233)
											this2 = tmp23;
											HX_STACK_LINE(233)
											tmp21 = this2;
										}
										HX_STACK_LINE(233)
										_this1->buffer = tmp21;
										HX_STACK_LINE(233)
										::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(233)
										int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(233)
										int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(233)
										_this1->buffer->blit((int)0,tmp22,tmp23,tmp24);
									}
									else{
										HX_STACK_LINE(233)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(233)
									int tmp20 = (_this1->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(233)
									_this1->byteLength = tmp20;
									HX_STACK_LINE(233)
									_this1->byteOffset = (int)0;
									HX_STACK_LINE(233)
									_this1->length = srcLength;
									HX_STACK_LINE(233)
									tmp11 = _this1;
								}
								HX_STACK_LINE(233)
								this1 = tmp11;
							}
							else{
								HX_STACK_LINE(233)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(233)
								if ((tmp11)){
									HX_STACK_LINE(233)
									::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(233)
									{
										HX_STACK_LINE(233)
										::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(233)
										::snow::api::buffers::ArrayBufferView _this1 = tmp13;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(233)
										bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(233)
										if ((tmp14)){
											HX_STACK_LINE(233)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(233)
										int tmp15 = hx::Mod((int)0,_this1->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(233)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(233)
										if ((tmp16)){
											HX_STACK_LINE(233)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(233)
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(233)
										int bufferByteLength = tmp17;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(233)
										int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(233)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(233)
										bool tmp18 = true;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(233)
										if ((tmp18)){
											HX_STACK_LINE(233)
											int tmp19 = bufferByteLength;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(233)
											newByteLength = tmp19;
											HX_STACK_LINE(233)
											int tmp20 = hx::Mod(bufferByteLength,_this1->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(233)
											bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(233)
											if ((tmp21)){
												HX_STACK_LINE(233)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(233)
											bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(233)
											if ((tmp22)){
												HX_STACK_LINE(233)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(233)
											int tmp19 = (null() * _this1->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(233)
											newByteLength = tmp19;
											HX_STACK_LINE(233)
											int tmp20 = newByteLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(233)
											int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(233)
											bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(233)
											if ((tmp21)){
												HX_STACK_LINE(233)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(233)
										_this1->buffer = null();
										HX_STACK_LINE(233)
										_this1->byteOffset = (int)0;
										HX_STACK_LINE(233)
										_this1->byteLength = newByteLength;
										HX_STACK_LINE(233)
										Float tmp19 = (Float(newByteLength) / Float(_this1->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(233)
										int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(233)
										_this1->length = tmp20;
										HX_STACK_LINE(233)
										tmp12 = _this1;
									}
									HX_STACK_LINE(233)
									this1 = tmp12;
								}
								else{
									HX_STACK_LINE(233)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
					HX_STACK_LINE(233)
					tmp7 = this1;
				}
				HX_STACK_LINE(233)
				_this->floats = tmp7;
			}
			HX_STACK_LINE(233)
			_this->matrix;
		}
		else{
			HX_STACK_LINE(235)
			::phoenix::Spatial tmp4 = this->get_world();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(235)
			::phoenix::Spatial _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(235)
			::phoenix::Matrix tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(235)
			{
				HX_STACK_LINE(235)
				::phoenix::Spatial tmp6 = this->local;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(235)
				Array< Float > te = tmp6->matrix->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(235)
				Float tmp7 = te->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(235)
				Float tmp8 = te->__get((int)4);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(235)
				Float tmp9 = te->__get((int)8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(235)
				Float tmp10 = te->__get((int)12);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(235)
				Float tmp11 = te->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(235)
				Float tmp12 = te->__get((int)5);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(235)
				Float tmp13 = te->__get((int)9);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(235)
				Float tmp14 = te->__get((int)13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(235)
				Float tmp15 = te->__get((int)2);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(235)
				Float tmp16 = te->__get((int)6);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(235)
				Float tmp17 = te->__get((int)10);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(235)
				Float tmp18 = te->__get((int)14);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(235)
				Float tmp19 = te->__get((int)3);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(235)
				Float tmp20 = te->__get((int)7);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(235)
				Float tmp21 = te->__get((int)11);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(235)
				Float tmp22 = te->__get((int)15);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(235)
				tmp5 = ::phoenix::Matrix_obj::__new(tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22);
			}
			HX_STACK_LINE(235)
			::phoenix::Matrix _m = tmp5;		HX_STACK_VAR(_m,"_m");
			HX_STACK_LINE(235)
			_this->matrix = _m;
			HX_STACK_LINE(235)
			bool tmp6 = (_m != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(235)
			if ((tmp6)){
				HX_STACK_LINE(235)
				::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(235)
				{
					HX_STACK_LINE(235)
					cpp::ArrayBase array = _this->matrix->elements;		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(235)
					::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(235)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(235)
					if ((tmp8)){
						HX_STACK_LINE(235)
						::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(235)
						this1 = tmp9;
					}
					else{
						HX_STACK_LINE(235)
						bool tmp9 = (array != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(235)
						if ((tmp9)){
							HX_STACK_LINE(235)
							::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(235)
							{
								HX_STACK_LINE(235)
								::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(235)
								::snow::api::buffers::ArrayBufferView _this1 = tmp11;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(235)
								_this1->byteOffset = (int)0;
								HX_STACK_LINE(235)
								_this1->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								HX_STACK_LINE(235)
								int tmp12 = (_this1->length * _this1->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(235)
								_this1->byteLength = tmp12;
								HX_STACK_LINE(235)
								::haxe::io::Bytes tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(235)
								{
									HX_STACK_LINE(235)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(235)
									int tmp14 = _this1->byteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(235)
									::haxe::io::Bytes tmp15 = ::haxe::io::Bytes_obj::alloc(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(235)
									this2 = tmp15;
									HX_STACK_LINE(235)
									tmp13 = this2;
								}
								HX_STACK_LINE(235)
								_this1->buffer = tmp13;
								HX_STACK_LINE(235)
								_this1->copyFromArray(((Array< Float >)(array)),null());
								HX_STACK_LINE(235)
								tmp10 = _this1;
							}
							HX_STACK_LINE(235)
							this1 = tmp10;
						}
						else{
							HX_STACK_LINE(235)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(235)
							if ((tmp10)){
								HX_STACK_LINE(235)
								::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(235)
								{
									HX_STACK_LINE(235)
									::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(235)
									::snow::api::buffers::ArrayBufferView _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(235)
									::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(235)
									::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(235)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(235)
									int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(235)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(235)
									int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(235)
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(235)
									int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(235)
									int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(235)
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(235)
									int tmp18 = _this1->type;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(235)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(235)
									if ((tmp19)){
										HX_STACK_LINE(235)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(235)
										int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(235)
										int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(235)
										::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(235)
										{
											HX_STACK_LINE(235)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(235)
											int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(235)
											::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(235)
											this2 = tmp23;
											HX_STACK_LINE(235)
											tmp21 = this2;
										}
										HX_STACK_LINE(235)
										_this1->buffer = tmp21;
										HX_STACK_LINE(235)
										::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(235)
										int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(235)
										int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(235)
										_this1->buffer->blit((int)0,tmp22,tmp23,tmp24);
									}
									else{
										HX_STACK_LINE(235)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(235)
									int tmp20 = (_this1->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(235)
									_this1->byteLength = tmp20;
									HX_STACK_LINE(235)
									_this1->byteOffset = (int)0;
									HX_STACK_LINE(235)
									_this1->length = srcLength;
									HX_STACK_LINE(235)
									tmp11 = _this1;
								}
								HX_STACK_LINE(235)
								this1 = tmp11;
							}
							else{
								HX_STACK_LINE(235)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(235)
								if ((tmp11)){
									HX_STACK_LINE(235)
									::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(235)
									{
										HX_STACK_LINE(235)
										::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(235)
										::snow::api::buffers::ArrayBufferView _this1 = tmp13;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(235)
										bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(235)
										if ((tmp14)){
											HX_STACK_LINE(235)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(235)
										int tmp15 = hx::Mod((int)0,_this1->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(235)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(235)
										if ((tmp16)){
											HX_STACK_LINE(235)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(235)
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(235)
										int bufferByteLength = tmp17;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(235)
										int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(235)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(235)
										bool tmp18 = true;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(235)
										if ((tmp18)){
											HX_STACK_LINE(235)
											int tmp19 = bufferByteLength;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(235)
											newByteLength = tmp19;
											HX_STACK_LINE(235)
											int tmp20 = hx::Mod(bufferByteLength,_this1->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(235)
											bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(235)
											if ((tmp21)){
												HX_STACK_LINE(235)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(235)
											bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(235)
											if ((tmp22)){
												HX_STACK_LINE(235)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(235)
											int tmp19 = (null() * _this1->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(235)
											newByteLength = tmp19;
											HX_STACK_LINE(235)
											int tmp20 = newByteLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(235)
											int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(235)
											bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(235)
											if ((tmp21)){
												HX_STACK_LINE(235)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(235)
										_this1->buffer = null();
										HX_STACK_LINE(235)
										_this1->byteOffset = (int)0;
										HX_STACK_LINE(235)
										_this1->byteLength = newByteLength;
										HX_STACK_LINE(235)
										Float tmp19 = (Float(newByteLength) / Float(_this1->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(235)
										int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(235)
										_this1->length = tmp20;
										HX_STACK_LINE(235)
										tmp12 = _this1;
									}
									HX_STACK_LINE(235)
									this1 = tmp12;
								}
								else{
									HX_STACK_LINE(235)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
					HX_STACK_LINE(235)
					tmp7 = this1;
				}
				HX_STACK_LINE(235)
				_this->floats = tmp7;
			}
			HX_STACK_LINE(235)
			_this->matrix;
		}
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			::phoenix::Spatial tmp4 = this->get_world();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(241)
			::phoenix::Spatial _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(241)
			bool tmp5 = _this->auto_decompose;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(241)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(241)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(241)
			if ((tmp6)){
				HX_STACK_LINE(241)
				tmp7 = false;
			}
			else{
				HX_STACK_LINE(241)
				tmp7 = true;
			}
			HX_STACK_LINE(241)
			if ((tmp7)){
				HX_STACK_LINE(241)
				::phoenix::MatrixTransform tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					::phoenix::Matrix _this1 = _this->matrix;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(241)
					::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
					HX_STACK_LINE(241)
					::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
					HX_STACK_LINE(241)
					::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
					HX_STACK_LINE(241)
					Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(241)
					::phoenix::Matrix tmp9 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(241)
					::phoenix::Matrix matrix = tmp9;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(241)
					Float tmp10 = te->__get((int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(241)
					Float _ax_x = tmp10;		HX_STACK_VAR(_ax_x,"_ax_x");
					HX_STACK_LINE(241)
					Float tmp11 = te->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(241)
					Float _ax_y = tmp11;		HX_STACK_VAR(_ax_y,"_ax_y");
					HX_STACK_LINE(241)
					Float tmp12 = te->__get((int)2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(241)
					Float _ax_z = tmp12;		HX_STACK_VAR(_ax_z,"_ax_z");
					HX_STACK_LINE(241)
					Float tmp13 = te->__get((int)4);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(241)
					Float _ay_x = tmp13;		HX_STACK_VAR(_ay_x,"_ay_x");
					HX_STACK_LINE(241)
					Float tmp14 = te->__get((int)5);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(241)
					Float _ay_y = tmp14;		HX_STACK_VAR(_ay_y,"_ay_y");
					HX_STACK_LINE(241)
					Float tmp15 = te->__get((int)6);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(241)
					Float _ay_z = tmp15;		HX_STACK_VAR(_ay_z,"_ay_z");
					HX_STACK_LINE(241)
					Float tmp16 = te->__get((int)8);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(241)
					Float _az_x = tmp16;		HX_STACK_VAR(_az_x,"_az_x");
					HX_STACK_LINE(241)
					Float tmp17 = te->__get((int)9);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(241)
					Float _az_y = tmp17;		HX_STACK_VAR(_az_y,"_az_y");
					HX_STACK_LINE(241)
					Float tmp18 = te->__get((int)10);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(241)
					Float _az_z = tmp18;		HX_STACK_VAR(_az_z,"_az_z");
					HX_STACK_LINE(241)
					Float tmp19 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(241)
					Float tmp20 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(241)
					Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(241)
					Float tmp22 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(241)
					Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(241)
					Float tmp24 = ::Math_obj::sqrt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(241)
					Float _ax_length = tmp24;		HX_STACK_VAR(_ax_length,"_ax_length");
					HX_STACK_LINE(241)
					Float tmp25 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(241)
					Float tmp26 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(241)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(241)
					Float tmp28 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(241)
					Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(241)
					Float tmp30 = ::Math_obj::sqrt(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(241)
					Float _ay_length = tmp30;		HX_STACK_VAR(_ay_length,"_ay_length");
					HX_STACK_LINE(241)
					Float tmp31 = (_az_x * _az_x);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(241)
					Float tmp32 = (_az_y * _az_y);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(241)
					Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(241)
					Float tmp34 = (_az_z * _az_z);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(241)
					Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(241)
					Float tmp36 = ::Math_obj::sqrt(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(241)
					Float _az_length = tmp36;		HX_STACK_VAR(_az_length,"_az_length");
					HX_STACK_LINE(241)
					bool tmp37 = (_quaternion == null());		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(241)
					if ((tmp37)){
						HX_STACK_LINE(241)
						::phoenix::Quaternion tmp38 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(241)
						_quaternion = tmp38;
					}
					HX_STACK_LINE(241)
					bool tmp38 = (_position == null());		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(241)
					if ((tmp38)){
						HX_STACK_LINE(241)
						Float tmp39 = te->__get((int)12);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(241)
						Float tmp40 = te->__get((int)13);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(241)
						Float tmp41 = te->__get((int)14);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(241)
						::phoenix::Vector tmp42 = ::phoenix::Vector_obj::__new(tmp39,tmp40,tmp41,null());		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(241)
						_position = tmp42;
					}
					else{
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							Float tmp39 = te->__get((int)12);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(241)
							Float _x = tmp39;		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(241)
							_position->x = _x;
							HX_STACK_LINE(241)
							bool tmp40 = _position->_construct;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(241)
							if ((tmp40)){
								HX_STACK_LINE(241)
								_position->x;
							}
							else{
								HX_STACK_LINE(241)
								bool tmp41 = (_position->listen_x != null());		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(241)
								bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(241)
								if ((tmp41)){
									HX_STACK_LINE(241)
									bool tmp43 = _position->ignore_listeners;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(241)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(241)
									tmp42 = !(tmp44);
								}
								else{
									HX_STACK_LINE(241)
									tmp42 = false;
								}
								HX_STACK_LINE(241)
								if ((tmp42)){
									HX_STACK_LINE(241)
									Float tmp43 = _x;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(241)
									_position->listen_x(tmp43);
								}
								HX_STACK_LINE(241)
								_position->x;
							}
						}
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							Float tmp39 = te->__get((int)13);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(241)
							Float _y = tmp39;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(241)
							_position->y = _y;
							HX_STACK_LINE(241)
							bool tmp40 = _position->_construct;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(241)
							if ((tmp40)){
								HX_STACK_LINE(241)
								_position->y;
							}
							else{
								HX_STACK_LINE(241)
								bool tmp41 = (_position->listen_y != null());		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(241)
								bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(241)
								if ((tmp41)){
									HX_STACK_LINE(241)
									bool tmp43 = _position->ignore_listeners;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(241)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(241)
									tmp42 = !(tmp44);
								}
								else{
									HX_STACK_LINE(241)
									tmp42 = false;
								}
								HX_STACK_LINE(241)
								if ((tmp42)){
									HX_STACK_LINE(241)
									Float tmp43 = _y;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(241)
									_position->listen_y(tmp43);
								}
								HX_STACK_LINE(241)
								_position->y;
							}
						}
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							Float tmp39 = te->__get((int)14);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(241)
							Float _z = tmp39;		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(241)
							_position->z = _z;
							HX_STACK_LINE(241)
							bool tmp40 = _position->_construct;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(241)
							if ((tmp40)){
								HX_STACK_LINE(241)
								_position->z;
							}
							else{
								HX_STACK_LINE(241)
								bool tmp41 = (_position->listen_z != null());		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(241)
								bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(241)
								if ((tmp41)){
									HX_STACK_LINE(241)
									bool tmp43 = _position->ignore_listeners;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(241)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(241)
									tmp42 = !(tmp44);
								}
								else{
									HX_STACK_LINE(241)
									tmp42 = false;
								}
								HX_STACK_LINE(241)
								if ((tmp42)){
									HX_STACK_LINE(241)
									Float tmp43 = _z;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(241)
									_position->listen_z(tmp43);
								}
								HX_STACK_LINE(241)
								_position->z;
							}
						}
					}
					HX_STACK_LINE(241)
					bool tmp39 = (_scale == null());		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(241)
					if ((tmp39)){
						HX_STACK_LINE(241)
						::phoenix::Vector tmp40 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(241)
						_scale = tmp40;
					}
					else{
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							_scale->x = _ax_length;
							HX_STACK_LINE(241)
							bool tmp40 = _scale->_construct;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(241)
							if ((tmp40)){
								HX_STACK_LINE(241)
								_scale->x;
							}
							else{
								HX_STACK_LINE(241)
								bool tmp41 = (_scale->listen_x != null());		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(241)
								bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(241)
								if ((tmp41)){
									HX_STACK_LINE(241)
									bool tmp43 = _scale->ignore_listeners;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(241)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(241)
									tmp42 = !(tmp44);
								}
								else{
									HX_STACK_LINE(241)
									tmp42 = false;
								}
								HX_STACK_LINE(241)
								if ((tmp42)){
									HX_STACK_LINE(241)
									Float tmp43 = _ax_length;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(241)
									_scale->listen_x(tmp43);
								}
								HX_STACK_LINE(241)
								_scale->x;
							}
						}
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							_scale->y = _ay_length;
							HX_STACK_LINE(241)
							bool tmp40 = _scale->_construct;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(241)
							if ((tmp40)){
								HX_STACK_LINE(241)
								_scale->y;
							}
							else{
								HX_STACK_LINE(241)
								bool tmp41 = (_scale->listen_y != null());		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(241)
								bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(241)
								if ((tmp41)){
									HX_STACK_LINE(241)
									bool tmp43 = _scale->ignore_listeners;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(241)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(241)
									tmp42 = !(tmp44);
								}
								else{
									HX_STACK_LINE(241)
									tmp42 = false;
								}
								HX_STACK_LINE(241)
								if ((tmp42)){
									HX_STACK_LINE(241)
									Float tmp43 = _ay_length;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(241)
									_scale->listen_y(tmp43);
								}
								HX_STACK_LINE(241)
								_scale->y;
							}
						}
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							_scale->z = _az_length;
							HX_STACK_LINE(241)
							bool tmp40 = _scale->_construct;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(241)
							if ((tmp40)){
								HX_STACK_LINE(241)
								_scale->z;
							}
							else{
								HX_STACK_LINE(241)
								bool tmp41 = (_scale->listen_z != null());		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(241)
								bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(241)
								if ((tmp41)){
									HX_STACK_LINE(241)
									bool tmp43 = _scale->ignore_listeners;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(241)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(241)
									tmp42 = !(tmp44);
								}
								else{
									HX_STACK_LINE(241)
									tmp42 = false;
								}
								HX_STACK_LINE(241)
								if ((tmp42)){
									HX_STACK_LINE(241)
									Float tmp43 = _az_length;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(241)
									_scale->listen_z(tmp43);
								}
								HX_STACK_LINE(241)
								_scale->z;
							}
						}
					}
					HX_STACK_LINE(241)
					matrix->elements = _this1->elements->concat(Array_obj< Float >::__new());
					HX_STACK_LINE(241)
					Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
					HX_STACK_LINE(241)
					Float tmp40 = _ax_length;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)0],tmp40);
					HX_STACK_LINE(241)
					Float tmp41 = _ax_length;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)1],tmp41);
					HX_STACK_LINE(241)
					Float tmp42 = _ax_length;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)2],tmp42);
					HX_STACK_LINE(241)
					Float tmp43 = _ay_length;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)4],tmp43);
					HX_STACK_LINE(241)
					Float tmp44 = _ay_length;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)5],tmp44);
					HX_STACK_LINE(241)
					Float tmp45 = _ay_length;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)6],tmp45);
					HX_STACK_LINE(241)
					Float tmp46 = _az_length;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)8],tmp46);
					HX_STACK_LINE(241)
					Float tmp47 = _az_length;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)9],tmp47);
					HX_STACK_LINE(241)
					Float tmp48 = _az_length;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(241)
					hx::DivEq(me[(int)10],tmp48);
					HX_STACK_LINE(241)
					::phoenix::Matrix tmp49 = matrix;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(241)
					_quaternion->setFromRotationMatrix(tmp49);
					HX_STACK_LINE(241)
					bool tmp50 = (_this1->_transform == null());		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(241)
					if ((tmp50)){
						HX_STACK_LINE(241)
						::phoenix::MatrixTransform tmp51 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(241)
						_this1->_transform = tmp51;
					}
					else{
						HX_STACK_LINE(241)
						_this1->_transform->pos = _position;
						HX_STACK_LINE(241)
						_this1->_transform->rotation = _quaternion;
						HX_STACK_LINE(241)
						_this1->_transform->scale = _scale;
					}
					HX_STACK_LINE(241)
					tmp8 = _this1->_transform;
				}
				HX_STACK_LINE(241)
				::phoenix::MatrixTransform _transform = tmp8;		HX_STACK_VAR(_transform,"_transform");
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
					HX_STACK_LINE(241)
					_this->pos = _p;
					HX_STACK_LINE(241)
					bool tmp9 = (_p != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(241)
					if ((tmp9)){
						HX_STACK_LINE(241)
						::phoenix::Vector tmp10 = _this->pos;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(241)
						Dynamic tmp11 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(241)
						::phoenix::Vector_obj::Listen(tmp10,tmp11);
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							bool tmp12 = (_this->pos_changed != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(241)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(241)
							if ((tmp12)){
								HX_STACK_LINE(241)
								bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(241)
								bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(241)
								tmp13 = !(tmp15);
							}
							else{
								HX_STACK_LINE(241)
								tmp13 = false;
							}
							HX_STACK_LINE(241)
							if ((tmp13)){
								HX_STACK_LINE(241)
								::phoenix::Vector tmp14 = _this->pos;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(241)
								_this->pos_changed(tmp14);
							}
						}
					}
					HX_STACK_LINE(241)
					_this->pos;
				}
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
					HX_STACK_LINE(241)
					_this->rotation = _r;
					HX_STACK_LINE(241)
					bool tmp9 = (_r != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(241)
					if ((tmp9)){
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
							HX_STACK_LINE(241)
							Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
							HX_STACK_LINE(241)
							_q->listen_x = listener;
							HX_STACK_LINE(241)
							_q->listen_y = listener;
							HX_STACK_LINE(241)
							_q->listen_z = listener;
							HX_STACK_LINE(241)
							_q->listen_w = listener;
						}
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							bool tmp10 = (_this->rotation_changed != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(241)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(241)
							if ((tmp10)){
								HX_STACK_LINE(241)
								bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(241)
								bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(241)
								tmp11 = !(tmp13);
							}
							else{
								HX_STACK_LINE(241)
								tmp11 = false;
							}
							HX_STACK_LINE(241)
							if ((tmp11)){
								HX_STACK_LINE(241)
								::phoenix::Quaternion tmp12 = _this->rotation;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(241)
								_this->rotation_changed(tmp12);
							}
						}
					}
					HX_STACK_LINE(241)
					_this->rotation;
				}
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
					HX_STACK_LINE(241)
					_this->scale = _s;
					HX_STACK_LINE(241)
					bool tmp9 = (_s != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(241)
					if ((tmp9)){
						HX_STACK_LINE(241)
						::phoenix::Vector tmp10 = _this->scale;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(241)
						Dynamic tmp11 = _this->_scale_change_dyn();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(241)
						::phoenix::Vector_obj::Listen(tmp10,tmp11);
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							bool tmp12 = (_this->scale_changed != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(241)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(241)
							if ((tmp12)){
								HX_STACK_LINE(241)
								bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(241)
								bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(241)
								tmp13 = !(tmp15);
							}
							else{
								HX_STACK_LINE(241)
								tmp13 = false;
							}
							HX_STACK_LINE(241)
							if ((tmp13)){
								HX_STACK_LINE(241)
								::phoenix::Vector tmp14 = _this->scale;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(241)
								_this->scale_changed(tmp14);
							}
						}
					}
					HX_STACK_LINE(241)
					_this->scale;
				}
			}
			HX_STACK_LINE(241)
			_this;
		}
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			this->dirty = false;
			HX_STACK_LINE(244)
			bool tmp4 = this->dirty;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(244)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(244)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(244)
			if ((tmp5)){
				HX_STACK_LINE(244)
				bool tmp7 = this->_setup;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(244)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(244)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(244)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(244)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(244)
				tmp6 = !(tmp11);
			}
			else{
				HX_STACK_LINE(244)
				tmp6 = false;
			}
			HX_STACK_LINE(244)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(244)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(244)
			if ((tmp7)){
				HX_STACK_LINE(244)
				tmp8 = (this->_dirty_handlers != null());
			}
			else{
				HX_STACK_LINE(244)
				tmp8 = false;
			}
			HX_STACK_LINE(244)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(244)
			if ((tmp8)){
				HX_STACK_LINE(244)
				int tmp10 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(244)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(244)
				tmp9 = (tmp11 > (int)0);
			}
			else{
				HX_STACK_LINE(244)
				tmp9 = false;
			}
			HX_STACK_LINE(244)
			if ((tmp9)){
				HX_STACK_LINE(244)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(244)
				cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(244)
				while((true)){
					HX_STACK_LINE(244)
					bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(244)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(244)
					if ((tmp11)){
						HX_STACK_LINE(244)
						break;
					}
					HX_STACK_LINE(244)
					Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(244)
					Dynamic _handler = tmp12;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(244)
					++(_g);
					HX_STACK_LINE(244)
					bool tmp13 = (_handler != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(244)
					if ((tmp13)){
						HX_STACK_LINE(244)
						_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(244)
			this->dirty;
		}
		HX_STACK_LINE(245)
		this->_cleaning = false;
		HX_STACK_LINE(247)
		bool tmp4 = (this->_clean_handlers != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(247)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(247)
		if ((tmp4)){
			HX_STACK_LINE(248)
			int tmp6 = this->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(248)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(248)
			tmp5 = (tmp7 > (int)0);
		}
		else{
			HX_STACK_LINE(247)
			tmp5 = false;
		}
		HX_STACK_LINE(247)
		if ((tmp5)){
			HX_STACK_LINE(249)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(249)
			cpp::ArrayBase _g1 = this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(249)
			while((true)){
				HX_STACK_LINE(249)
				bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(249)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(249)
				if ((tmp7)){
					HX_STACK_LINE(249)
					break;
				}
				HX_STACK_LINE(249)
				Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(249)
				Dynamic _handler = tmp8;		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(249)
				++(_g);
				HX_STACK_LINE(249)
				bool tmp9 = (_handler != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(249)
				if ((tmp9)){
					HX_STACK_LINE(249)
					_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,clean,(void))

::String Transform_obj::toString( ){
	HX_STACK_FRAME("phoenix.Transform","toString",0x591e518d,"phoenix.Transform.toString","phoenix/Transform.hx",254,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	::String tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	::String tmp1 = (HX_HCSTRING("Transform (","\x54","\x14","\xfd","\x16") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(255)
	::String tmp2 = (tmp1 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(255)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,toString,return )

::phoenix::Vector Transform_obj::get_origin( ){
	HX_STACK_FRAME("phoenix.Transform","get_origin",0x87c2c4d0,"phoenix.Transform.get_origin","phoenix/Transform.hx",258,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(260)
	::phoenix::Vector tmp = this->origin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_origin,return )

::phoenix::Vector Transform_obj::set_origin( ::phoenix::Vector o){
	HX_STACK_FRAME("phoenix.Transform","set_origin",0x8b406344,"phoenix.Transform.set_origin","phoenix/Transform.hx",264,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(266)
	{
		HX_STACK_LINE(266)
		this->dirty = true;
		HX_STACK_LINE(266)
		bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(266)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(266)
		if ((tmp1)){
			HX_STACK_LINE(266)
			bool tmp3 = this->_setup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(266)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(266)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(266)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(266)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(266)
			tmp2 = !(tmp7);
		}
		else{
			HX_STACK_LINE(266)
			tmp2 = false;
		}
		HX_STACK_LINE(266)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(266)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(266)
		if ((tmp3)){
			HX_STACK_LINE(266)
			tmp4 = (this->_dirty_handlers != null());
		}
		else{
			HX_STACK_LINE(266)
			tmp4 = false;
		}
		HX_STACK_LINE(266)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(266)
		if ((tmp4)){
			HX_STACK_LINE(266)
			int tmp6 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(266)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(266)
			tmp5 = (tmp7 > (int)0);
		}
		else{
			HX_STACK_LINE(266)
			tmp5 = false;
		}
		HX_STACK_LINE(266)
		if ((tmp5)){
			HX_STACK_LINE(266)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(266)
			cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(266)
			while((true)){
				HX_STACK_LINE(266)
				bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(266)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(266)
				if ((tmp7)){
					HX_STACK_LINE(266)
					break;
				}
				HX_STACK_LINE(266)
				Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(266)
				Dynamic _handler = tmp8;		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(266)
				++(_g);
				HX_STACK_LINE(266)
				bool tmp9 = (_handler != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(266)
				if ((tmp9)){
					HX_STACK_LINE(266)
					_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
			}
		}
		HX_STACK_LINE(266)
		this->dirty;
	}
	HX_STACK_LINE(268)
	this->origin = o;
	HX_STACK_LINE(270)
	bool tmp = (this->_origin_handlers != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	if ((tmp)){
		HX_STACK_LINE(271)
		int tmp2 = this->_origin_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		tmp1 = (tmp3 > (int)0);
	}
	else{
		HX_STACK_LINE(270)
		tmp1 = false;
	}
	HX_STACK_LINE(270)
	if ((tmp1)){
		HX_STACK_LINE(272)
		::phoenix::Vector tmp2 = this->origin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(272)
		::phoenix::Vector _origin = tmp2;		HX_STACK_VAR(_origin,"_origin");
		HX_STACK_LINE(272)
		{
			HX_STACK_LINE(272)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(272)
			cpp::ArrayBase _g1 = this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(272)
			while((true)){
				HX_STACK_LINE(272)
				bool tmp3 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(272)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(272)
				if ((tmp4)){
					HX_STACK_LINE(272)
					break;
				}
				HX_STACK_LINE(272)
				Dynamic tmp5 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(272)
				Dynamic _handler = tmp5;		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(272)
				++(_g);
				HX_STACK_LINE(272)
				bool tmp6 = (_handler != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(272)
				if ((tmp6)){
					HX_STACK_LINE(272)
					::phoenix::Vector tmp7 = _origin;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(272)
					_handler(tmp7).Cast< Void >();
				}
			}
		}
	}
	HX_STACK_LINE(275)
	::phoenix::Vector tmp2 = this->origin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(275)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_origin,return )

::phoenix::Spatial Transform_obj::set_world( ::phoenix::Spatial w){
	HX_STACK_FRAME("phoenix.Transform","set_world",0x6e4022b4,"phoenix.Transform.set_world","phoenix/Transform.hx",279,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(w,"w")
	HX_STACK_LINE(281)
	bool tmp = (w == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(281)
	if ((tmp)){
		HX_STACK_LINE(282)
		::phoenix::Spatial tmp1 = this->world = w;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(282)
		return tmp1;
	}
	HX_STACK_LINE(285)
	{
		HX_STACK_LINE(285)
		this->dirty = true;
		HX_STACK_LINE(285)
		bool tmp1 = this->dirty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(285)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(285)
		if ((tmp2)){
			HX_STACK_LINE(285)
			bool tmp4 = this->_setup;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(285)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(285)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(285)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(285)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(285)
			tmp3 = !(tmp8);
		}
		else{
			HX_STACK_LINE(285)
			tmp3 = false;
		}
		HX_STACK_LINE(285)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(285)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(285)
		if ((tmp4)){
			HX_STACK_LINE(285)
			tmp5 = (this->_dirty_handlers != null());
		}
		else{
			HX_STACK_LINE(285)
			tmp5 = false;
		}
		HX_STACK_LINE(285)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(285)
		if ((tmp5)){
			HX_STACK_LINE(285)
			int tmp7 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(285)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(285)
			tmp6 = (tmp8 > (int)0);
		}
		else{
			HX_STACK_LINE(285)
			tmp6 = false;
		}
		HX_STACK_LINE(285)
		if ((tmp6)){
			HX_STACK_LINE(285)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(285)
			cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(285)
			while((true)){
				HX_STACK_LINE(285)
				bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(285)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(285)
				if ((tmp8)){
					HX_STACK_LINE(285)
					break;
				}
				HX_STACK_LINE(285)
				Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(285)
				Dynamic _handler = tmp9;		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(285)
				++(_g);
				HX_STACK_LINE(285)
				bool tmp10 = (_handler != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(285)
				if ((tmp10)){
					HX_STACK_LINE(285)
					_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
			}
		}
		HX_STACK_LINE(285)
		this->dirty;
	}
	HX_STACK_LINE(287)
	::phoenix::Spatial tmp1 = this->world = w;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(287)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_world,return )

::phoenix::Transform Transform_obj::get_parent( ){
	HX_STACK_FRAME("phoenix.Transform","get_parent",0x2a3fb014,"phoenix.Transform.get_parent","phoenix/Transform.hx",291,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	::phoenix::Transform tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_parent,return )

::phoenix::Transform Transform_obj::set_parent( ::phoenix::Transform _p){
	HX_STACK_FRAME("phoenix.Transform","set_parent",0x2dbd4e88,"phoenix.Transform.set_parent","phoenix/Transform.hx",297,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(299)
		this->dirty = true;
		HX_STACK_LINE(299)
		bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(299)
		if ((tmp1)){
			HX_STACK_LINE(299)
			bool tmp3 = this->_setup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(299)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(299)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(299)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(299)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(299)
			tmp2 = !(tmp7);
		}
		else{
			HX_STACK_LINE(299)
			tmp2 = false;
		}
		HX_STACK_LINE(299)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(299)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(299)
		if ((tmp3)){
			HX_STACK_LINE(299)
			tmp4 = (this->_dirty_handlers != null());
		}
		else{
			HX_STACK_LINE(299)
			tmp4 = false;
		}
		HX_STACK_LINE(299)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(299)
		if ((tmp4)){
			HX_STACK_LINE(299)
			int tmp6 = this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(299)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(299)
			tmp5 = (tmp7 > (int)0);
		}
		else{
			HX_STACK_LINE(299)
			tmp5 = false;
		}
		HX_STACK_LINE(299)
		if ((tmp5)){
			HX_STACK_LINE(299)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(299)
			cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(299)
			while((true)){
				HX_STACK_LINE(299)
				bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(299)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(299)
				if ((tmp7)){
					HX_STACK_LINE(299)
					break;
				}
				HX_STACK_LINE(299)
				Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(299)
				Dynamic _handler = tmp8;		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(299)
				++(_g);
				HX_STACK_LINE(299)
				bool tmp9 = (_handler != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(299)
				if ((tmp9)){
					HX_STACK_LINE(299)
					_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
			}
		}
		HX_STACK_LINE(299)
		this->dirty;
	}
	HX_STACK_LINE(302)
	::phoenix::Transform tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(302)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(302)
	if ((tmp1)){
		HX_STACK_LINE(303)
		::phoenix::Transform tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(303)
		::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(303)
		bool tmp3 = (_this->_clean_handlers == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		if ((tmp3)){
			HX_STACK_LINE(303)
			false;
		}
		else{
			HX_STACK_LINE(303)
			Dynamic tmp4 = this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			_this->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp4);
		}
	}
	HX_STACK_LINE(306)
	this->parent = _p;
	HX_STACK_LINE(308)
	bool tmp2 = (this->_parent_handlers != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(308)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(308)
	if ((tmp2)){
		HX_STACK_LINE(309)
		int tmp4 = this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(309)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(309)
		tmp3 = (tmp5 > (int)0);
	}
	else{
		HX_STACK_LINE(308)
		tmp3 = false;
	}
	HX_STACK_LINE(308)
	if ((tmp3)){
		HX_STACK_LINE(310)
		::phoenix::Transform tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(310)
		::phoenix::Transform _parent = tmp4;		HX_STACK_VAR(_parent,"_parent");
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(310)
			cpp::ArrayBase _g1 = this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(310)
			while((true)){
				HX_STACK_LINE(310)
				bool tmp5 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(310)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(310)
				if ((tmp6)){
					HX_STACK_LINE(310)
					break;
				}
				HX_STACK_LINE(310)
				Dynamic tmp7 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(310)
				Dynamic _handler = tmp7;		HX_STACK_VAR(_handler,"_handler");
				HX_STACK_LINE(310)
				++(_g);
				HX_STACK_LINE(310)
				bool tmp8 = (_handler != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(310)
				if ((tmp8)){
					HX_STACK_LINE(310)
					::phoenix::Transform tmp9 = _parent;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(310)
					_handler(tmp9).Cast< Void >();
				}
			}
		}
	}
	HX_STACK_LINE(313)
	::phoenix::Transform tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(313)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(313)
	if ((tmp5)){
		HX_STACK_LINE(316)
		::phoenix::Transform tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(316)
		::phoenix::Transform _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(316)
		bool tmp7 = (_this->_clean_handlers == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(316)
		if ((tmp7)){
			HX_STACK_LINE(316)
			_this->_clean_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(316)
		Dynamic tmp8 = this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(316)
		_this->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
	}
	HX_STACK_LINE(319)
	::phoenix::Transform tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(319)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_parent,return )

::phoenix::Vector Transform_obj::get_pos( ){
	HX_STACK_FRAME("phoenix.Transform","get_pos",0x85121c6a,"phoenix.Transform.get_pos","phoenix/Transform.hx",323,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(324)
	::phoenix::Spatial tmp = this->local;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	::phoenix::Vector tmp1 = tmp->pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(324)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_pos,return )

::phoenix::Quaternion Transform_obj::get_rotation( ){
	HX_STACK_FRAME("phoenix.Transform","get_rotation",0x3937f6a8,"phoenix.Transform.get_rotation","phoenix/Transform.hx",327,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(328)
	::phoenix::Spatial tmp = this->local;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	::phoenix::Quaternion tmp1 = tmp->rotation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_rotation,return )

::phoenix::Vector Transform_obj::get_scale( ){
	HX_STACK_FRAME("phoenix.Transform","get_scale",0x35596ee0,"phoenix.Transform.get_scale","phoenix/Transform.hx",331,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(332)
	::phoenix::Spatial tmp = this->local;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	::phoenix::Vector tmp1 = tmp->scale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_scale,return )

::phoenix::Vector Transform_obj::set_pos( ::phoenix::Vector value){
	HX_STACK_FRAME("phoenix.Transform","set_pos",0x7813ad76,"phoenix.Transform.set_pos","phoenix/Transform.hx",336,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(337)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(337)
	{
		HX_STACK_LINE(337)
		::phoenix::Spatial tmp1 = this->local;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(337)
		::phoenix::Spatial _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(337)
		_this->pos = value;
		HX_STACK_LINE(337)
		bool tmp2 = (value != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(337)
		if ((tmp2)){
			HX_STACK_LINE(337)
			::phoenix::Vector tmp3 = _this->pos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(337)
			Dynamic tmp4 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(337)
			::phoenix::Vector_obj::Listen(tmp3,tmp4);
			HX_STACK_LINE(337)
			{
				HX_STACK_LINE(337)
				bool tmp5 = (_this->pos_changed != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(337)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(337)
				if ((tmp5)){
					HX_STACK_LINE(337)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(337)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(337)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(337)
					tmp6 = false;
				}
				HX_STACK_LINE(337)
				if ((tmp6)){
					HX_STACK_LINE(337)
					::phoenix::Vector tmp7 = _this->pos;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(337)
					_this->pos_changed(tmp7);
				}
			}
		}
		HX_STACK_LINE(337)
		tmp = _this->pos;
	}
	HX_STACK_LINE(337)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_pos,return )

::phoenix::Quaternion Transform_obj::set_rotation( ::phoenix::Quaternion value){
	HX_STACK_FRAME("phoenix.Transform","set_rotation",0x4e311a1c,"phoenix.Transform.set_rotation","phoenix/Transform.hx",340,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(341)
	::phoenix::Quaternion tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(341)
	{
		HX_STACK_LINE(341)
		::phoenix::Spatial tmp1 = this->local;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(341)
		::phoenix::Spatial _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(341)
		_this->rotation = value;
		HX_STACK_LINE(341)
		bool tmp2 = (value != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(341)
		if ((tmp2)){
			HX_STACK_LINE(341)
			{
				HX_STACK_LINE(341)
				::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
				HX_STACK_LINE(341)
				Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(341)
				_q->listen_x = listener;
				HX_STACK_LINE(341)
				_q->listen_y = listener;
				HX_STACK_LINE(341)
				_q->listen_z = listener;
				HX_STACK_LINE(341)
				_q->listen_w = listener;
			}
			HX_STACK_LINE(341)
			{
				HX_STACK_LINE(341)
				bool tmp3 = (_this->rotation_changed != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(341)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(341)
				if ((tmp3)){
					HX_STACK_LINE(341)
					bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(341)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(341)
					tmp4 = !(tmp6);
				}
				else{
					HX_STACK_LINE(341)
					tmp4 = false;
				}
				HX_STACK_LINE(341)
				if ((tmp4)){
					HX_STACK_LINE(341)
					::phoenix::Quaternion tmp5 = _this->rotation;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(341)
					_this->rotation_changed(tmp5);
				}
			}
		}
		HX_STACK_LINE(341)
		tmp = _this->rotation;
	}
	HX_STACK_LINE(341)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_rotation,return )

::phoenix::Vector Transform_obj::set_scale( ::phoenix::Vector value){
	HX_STACK_FRAME("phoenix.Transform","set_scale",0x18aa5aec,"phoenix.Transform.set_scale","phoenix/Transform.hx",344,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(345)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	{
		HX_STACK_LINE(345)
		::phoenix::Spatial tmp1 = this->local;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		::phoenix::Spatial _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(345)
		_this->scale = value;
		HX_STACK_LINE(345)
		bool tmp2 = (value != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		if ((tmp2)){
			HX_STACK_LINE(345)
			::phoenix::Vector tmp3 = _this->scale;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(345)
			Dynamic tmp4 = _this->_scale_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(345)
			::phoenix::Vector_obj::Listen(tmp3,tmp4);
			HX_STACK_LINE(345)
			{
				HX_STACK_LINE(345)
				bool tmp5 = (_this->scale_changed != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(345)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(345)
				if ((tmp5)){
					HX_STACK_LINE(345)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(345)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(345)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(345)
					tmp6 = false;
				}
				HX_STACK_LINE(345)
				if ((tmp6)){
					HX_STACK_LINE(345)
					::phoenix::Vector tmp7 = _this->scale;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(345)
					_this->scale_changed(tmp7);
				}
			}
		}
		HX_STACK_LINE(345)
		tmp = _this->scale;
	}
	HX_STACK_LINE(345)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_scale,return )

Void Transform_obj::propagate_clean( ){
{
		HX_STACK_FRAME("phoenix.Transform","propagate_clean",0xf9de2332,"phoenix.Transform.propagate_clean","phoenix/Transform.hx",350,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(350)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(350)
		cpp::ArrayBase _g1 = this->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(350)
		while((true)){
			HX_STACK_LINE(350)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(350)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(350)
			if ((tmp1)){
				HX_STACK_LINE(350)
				break;
			}
			HX_STACK_LINE(350)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(350)
			Dynamic _handler = tmp2;		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(350)
			++(_g);
			HX_STACK_LINE(351)
			bool tmp3 = (_handler != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(351)
			if ((tmp3)){
				HX_STACK_LINE(352)
				_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,propagate_clean,(void))

Void Transform_obj::propagate_dirty( ){
{
		HX_STACK_FRAME("phoenix.Transform","propagate_dirty",0x8b5301bb,"phoenix.Transform.propagate_dirty","phoenix/Transform.hx",358,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(358)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(358)
		cpp::ArrayBase _g1 = this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(358)
		while((true)){
			HX_STACK_LINE(358)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(358)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(358)
			if ((tmp1)){
				HX_STACK_LINE(358)
				break;
			}
			HX_STACK_LINE(358)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(358)
			Dynamic _handler = tmp2;		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(358)
			++(_g);
			HX_STACK_LINE(359)
			bool tmp3 = (_handler != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(359)
			if ((tmp3)){
				HX_STACK_LINE(360)
				_handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,propagate_dirty,(void))

Void Transform_obj::propagate_pos( ::phoenix::Vector _pos){
{
		HX_STACK_FRAME("phoenix.Transform","propagate_pos",0xf04d22fd,"phoenix.Transform.propagate_pos","phoenix/Transform.hx",366,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_LINE(366)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(366)
		cpp::ArrayBase _g1 = this->_pos_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(366)
		while((true)){
			HX_STACK_LINE(366)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(366)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(366)
			if ((tmp1)){
				HX_STACK_LINE(366)
				break;
			}
			HX_STACK_LINE(366)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(366)
			Dynamic _handler = tmp2;		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(366)
			++(_g);
			HX_STACK_LINE(367)
			bool tmp3 = (_handler != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(367)
			if ((tmp3)){
				HX_STACK_LINE(368)
				::phoenix::Vector tmp4 = _pos;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(368)
				_handler(tmp4).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,propagate_pos,(void))

Void Transform_obj::propagate_rotation( ::phoenix::Quaternion _rotation){
{
		HX_STACK_FRAME("phoenix.Transform","propagate_rotation",0x22bd3b35,"phoenix.Transform.propagate_rotation","phoenix/Transform.hx",374,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rotation,"_rotation")
		HX_STACK_LINE(374)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(374)
		cpp::ArrayBase _g1 = this->_rotation_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(374)
		while((true)){
			HX_STACK_LINE(374)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(374)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(374)
			if ((tmp1)){
				HX_STACK_LINE(374)
				break;
			}
			HX_STACK_LINE(374)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(374)
			Dynamic _handler = tmp2;		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(374)
			++(_g);
			HX_STACK_LINE(375)
			bool tmp3 = (_handler != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(375)
			if ((tmp3)){
				HX_STACK_LINE(376)
				::phoenix::Quaternion tmp4 = _rotation;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(376)
				_handler(tmp4).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,propagate_rotation,(void))

Void Transform_obj::propagate_scale( ::phoenix::Vector _scale){
{
		HX_STACK_FRAME("phoenix.Transform","propagate_scale",0x2a518033,"phoenix.Transform.propagate_scale","phoenix/Transform.hx",382,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(382)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(382)
		cpp::ArrayBase _g1 = this->_scale_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(382)
		while((true)){
			HX_STACK_LINE(382)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(382)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(382)
			if ((tmp1)){
				HX_STACK_LINE(382)
				break;
			}
			HX_STACK_LINE(382)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(382)
			Dynamic _handler = tmp2;		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(382)
			++(_g);
			HX_STACK_LINE(383)
			bool tmp3 = (_handler != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(383)
			if ((tmp3)){
				HX_STACK_LINE(384)
				::phoenix::Vector tmp4 = _scale;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(384)
				_handler(tmp4).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,propagate_scale,(void))

Void Transform_obj::propagate_origin( ::phoenix::Vector _origin){
{
		HX_STACK_FRAME("phoenix.Transform","propagate_origin",0xebd9dc1d,"phoenix.Transform.propagate_origin","phoenix/Transform.hx",390,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_origin,"_origin")
		HX_STACK_LINE(390)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(390)
		cpp::ArrayBase _g1 = this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(390)
		while((true)){
			HX_STACK_LINE(390)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(390)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(390)
			if ((tmp1)){
				HX_STACK_LINE(390)
				break;
			}
			HX_STACK_LINE(390)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(390)
			Dynamic _handler = tmp2;		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(390)
			++(_g);
			HX_STACK_LINE(391)
			bool tmp3 = (_handler != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(391)
			if ((tmp3)){
				HX_STACK_LINE(392)
				::phoenix::Vector tmp4 = _origin;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(392)
				_handler(tmp4).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,propagate_origin,(void))

Void Transform_obj::propagate_parent( ::phoenix::Transform _parent){
{
		HX_STACK_FRAME("phoenix.Transform","propagate_parent",0x8e56c761,"phoenix.Transform.propagate_parent","phoenix/Transform.hx",398,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parent,"_parent")
		HX_STACK_LINE(398)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(398)
		cpp::ArrayBase _g1 = this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(398)
		while((true)){
			HX_STACK_LINE(398)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(398)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(398)
			if ((tmp1)){
				HX_STACK_LINE(398)
				break;
			}
			HX_STACK_LINE(398)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(398)
			Dynamic _handler = tmp2;		HX_STACK_VAR(_handler,"_handler");
			HX_STACK_LINE(398)
			++(_g);
			HX_STACK_LINE(399)
			bool tmp3 = (_handler != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(399)
			if ((tmp3)){
				HX_STACK_LINE(400)
				::phoenix::Transform tmp4 = _parent;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(400)
				_handler(tmp4).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,propagate_parent,(void))

Void Transform_obj::listen( Dynamic _handler){
{
		HX_STACK_FRAME("phoenix.Transform","listen",0x430d9ee8,"phoenix.Transform.listen","phoenix/Transform.hx",405,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(407)
		bool tmp = (this->_clean_handlers == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(407)
		if ((tmp)){
			HX_STACK_LINE(408)
			this->_clean_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(411)
		Dynamic tmp1 = _handler;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(411)
		this->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,listen,(void))

bool Transform_obj::unlisten( Dynamic _handler){
	HX_STACK_FRAME("phoenix.Transform","unlisten",0x12f07841,"phoenix.Transform.unlisten","phoenix/Transform.hx",415,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(417)
	bool tmp = (this->_clean_handlers == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(417)
	if ((tmp)){
		HX_STACK_LINE(418)
		return false;
	}
	HX_STACK_LINE(421)
	Dynamic tmp1 = _handler;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(421)
	bool tmp2 = this->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(421)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,unlisten,return )

Void Transform_obj::listen_dirty( Dynamic _handler){
{
		HX_STACK_FRAME("phoenix.Transform","listen_dirty",0x4f43543b,"phoenix.Transform.listen_dirty","phoenix/Transform.hx",425,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(427)
		bool tmp = (this->_dirty_handlers == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(427)
		if ((tmp)){
			HX_STACK_LINE(428)
			this->_dirty_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(431)
		Dynamic tmp1 = _handler;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(431)
		this->_dirty_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,listen_dirty,(void))

bool Transform_obj::unlisten_dirty( Dynamic _handler){
	HX_STACK_FRAME("phoenix.Transform","unlisten_dirty",0x5b453654,"phoenix.Transform.unlisten_dirty","phoenix/Transform.hx",435,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(437)
	bool tmp = (this->_dirty_handlers == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(437)
	if ((tmp)){
		HX_STACK_LINE(438)
		return false;
	}
	HX_STACK_LINE(441)
	Dynamic tmp1 = _handler;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	bool tmp2 = this->_dirty_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(441)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,unlisten_dirty,return )

Void Transform_obj::listen_pos( Dynamic _handler){
{
		HX_STACK_FRAME("phoenix.Transform","listen_pos",0x714bd57d,"phoenix.Transform.listen_pos","phoenix/Transform.hx",445,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(447)
		bool tmp = (this->_pos_handlers == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(447)
		if ((tmp)){
			HX_STACK_LINE(448)
			this->_pos_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(451)
		Dynamic tmp1 = _handler;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(451)
		this->_pos_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,listen_pos,(void))

bool Transform_obj::unlisten_pos( Dynamic _handler){
	HX_STACK_FRAME("phoenix.Transform","unlisten_pos",0x0cb8cf56,"phoenix.Transform.unlisten_pos","phoenix/Transform.hx",455,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(457)
	bool tmp = (this->_pos_handlers == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(457)
	if ((tmp)){
		HX_STACK_LINE(458)
		return false;
	}
	HX_STACK_LINE(461)
	Dynamic tmp1 = _handler;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(461)
	bool tmp2 = this->_pos_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(461)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,unlisten_pos,return )

Void Transform_obj::listen_scale( Dynamic _handler){
{
		HX_STACK_FRAME("phoenix.Transform","listen_scale",0xee41d2b3,"phoenix.Transform.listen_scale","phoenix/Transform.hx",465,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(467)
		bool tmp = (this->_scale_handlers == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(467)
		if ((tmp)){
			HX_STACK_LINE(468)
			this->_scale_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(471)
		Dynamic tmp1 = _handler;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(471)
		this->_scale_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,listen_scale,(void))

bool Transform_obj::unlisten_scale( Dynamic _handler){
	HX_STACK_FRAME("phoenix.Transform","unlisten_scale",0xfa43b4cc,"phoenix.Transform.unlisten_scale","phoenix/Transform.hx",475,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(477)
	bool tmp = (this->_scale_handlers == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(477)
	if ((tmp)){
		HX_STACK_LINE(478)
		return false;
	}
	HX_STACK_LINE(481)
	Dynamic tmp1 = _handler;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(481)
	bool tmp2 = this->_scale_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(481)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,unlisten_scale,return )

Void Transform_obj::listen_rotation( Dynamic _handler){
{
		HX_STACK_FRAME("phoenix.Transform","listen_rotation",0xfce778b5,"phoenix.Transform.listen_rotation","phoenix/Transform.hx",485,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(487)
		bool tmp = (this->_rotation_handlers == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(487)
		if ((tmp)){
			HX_STACK_LINE(488)
			this->_rotation_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(491)
		Dynamic tmp1 = _handler;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(491)
		this->_rotation_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,listen_rotation,(void))

bool Transform_obj::unlisten_rotation( Dynamic _handler){
	HX_STACK_FRAME("phoenix.Transform","unlisten_rotation",0x1a452c3c,"phoenix.Transform.unlisten_rotation","phoenix/Transform.hx",495,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(497)
	bool tmp = (this->_rotation_handlers == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(497)
	if ((tmp)){
		HX_STACK_LINE(498)
		return false;
	}
	HX_STACK_LINE(501)
	Dynamic tmp1 = _handler;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(501)
	bool tmp2 = this->_rotation_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(501)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,unlisten_rotation,return )

Void Transform_obj::listen_origin( Dynamic _handler){
{
		HX_STACK_FRAME("phoenix.Transform","listen_origin",0x9a31b99d,"phoenix.Transform.listen_origin","phoenix/Transform.hx",505,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(507)
		bool tmp = (this->_origin_handlers == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(507)
		if ((tmp)){
			HX_STACK_LINE(508)
			this->_origin_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(511)
		Dynamic tmp1 = _handler;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(511)
		this->_origin_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,listen_origin,(void))

bool Transform_obj::unlisten_origin( Dynamic _handler){
	HX_STACK_FRAME("phoenix.Transform","unlisten_origin",0x0fd5ad64,"phoenix.Transform.unlisten_origin","phoenix/Transform.hx",515,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(517)
	bool tmp = (this->_origin_handlers == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(517)
	if ((tmp)){
		HX_STACK_LINE(518)
		return false;
	}
	HX_STACK_LINE(521)
	Dynamic tmp1 = _handler;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(521)
	bool tmp2 = this->_origin_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(521)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,unlisten_origin,return )

Void Transform_obj::listen_parent( Dynamic _handler){
{
		HX_STACK_FRAME("phoenix.Transform","listen_parent",0x3caea4e1,"phoenix.Transform.listen_parent","phoenix/Transform.hx",525,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(527)
		bool tmp = (this->_parent_handlers == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(527)
		if ((tmp)){
			HX_STACK_LINE(528)
			this->_parent_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(531)
		Dynamic tmp1 = _handler;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(531)
		this->_parent_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,listen_parent,(void))

bool Transform_obj::unlisten_parent( Dynamic _handler){
	HX_STACK_FRAME("phoenix.Transform","unlisten_parent",0xb25298a8,"phoenix.Transform.unlisten_parent","phoenix/Transform.hx",535,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(537)
	bool tmp = (this->_parent_handlers == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(537)
	if ((tmp)){
		HX_STACK_LINE(538)
		return false;
	}
	HX_STACK_LINE(541)
	Dynamic tmp1 = _handler;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(541)
	bool tmp2 = this->_parent_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(541)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,unlisten_parent,return )


Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(local,"local");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(_origin_undo_matrix,"_origin_undo_matrix");
	HX_MARK_MEMBER_NAME(_pos_matrix,"_pos_matrix");
	HX_MARK_MEMBER_NAME(_rotation_matrix,"_rotation_matrix");
	HX_MARK_MEMBER_NAME(_setup,"_setup");
	HX_MARK_MEMBER_NAME(_cleaning,"_cleaning");
	HX_MARK_MEMBER_NAME(_clean_handlers,"_clean_handlers");
	HX_MARK_MEMBER_NAME(_dirty_handlers,"_dirty_handlers");
	HX_MARK_MEMBER_NAME(_pos_handlers,"_pos_handlers");
	HX_MARK_MEMBER_NAME(_rotation_handlers,"_rotation_handlers");
	HX_MARK_MEMBER_NAME(_scale_handlers,"_scale_handlers");
	HX_MARK_MEMBER_NAME(_origin_handlers,"_origin_handlers");
	HX_MARK_MEMBER_NAME(_parent_handlers,"_parent_handlers");
	HX_MARK_MEMBER_NAME(_destroying,"_destroying");
	::luxe::ID_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(local,"local");
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(_origin_undo_matrix,"_origin_undo_matrix");
	HX_VISIT_MEMBER_NAME(_pos_matrix,"_pos_matrix");
	HX_VISIT_MEMBER_NAME(_rotation_matrix,"_rotation_matrix");
	HX_VISIT_MEMBER_NAME(_setup,"_setup");
	HX_VISIT_MEMBER_NAME(_cleaning,"_cleaning");
	HX_VISIT_MEMBER_NAME(_clean_handlers,"_clean_handlers");
	HX_VISIT_MEMBER_NAME(_dirty_handlers,"_dirty_handlers");
	HX_VISIT_MEMBER_NAME(_pos_handlers,"_pos_handlers");
	HX_VISIT_MEMBER_NAME(_rotation_handlers,"_rotation_handlers");
	HX_VISIT_MEMBER_NAME(_scale_handlers,"_scale_handlers");
	HX_VISIT_MEMBER_NAME(_origin_handlers,"_origin_handlers");
	HX_VISIT_MEMBER_NAME(_parent_handlers,"_parent_handlers");
	HX_VISIT_MEMBER_NAME(_destroying,"_destroying");
	::luxe::ID_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Transform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return get_pos(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"local") ) { return inCallProp == hx::paccAlways ? get_local() : local; }
		if (HX_FIELD_EQ(inName,"world") ) { return inCallProp == hx::paccAlways ? get_world() : world; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return get_scale(); }
		if (HX_FIELD_EQ(inName,"clean") ) { return clean_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return inCallProp == hx::paccAlways ? get_parent() : parent; }
		if (HX_FIELD_EQ(inName,"origin") ) { return inCallProp == hx::paccAlways ? get_origin() : origin; }
		if (HX_FIELD_EQ(inName,"_setup") ) { return _setup; }
		if (HX_FIELD_EQ(inName,"listen") ) { return listen_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten") ) { return unlisten_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_cleaning") ) { return _cleaning; }
		if (HX_FIELD_EQ(inName,"set_dirty") ) { return set_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_local") ) { return get_local_dyn(); }
		if (HX_FIELD_EQ(inName,"set_local") ) { return set_local_dyn(); }
		if (HX_FIELD_EQ(inName,"get_world") ) { return get_world_dyn(); }
		if (HX_FIELD_EQ(inName,"set_world") ) { return set_world_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_origin") ) { return get_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_origin") ) { return set_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"listen_pos") ) { return listen_pos_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_pos_matrix") ) { return _pos_matrix; }
		if (HX_FIELD_EQ(inName,"_destroying") ) { return _destroying; }
		if (HX_FIELD_EQ(inName,"clean_check") ) { return clean_check_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"listen_dirty") ) { return listen_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten_pos") ) { return unlisten_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"listen_scale") ) { return listen_scale_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pos_handlers") ) { return _pos_handlers; }
		if (HX_FIELD_EQ(inName,"propagate_pos") ) { return propagate_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"listen_origin") ) { return listen_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"listen_parent") ) { return listen_parent_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unlisten_dirty") ) { return unlisten_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten_scale") ) { return unlisten_scale_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_clean_handlers") ) { return _clean_handlers; }
		if (HX_FIELD_EQ(inName,"_dirty_handlers") ) { return _dirty_handlers; }
		if (HX_FIELD_EQ(inName,"_scale_handlers") ) { return _scale_handlers; }
		if (HX_FIELD_EQ(inName,"propagate_clean") ) { return propagate_clean_dyn(); }
		if (HX_FIELD_EQ(inName,"propagate_dirty") ) { return propagate_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"propagate_scale") ) { return propagate_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"listen_rotation") ) { return listen_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten_origin") ) { return unlisten_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten_parent") ) { return unlisten_parent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rotation_matrix") ) { return _rotation_matrix; }
		if (HX_FIELD_EQ(inName,"_origin_handlers") ) { return _origin_handlers; }
		if (HX_FIELD_EQ(inName,"_parent_handlers") ) { return _parent_handlers; }
		if (HX_FIELD_EQ(inName,"propagate_origin") ) { return propagate_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"propagate_parent") ) { return propagate_parent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"on_parent_cleaned") ) { return on_parent_cleaned_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten_rotation") ) { return unlisten_rotation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_rotation_handlers") ) { return _rotation_handlers; }
		if (HX_FIELD_EQ(inName,"propagate_rotation") ) { return propagate_rotation_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_origin_undo_matrix") ) { return _origin_undo_matrix; }
		if (HX_FIELD_EQ(inName,"on_local_pos_change") ) { return on_local_pos_change_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"on_local_scale_change") ) { return on_local_scale_change_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"on_local_rotation_change") ) { return on_local_rotation_change_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return set_pos(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"local") ) { if (inCallProp == hx::paccAlways) return set_local(inValue);local=inValue.Cast< ::phoenix::Spatial >(); return inValue; }
		if (HX_FIELD_EQ(inName,"world") ) { if (inCallProp == hx::paccAlways) return set_world(inValue);world=inValue.Cast< ::phoenix::Spatial >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { if (inCallProp == hx::paccAlways) return set_dirty(inValue);dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return set_scale(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == hx::paccAlways) return set_parent(inValue);parent=inValue.Cast< ::phoenix::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp == hx::paccAlways) return set_origin(inValue);origin=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setup") ) { _setup=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_cleaning") ) { _cleaning=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_pos_matrix") ) { _pos_matrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_destroying") ) { _destroying=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pos_handlers") ) { _pos_handlers=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_clean_handlers") ) { _clean_handlers=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dirty_handlers") ) { _dirty_handlers=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scale_handlers") ) { _scale_handlers=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rotation_matrix") ) { _rotation_matrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_origin_handlers") ) { _origin_handlers=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parent_handlers") ) { _parent_handlers=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_rotation_handlers") ) { _rotation_handlers=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_origin_undo_matrix") ) { _origin_undo_matrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Transform_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("local","\x6b","\xc9","\xf0","\x78"));
	outFields->push(HX_HCSTRING("world","\x52","\x96","\x64","\xce"));
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("_origin_undo_matrix","\x42","\xdb","\xa9","\xe8"));
	outFields->push(HX_HCSTRING("_pos_matrix","\xeb","\x51","\xb3","\x45"));
	outFields->push(HX_HCSTRING("_rotation_matrix","\xe3","\x90","\xc1","\xa8"));
	outFields->push(HX_HCSTRING("_setup","\xbe","\xf5","\x16","\x76"));
	outFields->push(HX_HCSTRING("_cleaning","\x58","\x6e","\x15","\x76"));
	outFields->push(HX_HCSTRING("_clean_handlers","\xbe","\xf6","\x22","\x81"));
	outFields->push(HX_HCSTRING("_dirty_handlers","\x15","\x7f","\xfc","\x9c"));
	outFields->push(HX_HCSTRING("_pos_handlers","\x93","\xfb","\xcc","\x04"));
	outFields->push(HX_HCSTRING("_rotation_handlers","\x8b","\xe8","\x22","\xf7"));
	outFields->push(HX_HCSTRING("_scale_handlers","\x9d","\x71","\x26","\xf8"));
	outFields->push(HX_HCSTRING("_origin_handlers","\xa3","\xd4","\x14","\xdd"));
	outFields->push(HX_HCSTRING("_parent_handlers","\xdf","\x60","\xea","\x7a"));
	outFields->push(HX_HCSTRING("_destroying","\x47","\x85","\xb6","\x80"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Transform*/ ,(int)offsetof(Transform_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::phoenix::Spatial*/ ,(int)offsetof(Transform_obj,local),HX_HCSTRING("local","\x6b","\xc9","\xf0","\x78")},
	{hx::fsObject /*::phoenix::Spatial*/ ,(int)offsetof(Transform_obj,world),HX_HCSTRING("world","\x52","\x96","\x64","\xce")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Transform_obj,origin),HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b")},
	{hx::fsBool,(int)offsetof(Transform_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Transform_obj,_origin_undo_matrix),HX_HCSTRING("_origin_undo_matrix","\x42","\xdb","\xa9","\xe8")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Transform_obj,_pos_matrix),HX_HCSTRING("_pos_matrix","\xeb","\x51","\xb3","\x45")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Transform_obj,_rotation_matrix),HX_HCSTRING("_rotation_matrix","\xe3","\x90","\xc1","\xa8")},
	{hx::fsBool,(int)offsetof(Transform_obj,_setup),HX_HCSTRING("_setup","\xbe","\xf5","\x16","\x76")},
	{hx::fsBool,(int)offsetof(Transform_obj,_cleaning),HX_HCSTRING("_cleaning","\x58","\x6e","\x15","\x76")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Transform_obj,_clean_handlers),HX_HCSTRING("_clean_handlers","\xbe","\xf6","\x22","\x81")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Transform_obj,_dirty_handlers),HX_HCSTRING("_dirty_handlers","\x15","\x7f","\xfc","\x9c")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Transform_obj,_pos_handlers),HX_HCSTRING("_pos_handlers","\x93","\xfb","\xcc","\x04")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Transform_obj,_rotation_handlers),HX_HCSTRING("_rotation_handlers","\x8b","\xe8","\x22","\xf7")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Transform_obj,_scale_handlers),HX_HCSTRING("_scale_handlers","\x9d","\x71","\x26","\xf8")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Transform_obj,_origin_handlers),HX_HCSTRING("_origin_handlers","\xa3","\xd4","\x14","\xdd")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Transform_obj,_parent_handlers),HX_HCSTRING("_parent_handlers","\xdf","\x60","\xea","\x7a")},
	{hx::fsBool,(int)offsetof(Transform_obj,_destroying),HX_HCSTRING("_destroying","\x47","\x85","\xb6","\x80")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("local","\x6b","\xc9","\xf0","\x78"),
	HX_HCSTRING("world","\x52","\x96","\x64","\xce"),
	HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("_origin_undo_matrix","\x42","\xdb","\xa9","\xe8"),
	HX_HCSTRING("_pos_matrix","\xeb","\x51","\xb3","\x45"),
	HX_HCSTRING("_rotation_matrix","\xe3","\x90","\xc1","\xa8"),
	HX_HCSTRING("_setup","\xbe","\xf5","\x16","\x76"),
	HX_HCSTRING("_cleaning","\x58","\x6e","\x15","\x76"),
	HX_HCSTRING("_clean_handlers","\xbe","\xf6","\x22","\x81"),
	HX_HCSTRING("_dirty_handlers","\x15","\x7f","\xfc","\x9c"),
	HX_HCSTRING("_pos_handlers","\x93","\xfb","\xcc","\x04"),
	HX_HCSTRING("_rotation_handlers","\x8b","\xe8","\x22","\xf7"),
	HX_HCSTRING("_scale_handlers","\x9d","\x71","\x26","\xf8"),
	HX_HCSTRING("_origin_handlers","\xa3","\xd4","\x14","\xdd"),
	HX_HCSTRING("_parent_handlers","\xdf","\x60","\xea","\x7a"),
	HX_HCSTRING("_destroying","\x47","\x85","\xb6","\x80"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_dirty","\x75","\x98","\xca","\x00"),
	HX_HCSTRING("on_local_pos_change","\xef","\xaf","\x99","\x06"),
	HX_HCSTRING("on_local_rotation_change","\x1d","\x85","\x6c","\x46"),
	HX_HCSTRING("on_local_scale_change","\xb9","\xce","\xb2","\x60"),
	HX_HCSTRING("on_parent_cleaned","\x33","\x99","\xea","\x7a"),
	HX_HCSTRING("get_local","\xc2","\x25","\x9a","\xbc"),
	HX_HCSTRING("set_local","\xce","\x11","\xeb","\x9f"),
	HX_HCSTRING("get_world","\xa9","\xf2","\x0d","\x12"),
	HX_HCSTRING("clean_check","\x52","\x9e","\xa0","\xfa"),
	HX_HCSTRING("clean","\x89","\x71","\x5b","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_origin","\xaf","\x89","\x88","\x3b"),
	HX_HCSTRING("set_origin","\x23","\x28","\x06","\x3f"),
	HX_HCSTRING("set_world","\xb5","\xde","\x5e","\xf5"),
	HX_HCSTRING("get_parent","\xf3","\x74","\x05","\xde"),
	HX_HCSTRING("set_parent","\x67","\x13","\x83","\xe1"),
	HX_HCSTRING("get_pos","\x2b","\x26","\xca","\x26"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("get_scale","\xe1","\x2a","\x78","\xbc"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("set_scale","\xed","\x16","\xc9","\x9f"),
	HX_HCSTRING("propagate_clean","\xf3","\x55","\x47","\x98"),
	HX_HCSTRING("propagate_dirty","\x7c","\x34","\xbc","\x29"),
	HX_HCSTRING("propagate_pos","\x7e","\x73","\xe0","\x46"),
	HX_HCSTRING("propagate_rotation","\x14","\x77","\x31","\x38"),
	HX_HCSTRING("propagate_scale","\xf4","\xb2","\xba","\xc8"),
	HX_HCSTRING("propagate_origin","\x3c","\x12","\x7d","\xe9"),
	HX_HCSTRING("propagate_parent","\x80","\xfd","\xf9","\x8b"),
	HX_HCSTRING("listen","\x47","\xc8","\xf9","\xef"),
	HX_HCSTRING("unlisten","\x60","\xf7","\x40","\xf2"),
	HX_HCSTRING("listen_dirty","\xda","\x4e","\xab","\xd3"),
	HX_HCSTRING("unlisten_dirty","\xb3","\x56","\x98","\xc5"),
	HX_HCSTRING("listen_pos","\x5c","\x9a","\x11","\x25"),
	HX_HCSTRING("unlisten_pos","\xf5","\xc9","\x20","\x91"),
	HX_HCSTRING("listen_scale","\x52","\xcd","\xa9","\x72"),
	HX_HCSTRING("unlisten_scale","\x2b","\xd5","\x96","\x64"),
	HX_HCSTRING("listen_rotation","\x76","\xab","\x50","\x9b"),
	HX_HCSTRING("unlisten_rotation","\x3d","\x51","\x71","\x0b"),
	HX_HCSTRING("listen_origin","\x1e","\x0a","\xc5","\xf0"),
	HX_HCSTRING("unlisten_origin","\x25","\xe0","\x3e","\xae"),
	HX_HCSTRING("listen_parent","\x62","\xf5","\x41","\x93"),
	HX_HCSTRING("unlisten_parent","\x69","\xcb","\xbb","\x50"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#endif

hx::Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Transform","\xad","\x7f","\xfc","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Transform_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Transform_obj >;
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
