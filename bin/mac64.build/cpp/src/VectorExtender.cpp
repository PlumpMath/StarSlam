#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_VectorExtender
#include <VectorExtender.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

Void VectorExtender_obj::__construct()
{
	return null();
}

//VectorExtender_obj::~VectorExtender_obj() { }

Dynamic VectorExtender_obj::__CreateEmpty() { return  new VectorExtender_obj; }
hx::ObjectPtr< VectorExtender_obj > VectorExtender_obj::__new()
{  hx::ObjectPtr< VectorExtender_obj > _result_ = new VectorExtender_obj();
	_result_->__construct();
	return _result_;}

Dynamic VectorExtender_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VectorExtender_obj > _result_ = new VectorExtender_obj();
	_result_->__construct();
	return _result_;}

Float VectorExtender_obj::distance( ::phoenix::Vector pos1,::phoenix::Vector pos2){
	HX_STACK_FRAME("VectorExtender","distance",0x6e743759,"VectorExtender.distance","VectorExtender.hx",6,0x3f7b8c34)
	HX_STACK_ARG(pos1,"pos1")
	HX_STACK_ARG(pos2,"pos2")
	HX_STACK_LINE(7)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7)
	{
		HX_STACK_LINE(7)
		Float tmp1 = (pos1->x - pos2->x);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7)
		Float tmp2 = (pos1->y - pos2->y);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7)
		Float tmp3 = (pos1->z - pos2->z);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(7)
		::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(tmp1,tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(7)
		::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(7)
		Float tmp5 = (_this->x * _this->x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(7)
		Float tmp6 = (_this->y * _this->y);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(7)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(7)
		Float tmp8 = (_this->z * _this->z);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(7)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(7)
		tmp = ::Math_obj::sqrt(tmp9);
	}
	HX_STACK_LINE(7)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VectorExtender_obj,distance,return )

Float VectorExtender_obj::cross2D( ::phoenix::Vector v1,::phoenix::Vector v2){
	HX_STACK_FRAME("VectorExtender","cross2D",0x837d97ae,"VectorExtender.cross2D","VectorExtender.hx",10,0x3f7b8c34)
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(v2,"v2")
	HX_STACK_LINE(11)
	Float tmp = (v1->x * v2->y);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Float tmp1 = (v1->y * v2->x);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VectorExtender_obj,cross2D,return )

::phoenix::Vector VectorExtender_obj::toLocalSpace( ::phoenix::Vector v,::phoenix::Transform t){
	HX_STACK_FRAME("VectorExtender","toLocalSpace",0x9442e6da,"VectorExtender.toLocalSpace","VectorExtender.hx",15,0x3f7b8c34)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(16)
	::phoenix::Vector localV;		HX_STACK_VAR(localV,"localV");
	HX_STACK_LINE(17)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(v->x,v->y,v->z,v->w);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(17)
		::phoenix::Matrix tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			::phoenix::Matrix tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				::phoenix::Spatial tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(17)
				{
					HX_STACK_LINE(17)
					bool tmp5 = t->_destroying;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(17)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(17)
					if ((tmp6)){
						HX_STACK_LINE(17)
						bool tmp7 = (t->parent != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(17)
						if ((tmp7)){
							HX_STACK_LINE(17)
							bool tmp8 = t->parent->dirty;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(17)
							if ((tmp8)){
								HX_STACK_LINE(17)
								::phoenix::Transform _this1 = t->parent;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(17)
								bool tmp9 = _this1->dirty;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(17)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(17)
								if ((tmp10)){
									HX_STACK_LINE(17)
									Dynamic();
								}
								else{
									HX_STACK_LINE(17)
									_this1->_cleaning = true;
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										::phoenix::Matrix _this2 = _this1->_pos_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(17)
											e[(int)0] = (int)1;
											HX_STACK_LINE(17)
											e[(int)4] = (int)0;
											HX_STACK_LINE(17)
											e[(int)8] = (int)0;
											HX_STACK_LINE(17)
											::phoenix::Vector tmp11 = _this1->local->pos;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(17)
											Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(17)
											e[(int)12] = tmp12;
											HX_STACK_LINE(17)
											e[(int)1] = (int)0;
											HX_STACK_LINE(17)
											e[(int)5] = (int)1;
											HX_STACK_LINE(17)
											e[(int)9] = (int)0;
											HX_STACK_LINE(17)
											::phoenix::Vector tmp13 = _this1->local->pos;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(17)
											Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(17)
											e[(int)13] = tmp14;
											HX_STACK_LINE(17)
											e[(int)2] = (int)0;
											HX_STACK_LINE(17)
											e[(int)6] = (int)0;
											HX_STACK_LINE(17)
											e[(int)10] = (int)1;
											HX_STACK_LINE(17)
											::phoenix::Vector tmp15 = _this1->local->pos;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(17)
											Float tmp16 = tmp15->z;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(17)
											e[(int)14] = tmp16;
											HX_STACK_LINE(17)
											e[(int)3] = (int)0;
											HX_STACK_LINE(17)
											e[(int)7] = (int)0;
											HX_STACK_LINE(17)
											e[(int)11] = (int)0;
											HX_STACK_LINE(17)
											e[(int)15] = (int)1;
											HX_STACK_LINE(17)
											_this2;
										}
										HX_STACK_LINE(17)
										_this2;
									}
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										::phoenix::Matrix _this2 = _this1->_rotation_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(17)
										::phoenix::Quaternion tmp11 = _this1->local->rotation;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(17)
										::phoenix::Quaternion q = tmp11;		HX_STACK_VAR(q,"q");
										HX_STACK_LINE(17)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(17)
										Float tmp12 = (q->x + q->x);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(17)
										Float x2 = tmp12;		HX_STACK_VAR(x2,"x2");
										HX_STACK_LINE(17)
										Float tmp13 = (q->y + q->y);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(17)
										Float y2 = tmp13;		HX_STACK_VAR(y2,"y2");
										HX_STACK_LINE(17)
										Float tmp14 = (q->z + q->z);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(17)
										Float z2 = tmp14;		HX_STACK_VAR(z2,"z2");
										HX_STACK_LINE(17)
										Float tmp15 = (q->x * x2);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(17)
										Float xx = tmp15;		HX_STACK_VAR(xx,"xx");
										HX_STACK_LINE(17)
										Float tmp16 = (q->x * y2);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(17)
										Float xy = tmp16;		HX_STACK_VAR(xy,"xy");
										HX_STACK_LINE(17)
										Float tmp17 = (q->x * z2);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(17)
										Float xz = tmp17;		HX_STACK_VAR(xz,"xz");
										HX_STACK_LINE(17)
										Float tmp18 = (q->y * y2);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(17)
										Float yy = tmp18;		HX_STACK_VAR(yy,"yy");
										HX_STACK_LINE(17)
										Float tmp19 = (q->y * z2);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(17)
										Float yz = tmp19;		HX_STACK_VAR(yz,"yz");
										HX_STACK_LINE(17)
										Float tmp20 = (q->z * z2);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(17)
										Float zz = tmp20;		HX_STACK_VAR(zz,"zz");
										HX_STACK_LINE(17)
										Float tmp21 = (q->w * x2);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(17)
										Float wx = tmp21;		HX_STACK_VAR(wx,"wx");
										HX_STACK_LINE(17)
										Float tmp22 = (q->w * y2);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(17)
										Float wy = tmp22;		HX_STACK_VAR(wy,"wy");
										HX_STACK_LINE(17)
										Float tmp23 = (q->w * z2);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(17)
										Float wz = tmp23;		HX_STACK_VAR(wz,"wz");
										HX_STACK_LINE(17)
										Float tmp24 = (yy + zz);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(17)
										Float tmp25 = ((int)1 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(17)
										te[(int)0] = tmp25;
										HX_STACK_LINE(17)
										Float tmp26 = (xy - wz);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(17)
										te[(int)4] = tmp26;
										HX_STACK_LINE(17)
										Float tmp27 = (xz + wy);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(17)
										te[(int)8] = tmp27;
										HX_STACK_LINE(17)
										Float tmp28 = (xy + wz);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(17)
										te[(int)1] = tmp28;
										HX_STACK_LINE(17)
										Float tmp29 = (xx + zz);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(17)
										Float tmp30 = ((int)1 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(17)
										te[(int)5] = tmp30;
										HX_STACK_LINE(17)
										Float tmp31 = (yz - wx);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(17)
										te[(int)9] = tmp31;
										HX_STACK_LINE(17)
										Float tmp32 = (xz - wy);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(17)
										te[(int)2] = tmp32;
										HX_STACK_LINE(17)
										Float tmp33 = (yz + wx);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(17)
										te[(int)6] = tmp33;
										HX_STACK_LINE(17)
										Float tmp34 = (xx + yy);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(17)
										Float tmp35 = ((int)1 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(17)
										te[(int)10] = tmp35;
										HX_STACK_LINE(17)
										te[(int)3] = (int)0;
										HX_STACK_LINE(17)
										te[(int)7] = (int)0;
										HX_STACK_LINE(17)
										te[(int)11] = (int)0;
										HX_STACK_LINE(17)
										te[(int)12] = (int)0;
										HX_STACK_LINE(17)
										te[(int)13] = (int)0;
										HX_STACK_LINE(17)
										te[(int)14] = (int)0;
										HX_STACK_LINE(17)
										te[(int)15] = (int)1;
										HX_STACK_LINE(17)
										_this2;
									}
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										::phoenix::Matrix _this2 = _this1->_origin_undo_matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(17)
											e[(int)0] = (int)1;
											HX_STACK_LINE(17)
											e[(int)4] = (int)0;
											HX_STACK_LINE(17)
											e[(int)8] = (int)0;
											HX_STACK_LINE(17)
											Float tmp11 = _this1->origin->x;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(17)
											Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(17)
											e[(int)12] = tmp12;
											HX_STACK_LINE(17)
											e[(int)1] = (int)0;
											HX_STACK_LINE(17)
											e[(int)5] = (int)1;
											HX_STACK_LINE(17)
											e[(int)9] = (int)0;
											HX_STACK_LINE(17)
											Float tmp13 = _this1->origin->y;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(17)
											Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(17)
											e[(int)13] = tmp14;
											HX_STACK_LINE(17)
											e[(int)2] = (int)0;
											HX_STACK_LINE(17)
											e[(int)6] = (int)0;
											HX_STACK_LINE(17)
											e[(int)10] = (int)1;
											HX_STACK_LINE(17)
											Float tmp15 = _this1->origin->z;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(17)
											Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(17)
											e[(int)14] = tmp16;
											HX_STACK_LINE(17)
											e[(int)3] = (int)0;
											HX_STACK_LINE(17)
											e[(int)7] = (int)0;
											HX_STACK_LINE(17)
											e[(int)11] = (int)0;
											HX_STACK_LINE(17)
											e[(int)15] = (int)1;
											HX_STACK_LINE(17)
											_this2;
										}
										HX_STACK_LINE(17)
										_this2;
									}
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										::phoenix::Matrix tmp11 = _this1->local->matrix;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(17)
										::phoenix::Matrix _this2 = tmp11;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(17)
											e[(int)0] = (int)1;
											HX_STACK_LINE(17)
											e[(int)4] = (int)0;
											HX_STACK_LINE(17)
											e[(int)8] = (int)0;
											HX_STACK_LINE(17)
											Float tmp12 = _this1->origin->x;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(17)
											e[(int)12] = tmp12;
											HX_STACK_LINE(17)
											e[(int)1] = (int)0;
											HX_STACK_LINE(17)
											e[(int)5] = (int)1;
											HX_STACK_LINE(17)
											e[(int)9] = (int)0;
											HX_STACK_LINE(17)
											Float tmp13 = _this1->origin->y;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(17)
											e[(int)13] = tmp13;
											HX_STACK_LINE(17)
											e[(int)2] = (int)0;
											HX_STACK_LINE(17)
											e[(int)6] = (int)0;
											HX_STACK_LINE(17)
											e[(int)10] = (int)1;
											HX_STACK_LINE(17)
											Float tmp14 = _this1->origin->z;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(17)
											e[(int)14] = tmp14;
											HX_STACK_LINE(17)
											e[(int)3] = (int)0;
											HX_STACK_LINE(17)
											e[(int)7] = (int)0;
											HX_STACK_LINE(17)
											e[(int)11] = (int)0;
											HX_STACK_LINE(17)
											e[(int)15] = (int)1;
											HX_STACK_LINE(17)
											_this2;
										}
										HX_STACK_LINE(17)
										_this2;
									}
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										::phoenix::Matrix tmp11 = _this1->local->matrix;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(17)
										::phoenix::Matrix _this2 = tmp11;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(17)
											Array< Float > be = _this1->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(17)
											Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(17)
											Float tmp12 = ae->__get((int)0);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(17)
											Float a11 = tmp12;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(17)
											Float tmp13 = ae->__get((int)4);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(17)
											Float a12 = tmp13;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(17)
											Float tmp14 = ae->__get((int)8);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(17)
											Float a13 = tmp14;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(17)
											Float tmp15 = ae->__get((int)12);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(17)
											Float a14 = tmp15;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(17)
											Float tmp16 = ae->__get((int)1);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(17)
											Float a21 = tmp16;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(17)
											Float tmp17 = ae->__get((int)5);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(17)
											Float a22 = tmp17;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(17)
											Float tmp18 = ae->__get((int)9);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(17)
											Float a23 = tmp18;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(17)
											Float tmp19 = ae->__get((int)13);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(17)
											Float a24 = tmp19;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(17)
											Float tmp20 = ae->__get((int)2);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(17)
											Float a31 = tmp20;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(17)
											Float tmp21 = ae->__get((int)6);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(17)
											Float a32 = tmp21;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(17)
											Float tmp22 = ae->__get((int)10);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(17)
											Float a33 = tmp22;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(17)
											Float tmp23 = ae->__get((int)14);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(17)
											Float a34 = tmp23;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(17)
											Float tmp24 = ae->__get((int)3);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(17)
											Float a41 = tmp24;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(17)
											Float tmp25 = ae->__get((int)7);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(17)
											Float a42 = tmp25;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(17)
											Float tmp26 = ae->__get((int)11);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(17)
											Float a43 = tmp26;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(17)
											Float tmp27 = ae->__get((int)15);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(17)
											Float a44 = tmp27;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(17)
											Float tmp28 = be->__get((int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(17)
											Float b11 = tmp28;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(17)
											Float tmp29 = be->__get((int)4);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(17)
											Float b12 = tmp29;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(17)
											Float tmp30 = be->__get((int)8);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(17)
											Float b13 = tmp30;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(17)
											Float tmp31 = be->__get((int)12);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(17)
											Float b14 = tmp31;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(17)
											Float tmp32 = be->__get((int)1);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(17)
											Float b21 = tmp32;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(17)
											Float tmp33 = be->__get((int)5);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(17)
											Float b22 = tmp33;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(17)
											Float tmp34 = be->__get((int)9);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(17)
											Float b23 = tmp34;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(17)
											Float tmp35 = be->__get((int)13);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(17)
											Float b24 = tmp35;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(17)
											Float tmp36 = be->__get((int)2);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(17)
											Float b31 = tmp36;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(17)
											Float tmp37 = be->__get((int)6);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(17)
											Float b32 = tmp37;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(17)
											Float tmp38 = be->__get((int)10);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(17)
											Float b33 = tmp38;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(17)
											Float tmp39 = be->__get((int)14);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(17)
											Float b34 = tmp39;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(17)
											Float tmp40 = be->__get((int)3);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(17)
											Float b41 = tmp40;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(17)
											Float tmp41 = be->__get((int)7);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(17)
											Float b42 = tmp41;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(17)
											Float tmp42 = be->__get((int)11);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(17)
											Float b43 = tmp42;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(17)
											Float tmp43 = be->__get((int)15);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(17)
											Float b44 = tmp43;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(17)
											Float tmp44 = (a11 * b11);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(17)
											Float tmp45 = (a12 * b21);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(17)
											Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(17)
											Float tmp47 = (a13 * b31);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(17)
											Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(17)
											Float tmp49 = (a14 * b41);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(17)
											Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(17)
											te[(int)0] = tmp50;
											HX_STACK_LINE(17)
											Float tmp51 = (a11 * b12);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(17)
											Float tmp52 = (a12 * b22);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(17)
											Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(17)
											Float tmp54 = (a13 * b32);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(17)
											Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(17)
											Float tmp56 = (a14 * b42);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(17)
											Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(17)
											te[(int)4] = tmp57;
											HX_STACK_LINE(17)
											Float tmp58 = (a11 * b13);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(17)
											Float tmp59 = (a12 * b23);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(17)
											Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(17)
											Float tmp61 = (a13 * b33);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(17)
											Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(17)
											Float tmp63 = (a14 * b43);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(17)
											Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(17)
											te[(int)8] = tmp64;
											HX_STACK_LINE(17)
											Float tmp65 = (a11 * b14);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(17)
											Float tmp66 = (a12 * b24);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(17)
											Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(17)
											Float tmp68 = (a13 * b34);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(17)
											Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(17)
											Float tmp70 = (a14 * b44);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(17)
											Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(17)
											te[(int)12] = tmp71;
											HX_STACK_LINE(17)
											Float tmp72 = (a21 * b11);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(17)
											Float tmp73 = (a22 * b21);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(17)
											Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(17)
											Float tmp75 = (a23 * b31);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(17)
											Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(17)
											Float tmp77 = (a24 * b41);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(17)
											Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(17)
											te[(int)1] = tmp78;
											HX_STACK_LINE(17)
											Float tmp79 = (a21 * b12);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(17)
											Float tmp80 = (a22 * b22);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(17)
											Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(17)
											Float tmp82 = (a23 * b32);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(17)
											Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(17)
											Float tmp84 = (a24 * b42);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(17)
											Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(17)
											te[(int)5] = tmp85;
											HX_STACK_LINE(17)
											Float tmp86 = (a21 * b13);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(17)
											Float tmp87 = (a22 * b23);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(17)
											Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(17)
											Float tmp89 = (a23 * b33);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(17)
											Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(17)
											Float tmp91 = (a24 * b43);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(17)
											Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(17)
											te[(int)9] = tmp92;
											HX_STACK_LINE(17)
											Float tmp93 = (a21 * b14);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(17)
											Float tmp94 = (a22 * b24);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(17)
											Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(17)
											Float tmp96 = (a23 * b34);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(17)
											Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(17)
											Float tmp98 = (a24 * b44);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(17)
											Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(17)
											te[(int)13] = tmp99;
											HX_STACK_LINE(17)
											Float tmp100 = (a31 * b11);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(17)
											Float tmp101 = (a32 * b21);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(17)
											Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(17)
											Float tmp103 = (a33 * b31);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(17)
											Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(17)
											Float tmp105 = (a34 * b41);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(17)
											Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(17)
											te[(int)2] = tmp106;
											HX_STACK_LINE(17)
											Float tmp107 = (a31 * b12);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(17)
											Float tmp108 = (a32 * b22);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(17)
											Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(17)
											Float tmp110 = (a33 * b32);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(17)
											Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(17)
											Float tmp112 = (a34 * b42);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(17)
											Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(17)
											te[(int)6] = tmp113;
											HX_STACK_LINE(17)
											Float tmp114 = (a31 * b13);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(17)
											Float tmp115 = (a32 * b23);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(17)
											Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(17)
											Float tmp117 = (a33 * b33);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(17)
											Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(17)
											Float tmp119 = (a34 * b43);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(17)
											Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(17)
											te[(int)10] = tmp120;
											HX_STACK_LINE(17)
											Float tmp121 = (a31 * b14);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(17)
											Float tmp122 = (a32 * b24);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(17)
											Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(17)
											Float tmp124 = (a33 * b34);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(17)
											Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(17)
											Float tmp126 = (a34 * b44);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(17)
											Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(17)
											te[(int)14] = tmp127;
											HX_STACK_LINE(17)
											Float tmp128 = (a41 * b11);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(17)
											Float tmp129 = (a42 * b21);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(17)
											Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(17)
											Float tmp131 = (a43 * b31);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(17)
											Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(17)
											Float tmp133 = (a44 * b41);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(17)
											Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(17)
											te[(int)3] = tmp134;
											HX_STACK_LINE(17)
											Float tmp135 = (a41 * b12);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(17)
											Float tmp136 = (a42 * b22);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(17)
											Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(17)
											Float tmp138 = (a43 * b32);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(17)
											Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(17)
											Float tmp140 = (a44 * b42);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(17)
											Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(17)
											te[(int)7] = tmp141;
											HX_STACK_LINE(17)
											Float tmp142 = (a41 * b13);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(17)
											Float tmp143 = (a42 * b23);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(17)
											Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(17)
											Float tmp145 = (a43 * b33);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(17)
											Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(17)
											Float tmp147 = (a44 * b43);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(17)
											Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(17)
											te[(int)11] = tmp148;
											HX_STACK_LINE(17)
											Float tmp149 = (a41 * b14);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(17)
											Float tmp150 = (a42 * b24);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(17)
											Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(17)
											Float tmp152 = (a43 * b34);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(17)
											Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(17)
											Float tmp154 = (a44 * b44);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(17)
											Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(17)
											te[(int)15] = tmp155;
											HX_STACK_LINE(17)
											_this2;
										}
									}
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										::phoenix::Matrix tmp11 = _this1->local->matrix;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(17)
										::phoenix::Matrix _this2 = tmp11;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(17)
										::phoenix::Vector tmp12 = _this1->local->scale;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(17)
										::phoenix::Vector _v = tmp12;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(17)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(17)
										Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
										HX_STACK_LINE(17)
										Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
										HX_STACK_LINE(17)
										Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
										HX_STACK_LINE(17)
										Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(17)
										hx::MultEq(te[(int)0],tmp13);
										HX_STACK_LINE(17)
										Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(17)
										hx::MultEq(te[(int)4],tmp14);
										HX_STACK_LINE(17)
										Float tmp15 = _z;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(17)
										hx::MultEq(te[(int)8],tmp15);
										HX_STACK_LINE(17)
										Float tmp16 = _x;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(17)
										hx::MultEq(te[(int)1],tmp16);
										HX_STACK_LINE(17)
										Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(17)
										hx::MultEq(te[(int)5],tmp17);
										HX_STACK_LINE(17)
										Float tmp18 = _z;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(17)
										hx::MultEq(te[(int)9],tmp18);
										HX_STACK_LINE(17)
										Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(17)
										hx::MultEq(te[(int)2],tmp19);
										HX_STACK_LINE(17)
										Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(17)
										hx::MultEq(te[(int)6],tmp20);
										HX_STACK_LINE(17)
										Float tmp21 = _z;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(17)
										hx::MultEq(te[(int)10],tmp21);
										HX_STACK_LINE(17)
										Float tmp22 = _x;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(17)
										hx::MultEq(te[(int)3],tmp22);
										HX_STACK_LINE(17)
										Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(17)
										hx::MultEq(te[(int)7],tmp23);
										HX_STACK_LINE(17)
										Float tmp24 = _z;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(17)
										hx::MultEq(te[(int)11],tmp24);
										HX_STACK_LINE(17)
										_this2;
									}
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										::phoenix::Matrix tmp11 = _this1->local->matrix;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(17)
										::phoenix::Matrix _this2 = tmp11;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(17)
										::phoenix::Vector tmp12 = _this1->local->pos;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(17)
										::phoenix::Vector _v = tmp12;		HX_STACK_VAR(_v,"_v");
										HX_STACK_LINE(17)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(17)
										Float tmp13 = _v->x;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(17)
										te[(int)12] = tmp13;
										HX_STACK_LINE(17)
										Float tmp14 = _v->y;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(17)
										te[(int)13] = tmp14;
										HX_STACK_LINE(17)
										Float tmp15 = _v->z;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(17)
										te[(int)14] = tmp15;
										HX_STACK_LINE(17)
										_this2;
									}
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										::phoenix::Matrix tmp11 = _this1->local->matrix;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(17)
										::phoenix::Matrix _this2 = tmp11;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(17)
											Array< Float > be = _this1->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(17)
											Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(17)
											Float tmp12 = ae->__get((int)0);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(17)
											Float a11 = tmp12;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(17)
											Float tmp13 = ae->__get((int)4);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(17)
											Float a12 = tmp13;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(17)
											Float tmp14 = ae->__get((int)8);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(17)
											Float a13 = tmp14;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(17)
											Float tmp15 = ae->__get((int)12);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(17)
											Float a14 = tmp15;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(17)
											Float tmp16 = ae->__get((int)1);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(17)
											Float a21 = tmp16;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(17)
											Float tmp17 = ae->__get((int)5);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(17)
											Float a22 = tmp17;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(17)
											Float tmp18 = ae->__get((int)9);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(17)
											Float a23 = tmp18;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(17)
											Float tmp19 = ae->__get((int)13);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(17)
											Float a24 = tmp19;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(17)
											Float tmp20 = ae->__get((int)2);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(17)
											Float a31 = tmp20;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(17)
											Float tmp21 = ae->__get((int)6);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(17)
											Float a32 = tmp21;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(17)
											Float tmp22 = ae->__get((int)10);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(17)
											Float a33 = tmp22;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(17)
											Float tmp23 = ae->__get((int)14);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(17)
											Float a34 = tmp23;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(17)
											Float tmp24 = ae->__get((int)3);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(17)
											Float a41 = tmp24;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(17)
											Float tmp25 = ae->__get((int)7);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(17)
											Float a42 = tmp25;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(17)
											Float tmp26 = ae->__get((int)11);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(17)
											Float a43 = tmp26;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(17)
											Float tmp27 = ae->__get((int)15);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(17)
											Float a44 = tmp27;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(17)
											Float tmp28 = be->__get((int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(17)
											Float b11 = tmp28;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(17)
											Float tmp29 = be->__get((int)4);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(17)
											Float b12 = tmp29;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(17)
											Float tmp30 = be->__get((int)8);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(17)
											Float b13 = tmp30;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(17)
											Float tmp31 = be->__get((int)12);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(17)
											Float b14 = tmp31;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(17)
											Float tmp32 = be->__get((int)1);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(17)
											Float b21 = tmp32;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(17)
											Float tmp33 = be->__get((int)5);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(17)
											Float b22 = tmp33;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(17)
											Float tmp34 = be->__get((int)9);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(17)
											Float b23 = tmp34;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(17)
											Float tmp35 = be->__get((int)13);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(17)
											Float b24 = tmp35;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(17)
											Float tmp36 = be->__get((int)2);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(17)
											Float b31 = tmp36;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(17)
											Float tmp37 = be->__get((int)6);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(17)
											Float b32 = tmp37;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(17)
											Float tmp38 = be->__get((int)10);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(17)
											Float b33 = tmp38;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(17)
											Float tmp39 = be->__get((int)14);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(17)
											Float b34 = tmp39;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(17)
											Float tmp40 = be->__get((int)3);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(17)
											Float b41 = tmp40;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(17)
											Float tmp41 = be->__get((int)7);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(17)
											Float b42 = tmp41;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(17)
											Float tmp42 = be->__get((int)11);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(17)
											Float b43 = tmp42;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(17)
											Float tmp43 = be->__get((int)15);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(17)
											Float b44 = tmp43;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(17)
											Float tmp44 = (a11 * b11);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(17)
											Float tmp45 = (a12 * b21);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(17)
											Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(17)
											Float tmp47 = (a13 * b31);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(17)
											Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(17)
											Float tmp49 = (a14 * b41);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(17)
											Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(17)
											te[(int)0] = tmp50;
											HX_STACK_LINE(17)
											Float tmp51 = (a11 * b12);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(17)
											Float tmp52 = (a12 * b22);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(17)
											Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(17)
											Float tmp54 = (a13 * b32);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(17)
											Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(17)
											Float tmp56 = (a14 * b42);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(17)
											Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(17)
											te[(int)4] = tmp57;
											HX_STACK_LINE(17)
											Float tmp58 = (a11 * b13);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(17)
											Float tmp59 = (a12 * b23);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(17)
											Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(17)
											Float tmp61 = (a13 * b33);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(17)
											Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(17)
											Float tmp63 = (a14 * b43);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(17)
											Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(17)
											te[(int)8] = tmp64;
											HX_STACK_LINE(17)
											Float tmp65 = (a11 * b14);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(17)
											Float tmp66 = (a12 * b24);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(17)
											Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(17)
											Float tmp68 = (a13 * b34);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(17)
											Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(17)
											Float tmp70 = (a14 * b44);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(17)
											Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(17)
											te[(int)12] = tmp71;
											HX_STACK_LINE(17)
											Float tmp72 = (a21 * b11);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(17)
											Float tmp73 = (a22 * b21);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(17)
											Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(17)
											Float tmp75 = (a23 * b31);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(17)
											Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(17)
											Float tmp77 = (a24 * b41);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(17)
											Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(17)
											te[(int)1] = tmp78;
											HX_STACK_LINE(17)
											Float tmp79 = (a21 * b12);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(17)
											Float tmp80 = (a22 * b22);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(17)
											Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(17)
											Float tmp82 = (a23 * b32);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(17)
											Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(17)
											Float tmp84 = (a24 * b42);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(17)
											Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(17)
											te[(int)5] = tmp85;
											HX_STACK_LINE(17)
											Float tmp86 = (a21 * b13);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(17)
											Float tmp87 = (a22 * b23);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(17)
											Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(17)
											Float tmp89 = (a23 * b33);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(17)
											Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(17)
											Float tmp91 = (a24 * b43);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(17)
											Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(17)
											te[(int)9] = tmp92;
											HX_STACK_LINE(17)
											Float tmp93 = (a21 * b14);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(17)
											Float tmp94 = (a22 * b24);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(17)
											Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(17)
											Float tmp96 = (a23 * b34);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(17)
											Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(17)
											Float tmp98 = (a24 * b44);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(17)
											Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(17)
											te[(int)13] = tmp99;
											HX_STACK_LINE(17)
											Float tmp100 = (a31 * b11);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(17)
											Float tmp101 = (a32 * b21);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(17)
											Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(17)
											Float tmp103 = (a33 * b31);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(17)
											Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(17)
											Float tmp105 = (a34 * b41);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(17)
											Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(17)
											te[(int)2] = tmp106;
											HX_STACK_LINE(17)
											Float tmp107 = (a31 * b12);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(17)
											Float tmp108 = (a32 * b22);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(17)
											Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(17)
											Float tmp110 = (a33 * b32);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(17)
											Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(17)
											Float tmp112 = (a34 * b42);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(17)
											Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(17)
											te[(int)6] = tmp113;
											HX_STACK_LINE(17)
											Float tmp114 = (a31 * b13);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(17)
											Float tmp115 = (a32 * b23);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(17)
											Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(17)
											Float tmp117 = (a33 * b33);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(17)
											Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(17)
											Float tmp119 = (a34 * b43);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(17)
											Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(17)
											te[(int)10] = tmp120;
											HX_STACK_LINE(17)
											Float tmp121 = (a31 * b14);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(17)
											Float tmp122 = (a32 * b24);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(17)
											Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(17)
											Float tmp124 = (a33 * b34);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(17)
											Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(17)
											Float tmp126 = (a34 * b44);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(17)
											Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(17)
											te[(int)14] = tmp127;
											HX_STACK_LINE(17)
											Float tmp128 = (a41 * b11);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(17)
											Float tmp129 = (a42 * b21);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(17)
											Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(17)
											Float tmp131 = (a43 * b31);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(17)
											Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(17)
											Float tmp133 = (a44 * b41);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(17)
											Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(17)
											te[(int)3] = tmp134;
											HX_STACK_LINE(17)
											Float tmp135 = (a41 * b12);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(17)
											Float tmp136 = (a42 * b22);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(17)
											Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(17)
											Float tmp138 = (a43 * b32);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(17)
											Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(17)
											Float tmp140 = (a44 * b42);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(17)
											Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(17)
											te[(int)7] = tmp141;
											HX_STACK_LINE(17)
											Float tmp142 = (a41 * b13);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(17)
											Float tmp143 = (a42 * b23);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(17)
											Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(17)
											Float tmp145 = (a43 * b33);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(17)
											Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(17)
											Float tmp147 = (a44 * b43);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(17)
											Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(17)
											te[(int)11] = tmp148;
											HX_STACK_LINE(17)
											Float tmp149 = (a41 * b14);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(17)
											Float tmp150 = (a42 * b24);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(17)
											Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(17)
											Float tmp152 = (a43 * b34);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(17)
											Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(17)
											Float tmp154 = (a44 * b44);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(17)
											Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(17)
											te[(int)15] = tmp155;
											HX_STACK_LINE(17)
											_this2;
										}
									}
									HX_STACK_LINE(17)
									bool tmp11 = (_this1->parent != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(17)
									if ((tmp11)){
										HX_STACK_LINE(17)
										::phoenix::Spatial tmp12 = _this1->get_world();		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(17)
										::phoenix::Spatial _this2 = tmp12;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(17)
										::phoenix::Matrix tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											::phoenix::Matrix tmp14;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(17)
											{
												HX_STACK_LINE(17)
												::phoenix::Spatial tmp15 = _this1->get_world();		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(17)
												::phoenix::Spatial _this3 = tmp15;		HX_STACK_VAR(_this3,"_this3");
												HX_STACK_LINE(17)
												tmp14 = _this3->matrix;
											}
											HX_STACK_LINE(17)
											::phoenix::Matrix _this3 = tmp14;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(17)
											::phoenix::Matrix tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(17)
											{
												HX_STACK_LINE(17)
												::phoenix::Spatial tmp16 = _this1->parent->get_world();		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(17)
												::phoenix::Spatial _this4 = tmp16;		HX_STACK_VAR(_this4,"_this4");
												HX_STACK_LINE(17)
												tmp15 = _this4->matrix;
											}
											HX_STACK_LINE(17)
											::phoenix::Matrix _a = tmp15;		HX_STACK_VAR(_a,"_a");
											HX_STACK_LINE(17)
											Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
											HX_STACK_LINE(17)
											::phoenix::Matrix tmp16 = _this1->local->matrix;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(17)
											Array< Float > be = tmp16->elements;		HX_STACK_VAR(be,"be");
											HX_STACK_LINE(17)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(17)
											Float tmp17 = ae->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(17)
											Float a11 = tmp17;		HX_STACK_VAR(a11,"a11");
											HX_STACK_LINE(17)
											Float tmp18 = ae->__get((int)4);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(17)
											Float a12 = tmp18;		HX_STACK_VAR(a12,"a12");
											HX_STACK_LINE(17)
											Float tmp19 = ae->__get((int)8);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(17)
											Float a13 = tmp19;		HX_STACK_VAR(a13,"a13");
											HX_STACK_LINE(17)
											Float tmp20 = ae->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(17)
											Float a14 = tmp20;		HX_STACK_VAR(a14,"a14");
											HX_STACK_LINE(17)
											Float tmp21 = ae->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(17)
											Float a21 = tmp21;		HX_STACK_VAR(a21,"a21");
											HX_STACK_LINE(17)
											Float tmp22 = ae->__get((int)5);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(17)
											Float a22 = tmp22;		HX_STACK_VAR(a22,"a22");
											HX_STACK_LINE(17)
											Float tmp23 = ae->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(17)
											Float a23 = tmp23;		HX_STACK_VAR(a23,"a23");
											HX_STACK_LINE(17)
											Float tmp24 = ae->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(17)
											Float a24 = tmp24;		HX_STACK_VAR(a24,"a24");
											HX_STACK_LINE(17)
											Float tmp25 = ae->__get((int)2);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(17)
											Float a31 = tmp25;		HX_STACK_VAR(a31,"a31");
											HX_STACK_LINE(17)
											Float tmp26 = ae->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(17)
											Float a32 = tmp26;		HX_STACK_VAR(a32,"a32");
											HX_STACK_LINE(17)
											Float tmp27 = ae->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(17)
											Float a33 = tmp27;		HX_STACK_VAR(a33,"a33");
											HX_STACK_LINE(17)
											Float tmp28 = ae->__get((int)14);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(17)
											Float a34 = tmp28;		HX_STACK_VAR(a34,"a34");
											HX_STACK_LINE(17)
											Float tmp29 = ae->__get((int)3);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(17)
											Float a41 = tmp29;		HX_STACK_VAR(a41,"a41");
											HX_STACK_LINE(17)
											Float tmp30 = ae->__get((int)7);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(17)
											Float a42 = tmp30;		HX_STACK_VAR(a42,"a42");
											HX_STACK_LINE(17)
											Float tmp31 = ae->__get((int)11);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(17)
											Float a43 = tmp31;		HX_STACK_VAR(a43,"a43");
											HX_STACK_LINE(17)
											Float tmp32 = ae->__get((int)15);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(17)
											Float a44 = tmp32;		HX_STACK_VAR(a44,"a44");
											HX_STACK_LINE(17)
											Float tmp33 = be->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(17)
											Float b11 = tmp33;		HX_STACK_VAR(b11,"b11");
											HX_STACK_LINE(17)
											Float tmp34 = be->__get((int)4);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(17)
											Float b12 = tmp34;		HX_STACK_VAR(b12,"b12");
											HX_STACK_LINE(17)
											Float tmp35 = be->__get((int)8);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(17)
											Float b13 = tmp35;		HX_STACK_VAR(b13,"b13");
											HX_STACK_LINE(17)
											Float tmp36 = be->__get((int)12);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(17)
											Float b14 = tmp36;		HX_STACK_VAR(b14,"b14");
											HX_STACK_LINE(17)
											Float tmp37 = be->__get((int)1);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(17)
											Float b21 = tmp37;		HX_STACK_VAR(b21,"b21");
											HX_STACK_LINE(17)
											Float tmp38 = be->__get((int)5);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(17)
											Float b22 = tmp38;		HX_STACK_VAR(b22,"b22");
											HX_STACK_LINE(17)
											Float tmp39 = be->__get((int)9);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(17)
											Float b23 = tmp39;		HX_STACK_VAR(b23,"b23");
											HX_STACK_LINE(17)
											Float tmp40 = be->__get((int)13);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(17)
											Float b24 = tmp40;		HX_STACK_VAR(b24,"b24");
											HX_STACK_LINE(17)
											Float tmp41 = be->__get((int)2);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(17)
											Float b31 = tmp41;		HX_STACK_VAR(b31,"b31");
											HX_STACK_LINE(17)
											Float tmp42 = be->__get((int)6);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(17)
											Float b32 = tmp42;		HX_STACK_VAR(b32,"b32");
											HX_STACK_LINE(17)
											Float tmp43 = be->__get((int)10);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(17)
											Float b33 = tmp43;		HX_STACK_VAR(b33,"b33");
											HX_STACK_LINE(17)
											Float tmp44 = be->__get((int)14);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(17)
											Float b34 = tmp44;		HX_STACK_VAR(b34,"b34");
											HX_STACK_LINE(17)
											Float tmp45 = be->__get((int)3);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(17)
											Float b41 = tmp45;		HX_STACK_VAR(b41,"b41");
											HX_STACK_LINE(17)
											Float tmp46 = be->__get((int)7);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(17)
											Float b42 = tmp46;		HX_STACK_VAR(b42,"b42");
											HX_STACK_LINE(17)
											Float tmp47 = be->__get((int)11);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(17)
											Float b43 = tmp47;		HX_STACK_VAR(b43,"b43");
											HX_STACK_LINE(17)
											Float tmp48 = be->__get((int)15);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(17)
											Float b44 = tmp48;		HX_STACK_VAR(b44,"b44");
											HX_STACK_LINE(17)
											Float tmp49 = (a11 * b11);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(17)
											Float tmp50 = (a12 * b21);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(17)
											Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(17)
											Float tmp52 = (a13 * b31);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(17)
											Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(17)
											Float tmp54 = (a14 * b41);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(17)
											Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(17)
											te[(int)0] = tmp55;
											HX_STACK_LINE(17)
											Float tmp56 = (a11 * b12);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(17)
											Float tmp57 = (a12 * b22);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(17)
											Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(17)
											Float tmp59 = (a13 * b32);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(17)
											Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(17)
											Float tmp61 = (a14 * b42);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(17)
											Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(17)
											te[(int)4] = tmp62;
											HX_STACK_LINE(17)
											Float tmp63 = (a11 * b13);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(17)
											Float tmp64 = (a12 * b23);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(17)
											Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(17)
											Float tmp66 = (a13 * b33);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(17)
											Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(17)
											Float tmp68 = (a14 * b43);		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(17)
											Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(17)
											te[(int)8] = tmp69;
											HX_STACK_LINE(17)
											Float tmp70 = (a11 * b14);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(17)
											Float tmp71 = (a12 * b24);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(17)
											Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(17)
											Float tmp73 = (a13 * b34);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(17)
											Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(17)
											Float tmp75 = (a14 * b44);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(17)
											Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(17)
											te[(int)12] = tmp76;
											HX_STACK_LINE(17)
											Float tmp77 = (a21 * b11);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(17)
											Float tmp78 = (a22 * b21);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(17)
											Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(17)
											Float tmp80 = (a23 * b31);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(17)
											Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(17)
											Float tmp82 = (a24 * b41);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(17)
											Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(17)
											te[(int)1] = tmp83;
											HX_STACK_LINE(17)
											Float tmp84 = (a21 * b12);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(17)
											Float tmp85 = (a22 * b22);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(17)
											Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(17)
											Float tmp87 = (a23 * b32);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(17)
											Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(17)
											Float tmp89 = (a24 * b42);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(17)
											Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(17)
											te[(int)5] = tmp90;
											HX_STACK_LINE(17)
											Float tmp91 = (a21 * b13);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(17)
											Float tmp92 = (a22 * b23);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(17)
											Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(17)
											Float tmp94 = (a23 * b33);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(17)
											Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(17)
											Float tmp96 = (a24 * b43);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(17)
											Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(17)
											te[(int)9] = tmp97;
											HX_STACK_LINE(17)
											Float tmp98 = (a21 * b14);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(17)
											Float tmp99 = (a22 * b24);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(17)
											Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(17)
											Float tmp101 = (a23 * b34);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(17)
											Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(17)
											Float tmp103 = (a24 * b44);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(17)
											Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(17)
											te[(int)13] = tmp104;
											HX_STACK_LINE(17)
											Float tmp105 = (a31 * b11);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(17)
											Float tmp106 = (a32 * b21);		HX_STACK_VAR(tmp106,"tmp106");
											HX_STACK_LINE(17)
											Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(17)
											Float tmp108 = (a33 * b31);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(17)
											Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(17)
											Float tmp110 = (a34 * b41);		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(17)
											Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(17)
											te[(int)2] = tmp111;
											HX_STACK_LINE(17)
											Float tmp112 = (a31 * b12);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(17)
											Float tmp113 = (a32 * b22);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(17)
											Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(17)
											Float tmp115 = (a33 * b32);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(17)
											Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(17)
											Float tmp117 = (a34 * b42);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(17)
											Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(17)
											te[(int)6] = tmp118;
											HX_STACK_LINE(17)
											Float tmp119 = (a31 * b13);		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(17)
											Float tmp120 = (a32 * b23);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(17)
											Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(17)
											Float tmp122 = (a33 * b33);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(17)
											Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(17)
											Float tmp124 = (a34 * b43);		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(17)
											Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(17)
											te[(int)10] = tmp125;
											HX_STACK_LINE(17)
											Float tmp126 = (a31 * b14);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(17)
											Float tmp127 = (a32 * b24);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(17)
											Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(17)
											Float tmp129 = (a33 * b34);		HX_STACK_VAR(tmp129,"tmp129");
											HX_STACK_LINE(17)
											Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(17)
											Float tmp131 = (a34 * b44);		HX_STACK_VAR(tmp131,"tmp131");
											HX_STACK_LINE(17)
											Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
											HX_STACK_LINE(17)
											te[(int)14] = tmp132;
											HX_STACK_LINE(17)
											Float tmp133 = (a41 * b11);		HX_STACK_VAR(tmp133,"tmp133");
											HX_STACK_LINE(17)
											Float tmp134 = (a42 * b21);		HX_STACK_VAR(tmp134,"tmp134");
											HX_STACK_LINE(17)
											Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
											HX_STACK_LINE(17)
											Float tmp136 = (a43 * b31);		HX_STACK_VAR(tmp136,"tmp136");
											HX_STACK_LINE(17)
											Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
											HX_STACK_LINE(17)
											Float tmp138 = (a44 * b41);		HX_STACK_VAR(tmp138,"tmp138");
											HX_STACK_LINE(17)
											Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
											HX_STACK_LINE(17)
											te[(int)3] = tmp139;
											HX_STACK_LINE(17)
											Float tmp140 = (a41 * b12);		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(17)
											Float tmp141 = (a42 * b22);		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(17)
											Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
											HX_STACK_LINE(17)
											Float tmp143 = (a43 * b32);		HX_STACK_VAR(tmp143,"tmp143");
											HX_STACK_LINE(17)
											Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
											HX_STACK_LINE(17)
											Float tmp145 = (a44 * b42);		HX_STACK_VAR(tmp145,"tmp145");
											HX_STACK_LINE(17)
											Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
											HX_STACK_LINE(17)
											te[(int)7] = tmp146;
											HX_STACK_LINE(17)
											Float tmp147 = (a41 * b13);		HX_STACK_VAR(tmp147,"tmp147");
											HX_STACK_LINE(17)
											Float tmp148 = (a42 * b23);		HX_STACK_VAR(tmp148,"tmp148");
											HX_STACK_LINE(17)
											Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(17)
											Float tmp150 = (a43 * b33);		HX_STACK_VAR(tmp150,"tmp150");
											HX_STACK_LINE(17)
											Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
											HX_STACK_LINE(17)
											Float tmp152 = (a44 * b43);		HX_STACK_VAR(tmp152,"tmp152");
											HX_STACK_LINE(17)
											Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
											HX_STACK_LINE(17)
											te[(int)11] = tmp153;
											HX_STACK_LINE(17)
											Float tmp154 = (a41 * b14);		HX_STACK_VAR(tmp154,"tmp154");
											HX_STACK_LINE(17)
											Float tmp155 = (a42 * b24);		HX_STACK_VAR(tmp155,"tmp155");
											HX_STACK_LINE(17)
											Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
											HX_STACK_LINE(17)
											Float tmp157 = (a43 * b34);		HX_STACK_VAR(tmp157,"tmp157");
											HX_STACK_LINE(17)
											Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(17)
											Float tmp159 = (a44 * b44);		HX_STACK_VAR(tmp159,"tmp159");
											HX_STACK_LINE(17)
											Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
											HX_STACK_LINE(17)
											te[(int)15] = tmp160;
											HX_STACK_LINE(17)
											tmp13 = _this3;
										}
										HX_STACK_LINE(17)
										::phoenix::Matrix _m = tmp13;		HX_STACK_VAR(_m,"_m");
										HX_STACK_LINE(17)
										_this2->matrix = _m;
										HX_STACK_LINE(17)
										bool tmp14 = (_m != null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(17)
										if ((tmp14)){
											HX_STACK_LINE(17)
											::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(17)
											{
												HX_STACK_LINE(17)
												cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
												HX_STACK_LINE(17)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(17)
												bool tmp16 = (array != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(17)
												if ((tmp16)){
													HX_STACK_LINE(17)
													::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(17)
													{
														HX_STACK_LINE(17)
														::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(17)
														::snow::api::buffers::ArrayBufferView _this3 = tmp18;		HX_STACK_VAR(_this3,"_this3");
														HX_STACK_LINE(17)
														_this3->byteOffset = (int)0;
														HX_STACK_LINE(17)
														_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
														HX_STACK_LINE(17)
														int tmp19 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(17)
														_this3->byteLength = tmp19;
														HX_STACK_LINE(17)
														::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(17)
														{
															HX_STACK_LINE(17)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(17)
															int tmp21 = _this3->byteLength;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(17)
															::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(17)
															this2 = tmp22;
															HX_STACK_LINE(17)
															tmp20 = this2;
														}
														HX_STACK_LINE(17)
														_this3->buffer = tmp20;
														HX_STACK_LINE(17)
														_this3->copyFromArray(((Array< Float >)(array)),null());
														HX_STACK_LINE(17)
														tmp17 = _this3;
													}
													HX_STACK_LINE(17)
													this1 = tmp17;
												}
												else{
													HX_STACK_LINE(17)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
												}
												HX_STACK_LINE(17)
												tmp15 = this1;
											}
											HX_STACK_LINE(17)
											_this2->floats = tmp15;
										}
										HX_STACK_LINE(17)
										_this2->matrix;
									}
									else{
										HX_STACK_LINE(17)
										::phoenix::Spatial tmp12 = _this1->get_world();		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(17)
										::phoenix::Spatial _this2 = tmp12;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(17)
										::phoenix::Matrix tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											::phoenix::Matrix tmp14 = _this1->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(17)
											Array< Float > te = tmp14->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(17)
											Float tmp15 = te->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(17)
											Float tmp16 = te->__get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(17)
											Float tmp17 = te->__get((int)8);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(17)
											Float tmp18 = te->__get((int)12);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(17)
											Float tmp19 = te->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(17)
											Float tmp20 = te->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(17)
											Float tmp21 = te->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(17)
											Float tmp22 = te->__get((int)13);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(17)
											Float tmp23 = te->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(17)
											Float tmp24 = te->__get((int)6);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(17)
											Float tmp25 = te->__get((int)10);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(17)
											Float tmp26 = te->__get((int)14);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(17)
											Float tmp27 = te->__get((int)3);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(17)
											Float tmp28 = te->__get((int)7);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(17)
											Float tmp29 = te->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(17)
											Float tmp30 = te->__get((int)15);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(17)
											tmp13 = ::phoenix::Matrix_obj::__new(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30);
										}
										HX_STACK_LINE(17)
										::phoenix::Matrix _m = tmp13;		HX_STACK_VAR(_m,"_m");
										HX_STACK_LINE(17)
										_this2->matrix = _m;
										HX_STACK_LINE(17)
										bool tmp14 = (_m != null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(17)
										if ((tmp14)){
											HX_STACK_LINE(17)
											::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(17)
											{
												HX_STACK_LINE(17)
												cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
												HX_STACK_LINE(17)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(17)
												bool tmp16 = (array != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(17)
												if ((tmp16)){
													HX_STACK_LINE(17)
													::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(17)
													{
														HX_STACK_LINE(17)
														::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(17)
														::snow::api::buffers::ArrayBufferView _this3 = tmp18;		HX_STACK_VAR(_this3,"_this3");
														HX_STACK_LINE(17)
														_this3->byteOffset = (int)0;
														HX_STACK_LINE(17)
														_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
														HX_STACK_LINE(17)
														int tmp19 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(17)
														_this3->byteLength = tmp19;
														HX_STACK_LINE(17)
														::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(17)
														{
															HX_STACK_LINE(17)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(17)
															int tmp21 = _this3->byteLength;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(17)
															::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(17)
															this2 = tmp22;
															HX_STACK_LINE(17)
															tmp20 = this2;
														}
														HX_STACK_LINE(17)
														_this3->buffer = tmp20;
														HX_STACK_LINE(17)
														_this3->copyFromArray(((Array< Float >)(array)),null());
														HX_STACK_LINE(17)
														tmp17 = _this3;
													}
													HX_STACK_LINE(17)
													this1 = tmp17;
												}
												else{
													HX_STACK_LINE(17)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
												}
												HX_STACK_LINE(17)
												tmp15 = this1;
											}
											HX_STACK_LINE(17)
											_this2->floats = tmp15;
										}
										HX_STACK_LINE(17)
										_this2->matrix;
									}
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										::phoenix::Spatial tmp12 = _this1->get_world();		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(17)
										::phoenix::Spatial _this2 = tmp12;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(17)
										bool tmp13 = _this2->auto_decompose;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(17)
										if ((tmp13)){
											HX_STACK_LINE(17)
											::phoenix::MatrixTransform tmp14;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(17)
											{
												HX_STACK_LINE(17)
												::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
												HX_STACK_LINE(17)
												::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
												HX_STACK_LINE(17)
												::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
												HX_STACK_LINE(17)
												::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
												HX_STACK_LINE(17)
												Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
												HX_STACK_LINE(17)
												::phoenix::Matrix tmp15 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(17)
												::phoenix::Matrix matrix = tmp15;		HX_STACK_VAR(matrix,"matrix");
												HX_STACK_LINE(17)
												Float tmp16 = te->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(17)
												Float _ax_x = tmp16;		HX_STACK_VAR(_ax_x,"_ax_x");
												HX_STACK_LINE(17)
												Float tmp17 = te->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(17)
												Float _ax_y = tmp17;		HX_STACK_VAR(_ax_y,"_ax_y");
												HX_STACK_LINE(17)
												Float tmp18 = te->__get((int)2);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(17)
												Float _ax_z = tmp18;		HX_STACK_VAR(_ax_z,"_ax_z");
												HX_STACK_LINE(17)
												Float tmp19 = te->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(17)
												Float _ay_x = tmp19;		HX_STACK_VAR(_ay_x,"_ay_x");
												HX_STACK_LINE(17)
												Float tmp20 = te->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(17)
												Float _ay_y = tmp20;		HX_STACK_VAR(_ay_y,"_ay_y");
												HX_STACK_LINE(17)
												Float tmp21 = te->__get((int)6);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(17)
												Float _ay_z = tmp21;		HX_STACK_VAR(_ay_z,"_ay_z");
												HX_STACK_LINE(17)
												Float tmp22 = te->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(17)
												Float _az_x = tmp22;		HX_STACK_VAR(_az_x,"_az_x");
												HX_STACK_LINE(17)
												Float tmp23 = te->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(17)
												Float _az_y = tmp23;		HX_STACK_VAR(_az_y,"_az_y");
												HX_STACK_LINE(17)
												Float tmp24 = te->__get((int)10);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(17)
												Float _az_z = tmp24;		HX_STACK_VAR(_az_z,"_az_z");
												HX_STACK_LINE(17)
												Float tmp25 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(17)
												Float tmp26 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(17)
												Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(17)
												Float tmp28 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(17)
												Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(17)
												Float tmp30 = ::Math_obj::sqrt(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(17)
												Float _ax_length = tmp30;		HX_STACK_VAR(_ax_length,"_ax_length");
												HX_STACK_LINE(17)
												Float tmp31 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(17)
												Float tmp32 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(17)
												Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(17)
												Float tmp34 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(17)
												Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(17)
												Float tmp36 = ::Math_obj::sqrt(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(17)
												Float _ay_length = tmp36;		HX_STACK_VAR(_ay_length,"_ay_length");
												HX_STACK_LINE(17)
												Float tmp37 = (_az_x * _az_x);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(17)
												Float tmp38 = (_az_y * _az_y);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(17)
												Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(17)
												Float tmp40 = (_az_z * _az_z);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(17)
												Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(17)
												Float tmp42 = ::Math_obj::sqrt(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(17)
												Float _az_length = tmp42;		HX_STACK_VAR(_az_length,"_az_length");
												HX_STACK_LINE(17)
												bool tmp43 = (_quaternion == null());		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(17)
												if ((tmp43)){
													HX_STACK_LINE(17)
													::phoenix::Quaternion tmp44 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(17)
													_quaternion = tmp44;
												}
												HX_STACK_LINE(17)
												bool tmp44 = (_position == null());		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(17)
												if ((tmp44)){
													HX_STACK_LINE(17)
													Float tmp45 = te->__get((int)12);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(17)
													Float tmp46 = te->__get((int)13);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(17)
													Float tmp47 = te->__get((int)14);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(17)
													::phoenix::Vector tmp48 = ::phoenix::Vector_obj::__new(tmp45,tmp46,tmp47,null());		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(17)
													_position = tmp48;
												}
												else{
													HX_STACK_LINE(17)
													{
														HX_STACK_LINE(17)
														Float tmp45 = te->__get((int)12);		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(17)
														Float _x = tmp45;		HX_STACK_VAR(_x,"_x");
														HX_STACK_LINE(17)
														_position->x = _x;
														HX_STACK_LINE(17)
														bool tmp46 = _position->_construct;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(17)
														if ((tmp46)){
															HX_STACK_LINE(17)
															_position->x;
														}
														else{
															HX_STACK_LINE(17)
															bool tmp47 = (_position->listen_x != null());		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(17)
															bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(17)
															if ((tmp47)){
																HX_STACK_LINE(17)
																bool tmp49 = _position->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(17)
																bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(17)
																tmp48 = !(tmp50);
															}
															else{
																HX_STACK_LINE(17)
																tmp48 = false;
															}
															HX_STACK_LINE(17)
															if ((tmp48)){
																HX_STACK_LINE(17)
																Float tmp49 = _x;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(17)
																_position->listen_x(tmp49);
															}
															HX_STACK_LINE(17)
															_position->x;
														}
													}
													HX_STACK_LINE(17)
													{
														HX_STACK_LINE(17)
														Float tmp45 = te->__get((int)13);		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(17)
														Float _y = tmp45;		HX_STACK_VAR(_y,"_y");
														HX_STACK_LINE(17)
														_position->y = _y;
														HX_STACK_LINE(17)
														bool tmp46 = _position->_construct;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(17)
														if ((tmp46)){
															HX_STACK_LINE(17)
															_position->y;
														}
														else{
															HX_STACK_LINE(17)
															bool tmp47 = (_position->listen_y != null());		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(17)
															bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(17)
															if ((tmp47)){
																HX_STACK_LINE(17)
																bool tmp49 = _position->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(17)
																bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(17)
																tmp48 = !(tmp50);
															}
															else{
																HX_STACK_LINE(17)
																tmp48 = false;
															}
															HX_STACK_LINE(17)
															if ((tmp48)){
																HX_STACK_LINE(17)
																Float tmp49 = _y;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(17)
																_position->listen_y(tmp49);
															}
															HX_STACK_LINE(17)
															_position->y;
														}
													}
													HX_STACK_LINE(17)
													{
														HX_STACK_LINE(17)
														Float tmp45 = te->__get((int)14);		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(17)
														Float _z = tmp45;		HX_STACK_VAR(_z,"_z");
														HX_STACK_LINE(17)
														_position->z = _z;
														HX_STACK_LINE(17)
														bool tmp46 = _position->_construct;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(17)
														if ((tmp46)){
															HX_STACK_LINE(17)
															_position->z;
														}
														else{
															HX_STACK_LINE(17)
															bool tmp47 = (_position->listen_z != null());		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(17)
															bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(17)
															if ((tmp47)){
																HX_STACK_LINE(17)
																bool tmp49 = _position->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(17)
																bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(17)
																tmp48 = !(tmp50);
															}
															else{
																HX_STACK_LINE(17)
																tmp48 = false;
															}
															HX_STACK_LINE(17)
															if ((tmp48)){
																HX_STACK_LINE(17)
																Float tmp49 = _z;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(17)
																_position->listen_z(tmp49);
															}
															HX_STACK_LINE(17)
															_position->z;
														}
													}
												}
												HX_STACK_LINE(17)
												bool tmp45 = (_scale == null());		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(17)
												if ((tmp45)){
													HX_STACK_LINE(17)
													::phoenix::Vector tmp46 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(17)
													_scale = tmp46;
												}
												else{
													HX_STACK_LINE(17)
													{
														HX_STACK_LINE(17)
														_scale->x = _ax_length;
														HX_STACK_LINE(17)
														bool tmp46 = _scale->_construct;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(17)
														if ((tmp46)){
															HX_STACK_LINE(17)
															_scale->x;
														}
														else{
															HX_STACK_LINE(17)
															bool tmp47 = (_scale->listen_x != null());		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(17)
															bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(17)
															if ((tmp47)){
																HX_STACK_LINE(17)
																bool tmp49 = _scale->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(17)
																bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(17)
																tmp48 = !(tmp50);
															}
															else{
																HX_STACK_LINE(17)
																tmp48 = false;
															}
															HX_STACK_LINE(17)
															if ((tmp48)){
																HX_STACK_LINE(17)
																Float tmp49 = _ax_length;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(17)
																_scale->listen_x(tmp49);
															}
															HX_STACK_LINE(17)
															_scale->x;
														}
													}
													HX_STACK_LINE(17)
													{
														HX_STACK_LINE(17)
														_scale->y = _ay_length;
														HX_STACK_LINE(17)
														bool tmp46 = _scale->_construct;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(17)
														if ((tmp46)){
															HX_STACK_LINE(17)
															_scale->y;
														}
														else{
															HX_STACK_LINE(17)
															bool tmp47 = (_scale->listen_y != null());		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(17)
															bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(17)
															if ((tmp47)){
																HX_STACK_LINE(17)
																bool tmp49 = _scale->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(17)
																bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(17)
																tmp48 = !(tmp50);
															}
															else{
																HX_STACK_LINE(17)
																tmp48 = false;
															}
															HX_STACK_LINE(17)
															if ((tmp48)){
																HX_STACK_LINE(17)
																Float tmp49 = _ay_length;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(17)
																_scale->listen_y(tmp49);
															}
															HX_STACK_LINE(17)
															_scale->y;
														}
													}
													HX_STACK_LINE(17)
													{
														HX_STACK_LINE(17)
														_scale->z = _az_length;
														HX_STACK_LINE(17)
														bool tmp46 = _scale->_construct;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(17)
														if ((tmp46)){
															HX_STACK_LINE(17)
															_scale->z;
														}
														else{
															HX_STACK_LINE(17)
															bool tmp47 = (_scale->listen_z != null());		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(17)
															bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(17)
															if ((tmp47)){
																HX_STACK_LINE(17)
																bool tmp49 = _scale->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(17)
																bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(17)
																tmp48 = !(tmp50);
															}
															else{
																HX_STACK_LINE(17)
																tmp48 = false;
															}
															HX_STACK_LINE(17)
															if ((tmp48)){
																HX_STACK_LINE(17)
																Float tmp49 = _az_length;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(17)
																_scale->listen_z(tmp49);
															}
															HX_STACK_LINE(17)
															_scale->z;
														}
													}
												}
												HX_STACK_LINE(17)
												matrix->elements = _this3->elements->concat(Array_obj< Float >::__new());
												HX_STACK_LINE(17)
												Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
												HX_STACK_LINE(17)
												Float tmp46 = _ax_length;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(17)
												hx::DivEq(me[(int)0],tmp46);
												HX_STACK_LINE(17)
												Float tmp47 = _ax_length;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(17)
												hx::DivEq(me[(int)1],tmp47);
												HX_STACK_LINE(17)
												Float tmp48 = _ax_length;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(17)
												hx::DivEq(me[(int)2],tmp48);
												HX_STACK_LINE(17)
												Float tmp49 = _ay_length;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(17)
												hx::DivEq(me[(int)4],tmp49);
												HX_STACK_LINE(17)
												Float tmp50 = _ay_length;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(17)
												hx::DivEq(me[(int)5],tmp50);
												HX_STACK_LINE(17)
												Float tmp51 = _ay_length;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(17)
												hx::DivEq(me[(int)6],tmp51);
												HX_STACK_LINE(17)
												Float tmp52 = _az_length;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(17)
												hx::DivEq(me[(int)8],tmp52);
												HX_STACK_LINE(17)
												Float tmp53 = _az_length;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(17)
												hx::DivEq(me[(int)9],tmp53);
												HX_STACK_LINE(17)
												Float tmp54 = _az_length;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(17)
												hx::DivEq(me[(int)10],tmp54);
												HX_STACK_LINE(17)
												::phoenix::Matrix tmp55 = matrix;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(17)
												_quaternion->setFromRotationMatrix(tmp55);
												HX_STACK_LINE(17)
												bool tmp56 = (_this3->_transform == null());		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(17)
												if ((tmp56)){
													HX_STACK_LINE(17)
													::phoenix::MatrixTransform tmp57 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(17)
													_this3->_transform = tmp57;
												}
												else{
													HX_STACK_LINE(17)
													_this3->_transform->pos = _position;
													HX_STACK_LINE(17)
													_this3->_transform->rotation = _quaternion;
													HX_STACK_LINE(17)
													_this3->_transform->scale = _scale;
												}
												HX_STACK_LINE(17)
												tmp14 = _this3->_transform;
											}
											HX_STACK_LINE(17)
											::phoenix::MatrixTransform _transform = tmp14;		HX_STACK_VAR(_transform,"_transform");
											HX_STACK_LINE(17)
											{
												HX_STACK_LINE(17)
												::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
												HX_STACK_LINE(17)
												_this2->pos = _p;
												HX_STACK_LINE(17)
												bool tmp15 = (_p != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(17)
												if ((tmp15)){
													HX_STACK_LINE(17)
													::phoenix::Vector tmp16 = _this2->pos;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(17)
													Dynamic tmp17 = _this2->_pos_change_dyn();		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(17)
													::phoenix::Vector_obj::Listen(tmp16,tmp17);
													HX_STACK_LINE(17)
													bool tmp18 = (_this2->pos_changed != null());		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(17)
													bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(17)
													if ((tmp18)){
														HX_STACK_LINE(17)
														bool tmp20 = _this2->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(17)
														bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(17)
														tmp19 = !(tmp21);
													}
													else{
														HX_STACK_LINE(17)
														tmp19 = false;
													}
													HX_STACK_LINE(17)
													if ((tmp19)){
														HX_STACK_LINE(17)
														::phoenix::Vector tmp20 = _this2->pos;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(17)
														_this2->pos_changed(tmp20);
													}
												}
												HX_STACK_LINE(17)
												_this2->pos;
											}
											HX_STACK_LINE(17)
											{
												HX_STACK_LINE(17)
												::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
												HX_STACK_LINE(17)
												_this2->rotation = _r;
												HX_STACK_LINE(17)
												bool tmp15 = (_r != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(17)
												if ((tmp15)){
													HX_STACK_LINE(17)
													{
														HX_STACK_LINE(17)
														::phoenix::Quaternion _q = _this2->rotation;		HX_STACK_VAR(_q,"_q");
														HX_STACK_LINE(17)
														Dynamic listener = _this2->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
														HX_STACK_LINE(17)
														_q->listen_x = listener;
														HX_STACK_LINE(17)
														_q->listen_y = listener;
														HX_STACK_LINE(17)
														_q->listen_z = listener;
														HX_STACK_LINE(17)
														_q->listen_w = listener;
													}
													HX_STACK_LINE(17)
													bool tmp16 = (_this2->rotation_changed != null());		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(17)
													bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(17)
													if ((tmp16)){
														HX_STACK_LINE(17)
														bool tmp18 = _this2->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(17)
														bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(17)
														tmp17 = !(tmp19);
													}
													else{
														HX_STACK_LINE(17)
														tmp17 = false;
													}
													HX_STACK_LINE(17)
													if ((tmp17)){
														HX_STACK_LINE(17)
														::phoenix::Quaternion tmp18 = _this2->rotation;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(17)
														_this2->rotation_changed(tmp18);
													}
												}
												HX_STACK_LINE(17)
												_this2->rotation;
											}
											HX_STACK_LINE(17)
											{
												HX_STACK_LINE(17)
												::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
												HX_STACK_LINE(17)
												_this2->scale = _s;
												HX_STACK_LINE(17)
												bool tmp15 = (_s != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(17)
												if ((tmp15)){
													HX_STACK_LINE(17)
													::phoenix::Vector tmp16 = _this2->scale;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(17)
													Dynamic tmp17 = _this2->_scale_change_dyn();		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(17)
													::phoenix::Vector_obj::Listen(tmp16,tmp17);
													HX_STACK_LINE(17)
													bool tmp18 = (_this2->scale_changed != null());		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(17)
													bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(17)
													if ((tmp18)){
														HX_STACK_LINE(17)
														bool tmp20 = _this2->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(17)
														bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(17)
														tmp19 = !(tmp21);
													}
													else{
														HX_STACK_LINE(17)
														tmp19 = false;
													}
													HX_STACK_LINE(17)
													if ((tmp19)){
														HX_STACK_LINE(17)
														::phoenix::Vector tmp20 = _this2->scale;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(17)
														_this2->scale_changed(tmp20);
													}
												}
												HX_STACK_LINE(17)
												_this2->scale;
											}
										}
										HX_STACK_LINE(17)
										_this2;
									}
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										_this1->dirty = false;
										HX_STACK_LINE(17)
										bool tmp12 = _this1->dirty;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(17)
										bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(17)
										bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(17)
										if ((tmp13)){
											HX_STACK_LINE(17)
											bool tmp15 = _this1->_setup;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(17)
											bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(17)
											bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(17)
											tmp14 = !(tmp17);
										}
										else{
											HX_STACK_LINE(17)
											tmp14 = false;
										}
										HX_STACK_LINE(17)
										bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(17)
										bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(17)
										if ((tmp15)){
											HX_STACK_LINE(17)
											tmp16 = (_this1->_dirty_handlers != null());
										}
										else{
											HX_STACK_LINE(17)
											tmp16 = false;
										}
										HX_STACK_LINE(17)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(17)
										if ((tmp16)){
											HX_STACK_LINE(17)
											int tmp18 = _this1->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(17)
											int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(17)
											tmp17 = (tmp19 > (int)0);
										}
										else{
											HX_STACK_LINE(17)
											tmp17 = false;
										}
										HX_STACK_LINE(17)
										if ((tmp17)){
											HX_STACK_LINE(17)
											int _g = (int)0;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(17)
											cpp::ArrayBase _g1 = _this1->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(17)
											while((true)){
												HX_STACK_LINE(17)
												bool tmp18 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(17)
												bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(17)
												if ((tmp19)){
													HX_STACK_LINE(17)
													break;
												}
												HX_STACK_LINE(17)
												Dynamic tmp20 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(17)
												Dynamic _handler = tmp20;		HX_STACK_VAR(_handler,"_handler");
												HX_STACK_LINE(17)
												++(_g);
												HX_STACK_LINE(17)
												bool tmp21 = (_handler != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(17)
												if ((tmp21)){
													HX_STACK_LINE(17)
													::phoenix::Transform tmp22 = _this1;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(17)
													_handler(tmp22).Cast< Void >();
												}
											}
										}
										HX_STACK_LINE(17)
										_this1->dirty;
									}
									HX_STACK_LINE(17)
									_this1->_cleaning = false;
									HX_STACK_LINE(17)
									bool tmp12 = (_this1->_clean_handlers != null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(17)
									bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(17)
									if ((tmp12)){
										HX_STACK_LINE(17)
										int tmp14 = _this1->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(17)
										int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(17)
										tmp13 = (tmp15 > (int)0);
									}
									else{
										HX_STACK_LINE(17)
										tmp13 = false;
									}
									HX_STACK_LINE(17)
									if ((tmp13)){
										HX_STACK_LINE(17)
										int _g = (int)0;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(17)
										cpp::ArrayBase _g1 = _this1->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(17)
										while((true)){
											HX_STACK_LINE(17)
											bool tmp14 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(17)
											bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(17)
											if ((tmp15)){
												HX_STACK_LINE(17)
												break;
											}
											HX_STACK_LINE(17)
											Dynamic tmp16 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(17)
											Dynamic _handler = tmp16;		HX_STACK_VAR(_handler,"_handler");
											HX_STACK_LINE(17)
											++(_g);
											HX_STACK_LINE(17)
											bool tmp17 = (_handler != null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(17)
											if ((tmp17)){
												HX_STACK_LINE(17)
												::phoenix::Transform tmp18 = _this1;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(17)
												_handler(tmp18).Cast< Void >();
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(17)
						bool tmp8 = t->dirty;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(17)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(17)
						if ((tmp8)){
							HX_STACK_LINE(17)
							bool tmp10 = t->_cleaning;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(17)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(17)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(17)
							tmp9 = false;
						}
						HX_STACK_LINE(17)
						if ((tmp9)){
							HX_STACK_LINE(17)
							bool tmp10 = t->dirty;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(17)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(17)
							if ((tmp11)){
								HX_STACK_LINE(17)
								Dynamic();
							}
							else{
								HX_STACK_LINE(17)
								t->_cleaning = true;
								HX_STACK_LINE(17)
								{
									HX_STACK_LINE(17)
									::phoenix::Matrix _this1 = t->_pos_matrix;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(17)
										e[(int)0] = (int)1;
										HX_STACK_LINE(17)
										e[(int)4] = (int)0;
										HX_STACK_LINE(17)
										e[(int)8] = (int)0;
										HX_STACK_LINE(17)
										::phoenix::Vector tmp12 = t->local->pos;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(17)
										Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(17)
										e[(int)12] = tmp13;
										HX_STACK_LINE(17)
										e[(int)1] = (int)0;
										HX_STACK_LINE(17)
										e[(int)5] = (int)1;
										HX_STACK_LINE(17)
										e[(int)9] = (int)0;
										HX_STACK_LINE(17)
										::phoenix::Vector tmp14 = t->local->pos;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(17)
										Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(17)
										e[(int)13] = tmp15;
										HX_STACK_LINE(17)
										e[(int)2] = (int)0;
										HX_STACK_LINE(17)
										e[(int)6] = (int)0;
										HX_STACK_LINE(17)
										e[(int)10] = (int)1;
										HX_STACK_LINE(17)
										::phoenix::Vector tmp16 = t->local->pos;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(17)
										Float tmp17 = tmp16->z;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(17)
										e[(int)14] = tmp17;
										HX_STACK_LINE(17)
										e[(int)3] = (int)0;
										HX_STACK_LINE(17)
										e[(int)7] = (int)0;
										HX_STACK_LINE(17)
										e[(int)11] = (int)0;
										HX_STACK_LINE(17)
										e[(int)15] = (int)1;
										HX_STACK_LINE(17)
										_this1;
									}
									HX_STACK_LINE(17)
									_this1;
								}
								HX_STACK_LINE(17)
								{
									HX_STACK_LINE(17)
									::phoenix::Matrix _this1 = t->_rotation_matrix;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(17)
									::phoenix::Quaternion tmp12 = t->local->rotation;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(17)
									::phoenix::Quaternion q = tmp12;		HX_STACK_VAR(q,"q");
									HX_STACK_LINE(17)
									Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(17)
									Float tmp13 = (q->x + q->x);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(17)
									Float x2 = tmp13;		HX_STACK_VAR(x2,"x2");
									HX_STACK_LINE(17)
									Float tmp14 = (q->y + q->y);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(17)
									Float y2 = tmp14;		HX_STACK_VAR(y2,"y2");
									HX_STACK_LINE(17)
									Float tmp15 = (q->z + q->z);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(17)
									Float z2 = tmp15;		HX_STACK_VAR(z2,"z2");
									HX_STACK_LINE(17)
									Float tmp16 = (q->x * x2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(17)
									Float xx = tmp16;		HX_STACK_VAR(xx,"xx");
									HX_STACK_LINE(17)
									Float tmp17 = (q->x * y2);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(17)
									Float xy = tmp17;		HX_STACK_VAR(xy,"xy");
									HX_STACK_LINE(17)
									Float tmp18 = (q->x * z2);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(17)
									Float xz = tmp18;		HX_STACK_VAR(xz,"xz");
									HX_STACK_LINE(17)
									Float tmp19 = (q->y * y2);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(17)
									Float yy = tmp19;		HX_STACK_VAR(yy,"yy");
									HX_STACK_LINE(17)
									Float tmp20 = (q->y * z2);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(17)
									Float yz = tmp20;		HX_STACK_VAR(yz,"yz");
									HX_STACK_LINE(17)
									Float tmp21 = (q->z * z2);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(17)
									Float zz = tmp21;		HX_STACK_VAR(zz,"zz");
									HX_STACK_LINE(17)
									Float tmp22 = (q->w * x2);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(17)
									Float wx = tmp22;		HX_STACK_VAR(wx,"wx");
									HX_STACK_LINE(17)
									Float tmp23 = (q->w * y2);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(17)
									Float wy = tmp23;		HX_STACK_VAR(wy,"wy");
									HX_STACK_LINE(17)
									Float tmp24 = (q->w * z2);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(17)
									Float wz = tmp24;		HX_STACK_VAR(wz,"wz");
									HX_STACK_LINE(17)
									Float tmp25 = (yy + zz);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(17)
									Float tmp26 = ((int)1 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(17)
									te[(int)0] = tmp26;
									HX_STACK_LINE(17)
									Float tmp27 = (xy - wz);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(17)
									te[(int)4] = tmp27;
									HX_STACK_LINE(17)
									Float tmp28 = (xz + wy);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(17)
									te[(int)8] = tmp28;
									HX_STACK_LINE(17)
									Float tmp29 = (xy + wz);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(17)
									te[(int)1] = tmp29;
									HX_STACK_LINE(17)
									Float tmp30 = (xx + zz);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(17)
									Float tmp31 = ((int)1 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(17)
									te[(int)5] = tmp31;
									HX_STACK_LINE(17)
									Float tmp32 = (yz - wx);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(17)
									te[(int)9] = tmp32;
									HX_STACK_LINE(17)
									Float tmp33 = (xz - wy);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(17)
									te[(int)2] = tmp33;
									HX_STACK_LINE(17)
									Float tmp34 = (yz + wx);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(17)
									te[(int)6] = tmp34;
									HX_STACK_LINE(17)
									Float tmp35 = (xx + yy);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(17)
									Float tmp36 = ((int)1 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(17)
									te[(int)10] = tmp36;
									HX_STACK_LINE(17)
									te[(int)3] = (int)0;
									HX_STACK_LINE(17)
									te[(int)7] = (int)0;
									HX_STACK_LINE(17)
									te[(int)11] = (int)0;
									HX_STACK_LINE(17)
									te[(int)12] = (int)0;
									HX_STACK_LINE(17)
									te[(int)13] = (int)0;
									HX_STACK_LINE(17)
									te[(int)14] = (int)0;
									HX_STACK_LINE(17)
									te[(int)15] = (int)1;
									HX_STACK_LINE(17)
									_this1;
								}
								HX_STACK_LINE(17)
								{
									HX_STACK_LINE(17)
									::phoenix::Matrix _this1 = t->_origin_undo_matrix;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(17)
										e[(int)0] = (int)1;
										HX_STACK_LINE(17)
										e[(int)4] = (int)0;
										HX_STACK_LINE(17)
										e[(int)8] = (int)0;
										HX_STACK_LINE(17)
										Float tmp12 = t->origin->x;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(17)
										Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(17)
										e[(int)12] = tmp13;
										HX_STACK_LINE(17)
										e[(int)1] = (int)0;
										HX_STACK_LINE(17)
										e[(int)5] = (int)1;
										HX_STACK_LINE(17)
										e[(int)9] = (int)0;
										HX_STACK_LINE(17)
										Float tmp14 = t->origin->y;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(17)
										Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(17)
										e[(int)13] = tmp15;
										HX_STACK_LINE(17)
										e[(int)2] = (int)0;
										HX_STACK_LINE(17)
										e[(int)6] = (int)0;
										HX_STACK_LINE(17)
										e[(int)10] = (int)1;
										HX_STACK_LINE(17)
										Float tmp16 = t->origin->z;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(17)
										Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(17)
										e[(int)14] = tmp17;
										HX_STACK_LINE(17)
										e[(int)3] = (int)0;
										HX_STACK_LINE(17)
										e[(int)7] = (int)0;
										HX_STACK_LINE(17)
										e[(int)11] = (int)0;
										HX_STACK_LINE(17)
										e[(int)15] = (int)1;
										HX_STACK_LINE(17)
										_this1;
									}
									HX_STACK_LINE(17)
									_this1;
								}
								HX_STACK_LINE(17)
								{
									HX_STACK_LINE(17)
									::phoenix::Matrix tmp12 = t->local->matrix;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(17)
									::phoenix::Matrix _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(17)
										e[(int)0] = (int)1;
										HX_STACK_LINE(17)
										e[(int)4] = (int)0;
										HX_STACK_LINE(17)
										e[(int)8] = (int)0;
										HX_STACK_LINE(17)
										Float tmp13 = t->origin->x;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(17)
										e[(int)12] = tmp13;
										HX_STACK_LINE(17)
										e[(int)1] = (int)0;
										HX_STACK_LINE(17)
										e[(int)5] = (int)1;
										HX_STACK_LINE(17)
										e[(int)9] = (int)0;
										HX_STACK_LINE(17)
										Float tmp14 = t->origin->y;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(17)
										e[(int)13] = tmp14;
										HX_STACK_LINE(17)
										e[(int)2] = (int)0;
										HX_STACK_LINE(17)
										e[(int)6] = (int)0;
										HX_STACK_LINE(17)
										e[(int)10] = (int)1;
										HX_STACK_LINE(17)
										Float tmp15 = t->origin->z;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(17)
										e[(int)14] = tmp15;
										HX_STACK_LINE(17)
										e[(int)3] = (int)0;
										HX_STACK_LINE(17)
										e[(int)7] = (int)0;
										HX_STACK_LINE(17)
										e[(int)11] = (int)0;
										HX_STACK_LINE(17)
										e[(int)15] = (int)1;
										HX_STACK_LINE(17)
										_this1;
									}
									HX_STACK_LINE(17)
									_this1;
								}
								HX_STACK_LINE(17)
								{
									HX_STACK_LINE(17)
									::phoenix::Matrix tmp12 = t->local->matrix;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(17)
									::phoenix::Matrix _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(17)
										Array< Float > be = t->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(17)
										Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(17)
										Float tmp13 = ae->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(17)
										Float a11 = tmp13;		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(17)
										Float tmp14 = ae->__get((int)4);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(17)
										Float a12 = tmp14;		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(17)
										Float tmp15 = ae->__get((int)8);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(17)
										Float a13 = tmp15;		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(17)
										Float tmp16 = ae->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(17)
										Float a14 = tmp16;		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(17)
										Float tmp17 = ae->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(17)
										Float a21 = tmp17;		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(17)
										Float tmp18 = ae->__get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(17)
										Float a22 = tmp18;		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(17)
										Float tmp19 = ae->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(17)
										Float a23 = tmp19;		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(17)
										Float tmp20 = ae->__get((int)13);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(17)
										Float a24 = tmp20;		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(17)
										Float tmp21 = ae->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(17)
										Float a31 = tmp21;		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(17)
										Float tmp22 = ae->__get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(17)
										Float a32 = tmp22;		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(17)
										Float tmp23 = ae->__get((int)10);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(17)
										Float a33 = tmp23;		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(17)
										Float tmp24 = ae->__get((int)14);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(17)
										Float a34 = tmp24;		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(17)
										Float tmp25 = ae->__get((int)3);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(17)
										Float a41 = tmp25;		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(17)
										Float tmp26 = ae->__get((int)7);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(17)
										Float a42 = tmp26;		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(17)
										Float tmp27 = ae->__get((int)11);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(17)
										Float a43 = tmp27;		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(17)
										Float tmp28 = ae->__get((int)15);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(17)
										Float a44 = tmp28;		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(17)
										Float tmp29 = be->__get((int)0);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(17)
										Float b11 = tmp29;		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(17)
										Float tmp30 = be->__get((int)4);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(17)
										Float b12 = tmp30;		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(17)
										Float tmp31 = be->__get((int)8);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(17)
										Float b13 = tmp31;		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(17)
										Float tmp32 = be->__get((int)12);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(17)
										Float b14 = tmp32;		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(17)
										Float tmp33 = be->__get((int)1);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(17)
										Float b21 = tmp33;		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(17)
										Float tmp34 = be->__get((int)5);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(17)
										Float b22 = tmp34;		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(17)
										Float tmp35 = be->__get((int)9);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(17)
										Float b23 = tmp35;		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(17)
										Float tmp36 = be->__get((int)13);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(17)
										Float b24 = tmp36;		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(17)
										Float tmp37 = be->__get((int)2);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(17)
										Float b31 = tmp37;		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(17)
										Float tmp38 = be->__get((int)6);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(17)
										Float b32 = tmp38;		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(17)
										Float tmp39 = be->__get((int)10);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(17)
										Float b33 = tmp39;		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(17)
										Float tmp40 = be->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(17)
										Float b34 = tmp40;		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(17)
										Float tmp41 = be->__get((int)3);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(17)
										Float b41 = tmp41;		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(17)
										Float tmp42 = be->__get((int)7);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(17)
										Float b42 = tmp42;		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(17)
										Float tmp43 = be->__get((int)11);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(17)
										Float b43 = tmp43;		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(17)
										Float tmp44 = be->__get((int)15);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(17)
										Float b44 = tmp44;		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(17)
										Float tmp45 = (a11 * b11);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(17)
										Float tmp46 = (a12 * b21);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(17)
										Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(17)
										Float tmp48 = (a13 * b31);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(17)
										Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(17)
										Float tmp50 = (a14 * b41);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(17)
										Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(17)
										te[(int)0] = tmp51;
										HX_STACK_LINE(17)
										Float tmp52 = (a11 * b12);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(17)
										Float tmp53 = (a12 * b22);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(17)
										Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(17)
										Float tmp55 = (a13 * b32);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(17)
										Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(17)
										Float tmp57 = (a14 * b42);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(17)
										Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(17)
										te[(int)4] = tmp58;
										HX_STACK_LINE(17)
										Float tmp59 = (a11 * b13);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(17)
										Float tmp60 = (a12 * b23);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(17)
										Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(17)
										Float tmp62 = (a13 * b33);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(17)
										Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(17)
										Float tmp64 = (a14 * b43);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(17)
										Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(17)
										te[(int)8] = tmp65;
										HX_STACK_LINE(17)
										Float tmp66 = (a11 * b14);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(17)
										Float tmp67 = (a12 * b24);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(17)
										Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(17)
										Float tmp69 = (a13 * b34);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(17)
										Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(17)
										Float tmp71 = (a14 * b44);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(17)
										Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(17)
										te[(int)12] = tmp72;
										HX_STACK_LINE(17)
										Float tmp73 = (a21 * b11);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(17)
										Float tmp74 = (a22 * b21);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(17)
										Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(17)
										Float tmp76 = (a23 * b31);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(17)
										Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(17)
										Float tmp78 = (a24 * b41);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(17)
										Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(17)
										te[(int)1] = tmp79;
										HX_STACK_LINE(17)
										Float tmp80 = (a21 * b12);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(17)
										Float tmp81 = (a22 * b22);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(17)
										Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(17)
										Float tmp83 = (a23 * b32);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(17)
										Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(17)
										Float tmp85 = (a24 * b42);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(17)
										Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(17)
										te[(int)5] = tmp86;
										HX_STACK_LINE(17)
										Float tmp87 = (a21 * b13);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(17)
										Float tmp88 = (a22 * b23);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(17)
										Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(17)
										Float tmp90 = (a23 * b33);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(17)
										Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(17)
										Float tmp92 = (a24 * b43);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(17)
										Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(17)
										te[(int)9] = tmp93;
										HX_STACK_LINE(17)
										Float tmp94 = (a21 * b14);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(17)
										Float tmp95 = (a22 * b24);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(17)
										Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(17)
										Float tmp97 = (a23 * b34);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(17)
										Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(17)
										Float tmp99 = (a24 * b44);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(17)
										Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(17)
										te[(int)13] = tmp100;
										HX_STACK_LINE(17)
										Float tmp101 = (a31 * b11);		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(17)
										Float tmp102 = (a32 * b21);		HX_STACK_VAR(tmp102,"tmp102");
										HX_STACK_LINE(17)
										Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
										HX_STACK_LINE(17)
										Float tmp104 = (a33 * b31);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(17)
										Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
										HX_STACK_LINE(17)
										Float tmp106 = (a34 * b41);		HX_STACK_VAR(tmp106,"tmp106");
										HX_STACK_LINE(17)
										Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(17)
										te[(int)2] = tmp107;
										HX_STACK_LINE(17)
										Float tmp108 = (a31 * b12);		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(17)
										Float tmp109 = (a32 * b22);		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(17)
										Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
										HX_STACK_LINE(17)
										Float tmp111 = (a33 * b32);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(17)
										Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
										HX_STACK_LINE(17)
										Float tmp113 = (a34 * b42);		HX_STACK_VAR(tmp113,"tmp113");
										HX_STACK_LINE(17)
										Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
										HX_STACK_LINE(17)
										te[(int)6] = tmp114;
										HX_STACK_LINE(17)
										Float tmp115 = (a31 * b13);		HX_STACK_VAR(tmp115,"tmp115");
										HX_STACK_LINE(17)
										Float tmp116 = (a32 * b23);		HX_STACK_VAR(tmp116,"tmp116");
										HX_STACK_LINE(17)
										Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
										HX_STACK_LINE(17)
										Float tmp118 = (a33 * b33);		HX_STACK_VAR(tmp118,"tmp118");
										HX_STACK_LINE(17)
										Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
										HX_STACK_LINE(17)
										Float tmp120 = (a34 * b43);		HX_STACK_VAR(tmp120,"tmp120");
										HX_STACK_LINE(17)
										Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
										HX_STACK_LINE(17)
										te[(int)10] = tmp121;
										HX_STACK_LINE(17)
										Float tmp122 = (a31 * b14);		HX_STACK_VAR(tmp122,"tmp122");
										HX_STACK_LINE(17)
										Float tmp123 = (a32 * b24);		HX_STACK_VAR(tmp123,"tmp123");
										HX_STACK_LINE(17)
										Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
										HX_STACK_LINE(17)
										Float tmp125 = (a33 * b34);		HX_STACK_VAR(tmp125,"tmp125");
										HX_STACK_LINE(17)
										Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
										HX_STACK_LINE(17)
										Float tmp127 = (a34 * b44);		HX_STACK_VAR(tmp127,"tmp127");
										HX_STACK_LINE(17)
										Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
										HX_STACK_LINE(17)
										te[(int)14] = tmp128;
										HX_STACK_LINE(17)
										Float tmp129 = (a41 * b11);		HX_STACK_VAR(tmp129,"tmp129");
										HX_STACK_LINE(17)
										Float tmp130 = (a42 * b21);		HX_STACK_VAR(tmp130,"tmp130");
										HX_STACK_LINE(17)
										Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
										HX_STACK_LINE(17)
										Float tmp132 = (a43 * b31);		HX_STACK_VAR(tmp132,"tmp132");
										HX_STACK_LINE(17)
										Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
										HX_STACK_LINE(17)
										Float tmp134 = (a44 * b41);		HX_STACK_VAR(tmp134,"tmp134");
										HX_STACK_LINE(17)
										Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
										HX_STACK_LINE(17)
										te[(int)3] = tmp135;
										HX_STACK_LINE(17)
										Float tmp136 = (a41 * b12);		HX_STACK_VAR(tmp136,"tmp136");
										HX_STACK_LINE(17)
										Float tmp137 = (a42 * b22);		HX_STACK_VAR(tmp137,"tmp137");
										HX_STACK_LINE(17)
										Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
										HX_STACK_LINE(17)
										Float tmp139 = (a43 * b32);		HX_STACK_VAR(tmp139,"tmp139");
										HX_STACK_LINE(17)
										Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
										HX_STACK_LINE(17)
										Float tmp141 = (a44 * b42);		HX_STACK_VAR(tmp141,"tmp141");
										HX_STACK_LINE(17)
										Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
										HX_STACK_LINE(17)
										te[(int)7] = tmp142;
										HX_STACK_LINE(17)
										Float tmp143 = (a41 * b13);		HX_STACK_VAR(tmp143,"tmp143");
										HX_STACK_LINE(17)
										Float tmp144 = (a42 * b23);		HX_STACK_VAR(tmp144,"tmp144");
										HX_STACK_LINE(17)
										Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
										HX_STACK_LINE(17)
										Float tmp146 = (a43 * b33);		HX_STACK_VAR(tmp146,"tmp146");
										HX_STACK_LINE(17)
										Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
										HX_STACK_LINE(17)
										Float tmp148 = (a44 * b43);		HX_STACK_VAR(tmp148,"tmp148");
										HX_STACK_LINE(17)
										Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
										HX_STACK_LINE(17)
										te[(int)11] = tmp149;
										HX_STACK_LINE(17)
										Float tmp150 = (a41 * b14);		HX_STACK_VAR(tmp150,"tmp150");
										HX_STACK_LINE(17)
										Float tmp151 = (a42 * b24);		HX_STACK_VAR(tmp151,"tmp151");
										HX_STACK_LINE(17)
										Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
										HX_STACK_LINE(17)
										Float tmp153 = (a43 * b34);		HX_STACK_VAR(tmp153,"tmp153");
										HX_STACK_LINE(17)
										Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
										HX_STACK_LINE(17)
										Float tmp155 = (a44 * b44);		HX_STACK_VAR(tmp155,"tmp155");
										HX_STACK_LINE(17)
										Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
										HX_STACK_LINE(17)
										te[(int)15] = tmp156;
										HX_STACK_LINE(17)
										_this1;
									}
								}
								HX_STACK_LINE(17)
								{
									HX_STACK_LINE(17)
									::phoenix::Matrix tmp12 = t->local->matrix;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(17)
									::phoenix::Matrix _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(17)
									::phoenix::Vector tmp13 = t->local->scale;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(17)
									::phoenix::Vector _v = tmp13;		HX_STACK_VAR(_v,"_v");
									HX_STACK_LINE(17)
									Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(17)
									Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
									HX_STACK_LINE(17)
									Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(17)
									Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
									HX_STACK_LINE(17)
									Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(17)
									hx::MultEq(te[(int)0],tmp14);
									HX_STACK_LINE(17)
									Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(17)
									hx::MultEq(te[(int)4],tmp15);
									HX_STACK_LINE(17)
									Float tmp16 = _z;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(17)
									hx::MultEq(te[(int)8],tmp16);
									HX_STACK_LINE(17)
									Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(17)
									hx::MultEq(te[(int)1],tmp17);
									HX_STACK_LINE(17)
									Float tmp18 = _y;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(17)
									hx::MultEq(te[(int)5],tmp18);
									HX_STACK_LINE(17)
									Float tmp19 = _z;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(17)
									hx::MultEq(te[(int)9],tmp19);
									HX_STACK_LINE(17)
									Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(17)
									hx::MultEq(te[(int)2],tmp20);
									HX_STACK_LINE(17)
									Float tmp21 = _y;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(17)
									hx::MultEq(te[(int)6],tmp21);
									HX_STACK_LINE(17)
									Float tmp22 = _z;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(17)
									hx::MultEq(te[(int)10],tmp22);
									HX_STACK_LINE(17)
									Float tmp23 = _x;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(17)
									hx::MultEq(te[(int)3],tmp23);
									HX_STACK_LINE(17)
									Float tmp24 = _y;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(17)
									hx::MultEq(te[(int)7],tmp24);
									HX_STACK_LINE(17)
									Float tmp25 = _z;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(17)
									hx::MultEq(te[(int)11],tmp25);
									HX_STACK_LINE(17)
									_this1;
								}
								HX_STACK_LINE(17)
								{
									HX_STACK_LINE(17)
									::phoenix::Matrix tmp12 = t->local->matrix;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(17)
									::phoenix::Matrix _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(17)
									::phoenix::Vector tmp13 = t->local->pos;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(17)
									::phoenix::Vector _v = tmp13;		HX_STACK_VAR(_v,"_v");
									HX_STACK_LINE(17)
									Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(17)
									Float tmp14 = _v->x;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(17)
									te[(int)12] = tmp14;
									HX_STACK_LINE(17)
									Float tmp15 = _v->y;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(17)
									te[(int)13] = tmp15;
									HX_STACK_LINE(17)
									Float tmp16 = _v->z;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(17)
									te[(int)14] = tmp16;
									HX_STACK_LINE(17)
									_this1;
								}
								HX_STACK_LINE(17)
								{
									HX_STACK_LINE(17)
									::phoenix::Matrix tmp12 = t->local->matrix;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(17)
									::phoenix::Matrix _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(17)
										Array< Float > be = t->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(17)
										Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(17)
										Float tmp13 = ae->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(17)
										Float a11 = tmp13;		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(17)
										Float tmp14 = ae->__get((int)4);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(17)
										Float a12 = tmp14;		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(17)
										Float tmp15 = ae->__get((int)8);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(17)
										Float a13 = tmp15;		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(17)
										Float tmp16 = ae->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(17)
										Float a14 = tmp16;		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(17)
										Float tmp17 = ae->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(17)
										Float a21 = tmp17;		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(17)
										Float tmp18 = ae->__get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(17)
										Float a22 = tmp18;		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(17)
										Float tmp19 = ae->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(17)
										Float a23 = tmp19;		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(17)
										Float tmp20 = ae->__get((int)13);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(17)
										Float a24 = tmp20;		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(17)
										Float tmp21 = ae->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(17)
										Float a31 = tmp21;		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(17)
										Float tmp22 = ae->__get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(17)
										Float a32 = tmp22;		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(17)
										Float tmp23 = ae->__get((int)10);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(17)
										Float a33 = tmp23;		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(17)
										Float tmp24 = ae->__get((int)14);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(17)
										Float a34 = tmp24;		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(17)
										Float tmp25 = ae->__get((int)3);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(17)
										Float a41 = tmp25;		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(17)
										Float tmp26 = ae->__get((int)7);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(17)
										Float a42 = tmp26;		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(17)
										Float tmp27 = ae->__get((int)11);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(17)
										Float a43 = tmp27;		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(17)
										Float tmp28 = ae->__get((int)15);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(17)
										Float a44 = tmp28;		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(17)
										Float tmp29 = be->__get((int)0);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(17)
										Float b11 = tmp29;		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(17)
										Float tmp30 = be->__get((int)4);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(17)
										Float b12 = tmp30;		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(17)
										Float tmp31 = be->__get((int)8);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(17)
										Float b13 = tmp31;		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(17)
										Float tmp32 = be->__get((int)12);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(17)
										Float b14 = tmp32;		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(17)
										Float tmp33 = be->__get((int)1);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(17)
										Float b21 = tmp33;		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(17)
										Float tmp34 = be->__get((int)5);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(17)
										Float b22 = tmp34;		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(17)
										Float tmp35 = be->__get((int)9);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(17)
										Float b23 = tmp35;		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(17)
										Float tmp36 = be->__get((int)13);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(17)
										Float b24 = tmp36;		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(17)
										Float tmp37 = be->__get((int)2);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(17)
										Float b31 = tmp37;		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(17)
										Float tmp38 = be->__get((int)6);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(17)
										Float b32 = tmp38;		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(17)
										Float tmp39 = be->__get((int)10);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(17)
										Float b33 = tmp39;		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(17)
										Float tmp40 = be->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(17)
										Float b34 = tmp40;		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(17)
										Float tmp41 = be->__get((int)3);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(17)
										Float b41 = tmp41;		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(17)
										Float tmp42 = be->__get((int)7);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(17)
										Float b42 = tmp42;		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(17)
										Float tmp43 = be->__get((int)11);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(17)
										Float b43 = tmp43;		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(17)
										Float tmp44 = be->__get((int)15);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(17)
										Float b44 = tmp44;		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(17)
										Float tmp45 = (a11 * b11);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(17)
										Float tmp46 = (a12 * b21);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(17)
										Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(17)
										Float tmp48 = (a13 * b31);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(17)
										Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(17)
										Float tmp50 = (a14 * b41);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(17)
										Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(17)
										te[(int)0] = tmp51;
										HX_STACK_LINE(17)
										Float tmp52 = (a11 * b12);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(17)
										Float tmp53 = (a12 * b22);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(17)
										Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(17)
										Float tmp55 = (a13 * b32);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(17)
										Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(17)
										Float tmp57 = (a14 * b42);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(17)
										Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(17)
										te[(int)4] = tmp58;
										HX_STACK_LINE(17)
										Float tmp59 = (a11 * b13);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(17)
										Float tmp60 = (a12 * b23);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(17)
										Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(17)
										Float tmp62 = (a13 * b33);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(17)
										Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(17)
										Float tmp64 = (a14 * b43);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(17)
										Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(17)
										te[(int)8] = tmp65;
										HX_STACK_LINE(17)
										Float tmp66 = (a11 * b14);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(17)
										Float tmp67 = (a12 * b24);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(17)
										Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(17)
										Float tmp69 = (a13 * b34);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(17)
										Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(17)
										Float tmp71 = (a14 * b44);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(17)
										Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(17)
										te[(int)12] = tmp72;
										HX_STACK_LINE(17)
										Float tmp73 = (a21 * b11);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(17)
										Float tmp74 = (a22 * b21);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(17)
										Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(17)
										Float tmp76 = (a23 * b31);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(17)
										Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(17)
										Float tmp78 = (a24 * b41);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(17)
										Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(17)
										te[(int)1] = tmp79;
										HX_STACK_LINE(17)
										Float tmp80 = (a21 * b12);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(17)
										Float tmp81 = (a22 * b22);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(17)
										Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(17)
										Float tmp83 = (a23 * b32);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(17)
										Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(17)
										Float tmp85 = (a24 * b42);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(17)
										Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(17)
										te[(int)5] = tmp86;
										HX_STACK_LINE(17)
										Float tmp87 = (a21 * b13);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(17)
										Float tmp88 = (a22 * b23);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(17)
										Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(17)
										Float tmp90 = (a23 * b33);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(17)
										Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(17)
										Float tmp92 = (a24 * b43);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(17)
										Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(17)
										te[(int)9] = tmp93;
										HX_STACK_LINE(17)
										Float tmp94 = (a21 * b14);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(17)
										Float tmp95 = (a22 * b24);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(17)
										Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(17)
										Float tmp97 = (a23 * b34);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(17)
										Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(17)
										Float tmp99 = (a24 * b44);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(17)
										Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(17)
										te[(int)13] = tmp100;
										HX_STACK_LINE(17)
										Float tmp101 = (a31 * b11);		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(17)
										Float tmp102 = (a32 * b21);		HX_STACK_VAR(tmp102,"tmp102");
										HX_STACK_LINE(17)
										Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
										HX_STACK_LINE(17)
										Float tmp104 = (a33 * b31);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(17)
										Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
										HX_STACK_LINE(17)
										Float tmp106 = (a34 * b41);		HX_STACK_VAR(tmp106,"tmp106");
										HX_STACK_LINE(17)
										Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(17)
										te[(int)2] = tmp107;
										HX_STACK_LINE(17)
										Float tmp108 = (a31 * b12);		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(17)
										Float tmp109 = (a32 * b22);		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(17)
										Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
										HX_STACK_LINE(17)
										Float tmp111 = (a33 * b32);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(17)
										Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
										HX_STACK_LINE(17)
										Float tmp113 = (a34 * b42);		HX_STACK_VAR(tmp113,"tmp113");
										HX_STACK_LINE(17)
										Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
										HX_STACK_LINE(17)
										te[(int)6] = tmp114;
										HX_STACK_LINE(17)
										Float tmp115 = (a31 * b13);		HX_STACK_VAR(tmp115,"tmp115");
										HX_STACK_LINE(17)
										Float tmp116 = (a32 * b23);		HX_STACK_VAR(tmp116,"tmp116");
										HX_STACK_LINE(17)
										Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
										HX_STACK_LINE(17)
										Float tmp118 = (a33 * b33);		HX_STACK_VAR(tmp118,"tmp118");
										HX_STACK_LINE(17)
										Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
										HX_STACK_LINE(17)
										Float tmp120 = (a34 * b43);		HX_STACK_VAR(tmp120,"tmp120");
										HX_STACK_LINE(17)
										Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
										HX_STACK_LINE(17)
										te[(int)10] = tmp121;
										HX_STACK_LINE(17)
										Float tmp122 = (a31 * b14);		HX_STACK_VAR(tmp122,"tmp122");
										HX_STACK_LINE(17)
										Float tmp123 = (a32 * b24);		HX_STACK_VAR(tmp123,"tmp123");
										HX_STACK_LINE(17)
										Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
										HX_STACK_LINE(17)
										Float tmp125 = (a33 * b34);		HX_STACK_VAR(tmp125,"tmp125");
										HX_STACK_LINE(17)
										Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
										HX_STACK_LINE(17)
										Float tmp127 = (a34 * b44);		HX_STACK_VAR(tmp127,"tmp127");
										HX_STACK_LINE(17)
										Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
										HX_STACK_LINE(17)
										te[(int)14] = tmp128;
										HX_STACK_LINE(17)
										Float tmp129 = (a41 * b11);		HX_STACK_VAR(tmp129,"tmp129");
										HX_STACK_LINE(17)
										Float tmp130 = (a42 * b21);		HX_STACK_VAR(tmp130,"tmp130");
										HX_STACK_LINE(17)
										Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
										HX_STACK_LINE(17)
										Float tmp132 = (a43 * b31);		HX_STACK_VAR(tmp132,"tmp132");
										HX_STACK_LINE(17)
										Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
										HX_STACK_LINE(17)
										Float tmp134 = (a44 * b41);		HX_STACK_VAR(tmp134,"tmp134");
										HX_STACK_LINE(17)
										Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
										HX_STACK_LINE(17)
										te[(int)3] = tmp135;
										HX_STACK_LINE(17)
										Float tmp136 = (a41 * b12);		HX_STACK_VAR(tmp136,"tmp136");
										HX_STACK_LINE(17)
										Float tmp137 = (a42 * b22);		HX_STACK_VAR(tmp137,"tmp137");
										HX_STACK_LINE(17)
										Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
										HX_STACK_LINE(17)
										Float tmp139 = (a43 * b32);		HX_STACK_VAR(tmp139,"tmp139");
										HX_STACK_LINE(17)
										Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
										HX_STACK_LINE(17)
										Float tmp141 = (a44 * b42);		HX_STACK_VAR(tmp141,"tmp141");
										HX_STACK_LINE(17)
										Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
										HX_STACK_LINE(17)
										te[(int)7] = tmp142;
										HX_STACK_LINE(17)
										Float tmp143 = (a41 * b13);		HX_STACK_VAR(tmp143,"tmp143");
										HX_STACK_LINE(17)
										Float tmp144 = (a42 * b23);		HX_STACK_VAR(tmp144,"tmp144");
										HX_STACK_LINE(17)
										Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
										HX_STACK_LINE(17)
										Float tmp146 = (a43 * b33);		HX_STACK_VAR(tmp146,"tmp146");
										HX_STACK_LINE(17)
										Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
										HX_STACK_LINE(17)
										Float tmp148 = (a44 * b43);		HX_STACK_VAR(tmp148,"tmp148");
										HX_STACK_LINE(17)
										Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
										HX_STACK_LINE(17)
										te[(int)11] = tmp149;
										HX_STACK_LINE(17)
										Float tmp150 = (a41 * b14);		HX_STACK_VAR(tmp150,"tmp150");
										HX_STACK_LINE(17)
										Float tmp151 = (a42 * b24);		HX_STACK_VAR(tmp151,"tmp151");
										HX_STACK_LINE(17)
										Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
										HX_STACK_LINE(17)
										Float tmp153 = (a43 * b34);		HX_STACK_VAR(tmp153,"tmp153");
										HX_STACK_LINE(17)
										Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
										HX_STACK_LINE(17)
										Float tmp155 = (a44 * b44);		HX_STACK_VAR(tmp155,"tmp155");
										HX_STACK_LINE(17)
										Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
										HX_STACK_LINE(17)
										te[(int)15] = tmp156;
										HX_STACK_LINE(17)
										_this1;
									}
								}
								HX_STACK_LINE(17)
								bool tmp12 = (t->parent != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(17)
								if ((tmp12)){
									HX_STACK_LINE(17)
									::phoenix::Spatial tmp13 = t->get_world();		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(17)
									::phoenix::Spatial _this1 = tmp13;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(17)
									::phoenix::Matrix tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										::phoenix::Matrix tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											::phoenix::Spatial tmp16 = t->get_world();		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(17)
											::phoenix::Spatial _this2 = tmp16;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(17)
											tmp15 = _this2->matrix;
										}
										HX_STACK_LINE(17)
										::phoenix::Matrix _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(17)
										::phoenix::Matrix tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											::phoenix::Spatial tmp17 = t->parent->get_world();		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(17)
											::phoenix::Spatial _this3 = tmp17;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(17)
											tmp16 = _this3->matrix;
										}
										HX_STACK_LINE(17)
										::phoenix::Matrix _a = tmp16;		HX_STACK_VAR(_a,"_a");
										HX_STACK_LINE(17)
										Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(17)
										::phoenix::Matrix tmp17 = t->local->matrix;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(17)
										Array< Float > be = tmp17->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(17)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(17)
										Float tmp18 = ae->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(17)
										Float a11 = tmp18;		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(17)
										Float tmp19 = ae->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(17)
										Float a12 = tmp19;		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(17)
										Float tmp20 = ae->__get((int)8);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(17)
										Float a13 = tmp20;		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(17)
										Float tmp21 = ae->__get((int)12);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(17)
										Float a14 = tmp21;		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(17)
										Float tmp22 = ae->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(17)
										Float a21 = tmp22;		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(17)
										Float tmp23 = ae->__get((int)5);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(17)
										Float a22 = tmp23;		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(17)
										Float tmp24 = ae->__get((int)9);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(17)
										Float a23 = tmp24;		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(17)
										Float tmp25 = ae->__get((int)13);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(17)
										Float a24 = tmp25;		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(17)
										Float tmp26 = ae->__get((int)2);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(17)
										Float a31 = tmp26;		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(17)
										Float tmp27 = ae->__get((int)6);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(17)
										Float a32 = tmp27;		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(17)
										Float tmp28 = ae->__get((int)10);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(17)
										Float a33 = tmp28;		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(17)
										Float tmp29 = ae->__get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(17)
										Float a34 = tmp29;		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(17)
										Float tmp30 = ae->__get((int)3);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(17)
										Float a41 = tmp30;		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(17)
										Float tmp31 = ae->__get((int)7);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(17)
										Float a42 = tmp31;		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(17)
										Float tmp32 = ae->__get((int)11);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(17)
										Float a43 = tmp32;		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(17)
										Float tmp33 = ae->__get((int)15);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(17)
										Float a44 = tmp33;		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(17)
										Float tmp34 = be->__get((int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(17)
										Float b11 = tmp34;		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(17)
										Float tmp35 = be->__get((int)4);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(17)
										Float b12 = tmp35;		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(17)
										Float tmp36 = be->__get((int)8);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(17)
										Float b13 = tmp36;		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(17)
										Float tmp37 = be->__get((int)12);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(17)
										Float b14 = tmp37;		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(17)
										Float tmp38 = be->__get((int)1);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(17)
										Float b21 = tmp38;		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(17)
										Float tmp39 = be->__get((int)5);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(17)
										Float b22 = tmp39;		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(17)
										Float tmp40 = be->__get((int)9);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(17)
										Float b23 = tmp40;		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(17)
										Float tmp41 = be->__get((int)13);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(17)
										Float b24 = tmp41;		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(17)
										Float tmp42 = be->__get((int)2);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(17)
										Float b31 = tmp42;		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(17)
										Float tmp43 = be->__get((int)6);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(17)
										Float b32 = tmp43;		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(17)
										Float tmp44 = be->__get((int)10);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(17)
										Float b33 = tmp44;		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(17)
										Float tmp45 = be->__get((int)14);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(17)
										Float b34 = tmp45;		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(17)
										Float tmp46 = be->__get((int)3);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(17)
										Float b41 = tmp46;		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(17)
										Float tmp47 = be->__get((int)7);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(17)
										Float b42 = tmp47;		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(17)
										Float tmp48 = be->__get((int)11);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(17)
										Float b43 = tmp48;		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(17)
										Float tmp49 = be->__get((int)15);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(17)
										Float b44 = tmp49;		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(17)
										Float tmp50 = (a11 * b11);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(17)
										Float tmp51 = (a12 * b21);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(17)
										Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(17)
										Float tmp53 = (a13 * b31);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(17)
										Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(17)
										Float tmp55 = (a14 * b41);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(17)
										Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(17)
										te[(int)0] = tmp56;
										HX_STACK_LINE(17)
										Float tmp57 = (a11 * b12);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(17)
										Float tmp58 = (a12 * b22);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(17)
										Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(17)
										Float tmp60 = (a13 * b32);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(17)
										Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(17)
										Float tmp62 = (a14 * b42);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(17)
										Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(17)
										te[(int)4] = tmp63;
										HX_STACK_LINE(17)
										Float tmp64 = (a11 * b13);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(17)
										Float tmp65 = (a12 * b23);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(17)
										Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(17)
										Float tmp67 = (a13 * b33);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(17)
										Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(17)
										Float tmp69 = (a14 * b43);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(17)
										Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(17)
										te[(int)8] = tmp70;
										HX_STACK_LINE(17)
										Float tmp71 = (a11 * b14);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(17)
										Float tmp72 = (a12 * b24);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(17)
										Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(17)
										Float tmp74 = (a13 * b34);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(17)
										Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(17)
										Float tmp76 = (a14 * b44);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(17)
										Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(17)
										te[(int)12] = tmp77;
										HX_STACK_LINE(17)
										Float tmp78 = (a21 * b11);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(17)
										Float tmp79 = (a22 * b21);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(17)
										Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(17)
										Float tmp81 = (a23 * b31);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(17)
										Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(17)
										Float tmp83 = (a24 * b41);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(17)
										Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(17)
										te[(int)1] = tmp84;
										HX_STACK_LINE(17)
										Float tmp85 = (a21 * b12);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(17)
										Float tmp86 = (a22 * b22);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(17)
										Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(17)
										Float tmp88 = (a23 * b32);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(17)
										Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(17)
										Float tmp90 = (a24 * b42);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(17)
										Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(17)
										te[(int)5] = tmp91;
										HX_STACK_LINE(17)
										Float tmp92 = (a21 * b13);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(17)
										Float tmp93 = (a22 * b23);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(17)
										Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(17)
										Float tmp95 = (a23 * b33);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(17)
										Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(17)
										Float tmp97 = (a24 * b43);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(17)
										Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(17)
										te[(int)9] = tmp98;
										HX_STACK_LINE(17)
										Float tmp99 = (a21 * b14);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(17)
										Float tmp100 = (a22 * b24);		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(17)
										Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(17)
										Float tmp102 = (a23 * b34);		HX_STACK_VAR(tmp102,"tmp102");
										HX_STACK_LINE(17)
										Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
										HX_STACK_LINE(17)
										Float tmp104 = (a24 * b44);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(17)
										Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
										HX_STACK_LINE(17)
										te[(int)13] = tmp105;
										HX_STACK_LINE(17)
										Float tmp106 = (a31 * b11);		HX_STACK_VAR(tmp106,"tmp106");
										HX_STACK_LINE(17)
										Float tmp107 = (a32 * b21);		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(17)
										Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(17)
										Float tmp109 = (a33 * b31);		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(17)
										Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
										HX_STACK_LINE(17)
										Float tmp111 = (a34 * b41);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(17)
										Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
										HX_STACK_LINE(17)
										te[(int)2] = tmp112;
										HX_STACK_LINE(17)
										Float tmp113 = (a31 * b12);		HX_STACK_VAR(tmp113,"tmp113");
										HX_STACK_LINE(17)
										Float tmp114 = (a32 * b22);		HX_STACK_VAR(tmp114,"tmp114");
										HX_STACK_LINE(17)
										Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
										HX_STACK_LINE(17)
										Float tmp116 = (a33 * b32);		HX_STACK_VAR(tmp116,"tmp116");
										HX_STACK_LINE(17)
										Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
										HX_STACK_LINE(17)
										Float tmp118 = (a34 * b42);		HX_STACK_VAR(tmp118,"tmp118");
										HX_STACK_LINE(17)
										Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
										HX_STACK_LINE(17)
										te[(int)6] = tmp119;
										HX_STACK_LINE(17)
										Float tmp120 = (a31 * b13);		HX_STACK_VAR(tmp120,"tmp120");
										HX_STACK_LINE(17)
										Float tmp121 = (a32 * b23);		HX_STACK_VAR(tmp121,"tmp121");
										HX_STACK_LINE(17)
										Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
										HX_STACK_LINE(17)
										Float tmp123 = (a33 * b33);		HX_STACK_VAR(tmp123,"tmp123");
										HX_STACK_LINE(17)
										Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
										HX_STACK_LINE(17)
										Float tmp125 = (a34 * b43);		HX_STACK_VAR(tmp125,"tmp125");
										HX_STACK_LINE(17)
										Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
										HX_STACK_LINE(17)
										te[(int)10] = tmp126;
										HX_STACK_LINE(17)
										Float tmp127 = (a31 * b14);		HX_STACK_VAR(tmp127,"tmp127");
										HX_STACK_LINE(17)
										Float tmp128 = (a32 * b24);		HX_STACK_VAR(tmp128,"tmp128");
										HX_STACK_LINE(17)
										Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
										HX_STACK_LINE(17)
										Float tmp130 = (a33 * b34);		HX_STACK_VAR(tmp130,"tmp130");
										HX_STACK_LINE(17)
										Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
										HX_STACK_LINE(17)
										Float tmp132 = (a34 * b44);		HX_STACK_VAR(tmp132,"tmp132");
										HX_STACK_LINE(17)
										Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
										HX_STACK_LINE(17)
										te[(int)14] = tmp133;
										HX_STACK_LINE(17)
										Float tmp134 = (a41 * b11);		HX_STACK_VAR(tmp134,"tmp134");
										HX_STACK_LINE(17)
										Float tmp135 = (a42 * b21);		HX_STACK_VAR(tmp135,"tmp135");
										HX_STACK_LINE(17)
										Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
										HX_STACK_LINE(17)
										Float tmp137 = (a43 * b31);		HX_STACK_VAR(tmp137,"tmp137");
										HX_STACK_LINE(17)
										Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
										HX_STACK_LINE(17)
										Float tmp139 = (a44 * b41);		HX_STACK_VAR(tmp139,"tmp139");
										HX_STACK_LINE(17)
										Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
										HX_STACK_LINE(17)
										te[(int)3] = tmp140;
										HX_STACK_LINE(17)
										Float tmp141 = (a41 * b12);		HX_STACK_VAR(tmp141,"tmp141");
										HX_STACK_LINE(17)
										Float tmp142 = (a42 * b22);		HX_STACK_VAR(tmp142,"tmp142");
										HX_STACK_LINE(17)
										Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
										HX_STACK_LINE(17)
										Float tmp144 = (a43 * b32);		HX_STACK_VAR(tmp144,"tmp144");
										HX_STACK_LINE(17)
										Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
										HX_STACK_LINE(17)
										Float tmp146 = (a44 * b42);		HX_STACK_VAR(tmp146,"tmp146");
										HX_STACK_LINE(17)
										Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
										HX_STACK_LINE(17)
										te[(int)7] = tmp147;
										HX_STACK_LINE(17)
										Float tmp148 = (a41 * b13);		HX_STACK_VAR(tmp148,"tmp148");
										HX_STACK_LINE(17)
										Float tmp149 = (a42 * b23);		HX_STACK_VAR(tmp149,"tmp149");
										HX_STACK_LINE(17)
										Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
										HX_STACK_LINE(17)
										Float tmp151 = (a43 * b33);		HX_STACK_VAR(tmp151,"tmp151");
										HX_STACK_LINE(17)
										Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
										HX_STACK_LINE(17)
										Float tmp153 = (a44 * b43);		HX_STACK_VAR(tmp153,"tmp153");
										HX_STACK_LINE(17)
										Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
										HX_STACK_LINE(17)
										te[(int)11] = tmp154;
										HX_STACK_LINE(17)
										Float tmp155 = (a41 * b14);		HX_STACK_VAR(tmp155,"tmp155");
										HX_STACK_LINE(17)
										Float tmp156 = (a42 * b24);		HX_STACK_VAR(tmp156,"tmp156");
										HX_STACK_LINE(17)
										Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
										HX_STACK_LINE(17)
										Float tmp158 = (a43 * b34);		HX_STACK_VAR(tmp158,"tmp158");
										HX_STACK_LINE(17)
										Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
										HX_STACK_LINE(17)
										Float tmp160 = (a44 * b44);		HX_STACK_VAR(tmp160,"tmp160");
										HX_STACK_LINE(17)
										Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
										HX_STACK_LINE(17)
										te[(int)15] = tmp161;
										HX_STACK_LINE(17)
										tmp14 = _this2;
									}
									HX_STACK_LINE(17)
									::phoenix::Matrix _m = tmp14;		HX_STACK_VAR(_m,"_m");
									HX_STACK_LINE(17)
									_this1->matrix = _m;
									HX_STACK_LINE(17)
									bool tmp15 = (_m != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(17)
									if ((tmp15)){
										HX_STACK_LINE(17)
										::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											cpp::ArrayBase array = _this1->matrix->elements;		HX_STACK_VAR(array,"array");
											HX_STACK_LINE(17)
											::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(17)
											bool tmp17 = (array != null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(17)
											if ((tmp17)){
												HX_STACK_LINE(17)
												::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(17)
												{
													HX_STACK_LINE(17)
													::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(17)
													::snow::api::buffers::ArrayBufferView _this2 = tmp19;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(17)
													_this2->byteOffset = (int)0;
													HX_STACK_LINE(17)
													_this2->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
													HX_STACK_LINE(17)
													int tmp20 = (_this2->length * _this2->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(17)
													_this2->byteLength = tmp20;
													HX_STACK_LINE(17)
													::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(17)
													{
														HX_STACK_LINE(17)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(17)
														int tmp22 = _this2->byteLength;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(17)
														::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(17)
														this2 = tmp23;
														HX_STACK_LINE(17)
														tmp21 = this2;
													}
													HX_STACK_LINE(17)
													_this2->buffer = tmp21;
													HX_STACK_LINE(17)
													_this2->copyFromArray(((Array< Float >)(array)),null());
													HX_STACK_LINE(17)
													tmp18 = _this2;
												}
												HX_STACK_LINE(17)
												this1 = tmp18;
											}
											else{
												HX_STACK_LINE(17)
												HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
											}
											HX_STACK_LINE(17)
											tmp16 = this1;
										}
										HX_STACK_LINE(17)
										_this1->floats = tmp16;
									}
									HX_STACK_LINE(17)
									_this1->matrix;
								}
								else{
									HX_STACK_LINE(17)
									::phoenix::Spatial tmp13 = t->get_world();		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(17)
									::phoenix::Spatial _this1 = tmp13;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(17)
									::phoenix::Matrix tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(17)
									{
										HX_STACK_LINE(17)
										::phoenix::Matrix tmp15 = t->local->matrix;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(17)
										Array< Float > te = tmp15->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(17)
										Float tmp16 = te->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(17)
										Float tmp17 = te->__get((int)4);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(17)
										Float tmp18 = te->__get((int)8);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(17)
										Float tmp19 = te->__get((int)12);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(17)
										Float tmp20 = te->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(17)
										Float tmp21 = te->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(17)
										Float tmp22 = te->__get((int)9);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(17)
										Float tmp23 = te->__get((int)13);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(17)
										Float tmp24 = te->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(17)
										Float tmp25 = te->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(17)
										Float tmp26 = te->__get((int)10);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(17)
										Float tmp27 = te->__get((int)14);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(17)
										Float tmp28 = te->__get((int)3);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(17)
										Float tmp29 = te->__get((int)7);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(17)
										Float tmp30 = te->__get((int)11);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(17)
										Float tmp31 = te->__get((int)15);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(17)
										tmp14 = ::phoenix::Matrix_obj::__new(tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31);
									}
									HX_STACK_LINE(17)
									::phoenix::Matrix _m = tmp14;		HX_STACK_VAR(_m,"_m");
									HX_STACK_LINE(17)
									_this1->matrix = _m;
									HX_STACK_LINE(17)
									bool tmp15 = (_m != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(17)
									if ((tmp15)){
										HX_STACK_LINE(17)
										::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											cpp::ArrayBase array = _this1->matrix->elements;		HX_STACK_VAR(array,"array");
											HX_STACK_LINE(17)
											::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(17)
											bool tmp17 = (array != null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(17)
											if ((tmp17)){
												HX_STACK_LINE(17)
												::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(17)
												{
													HX_STACK_LINE(17)
													::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(17)
													::snow::api::buffers::ArrayBufferView _this2 = tmp19;		HX_STACK_VAR(_this2,"_this2");
													HX_STACK_LINE(17)
													_this2->byteOffset = (int)0;
													HX_STACK_LINE(17)
													_this2->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
													HX_STACK_LINE(17)
													int tmp20 = (_this2->length * _this2->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(17)
													_this2->byteLength = tmp20;
													HX_STACK_LINE(17)
													::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(17)
													{
														HX_STACK_LINE(17)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(17)
														int tmp22 = _this2->byteLength;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(17)
														::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(17)
														this2 = tmp23;
														HX_STACK_LINE(17)
														tmp21 = this2;
													}
													HX_STACK_LINE(17)
													_this2->buffer = tmp21;
													HX_STACK_LINE(17)
													_this2->copyFromArray(((Array< Float >)(array)),null());
													HX_STACK_LINE(17)
													tmp18 = _this2;
												}
												HX_STACK_LINE(17)
												this1 = tmp18;
											}
											else{
												HX_STACK_LINE(17)
												HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
											}
											HX_STACK_LINE(17)
											tmp16 = this1;
										}
										HX_STACK_LINE(17)
										_this1->floats = tmp16;
									}
									HX_STACK_LINE(17)
									_this1->matrix;
								}
								HX_STACK_LINE(17)
								{
									HX_STACK_LINE(17)
									::phoenix::Spatial tmp13 = t->get_world();		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(17)
									::phoenix::Spatial _this1 = tmp13;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(17)
									bool tmp14 = _this1->auto_decompose;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(17)
									if ((tmp14)){
										HX_STACK_LINE(17)
										::phoenix::MatrixTransform tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
											HX_STACK_LINE(17)
											::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
											HX_STACK_LINE(17)
											::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
											HX_STACK_LINE(17)
											::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
											HX_STACK_LINE(17)
											Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(17)
											::phoenix::Matrix tmp16 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(17)
											::phoenix::Matrix matrix = tmp16;		HX_STACK_VAR(matrix,"matrix");
											HX_STACK_LINE(17)
											Float tmp17 = te->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(17)
											Float _ax_x = tmp17;		HX_STACK_VAR(_ax_x,"_ax_x");
											HX_STACK_LINE(17)
											Float tmp18 = te->__get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(17)
											Float _ax_y = tmp18;		HX_STACK_VAR(_ax_y,"_ax_y");
											HX_STACK_LINE(17)
											Float tmp19 = te->__get((int)2);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(17)
											Float _ax_z = tmp19;		HX_STACK_VAR(_ax_z,"_ax_z");
											HX_STACK_LINE(17)
											Float tmp20 = te->__get((int)4);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(17)
											Float _ay_x = tmp20;		HX_STACK_VAR(_ay_x,"_ay_x");
											HX_STACK_LINE(17)
											Float tmp21 = te->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(17)
											Float _ay_y = tmp21;		HX_STACK_VAR(_ay_y,"_ay_y");
											HX_STACK_LINE(17)
											Float tmp22 = te->__get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(17)
											Float _ay_z = tmp22;		HX_STACK_VAR(_ay_z,"_ay_z");
											HX_STACK_LINE(17)
											Float tmp23 = te->__get((int)8);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(17)
											Float _az_x = tmp23;		HX_STACK_VAR(_az_x,"_az_x");
											HX_STACK_LINE(17)
											Float tmp24 = te->__get((int)9);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(17)
											Float _az_y = tmp24;		HX_STACK_VAR(_az_y,"_az_y");
											HX_STACK_LINE(17)
											Float tmp25 = te->__get((int)10);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(17)
											Float _az_z = tmp25;		HX_STACK_VAR(_az_z,"_az_z");
											HX_STACK_LINE(17)
											Float tmp26 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(17)
											Float tmp27 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(17)
											Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(17)
											Float tmp29 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(17)
											Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(17)
											Float tmp31 = ::Math_obj::sqrt(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(17)
											Float _ax_length = tmp31;		HX_STACK_VAR(_ax_length,"_ax_length");
											HX_STACK_LINE(17)
											Float tmp32 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(17)
											Float tmp33 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(17)
											Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(17)
											Float tmp35 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(17)
											Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(17)
											Float tmp37 = ::Math_obj::sqrt(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(17)
											Float _ay_length = tmp37;		HX_STACK_VAR(_ay_length,"_ay_length");
											HX_STACK_LINE(17)
											Float tmp38 = (_az_x * _az_x);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(17)
											Float tmp39 = (_az_y * _az_y);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(17)
											Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(17)
											Float tmp41 = (_az_z * _az_z);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(17)
											Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(17)
											Float tmp43 = ::Math_obj::sqrt(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(17)
											Float _az_length = tmp43;		HX_STACK_VAR(_az_length,"_az_length");
											HX_STACK_LINE(17)
											bool tmp44 = (_quaternion == null());		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(17)
											if ((tmp44)){
												HX_STACK_LINE(17)
												::phoenix::Quaternion tmp45 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(17)
												_quaternion = tmp45;
											}
											HX_STACK_LINE(17)
											bool tmp45 = (_position == null());		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(17)
											if ((tmp45)){
												HX_STACK_LINE(17)
												Float tmp46 = te->__get((int)12);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(17)
												Float tmp47 = te->__get((int)13);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(17)
												Float tmp48 = te->__get((int)14);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(17)
												::phoenix::Vector tmp49 = ::phoenix::Vector_obj::__new(tmp46,tmp47,tmp48,null());		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(17)
												_position = tmp49;
											}
											else{
												HX_STACK_LINE(17)
												{
													HX_STACK_LINE(17)
													Float tmp46 = te->__get((int)12);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(17)
													Float _x = tmp46;		HX_STACK_VAR(_x,"_x");
													HX_STACK_LINE(17)
													_position->x = _x;
													HX_STACK_LINE(17)
													bool tmp47 = _position->_construct;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(17)
													if ((tmp47)){
														HX_STACK_LINE(17)
														_position->x;
													}
													else{
														HX_STACK_LINE(17)
														bool tmp48 = (_position->listen_x != null());		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(17)
														bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(17)
														if ((tmp48)){
															HX_STACK_LINE(17)
															bool tmp50 = _position->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(17)
															bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(17)
															tmp49 = !(tmp51);
														}
														else{
															HX_STACK_LINE(17)
															tmp49 = false;
														}
														HX_STACK_LINE(17)
														if ((tmp49)){
															HX_STACK_LINE(17)
															Float tmp50 = _x;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(17)
															_position->listen_x(tmp50);
														}
														HX_STACK_LINE(17)
														_position->x;
													}
												}
												HX_STACK_LINE(17)
												{
													HX_STACK_LINE(17)
													Float tmp46 = te->__get((int)13);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(17)
													Float _y = tmp46;		HX_STACK_VAR(_y,"_y");
													HX_STACK_LINE(17)
													_position->y = _y;
													HX_STACK_LINE(17)
													bool tmp47 = _position->_construct;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(17)
													if ((tmp47)){
														HX_STACK_LINE(17)
														_position->y;
													}
													else{
														HX_STACK_LINE(17)
														bool tmp48 = (_position->listen_y != null());		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(17)
														bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(17)
														if ((tmp48)){
															HX_STACK_LINE(17)
															bool tmp50 = _position->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(17)
															bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(17)
															tmp49 = !(tmp51);
														}
														else{
															HX_STACK_LINE(17)
															tmp49 = false;
														}
														HX_STACK_LINE(17)
														if ((tmp49)){
															HX_STACK_LINE(17)
															Float tmp50 = _y;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(17)
															_position->listen_y(tmp50);
														}
														HX_STACK_LINE(17)
														_position->y;
													}
												}
												HX_STACK_LINE(17)
												{
													HX_STACK_LINE(17)
													Float tmp46 = te->__get((int)14);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(17)
													Float _z = tmp46;		HX_STACK_VAR(_z,"_z");
													HX_STACK_LINE(17)
													_position->z = _z;
													HX_STACK_LINE(17)
													bool tmp47 = _position->_construct;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(17)
													if ((tmp47)){
														HX_STACK_LINE(17)
														_position->z;
													}
													else{
														HX_STACK_LINE(17)
														bool tmp48 = (_position->listen_z != null());		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(17)
														bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(17)
														if ((tmp48)){
															HX_STACK_LINE(17)
															bool tmp50 = _position->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(17)
															bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(17)
															tmp49 = !(tmp51);
														}
														else{
															HX_STACK_LINE(17)
															tmp49 = false;
														}
														HX_STACK_LINE(17)
														if ((tmp49)){
															HX_STACK_LINE(17)
															Float tmp50 = _z;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(17)
															_position->listen_z(tmp50);
														}
														HX_STACK_LINE(17)
														_position->z;
													}
												}
											}
											HX_STACK_LINE(17)
											bool tmp46 = (_scale == null());		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(17)
											if ((tmp46)){
												HX_STACK_LINE(17)
												::phoenix::Vector tmp47 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(17)
												_scale = tmp47;
											}
											else{
												HX_STACK_LINE(17)
												{
													HX_STACK_LINE(17)
													_scale->x = _ax_length;
													HX_STACK_LINE(17)
													bool tmp47 = _scale->_construct;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(17)
													if ((tmp47)){
														HX_STACK_LINE(17)
														_scale->x;
													}
													else{
														HX_STACK_LINE(17)
														bool tmp48 = (_scale->listen_x != null());		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(17)
														bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(17)
														if ((tmp48)){
															HX_STACK_LINE(17)
															bool tmp50 = _scale->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(17)
															bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(17)
															tmp49 = !(tmp51);
														}
														else{
															HX_STACK_LINE(17)
															tmp49 = false;
														}
														HX_STACK_LINE(17)
														if ((tmp49)){
															HX_STACK_LINE(17)
															Float tmp50 = _ax_length;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(17)
															_scale->listen_x(tmp50);
														}
														HX_STACK_LINE(17)
														_scale->x;
													}
												}
												HX_STACK_LINE(17)
												{
													HX_STACK_LINE(17)
													_scale->y = _ay_length;
													HX_STACK_LINE(17)
													bool tmp47 = _scale->_construct;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(17)
													if ((tmp47)){
														HX_STACK_LINE(17)
														_scale->y;
													}
													else{
														HX_STACK_LINE(17)
														bool tmp48 = (_scale->listen_y != null());		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(17)
														bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(17)
														if ((tmp48)){
															HX_STACK_LINE(17)
															bool tmp50 = _scale->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(17)
															bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(17)
															tmp49 = !(tmp51);
														}
														else{
															HX_STACK_LINE(17)
															tmp49 = false;
														}
														HX_STACK_LINE(17)
														if ((tmp49)){
															HX_STACK_LINE(17)
															Float tmp50 = _ay_length;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(17)
															_scale->listen_y(tmp50);
														}
														HX_STACK_LINE(17)
														_scale->y;
													}
												}
												HX_STACK_LINE(17)
												{
													HX_STACK_LINE(17)
													_scale->z = _az_length;
													HX_STACK_LINE(17)
													bool tmp47 = _scale->_construct;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(17)
													if ((tmp47)){
														HX_STACK_LINE(17)
														_scale->z;
													}
													else{
														HX_STACK_LINE(17)
														bool tmp48 = (_scale->listen_z != null());		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(17)
														bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(17)
														if ((tmp48)){
															HX_STACK_LINE(17)
															bool tmp50 = _scale->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(17)
															bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(17)
															tmp49 = !(tmp51);
														}
														else{
															HX_STACK_LINE(17)
															tmp49 = false;
														}
														HX_STACK_LINE(17)
														if ((tmp49)){
															HX_STACK_LINE(17)
															Float tmp50 = _az_length;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(17)
															_scale->listen_z(tmp50);
														}
														HX_STACK_LINE(17)
														_scale->z;
													}
												}
											}
											HX_STACK_LINE(17)
											matrix->elements = _this2->elements->concat(Array_obj< Float >::__new());
											HX_STACK_LINE(17)
											Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
											HX_STACK_LINE(17)
											Float tmp47 = _ax_length;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(17)
											hx::DivEq(me[(int)0],tmp47);
											HX_STACK_LINE(17)
											Float tmp48 = _ax_length;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(17)
											hx::DivEq(me[(int)1],tmp48);
											HX_STACK_LINE(17)
											Float tmp49 = _ax_length;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(17)
											hx::DivEq(me[(int)2],tmp49);
											HX_STACK_LINE(17)
											Float tmp50 = _ay_length;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(17)
											hx::DivEq(me[(int)4],tmp50);
											HX_STACK_LINE(17)
											Float tmp51 = _ay_length;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(17)
											hx::DivEq(me[(int)5],tmp51);
											HX_STACK_LINE(17)
											Float tmp52 = _ay_length;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(17)
											hx::DivEq(me[(int)6],tmp52);
											HX_STACK_LINE(17)
											Float tmp53 = _az_length;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(17)
											hx::DivEq(me[(int)8],tmp53);
											HX_STACK_LINE(17)
											Float tmp54 = _az_length;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(17)
											hx::DivEq(me[(int)9],tmp54);
											HX_STACK_LINE(17)
											Float tmp55 = _az_length;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(17)
											hx::DivEq(me[(int)10],tmp55);
											HX_STACK_LINE(17)
											::phoenix::Matrix tmp56 = matrix;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(17)
											_quaternion->setFromRotationMatrix(tmp56);
											HX_STACK_LINE(17)
											bool tmp57 = (_this2->_transform == null());		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(17)
											if ((tmp57)){
												HX_STACK_LINE(17)
												::phoenix::MatrixTransform tmp58 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(17)
												_this2->_transform = tmp58;
											}
											else{
												HX_STACK_LINE(17)
												_this2->_transform->pos = _position;
												HX_STACK_LINE(17)
												_this2->_transform->rotation = _quaternion;
												HX_STACK_LINE(17)
												_this2->_transform->scale = _scale;
											}
											HX_STACK_LINE(17)
											tmp15 = _this2->_transform;
										}
										HX_STACK_LINE(17)
										::phoenix::MatrixTransform _transform = tmp15;		HX_STACK_VAR(_transform,"_transform");
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
											HX_STACK_LINE(17)
											_this1->pos = _p;
											HX_STACK_LINE(17)
											bool tmp16 = (_p != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(17)
											if ((tmp16)){
												HX_STACK_LINE(17)
												::phoenix::Vector tmp17 = _this1->pos;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(17)
												Dynamic tmp18 = _this1->_pos_change_dyn();		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(17)
												::phoenix::Vector_obj::Listen(tmp17,tmp18);
												HX_STACK_LINE(17)
												bool tmp19 = (_this1->pos_changed != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(17)
												bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(17)
												if ((tmp19)){
													HX_STACK_LINE(17)
													bool tmp21 = _this1->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(17)
													bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(17)
													tmp20 = !(tmp22);
												}
												else{
													HX_STACK_LINE(17)
													tmp20 = false;
												}
												HX_STACK_LINE(17)
												if ((tmp20)){
													HX_STACK_LINE(17)
													::phoenix::Vector tmp21 = _this1->pos;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(17)
													_this1->pos_changed(tmp21);
												}
											}
											HX_STACK_LINE(17)
											_this1->pos;
										}
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
											HX_STACK_LINE(17)
											_this1->rotation = _r;
											HX_STACK_LINE(17)
											bool tmp16 = (_r != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(17)
											if ((tmp16)){
												HX_STACK_LINE(17)
												{
													HX_STACK_LINE(17)
													::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
													HX_STACK_LINE(17)
													Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
													HX_STACK_LINE(17)
													_q->listen_x = listener;
													HX_STACK_LINE(17)
													_q->listen_y = listener;
													HX_STACK_LINE(17)
													_q->listen_z = listener;
													HX_STACK_LINE(17)
													_q->listen_w = listener;
												}
												HX_STACK_LINE(17)
												bool tmp17 = (_this1->rotation_changed != null());		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(17)
												bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(17)
												if ((tmp17)){
													HX_STACK_LINE(17)
													bool tmp19 = _this1->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(17)
													bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(17)
													tmp18 = !(tmp20);
												}
												else{
													HX_STACK_LINE(17)
													tmp18 = false;
												}
												HX_STACK_LINE(17)
												if ((tmp18)){
													HX_STACK_LINE(17)
													::phoenix::Quaternion tmp19 = _this1->rotation;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(17)
													_this1->rotation_changed(tmp19);
												}
											}
											HX_STACK_LINE(17)
											_this1->rotation;
										}
										HX_STACK_LINE(17)
										{
											HX_STACK_LINE(17)
											::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
											HX_STACK_LINE(17)
											_this1->scale = _s;
											HX_STACK_LINE(17)
											bool tmp16 = (_s != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(17)
											if ((tmp16)){
												HX_STACK_LINE(17)
												::phoenix::Vector tmp17 = _this1->scale;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(17)
												Dynamic tmp18 = _this1->_scale_change_dyn();		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(17)
												::phoenix::Vector_obj::Listen(tmp17,tmp18);
												HX_STACK_LINE(17)
												bool tmp19 = (_this1->scale_changed != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(17)
												bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(17)
												if ((tmp19)){
													HX_STACK_LINE(17)
													bool tmp21 = _this1->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(17)
													bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(17)
													tmp20 = !(tmp22);
												}
												else{
													HX_STACK_LINE(17)
													tmp20 = false;
												}
												HX_STACK_LINE(17)
												if ((tmp20)){
													HX_STACK_LINE(17)
													::phoenix::Vector tmp21 = _this1->scale;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(17)
													_this1->scale_changed(tmp21);
												}
											}
											HX_STACK_LINE(17)
											_this1->scale;
										}
									}
									HX_STACK_LINE(17)
									_this1;
								}
								HX_STACK_LINE(17)
								{
									HX_STACK_LINE(17)
									t->dirty = false;
									HX_STACK_LINE(17)
									bool tmp13 = t->dirty;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(17)
									bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(17)
									bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(17)
									if ((tmp14)){
										HX_STACK_LINE(17)
										bool tmp16 = t->_setup;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(17)
										bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(17)
										bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(17)
										tmp15 = !(tmp18);
									}
									else{
										HX_STACK_LINE(17)
										tmp15 = false;
									}
									HX_STACK_LINE(17)
									bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(17)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(17)
									if ((tmp16)){
										HX_STACK_LINE(17)
										tmp17 = (t->_dirty_handlers != null());
									}
									else{
										HX_STACK_LINE(17)
										tmp17 = false;
									}
									HX_STACK_LINE(17)
									bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(17)
									if ((tmp17)){
										HX_STACK_LINE(17)
										int tmp19 = t->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(17)
										int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(17)
										tmp18 = (tmp20 > (int)0);
									}
									else{
										HX_STACK_LINE(17)
										tmp18 = false;
									}
									HX_STACK_LINE(17)
									if ((tmp18)){
										HX_STACK_LINE(17)
										int _g = (int)0;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(17)
										cpp::ArrayBase _g1 = t->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(17)
										while((true)){
											HX_STACK_LINE(17)
											bool tmp19 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(17)
											bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(17)
											if ((tmp20)){
												HX_STACK_LINE(17)
												break;
											}
											HX_STACK_LINE(17)
											Dynamic tmp21 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(17)
											Dynamic _handler = tmp21;		HX_STACK_VAR(_handler,"_handler");
											HX_STACK_LINE(17)
											++(_g);
											HX_STACK_LINE(17)
											bool tmp22 = (_handler != null());		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(17)
											if ((tmp22)){
												HX_STACK_LINE(17)
												::phoenix::Transform tmp23 = t;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(17)
												_handler(tmp23).Cast< Void >();
											}
										}
									}
									HX_STACK_LINE(17)
									t->dirty;
								}
								HX_STACK_LINE(17)
								t->_cleaning = false;
								HX_STACK_LINE(17)
								bool tmp13 = (t->_clean_handlers != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(17)
								bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(17)
								if ((tmp13)){
									HX_STACK_LINE(17)
									int tmp15 = t->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(17)
									int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(17)
									tmp14 = (tmp16 > (int)0);
								}
								else{
									HX_STACK_LINE(17)
									tmp14 = false;
								}
								HX_STACK_LINE(17)
								if ((tmp14)){
									HX_STACK_LINE(17)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(17)
									cpp::ArrayBase _g1 = t->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(17)
									while((true)){
										HX_STACK_LINE(17)
										bool tmp15 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(17)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(17)
										if ((tmp16)){
											HX_STACK_LINE(17)
											break;
										}
										HX_STACK_LINE(17)
										Dynamic tmp17 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(17)
										Dynamic _handler = tmp17;		HX_STACK_VAR(_handler,"_handler");
										HX_STACK_LINE(17)
										++(_g);
										HX_STACK_LINE(17)
										bool tmp18 = (_handler != null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(17)
										if ((tmp18)){
											HX_STACK_LINE(17)
											::phoenix::Transform tmp19 = t;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(17)
											_handler(tmp19).Cast< Void >();
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(17)
					tmp4 = t->world;
				}
				HX_STACK_LINE(17)
				::phoenix::Spatial _this1 = tmp4;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(17)
				tmp3 = _this1->matrix;
			}
			HX_STACK_LINE(17)
			::phoenix::Matrix _this1 = tmp3;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				::phoenix::Matrix tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(17)
				{
					HX_STACK_LINE(17)
					Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(17)
					Float tmp5 = te->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(17)
					Float tmp6 = te->__get((int)4);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(17)
					Float tmp7 = te->__get((int)8);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(17)
					Float tmp8 = te->__get((int)12);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(17)
					Float tmp9 = te->__get((int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(17)
					Float tmp10 = te->__get((int)5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(17)
					Float tmp11 = te->__get((int)9);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(17)
					Float tmp12 = te->__get((int)13);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(17)
					Float tmp13 = te->__get((int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(17)
					Float tmp14 = te->__get((int)6);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(17)
					Float tmp15 = te->__get((int)10);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(17)
					Float tmp16 = te->__get((int)14);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(17)
					Float tmp17 = te->__get((int)3);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(17)
					Float tmp18 = te->__get((int)7);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(17)
					Float tmp19 = te->__get((int)11);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(17)
					Float tmp20 = te->__get((int)15);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(17)
					tmp4 = ::phoenix::Matrix_obj::__new(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,tmp20);
				}
				HX_STACK_LINE(17)
				::phoenix::Matrix _this2 = tmp4;		HX_STACK_VAR(_this2,"_this2");
				HX_STACK_LINE(17)
				Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(17)
				Array< Float > me = _this1->elements;		HX_STACK_VAR(me,"me");
				HX_STACK_LINE(17)
				Float tmp5 = me->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(17)
				Float n11 = tmp5;		HX_STACK_VAR(n11,"n11");
				HX_STACK_LINE(17)
				Float tmp6 = me->__get((int)4);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(17)
				Float n12 = tmp6;		HX_STACK_VAR(n12,"n12");
				HX_STACK_LINE(17)
				Float tmp7 = me->__get((int)8);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(17)
				Float n13 = tmp7;		HX_STACK_VAR(n13,"n13");
				HX_STACK_LINE(17)
				Float tmp8 = me->__get((int)12);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(17)
				Float n14 = tmp8;		HX_STACK_VAR(n14,"n14");
				HX_STACK_LINE(17)
				Float tmp9 = me->__get((int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(17)
				Float n21 = tmp9;		HX_STACK_VAR(n21,"n21");
				HX_STACK_LINE(17)
				Float tmp10 = me->__get((int)5);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(17)
				Float n22 = tmp10;		HX_STACK_VAR(n22,"n22");
				HX_STACK_LINE(17)
				Float tmp11 = me->__get((int)9);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(17)
				Float n23 = tmp11;		HX_STACK_VAR(n23,"n23");
				HX_STACK_LINE(17)
				Float tmp12 = me->__get((int)13);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(17)
				Float n24 = tmp12;		HX_STACK_VAR(n24,"n24");
				HX_STACK_LINE(17)
				Float tmp13 = me->__get((int)2);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(17)
				Float n31 = tmp13;		HX_STACK_VAR(n31,"n31");
				HX_STACK_LINE(17)
				Float tmp14 = me->__get((int)6);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(17)
				Float n32 = tmp14;		HX_STACK_VAR(n32,"n32");
				HX_STACK_LINE(17)
				Float tmp15 = me->__get((int)10);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(17)
				Float n33 = tmp15;		HX_STACK_VAR(n33,"n33");
				HX_STACK_LINE(17)
				Float tmp16 = me->__get((int)14);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(17)
				Float n34 = tmp16;		HX_STACK_VAR(n34,"n34");
				HX_STACK_LINE(17)
				Float tmp17 = me->__get((int)3);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(17)
				Float n41 = tmp17;		HX_STACK_VAR(n41,"n41");
				HX_STACK_LINE(17)
				Float tmp18 = me->__get((int)7);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(17)
				Float n42 = tmp18;		HX_STACK_VAR(n42,"n42");
				HX_STACK_LINE(17)
				Float tmp19 = me->__get((int)11);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(17)
				Float n43 = tmp19;		HX_STACK_VAR(n43,"n43");
				HX_STACK_LINE(17)
				Float tmp20 = me->__get((int)15);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(17)
				Float n44 = tmp20;		HX_STACK_VAR(n44,"n44");
				HX_STACK_LINE(17)
				Float tmp21 = (n23 * n34);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(17)
				Float tmp22 = n42;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(17)
				Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(17)
				Float tmp24 = (n24 * n33);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(17)
				Float tmp25 = n42;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(17)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(17)
				Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(17)
				Float tmp28 = (n24 * n32);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(17)
				Float tmp29 = n43;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(17)
				Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(17)
				Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(17)
				Float tmp32 = (n22 * n34);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(17)
				Float tmp33 = n43;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(17)
				Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(17)
				Float tmp35 = (tmp31 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(17)
				Float tmp36 = (n23 * n32);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(17)
				Float tmp37 = n44;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(17)
				Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(17)
				Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(17)
				Float tmp40 = (n22 * n33);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(17)
				Float tmp41 = n44;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(17)
				Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(17)
				Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(17)
				te[(int)0] = tmp43;
				HX_STACK_LINE(17)
				Float tmp44 = (n14 * n33);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(17)
				Float tmp45 = n42;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(17)
				Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(17)
				Float tmp47 = (n13 * n34);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(17)
				Float tmp48 = n42;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(17)
				Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(17)
				Float tmp50 = (tmp46 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(17)
				Float tmp51 = (n14 * n32);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(17)
				Float tmp52 = n43;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(17)
				Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(17)
				Float tmp54 = (tmp50 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(17)
				Float tmp55 = (n12 * n34);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(17)
				Float tmp56 = n43;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(17)
				Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(17)
				Float tmp58 = (tmp54 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(17)
				Float tmp59 = (n13 * n32);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(17)
				Float tmp60 = n44;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(17)
				Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(17)
				Float tmp62 = (tmp58 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(17)
				Float tmp63 = (n12 * n33);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(17)
				Float tmp64 = n44;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(17)
				Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(17)
				Float tmp66 = (tmp62 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(17)
				te[(int)4] = tmp66;
				HX_STACK_LINE(17)
				Float tmp67 = (n13 * n24);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(17)
				Float tmp68 = n42;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(17)
				Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(17)
				Float tmp70 = (n14 * n23);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(17)
				Float tmp71 = n42;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(17)
				Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(17)
				Float tmp73 = (tmp69 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(17)
				Float tmp74 = (n14 * n22);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(17)
				Float tmp75 = n43;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(17)
				Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(17)
				Float tmp77 = (tmp73 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(17)
				Float tmp78 = (n12 * n24);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(17)
				Float tmp79 = n43;		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(17)
				Float tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(17)
				Float tmp81 = (tmp77 - tmp80);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(17)
				Float tmp82 = (n13 * n22);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(17)
				Float tmp83 = n44;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(17)
				Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(17)
				Float tmp85 = (tmp81 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(17)
				Float tmp86 = (n12 * n23);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(17)
				Float tmp87 = n44;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(17)
				Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(17)
				Float tmp89 = (tmp85 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(17)
				te[(int)8] = tmp89;
				HX_STACK_LINE(17)
				Float tmp90 = (n14 * n23);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(17)
				Float tmp91 = n32;		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(17)
				Float tmp92 = (tmp90 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(17)
				Float tmp93 = (n13 * n24);		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(17)
				Float tmp94 = n32;		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(17)
				Float tmp95 = (tmp93 * tmp94);		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(17)
				Float tmp96 = (tmp92 - tmp95);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(17)
				Float tmp97 = (n14 * n22);		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(17)
				Float tmp98 = n33;		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(17)
				Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(17)
				Float tmp100 = (tmp96 - tmp99);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(17)
				Float tmp101 = (n12 * n24);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(17)
				Float tmp102 = n33;		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(17)
				Float tmp103 = (tmp101 * tmp102);		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(17)
				Float tmp104 = (tmp100 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(17)
				Float tmp105 = (n13 * n22);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(17)
				Float tmp106 = n34;		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(17)
				Float tmp107 = (tmp105 * tmp106);		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(17)
				Float tmp108 = (tmp104 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(17)
				Float tmp109 = (n12 * n23);		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(17)
				Float tmp110 = n34;		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(17)
				Float tmp111 = (tmp109 * tmp110);		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(17)
				Float tmp112 = (tmp108 - tmp111);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(17)
				te[(int)12] = tmp112;
				HX_STACK_LINE(17)
				Float tmp113 = (n24 * n33);		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(17)
				Float tmp114 = n41;		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(17)
				Float tmp115 = (tmp113 * tmp114);		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(17)
				Float tmp116 = (n23 * n34);		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(17)
				Float tmp117 = n41;		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(17)
				Float tmp118 = (tmp116 * tmp117);		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(17)
				Float tmp119 = (tmp115 - tmp118);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(17)
				Float tmp120 = (n24 * n31);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(17)
				Float tmp121 = n43;		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(17)
				Float tmp122 = (tmp120 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(17)
				Float tmp123 = (tmp119 - tmp122);		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(17)
				Float tmp124 = (n21 * n34);		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(17)
				Float tmp125 = n43;		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(17)
				Float tmp126 = (tmp124 * tmp125);		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(17)
				Float tmp127 = (tmp123 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(17)
				Float tmp128 = (n23 * n31);		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(17)
				Float tmp129 = n44;		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(17)
				Float tmp130 = (tmp128 * tmp129);		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(17)
				Float tmp131 = (tmp127 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(17)
				Float tmp132 = (n21 * n33);		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(17)
				Float tmp133 = n44;		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(17)
				Float tmp134 = (tmp132 * tmp133);		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(17)
				Float tmp135 = (tmp131 - tmp134);		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(17)
				te[(int)1] = tmp135;
				HX_STACK_LINE(17)
				Float tmp136 = (n13 * n34);		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(17)
				Float tmp137 = n41;		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(17)
				Float tmp138 = (tmp136 * tmp137);		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(17)
				Float tmp139 = (n14 * n33);		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(17)
				Float tmp140 = n41;		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(17)
				Float tmp141 = (tmp139 * tmp140);		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(17)
				Float tmp142 = (tmp138 - tmp141);		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(17)
				Float tmp143 = (n14 * n31);		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(17)
				Float tmp144 = n43;		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(17)
				Float tmp145 = (tmp143 * tmp144);		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(17)
				Float tmp146 = (tmp142 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(17)
				Float tmp147 = (n11 * n34);		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(17)
				Float tmp148 = n43;		HX_STACK_VAR(tmp148,"tmp148");
				HX_STACK_LINE(17)
				Float tmp149 = (tmp147 * tmp148);		HX_STACK_VAR(tmp149,"tmp149");
				HX_STACK_LINE(17)
				Float tmp150 = (tmp146 - tmp149);		HX_STACK_VAR(tmp150,"tmp150");
				HX_STACK_LINE(17)
				Float tmp151 = (n13 * n31);		HX_STACK_VAR(tmp151,"tmp151");
				HX_STACK_LINE(17)
				Float tmp152 = n44;		HX_STACK_VAR(tmp152,"tmp152");
				HX_STACK_LINE(17)
				Float tmp153 = (tmp151 * tmp152);		HX_STACK_VAR(tmp153,"tmp153");
				HX_STACK_LINE(17)
				Float tmp154 = (tmp150 - tmp153);		HX_STACK_VAR(tmp154,"tmp154");
				HX_STACK_LINE(17)
				Float tmp155 = (n11 * n33);		HX_STACK_VAR(tmp155,"tmp155");
				HX_STACK_LINE(17)
				Float tmp156 = n44;		HX_STACK_VAR(tmp156,"tmp156");
				HX_STACK_LINE(17)
				Float tmp157 = (tmp155 * tmp156);		HX_STACK_VAR(tmp157,"tmp157");
				HX_STACK_LINE(17)
				Float tmp158 = (tmp154 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
				HX_STACK_LINE(17)
				te[(int)5] = tmp158;
				HX_STACK_LINE(17)
				Float tmp159 = (n14 * n23);		HX_STACK_VAR(tmp159,"tmp159");
				HX_STACK_LINE(17)
				Float tmp160 = n41;		HX_STACK_VAR(tmp160,"tmp160");
				HX_STACK_LINE(17)
				Float tmp161 = (tmp159 * tmp160);		HX_STACK_VAR(tmp161,"tmp161");
				HX_STACK_LINE(17)
				Float tmp162 = (n13 * n24);		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(17)
				Float tmp163 = n41;		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(17)
				Float tmp164 = (tmp162 * tmp163);		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(17)
				Float tmp165 = (tmp161 - tmp164);		HX_STACK_VAR(tmp165,"tmp165");
				HX_STACK_LINE(17)
				Float tmp166 = (n14 * n21);		HX_STACK_VAR(tmp166,"tmp166");
				HX_STACK_LINE(17)
				Float tmp167 = n43;		HX_STACK_VAR(tmp167,"tmp167");
				HX_STACK_LINE(17)
				Float tmp168 = (tmp166 * tmp167);		HX_STACK_VAR(tmp168,"tmp168");
				HX_STACK_LINE(17)
				Float tmp169 = (tmp165 - tmp168);		HX_STACK_VAR(tmp169,"tmp169");
				HX_STACK_LINE(17)
				Float tmp170 = (n11 * n24);		HX_STACK_VAR(tmp170,"tmp170");
				HX_STACK_LINE(17)
				Float tmp171 = n43;		HX_STACK_VAR(tmp171,"tmp171");
				HX_STACK_LINE(17)
				Float tmp172 = (tmp170 * tmp171);		HX_STACK_VAR(tmp172,"tmp172");
				HX_STACK_LINE(17)
				Float tmp173 = (tmp169 + tmp172);		HX_STACK_VAR(tmp173,"tmp173");
				HX_STACK_LINE(17)
				Float tmp174 = (n13 * n21);		HX_STACK_VAR(tmp174,"tmp174");
				HX_STACK_LINE(17)
				Float tmp175 = n44;		HX_STACK_VAR(tmp175,"tmp175");
				HX_STACK_LINE(17)
				Float tmp176 = (tmp174 * tmp175);		HX_STACK_VAR(tmp176,"tmp176");
				HX_STACK_LINE(17)
				Float tmp177 = (tmp173 + tmp176);		HX_STACK_VAR(tmp177,"tmp177");
				HX_STACK_LINE(17)
				Float tmp178 = (n11 * n23);		HX_STACK_VAR(tmp178,"tmp178");
				HX_STACK_LINE(17)
				Float tmp179 = n44;		HX_STACK_VAR(tmp179,"tmp179");
				HX_STACK_LINE(17)
				Float tmp180 = (tmp178 * tmp179);		HX_STACK_VAR(tmp180,"tmp180");
				HX_STACK_LINE(17)
				Float tmp181 = (tmp177 - tmp180);		HX_STACK_VAR(tmp181,"tmp181");
				HX_STACK_LINE(17)
				te[(int)9] = tmp181;
				HX_STACK_LINE(17)
				Float tmp182 = (n13 * n24);		HX_STACK_VAR(tmp182,"tmp182");
				HX_STACK_LINE(17)
				Float tmp183 = n31;		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(17)
				Float tmp184 = (tmp182 * tmp183);		HX_STACK_VAR(tmp184,"tmp184");
				HX_STACK_LINE(17)
				Float tmp185 = (n14 * n23);		HX_STACK_VAR(tmp185,"tmp185");
				HX_STACK_LINE(17)
				Float tmp186 = n31;		HX_STACK_VAR(tmp186,"tmp186");
				HX_STACK_LINE(17)
				Float tmp187 = (tmp185 * tmp186);		HX_STACK_VAR(tmp187,"tmp187");
				HX_STACK_LINE(17)
				Float tmp188 = (tmp184 - tmp187);		HX_STACK_VAR(tmp188,"tmp188");
				HX_STACK_LINE(17)
				Float tmp189 = (n14 * n21);		HX_STACK_VAR(tmp189,"tmp189");
				HX_STACK_LINE(17)
				Float tmp190 = n33;		HX_STACK_VAR(tmp190,"tmp190");
				HX_STACK_LINE(17)
				Float tmp191 = (tmp189 * tmp190);		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(17)
				Float tmp192 = (tmp188 + tmp191);		HX_STACK_VAR(tmp192,"tmp192");
				HX_STACK_LINE(17)
				Float tmp193 = (n11 * n24);		HX_STACK_VAR(tmp193,"tmp193");
				HX_STACK_LINE(17)
				Float tmp194 = n33;		HX_STACK_VAR(tmp194,"tmp194");
				HX_STACK_LINE(17)
				Float tmp195 = (tmp193 * tmp194);		HX_STACK_VAR(tmp195,"tmp195");
				HX_STACK_LINE(17)
				Float tmp196 = (tmp192 - tmp195);		HX_STACK_VAR(tmp196,"tmp196");
				HX_STACK_LINE(17)
				Float tmp197 = (n13 * n21);		HX_STACK_VAR(tmp197,"tmp197");
				HX_STACK_LINE(17)
				Float tmp198 = n34;		HX_STACK_VAR(tmp198,"tmp198");
				HX_STACK_LINE(17)
				Float tmp199 = (tmp197 * tmp198);		HX_STACK_VAR(tmp199,"tmp199");
				HX_STACK_LINE(17)
				Float tmp200 = (tmp196 - tmp199);		HX_STACK_VAR(tmp200,"tmp200");
				HX_STACK_LINE(17)
				Float tmp201 = (n11 * n23);		HX_STACK_VAR(tmp201,"tmp201");
				HX_STACK_LINE(17)
				Float tmp202 = n34;		HX_STACK_VAR(tmp202,"tmp202");
				HX_STACK_LINE(17)
				Float tmp203 = (tmp201 * tmp202);		HX_STACK_VAR(tmp203,"tmp203");
				HX_STACK_LINE(17)
				Float tmp204 = (tmp200 + tmp203);		HX_STACK_VAR(tmp204,"tmp204");
				HX_STACK_LINE(17)
				te[(int)13] = tmp204;
				HX_STACK_LINE(17)
				Float tmp205 = (n22 * n34);		HX_STACK_VAR(tmp205,"tmp205");
				HX_STACK_LINE(17)
				Float tmp206 = n41;		HX_STACK_VAR(tmp206,"tmp206");
				HX_STACK_LINE(17)
				Float tmp207 = (tmp205 * tmp206);		HX_STACK_VAR(tmp207,"tmp207");
				HX_STACK_LINE(17)
				Float tmp208 = (n24 * n32);		HX_STACK_VAR(tmp208,"tmp208");
				HX_STACK_LINE(17)
				Float tmp209 = n41;		HX_STACK_VAR(tmp209,"tmp209");
				HX_STACK_LINE(17)
				Float tmp210 = (tmp208 * tmp209);		HX_STACK_VAR(tmp210,"tmp210");
				HX_STACK_LINE(17)
				Float tmp211 = (tmp207 - tmp210);		HX_STACK_VAR(tmp211,"tmp211");
				HX_STACK_LINE(17)
				Float tmp212 = (n24 * n31);		HX_STACK_VAR(tmp212,"tmp212");
				HX_STACK_LINE(17)
				Float tmp213 = n42;		HX_STACK_VAR(tmp213,"tmp213");
				HX_STACK_LINE(17)
				Float tmp214 = (tmp212 * tmp213);		HX_STACK_VAR(tmp214,"tmp214");
				HX_STACK_LINE(17)
				Float tmp215 = (tmp211 + tmp214);		HX_STACK_VAR(tmp215,"tmp215");
				HX_STACK_LINE(17)
				Float tmp216 = (n21 * n34);		HX_STACK_VAR(tmp216,"tmp216");
				HX_STACK_LINE(17)
				Float tmp217 = n42;		HX_STACK_VAR(tmp217,"tmp217");
				HX_STACK_LINE(17)
				Float tmp218 = (tmp216 * tmp217);		HX_STACK_VAR(tmp218,"tmp218");
				HX_STACK_LINE(17)
				Float tmp219 = (tmp215 - tmp218);		HX_STACK_VAR(tmp219,"tmp219");
				HX_STACK_LINE(17)
				Float tmp220 = (n22 * n31);		HX_STACK_VAR(tmp220,"tmp220");
				HX_STACK_LINE(17)
				Float tmp221 = n44;		HX_STACK_VAR(tmp221,"tmp221");
				HX_STACK_LINE(17)
				Float tmp222 = (tmp220 * tmp221);		HX_STACK_VAR(tmp222,"tmp222");
				HX_STACK_LINE(17)
				Float tmp223 = (tmp219 - tmp222);		HX_STACK_VAR(tmp223,"tmp223");
				HX_STACK_LINE(17)
				Float tmp224 = (n21 * n32);		HX_STACK_VAR(tmp224,"tmp224");
				HX_STACK_LINE(17)
				Float tmp225 = n44;		HX_STACK_VAR(tmp225,"tmp225");
				HX_STACK_LINE(17)
				Float tmp226 = (tmp224 * tmp225);		HX_STACK_VAR(tmp226,"tmp226");
				HX_STACK_LINE(17)
				Float tmp227 = (tmp223 + tmp226);		HX_STACK_VAR(tmp227,"tmp227");
				HX_STACK_LINE(17)
				te[(int)2] = tmp227;
				HX_STACK_LINE(17)
				Float tmp228 = (n14 * n32);		HX_STACK_VAR(tmp228,"tmp228");
				HX_STACK_LINE(17)
				Float tmp229 = n41;		HX_STACK_VAR(tmp229,"tmp229");
				HX_STACK_LINE(17)
				Float tmp230 = (tmp228 * tmp229);		HX_STACK_VAR(tmp230,"tmp230");
				HX_STACK_LINE(17)
				Float tmp231 = (n12 * n34);		HX_STACK_VAR(tmp231,"tmp231");
				HX_STACK_LINE(17)
				Float tmp232 = n41;		HX_STACK_VAR(tmp232,"tmp232");
				HX_STACK_LINE(17)
				Float tmp233 = (tmp231 * tmp232);		HX_STACK_VAR(tmp233,"tmp233");
				HX_STACK_LINE(17)
				Float tmp234 = (tmp230 - tmp233);		HX_STACK_VAR(tmp234,"tmp234");
				HX_STACK_LINE(17)
				Float tmp235 = (n14 * n31);		HX_STACK_VAR(tmp235,"tmp235");
				HX_STACK_LINE(17)
				Float tmp236 = n42;		HX_STACK_VAR(tmp236,"tmp236");
				HX_STACK_LINE(17)
				Float tmp237 = (tmp235 * tmp236);		HX_STACK_VAR(tmp237,"tmp237");
				HX_STACK_LINE(17)
				Float tmp238 = (tmp234 - tmp237);		HX_STACK_VAR(tmp238,"tmp238");
				HX_STACK_LINE(17)
				Float tmp239 = (n11 * n34);		HX_STACK_VAR(tmp239,"tmp239");
				HX_STACK_LINE(17)
				Float tmp240 = n42;		HX_STACK_VAR(tmp240,"tmp240");
				HX_STACK_LINE(17)
				Float tmp241 = (tmp239 * tmp240);		HX_STACK_VAR(tmp241,"tmp241");
				HX_STACK_LINE(17)
				Float tmp242 = (tmp238 + tmp241);		HX_STACK_VAR(tmp242,"tmp242");
				HX_STACK_LINE(17)
				Float tmp243 = (n12 * n31);		HX_STACK_VAR(tmp243,"tmp243");
				HX_STACK_LINE(17)
				Float tmp244 = n44;		HX_STACK_VAR(tmp244,"tmp244");
				HX_STACK_LINE(17)
				Float tmp245 = (tmp243 * tmp244);		HX_STACK_VAR(tmp245,"tmp245");
				HX_STACK_LINE(17)
				Float tmp246 = (tmp242 + tmp245);		HX_STACK_VAR(tmp246,"tmp246");
				HX_STACK_LINE(17)
				Float tmp247 = (n11 * n32);		HX_STACK_VAR(tmp247,"tmp247");
				HX_STACK_LINE(17)
				Float tmp248 = n44;		HX_STACK_VAR(tmp248,"tmp248");
				HX_STACK_LINE(17)
				Float tmp249 = (tmp247 * tmp248);		HX_STACK_VAR(tmp249,"tmp249");
				HX_STACK_LINE(17)
				Float tmp250 = (tmp246 - tmp249);		HX_STACK_VAR(tmp250,"tmp250");
				HX_STACK_LINE(17)
				te[(int)6] = tmp250;
				HX_STACK_LINE(17)
				Float tmp251 = (n12 * n24);		HX_STACK_VAR(tmp251,"tmp251");
				HX_STACK_LINE(17)
				Float tmp252 = n41;		HX_STACK_VAR(tmp252,"tmp252");
				HX_STACK_LINE(17)
				Float tmp253 = (tmp251 * tmp252);		HX_STACK_VAR(tmp253,"tmp253");
				HX_STACK_LINE(17)
				Float tmp254 = (n14 * n22);		HX_STACK_VAR(tmp254,"tmp254");
				HX_STACK_LINE(17)
				Float tmp255 = n41;		HX_STACK_VAR(tmp255,"tmp255");
				HX_STACK_LINE(17)
				Float tmp256 = (tmp254 * tmp255);		HX_STACK_VAR(tmp256,"tmp256");
				HX_STACK_LINE(17)
				Float tmp257 = (tmp253 - tmp256);		HX_STACK_VAR(tmp257,"tmp257");
				HX_STACK_LINE(17)
				Float tmp258 = (n14 * n21);		HX_STACK_VAR(tmp258,"tmp258");
				HX_STACK_LINE(17)
				Float tmp259 = n42;		HX_STACK_VAR(tmp259,"tmp259");
				HX_STACK_LINE(17)
				Float tmp260 = (tmp258 * tmp259);		HX_STACK_VAR(tmp260,"tmp260");
				HX_STACK_LINE(17)
				Float tmp261 = (tmp257 + tmp260);		HX_STACK_VAR(tmp261,"tmp261");
				HX_STACK_LINE(17)
				Float tmp262 = (n11 * n24);		HX_STACK_VAR(tmp262,"tmp262");
				HX_STACK_LINE(17)
				Float tmp263 = n42;		HX_STACK_VAR(tmp263,"tmp263");
				HX_STACK_LINE(17)
				Float tmp264 = (tmp262 * tmp263);		HX_STACK_VAR(tmp264,"tmp264");
				HX_STACK_LINE(17)
				Float tmp265 = (tmp261 - tmp264);		HX_STACK_VAR(tmp265,"tmp265");
				HX_STACK_LINE(17)
				Float tmp266 = (n12 * n21);		HX_STACK_VAR(tmp266,"tmp266");
				HX_STACK_LINE(17)
				Float tmp267 = n44;		HX_STACK_VAR(tmp267,"tmp267");
				HX_STACK_LINE(17)
				Float tmp268 = (tmp266 * tmp267);		HX_STACK_VAR(tmp268,"tmp268");
				HX_STACK_LINE(17)
				Float tmp269 = (tmp265 - tmp268);		HX_STACK_VAR(tmp269,"tmp269");
				HX_STACK_LINE(17)
				Float tmp270 = (n11 * n22);		HX_STACK_VAR(tmp270,"tmp270");
				HX_STACK_LINE(17)
				Float tmp271 = n44;		HX_STACK_VAR(tmp271,"tmp271");
				HX_STACK_LINE(17)
				Float tmp272 = (tmp270 * tmp271);		HX_STACK_VAR(tmp272,"tmp272");
				HX_STACK_LINE(17)
				Float tmp273 = (tmp269 + tmp272);		HX_STACK_VAR(tmp273,"tmp273");
				HX_STACK_LINE(17)
				te[(int)10] = tmp273;
				HX_STACK_LINE(17)
				Float tmp274 = (n14 * n22);		HX_STACK_VAR(tmp274,"tmp274");
				HX_STACK_LINE(17)
				Float tmp275 = n31;		HX_STACK_VAR(tmp275,"tmp275");
				HX_STACK_LINE(17)
				Float tmp276 = (tmp274 * tmp275);		HX_STACK_VAR(tmp276,"tmp276");
				HX_STACK_LINE(17)
				Float tmp277 = (n12 * n24);		HX_STACK_VAR(tmp277,"tmp277");
				HX_STACK_LINE(17)
				Float tmp278 = n31;		HX_STACK_VAR(tmp278,"tmp278");
				HX_STACK_LINE(17)
				Float tmp279 = (tmp277 * tmp278);		HX_STACK_VAR(tmp279,"tmp279");
				HX_STACK_LINE(17)
				Float tmp280 = (tmp276 - tmp279);		HX_STACK_VAR(tmp280,"tmp280");
				HX_STACK_LINE(17)
				Float tmp281 = (n14 * n21);		HX_STACK_VAR(tmp281,"tmp281");
				HX_STACK_LINE(17)
				Float tmp282 = n32;		HX_STACK_VAR(tmp282,"tmp282");
				HX_STACK_LINE(17)
				Float tmp283 = (tmp281 * tmp282);		HX_STACK_VAR(tmp283,"tmp283");
				HX_STACK_LINE(17)
				Float tmp284 = (tmp280 - tmp283);		HX_STACK_VAR(tmp284,"tmp284");
				HX_STACK_LINE(17)
				Float tmp285 = (n11 * n24);		HX_STACK_VAR(tmp285,"tmp285");
				HX_STACK_LINE(17)
				Float tmp286 = n32;		HX_STACK_VAR(tmp286,"tmp286");
				HX_STACK_LINE(17)
				Float tmp287 = (tmp285 * tmp286);		HX_STACK_VAR(tmp287,"tmp287");
				HX_STACK_LINE(17)
				Float tmp288 = (tmp284 + tmp287);		HX_STACK_VAR(tmp288,"tmp288");
				HX_STACK_LINE(17)
				Float tmp289 = (n12 * n21);		HX_STACK_VAR(tmp289,"tmp289");
				HX_STACK_LINE(17)
				Float tmp290 = n34;		HX_STACK_VAR(tmp290,"tmp290");
				HX_STACK_LINE(17)
				Float tmp291 = (tmp289 * tmp290);		HX_STACK_VAR(tmp291,"tmp291");
				HX_STACK_LINE(17)
				Float tmp292 = (tmp288 + tmp291);		HX_STACK_VAR(tmp292,"tmp292");
				HX_STACK_LINE(17)
				Float tmp293 = (n11 * n22);		HX_STACK_VAR(tmp293,"tmp293");
				HX_STACK_LINE(17)
				Float tmp294 = n34;		HX_STACK_VAR(tmp294,"tmp294");
				HX_STACK_LINE(17)
				Float tmp295 = (tmp293 * tmp294);		HX_STACK_VAR(tmp295,"tmp295");
				HX_STACK_LINE(17)
				Float tmp296 = (tmp292 - tmp295);		HX_STACK_VAR(tmp296,"tmp296");
				HX_STACK_LINE(17)
				te[(int)14] = tmp296;
				HX_STACK_LINE(17)
				Float tmp297 = (n23 * n32);		HX_STACK_VAR(tmp297,"tmp297");
				HX_STACK_LINE(17)
				Float tmp298 = n41;		HX_STACK_VAR(tmp298,"tmp298");
				HX_STACK_LINE(17)
				Float tmp299 = (tmp297 * tmp298);		HX_STACK_VAR(tmp299,"tmp299");
				HX_STACK_LINE(17)
				Float tmp300 = (n22 * n33);		HX_STACK_VAR(tmp300,"tmp300");
				HX_STACK_LINE(17)
				Float tmp301 = n41;		HX_STACK_VAR(tmp301,"tmp301");
				HX_STACK_LINE(17)
				Float tmp302 = (tmp300 * tmp301);		HX_STACK_VAR(tmp302,"tmp302");
				HX_STACK_LINE(17)
				Float tmp303 = (tmp299 - tmp302);		HX_STACK_VAR(tmp303,"tmp303");
				HX_STACK_LINE(17)
				Float tmp304 = (n23 * n31);		HX_STACK_VAR(tmp304,"tmp304");
				HX_STACK_LINE(17)
				Float tmp305 = n42;		HX_STACK_VAR(tmp305,"tmp305");
				HX_STACK_LINE(17)
				Float tmp306 = (tmp304 * tmp305);		HX_STACK_VAR(tmp306,"tmp306");
				HX_STACK_LINE(17)
				Float tmp307 = (tmp303 - tmp306);		HX_STACK_VAR(tmp307,"tmp307");
				HX_STACK_LINE(17)
				Float tmp308 = (n21 * n33);		HX_STACK_VAR(tmp308,"tmp308");
				HX_STACK_LINE(17)
				Float tmp309 = n42;		HX_STACK_VAR(tmp309,"tmp309");
				HX_STACK_LINE(17)
				Float tmp310 = (tmp308 * tmp309);		HX_STACK_VAR(tmp310,"tmp310");
				HX_STACK_LINE(17)
				Float tmp311 = (tmp307 + tmp310);		HX_STACK_VAR(tmp311,"tmp311");
				HX_STACK_LINE(17)
				Float tmp312 = (n22 * n31);		HX_STACK_VAR(tmp312,"tmp312");
				HX_STACK_LINE(17)
				Float tmp313 = n43;		HX_STACK_VAR(tmp313,"tmp313");
				HX_STACK_LINE(17)
				Float tmp314 = (tmp312 * tmp313);		HX_STACK_VAR(tmp314,"tmp314");
				HX_STACK_LINE(17)
				Float tmp315 = (tmp311 + tmp314);		HX_STACK_VAR(tmp315,"tmp315");
				HX_STACK_LINE(17)
				Float tmp316 = (n21 * n32);		HX_STACK_VAR(tmp316,"tmp316");
				HX_STACK_LINE(17)
				Float tmp317 = n43;		HX_STACK_VAR(tmp317,"tmp317");
				HX_STACK_LINE(17)
				Float tmp318 = (tmp316 * tmp317);		HX_STACK_VAR(tmp318,"tmp318");
				HX_STACK_LINE(17)
				Float tmp319 = (tmp315 - tmp318);		HX_STACK_VAR(tmp319,"tmp319");
				HX_STACK_LINE(17)
				te[(int)3] = tmp319;
				HX_STACK_LINE(17)
				Float tmp320 = (n12 * n33);		HX_STACK_VAR(tmp320,"tmp320");
				HX_STACK_LINE(17)
				Float tmp321 = n41;		HX_STACK_VAR(tmp321,"tmp321");
				HX_STACK_LINE(17)
				Float tmp322 = (tmp320 * tmp321);		HX_STACK_VAR(tmp322,"tmp322");
				HX_STACK_LINE(17)
				Float tmp323 = (n13 * n32);		HX_STACK_VAR(tmp323,"tmp323");
				HX_STACK_LINE(17)
				Float tmp324 = n41;		HX_STACK_VAR(tmp324,"tmp324");
				HX_STACK_LINE(17)
				Float tmp325 = (tmp323 * tmp324);		HX_STACK_VAR(tmp325,"tmp325");
				HX_STACK_LINE(17)
				Float tmp326 = (tmp322 - tmp325);		HX_STACK_VAR(tmp326,"tmp326");
				HX_STACK_LINE(17)
				Float tmp327 = (n13 * n31);		HX_STACK_VAR(tmp327,"tmp327");
				HX_STACK_LINE(17)
				Float tmp328 = n42;		HX_STACK_VAR(tmp328,"tmp328");
				HX_STACK_LINE(17)
				Float tmp329 = (tmp327 * tmp328);		HX_STACK_VAR(tmp329,"tmp329");
				HX_STACK_LINE(17)
				Float tmp330 = (tmp326 + tmp329);		HX_STACK_VAR(tmp330,"tmp330");
				HX_STACK_LINE(17)
				Float tmp331 = (n11 * n33);		HX_STACK_VAR(tmp331,"tmp331");
				HX_STACK_LINE(17)
				Float tmp332 = n42;		HX_STACK_VAR(tmp332,"tmp332");
				HX_STACK_LINE(17)
				Float tmp333 = (tmp331 * tmp332);		HX_STACK_VAR(tmp333,"tmp333");
				HX_STACK_LINE(17)
				Float tmp334 = (tmp330 - tmp333);		HX_STACK_VAR(tmp334,"tmp334");
				HX_STACK_LINE(17)
				Float tmp335 = (n12 * n31);		HX_STACK_VAR(tmp335,"tmp335");
				HX_STACK_LINE(17)
				Float tmp336 = n43;		HX_STACK_VAR(tmp336,"tmp336");
				HX_STACK_LINE(17)
				Float tmp337 = (tmp335 * tmp336);		HX_STACK_VAR(tmp337,"tmp337");
				HX_STACK_LINE(17)
				Float tmp338 = (tmp334 - tmp337);		HX_STACK_VAR(tmp338,"tmp338");
				HX_STACK_LINE(17)
				Float tmp339 = (n11 * n32);		HX_STACK_VAR(tmp339,"tmp339");
				HX_STACK_LINE(17)
				Float tmp340 = n43;		HX_STACK_VAR(tmp340,"tmp340");
				HX_STACK_LINE(17)
				Float tmp341 = (tmp339 * tmp340);		HX_STACK_VAR(tmp341,"tmp341");
				HX_STACK_LINE(17)
				Float tmp342 = (tmp338 + tmp341);		HX_STACK_VAR(tmp342,"tmp342");
				HX_STACK_LINE(17)
				te[(int)7] = tmp342;
				HX_STACK_LINE(17)
				Float tmp343 = (n13 * n22);		HX_STACK_VAR(tmp343,"tmp343");
				HX_STACK_LINE(17)
				Float tmp344 = n41;		HX_STACK_VAR(tmp344,"tmp344");
				HX_STACK_LINE(17)
				Float tmp345 = (tmp343 * tmp344);		HX_STACK_VAR(tmp345,"tmp345");
				HX_STACK_LINE(17)
				Float tmp346 = (n12 * n23);		HX_STACK_VAR(tmp346,"tmp346");
				HX_STACK_LINE(17)
				Float tmp347 = n41;		HX_STACK_VAR(tmp347,"tmp347");
				HX_STACK_LINE(17)
				Float tmp348 = (tmp346 * tmp347);		HX_STACK_VAR(tmp348,"tmp348");
				HX_STACK_LINE(17)
				Float tmp349 = (tmp345 - tmp348);		HX_STACK_VAR(tmp349,"tmp349");
				HX_STACK_LINE(17)
				Float tmp350 = (n13 * n21);		HX_STACK_VAR(tmp350,"tmp350");
				HX_STACK_LINE(17)
				Float tmp351 = n42;		HX_STACK_VAR(tmp351,"tmp351");
				HX_STACK_LINE(17)
				Float tmp352 = (tmp350 * tmp351);		HX_STACK_VAR(tmp352,"tmp352");
				HX_STACK_LINE(17)
				Float tmp353 = (tmp349 - tmp352);		HX_STACK_VAR(tmp353,"tmp353");
				HX_STACK_LINE(17)
				Float tmp354 = (n11 * n23);		HX_STACK_VAR(tmp354,"tmp354");
				HX_STACK_LINE(17)
				Float tmp355 = n42;		HX_STACK_VAR(tmp355,"tmp355");
				HX_STACK_LINE(17)
				Float tmp356 = (tmp354 * tmp355);		HX_STACK_VAR(tmp356,"tmp356");
				HX_STACK_LINE(17)
				Float tmp357 = (tmp353 + tmp356);		HX_STACK_VAR(tmp357,"tmp357");
				HX_STACK_LINE(17)
				Float tmp358 = (n12 * n21);		HX_STACK_VAR(tmp358,"tmp358");
				HX_STACK_LINE(17)
				Float tmp359 = n43;		HX_STACK_VAR(tmp359,"tmp359");
				HX_STACK_LINE(17)
				Float tmp360 = (tmp358 * tmp359);		HX_STACK_VAR(tmp360,"tmp360");
				HX_STACK_LINE(17)
				Float tmp361 = (tmp357 + tmp360);		HX_STACK_VAR(tmp361,"tmp361");
				HX_STACK_LINE(17)
				Float tmp362 = (n11 * n22);		HX_STACK_VAR(tmp362,"tmp362");
				HX_STACK_LINE(17)
				Float tmp363 = n43;		HX_STACK_VAR(tmp363,"tmp363");
				HX_STACK_LINE(17)
				Float tmp364 = (tmp362 * tmp363);		HX_STACK_VAR(tmp364,"tmp364");
				HX_STACK_LINE(17)
				Float tmp365 = (tmp361 - tmp364);		HX_STACK_VAR(tmp365,"tmp365");
				HX_STACK_LINE(17)
				te[(int)11] = tmp365;
				HX_STACK_LINE(17)
				Float tmp366 = (n12 * n23);		HX_STACK_VAR(tmp366,"tmp366");
				HX_STACK_LINE(17)
				Float tmp367 = n31;		HX_STACK_VAR(tmp367,"tmp367");
				HX_STACK_LINE(17)
				Float tmp368 = (tmp366 * tmp367);		HX_STACK_VAR(tmp368,"tmp368");
				HX_STACK_LINE(17)
				Float tmp369 = (n13 * n22);		HX_STACK_VAR(tmp369,"tmp369");
				HX_STACK_LINE(17)
				Float tmp370 = n31;		HX_STACK_VAR(tmp370,"tmp370");
				HX_STACK_LINE(17)
				Float tmp371 = (tmp369 * tmp370);		HX_STACK_VAR(tmp371,"tmp371");
				HX_STACK_LINE(17)
				Float tmp372 = (tmp368 - tmp371);		HX_STACK_VAR(tmp372,"tmp372");
				HX_STACK_LINE(17)
				Float tmp373 = (n13 * n21);		HX_STACK_VAR(tmp373,"tmp373");
				HX_STACK_LINE(17)
				Float tmp374 = n32;		HX_STACK_VAR(tmp374,"tmp374");
				HX_STACK_LINE(17)
				Float tmp375 = (tmp373 * tmp374);		HX_STACK_VAR(tmp375,"tmp375");
				HX_STACK_LINE(17)
				Float tmp376 = (tmp372 + tmp375);		HX_STACK_VAR(tmp376,"tmp376");
				HX_STACK_LINE(17)
				Float tmp377 = (n11 * n23);		HX_STACK_VAR(tmp377,"tmp377");
				HX_STACK_LINE(17)
				Float tmp378 = n32;		HX_STACK_VAR(tmp378,"tmp378");
				HX_STACK_LINE(17)
				Float tmp379 = (tmp377 * tmp378);		HX_STACK_VAR(tmp379,"tmp379");
				HX_STACK_LINE(17)
				Float tmp380 = (tmp376 - tmp379);		HX_STACK_VAR(tmp380,"tmp380");
				HX_STACK_LINE(17)
				Float tmp381 = (n12 * n21);		HX_STACK_VAR(tmp381,"tmp381");
				HX_STACK_LINE(17)
				Float tmp382 = n33;		HX_STACK_VAR(tmp382,"tmp382");
				HX_STACK_LINE(17)
				Float tmp383 = (tmp381 * tmp382);		HX_STACK_VAR(tmp383,"tmp383");
				HX_STACK_LINE(17)
				Float tmp384 = (tmp380 - tmp383);		HX_STACK_VAR(tmp384,"tmp384");
				HX_STACK_LINE(17)
				Float tmp385 = (n11 * n22);		HX_STACK_VAR(tmp385,"tmp385");
				HX_STACK_LINE(17)
				Float tmp386 = n33;		HX_STACK_VAR(tmp386,"tmp386");
				HX_STACK_LINE(17)
				Float tmp387 = (tmp385 * tmp386);		HX_STACK_VAR(tmp387,"tmp387");
				HX_STACK_LINE(17)
				Float tmp388 = (tmp384 + tmp387);		HX_STACK_VAR(tmp388,"tmp388");
				HX_STACK_LINE(17)
				te[(int)15] = tmp388;
				HX_STACK_LINE(17)
				Float tmp389 = me->__get((int)0);		HX_STACK_VAR(tmp389,"tmp389");
				HX_STACK_LINE(17)
				Float tmp390 = te->__get((int)0);		HX_STACK_VAR(tmp390,"tmp390");
				HX_STACK_LINE(17)
				Float tmp391 = (tmp389 * tmp390);		HX_STACK_VAR(tmp391,"tmp391");
				HX_STACK_LINE(17)
				Float tmp392 = me->__get((int)1);		HX_STACK_VAR(tmp392,"tmp392");
				HX_STACK_LINE(17)
				Float tmp393 = te->__get((int)4);		HX_STACK_VAR(tmp393,"tmp393");
				HX_STACK_LINE(17)
				Float tmp394 = (tmp392 * tmp393);		HX_STACK_VAR(tmp394,"tmp394");
				HX_STACK_LINE(17)
				Float tmp395 = (tmp391 + tmp394);		HX_STACK_VAR(tmp395,"tmp395");
				HX_STACK_LINE(17)
				Float tmp396 = me->__get((int)2);		HX_STACK_VAR(tmp396,"tmp396");
				HX_STACK_LINE(17)
				Float tmp397 = te->__get((int)8);		HX_STACK_VAR(tmp397,"tmp397");
				HX_STACK_LINE(17)
				Float tmp398 = (tmp396 * tmp397);		HX_STACK_VAR(tmp398,"tmp398");
				HX_STACK_LINE(17)
				Float tmp399 = (tmp395 + tmp398);		HX_STACK_VAR(tmp399,"tmp399");
				HX_STACK_LINE(17)
				Float tmp400 = me->__get((int)3);		HX_STACK_VAR(tmp400,"tmp400");
				HX_STACK_LINE(17)
				Float tmp401 = te->__get((int)12);		HX_STACK_VAR(tmp401,"tmp401");
				HX_STACK_LINE(17)
				Float tmp402 = (tmp400 * tmp401);		HX_STACK_VAR(tmp402,"tmp402");
				HX_STACK_LINE(17)
				Float tmp403 = (tmp399 + tmp402);		HX_STACK_VAR(tmp403,"tmp403");
				HX_STACK_LINE(17)
				Float det = tmp403;		HX_STACK_VAR(det,"det");
				HX_STACK_LINE(17)
				bool tmp404 = (det == (int)0);		HX_STACK_VAR(tmp404,"tmp404");
				HX_STACK_LINE(17)
				if ((tmp404)){
					HX_STACK_LINE(17)
					Dynamic tmp405 = hx::SourceInfo(HX_HCSTRING("Matrix.hx","\xfd","\x8a","\xaa","\x4f"),689,HX_HCSTRING("phoenix.Matrix","\x60","\x61","\xa9","\x39"),HX_HCSTRING("getInverse","\xba","\xd1","\x52","\x8d"));		HX_STACK_VAR(tmp405,"tmp405");
					HX_STACK_LINE(17)
					::haxe::Log_obj::trace(HX_HCSTRING("Matrix.getInverse: cant invert matrix, determinant is 0","\xf5","\x2d","\x16","\x59"),tmp405);
					HX_STACK_LINE(17)
					{
						HX_STACK_LINE(17)
						{
							HX_STACK_LINE(17)
							Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(17)
							e[(int)0] = (int)1;
							HX_STACK_LINE(17)
							e[(int)4] = (int)0;
							HX_STACK_LINE(17)
							e[(int)8] = (int)0;
							HX_STACK_LINE(17)
							e[(int)12] = (int)0;
							HX_STACK_LINE(17)
							e[(int)1] = (int)0;
							HX_STACK_LINE(17)
							e[(int)5] = (int)1;
							HX_STACK_LINE(17)
							e[(int)9] = (int)0;
							HX_STACK_LINE(17)
							e[(int)13] = (int)0;
							HX_STACK_LINE(17)
							e[(int)2] = (int)0;
							HX_STACK_LINE(17)
							e[(int)6] = (int)0;
							HX_STACK_LINE(17)
							e[(int)10] = (int)1;
							HX_STACK_LINE(17)
							e[(int)14] = (int)0;
							HX_STACK_LINE(17)
							e[(int)3] = (int)0;
							HX_STACK_LINE(17)
							e[(int)7] = (int)0;
							HX_STACK_LINE(17)
							e[(int)11] = (int)0;
							HX_STACK_LINE(17)
							e[(int)15] = (int)1;
							HX_STACK_LINE(17)
							_this2;
						}
						HX_STACK_LINE(17)
						_this2;
					}
					HX_STACK_LINE(17)
					tmp2 = _this2;
				}
				else{
					HX_STACK_LINE(17)
					{
						HX_STACK_LINE(17)
						Float tmp405 = (Float((int)1) / Float(det));		HX_STACK_VAR(tmp405,"tmp405");
						HX_STACK_LINE(17)
						Float _s = tmp405;		HX_STACK_VAR(_s,"_s");
						HX_STACK_LINE(17)
						Array< Float > te1 = _this2->elements;		HX_STACK_VAR(te1,"te1");
						HX_STACK_LINE(17)
						Float tmp406 = _s;		HX_STACK_VAR(tmp406,"tmp406");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)0],tmp406);
						HX_STACK_LINE(17)
						Float tmp407 = _s;		HX_STACK_VAR(tmp407,"tmp407");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)4],tmp407);
						HX_STACK_LINE(17)
						Float tmp408 = _s;		HX_STACK_VAR(tmp408,"tmp408");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)8],tmp408);
						HX_STACK_LINE(17)
						Float tmp409 = _s;		HX_STACK_VAR(tmp409,"tmp409");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)12],tmp409);
						HX_STACK_LINE(17)
						Float tmp410 = _s;		HX_STACK_VAR(tmp410,"tmp410");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)1],tmp410);
						HX_STACK_LINE(17)
						Float tmp411 = _s;		HX_STACK_VAR(tmp411,"tmp411");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)5],tmp411);
						HX_STACK_LINE(17)
						Float tmp412 = _s;		HX_STACK_VAR(tmp412,"tmp412");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)9],tmp412);
						HX_STACK_LINE(17)
						Float tmp413 = _s;		HX_STACK_VAR(tmp413,"tmp413");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)13],tmp413);
						HX_STACK_LINE(17)
						Float tmp414 = _s;		HX_STACK_VAR(tmp414,"tmp414");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)2],tmp414);
						HX_STACK_LINE(17)
						Float tmp415 = _s;		HX_STACK_VAR(tmp415,"tmp415");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)6],tmp415);
						HX_STACK_LINE(17)
						Float tmp416 = _s;		HX_STACK_VAR(tmp416,"tmp416");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)10],tmp416);
						HX_STACK_LINE(17)
						Float tmp417 = _s;		HX_STACK_VAR(tmp417,"tmp417");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)14],tmp417);
						HX_STACK_LINE(17)
						Float tmp418 = _s;		HX_STACK_VAR(tmp418,"tmp418");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)3],tmp418);
						HX_STACK_LINE(17)
						Float tmp419 = _s;		HX_STACK_VAR(tmp419,"tmp419");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)7],tmp419);
						HX_STACK_LINE(17)
						Float tmp420 = _s;		HX_STACK_VAR(tmp420,"tmp420");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)11],tmp420);
						HX_STACK_LINE(17)
						Float tmp421 = _s;		HX_STACK_VAR(tmp421,"tmp421");
						HX_STACK_LINE(17)
						hx::MultEq(te1[(int)15],tmp421);
						HX_STACK_LINE(17)
						_this2;
					}
					HX_STACK_LINE(17)
					tmp2 = _this2;
				}
			}
		}
		HX_STACK_LINE(17)
		::phoenix::Matrix _m = tmp2;		HX_STACK_VAR(_m,"_m");
		HX_STACK_LINE(17)
		Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(17)
		Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(17)
		Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(17)
		Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			Float tmp3 = e->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(17)
			Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(17)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(17)
			Float tmp6 = e->__get((int)4);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(17)
			Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(17)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(17)
			Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(17)
			Float tmp10 = e->__get((int)8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(17)
			Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(17)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(17)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(17)
			Float tmp14 = e->__get((int)12);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(17)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(17)
			Float _x1 = tmp15;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(17)
			Float tmp16 = e->__get((int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(17)
			Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(17)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(17)
			Float tmp19 = e->__get((int)5);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(17)
			Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(17)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(17)
			Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(17)
			Float tmp23 = e->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(17)
			Float tmp24 = _z;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(17)
			Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(17)
			Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(17)
			Float tmp27 = e->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(17)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(17)
			Float _y1 = tmp28;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(17)
			Float tmp29 = e->__get((int)2);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(17)
			Float tmp30 = _x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(17)
			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(17)
			Float tmp32 = e->__get((int)6);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(17)
			Float tmp33 = _y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(17)
			Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(17)
			Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(17)
			Float tmp36 = e->__get((int)10);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(17)
			Float tmp37 = _z;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(17)
			Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(17)
			Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(17)
			Float tmp40 = e->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(17)
			Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(17)
			Float _z1 = tmp41;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(17)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(17)
			_this->ignore_listeners = true;
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				_this->x = _x1;
				HX_STACK_LINE(17)
				bool tmp42 = _this->_construct;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(17)
				if ((tmp42)){
					HX_STACK_LINE(17)
					_this->x;
				}
				else{
					HX_STACK_LINE(17)
					bool tmp43 = (_this->listen_x != null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(17)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(17)
					if ((tmp43)){
						HX_STACK_LINE(17)
						bool tmp45 = _this->ignore_listeners;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(17)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(17)
						tmp44 = !(tmp46);
					}
					else{
						HX_STACK_LINE(17)
						tmp44 = false;
					}
					HX_STACK_LINE(17)
					if ((tmp44)){
						HX_STACK_LINE(17)
						Float tmp45 = _x1;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(17)
						_this->listen_x(tmp45);
					}
					HX_STACK_LINE(17)
					_this->x;
				}
			}
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				_this->y = _y1;
				HX_STACK_LINE(17)
				bool tmp42 = _this->_construct;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(17)
				if ((tmp42)){
					HX_STACK_LINE(17)
					_this->y;
				}
				else{
					HX_STACK_LINE(17)
					bool tmp43 = (_this->listen_y != null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(17)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(17)
					if ((tmp43)){
						HX_STACK_LINE(17)
						bool tmp45 = _this->ignore_listeners;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(17)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(17)
						tmp44 = !(tmp46);
					}
					else{
						HX_STACK_LINE(17)
						tmp44 = false;
					}
					HX_STACK_LINE(17)
					if ((tmp44)){
						HX_STACK_LINE(17)
						Float tmp45 = _y1;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(17)
						_this->listen_y(tmp45);
					}
					HX_STACK_LINE(17)
					_this->y;
				}
			}
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				_this->z = _z1;
				HX_STACK_LINE(17)
				bool tmp42 = _this->_construct;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(17)
				if ((tmp42)){
					HX_STACK_LINE(17)
					_this->z;
				}
				else{
					HX_STACK_LINE(17)
					bool tmp43 = (_this->listen_z != null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(17)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(17)
					if ((tmp43)){
						HX_STACK_LINE(17)
						bool tmp45 = _this->ignore_listeners;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(17)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(17)
						tmp44 = !(tmp46);
					}
					else{
						HX_STACK_LINE(17)
						tmp44 = false;
					}
					HX_STACK_LINE(17)
					if ((tmp44)){
						HX_STACK_LINE(17)
						Float tmp45 = _z1;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(17)
						_this->listen_z(tmp45);
					}
					HX_STACK_LINE(17)
					_this->z;
				}
			}
			HX_STACK_LINE(17)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(17)
			bool tmp42 = (_this->listen_x != null());		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(17)
			bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(17)
			if ((tmp42)){
				HX_STACK_LINE(17)
				bool tmp44 = _this->ignore_listeners;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(17)
				bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(17)
				tmp43 = !(tmp45);
			}
			else{
				HX_STACK_LINE(17)
				tmp43 = false;
			}
			HX_STACK_LINE(17)
			if ((tmp43)){
				HX_STACK_LINE(17)
				Float tmp44 = _this->x;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(17)
				_this->listen_x(tmp44);
			}
			HX_STACK_LINE(17)
			bool tmp44 = (_this->listen_y != null());		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(17)
			bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(17)
			if ((tmp44)){
				HX_STACK_LINE(17)
				bool tmp46 = _this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(17)
				bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(17)
				tmp45 = !(tmp47);
			}
			else{
				HX_STACK_LINE(17)
				tmp45 = false;
			}
			HX_STACK_LINE(17)
			if ((tmp45)){
				HX_STACK_LINE(17)
				Float tmp46 = _this->y;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(17)
				_this->listen_y(tmp46);
			}
			HX_STACK_LINE(17)
			bool tmp46 = (_this->listen_z != null());		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(17)
			bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(17)
			if ((tmp46)){
				HX_STACK_LINE(17)
				bool tmp48 = _this->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(17)
				bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(17)
				tmp47 = !(tmp49);
			}
			else{
				HX_STACK_LINE(17)
				tmp47 = false;
			}
			HX_STACK_LINE(17)
			if ((tmp47)){
				HX_STACK_LINE(17)
				Float tmp48 = _this->z;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(17)
				_this->listen_z(tmp48);
			}
			HX_STACK_LINE(17)
			_this;
		}
		HX_STACK_LINE(17)
		tmp = _this;
	}
	HX_STACK_LINE(17)
	localV = tmp;
	HX_STACK_LINE(18)
	::phoenix::Vector tmp1 = localV;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VectorExtender_obj,toLocalSpace,return )

::phoenix::Vector VectorExtender_obj::toWorldSpace( ::phoenix::Vector v,::phoenix::Transform t){
	HX_STACK_FRAME("VectorExtender","toWorldSpace",0xc7fbf493,"VectorExtender.toWorldSpace","VectorExtender.hx",21,0x3f7b8c34)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(22)
	::phoenix::Vector worldV;		HX_STACK_VAR(worldV,"worldV");
	HX_STACK_LINE(23)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(v->x,v->y,v->z,v->w);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(23)
		::phoenix::Matrix tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		{
			HX_STACK_LINE(23)
			::phoenix::Spatial tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			{
				HX_STACK_LINE(23)
				bool tmp4 = t->_destroying;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(23)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(23)
				if ((tmp5)){
					HX_STACK_LINE(23)
					bool tmp6 = (t->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(23)
					if ((tmp6)){
						HX_STACK_LINE(23)
						bool tmp7 = t->parent->dirty;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(23)
						if ((tmp7)){
							HX_STACK_LINE(23)
							::phoenix::Transform _this1 = t->parent;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(23)
							bool tmp8 = _this1->dirty;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(23)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(23)
							if ((tmp9)){
								HX_STACK_LINE(23)
								Dynamic();
							}
							else{
								HX_STACK_LINE(23)
								_this1->_cleaning = true;
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									::phoenix::Matrix _this2 = _this1->_pos_matrix;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(23)
										e[(int)0] = (int)1;
										HX_STACK_LINE(23)
										e[(int)4] = (int)0;
										HX_STACK_LINE(23)
										e[(int)8] = (int)0;
										HX_STACK_LINE(23)
										::phoenix::Vector tmp10 = _this1->local->pos;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(23)
										Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(23)
										e[(int)12] = tmp11;
										HX_STACK_LINE(23)
										e[(int)1] = (int)0;
										HX_STACK_LINE(23)
										e[(int)5] = (int)1;
										HX_STACK_LINE(23)
										e[(int)9] = (int)0;
										HX_STACK_LINE(23)
										::phoenix::Vector tmp12 = _this1->local->pos;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(23)
										Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(23)
										e[(int)13] = tmp13;
										HX_STACK_LINE(23)
										e[(int)2] = (int)0;
										HX_STACK_LINE(23)
										e[(int)6] = (int)0;
										HX_STACK_LINE(23)
										e[(int)10] = (int)1;
										HX_STACK_LINE(23)
										::phoenix::Vector tmp14 = _this1->local->pos;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(23)
										Float tmp15 = tmp14->z;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(23)
										e[(int)14] = tmp15;
										HX_STACK_LINE(23)
										e[(int)3] = (int)0;
										HX_STACK_LINE(23)
										e[(int)7] = (int)0;
										HX_STACK_LINE(23)
										e[(int)11] = (int)0;
										HX_STACK_LINE(23)
										e[(int)15] = (int)1;
										HX_STACK_LINE(23)
										_this2;
									}
									HX_STACK_LINE(23)
									_this2;
								}
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									::phoenix::Matrix _this2 = _this1->_rotation_matrix;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(23)
									::phoenix::Quaternion tmp10 = _this1->local->rotation;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(23)
									::phoenix::Quaternion q = tmp10;		HX_STACK_VAR(q,"q");
									HX_STACK_LINE(23)
									Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(23)
									Float tmp11 = (q->x + q->x);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(23)
									Float x2 = tmp11;		HX_STACK_VAR(x2,"x2");
									HX_STACK_LINE(23)
									Float tmp12 = (q->y + q->y);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(23)
									Float y2 = tmp12;		HX_STACK_VAR(y2,"y2");
									HX_STACK_LINE(23)
									Float tmp13 = (q->z + q->z);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(23)
									Float z2 = tmp13;		HX_STACK_VAR(z2,"z2");
									HX_STACK_LINE(23)
									Float tmp14 = (q->x * x2);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(23)
									Float xx = tmp14;		HX_STACK_VAR(xx,"xx");
									HX_STACK_LINE(23)
									Float tmp15 = (q->x * y2);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(23)
									Float xy = tmp15;		HX_STACK_VAR(xy,"xy");
									HX_STACK_LINE(23)
									Float tmp16 = (q->x * z2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(23)
									Float xz = tmp16;		HX_STACK_VAR(xz,"xz");
									HX_STACK_LINE(23)
									Float tmp17 = (q->y * y2);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(23)
									Float yy = tmp17;		HX_STACK_VAR(yy,"yy");
									HX_STACK_LINE(23)
									Float tmp18 = (q->y * z2);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(23)
									Float yz = tmp18;		HX_STACK_VAR(yz,"yz");
									HX_STACK_LINE(23)
									Float tmp19 = (q->z * z2);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(23)
									Float zz = tmp19;		HX_STACK_VAR(zz,"zz");
									HX_STACK_LINE(23)
									Float tmp20 = (q->w * x2);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(23)
									Float wx = tmp20;		HX_STACK_VAR(wx,"wx");
									HX_STACK_LINE(23)
									Float tmp21 = (q->w * y2);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(23)
									Float wy = tmp21;		HX_STACK_VAR(wy,"wy");
									HX_STACK_LINE(23)
									Float tmp22 = (q->w * z2);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(23)
									Float wz = tmp22;		HX_STACK_VAR(wz,"wz");
									HX_STACK_LINE(23)
									Float tmp23 = (yy + zz);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(23)
									Float tmp24 = ((int)1 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(23)
									te[(int)0] = tmp24;
									HX_STACK_LINE(23)
									Float tmp25 = (xy - wz);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(23)
									te[(int)4] = tmp25;
									HX_STACK_LINE(23)
									Float tmp26 = (xz + wy);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(23)
									te[(int)8] = tmp26;
									HX_STACK_LINE(23)
									Float tmp27 = (xy + wz);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(23)
									te[(int)1] = tmp27;
									HX_STACK_LINE(23)
									Float tmp28 = (xx + zz);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(23)
									Float tmp29 = ((int)1 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(23)
									te[(int)5] = tmp29;
									HX_STACK_LINE(23)
									Float tmp30 = (yz - wx);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(23)
									te[(int)9] = tmp30;
									HX_STACK_LINE(23)
									Float tmp31 = (xz - wy);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(23)
									te[(int)2] = tmp31;
									HX_STACK_LINE(23)
									Float tmp32 = (yz + wx);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(23)
									te[(int)6] = tmp32;
									HX_STACK_LINE(23)
									Float tmp33 = (xx + yy);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(23)
									Float tmp34 = ((int)1 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(23)
									te[(int)10] = tmp34;
									HX_STACK_LINE(23)
									te[(int)3] = (int)0;
									HX_STACK_LINE(23)
									te[(int)7] = (int)0;
									HX_STACK_LINE(23)
									te[(int)11] = (int)0;
									HX_STACK_LINE(23)
									te[(int)12] = (int)0;
									HX_STACK_LINE(23)
									te[(int)13] = (int)0;
									HX_STACK_LINE(23)
									te[(int)14] = (int)0;
									HX_STACK_LINE(23)
									te[(int)15] = (int)1;
									HX_STACK_LINE(23)
									_this2;
								}
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									::phoenix::Matrix _this2 = _this1->_origin_undo_matrix;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(23)
										e[(int)0] = (int)1;
										HX_STACK_LINE(23)
										e[(int)4] = (int)0;
										HX_STACK_LINE(23)
										e[(int)8] = (int)0;
										HX_STACK_LINE(23)
										Float tmp10 = _this1->origin->x;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(23)
										Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(23)
										e[(int)12] = tmp11;
										HX_STACK_LINE(23)
										e[(int)1] = (int)0;
										HX_STACK_LINE(23)
										e[(int)5] = (int)1;
										HX_STACK_LINE(23)
										e[(int)9] = (int)0;
										HX_STACK_LINE(23)
										Float tmp12 = _this1->origin->y;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(23)
										Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(23)
										e[(int)13] = tmp13;
										HX_STACK_LINE(23)
										e[(int)2] = (int)0;
										HX_STACK_LINE(23)
										e[(int)6] = (int)0;
										HX_STACK_LINE(23)
										e[(int)10] = (int)1;
										HX_STACK_LINE(23)
										Float tmp14 = _this1->origin->z;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(23)
										Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(23)
										e[(int)14] = tmp15;
										HX_STACK_LINE(23)
										e[(int)3] = (int)0;
										HX_STACK_LINE(23)
										e[(int)7] = (int)0;
										HX_STACK_LINE(23)
										e[(int)11] = (int)0;
										HX_STACK_LINE(23)
										e[(int)15] = (int)1;
										HX_STACK_LINE(23)
										_this2;
									}
									HX_STACK_LINE(23)
									_this2;
								}
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									::phoenix::Matrix tmp10 = _this1->local->matrix;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(23)
									::phoenix::Matrix _this2 = tmp10;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										Array< Float > e = _this2->elements;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(23)
										e[(int)0] = (int)1;
										HX_STACK_LINE(23)
										e[(int)4] = (int)0;
										HX_STACK_LINE(23)
										e[(int)8] = (int)0;
										HX_STACK_LINE(23)
										Float tmp11 = _this1->origin->x;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(23)
										e[(int)12] = tmp11;
										HX_STACK_LINE(23)
										e[(int)1] = (int)0;
										HX_STACK_LINE(23)
										e[(int)5] = (int)1;
										HX_STACK_LINE(23)
										e[(int)9] = (int)0;
										HX_STACK_LINE(23)
										Float tmp12 = _this1->origin->y;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(23)
										e[(int)13] = tmp12;
										HX_STACK_LINE(23)
										e[(int)2] = (int)0;
										HX_STACK_LINE(23)
										e[(int)6] = (int)0;
										HX_STACK_LINE(23)
										e[(int)10] = (int)1;
										HX_STACK_LINE(23)
										Float tmp13 = _this1->origin->z;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(23)
										e[(int)14] = tmp13;
										HX_STACK_LINE(23)
										e[(int)3] = (int)0;
										HX_STACK_LINE(23)
										e[(int)7] = (int)0;
										HX_STACK_LINE(23)
										e[(int)11] = (int)0;
										HX_STACK_LINE(23)
										e[(int)15] = (int)1;
										HX_STACK_LINE(23)
										_this2;
									}
									HX_STACK_LINE(23)
									_this2;
								}
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									::phoenix::Matrix tmp10 = _this1->local->matrix;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(23)
									::phoenix::Matrix _this2 = tmp10;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(23)
										Array< Float > be = _this1->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(23)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(23)
										Float tmp11 = ae->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(23)
										Float a11 = tmp11;		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(23)
										Float tmp12 = ae->__get((int)4);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(23)
										Float a12 = tmp12;		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(23)
										Float tmp13 = ae->__get((int)8);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(23)
										Float a13 = tmp13;		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(23)
										Float tmp14 = ae->__get((int)12);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(23)
										Float a14 = tmp14;		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(23)
										Float tmp15 = ae->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(23)
										Float a21 = tmp15;		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(23)
										Float tmp16 = ae->__get((int)5);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(23)
										Float a22 = tmp16;		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(23)
										Float tmp17 = ae->__get((int)9);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(23)
										Float a23 = tmp17;		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(23)
										Float tmp18 = ae->__get((int)13);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(23)
										Float a24 = tmp18;		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(23)
										Float tmp19 = ae->__get((int)2);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(23)
										Float a31 = tmp19;		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(23)
										Float tmp20 = ae->__get((int)6);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(23)
										Float a32 = tmp20;		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(23)
										Float tmp21 = ae->__get((int)10);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(23)
										Float a33 = tmp21;		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(23)
										Float tmp22 = ae->__get((int)14);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(23)
										Float a34 = tmp22;		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(23)
										Float tmp23 = ae->__get((int)3);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(23)
										Float a41 = tmp23;		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(23)
										Float tmp24 = ae->__get((int)7);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(23)
										Float a42 = tmp24;		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(23)
										Float tmp25 = ae->__get((int)11);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(23)
										Float a43 = tmp25;		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(23)
										Float tmp26 = ae->__get((int)15);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(23)
										Float a44 = tmp26;		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(23)
										Float tmp27 = be->__get((int)0);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(23)
										Float b11 = tmp27;		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(23)
										Float tmp28 = be->__get((int)4);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(23)
										Float b12 = tmp28;		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(23)
										Float tmp29 = be->__get((int)8);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(23)
										Float b13 = tmp29;		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(23)
										Float tmp30 = be->__get((int)12);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(23)
										Float b14 = tmp30;		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(23)
										Float tmp31 = be->__get((int)1);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(23)
										Float b21 = tmp31;		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(23)
										Float tmp32 = be->__get((int)5);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(23)
										Float b22 = tmp32;		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(23)
										Float tmp33 = be->__get((int)9);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(23)
										Float b23 = tmp33;		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(23)
										Float tmp34 = be->__get((int)13);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(23)
										Float b24 = tmp34;		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(23)
										Float tmp35 = be->__get((int)2);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(23)
										Float b31 = tmp35;		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(23)
										Float tmp36 = be->__get((int)6);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(23)
										Float b32 = tmp36;		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(23)
										Float tmp37 = be->__get((int)10);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(23)
										Float b33 = tmp37;		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(23)
										Float tmp38 = be->__get((int)14);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(23)
										Float b34 = tmp38;		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(23)
										Float tmp39 = be->__get((int)3);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(23)
										Float b41 = tmp39;		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(23)
										Float tmp40 = be->__get((int)7);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(23)
										Float b42 = tmp40;		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(23)
										Float tmp41 = be->__get((int)11);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(23)
										Float b43 = tmp41;		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(23)
										Float tmp42 = be->__get((int)15);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(23)
										Float b44 = tmp42;		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(23)
										Float tmp43 = (a11 * b11);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(23)
										Float tmp44 = (a12 * b21);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(23)
										Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(23)
										Float tmp46 = (a13 * b31);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(23)
										Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(23)
										Float tmp48 = (a14 * b41);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(23)
										Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(23)
										te[(int)0] = tmp49;
										HX_STACK_LINE(23)
										Float tmp50 = (a11 * b12);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(23)
										Float tmp51 = (a12 * b22);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(23)
										Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(23)
										Float tmp53 = (a13 * b32);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(23)
										Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(23)
										Float tmp55 = (a14 * b42);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(23)
										Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(23)
										te[(int)4] = tmp56;
										HX_STACK_LINE(23)
										Float tmp57 = (a11 * b13);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(23)
										Float tmp58 = (a12 * b23);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(23)
										Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(23)
										Float tmp60 = (a13 * b33);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(23)
										Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(23)
										Float tmp62 = (a14 * b43);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(23)
										Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(23)
										te[(int)8] = tmp63;
										HX_STACK_LINE(23)
										Float tmp64 = (a11 * b14);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(23)
										Float tmp65 = (a12 * b24);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(23)
										Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(23)
										Float tmp67 = (a13 * b34);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(23)
										Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(23)
										Float tmp69 = (a14 * b44);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(23)
										Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(23)
										te[(int)12] = tmp70;
										HX_STACK_LINE(23)
										Float tmp71 = (a21 * b11);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(23)
										Float tmp72 = (a22 * b21);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(23)
										Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(23)
										Float tmp74 = (a23 * b31);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(23)
										Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(23)
										Float tmp76 = (a24 * b41);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(23)
										Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(23)
										te[(int)1] = tmp77;
										HX_STACK_LINE(23)
										Float tmp78 = (a21 * b12);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(23)
										Float tmp79 = (a22 * b22);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(23)
										Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(23)
										Float tmp81 = (a23 * b32);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(23)
										Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(23)
										Float tmp83 = (a24 * b42);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(23)
										Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(23)
										te[(int)5] = tmp84;
										HX_STACK_LINE(23)
										Float tmp85 = (a21 * b13);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(23)
										Float tmp86 = (a22 * b23);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(23)
										Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(23)
										Float tmp88 = (a23 * b33);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(23)
										Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(23)
										Float tmp90 = (a24 * b43);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(23)
										Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(23)
										te[(int)9] = tmp91;
										HX_STACK_LINE(23)
										Float tmp92 = (a21 * b14);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(23)
										Float tmp93 = (a22 * b24);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(23)
										Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(23)
										Float tmp95 = (a23 * b34);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(23)
										Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(23)
										Float tmp97 = (a24 * b44);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(23)
										Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(23)
										te[(int)13] = tmp98;
										HX_STACK_LINE(23)
										Float tmp99 = (a31 * b11);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(23)
										Float tmp100 = (a32 * b21);		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(23)
										Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(23)
										Float tmp102 = (a33 * b31);		HX_STACK_VAR(tmp102,"tmp102");
										HX_STACK_LINE(23)
										Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
										HX_STACK_LINE(23)
										Float tmp104 = (a34 * b41);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(23)
										Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
										HX_STACK_LINE(23)
										te[(int)2] = tmp105;
										HX_STACK_LINE(23)
										Float tmp106 = (a31 * b12);		HX_STACK_VAR(tmp106,"tmp106");
										HX_STACK_LINE(23)
										Float tmp107 = (a32 * b22);		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(23)
										Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(23)
										Float tmp109 = (a33 * b32);		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(23)
										Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
										HX_STACK_LINE(23)
										Float tmp111 = (a34 * b42);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(23)
										Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
										HX_STACK_LINE(23)
										te[(int)6] = tmp112;
										HX_STACK_LINE(23)
										Float tmp113 = (a31 * b13);		HX_STACK_VAR(tmp113,"tmp113");
										HX_STACK_LINE(23)
										Float tmp114 = (a32 * b23);		HX_STACK_VAR(tmp114,"tmp114");
										HX_STACK_LINE(23)
										Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
										HX_STACK_LINE(23)
										Float tmp116 = (a33 * b33);		HX_STACK_VAR(tmp116,"tmp116");
										HX_STACK_LINE(23)
										Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
										HX_STACK_LINE(23)
										Float tmp118 = (a34 * b43);		HX_STACK_VAR(tmp118,"tmp118");
										HX_STACK_LINE(23)
										Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
										HX_STACK_LINE(23)
										te[(int)10] = tmp119;
										HX_STACK_LINE(23)
										Float tmp120 = (a31 * b14);		HX_STACK_VAR(tmp120,"tmp120");
										HX_STACK_LINE(23)
										Float tmp121 = (a32 * b24);		HX_STACK_VAR(tmp121,"tmp121");
										HX_STACK_LINE(23)
										Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
										HX_STACK_LINE(23)
										Float tmp123 = (a33 * b34);		HX_STACK_VAR(tmp123,"tmp123");
										HX_STACK_LINE(23)
										Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
										HX_STACK_LINE(23)
										Float tmp125 = (a34 * b44);		HX_STACK_VAR(tmp125,"tmp125");
										HX_STACK_LINE(23)
										Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
										HX_STACK_LINE(23)
										te[(int)14] = tmp126;
										HX_STACK_LINE(23)
										Float tmp127 = (a41 * b11);		HX_STACK_VAR(tmp127,"tmp127");
										HX_STACK_LINE(23)
										Float tmp128 = (a42 * b21);		HX_STACK_VAR(tmp128,"tmp128");
										HX_STACK_LINE(23)
										Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
										HX_STACK_LINE(23)
										Float tmp130 = (a43 * b31);		HX_STACK_VAR(tmp130,"tmp130");
										HX_STACK_LINE(23)
										Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
										HX_STACK_LINE(23)
										Float tmp132 = (a44 * b41);		HX_STACK_VAR(tmp132,"tmp132");
										HX_STACK_LINE(23)
										Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
										HX_STACK_LINE(23)
										te[(int)3] = tmp133;
										HX_STACK_LINE(23)
										Float tmp134 = (a41 * b12);		HX_STACK_VAR(tmp134,"tmp134");
										HX_STACK_LINE(23)
										Float tmp135 = (a42 * b22);		HX_STACK_VAR(tmp135,"tmp135");
										HX_STACK_LINE(23)
										Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
										HX_STACK_LINE(23)
										Float tmp137 = (a43 * b32);		HX_STACK_VAR(tmp137,"tmp137");
										HX_STACK_LINE(23)
										Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
										HX_STACK_LINE(23)
										Float tmp139 = (a44 * b42);		HX_STACK_VAR(tmp139,"tmp139");
										HX_STACK_LINE(23)
										Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
										HX_STACK_LINE(23)
										te[(int)7] = tmp140;
										HX_STACK_LINE(23)
										Float tmp141 = (a41 * b13);		HX_STACK_VAR(tmp141,"tmp141");
										HX_STACK_LINE(23)
										Float tmp142 = (a42 * b23);		HX_STACK_VAR(tmp142,"tmp142");
										HX_STACK_LINE(23)
										Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
										HX_STACK_LINE(23)
										Float tmp144 = (a43 * b33);		HX_STACK_VAR(tmp144,"tmp144");
										HX_STACK_LINE(23)
										Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
										HX_STACK_LINE(23)
										Float tmp146 = (a44 * b43);		HX_STACK_VAR(tmp146,"tmp146");
										HX_STACK_LINE(23)
										Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
										HX_STACK_LINE(23)
										te[(int)11] = tmp147;
										HX_STACK_LINE(23)
										Float tmp148 = (a41 * b14);		HX_STACK_VAR(tmp148,"tmp148");
										HX_STACK_LINE(23)
										Float tmp149 = (a42 * b24);		HX_STACK_VAR(tmp149,"tmp149");
										HX_STACK_LINE(23)
										Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
										HX_STACK_LINE(23)
										Float tmp151 = (a43 * b34);		HX_STACK_VAR(tmp151,"tmp151");
										HX_STACK_LINE(23)
										Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
										HX_STACK_LINE(23)
										Float tmp153 = (a44 * b44);		HX_STACK_VAR(tmp153,"tmp153");
										HX_STACK_LINE(23)
										Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
										HX_STACK_LINE(23)
										te[(int)15] = tmp154;
										HX_STACK_LINE(23)
										_this2;
									}
								}
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									::phoenix::Matrix tmp10 = _this1->local->matrix;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(23)
									::phoenix::Matrix _this2 = tmp10;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(23)
									::phoenix::Vector tmp11 = _this1->local->scale;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(23)
									::phoenix::Vector _v = tmp11;		HX_STACK_VAR(_v,"_v");
									HX_STACK_LINE(23)
									Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(23)
									Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
									HX_STACK_LINE(23)
									Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(23)
									Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
									HX_STACK_LINE(23)
									Float tmp12 = _x;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(23)
									hx::MultEq(te[(int)0],tmp12);
									HX_STACK_LINE(23)
									Float tmp13 = _y;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(23)
									hx::MultEq(te[(int)4],tmp13);
									HX_STACK_LINE(23)
									Float tmp14 = _z;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(23)
									hx::MultEq(te[(int)8],tmp14);
									HX_STACK_LINE(23)
									Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(23)
									hx::MultEq(te[(int)1],tmp15);
									HX_STACK_LINE(23)
									Float tmp16 = _y;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(23)
									hx::MultEq(te[(int)5],tmp16);
									HX_STACK_LINE(23)
									Float tmp17 = _z;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(23)
									hx::MultEq(te[(int)9],tmp17);
									HX_STACK_LINE(23)
									Float tmp18 = _x;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(23)
									hx::MultEq(te[(int)2],tmp18);
									HX_STACK_LINE(23)
									Float tmp19 = _y;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(23)
									hx::MultEq(te[(int)6],tmp19);
									HX_STACK_LINE(23)
									Float tmp20 = _z;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(23)
									hx::MultEq(te[(int)10],tmp20);
									HX_STACK_LINE(23)
									Float tmp21 = _x;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(23)
									hx::MultEq(te[(int)3],tmp21);
									HX_STACK_LINE(23)
									Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(23)
									hx::MultEq(te[(int)7],tmp22);
									HX_STACK_LINE(23)
									Float tmp23 = _z;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(23)
									hx::MultEq(te[(int)11],tmp23);
									HX_STACK_LINE(23)
									_this2;
								}
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									::phoenix::Matrix tmp10 = _this1->local->matrix;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(23)
									::phoenix::Matrix _this2 = tmp10;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(23)
									::phoenix::Vector tmp11 = _this1->local->pos;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(23)
									::phoenix::Vector _v = tmp11;		HX_STACK_VAR(_v,"_v");
									HX_STACK_LINE(23)
									Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(23)
									Float tmp12 = _v->x;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(23)
									te[(int)12] = tmp12;
									HX_STACK_LINE(23)
									Float tmp13 = _v->y;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(23)
									te[(int)13] = tmp13;
									HX_STACK_LINE(23)
									Float tmp14 = _v->z;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(23)
									te[(int)14] = tmp14;
									HX_STACK_LINE(23)
									_this2;
								}
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									::phoenix::Matrix tmp10 = _this1->local->matrix;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(23)
									::phoenix::Matrix _this2 = tmp10;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										Array< Float > ae = _this2->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(23)
										Array< Float > be = _this1->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(23)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(23)
										Float tmp11 = ae->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(23)
										Float a11 = tmp11;		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(23)
										Float tmp12 = ae->__get((int)4);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(23)
										Float a12 = tmp12;		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(23)
										Float tmp13 = ae->__get((int)8);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(23)
										Float a13 = tmp13;		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(23)
										Float tmp14 = ae->__get((int)12);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(23)
										Float a14 = tmp14;		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(23)
										Float tmp15 = ae->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(23)
										Float a21 = tmp15;		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(23)
										Float tmp16 = ae->__get((int)5);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(23)
										Float a22 = tmp16;		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(23)
										Float tmp17 = ae->__get((int)9);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(23)
										Float a23 = tmp17;		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(23)
										Float tmp18 = ae->__get((int)13);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(23)
										Float a24 = tmp18;		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(23)
										Float tmp19 = ae->__get((int)2);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(23)
										Float a31 = tmp19;		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(23)
										Float tmp20 = ae->__get((int)6);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(23)
										Float a32 = tmp20;		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(23)
										Float tmp21 = ae->__get((int)10);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(23)
										Float a33 = tmp21;		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(23)
										Float tmp22 = ae->__get((int)14);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(23)
										Float a34 = tmp22;		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(23)
										Float tmp23 = ae->__get((int)3);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(23)
										Float a41 = tmp23;		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(23)
										Float tmp24 = ae->__get((int)7);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(23)
										Float a42 = tmp24;		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(23)
										Float tmp25 = ae->__get((int)11);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(23)
										Float a43 = tmp25;		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(23)
										Float tmp26 = ae->__get((int)15);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(23)
										Float a44 = tmp26;		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(23)
										Float tmp27 = be->__get((int)0);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(23)
										Float b11 = tmp27;		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(23)
										Float tmp28 = be->__get((int)4);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(23)
										Float b12 = tmp28;		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(23)
										Float tmp29 = be->__get((int)8);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(23)
										Float b13 = tmp29;		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(23)
										Float tmp30 = be->__get((int)12);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(23)
										Float b14 = tmp30;		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(23)
										Float tmp31 = be->__get((int)1);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(23)
										Float b21 = tmp31;		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(23)
										Float tmp32 = be->__get((int)5);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(23)
										Float b22 = tmp32;		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(23)
										Float tmp33 = be->__get((int)9);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(23)
										Float b23 = tmp33;		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(23)
										Float tmp34 = be->__get((int)13);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(23)
										Float b24 = tmp34;		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(23)
										Float tmp35 = be->__get((int)2);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(23)
										Float b31 = tmp35;		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(23)
										Float tmp36 = be->__get((int)6);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(23)
										Float b32 = tmp36;		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(23)
										Float tmp37 = be->__get((int)10);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(23)
										Float b33 = tmp37;		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(23)
										Float tmp38 = be->__get((int)14);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(23)
										Float b34 = tmp38;		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(23)
										Float tmp39 = be->__get((int)3);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(23)
										Float b41 = tmp39;		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(23)
										Float tmp40 = be->__get((int)7);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(23)
										Float b42 = tmp40;		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(23)
										Float tmp41 = be->__get((int)11);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(23)
										Float b43 = tmp41;		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(23)
										Float tmp42 = be->__get((int)15);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(23)
										Float b44 = tmp42;		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(23)
										Float tmp43 = (a11 * b11);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(23)
										Float tmp44 = (a12 * b21);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(23)
										Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(23)
										Float tmp46 = (a13 * b31);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(23)
										Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(23)
										Float tmp48 = (a14 * b41);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(23)
										Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(23)
										te[(int)0] = tmp49;
										HX_STACK_LINE(23)
										Float tmp50 = (a11 * b12);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(23)
										Float tmp51 = (a12 * b22);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(23)
										Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(23)
										Float tmp53 = (a13 * b32);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(23)
										Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(23)
										Float tmp55 = (a14 * b42);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(23)
										Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(23)
										te[(int)4] = tmp56;
										HX_STACK_LINE(23)
										Float tmp57 = (a11 * b13);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(23)
										Float tmp58 = (a12 * b23);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(23)
										Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(23)
										Float tmp60 = (a13 * b33);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(23)
										Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(23)
										Float tmp62 = (a14 * b43);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(23)
										Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(23)
										te[(int)8] = tmp63;
										HX_STACK_LINE(23)
										Float tmp64 = (a11 * b14);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(23)
										Float tmp65 = (a12 * b24);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(23)
										Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(23)
										Float tmp67 = (a13 * b34);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(23)
										Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(23)
										Float tmp69 = (a14 * b44);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(23)
										Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(23)
										te[(int)12] = tmp70;
										HX_STACK_LINE(23)
										Float tmp71 = (a21 * b11);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(23)
										Float tmp72 = (a22 * b21);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(23)
										Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(23)
										Float tmp74 = (a23 * b31);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(23)
										Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(23)
										Float tmp76 = (a24 * b41);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(23)
										Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(23)
										te[(int)1] = tmp77;
										HX_STACK_LINE(23)
										Float tmp78 = (a21 * b12);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(23)
										Float tmp79 = (a22 * b22);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(23)
										Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(23)
										Float tmp81 = (a23 * b32);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(23)
										Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(23)
										Float tmp83 = (a24 * b42);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(23)
										Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(23)
										te[(int)5] = tmp84;
										HX_STACK_LINE(23)
										Float tmp85 = (a21 * b13);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(23)
										Float tmp86 = (a22 * b23);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(23)
										Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(23)
										Float tmp88 = (a23 * b33);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(23)
										Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(23)
										Float tmp90 = (a24 * b43);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(23)
										Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(23)
										te[(int)9] = tmp91;
										HX_STACK_LINE(23)
										Float tmp92 = (a21 * b14);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(23)
										Float tmp93 = (a22 * b24);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(23)
										Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(23)
										Float tmp95 = (a23 * b34);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(23)
										Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(23)
										Float tmp97 = (a24 * b44);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(23)
										Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(23)
										te[(int)13] = tmp98;
										HX_STACK_LINE(23)
										Float tmp99 = (a31 * b11);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(23)
										Float tmp100 = (a32 * b21);		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(23)
										Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(23)
										Float tmp102 = (a33 * b31);		HX_STACK_VAR(tmp102,"tmp102");
										HX_STACK_LINE(23)
										Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
										HX_STACK_LINE(23)
										Float tmp104 = (a34 * b41);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(23)
										Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
										HX_STACK_LINE(23)
										te[(int)2] = tmp105;
										HX_STACK_LINE(23)
										Float tmp106 = (a31 * b12);		HX_STACK_VAR(tmp106,"tmp106");
										HX_STACK_LINE(23)
										Float tmp107 = (a32 * b22);		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(23)
										Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(23)
										Float tmp109 = (a33 * b32);		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(23)
										Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
										HX_STACK_LINE(23)
										Float tmp111 = (a34 * b42);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(23)
										Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
										HX_STACK_LINE(23)
										te[(int)6] = tmp112;
										HX_STACK_LINE(23)
										Float tmp113 = (a31 * b13);		HX_STACK_VAR(tmp113,"tmp113");
										HX_STACK_LINE(23)
										Float tmp114 = (a32 * b23);		HX_STACK_VAR(tmp114,"tmp114");
										HX_STACK_LINE(23)
										Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
										HX_STACK_LINE(23)
										Float tmp116 = (a33 * b33);		HX_STACK_VAR(tmp116,"tmp116");
										HX_STACK_LINE(23)
										Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
										HX_STACK_LINE(23)
										Float tmp118 = (a34 * b43);		HX_STACK_VAR(tmp118,"tmp118");
										HX_STACK_LINE(23)
										Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
										HX_STACK_LINE(23)
										te[(int)10] = tmp119;
										HX_STACK_LINE(23)
										Float tmp120 = (a31 * b14);		HX_STACK_VAR(tmp120,"tmp120");
										HX_STACK_LINE(23)
										Float tmp121 = (a32 * b24);		HX_STACK_VAR(tmp121,"tmp121");
										HX_STACK_LINE(23)
										Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
										HX_STACK_LINE(23)
										Float tmp123 = (a33 * b34);		HX_STACK_VAR(tmp123,"tmp123");
										HX_STACK_LINE(23)
										Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
										HX_STACK_LINE(23)
										Float tmp125 = (a34 * b44);		HX_STACK_VAR(tmp125,"tmp125");
										HX_STACK_LINE(23)
										Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
										HX_STACK_LINE(23)
										te[(int)14] = tmp126;
										HX_STACK_LINE(23)
										Float tmp127 = (a41 * b11);		HX_STACK_VAR(tmp127,"tmp127");
										HX_STACK_LINE(23)
										Float tmp128 = (a42 * b21);		HX_STACK_VAR(tmp128,"tmp128");
										HX_STACK_LINE(23)
										Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
										HX_STACK_LINE(23)
										Float tmp130 = (a43 * b31);		HX_STACK_VAR(tmp130,"tmp130");
										HX_STACK_LINE(23)
										Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
										HX_STACK_LINE(23)
										Float tmp132 = (a44 * b41);		HX_STACK_VAR(tmp132,"tmp132");
										HX_STACK_LINE(23)
										Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
										HX_STACK_LINE(23)
										te[(int)3] = tmp133;
										HX_STACK_LINE(23)
										Float tmp134 = (a41 * b12);		HX_STACK_VAR(tmp134,"tmp134");
										HX_STACK_LINE(23)
										Float tmp135 = (a42 * b22);		HX_STACK_VAR(tmp135,"tmp135");
										HX_STACK_LINE(23)
										Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
										HX_STACK_LINE(23)
										Float tmp137 = (a43 * b32);		HX_STACK_VAR(tmp137,"tmp137");
										HX_STACK_LINE(23)
										Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
										HX_STACK_LINE(23)
										Float tmp139 = (a44 * b42);		HX_STACK_VAR(tmp139,"tmp139");
										HX_STACK_LINE(23)
										Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
										HX_STACK_LINE(23)
										te[(int)7] = tmp140;
										HX_STACK_LINE(23)
										Float tmp141 = (a41 * b13);		HX_STACK_VAR(tmp141,"tmp141");
										HX_STACK_LINE(23)
										Float tmp142 = (a42 * b23);		HX_STACK_VAR(tmp142,"tmp142");
										HX_STACK_LINE(23)
										Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
										HX_STACK_LINE(23)
										Float tmp144 = (a43 * b33);		HX_STACK_VAR(tmp144,"tmp144");
										HX_STACK_LINE(23)
										Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
										HX_STACK_LINE(23)
										Float tmp146 = (a44 * b43);		HX_STACK_VAR(tmp146,"tmp146");
										HX_STACK_LINE(23)
										Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
										HX_STACK_LINE(23)
										te[(int)11] = tmp147;
										HX_STACK_LINE(23)
										Float tmp148 = (a41 * b14);		HX_STACK_VAR(tmp148,"tmp148");
										HX_STACK_LINE(23)
										Float tmp149 = (a42 * b24);		HX_STACK_VAR(tmp149,"tmp149");
										HX_STACK_LINE(23)
										Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
										HX_STACK_LINE(23)
										Float tmp151 = (a43 * b34);		HX_STACK_VAR(tmp151,"tmp151");
										HX_STACK_LINE(23)
										Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
										HX_STACK_LINE(23)
										Float tmp153 = (a44 * b44);		HX_STACK_VAR(tmp153,"tmp153");
										HX_STACK_LINE(23)
										Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
										HX_STACK_LINE(23)
										te[(int)15] = tmp154;
										HX_STACK_LINE(23)
										_this2;
									}
								}
								HX_STACK_LINE(23)
								bool tmp10 = (_this1->parent != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(23)
								if ((tmp10)){
									HX_STACK_LINE(23)
									::phoenix::Spatial tmp11 = _this1->get_world();		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(23)
									::phoenix::Spatial _this2 = tmp11;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(23)
									::phoenix::Matrix tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										::phoenix::Matrix tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(23)
										{
											HX_STACK_LINE(23)
											::phoenix::Spatial tmp14 = _this1->get_world();		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(23)
											::phoenix::Spatial _this3 = tmp14;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(23)
											tmp13 = _this3->matrix;
										}
										HX_STACK_LINE(23)
										::phoenix::Matrix _this3 = tmp13;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(23)
										::phoenix::Matrix tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(23)
										{
											HX_STACK_LINE(23)
											::phoenix::Spatial tmp15 = _this1->parent->get_world();		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(23)
											::phoenix::Spatial _this4 = tmp15;		HX_STACK_VAR(_this4,"_this4");
											HX_STACK_LINE(23)
											tmp14 = _this4->matrix;
										}
										HX_STACK_LINE(23)
										::phoenix::Matrix _a = tmp14;		HX_STACK_VAR(_a,"_a");
										HX_STACK_LINE(23)
										Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
										HX_STACK_LINE(23)
										::phoenix::Matrix tmp15 = _this1->local->matrix;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(23)
										Array< Float > be = tmp15->elements;		HX_STACK_VAR(be,"be");
										HX_STACK_LINE(23)
										Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(23)
										Float tmp16 = ae->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(23)
										Float a11 = tmp16;		HX_STACK_VAR(a11,"a11");
										HX_STACK_LINE(23)
										Float tmp17 = ae->__get((int)4);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(23)
										Float a12 = tmp17;		HX_STACK_VAR(a12,"a12");
										HX_STACK_LINE(23)
										Float tmp18 = ae->__get((int)8);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(23)
										Float a13 = tmp18;		HX_STACK_VAR(a13,"a13");
										HX_STACK_LINE(23)
										Float tmp19 = ae->__get((int)12);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(23)
										Float a14 = tmp19;		HX_STACK_VAR(a14,"a14");
										HX_STACK_LINE(23)
										Float tmp20 = ae->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(23)
										Float a21 = tmp20;		HX_STACK_VAR(a21,"a21");
										HX_STACK_LINE(23)
										Float tmp21 = ae->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(23)
										Float a22 = tmp21;		HX_STACK_VAR(a22,"a22");
										HX_STACK_LINE(23)
										Float tmp22 = ae->__get((int)9);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(23)
										Float a23 = tmp22;		HX_STACK_VAR(a23,"a23");
										HX_STACK_LINE(23)
										Float tmp23 = ae->__get((int)13);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(23)
										Float a24 = tmp23;		HX_STACK_VAR(a24,"a24");
										HX_STACK_LINE(23)
										Float tmp24 = ae->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(23)
										Float a31 = tmp24;		HX_STACK_VAR(a31,"a31");
										HX_STACK_LINE(23)
										Float tmp25 = ae->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(23)
										Float a32 = tmp25;		HX_STACK_VAR(a32,"a32");
										HX_STACK_LINE(23)
										Float tmp26 = ae->__get((int)10);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(23)
										Float a33 = tmp26;		HX_STACK_VAR(a33,"a33");
										HX_STACK_LINE(23)
										Float tmp27 = ae->__get((int)14);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(23)
										Float a34 = tmp27;		HX_STACK_VAR(a34,"a34");
										HX_STACK_LINE(23)
										Float tmp28 = ae->__get((int)3);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(23)
										Float a41 = tmp28;		HX_STACK_VAR(a41,"a41");
										HX_STACK_LINE(23)
										Float tmp29 = ae->__get((int)7);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(23)
										Float a42 = tmp29;		HX_STACK_VAR(a42,"a42");
										HX_STACK_LINE(23)
										Float tmp30 = ae->__get((int)11);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(23)
										Float a43 = tmp30;		HX_STACK_VAR(a43,"a43");
										HX_STACK_LINE(23)
										Float tmp31 = ae->__get((int)15);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(23)
										Float a44 = tmp31;		HX_STACK_VAR(a44,"a44");
										HX_STACK_LINE(23)
										Float tmp32 = be->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(23)
										Float b11 = tmp32;		HX_STACK_VAR(b11,"b11");
										HX_STACK_LINE(23)
										Float tmp33 = be->__get((int)4);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(23)
										Float b12 = tmp33;		HX_STACK_VAR(b12,"b12");
										HX_STACK_LINE(23)
										Float tmp34 = be->__get((int)8);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(23)
										Float b13 = tmp34;		HX_STACK_VAR(b13,"b13");
										HX_STACK_LINE(23)
										Float tmp35 = be->__get((int)12);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(23)
										Float b14 = tmp35;		HX_STACK_VAR(b14,"b14");
										HX_STACK_LINE(23)
										Float tmp36 = be->__get((int)1);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(23)
										Float b21 = tmp36;		HX_STACK_VAR(b21,"b21");
										HX_STACK_LINE(23)
										Float tmp37 = be->__get((int)5);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(23)
										Float b22 = tmp37;		HX_STACK_VAR(b22,"b22");
										HX_STACK_LINE(23)
										Float tmp38 = be->__get((int)9);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(23)
										Float b23 = tmp38;		HX_STACK_VAR(b23,"b23");
										HX_STACK_LINE(23)
										Float tmp39 = be->__get((int)13);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(23)
										Float b24 = tmp39;		HX_STACK_VAR(b24,"b24");
										HX_STACK_LINE(23)
										Float tmp40 = be->__get((int)2);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(23)
										Float b31 = tmp40;		HX_STACK_VAR(b31,"b31");
										HX_STACK_LINE(23)
										Float tmp41 = be->__get((int)6);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(23)
										Float b32 = tmp41;		HX_STACK_VAR(b32,"b32");
										HX_STACK_LINE(23)
										Float tmp42 = be->__get((int)10);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(23)
										Float b33 = tmp42;		HX_STACK_VAR(b33,"b33");
										HX_STACK_LINE(23)
										Float tmp43 = be->__get((int)14);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(23)
										Float b34 = tmp43;		HX_STACK_VAR(b34,"b34");
										HX_STACK_LINE(23)
										Float tmp44 = be->__get((int)3);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(23)
										Float b41 = tmp44;		HX_STACK_VAR(b41,"b41");
										HX_STACK_LINE(23)
										Float tmp45 = be->__get((int)7);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(23)
										Float b42 = tmp45;		HX_STACK_VAR(b42,"b42");
										HX_STACK_LINE(23)
										Float tmp46 = be->__get((int)11);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(23)
										Float b43 = tmp46;		HX_STACK_VAR(b43,"b43");
										HX_STACK_LINE(23)
										Float tmp47 = be->__get((int)15);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(23)
										Float b44 = tmp47;		HX_STACK_VAR(b44,"b44");
										HX_STACK_LINE(23)
										Float tmp48 = (a11 * b11);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(23)
										Float tmp49 = (a12 * b21);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(23)
										Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(23)
										Float tmp51 = (a13 * b31);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(23)
										Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(23)
										Float tmp53 = (a14 * b41);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(23)
										Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(23)
										te[(int)0] = tmp54;
										HX_STACK_LINE(23)
										Float tmp55 = (a11 * b12);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(23)
										Float tmp56 = (a12 * b22);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(23)
										Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(23)
										Float tmp58 = (a13 * b32);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(23)
										Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(23)
										Float tmp60 = (a14 * b42);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(23)
										Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(23)
										te[(int)4] = tmp61;
										HX_STACK_LINE(23)
										Float tmp62 = (a11 * b13);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(23)
										Float tmp63 = (a12 * b23);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(23)
										Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(23)
										Float tmp65 = (a13 * b33);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(23)
										Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(23)
										Float tmp67 = (a14 * b43);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(23)
										Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(23)
										te[(int)8] = tmp68;
										HX_STACK_LINE(23)
										Float tmp69 = (a11 * b14);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(23)
										Float tmp70 = (a12 * b24);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(23)
										Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(23)
										Float tmp72 = (a13 * b34);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(23)
										Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(23)
										Float tmp74 = (a14 * b44);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(23)
										Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(23)
										te[(int)12] = tmp75;
										HX_STACK_LINE(23)
										Float tmp76 = (a21 * b11);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(23)
										Float tmp77 = (a22 * b21);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(23)
										Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(23)
										Float tmp79 = (a23 * b31);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(23)
										Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(23)
										Float tmp81 = (a24 * b41);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(23)
										Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(23)
										te[(int)1] = tmp82;
										HX_STACK_LINE(23)
										Float tmp83 = (a21 * b12);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(23)
										Float tmp84 = (a22 * b22);		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(23)
										Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(23)
										Float tmp86 = (a23 * b32);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(23)
										Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(23)
										Float tmp88 = (a24 * b42);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(23)
										Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(23)
										te[(int)5] = tmp89;
										HX_STACK_LINE(23)
										Float tmp90 = (a21 * b13);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(23)
										Float tmp91 = (a22 * b23);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(23)
										Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(23)
										Float tmp93 = (a23 * b33);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(23)
										Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(23)
										Float tmp95 = (a24 * b43);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(23)
										Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(23)
										te[(int)9] = tmp96;
										HX_STACK_LINE(23)
										Float tmp97 = (a21 * b14);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(23)
										Float tmp98 = (a22 * b24);		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(23)
										Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(23)
										Float tmp100 = (a23 * b34);		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(23)
										Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(23)
										Float tmp102 = (a24 * b44);		HX_STACK_VAR(tmp102,"tmp102");
										HX_STACK_LINE(23)
										Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
										HX_STACK_LINE(23)
										te[(int)13] = tmp103;
										HX_STACK_LINE(23)
										Float tmp104 = (a31 * b11);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(23)
										Float tmp105 = (a32 * b21);		HX_STACK_VAR(tmp105,"tmp105");
										HX_STACK_LINE(23)
										Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
										HX_STACK_LINE(23)
										Float tmp107 = (a33 * b31);		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(23)
										Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(23)
										Float tmp109 = (a34 * b41);		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(23)
										Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
										HX_STACK_LINE(23)
										te[(int)2] = tmp110;
										HX_STACK_LINE(23)
										Float tmp111 = (a31 * b12);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(23)
										Float tmp112 = (a32 * b22);		HX_STACK_VAR(tmp112,"tmp112");
										HX_STACK_LINE(23)
										Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
										HX_STACK_LINE(23)
										Float tmp114 = (a33 * b32);		HX_STACK_VAR(tmp114,"tmp114");
										HX_STACK_LINE(23)
										Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
										HX_STACK_LINE(23)
										Float tmp116 = (a34 * b42);		HX_STACK_VAR(tmp116,"tmp116");
										HX_STACK_LINE(23)
										Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
										HX_STACK_LINE(23)
										te[(int)6] = tmp117;
										HX_STACK_LINE(23)
										Float tmp118 = (a31 * b13);		HX_STACK_VAR(tmp118,"tmp118");
										HX_STACK_LINE(23)
										Float tmp119 = (a32 * b23);		HX_STACK_VAR(tmp119,"tmp119");
										HX_STACK_LINE(23)
										Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
										HX_STACK_LINE(23)
										Float tmp121 = (a33 * b33);		HX_STACK_VAR(tmp121,"tmp121");
										HX_STACK_LINE(23)
										Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
										HX_STACK_LINE(23)
										Float tmp123 = (a34 * b43);		HX_STACK_VAR(tmp123,"tmp123");
										HX_STACK_LINE(23)
										Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
										HX_STACK_LINE(23)
										te[(int)10] = tmp124;
										HX_STACK_LINE(23)
										Float tmp125 = (a31 * b14);		HX_STACK_VAR(tmp125,"tmp125");
										HX_STACK_LINE(23)
										Float tmp126 = (a32 * b24);		HX_STACK_VAR(tmp126,"tmp126");
										HX_STACK_LINE(23)
										Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
										HX_STACK_LINE(23)
										Float tmp128 = (a33 * b34);		HX_STACK_VAR(tmp128,"tmp128");
										HX_STACK_LINE(23)
										Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
										HX_STACK_LINE(23)
										Float tmp130 = (a34 * b44);		HX_STACK_VAR(tmp130,"tmp130");
										HX_STACK_LINE(23)
										Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
										HX_STACK_LINE(23)
										te[(int)14] = tmp131;
										HX_STACK_LINE(23)
										Float tmp132 = (a41 * b11);		HX_STACK_VAR(tmp132,"tmp132");
										HX_STACK_LINE(23)
										Float tmp133 = (a42 * b21);		HX_STACK_VAR(tmp133,"tmp133");
										HX_STACK_LINE(23)
										Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
										HX_STACK_LINE(23)
										Float tmp135 = (a43 * b31);		HX_STACK_VAR(tmp135,"tmp135");
										HX_STACK_LINE(23)
										Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
										HX_STACK_LINE(23)
										Float tmp137 = (a44 * b41);		HX_STACK_VAR(tmp137,"tmp137");
										HX_STACK_LINE(23)
										Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
										HX_STACK_LINE(23)
										te[(int)3] = tmp138;
										HX_STACK_LINE(23)
										Float tmp139 = (a41 * b12);		HX_STACK_VAR(tmp139,"tmp139");
										HX_STACK_LINE(23)
										Float tmp140 = (a42 * b22);		HX_STACK_VAR(tmp140,"tmp140");
										HX_STACK_LINE(23)
										Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
										HX_STACK_LINE(23)
										Float tmp142 = (a43 * b32);		HX_STACK_VAR(tmp142,"tmp142");
										HX_STACK_LINE(23)
										Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
										HX_STACK_LINE(23)
										Float tmp144 = (a44 * b42);		HX_STACK_VAR(tmp144,"tmp144");
										HX_STACK_LINE(23)
										Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
										HX_STACK_LINE(23)
										te[(int)7] = tmp145;
										HX_STACK_LINE(23)
										Float tmp146 = (a41 * b13);		HX_STACK_VAR(tmp146,"tmp146");
										HX_STACK_LINE(23)
										Float tmp147 = (a42 * b23);		HX_STACK_VAR(tmp147,"tmp147");
										HX_STACK_LINE(23)
										Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
										HX_STACK_LINE(23)
										Float tmp149 = (a43 * b33);		HX_STACK_VAR(tmp149,"tmp149");
										HX_STACK_LINE(23)
										Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
										HX_STACK_LINE(23)
										Float tmp151 = (a44 * b43);		HX_STACK_VAR(tmp151,"tmp151");
										HX_STACK_LINE(23)
										Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
										HX_STACK_LINE(23)
										te[(int)11] = tmp152;
										HX_STACK_LINE(23)
										Float tmp153 = (a41 * b14);		HX_STACK_VAR(tmp153,"tmp153");
										HX_STACK_LINE(23)
										Float tmp154 = (a42 * b24);		HX_STACK_VAR(tmp154,"tmp154");
										HX_STACK_LINE(23)
										Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
										HX_STACK_LINE(23)
										Float tmp156 = (a43 * b34);		HX_STACK_VAR(tmp156,"tmp156");
										HX_STACK_LINE(23)
										Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
										HX_STACK_LINE(23)
										Float tmp158 = (a44 * b44);		HX_STACK_VAR(tmp158,"tmp158");
										HX_STACK_LINE(23)
										Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
										HX_STACK_LINE(23)
										te[(int)15] = tmp159;
										HX_STACK_LINE(23)
										tmp12 = _this3;
									}
									HX_STACK_LINE(23)
									::phoenix::Matrix _m = tmp12;		HX_STACK_VAR(_m,"_m");
									HX_STACK_LINE(23)
									_this2->matrix = _m;
									HX_STACK_LINE(23)
									bool tmp13 = (_m != null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(23)
									if ((tmp13)){
										HX_STACK_LINE(23)
										::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(23)
										{
											HX_STACK_LINE(23)
											cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
											HX_STACK_LINE(23)
											::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(23)
											bool tmp15 = (array != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(23)
											if ((tmp15)){
												HX_STACK_LINE(23)
												::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(23)
												{
													HX_STACK_LINE(23)
													::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(23)
													::snow::api::buffers::ArrayBufferView _this3 = tmp17;		HX_STACK_VAR(_this3,"_this3");
													HX_STACK_LINE(23)
													_this3->byteOffset = (int)0;
													HX_STACK_LINE(23)
													_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
													HX_STACK_LINE(23)
													int tmp18 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(23)
													_this3->byteLength = tmp18;
													HX_STACK_LINE(23)
													::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(23)
													{
														HX_STACK_LINE(23)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(23)
														int tmp20 = _this3->byteLength;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(23)
														::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(23)
														this2 = tmp21;
														HX_STACK_LINE(23)
														tmp19 = this2;
													}
													HX_STACK_LINE(23)
													_this3->buffer = tmp19;
													HX_STACK_LINE(23)
													_this3->copyFromArray(((Array< Float >)(array)),null());
													HX_STACK_LINE(23)
													tmp16 = _this3;
												}
												HX_STACK_LINE(23)
												this1 = tmp16;
											}
											else{
												HX_STACK_LINE(23)
												HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
											}
											HX_STACK_LINE(23)
											tmp14 = this1;
										}
										HX_STACK_LINE(23)
										_this2->floats = tmp14;
									}
									HX_STACK_LINE(23)
									_this2->matrix;
								}
								else{
									HX_STACK_LINE(23)
									::phoenix::Spatial tmp11 = _this1->get_world();		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(23)
									::phoenix::Spatial _this2 = tmp11;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(23)
									::phoenix::Matrix tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										::phoenix::Matrix tmp13 = _this1->local->matrix;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(23)
										Array< Float > te = tmp13->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(23)
										Float tmp14 = te->__get((int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(23)
										Float tmp15 = te->__get((int)4);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(23)
										Float tmp16 = te->__get((int)8);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(23)
										Float tmp17 = te->__get((int)12);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(23)
										Float tmp18 = te->__get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(23)
										Float tmp19 = te->__get((int)5);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(23)
										Float tmp20 = te->__get((int)9);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(23)
										Float tmp21 = te->__get((int)13);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(23)
										Float tmp22 = te->__get((int)2);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(23)
										Float tmp23 = te->__get((int)6);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(23)
										Float tmp24 = te->__get((int)10);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(23)
										Float tmp25 = te->__get((int)14);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(23)
										Float tmp26 = te->__get((int)3);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(23)
										Float tmp27 = te->__get((int)7);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(23)
										Float tmp28 = te->__get((int)11);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(23)
										Float tmp29 = te->__get((int)15);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(23)
										tmp12 = ::phoenix::Matrix_obj::__new(tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29);
									}
									HX_STACK_LINE(23)
									::phoenix::Matrix _m = tmp12;		HX_STACK_VAR(_m,"_m");
									HX_STACK_LINE(23)
									_this2->matrix = _m;
									HX_STACK_LINE(23)
									bool tmp13 = (_m != null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(23)
									if ((tmp13)){
										HX_STACK_LINE(23)
										::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(23)
										{
											HX_STACK_LINE(23)
											cpp::ArrayBase array = _this2->matrix->elements;		HX_STACK_VAR(array,"array");
											HX_STACK_LINE(23)
											::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(23)
											bool tmp15 = (array != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(23)
											if ((tmp15)){
												HX_STACK_LINE(23)
												::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(23)
												{
													HX_STACK_LINE(23)
													::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(23)
													::snow::api::buffers::ArrayBufferView _this3 = tmp17;		HX_STACK_VAR(_this3,"_this3");
													HX_STACK_LINE(23)
													_this3->byteOffset = (int)0;
													HX_STACK_LINE(23)
													_this3->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
													HX_STACK_LINE(23)
													int tmp18 = (_this3->length * _this3->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(23)
													_this3->byteLength = tmp18;
													HX_STACK_LINE(23)
													::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(23)
													{
														HX_STACK_LINE(23)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(23)
														int tmp20 = _this3->byteLength;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(23)
														::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(23)
														this2 = tmp21;
														HX_STACK_LINE(23)
														tmp19 = this2;
													}
													HX_STACK_LINE(23)
													_this3->buffer = tmp19;
													HX_STACK_LINE(23)
													_this3->copyFromArray(((Array< Float >)(array)),null());
													HX_STACK_LINE(23)
													tmp16 = _this3;
												}
												HX_STACK_LINE(23)
												this1 = tmp16;
											}
											else{
												HX_STACK_LINE(23)
												HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
											}
											HX_STACK_LINE(23)
											tmp14 = this1;
										}
										HX_STACK_LINE(23)
										_this2->floats = tmp14;
									}
									HX_STACK_LINE(23)
									_this2->matrix;
								}
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									::phoenix::Spatial tmp11 = _this1->get_world();		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(23)
									::phoenix::Spatial _this2 = tmp11;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(23)
									bool tmp12 = _this2->auto_decompose;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(23)
									if ((tmp12)){
										HX_STACK_LINE(23)
										::phoenix::MatrixTransform tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(23)
										{
											HX_STACK_LINE(23)
											::phoenix::Matrix _this3 = _this2->matrix;		HX_STACK_VAR(_this3,"_this3");
											HX_STACK_LINE(23)
											::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
											HX_STACK_LINE(23)
											::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
											HX_STACK_LINE(23)
											::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
											HX_STACK_LINE(23)
											Array< Float > te = _this3->elements;		HX_STACK_VAR(te,"te");
											HX_STACK_LINE(23)
											::phoenix::Matrix tmp14 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(23)
											::phoenix::Matrix matrix = tmp14;		HX_STACK_VAR(matrix,"matrix");
											HX_STACK_LINE(23)
											Float tmp15 = te->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(23)
											Float _ax_x = tmp15;		HX_STACK_VAR(_ax_x,"_ax_x");
											HX_STACK_LINE(23)
											Float tmp16 = te->__get((int)1);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(23)
											Float _ax_y = tmp16;		HX_STACK_VAR(_ax_y,"_ax_y");
											HX_STACK_LINE(23)
											Float tmp17 = te->__get((int)2);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(23)
											Float _ax_z = tmp17;		HX_STACK_VAR(_ax_z,"_ax_z");
											HX_STACK_LINE(23)
											Float tmp18 = te->__get((int)4);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(23)
											Float _ay_x = tmp18;		HX_STACK_VAR(_ay_x,"_ay_x");
											HX_STACK_LINE(23)
											Float tmp19 = te->__get((int)5);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(23)
											Float _ay_y = tmp19;		HX_STACK_VAR(_ay_y,"_ay_y");
											HX_STACK_LINE(23)
											Float tmp20 = te->__get((int)6);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(23)
											Float _ay_z = tmp20;		HX_STACK_VAR(_ay_z,"_ay_z");
											HX_STACK_LINE(23)
											Float tmp21 = te->__get((int)8);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(23)
											Float _az_x = tmp21;		HX_STACK_VAR(_az_x,"_az_x");
											HX_STACK_LINE(23)
											Float tmp22 = te->__get((int)9);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(23)
											Float _az_y = tmp22;		HX_STACK_VAR(_az_y,"_az_y");
											HX_STACK_LINE(23)
											Float tmp23 = te->__get((int)10);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(23)
											Float _az_z = tmp23;		HX_STACK_VAR(_az_z,"_az_z");
											HX_STACK_LINE(23)
											Float tmp24 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(23)
											Float tmp25 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(23)
											Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(23)
											Float tmp27 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(23)
											Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(23)
											Float tmp29 = ::Math_obj::sqrt(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(23)
											Float _ax_length = tmp29;		HX_STACK_VAR(_ax_length,"_ax_length");
											HX_STACK_LINE(23)
											Float tmp30 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(23)
											Float tmp31 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(23)
											Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(23)
											Float tmp33 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(23)
											Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(23)
											Float tmp35 = ::Math_obj::sqrt(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(23)
											Float _ay_length = tmp35;		HX_STACK_VAR(_ay_length,"_ay_length");
											HX_STACK_LINE(23)
											Float tmp36 = (_az_x * _az_x);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(23)
											Float tmp37 = (_az_y * _az_y);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(23)
											Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(23)
											Float tmp39 = (_az_z * _az_z);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(23)
											Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(23)
											Float tmp41 = ::Math_obj::sqrt(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(23)
											Float _az_length = tmp41;		HX_STACK_VAR(_az_length,"_az_length");
											HX_STACK_LINE(23)
											bool tmp42 = (_quaternion == null());		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(23)
											if ((tmp42)){
												HX_STACK_LINE(23)
												::phoenix::Quaternion tmp43 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(23)
												_quaternion = tmp43;
											}
											HX_STACK_LINE(23)
											bool tmp43 = (_position == null());		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(23)
											if ((tmp43)){
												HX_STACK_LINE(23)
												Float tmp44 = te->__get((int)12);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(23)
												Float tmp45 = te->__get((int)13);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(23)
												Float tmp46 = te->__get((int)14);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(23)
												::phoenix::Vector tmp47 = ::phoenix::Vector_obj::__new(tmp44,tmp45,tmp46,null());		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(23)
												_position = tmp47;
											}
											else{
												HX_STACK_LINE(23)
												{
													HX_STACK_LINE(23)
													Float tmp44 = te->__get((int)12);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(23)
													Float _x = tmp44;		HX_STACK_VAR(_x,"_x");
													HX_STACK_LINE(23)
													_position->x = _x;
													HX_STACK_LINE(23)
													bool tmp45 = _position->_construct;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(23)
													if ((tmp45)){
														HX_STACK_LINE(23)
														_position->x;
													}
													else{
														HX_STACK_LINE(23)
														bool tmp46 = (_position->listen_x != null());		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(23)
														bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(23)
														if ((tmp46)){
															HX_STACK_LINE(23)
															bool tmp48 = _position->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(23)
															bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(23)
															tmp47 = !(tmp49);
														}
														else{
															HX_STACK_LINE(23)
															tmp47 = false;
														}
														HX_STACK_LINE(23)
														if ((tmp47)){
															HX_STACK_LINE(23)
															Float tmp48 = _x;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(23)
															_position->listen_x(tmp48);
														}
														HX_STACK_LINE(23)
														_position->x;
													}
												}
												HX_STACK_LINE(23)
												{
													HX_STACK_LINE(23)
													Float tmp44 = te->__get((int)13);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(23)
													Float _y = tmp44;		HX_STACK_VAR(_y,"_y");
													HX_STACK_LINE(23)
													_position->y = _y;
													HX_STACK_LINE(23)
													bool tmp45 = _position->_construct;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(23)
													if ((tmp45)){
														HX_STACK_LINE(23)
														_position->y;
													}
													else{
														HX_STACK_LINE(23)
														bool tmp46 = (_position->listen_y != null());		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(23)
														bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(23)
														if ((tmp46)){
															HX_STACK_LINE(23)
															bool tmp48 = _position->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(23)
															bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(23)
															tmp47 = !(tmp49);
														}
														else{
															HX_STACK_LINE(23)
															tmp47 = false;
														}
														HX_STACK_LINE(23)
														if ((tmp47)){
															HX_STACK_LINE(23)
															Float tmp48 = _y;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(23)
															_position->listen_y(tmp48);
														}
														HX_STACK_LINE(23)
														_position->y;
													}
												}
												HX_STACK_LINE(23)
												{
													HX_STACK_LINE(23)
													Float tmp44 = te->__get((int)14);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(23)
													Float _z = tmp44;		HX_STACK_VAR(_z,"_z");
													HX_STACK_LINE(23)
													_position->z = _z;
													HX_STACK_LINE(23)
													bool tmp45 = _position->_construct;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(23)
													if ((tmp45)){
														HX_STACK_LINE(23)
														_position->z;
													}
													else{
														HX_STACK_LINE(23)
														bool tmp46 = (_position->listen_z != null());		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(23)
														bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(23)
														if ((tmp46)){
															HX_STACK_LINE(23)
															bool tmp48 = _position->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(23)
															bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(23)
															tmp47 = !(tmp49);
														}
														else{
															HX_STACK_LINE(23)
															tmp47 = false;
														}
														HX_STACK_LINE(23)
														if ((tmp47)){
															HX_STACK_LINE(23)
															Float tmp48 = _z;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(23)
															_position->listen_z(tmp48);
														}
														HX_STACK_LINE(23)
														_position->z;
													}
												}
											}
											HX_STACK_LINE(23)
											bool tmp44 = (_scale == null());		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(23)
											if ((tmp44)){
												HX_STACK_LINE(23)
												::phoenix::Vector tmp45 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(23)
												_scale = tmp45;
											}
											else{
												HX_STACK_LINE(23)
												{
													HX_STACK_LINE(23)
													_scale->x = _ax_length;
													HX_STACK_LINE(23)
													bool tmp45 = _scale->_construct;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(23)
													if ((tmp45)){
														HX_STACK_LINE(23)
														_scale->x;
													}
													else{
														HX_STACK_LINE(23)
														bool tmp46 = (_scale->listen_x != null());		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(23)
														bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(23)
														if ((tmp46)){
															HX_STACK_LINE(23)
															bool tmp48 = _scale->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(23)
															bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(23)
															tmp47 = !(tmp49);
														}
														else{
															HX_STACK_LINE(23)
															tmp47 = false;
														}
														HX_STACK_LINE(23)
														if ((tmp47)){
															HX_STACK_LINE(23)
															Float tmp48 = _ax_length;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(23)
															_scale->listen_x(tmp48);
														}
														HX_STACK_LINE(23)
														_scale->x;
													}
												}
												HX_STACK_LINE(23)
												{
													HX_STACK_LINE(23)
													_scale->y = _ay_length;
													HX_STACK_LINE(23)
													bool tmp45 = _scale->_construct;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(23)
													if ((tmp45)){
														HX_STACK_LINE(23)
														_scale->y;
													}
													else{
														HX_STACK_LINE(23)
														bool tmp46 = (_scale->listen_y != null());		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(23)
														bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(23)
														if ((tmp46)){
															HX_STACK_LINE(23)
															bool tmp48 = _scale->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(23)
															bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(23)
															tmp47 = !(tmp49);
														}
														else{
															HX_STACK_LINE(23)
															tmp47 = false;
														}
														HX_STACK_LINE(23)
														if ((tmp47)){
															HX_STACK_LINE(23)
															Float tmp48 = _ay_length;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(23)
															_scale->listen_y(tmp48);
														}
														HX_STACK_LINE(23)
														_scale->y;
													}
												}
												HX_STACK_LINE(23)
												{
													HX_STACK_LINE(23)
													_scale->z = _az_length;
													HX_STACK_LINE(23)
													bool tmp45 = _scale->_construct;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(23)
													if ((tmp45)){
														HX_STACK_LINE(23)
														_scale->z;
													}
													else{
														HX_STACK_LINE(23)
														bool tmp46 = (_scale->listen_z != null());		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(23)
														bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(23)
														if ((tmp46)){
															HX_STACK_LINE(23)
															bool tmp48 = _scale->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(23)
															bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(23)
															tmp47 = !(tmp49);
														}
														else{
															HX_STACK_LINE(23)
															tmp47 = false;
														}
														HX_STACK_LINE(23)
														if ((tmp47)){
															HX_STACK_LINE(23)
															Float tmp48 = _az_length;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(23)
															_scale->listen_z(tmp48);
														}
														HX_STACK_LINE(23)
														_scale->z;
													}
												}
											}
											HX_STACK_LINE(23)
											matrix->elements = _this3->elements->concat(Array_obj< Float >::__new());
											HX_STACK_LINE(23)
											Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
											HX_STACK_LINE(23)
											Float tmp45 = _ax_length;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(23)
											hx::DivEq(me[(int)0],tmp45);
											HX_STACK_LINE(23)
											Float tmp46 = _ax_length;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(23)
											hx::DivEq(me[(int)1],tmp46);
											HX_STACK_LINE(23)
											Float tmp47 = _ax_length;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(23)
											hx::DivEq(me[(int)2],tmp47);
											HX_STACK_LINE(23)
											Float tmp48 = _ay_length;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(23)
											hx::DivEq(me[(int)4],tmp48);
											HX_STACK_LINE(23)
											Float tmp49 = _ay_length;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(23)
											hx::DivEq(me[(int)5],tmp49);
											HX_STACK_LINE(23)
											Float tmp50 = _ay_length;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(23)
											hx::DivEq(me[(int)6],tmp50);
											HX_STACK_LINE(23)
											Float tmp51 = _az_length;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(23)
											hx::DivEq(me[(int)8],tmp51);
											HX_STACK_LINE(23)
											Float tmp52 = _az_length;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(23)
											hx::DivEq(me[(int)9],tmp52);
											HX_STACK_LINE(23)
											Float tmp53 = _az_length;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(23)
											hx::DivEq(me[(int)10],tmp53);
											HX_STACK_LINE(23)
											::phoenix::Matrix tmp54 = matrix;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(23)
											_quaternion->setFromRotationMatrix(tmp54);
											HX_STACK_LINE(23)
											bool tmp55 = (_this3->_transform == null());		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(23)
											if ((tmp55)){
												HX_STACK_LINE(23)
												::phoenix::MatrixTransform tmp56 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(23)
												_this3->_transform = tmp56;
											}
											else{
												HX_STACK_LINE(23)
												_this3->_transform->pos = _position;
												HX_STACK_LINE(23)
												_this3->_transform->rotation = _quaternion;
												HX_STACK_LINE(23)
												_this3->_transform->scale = _scale;
											}
											HX_STACK_LINE(23)
											tmp13 = _this3->_transform;
										}
										HX_STACK_LINE(23)
										::phoenix::MatrixTransform _transform = tmp13;		HX_STACK_VAR(_transform,"_transform");
										HX_STACK_LINE(23)
										{
											HX_STACK_LINE(23)
											::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
											HX_STACK_LINE(23)
											_this2->pos = _p;
											HX_STACK_LINE(23)
											bool tmp14 = (_p != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(23)
											if ((tmp14)){
												HX_STACK_LINE(23)
												::phoenix::Vector tmp15 = _this2->pos;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(23)
												Dynamic tmp16 = _this2->_pos_change_dyn();		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(23)
												::phoenix::Vector_obj::Listen(tmp15,tmp16);
												HX_STACK_LINE(23)
												bool tmp17 = (_this2->pos_changed != null());		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(23)
												bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(23)
												if ((tmp17)){
													HX_STACK_LINE(23)
													bool tmp19 = _this2->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(23)
													bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(23)
													tmp18 = !(tmp20);
												}
												else{
													HX_STACK_LINE(23)
													tmp18 = false;
												}
												HX_STACK_LINE(23)
												if ((tmp18)){
													HX_STACK_LINE(23)
													::phoenix::Vector tmp19 = _this2->pos;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(23)
													_this2->pos_changed(tmp19);
												}
											}
											HX_STACK_LINE(23)
											_this2->pos;
										}
										HX_STACK_LINE(23)
										{
											HX_STACK_LINE(23)
											::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
											HX_STACK_LINE(23)
											_this2->rotation = _r;
											HX_STACK_LINE(23)
											bool tmp14 = (_r != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(23)
											if ((tmp14)){
												HX_STACK_LINE(23)
												{
													HX_STACK_LINE(23)
													::phoenix::Quaternion _q = _this2->rotation;		HX_STACK_VAR(_q,"_q");
													HX_STACK_LINE(23)
													Dynamic listener = _this2->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
													HX_STACK_LINE(23)
													_q->listen_x = listener;
													HX_STACK_LINE(23)
													_q->listen_y = listener;
													HX_STACK_LINE(23)
													_q->listen_z = listener;
													HX_STACK_LINE(23)
													_q->listen_w = listener;
												}
												HX_STACK_LINE(23)
												bool tmp15 = (_this2->rotation_changed != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(23)
												bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(23)
												if ((tmp15)){
													HX_STACK_LINE(23)
													bool tmp17 = _this2->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(23)
													bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(23)
													tmp16 = !(tmp18);
												}
												else{
													HX_STACK_LINE(23)
													tmp16 = false;
												}
												HX_STACK_LINE(23)
												if ((tmp16)){
													HX_STACK_LINE(23)
													::phoenix::Quaternion tmp17 = _this2->rotation;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(23)
													_this2->rotation_changed(tmp17);
												}
											}
											HX_STACK_LINE(23)
											_this2->rotation;
										}
										HX_STACK_LINE(23)
										{
											HX_STACK_LINE(23)
											::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
											HX_STACK_LINE(23)
											_this2->scale = _s;
											HX_STACK_LINE(23)
											bool tmp14 = (_s != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(23)
											if ((tmp14)){
												HX_STACK_LINE(23)
												::phoenix::Vector tmp15 = _this2->scale;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(23)
												Dynamic tmp16 = _this2->_scale_change_dyn();		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(23)
												::phoenix::Vector_obj::Listen(tmp15,tmp16);
												HX_STACK_LINE(23)
												bool tmp17 = (_this2->scale_changed != null());		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(23)
												bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(23)
												if ((tmp17)){
													HX_STACK_LINE(23)
													bool tmp19 = _this2->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(23)
													bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(23)
													tmp18 = !(tmp20);
												}
												else{
													HX_STACK_LINE(23)
													tmp18 = false;
												}
												HX_STACK_LINE(23)
												if ((tmp18)){
													HX_STACK_LINE(23)
													::phoenix::Vector tmp19 = _this2->scale;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(23)
													_this2->scale_changed(tmp19);
												}
											}
											HX_STACK_LINE(23)
											_this2->scale;
										}
									}
									HX_STACK_LINE(23)
									_this2;
								}
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									_this1->dirty = false;
									HX_STACK_LINE(23)
									bool tmp11 = _this1->dirty;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(23)
									bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(23)
									bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(23)
									if ((tmp12)){
										HX_STACK_LINE(23)
										bool tmp14 = _this1->_setup;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(23)
										bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(23)
										bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(23)
										tmp13 = !(tmp16);
									}
									else{
										HX_STACK_LINE(23)
										tmp13 = false;
									}
									HX_STACK_LINE(23)
									bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(23)
									bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(23)
									if ((tmp14)){
										HX_STACK_LINE(23)
										tmp15 = (_this1->_dirty_handlers != null());
									}
									else{
										HX_STACK_LINE(23)
										tmp15 = false;
									}
									HX_STACK_LINE(23)
									bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(23)
									if ((tmp15)){
										HX_STACK_LINE(23)
										int tmp17 = _this1->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(23)
										int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(23)
										tmp16 = (tmp18 > (int)0);
									}
									else{
										HX_STACK_LINE(23)
										tmp16 = false;
									}
									HX_STACK_LINE(23)
									if ((tmp16)){
										HX_STACK_LINE(23)
										int _g = (int)0;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(23)
										cpp::ArrayBase _g1 = _this1->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(23)
										while((true)){
											HX_STACK_LINE(23)
											bool tmp17 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(23)
											bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(23)
											if ((tmp18)){
												HX_STACK_LINE(23)
												break;
											}
											HX_STACK_LINE(23)
											Dynamic tmp19 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(23)
											Dynamic _handler = tmp19;		HX_STACK_VAR(_handler,"_handler");
											HX_STACK_LINE(23)
											++(_g);
											HX_STACK_LINE(23)
											bool tmp20 = (_handler != null());		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(23)
											if ((tmp20)){
												HX_STACK_LINE(23)
												::phoenix::Transform tmp21 = _this1;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(23)
												_handler(tmp21).Cast< Void >();
											}
										}
									}
									HX_STACK_LINE(23)
									_this1->dirty;
								}
								HX_STACK_LINE(23)
								_this1->_cleaning = false;
								HX_STACK_LINE(23)
								bool tmp11 = (_this1->_clean_handlers != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(23)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(23)
								if ((tmp11)){
									HX_STACK_LINE(23)
									int tmp13 = _this1->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(23)
									int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(23)
									tmp12 = (tmp14 > (int)0);
								}
								else{
									HX_STACK_LINE(23)
									tmp12 = false;
								}
								HX_STACK_LINE(23)
								if ((tmp12)){
									HX_STACK_LINE(23)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(23)
									cpp::ArrayBase _g1 = _this1->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(23)
									while((true)){
										HX_STACK_LINE(23)
										bool tmp13 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(23)
										bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(23)
										if ((tmp14)){
											HX_STACK_LINE(23)
											break;
										}
										HX_STACK_LINE(23)
										Dynamic tmp15 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(23)
										Dynamic _handler = tmp15;		HX_STACK_VAR(_handler,"_handler");
										HX_STACK_LINE(23)
										++(_g);
										HX_STACK_LINE(23)
										bool tmp16 = (_handler != null());		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(23)
										if ((tmp16)){
											HX_STACK_LINE(23)
											::phoenix::Transform tmp17 = _this1;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(23)
											_handler(tmp17).Cast< Void >();
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(23)
					bool tmp7 = t->dirty;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(23)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(23)
					if ((tmp7)){
						HX_STACK_LINE(23)
						bool tmp9 = t->_cleaning;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(23)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(23)
						tmp8 = !(tmp10);
					}
					else{
						HX_STACK_LINE(23)
						tmp8 = false;
					}
					HX_STACK_LINE(23)
					if ((tmp8)){
						HX_STACK_LINE(23)
						bool tmp9 = t->dirty;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(23)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(23)
						if ((tmp10)){
							HX_STACK_LINE(23)
							Dynamic();
						}
						else{
							HX_STACK_LINE(23)
							t->_cleaning = true;
							HX_STACK_LINE(23)
							{
								HX_STACK_LINE(23)
								::phoenix::Matrix _this1 = t->_pos_matrix;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(23)
									e[(int)0] = (int)1;
									HX_STACK_LINE(23)
									e[(int)4] = (int)0;
									HX_STACK_LINE(23)
									e[(int)8] = (int)0;
									HX_STACK_LINE(23)
									::phoenix::Vector tmp11 = t->local->pos;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(23)
									Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(23)
									e[(int)12] = tmp12;
									HX_STACK_LINE(23)
									e[(int)1] = (int)0;
									HX_STACK_LINE(23)
									e[(int)5] = (int)1;
									HX_STACK_LINE(23)
									e[(int)9] = (int)0;
									HX_STACK_LINE(23)
									::phoenix::Vector tmp13 = t->local->pos;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(23)
									Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(23)
									e[(int)13] = tmp14;
									HX_STACK_LINE(23)
									e[(int)2] = (int)0;
									HX_STACK_LINE(23)
									e[(int)6] = (int)0;
									HX_STACK_LINE(23)
									e[(int)10] = (int)1;
									HX_STACK_LINE(23)
									::phoenix::Vector tmp15 = t->local->pos;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(23)
									Float tmp16 = tmp15->z;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(23)
									e[(int)14] = tmp16;
									HX_STACK_LINE(23)
									e[(int)3] = (int)0;
									HX_STACK_LINE(23)
									e[(int)7] = (int)0;
									HX_STACK_LINE(23)
									e[(int)11] = (int)0;
									HX_STACK_LINE(23)
									e[(int)15] = (int)1;
									HX_STACK_LINE(23)
									_this1;
								}
								HX_STACK_LINE(23)
								_this1;
							}
							HX_STACK_LINE(23)
							{
								HX_STACK_LINE(23)
								::phoenix::Matrix _this1 = t->_rotation_matrix;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(23)
								::phoenix::Quaternion tmp11 = t->local->rotation;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(23)
								::phoenix::Quaternion q = tmp11;		HX_STACK_VAR(q,"q");
								HX_STACK_LINE(23)
								Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(23)
								Float tmp12 = (q->x + q->x);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(23)
								Float x2 = tmp12;		HX_STACK_VAR(x2,"x2");
								HX_STACK_LINE(23)
								Float tmp13 = (q->y + q->y);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(23)
								Float y2 = tmp13;		HX_STACK_VAR(y2,"y2");
								HX_STACK_LINE(23)
								Float tmp14 = (q->z + q->z);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(23)
								Float z2 = tmp14;		HX_STACK_VAR(z2,"z2");
								HX_STACK_LINE(23)
								Float tmp15 = (q->x * x2);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(23)
								Float xx = tmp15;		HX_STACK_VAR(xx,"xx");
								HX_STACK_LINE(23)
								Float tmp16 = (q->x * y2);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(23)
								Float xy = tmp16;		HX_STACK_VAR(xy,"xy");
								HX_STACK_LINE(23)
								Float tmp17 = (q->x * z2);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(23)
								Float xz = tmp17;		HX_STACK_VAR(xz,"xz");
								HX_STACK_LINE(23)
								Float tmp18 = (q->y * y2);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(23)
								Float yy = tmp18;		HX_STACK_VAR(yy,"yy");
								HX_STACK_LINE(23)
								Float tmp19 = (q->y * z2);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(23)
								Float yz = tmp19;		HX_STACK_VAR(yz,"yz");
								HX_STACK_LINE(23)
								Float tmp20 = (q->z * z2);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(23)
								Float zz = tmp20;		HX_STACK_VAR(zz,"zz");
								HX_STACK_LINE(23)
								Float tmp21 = (q->w * x2);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(23)
								Float wx = tmp21;		HX_STACK_VAR(wx,"wx");
								HX_STACK_LINE(23)
								Float tmp22 = (q->w * y2);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(23)
								Float wy = tmp22;		HX_STACK_VAR(wy,"wy");
								HX_STACK_LINE(23)
								Float tmp23 = (q->w * z2);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(23)
								Float wz = tmp23;		HX_STACK_VAR(wz,"wz");
								HX_STACK_LINE(23)
								Float tmp24 = (yy + zz);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(23)
								Float tmp25 = ((int)1 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(23)
								te[(int)0] = tmp25;
								HX_STACK_LINE(23)
								Float tmp26 = (xy - wz);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(23)
								te[(int)4] = tmp26;
								HX_STACK_LINE(23)
								Float tmp27 = (xz + wy);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(23)
								te[(int)8] = tmp27;
								HX_STACK_LINE(23)
								Float tmp28 = (xy + wz);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(23)
								te[(int)1] = tmp28;
								HX_STACK_LINE(23)
								Float tmp29 = (xx + zz);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(23)
								Float tmp30 = ((int)1 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(23)
								te[(int)5] = tmp30;
								HX_STACK_LINE(23)
								Float tmp31 = (yz - wx);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(23)
								te[(int)9] = tmp31;
								HX_STACK_LINE(23)
								Float tmp32 = (xz - wy);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(23)
								te[(int)2] = tmp32;
								HX_STACK_LINE(23)
								Float tmp33 = (yz + wx);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(23)
								te[(int)6] = tmp33;
								HX_STACK_LINE(23)
								Float tmp34 = (xx + yy);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(23)
								Float tmp35 = ((int)1 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(23)
								te[(int)10] = tmp35;
								HX_STACK_LINE(23)
								te[(int)3] = (int)0;
								HX_STACK_LINE(23)
								te[(int)7] = (int)0;
								HX_STACK_LINE(23)
								te[(int)11] = (int)0;
								HX_STACK_LINE(23)
								te[(int)12] = (int)0;
								HX_STACK_LINE(23)
								te[(int)13] = (int)0;
								HX_STACK_LINE(23)
								te[(int)14] = (int)0;
								HX_STACK_LINE(23)
								te[(int)15] = (int)1;
								HX_STACK_LINE(23)
								_this1;
							}
							HX_STACK_LINE(23)
							{
								HX_STACK_LINE(23)
								::phoenix::Matrix _this1 = t->_origin_undo_matrix;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(23)
									e[(int)0] = (int)1;
									HX_STACK_LINE(23)
									e[(int)4] = (int)0;
									HX_STACK_LINE(23)
									e[(int)8] = (int)0;
									HX_STACK_LINE(23)
									Float tmp11 = t->origin->x;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(23)
									Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(23)
									e[(int)12] = tmp12;
									HX_STACK_LINE(23)
									e[(int)1] = (int)0;
									HX_STACK_LINE(23)
									e[(int)5] = (int)1;
									HX_STACK_LINE(23)
									e[(int)9] = (int)0;
									HX_STACK_LINE(23)
									Float tmp13 = t->origin->y;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(23)
									Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(23)
									e[(int)13] = tmp14;
									HX_STACK_LINE(23)
									e[(int)2] = (int)0;
									HX_STACK_LINE(23)
									e[(int)6] = (int)0;
									HX_STACK_LINE(23)
									e[(int)10] = (int)1;
									HX_STACK_LINE(23)
									Float tmp15 = t->origin->z;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(23)
									Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(23)
									e[(int)14] = tmp16;
									HX_STACK_LINE(23)
									e[(int)3] = (int)0;
									HX_STACK_LINE(23)
									e[(int)7] = (int)0;
									HX_STACK_LINE(23)
									e[(int)11] = (int)0;
									HX_STACK_LINE(23)
									e[(int)15] = (int)1;
									HX_STACK_LINE(23)
									_this1;
								}
								HX_STACK_LINE(23)
								_this1;
							}
							HX_STACK_LINE(23)
							{
								HX_STACK_LINE(23)
								::phoenix::Matrix tmp11 = t->local->matrix;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(23)
								::phoenix::Matrix _this1 = tmp11;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(23)
									e[(int)0] = (int)1;
									HX_STACK_LINE(23)
									e[(int)4] = (int)0;
									HX_STACK_LINE(23)
									e[(int)8] = (int)0;
									HX_STACK_LINE(23)
									Float tmp12 = t->origin->x;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(23)
									e[(int)12] = tmp12;
									HX_STACK_LINE(23)
									e[(int)1] = (int)0;
									HX_STACK_LINE(23)
									e[(int)5] = (int)1;
									HX_STACK_LINE(23)
									e[(int)9] = (int)0;
									HX_STACK_LINE(23)
									Float tmp13 = t->origin->y;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(23)
									e[(int)13] = tmp13;
									HX_STACK_LINE(23)
									e[(int)2] = (int)0;
									HX_STACK_LINE(23)
									e[(int)6] = (int)0;
									HX_STACK_LINE(23)
									e[(int)10] = (int)1;
									HX_STACK_LINE(23)
									Float tmp14 = t->origin->z;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(23)
									e[(int)14] = tmp14;
									HX_STACK_LINE(23)
									e[(int)3] = (int)0;
									HX_STACK_LINE(23)
									e[(int)7] = (int)0;
									HX_STACK_LINE(23)
									e[(int)11] = (int)0;
									HX_STACK_LINE(23)
									e[(int)15] = (int)1;
									HX_STACK_LINE(23)
									_this1;
								}
								HX_STACK_LINE(23)
								_this1;
							}
							HX_STACK_LINE(23)
							{
								HX_STACK_LINE(23)
								::phoenix::Matrix tmp11 = t->local->matrix;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(23)
								::phoenix::Matrix _this1 = tmp11;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
									HX_STACK_LINE(23)
									Array< Float > be = t->_rotation_matrix->elements;		HX_STACK_VAR(be,"be");
									HX_STACK_LINE(23)
									Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(23)
									Float tmp12 = ae->__get((int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(23)
									Float a11 = tmp12;		HX_STACK_VAR(a11,"a11");
									HX_STACK_LINE(23)
									Float tmp13 = ae->__get((int)4);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(23)
									Float a12 = tmp13;		HX_STACK_VAR(a12,"a12");
									HX_STACK_LINE(23)
									Float tmp14 = ae->__get((int)8);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(23)
									Float a13 = tmp14;		HX_STACK_VAR(a13,"a13");
									HX_STACK_LINE(23)
									Float tmp15 = ae->__get((int)12);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(23)
									Float a14 = tmp15;		HX_STACK_VAR(a14,"a14");
									HX_STACK_LINE(23)
									Float tmp16 = ae->__get((int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(23)
									Float a21 = tmp16;		HX_STACK_VAR(a21,"a21");
									HX_STACK_LINE(23)
									Float tmp17 = ae->__get((int)5);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(23)
									Float a22 = tmp17;		HX_STACK_VAR(a22,"a22");
									HX_STACK_LINE(23)
									Float tmp18 = ae->__get((int)9);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(23)
									Float a23 = tmp18;		HX_STACK_VAR(a23,"a23");
									HX_STACK_LINE(23)
									Float tmp19 = ae->__get((int)13);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(23)
									Float a24 = tmp19;		HX_STACK_VAR(a24,"a24");
									HX_STACK_LINE(23)
									Float tmp20 = ae->__get((int)2);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(23)
									Float a31 = tmp20;		HX_STACK_VAR(a31,"a31");
									HX_STACK_LINE(23)
									Float tmp21 = ae->__get((int)6);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(23)
									Float a32 = tmp21;		HX_STACK_VAR(a32,"a32");
									HX_STACK_LINE(23)
									Float tmp22 = ae->__get((int)10);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(23)
									Float a33 = tmp22;		HX_STACK_VAR(a33,"a33");
									HX_STACK_LINE(23)
									Float tmp23 = ae->__get((int)14);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(23)
									Float a34 = tmp23;		HX_STACK_VAR(a34,"a34");
									HX_STACK_LINE(23)
									Float tmp24 = ae->__get((int)3);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(23)
									Float a41 = tmp24;		HX_STACK_VAR(a41,"a41");
									HX_STACK_LINE(23)
									Float tmp25 = ae->__get((int)7);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(23)
									Float a42 = tmp25;		HX_STACK_VAR(a42,"a42");
									HX_STACK_LINE(23)
									Float tmp26 = ae->__get((int)11);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(23)
									Float a43 = tmp26;		HX_STACK_VAR(a43,"a43");
									HX_STACK_LINE(23)
									Float tmp27 = ae->__get((int)15);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(23)
									Float a44 = tmp27;		HX_STACK_VAR(a44,"a44");
									HX_STACK_LINE(23)
									Float tmp28 = be->__get((int)0);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(23)
									Float b11 = tmp28;		HX_STACK_VAR(b11,"b11");
									HX_STACK_LINE(23)
									Float tmp29 = be->__get((int)4);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(23)
									Float b12 = tmp29;		HX_STACK_VAR(b12,"b12");
									HX_STACK_LINE(23)
									Float tmp30 = be->__get((int)8);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(23)
									Float b13 = tmp30;		HX_STACK_VAR(b13,"b13");
									HX_STACK_LINE(23)
									Float tmp31 = be->__get((int)12);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(23)
									Float b14 = tmp31;		HX_STACK_VAR(b14,"b14");
									HX_STACK_LINE(23)
									Float tmp32 = be->__get((int)1);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(23)
									Float b21 = tmp32;		HX_STACK_VAR(b21,"b21");
									HX_STACK_LINE(23)
									Float tmp33 = be->__get((int)5);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(23)
									Float b22 = tmp33;		HX_STACK_VAR(b22,"b22");
									HX_STACK_LINE(23)
									Float tmp34 = be->__get((int)9);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(23)
									Float b23 = tmp34;		HX_STACK_VAR(b23,"b23");
									HX_STACK_LINE(23)
									Float tmp35 = be->__get((int)13);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(23)
									Float b24 = tmp35;		HX_STACK_VAR(b24,"b24");
									HX_STACK_LINE(23)
									Float tmp36 = be->__get((int)2);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(23)
									Float b31 = tmp36;		HX_STACK_VAR(b31,"b31");
									HX_STACK_LINE(23)
									Float tmp37 = be->__get((int)6);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(23)
									Float b32 = tmp37;		HX_STACK_VAR(b32,"b32");
									HX_STACK_LINE(23)
									Float tmp38 = be->__get((int)10);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(23)
									Float b33 = tmp38;		HX_STACK_VAR(b33,"b33");
									HX_STACK_LINE(23)
									Float tmp39 = be->__get((int)14);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(23)
									Float b34 = tmp39;		HX_STACK_VAR(b34,"b34");
									HX_STACK_LINE(23)
									Float tmp40 = be->__get((int)3);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(23)
									Float b41 = tmp40;		HX_STACK_VAR(b41,"b41");
									HX_STACK_LINE(23)
									Float tmp41 = be->__get((int)7);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(23)
									Float b42 = tmp41;		HX_STACK_VAR(b42,"b42");
									HX_STACK_LINE(23)
									Float tmp42 = be->__get((int)11);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(23)
									Float b43 = tmp42;		HX_STACK_VAR(b43,"b43");
									HX_STACK_LINE(23)
									Float tmp43 = be->__get((int)15);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(23)
									Float b44 = tmp43;		HX_STACK_VAR(b44,"b44");
									HX_STACK_LINE(23)
									Float tmp44 = (a11 * b11);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(23)
									Float tmp45 = (a12 * b21);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(23)
									Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(23)
									Float tmp47 = (a13 * b31);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(23)
									Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(23)
									Float tmp49 = (a14 * b41);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(23)
									Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(23)
									te[(int)0] = tmp50;
									HX_STACK_LINE(23)
									Float tmp51 = (a11 * b12);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(23)
									Float tmp52 = (a12 * b22);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(23)
									Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(23)
									Float tmp54 = (a13 * b32);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(23)
									Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(23)
									Float tmp56 = (a14 * b42);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(23)
									Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(23)
									te[(int)4] = tmp57;
									HX_STACK_LINE(23)
									Float tmp58 = (a11 * b13);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(23)
									Float tmp59 = (a12 * b23);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(23)
									Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(23)
									Float tmp61 = (a13 * b33);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(23)
									Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(23)
									Float tmp63 = (a14 * b43);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(23)
									Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(23)
									te[(int)8] = tmp64;
									HX_STACK_LINE(23)
									Float tmp65 = (a11 * b14);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(23)
									Float tmp66 = (a12 * b24);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(23)
									Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(23)
									Float tmp68 = (a13 * b34);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(23)
									Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(23)
									Float tmp70 = (a14 * b44);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(23)
									Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(23)
									te[(int)12] = tmp71;
									HX_STACK_LINE(23)
									Float tmp72 = (a21 * b11);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(23)
									Float tmp73 = (a22 * b21);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(23)
									Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(23)
									Float tmp75 = (a23 * b31);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(23)
									Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(23)
									Float tmp77 = (a24 * b41);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(23)
									Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(23)
									te[(int)1] = tmp78;
									HX_STACK_LINE(23)
									Float tmp79 = (a21 * b12);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(23)
									Float tmp80 = (a22 * b22);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(23)
									Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(23)
									Float tmp82 = (a23 * b32);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(23)
									Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(23)
									Float tmp84 = (a24 * b42);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(23)
									Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(23)
									te[(int)5] = tmp85;
									HX_STACK_LINE(23)
									Float tmp86 = (a21 * b13);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(23)
									Float tmp87 = (a22 * b23);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(23)
									Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(23)
									Float tmp89 = (a23 * b33);		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(23)
									Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(23)
									Float tmp91 = (a24 * b43);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(23)
									Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(23)
									te[(int)9] = tmp92;
									HX_STACK_LINE(23)
									Float tmp93 = (a21 * b14);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(23)
									Float tmp94 = (a22 * b24);		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(23)
									Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(23)
									Float tmp96 = (a23 * b34);		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(23)
									Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(23)
									Float tmp98 = (a24 * b44);		HX_STACK_VAR(tmp98,"tmp98");
									HX_STACK_LINE(23)
									Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
									HX_STACK_LINE(23)
									te[(int)13] = tmp99;
									HX_STACK_LINE(23)
									Float tmp100 = (a31 * b11);		HX_STACK_VAR(tmp100,"tmp100");
									HX_STACK_LINE(23)
									Float tmp101 = (a32 * b21);		HX_STACK_VAR(tmp101,"tmp101");
									HX_STACK_LINE(23)
									Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
									HX_STACK_LINE(23)
									Float tmp103 = (a33 * b31);		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(23)
									Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
									HX_STACK_LINE(23)
									Float tmp105 = (a34 * b41);		HX_STACK_VAR(tmp105,"tmp105");
									HX_STACK_LINE(23)
									Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
									HX_STACK_LINE(23)
									te[(int)2] = tmp106;
									HX_STACK_LINE(23)
									Float tmp107 = (a31 * b12);		HX_STACK_VAR(tmp107,"tmp107");
									HX_STACK_LINE(23)
									Float tmp108 = (a32 * b22);		HX_STACK_VAR(tmp108,"tmp108");
									HX_STACK_LINE(23)
									Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
									HX_STACK_LINE(23)
									Float tmp110 = (a33 * b32);		HX_STACK_VAR(tmp110,"tmp110");
									HX_STACK_LINE(23)
									Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
									HX_STACK_LINE(23)
									Float tmp112 = (a34 * b42);		HX_STACK_VAR(tmp112,"tmp112");
									HX_STACK_LINE(23)
									Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
									HX_STACK_LINE(23)
									te[(int)6] = tmp113;
									HX_STACK_LINE(23)
									Float tmp114 = (a31 * b13);		HX_STACK_VAR(tmp114,"tmp114");
									HX_STACK_LINE(23)
									Float tmp115 = (a32 * b23);		HX_STACK_VAR(tmp115,"tmp115");
									HX_STACK_LINE(23)
									Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
									HX_STACK_LINE(23)
									Float tmp117 = (a33 * b33);		HX_STACK_VAR(tmp117,"tmp117");
									HX_STACK_LINE(23)
									Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
									HX_STACK_LINE(23)
									Float tmp119 = (a34 * b43);		HX_STACK_VAR(tmp119,"tmp119");
									HX_STACK_LINE(23)
									Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
									HX_STACK_LINE(23)
									te[(int)10] = tmp120;
									HX_STACK_LINE(23)
									Float tmp121 = (a31 * b14);		HX_STACK_VAR(tmp121,"tmp121");
									HX_STACK_LINE(23)
									Float tmp122 = (a32 * b24);		HX_STACK_VAR(tmp122,"tmp122");
									HX_STACK_LINE(23)
									Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
									HX_STACK_LINE(23)
									Float tmp124 = (a33 * b34);		HX_STACK_VAR(tmp124,"tmp124");
									HX_STACK_LINE(23)
									Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
									HX_STACK_LINE(23)
									Float tmp126 = (a34 * b44);		HX_STACK_VAR(tmp126,"tmp126");
									HX_STACK_LINE(23)
									Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
									HX_STACK_LINE(23)
									te[(int)14] = tmp127;
									HX_STACK_LINE(23)
									Float tmp128 = (a41 * b11);		HX_STACK_VAR(tmp128,"tmp128");
									HX_STACK_LINE(23)
									Float tmp129 = (a42 * b21);		HX_STACK_VAR(tmp129,"tmp129");
									HX_STACK_LINE(23)
									Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
									HX_STACK_LINE(23)
									Float tmp131 = (a43 * b31);		HX_STACK_VAR(tmp131,"tmp131");
									HX_STACK_LINE(23)
									Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
									HX_STACK_LINE(23)
									Float tmp133 = (a44 * b41);		HX_STACK_VAR(tmp133,"tmp133");
									HX_STACK_LINE(23)
									Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
									HX_STACK_LINE(23)
									te[(int)3] = tmp134;
									HX_STACK_LINE(23)
									Float tmp135 = (a41 * b12);		HX_STACK_VAR(tmp135,"tmp135");
									HX_STACK_LINE(23)
									Float tmp136 = (a42 * b22);		HX_STACK_VAR(tmp136,"tmp136");
									HX_STACK_LINE(23)
									Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
									HX_STACK_LINE(23)
									Float tmp138 = (a43 * b32);		HX_STACK_VAR(tmp138,"tmp138");
									HX_STACK_LINE(23)
									Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
									HX_STACK_LINE(23)
									Float tmp140 = (a44 * b42);		HX_STACK_VAR(tmp140,"tmp140");
									HX_STACK_LINE(23)
									Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
									HX_STACK_LINE(23)
									te[(int)7] = tmp141;
									HX_STACK_LINE(23)
									Float tmp142 = (a41 * b13);		HX_STACK_VAR(tmp142,"tmp142");
									HX_STACK_LINE(23)
									Float tmp143 = (a42 * b23);		HX_STACK_VAR(tmp143,"tmp143");
									HX_STACK_LINE(23)
									Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
									HX_STACK_LINE(23)
									Float tmp145 = (a43 * b33);		HX_STACK_VAR(tmp145,"tmp145");
									HX_STACK_LINE(23)
									Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
									HX_STACK_LINE(23)
									Float tmp147 = (a44 * b43);		HX_STACK_VAR(tmp147,"tmp147");
									HX_STACK_LINE(23)
									Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
									HX_STACK_LINE(23)
									te[(int)11] = tmp148;
									HX_STACK_LINE(23)
									Float tmp149 = (a41 * b14);		HX_STACK_VAR(tmp149,"tmp149");
									HX_STACK_LINE(23)
									Float tmp150 = (a42 * b24);		HX_STACK_VAR(tmp150,"tmp150");
									HX_STACK_LINE(23)
									Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
									HX_STACK_LINE(23)
									Float tmp152 = (a43 * b34);		HX_STACK_VAR(tmp152,"tmp152");
									HX_STACK_LINE(23)
									Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
									HX_STACK_LINE(23)
									Float tmp154 = (a44 * b44);		HX_STACK_VAR(tmp154,"tmp154");
									HX_STACK_LINE(23)
									Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
									HX_STACK_LINE(23)
									te[(int)15] = tmp155;
									HX_STACK_LINE(23)
									_this1;
								}
							}
							HX_STACK_LINE(23)
							{
								HX_STACK_LINE(23)
								::phoenix::Matrix tmp11 = t->local->matrix;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(23)
								::phoenix::Matrix _this1 = tmp11;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(23)
								::phoenix::Vector tmp12 = t->local->scale;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(23)
								::phoenix::Vector _v = tmp12;		HX_STACK_VAR(_v,"_v");
								HX_STACK_LINE(23)
								Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(23)
								Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
								HX_STACK_LINE(23)
								Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
								HX_STACK_LINE(23)
								Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
								HX_STACK_LINE(23)
								Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(23)
								hx::MultEq(te[(int)0],tmp13);
								HX_STACK_LINE(23)
								Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(23)
								hx::MultEq(te[(int)4],tmp14);
								HX_STACK_LINE(23)
								Float tmp15 = _z;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(23)
								hx::MultEq(te[(int)8],tmp15);
								HX_STACK_LINE(23)
								Float tmp16 = _x;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(23)
								hx::MultEq(te[(int)1],tmp16);
								HX_STACK_LINE(23)
								Float tmp17 = _y;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(23)
								hx::MultEq(te[(int)5],tmp17);
								HX_STACK_LINE(23)
								Float tmp18 = _z;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(23)
								hx::MultEq(te[(int)9],tmp18);
								HX_STACK_LINE(23)
								Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(23)
								hx::MultEq(te[(int)2],tmp19);
								HX_STACK_LINE(23)
								Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(23)
								hx::MultEq(te[(int)6],tmp20);
								HX_STACK_LINE(23)
								Float tmp21 = _z;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(23)
								hx::MultEq(te[(int)10],tmp21);
								HX_STACK_LINE(23)
								Float tmp22 = _x;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(23)
								hx::MultEq(te[(int)3],tmp22);
								HX_STACK_LINE(23)
								Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(23)
								hx::MultEq(te[(int)7],tmp23);
								HX_STACK_LINE(23)
								Float tmp24 = _z;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(23)
								hx::MultEq(te[(int)11],tmp24);
								HX_STACK_LINE(23)
								_this1;
							}
							HX_STACK_LINE(23)
							{
								HX_STACK_LINE(23)
								::phoenix::Matrix tmp11 = t->local->matrix;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(23)
								::phoenix::Matrix _this1 = tmp11;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(23)
								::phoenix::Vector tmp12 = t->local->pos;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(23)
								::phoenix::Vector _v = tmp12;		HX_STACK_VAR(_v,"_v");
								HX_STACK_LINE(23)
								Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
								HX_STACK_LINE(23)
								Float tmp13 = _v->x;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(23)
								te[(int)12] = tmp13;
								HX_STACK_LINE(23)
								Float tmp14 = _v->y;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(23)
								te[(int)13] = tmp14;
								HX_STACK_LINE(23)
								Float tmp15 = _v->z;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(23)
								te[(int)14] = tmp15;
								HX_STACK_LINE(23)
								_this1;
							}
							HX_STACK_LINE(23)
							{
								HX_STACK_LINE(23)
								::phoenix::Matrix tmp11 = t->local->matrix;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(23)
								::phoenix::Matrix _this1 = tmp11;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									Array< Float > ae = _this1->elements;		HX_STACK_VAR(ae,"ae");
									HX_STACK_LINE(23)
									Array< Float > be = t->_origin_undo_matrix->elements;		HX_STACK_VAR(be,"be");
									HX_STACK_LINE(23)
									Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(23)
									Float tmp12 = ae->__get((int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(23)
									Float a11 = tmp12;		HX_STACK_VAR(a11,"a11");
									HX_STACK_LINE(23)
									Float tmp13 = ae->__get((int)4);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(23)
									Float a12 = tmp13;		HX_STACK_VAR(a12,"a12");
									HX_STACK_LINE(23)
									Float tmp14 = ae->__get((int)8);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(23)
									Float a13 = tmp14;		HX_STACK_VAR(a13,"a13");
									HX_STACK_LINE(23)
									Float tmp15 = ae->__get((int)12);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(23)
									Float a14 = tmp15;		HX_STACK_VAR(a14,"a14");
									HX_STACK_LINE(23)
									Float tmp16 = ae->__get((int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(23)
									Float a21 = tmp16;		HX_STACK_VAR(a21,"a21");
									HX_STACK_LINE(23)
									Float tmp17 = ae->__get((int)5);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(23)
									Float a22 = tmp17;		HX_STACK_VAR(a22,"a22");
									HX_STACK_LINE(23)
									Float tmp18 = ae->__get((int)9);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(23)
									Float a23 = tmp18;		HX_STACK_VAR(a23,"a23");
									HX_STACK_LINE(23)
									Float tmp19 = ae->__get((int)13);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(23)
									Float a24 = tmp19;		HX_STACK_VAR(a24,"a24");
									HX_STACK_LINE(23)
									Float tmp20 = ae->__get((int)2);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(23)
									Float a31 = tmp20;		HX_STACK_VAR(a31,"a31");
									HX_STACK_LINE(23)
									Float tmp21 = ae->__get((int)6);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(23)
									Float a32 = tmp21;		HX_STACK_VAR(a32,"a32");
									HX_STACK_LINE(23)
									Float tmp22 = ae->__get((int)10);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(23)
									Float a33 = tmp22;		HX_STACK_VAR(a33,"a33");
									HX_STACK_LINE(23)
									Float tmp23 = ae->__get((int)14);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(23)
									Float a34 = tmp23;		HX_STACK_VAR(a34,"a34");
									HX_STACK_LINE(23)
									Float tmp24 = ae->__get((int)3);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(23)
									Float a41 = tmp24;		HX_STACK_VAR(a41,"a41");
									HX_STACK_LINE(23)
									Float tmp25 = ae->__get((int)7);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(23)
									Float a42 = tmp25;		HX_STACK_VAR(a42,"a42");
									HX_STACK_LINE(23)
									Float tmp26 = ae->__get((int)11);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(23)
									Float a43 = tmp26;		HX_STACK_VAR(a43,"a43");
									HX_STACK_LINE(23)
									Float tmp27 = ae->__get((int)15);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(23)
									Float a44 = tmp27;		HX_STACK_VAR(a44,"a44");
									HX_STACK_LINE(23)
									Float tmp28 = be->__get((int)0);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(23)
									Float b11 = tmp28;		HX_STACK_VAR(b11,"b11");
									HX_STACK_LINE(23)
									Float tmp29 = be->__get((int)4);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(23)
									Float b12 = tmp29;		HX_STACK_VAR(b12,"b12");
									HX_STACK_LINE(23)
									Float tmp30 = be->__get((int)8);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(23)
									Float b13 = tmp30;		HX_STACK_VAR(b13,"b13");
									HX_STACK_LINE(23)
									Float tmp31 = be->__get((int)12);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(23)
									Float b14 = tmp31;		HX_STACK_VAR(b14,"b14");
									HX_STACK_LINE(23)
									Float tmp32 = be->__get((int)1);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(23)
									Float b21 = tmp32;		HX_STACK_VAR(b21,"b21");
									HX_STACK_LINE(23)
									Float tmp33 = be->__get((int)5);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(23)
									Float b22 = tmp33;		HX_STACK_VAR(b22,"b22");
									HX_STACK_LINE(23)
									Float tmp34 = be->__get((int)9);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(23)
									Float b23 = tmp34;		HX_STACK_VAR(b23,"b23");
									HX_STACK_LINE(23)
									Float tmp35 = be->__get((int)13);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(23)
									Float b24 = tmp35;		HX_STACK_VAR(b24,"b24");
									HX_STACK_LINE(23)
									Float tmp36 = be->__get((int)2);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(23)
									Float b31 = tmp36;		HX_STACK_VAR(b31,"b31");
									HX_STACK_LINE(23)
									Float tmp37 = be->__get((int)6);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(23)
									Float b32 = tmp37;		HX_STACK_VAR(b32,"b32");
									HX_STACK_LINE(23)
									Float tmp38 = be->__get((int)10);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(23)
									Float b33 = tmp38;		HX_STACK_VAR(b33,"b33");
									HX_STACK_LINE(23)
									Float tmp39 = be->__get((int)14);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(23)
									Float b34 = tmp39;		HX_STACK_VAR(b34,"b34");
									HX_STACK_LINE(23)
									Float tmp40 = be->__get((int)3);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(23)
									Float b41 = tmp40;		HX_STACK_VAR(b41,"b41");
									HX_STACK_LINE(23)
									Float tmp41 = be->__get((int)7);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(23)
									Float b42 = tmp41;		HX_STACK_VAR(b42,"b42");
									HX_STACK_LINE(23)
									Float tmp42 = be->__get((int)11);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(23)
									Float b43 = tmp42;		HX_STACK_VAR(b43,"b43");
									HX_STACK_LINE(23)
									Float tmp43 = be->__get((int)15);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(23)
									Float b44 = tmp43;		HX_STACK_VAR(b44,"b44");
									HX_STACK_LINE(23)
									Float tmp44 = (a11 * b11);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(23)
									Float tmp45 = (a12 * b21);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(23)
									Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(23)
									Float tmp47 = (a13 * b31);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(23)
									Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(23)
									Float tmp49 = (a14 * b41);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(23)
									Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(23)
									te[(int)0] = tmp50;
									HX_STACK_LINE(23)
									Float tmp51 = (a11 * b12);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(23)
									Float tmp52 = (a12 * b22);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(23)
									Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(23)
									Float tmp54 = (a13 * b32);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(23)
									Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(23)
									Float tmp56 = (a14 * b42);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(23)
									Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(23)
									te[(int)4] = tmp57;
									HX_STACK_LINE(23)
									Float tmp58 = (a11 * b13);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(23)
									Float tmp59 = (a12 * b23);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(23)
									Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(23)
									Float tmp61 = (a13 * b33);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(23)
									Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(23)
									Float tmp63 = (a14 * b43);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(23)
									Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(23)
									te[(int)8] = tmp64;
									HX_STACK_LINE(23)
									Float tmp65 = (a11 * b14);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(23)
									Float tmp66 = (a12 * b24);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(23)
									Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(23)
									Float tmp68 = (a13 * b34);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(23)
									Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(23)
									Float tmp70 = (a14 * b44);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(23)
									Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(23)
									te[(int)12] = tmp71;
									HX_STACK_LINE(23)
									Float tmp72 = (a21 * b11);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(23)
									Float tmp73 = (a22 * b21);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(23)
									Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(23)
									Float tmp75 = (a23 * b31);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(23)
									Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(23)
									Float tmp77 = (a24 * b41);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(23)
									Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(23)
									te[(int)1] = tmp78;
									HX_STACK_LINE(23)
									Float tmp79 = (a21 * b12);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(23)
									Float tmp80 = (a22 * b22);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(23)
									Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(23)
									Float tmp82 = (a23 * b32);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(23)
									Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(23)
									Float tmp84 = (a24 * b42);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(23)
									Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(23)
									te[(int)5] = tmp85;
									HX_STACK_LINE(23)
									Float tmp86 = (a21 * b13);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(23)
									Float tmp87 = (a22 * b23);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(23)
									Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(23)
									Float tmp89 = (a23 * b33);		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(23)
									Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(23)
									Float tmp91 = (a24 * b43);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(23)
									Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(23)
									te[(int)9] = tmp92;
									HX_STACK_LINE(23)
									Float tmp93 = (a21 * b14);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(23)
									Float tmp94 = (a22 * b24);		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(23)
									Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(23)
									Float tmp96 = (a23 * b34);		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(23)
									Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(23)
									Float tmp98 = (a24 * b44);		HX_STACK_VAR(tmp98,"tmp98");
									HX_STACK_LINE(23)
									Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
									HX_STACK_LINE(23)
									te[(int)13] = tmp99;
									HX_STACK_LINE(23)
									Float tmp100 = (a31 * b11);		HX_STACK_VAR(tmp100,"tmp100");
									HX_STACK_LINE(23)
									Float tmp101 = (a32 * b21);		HX_STACK_VAR(tmp101,"tmp101");
									HX_STACK_LINE(23)
									Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
									HX_STACK_LINE(23)
									Float tmp103 = (a33 * b31);		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(23)
									Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
									HX_STACK_LINE(23)
									Float tmp105 = (a34 * b41);		HX_STACK_VAR(tmp105,"tmp105");
									HX_STACK_LINE(23)
									Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
									HX_STACK_LINE(23)
									te[(int)2] = tmp106;
									HX_STACK_LINE(23)
									Float tmp107 = (a31 * b12);		HX_STACK_VAR(tmp107,"tmp107");
									HX_STACK_LINE(23)
									Float tmp108 = (a32 * b22);		HX_STACK_VAR(tmp108,"tmp108");
									HX_STACK_LINE(23)
									Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
									HX_STACK_LINE(23)
									Float tmp110 = (a33 * b32);		HX_STACK_VAR(tmp110,"tmp110");
									HX_STACK_LINE(23)
									Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
									HX_STACK_LINE(23)
									Float tmp112 = (a34 * b42);		HX_STACK_VAR(tmp112,"tmp112");
									HX_STACK_LINE(23)
									Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
									HX_STACK_LINE(23)
									te[(int)6] = tmp113;
									HX_STACK_LINE(23)
									Float tmp114 = (a31 * b13);		HX_STACK_VAR(tmp114,"tmp114");
									HX_STACK_LINE(23)
									Float tmp115 = (a32 * b23);		HX_STACK_VAR(tmp115,"tmp115");
									HX_STACK_LINE(23)
									Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
									HX_STACK_LINE(23)
									Float tmp117 = (a33 * b33);		HX_STACK_VAR(tmp117,"tmp117");
									HX_STACK_LINE(23)
									Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
									HX_STACK_LINE(23)
									Float tmp119 = (a34 * b43);		HX_STACK_VAR(tmp119,"tmp119");
									HX_STACK_LINE(23)
									Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
									HX_STACK_LINE(23)
									te[(int)10] = tmp120;
									HX_STACK_LINE(23)
									Float tmp121 = (a31 * b14);		HX_STACK_VAR(tmp121,"tmp121");
									HX_STACK_LINE(23)
									Float tmp122 = (a32 * b24);		HX_STACK_VAR(tmp122,"tmp122");
									HX_STACK_LINE(23)
									Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
									HX_STACK_LINE(23)
									Float tmp124 = (a33 * b34);		HX_STACK_VAR(tmp124,"tmp124");
									HX_STACK_LINE(23)
									Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
									HX_STACK_LINE(23)
									Float tmp126 = (a34 * b44);		HX_STACK_VAR(tmp126,"tmp126");
									HX_STACK_LINE(23)
									Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
									HX_STACK_LINE(23)
									te[(int)14] = tmp127;
									HX_STACK_LINE(23)
									Float tmp128 = (a41 * b11);		HX_STACK_VAR(tmp128,"tmp128");
									HX_STACK_LINE(23)
									Float tmp129 = (a42 * b21);		HX_STACK_VAR(tmp129,"tmp129");
									HX_STACK_LINE(23)
									Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
									HX_STACK_LINE(23)
									Float tmp131 = (a43 * b31);		HX_STACK_VAR(tmp131,"tmp131");
									HX_STACK_LINE(23)
									Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
									HX_STACK_LINE(23)
									Float tmp133 = (a44 * b41);		HX_STACK_VAR(tmp133,"tmp133");
									HX_STACK_LINE(23)
									Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
									HX_STACK_LINE(23)
									te[(int)3] = tmp134;
									HX_STACK_LINE(23)
									Float tmp135 = (a41 * b12);		HX_STACK_VAR(tmp135,"tmp135");
									HX_STACK_LINE(23)
									Float tmp136 = (a42 * b22);		HX_STACK_VAR(tmp136,"tmp136");
									HX_STACK_LINE(23)
									Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
									HX_STACK_LINE(23)
									Float tmp138 = (a43 * b32);		HX_STACK_VAR(tmp138,"tmp138");
									HX_STACK_LINE(23)
									Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
									HX_STACK_LINE(23)
									Float tmp140 = (a44 * b42);		HX_STACK_VAR(tmp140,"tmp140");
									HX_STACK_LINE(23)
									Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
									HX_STACK_LINE(23)
									te[(int)7] = tmp141;
									HX_STACK_LINE(23)
									Float tmp142 = (a41 * b13);		HX_STACK_VAR(tmp142,"tmp142");
									HX_STACK_LINE(23)
									Float tmp143 = (a42 * b23);		HX_STACK_VAR(tmp143,"tmp143");
									HX_STACK_LINE(23)
									Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
									HX_STACK_LINE(23)
									Float tmp145 = (a43 * b33);		HX_STACK_VAR(tmp145,"tmp145");
									HX_STACK_LINE(23)
									Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
									HX_STACK_LINE(23)
									Float tmp147 = (a44 * b43);		HX_STACK_VAR(tmp147,"tmp147");
									HX_STACK_LINE(23)
									Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
									HX_STACK_LINE(23)
									te[(int)11] = tmp148;
									HX_STACK_LINE(23)
									Float tmp149 = (a41 * b14);		HX_STACK_VAR(tmp149,"tmp149");
									HX_STACK_LINE(23)
									Float tmp150 = (a42 * b24);		HX_STACK_VAR(tmp150,"tmp150");
									HX_STACK_LINE(23)
									Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
									HX_STACK_LINE(23)
									Float tmp152 = (a43 * b34);		HX_STACK_VAR(tmp152,"tmp152");
									HX_STACK_LINE(23)
									Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
									HX_STACK_LINE(23)
									Float tmp154 = (a44 * b44);		HX_STACK_VAR(tmp154,"tmp154");
									HX_STACK_LINE(23)
									Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
									HX_STACK_LINE(23)
									te[(int)15] = tmp155;
									HX_STACK_LINE(23)
									_this1;
								}
							}
							HX_STACK_LINE(23)
							bool tmp11 = (t->parent != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(23)
							if ((tmp11)){
								HX_STACK_LINE(23)
								::phoenix::Spatial tmp12 = t->get_world();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(23)
								::phoenix::Spatial _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(23)
								::phoenix::Matrix tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									::phoenix::Matrix tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										::phoenix::Spatial tmp15 = t->get_world();		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(23)
										::phoenix::Spatial _this2 = tmp15;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(23)
										tmp14 = _this2->matrix;
									}
									HX_STACK_LINE(23)
									::phoenix::Matrix _this2 = tmp14;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(23)
									::phoenix::Matrix tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										::phoenix::Spatial tmp16 = t->parent->get_world();		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(23)
										::phoenix::Spatial _this3 = tmp16;		HX_STACK_VAR(_this3,"_this3");
										HX_STACK_LINE(23)
										tmp15 = _this3->matrix;
									}
									HX_STACK_LINE(23)
									::phoenix::Matrix _a = tmp15;		HX_STACK_VAR(_a,"_a");
									HX_STACK_LINE(23)
									Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
									HX_STACK_LINE(23)
									::phoenix::Matrix tmp16 = t->local->matrix;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(23)
									Array< Float > be = tmp16->elements;		HX_STACK_VAR(be,"be");
									HX_STACK_LINE(23)
									Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(23)
									Float tmp17 = ae->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(23)
									Float a11 = tmp17;		HX_STACK_VAR(a11,"a11");
									HX_STACK_LINE(23)
									Float tmp18 = ae->__get((int)4);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(23)
									Float a12 = tmp18;		HX_STACK_VAR(a12,"a12");
									HX_STACK_LINE(23)
									Float tmp19 = ae->__get((int)8);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(23)
									Float a13 = tmp19;		HX_STACK_VAR(a13,"a13");
									HX_STACK_LINE(23)
									Float tmp20 = ae->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(23)
									Float a14 = tmp20;		HX_STACK_VAR(a14,"a14");
									HX_STACK_LINE(23)
									Float tmp21 = ae->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(23)
									Float a21 = tmp21;		HX_STACK_VAR(a21,"a21");
									HX_STACK_LINE(23)
									Float tmp22 = ae->__get((int)5);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(23)
									Float a22 = tmp22;		HX_STACK_VAR(a22,"a22");
									HX_STACK_LINE(23)
									Float tmp23 = ae->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(23)
									Float a23 = tmp23;		HX_STACK_VAR(a23,"a23");
									HX_STACK_LINE(23)
									Float tmp24 = ae->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(23)
									Float a24 = tmp24;		HX_STACK_VAR(a24,"a24");
									HX_STACK_LINE(23)
									Float tmp25 = ae->__get((int)2);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(23)
									Float a31 = tmp25;		HX_STACK_VAR(a31,"a31");
									HX_STACK_LINE(23)
									Float tmp26 = ae->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(23)
									Float a32 = tmp26;		HX_STACK_VAR(a32,"a32");
									HX_STACK_LINE(23)
									Float tmp27 = ae->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(23)
									Float a33 = tmp27;		HX_STACK_VAR(a33,"a33");
									HX_STACK_LINE(23)
									Float tmp28 = ae->__get((int)14);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(23)
									Float a34 = tmp28;		HX_STACK_VAR(a34,"a34");
									HX_STACK_LINE(23)
									Float tmp29 = ae->__get((int)3);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(23)
									Float a41 = tmp29;		HX_STACK_VAR(a41,"a41");
									HX_STACK_LINE(23)
									Float tmp30 = ae->__get((int)7);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(23)
									Float a42 = tmp30;		HX_STACK_VAR(a42,"a42");
									HX_STACK_LINE(23)
									Float tmp31 = ae->__get((int)11);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(23)
									Float a43 = tmp31;		HX_STACK_VAR(a43,"a43");
									HX_STACK_LINE(23)
									Float tmp32 = ae->__get((int)15);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(23)
									Float a44 = tmp32;		HX_STACK_VAR(a44,"a44");
									HX_STACK_LINE(23)
									Float tmp33 = be->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(23)
									Float b11 = tmp33;		HX_STACK_VAR(b11,"b11");
									HX_STACK_LINE(23)
									Float tmp34 = be->__get((int)4);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(23)
									Float b12 = tmp34;		HX_STACK_VAR(b12,"b12");
									HX_STACK_LINE(23)
									Float tmp35 = be->__get((int)8);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(23)
									Float b13 = tmp35;		HX_STACK_VAR(b13,"b13");
									HX_STACK_LINE(23)
									Float tmp36 = be->__get((int)12);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(23)
									Float b14 = tmp36;		HX_STACK_VAR(b14,"b14");
									HX_STACK_LINE(23)
									Float tmp37 = be->__get((int)1);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(23)
									Float b21 = tmp37;		HX_STACK_VAR(b21,"b21");
									HX_STACK_LINE(23)
									Float tmp38 = be->__get((int)5);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(23)
									Float b22 = tmp38;		HX_STACK_VAR(b22,"b22");
									HX_STACK_LINE(23)
									Float tmp39 = be->__get((int)9);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(23)
									Float b23 = tmp39;		HX_STACK_VAR(b23,"b23");
									HX_STACK_LINE(23)
									Float tmp40 = be->__get((int)13);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(23)
									Float b24 = tmp40;		HX_STACK_VAR(b24,"b24");
									HX_STACK_LINE(23)
									Float tmp41 = be->__get((int)2);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(23)
									Float b31 = tmp41;		HX_STACK_VAR(b31,"b31");
									HX_STACK_LINE(23)
									Float tmp42 = be->__get((int)6);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(23)
									Float b32 = tmp42;		HX_STACK_VAR(b32,"b32");
									HX_STACK_LINE(23)
									Float tmp43 = be->__get((int)10);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(23)
									Float b33 = tmp43;		HX_STACK_VAR(b33,"b33");
									HX_STACK_LINE(23)
									Float tmp44 = be->__get((int)14);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(23)
									Float b34 = tmp44;		HX_STACK_VAR(b34,"b34");
									HX_STACK_LINE(23)
									Float tmp45 = be->__get((int)3);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(23)
									Float b41 = tmp45;		HX_STACK_VAR(b41,"b41");
									HX_STACK_LINE(23)
									Float tmp46 = be->__get((int)7);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(23)
									Float b42 = tmp46;		HX_STACK_VAR(b42,"b42");
									HX_STACK_LINE(23)
									Float tmp47 = be->__get((int)11);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(23)
									Float b43 = tmp47;		HX_STACK_VAR(b43,"b43");
									HX_STACK_LINE(23)
									Float tmp48 = be->__get((int)15);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(23)
									Float b44 = tmp48;		HX_STACK_VAR(b44,"b44");
									HX_STACK_LINE(23)
									Float tmp49 = (a11 * b11);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(23)
									Float tmp50 = (a12 * b21);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(23)
									Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(23)
									Float tmp52 = (a13 * b31);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(23)
									Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(23)
									Float tmp54 = (a14 * b41);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(23)
									Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(23)
									te[(int)0] = tmp55;
									HX_STACK_LINE(23)
									Float tmp56 = (a11 * b12);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(23)
									Float tmp57 = (a12 * b22);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(23)
									Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(23)
									Float tmp59 = (a13 * b32);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(23)
									Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(23)
									Float tmp61 = (a14 * b42);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(23)
									Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(23)
									te[(int)4] = tmp62;
									HX_STACK_LINE(23)
									Float tmp63 = (a11 * b13);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(23)
									Float tmp64 = (a12 * b23);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(23)
									Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(23)
									Float tmp66 = (a13 * b33);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(23)
									Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(23)
									Float tmp68 = (a14 * b43);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(23)
									Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(23)
									te[(int)8] = tmp69;
									HX_STACK_LINE(23)
									Float tmp70 = (a11 * b14);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(23)
									Float tmp71 = (a12 * b24);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(23)
									Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(23)
									Float tmp73 = (a13 * b34);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(23)
									Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(23)
									Float tmp75 = (a14 * b44);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(23)
									Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(23)
									te[(int)12] = tmp76;
									HX_STACK_LINE(23)
									Float tmp77 = (a21 * b11);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(23)
									Float tmp78 = (a22 * b21);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(23)
									Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(23)
									Float tmp80 = (a23 * b31);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(23)
									Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(23)
									Float tmp82 = (a24 * b41);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(23)
									Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(23)
									te[(int)1] = tmp83;
									HX_STACK_LINE(23)
									Float tmp84 = (a21 * b12);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(23)
									Float tmp85 = (a22 * b22);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(23)
									Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(23)
									Float tmp87 = (a23 * b32);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(23)
									Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(23)
									Float tmp89 = (a24 * b42);		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(23)
									Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(23)
									te[(int)5] = tmp90;
									HX_STACK_LINE(23)
									Float tmp91 = (a21 * b13);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(23)
									Float tmp92 = (a22 * b23);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(23)
									Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(23)
									Float tmp94 = (a23 * b33);		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(23)
									Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(23)
									Float tmp96 = (a24 * b43);		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(23)
									Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(23)
									te[(int)9] = tmp97;
									HX_STACK_LINE(23)
									Float tmp98 = (a21 * b14);		HX_STACK_VAR(tmp98,"tmp98");
									HX_STACK_LINE(23)
									Float tmp99 = (a22 * b24);		HX_STACK_VAR(tmp99,"tmp99");
									HX_STACK_LINE(23)
									Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
									HX_STACK_LINE(23)
									Float tmp101 = (a23 * b34);		HX_STACK_VAR(tmp101,"tmp101");
									HX_STACK_LINE(23)
									Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
									HX_STACK_LINE(23)
									Float tmp103 = (a24 * b44);		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(23)
									Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
									HX_STACK_LINE(23)
									te[(int)13] = tmp104;
									HX_STACK_LINE(23)
									Float tmp105 = (a31 * b11);		HX_STACK_VAR(tmp105,"tmp105");
									HX_STACK_LINE(23)
									Float tmp106 = (a32 * b21);		HX_STACK_VAR(tmp106,"tmp106");
									HX_STACK_LINE(23)
									Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
									HX_STACK_LINE(23)
									Float tmp108 = (a33 * b31);		HX_STACK_VAR(tmp108,"tmp108");
									HX_STACK_LINE(23)
									Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
									HX_STACK_LINE(23)
									Float tmp110 = (a34 * b41);		HX_STACK_VAR(tmp110,"tmp110");
									HX_STACK_LINE(23)
									Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
									HX_STACK_LINE(23)
									te[(int)2] = tmp111;
									HX_STACK_LINE(23)
									Float tmp112 = (a31 * b12);		HX_STACK_VAR(tmp112,"tmp112");
									HX_STACK_LINE(23)
									Float tmp113 = (a32 * b22);		HX_STACK_VAR(tmp113,"tmp113");
									HX_STACK_LINE(23)
									Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
									HX_STACK_LINE(23)
									Float tmp115 = (a33 * b32);		HX_STACK_VAR(tmp115,"tmp115");
									HX_STACK_LINE(23)
									Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
									HX_STACK_LINE(23)
									Float tmp117 = (a34 * b42);		HX_STACK_VAR(tmp117,"tmp117");
									HX_STACK_LINE(23)
									Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
									HX_STACK_LINE(23)
									te[(int)6] = tmp118;
									HX_STACK_LINE(23)
									Float tmp119 = (a31 * b13);		HX_STACK_VAR(tmp119,"tmp119");
									HX_STACK_LINE(23)
									Float tmp120 = (a32 * b23);		HX_STACK_VAR(tmp120,"tmp120");
									HX_STACK_LINE(23)
									Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
									HX_STACK_LINE(23)
									Float tmp122 = (a33 * b33);		HX_STACK_VAR(tmp122,"tmp122");
									HX_STACK_LINE(23)
									Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
									HX_STACK_LINE(23)
									Float tmp124 = (a34 * b43);		HX_STACK_VAR(tmp124,"tmp124");
									HX_STACK_LINE(23)
									Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
									HX_STACK_LINE(23)
									te[(int)10] = tmp125;
									HX_STACK_LINE(23)
									Float tmp126 = (a31 * b14);		HX_STACK_VAR(tmp126,"tmp126");
									HX_STACK_LINE(23)
									Float tmp127 = (a32 * b24);		HX_STACK_VAR(tmp127,"tmp127");
									HX_STACK_LINE(23)
									Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
									HX_STACK_LINE(23)
									Float tmp129 = (a33 * b34);		HX_STACK_VAR(tmp129,"tmp129");
									HX_STACK_LINE(23)
									Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
									HX_STACK_LINE(23)
									Float tmp131 = (a34 * b44);		HX_STACK_VAR(tmp131,"tmp131");
									HX_STACK_LINE(23)
									Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
									HX_STACK_LINE(23)
									te[(int)14] = tmp132;
									HX_STACK_LINE(23)
									Float tmp133 = (a41 * b11);		HX_STACK_VAR(tmp133,"tmp133");
									HX_STACK_LINE(23)
									Float tmp134 = (a42 * b21);		HX_STACK_VAR(tmp134,"tmp134");
									HX_STACK_LINE(23)
									Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
									HX_STACK_LINE(23)
									Float tmp136 = (a43 * b31);		HX_STACK_VAR(tmp136,"tmp136");
									HX_STACK_LINE(23)
									Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
									HX_STACK_LINE(23)
									Float tmp138 = (a44 * b41);		HX_STACK_VAR(tmp138,"tmp138");
									HX_STACK_LINE(23)
									Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
									HX_STACK_LINE(23)
									te[(int)3] = tmp139;
									HX_STACK_LINE(23)
									Float tmp140 = (a41 * b12);		HX_STACK_VAR(tmp140,"tmp140");
									HX_STACK_LINE(23)
									Float tmp141 = (a42 * b22);		HX_STACK_VAR(tmp141,"tmp141");
									HX_STACK_LINE(23)
									Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
									HX_STACK_LINE(23)
									Float tmp143 = (a43 * b32);		HX_STACK_VAR(tmp143,"tmp143");
									HX_STACK_LINE(23)
									Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
									HX_STACK_LINE(23)
									Float tmp145 = (a44 * b42);		HX_STACK_VAR(tmp145,"tmp145");
									HX_STACK_LINE(23)
									Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
									HX_STACK_LINE(23)
									te[(int)7] = tmp146;
									HX_STACK_LINE(23)
									Float tmp147 = (a41 * b13);		HX_STACK_VAR(tmp147,"tmp147");
									HX_STACK_LINE(23)
									Float tmp148 = (a42 * b23);		HX_STACK_VAR(tmp148,"tmp148");
									HX_STACK_LINE(23)
									Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
									HX_STACK_LINE(23)
									Float tmp150 = (a43 * b33);		HX_STACK_VAR(tmp150,"tmp150");
									HX_STACK_LINE(23)
									Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
									HX_STACK_LINE(23)
									Float tmp152 = (a44 * b43);		HX_STACK_VAR(tmp152,"tmp152");
									HX_STACK_LINE(23)
									Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
									HX_STACK_LINE(23)
									te[(int)11] = tmp153;
									HX_STACK_LINE(23)
									Float tmp154 = (a41 * b14);		HX_STACK_VAR(tmp154,"tmp154");
									HX_STACK_LINE(23)
									Float tmp155 = (a42 * b24);		HX_STACK_VAR(tmp155,"tmp155");
									HX_STACK_LINE(23)
									Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
									HX_STACK_LINE(23)
									Float tmp157 = (a43 * b34);		HX_STACK_VAR(tmp157,"tmp157");
									HX_STACK_LINE(23)
									Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
									HX_STACK_LINE(23)
									Float tmp159 = (a44 * b44);		HX_STACK_VAR(tmp159,"tmp159");
									HX_STACK_LINE(23)
									Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
									HX_STACK_LINE(23)
									te[(int)15] = tmp160;
									HX_STACK_LINE(23)
									tmp13 = _this2;
								}
								HX_STACK_LINE(23)
								::phoenix::Matrix _m = tmp13;		HX_STACK_VAR(_m,"_m");
								HX_STACK_LINE(23)
								_this1->matrix = _m;
								HX_STACK_LINE(23)
								bool tmp14 = (_m != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(23)
								if ((tmp14)){
									HX_STACK_LINE(23)
									::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										cpp::ArrayBase array = _this1->matrix->elements;		HX_STACK_VAR(array,"array");
										HX_STACK_LINE(23)
										::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(23)
										bool tmp16 = (array != null());		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(23)
										if ((tmp16)){
											HX_STACK_LINE(23)
											::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(23)
											{
												HX_STACK_LINE(23)
												::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(23)
												::snow::api::buffers::ArrayBufferView _this2 = tmp18;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(23)
												_this2->byteOffset = (int)0;
												HX_STACK_LINE(23)
												_this2->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
												HX_STACK_LINE(23)
												int tmp19 = (_this2->length * _this2->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(23)
												_this2->byteLength = tmp19;
												HX_STACK_LINE(23)
												::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(23)
												{
													HX_STACK_LINE(23)
													::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(23)
													int tmp21 = _this2->byteLength;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(23)
													::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(23)
													this2 = tmp22;
													HX_STACK_LINE(23)
													tmp20 = this2;
												}
												HX_STACK_LINE(23)
												_this2->buffer = tmp20;
												HX_STACK_LINE(23)
												_this2->copyFromArray(((Array< Float >)(array)),null());
												HX_STACK_LINE(23)
												tmp17 = _this2;
											}
											HX_STACK_LINE(23)
											this1 = tmp17;
										}
										else{
											HX_STACK_LINE(23)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
										}
										HX_STACK_LINE(23)
										tmp15 = this1;
									}
									HX_STACK_LINE(23)
									_this1->floats = tmp15;
								}
								HX_STACK_LINE(23)
								_this1->matrix;
							}
							else{
								HX_STACK_LINE(23)
								::phoenix::Spatial tmp12 = t->get_world();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(23)
								::phoenix::Spatial _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(23)
								::phoenix::Matrix tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(23)
								{
									HX_STACK_LINE(23)
									::phoenix::Matrix tmp14 = t->local->matrix;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(23)
									Array< Float > te = tmp14->elements;		HX_STACK_VAR(te,"te");
									HX_STACK_LINE(23)
									Float tmp15 = te->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(23)
									Float tmp16 = te->__get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(23)
									Float tmp17 = te->__get((int)8);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(23)
									Float tmp18 = te->__get((int)12);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(23)
									Float tmp19 = te->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(23)
									Float tmp20 = te->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(23)
									Float tmp21 = te->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(23)
									Float tmp22 = te->__get((int)13);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(23)
									Float tmp23 = te->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(23)
									Float tmp24 = te->__get((int)6);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(23)
									Float tmp25 = te->__get((int)10);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(23)
									Float tmp26 = te->__get((int)14);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(23)
									Float tmp27 = te->__get((int)3);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(23)
									Float tmp28 = te->__get((int)7);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(23)
									Float tmp29 = te->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(23)
									Float tmp30 = te->__get((int)15);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(23)
									tmp13 = ::phoenix::Matrix_obj::__new(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30);
								}
								HX_STACK_LINE(23)
								::phoenix::Matrix _m = tmp13;		HX_STACK_VAR(_m,"_m");
								HX_STACK_LINE(23)
								_this1->matrix = _m;
								HX_STACK_LINE(23)
								bool tmp14 = (_m != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(23)
								if ((tmp14)){
									HX_STACK_LINE(23)
									::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										cpp::ArrayBase array = _this1->matrix->elements;		HX_STACK_VAR(array,"array");
										HX_STACK_LINE(23)
										::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(23)
										bool tmp16 = (array != null());		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(23)
										if ((tmp16)){
											HX_STACK_LINE(23)
											::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(23)
											{
												HX_STACK_LINE(23)
												::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(23)
												::snow::api::buffers::ArrayBufferView _this2 = tmp18;		HX_STACK_VAR(_this2,"_this2");
												HX_STACK_LINE(23)
												_this2->byteOffset = (int)0;
												HX_STACK_LINE(23)
												_this2->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
												HX_STACK_LINE(23)
												int tmp19 = (_this2->length * _this2->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(23)
												_this2->byteLength = tmp19;
												HX_STACK_LINE(23)
												::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(23)
												{
													HX_STACK_LINE(23)
													::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(23)
													int tmp21 = _this2->byteLength;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(23)
													::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(23)
													this2 = tmp22;
													HX_STACK_LINE(23)
													tmp20 = this2;
												}
												HX_STACK_LINE(23)
												_this2->buffer = tmp20;
												HX_STACK_LINE(23)
												_this2->copyFromArray(((Array< Float >)(array)),null());
												HX_STACK_LINE(23)
												tmp17 = _this2;
											}
											HX_STACK_LINE(23)
											this1 = tmp17;
										}
										else{
											HX_STACK_LINE(23)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
										}
										HX_STACK_LINE(23)
										tmp15 = this1;
									}
									HX_STACK_LINE(23)
									_this1->floats = tmp15;
								}
								HX_STACK_LINE(23)
								_this1->matrix;
							}
							HX_STACK_LINE(23)
							{
								HX_STACK_LINE(23)
								::phoenix::Spatial tmp12 = t->get_world();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(23)
								::phoenix::Spatial _this1 = tmp12;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(23)
								bool tmp13 = _this1->auto_decompose;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(23)
								if ((tmp13)){
									HX_STACK_LINE(23)
									::phoenix::MatrixTransform tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										::phoenix::Matrix _this2 = _this1->matrix;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(23)
										::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
										HX_STACK_LINE(23)
										::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
										HX_STACK_LINE(23)
										::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
										HX_STACK_LINE(23)
										Array< Float > te = _this2->elements;		HX_STACK_VAR(te,"te");
										HX_STACK_LINE(23)
										::phoenix::Matrix tmp15 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(23)
										::phoenix::Matrix matrix = tmp15;		HX_STACK_VAR(matrix,"matrix");
										HX_STACK_LINE(23)
										Float tmp16 = te->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(23)
										Float _ax_x = tmp16;		HX_STACK_VAR(_ax_x,"_ax_x");
										HX_STACK_LINE(23)
										Float tmp17 = te->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(23)
										Float _ax_y = tmp17;		HX_STACK_VAR(_ax_y,"_ax_y");
										HX_STACK_LINE(23)
										Float tmp18 = te->__get((int)2);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(23)
										Float _ax_z = tmp18;		HX_STACK_VAR(_ax_z,"_ax_z");
										HX_STACK_LINE(23)
										Float tmp19 = te->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(23)
										Float _ay_x = tmp19;		HX_STACK_VAR(_ay_x,"_ay_x");
										HX_STACK_LINE(23)
										Float tmp20 = te->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(23)
										Float _ay_y = tmp20;		HX_STACK_VAR(_ay_y,"_ay_y");
										HX_STACK_LINE(23)
										Float tmp21 = te->__get((int)6);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(23)
										Float _ay_z = tmp21;		HX_STACK_VAR(_ay_z,"_ay_z");
										HX_STACK_LINE(23)
										Float tmp22 = te->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(23)
										Float _az_x = tmp22;		HX_STACK_VAR(_az_x,"_az_x");
										HX_STACK_LINE(23)
										Float tmp23 = te->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(23)
										Float _az_y = tmp23;		HX_STACK_VAR(_az_y,"_az_y");
										HX_STACK_LINE(23)
										Float tmp24 = te->__get((int)10);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(23)
										Float _az_z = tmp24;		HX_STACK_VAR(_az_z,"_az_z");
										HX_STACK_LINE(23)
										Float tmp25 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(23)
										Float tmp26 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(23)
										Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(23)
										Float tmp28 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(23)
										Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(23)
										Float tmp30 = ::Math_obj::sqrt(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(23)
										Float _ax_length = tmp30;		HX_STACK_VAR(_ax_length,"_ax_length");
										HX_STACK_LINE(23)
										Float tmp31 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(23)
										Float tmp32 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(23)
										Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(23)
										Float tmp34 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(23)
										Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(23)
										Float tmp36 = ::Math_obj::sqrt(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(23)
										Float _ay_length = tmp36;		HX_STACK_VAR(_ay_length,"_ay_length");
										HX_STACK_LINE(23)
										Float tmp37 = (_az_x * _az_x);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(23)
										Float tmp38 = (_az_y * _az_y);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(23)
										Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(23)
										Float tmp40 = (_az_z * _az_z);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(23)
										Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(23)
										Float tmp42 = ::Math_obj::sqrt(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(23)
										Float _az_length = tmp42;		HX_STACK_VAR(_az_length,"_az_length");
										HX_STACK_LINE(23)
										bool tmp43 = (_quaternion == null());		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(23)
										if ((tmp43)){
											HX_STACK_LINE(23)
											::phoenix::Quaternion tmp44 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(23)
											_quaternion = tmp44;
										}
										HX_STACK_LINE(23)
										bool tmp44 = (_position == null());		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(23)
										if ((tmp44)){
											HX_STACK_LINE(23)
											Float tmp45 = te->__get((int)12);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(23)
											Float tmp46 = te->__get((int)13);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(23)
											Float tmp47 = te->__get((int)14);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(23)
											::phoenix::Vector tmp48 = ::phoenix::Vector_obj::__new(tmp45,tmp46,tmp47,null());		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(23)
											_position = tmp48;
										}
										else{
											HX_STACK_LINE(23)
											{
												HX_STACK_LINE(23)
												Float tmp45 = te->__get((int)12);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(23)
												Float _x = tmp45;		HX_STACK_VAR(_x,"_x");
												HX_STACK_LINE(23)
												_position->x = _x;
												HX_STACK_LINE(23)
												bool tmp46 = _position->_construct;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(23)
												if ((tmp46)){
													HX_STACK_LINE(23)
													_position->x;
												}
												else{
													HX_STACK_LINE(23)
													bool tmp47 = (_position->listen_x != null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(23)
													bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(23)
													if ((tmp47)){
														HX_STACK_LINE(23)
														bool tmp49 = _position->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(23)
														bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(23)
														tmp48 = !(tmp50);
													}
													else{
														HX_STACK_LINE(23)
														tmp48 = false;
													}
													HX_STACK_LINE(23)
													if ((tmp48)){
														HX_STACK_LINE(23)
														Float tmp49 = _x;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(23)
														_position->listen_x(tmp49);
													}
													HX_STACK_LINE(23)
													_position->x;
												}
											}
											HX_STACK_LINE(23)
											{
												HX_STACK_LINE(23)
												Float tmp45 = te->__get((int)13);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(23)
												Float _y = tmp45;		HX_STACK_VAR(_y,"_y");
												HX_STACK_LINE(23)
												_position->y = _y;
												HX_STACK_LINE(23)
												bool tmp46 = _position->_construct;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(23)
												if ((tmp46)){
													HX_STACK_LINE(23)
													_position->y;
												}
												else{
													HX_STACK_LINE(23)
													bool tmp47 = (_position->listen_y != null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(23)
													bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(23)
													if ((tmp47)){
														HX_STACK_LINE(23)
														bool tmp49 = _position->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(23)
														bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(23)
														tmp48 = !(tmp50);
													}
													else{
														HX_STACK_LINE(23)
														tmp48 = false;
													}
													HX_STACK_LINE(23)
													if ((tmp48)){
														HX_STACK_LINE(23)
														Float tmp49 = _y;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(23)
														_position->listen_y(tmp49);
													}
													HX_STACK_LINE(23)
													_position->y;
												}
											}
											HX_STACK_LINE(23)
											{
												HX_STACK_LINE(23)
												Float tmp45 = te->__get((int)14);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(23)
												Float _z = tmp45;		HX_STACK_VAR(_z,"_z");
												HX_STACK_LINE(23)
												_position->z = _z;
												HX_STACK_LINE(23)
												bool tmp46 = _position->_construct;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(23)
												if ((tmp46)){
													HX_STACK_LINE(23)
													_position->z;
												}
												else{
													HX_STACK_LINE(23)
													bool tmp47 = (_position->listen_z != null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(23)
													bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(23)
													if ((tmp47)){
														HX_STACK_LINE(23)
														bool tmp49 = _position->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(23)
														bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(23)
														tmp48 = !(tmp50);
													}
													else{
														HX_STACK_LINE(23)
														tmp48 = false;
													}
													HX_STACK_LINE(23)
													if ((tmp48)){
														HX_STACK_LINE(23)
														Float tmp49 = _z;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(23)
														_position->listen_z(tmp49);
													}
													HX_STACK_LINE(23)
													_position->z;
												}
											}
										}
										HX_STACK_LINE(23)
										bool tmp45 = (_scale == null());		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(23)
										if ((tmp45)){
											HX_STACK_LINE(23)
											::phoenix::Vector tmp46 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(23)
											_scale = tmp46;
										}
										else{
											HX_STACK_LINE(23)
											{
												HX_STACK_LINE(23)
												_scale->x = _ax_length;
												HX_STACK_LINE(23)
												bool tmp46 = _scale->_construct;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(23)
												if ((tmp46)){
													HX_STACK_LINE(23)
													_scale->x;
												}
												else{
													HX_STACK_LINE(23)
													bool tmp47 = (_scale->listen_x != null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(23)
													bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(23)
													if ((tmp47)){
														HX_STACK_LINE(23)
														bool tmp49 = _scale->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(23)
														bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(23)
														tmp48 = !(tmp50);
													}
													else{
														HX_STACK_LINE(23)
														tmp48 = false;
													}
													HX_STACK_LINE(23)
													if ((tmp48)){
														HX_STACK_LINE(23)
														Float tmp49 = _ax_length;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(23)
														_scale->listen_x(tmp49);
													}
													HX_STACK_LINE(23)
													_scale->x;
												}
											}
											HX_STACK_LINE(23)
											{
												HX_STACK_LINE(23)
												_scale->y = _ay_length;
												HX_STACK_LINE(23)
												bool tmp46 = _scale->_construct;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(23)
												if ((tmp46)){
													HX_STACK_LINE(23)
													_scale->y;
												}
												else{
													HX_STACK_LINE(23)
													bool tmp47 = (_scale->listen_y != null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(23)
													bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(23)
													if ((tmp47)){
														HX_STACK_LINE(23)
														bool tmp49 = _scale->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(23)
														bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(23)
														tmp48 = !(tmp50);
													}
													else{
														HX_STACK_LINE(23)
														tmp48 = false;
													}
													HX_STACK_LINE(23)
													if ((tmp48)){
														HX_STACK_LINE(23)
														Float tmp49 = _ay_length;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(23)
														_scale->listen_y(tmp49);
													}
													HX_STACK_LINE(23)
													_scale->y;
												}
											}
											HX_STACK_LINE(23)
											{
												HX_STACK_LINE(23)
												_scale->z = _az_length;
												HX_STACK_LINE(23)
												bool tmp46 = _scale->_construct;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(23)
												if ((tmp46)){
													HX_STACK_LINE(23)
													_scale->z;
												}
												else{
													HX_STACK_LINE(23)
													bool tmp47 = (_scale->listen_z != null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(23)
													bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(23)
													if ((tmp47)){
														HX_STACK_LINE(23)
														bool tmp49 = _scale->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(23)
														bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(23)
														tmp48 = !(tmp50);
													}
													else{
														HX_STACK_LINE(23)
														tmp48 = false;
													}
													HX_STACK_LINE(23)
													if ((tmp48)){
														HX_STACK_LINE(23)
														Float tmp49 = _az_length;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(23)
														_scale->listen_z(tmp49);
													}
													HX_STACK_LINE(23)
													_scale->z;
												}
											}
										}
										HX_STACK_LINE(23)
										matrix->elements = _this2->elements->concat(Array_obj< Float >::__new());
										HX_STACK_LINE(23)
										Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
										HX_STACK_LINE(23)
										Float tmp46 = _ax_length;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(23)
										hx::DivEq(me[(int)0],tmp46);
										HX_STACK_LINE(23)
										Float tmp47 = _ax_length;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(23)
										hx::DivEq(me[(int)1],tmp47);
										HX_STACK_LINE(23)
										Float tmp48 = _ax_length;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(23)
										hx::DivEq(me[(int)2],tmp48);
										HX_STACK_LINE(23)
										Float tmp49 = _ay_length;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(23)
										hx::DivEq(me[(int)4],tmp49);
										HX_STACK_LINE(23)
										Float tmp50 = _ay_length;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(23)
										hx::DivEq(me[(int)5],tmp50);
										HX_STACK_LINE(23)
										Float tmp51 = _ay_length;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(23)
										hx::DivEq(me[(int)6],tmp51);
										HX_STACK_LINE(23)
										Float tmp52 = _az_length;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(23)
										hx::DivEq(me[(int)8],tmp52);
										HX_STACK_LINE(23)
										Float tmp53 = _az_length;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(23)
										hx::DivEq(me[(int)9],tmp53);
										HX_STACK_LINE(23)
										Float tmp54 = _az_length;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(23)
										hx::DivEq(me[(int)10],tmp54);
										HX_STACK_LINE(23)
										::phoenix::Matrix tmp55 = matrix;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(23)
										_quaternion->setFromRotationMatrix(tmp55);
										HX_STACK_LINE(23)
										bool tmp56 = (_this2->_transform == null());		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(23)
										if ((tmp56)){
											HX_STACK_LINE(23)
											::phoenix::MatrixTransform tmp57 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(23)
											_this2->_transform = tmp57;
										}
										else{
											HX_STACK_LINE(23)
											_this2->_transform->pos = _position;
											HX_STACK_LINE(23)
											_this2->_transform->rotation = _quaternion;
											HX_STACK_LINE(23)
											_this2->_transform->scale = _scale;
										}
										HX_STACK_LINE(23)
										tmp14 = _this2->_transform;
									}
									HX_STACK_LINE(23)
									::phoenix::MatrixTransform _transform = tmp14;		HX_STACK_VAR(_transform,"_transform");
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
										HX_STACK_LINE(23)
										_this1->pos = _p;
										HX_STACK_LINE(23)
										bool tmp15 = (_p != null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(23)
										if ((tmp15)){
											HX_STACK_LINE(23)
											::phoenix::Vector tmp16 = _this1->pos;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(23)
											Dynamic tmp17 = _this1->_pos_change_dyn();		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(23)
											::phoenix::Vector_obj::Listen(tmp16,tmp17);
											HX_STACK_LINE(23)
											bool tmp18 = (_this1->pos_changed != null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(23)
											bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(23)
											if ((tmp18)){
												HX_STACK_LINE(23)
												bool tmp20 = _this1->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(23)
												bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(23)
												tmp19 = !(tmp21);
											}
											else{
												HX_STACK_LINE(23)
												tmp19 = false;
											}
											HX_STACK_LINE(23)
											if ((tmp19)){
												HX_STACK_LINE(23)
												::phoenix::Vector tmp20 = _this1->pos;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(23)
												_this1->pos_changed(tmp20);
											}
										}
										HX_STACK_LINE(23)
										_this1->pos;
									}
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
										HX_STACK_LINE(23)
										_this1->rotation = _r;
										HX_STACK_LINE(23)
										bool tmp15 = (_r != null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(23)
										if ((tmp15)){
											HX_STACK_LINE(23)
											{
												HX_STACK_LINE(23)
												::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
												HX_STACK_LINE(23)
												Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
												HX_STACK_LINE(23)
												_q->listen_x = listener;
												HX_STACK_LINE(23)
												_q->listen_y = listener;
												HX_STACK_LINE(23)
												_q->listen_z = listener;
												HX_STACK_LINE(23)
												_q->listen_w = listener;
											}
											HX_STACK_LINE(23)
											bool tmp16 = (_this1->rotation_changed != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(23)
											bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(23)
											if ((tmp16)){
												HX_STACK_LINE(23)
												bool tmp18 = _this1->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(23)
												bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(23)
												tmp17 = !(tmp19);
											}
											else{
												HX_STACK_LINE(23)
												tmp17 = false;
											}
											HX_STACK_LINE(23)
											if ((tmp17)){
												HX_STACK_LINE(23)
												::phoenix::Quaternion tmp18 = _this1->rotation;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(23)
												_this1->rotation_changed(tmp18);
											}
										}
										HX_STACK_LINE(23)
										_this1->rotation;
									}
									HX_STACK_LINE(23)
									{
										HX_STACK_LINE(23)
										::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
										HX_STACK_LINE(23)
										_this1->scale = _s;
										HX_STACK_LINE(23)
										bool tmp15 = (_s != null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(23)
										if ((tmp15)){
											HX_STACK_LINE(23)
											::phoenix::Vector tmp16 = _this1->scale;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(23)
											Dynamic tmp17 = _this1->_scale_change_dyn();		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(23)
											::phoenix::Vector_obj::Listen(tmp16,tmp17);
											HX_STACK_LINE(23)
											bool tmp18 = (_this1->scale_changed != null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(23)
											bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(23)
											if ((tmp18)){
												HX_STACK_LINE(23)
												bool tmp20 = _this1->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(23)
												bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(23)
												tmp19 = !(tmp21);
											}
											else{
												HX_STACK_LINE(23)
												tmp19 = false;
											}
											HX_STACK_LINE(23)
											if ((tmp19)){
												HX_STACK_LINE(23)
												::phoenix::Vector tmp20 = _this1->scale;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(23)
												_this1->scale_changed(tmp20);
											}
										}
										HX_STACK_LINE(23)
										_this1->scale;
									}
								}
								HX_STACK_LINE(23)
								_this1;
							}
							HX_STACK_LINE(23)
							{
								HX_STACK_LINE(23)
								t->dirty = false;
								HX_STACK_LINE(23)
								bool tmp12 = t->dirty;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(23)
								bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(23)
								bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(23)
								if ((tmp13)){
									HX_STACK_LINE(23)
									bool tmp15 = t->_setup;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(23)
									bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(23)
									bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(23)
									tmp14 = !(tmp17);
								}
								else{
									HX_STACK_LINE(23)
									tmp14 = false;
								}
								HX_STACK_LINE(23)
								bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(23)
								bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(23)
								if ((tmp15)){
									HX_STACK_LINE(23)
									tmp16 = (t->_dirty_handlers != null());
								}
								else{
									HX_STACK_LINE(23)
									tmp16 = false;
								}
								HX_STACK_LINE(23)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(23)
								if ((tmp16)){
									HX_STACK_LINE(23)
									int tmp18 = t->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(23)
									int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(23)
									tmp17 = (tmp19 > (int)0);
								}
								else{
									HX_STACK_LINE(23)
									tmp17 = false;
								}
								HX_STACK_LINE(23)
								if ((tmp17)){
									HX_STACK_LINE(23)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(23)
									cpp::ArrayBase _g1 = t->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(23)
									while((true)){
										HX_STACK_LINE(23)
										bool tmp18 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(23)
										bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(23)
										if ((tmp19)){
											HX_STACK_LINE(23)
											break;
										}
										HX_STACK_LINE(23)
										Dynamic tmp20 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(23)
										Dynamic _handler = tmp20;		HX_STACK_VAR(_handler,"_handler");
										HX_STACK_LINE(23)
										++(_g);
										HX_STACK_LINE(23)
										bool tmp21 = (_handler != null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(23)
										if ((tmp21)){
											HX_STACK_LINE(23)
											::phoenix::Transform tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(23)
											_handler(tmp22).Cast< Void >();
										}
									}
								}
								HX_STACK_LINE(23)
								t->dirty;
							}
							HX_STACK_LINE(23)
							t->_cleaning = false;
							HX_STACK_LINE(23)
							bool tmp12 = (t->_clean_handlers != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(23)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(23)
							if ((tmp12)){
								HX_STACK_LINE(23)
								int tmp14 = t->_clean_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(23)
								int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(23)
								tmp13 = (tmp15 > (int)0);
							}
							else{
								HX_STACK_LINE(23)
								tmp13 = false;
							}
							HX_STACK_LINE(23)
							if ((tmp13)){
								HX_STACK_LINE(23)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(23)
								cpp::ArrayBase _g1 = t->_clean_handlers;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(23)
								while((true)){
									HX_STACK_LINE(23)
									bool tmp14 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(23)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(23)
									if ((tmp15)){
										HX_STACK_LINE(23)
										break;
									}
									HX_STACK_LINE(23)
									Dynamic tmp16 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(23)
									Dynamic _handler = tmp16;		HX_STACK_VAR(_handler,"_handler");
									HX_STACK_LINE(23)
									++(_g);
									HX_STACK_LINE(23)
									bool tmp17 = (_handler != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(23)
									if ((tmp17)){
										HX_STACK_LINE(23)
										::phoenix::Transform tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(23)
										_handler(tmp18).Cast< Void >();
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(23)
				tmp3 = t->world;
			}
			HX_STACK_LINE(23)
			::phoenix::Spatial _this1 = tmp3;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(23)
			tmp2 = _this1->matrix;
		}
		HX_STACK_LINE(23)
		::phoenix::Matrix _m = tmp2;		HX_STACK_VAR(_m,"_m");
		HX_STACK_LINE(23)
		Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(23)
		Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(23)
		Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(23)
		Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(23)
		{
			HX_STACK_LINE(23)
			Float tmp3 = e->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(23)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(23)
			Float tmp6 = e->__get((int)4);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(23)
			Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(23)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(23)
			Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(23)
			Float tmp10 = e->__get((int)8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(23)
			Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(23)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(23)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(23)
			Float tmp14 = e->__get((int)12);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(23)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(23)
			Float _x1 = tmp15;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(23)
			Float tmp16 = e->__get((int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(23)
			Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(23)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(23)
			Float tmp19 = e->__get((int)5);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(23)
			Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(23)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(23)
			Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(23)
			Float tmp23 = e->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(23)
			Float tmp24 = _z;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(23)
			Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(23)
			Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(23)
			Float tmp27 = e->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(23)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(23)
			Float _y1 = tmp28;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(23)
			Float tmp29 = e->__get((int)2);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(23)
			Float tmp30 = _x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(23)
			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(23)
			Float tmp32 = e->__get((int)6);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(23)
			Float tmp33 = _y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(23)
			Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(23)
			Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(23)
			Float tmp36 = e->__get((int)10);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(23)
			Float tmp37 = _z;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(23)
			Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(23)
			Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(23)
			Float tmp40 = e->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(23)
			Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(23)
			Float _z1 = tmp41;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(23)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(23)
			_this->ignore_listeners = true;
			HX_STACK_LINE(23)
			{
				HX_STACK_LINE(23)
				_this->x = _x1;
				HX_STACK_LINE(23)
				bool tmp42 = _this->_construct;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(23)
				if ((tmp42)){
					HX_STACK_LINE(23)
					_this->x;
				}
				else{
					HX_STACK_LINE(23)
					bool tmp43 = (_this->listen_x != null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(23)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(23)
					if ((tmp43)){
						HX_STACK_LINE(23)
						bool tmp45 = _this->ignore_listeners;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(23)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(23)
						tmp44 = !(tmp46);
					}
					else{
						HX_STACK_LINE(23)
						tmp44 = false;
					}
					HX_STACK_LINE(23)
					if ((tmp44)){
						HX_STACK_LINE(23)
						Float tmp45 = _x1;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(23)
						_this->listen_x(tmp45);
					}
					HX_STACK_LINE(23)
					_this->x;
				}
			}
			HX_STACK_LINE(23)
			{
				HX_STACK_LINE(23)
				_this->y = _y1;
				HX_STACK_LINE(23)
				bool tmp42 = _this->_construct;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(23)
				if ((tmp42)){
					HX_STACK_LINE(23)
					_this->y;
				}
				else{
					HX_STACK_LINE(23)
					bool tmp43 = (_this->listen_y != null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(23)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(23)
					if ((tmp43)){
						HX_STACK_LINE(23)
						bool tmp45 = _this->ignore_listeners;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(23)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(23)
						tmp44 = !(tmp46);
					}
					else{
						HX_STACK_LINE(23)
						tmp44 = false;
					}
					HX_STACK_LINE(23)
					if ((tmp44)){
						HX_STACK_LINE(23)
						Float tmp45 = _y1;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(23)
						_this->listen_y(tmp45);
					}
					HX_STACK_LINE(23)
					_this->y;
				}
			}
			HX_STACK_LINE(23)
			{
				HX_STACK_LINE(23)
				_this->z = _z1;
				HX_STACK_LINE(23)
				bool tmp42 = _this->_construct;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(23)
				if ((tmp42)){
					HX_STACK_LINE(23)
					_this->z;
				}
				else{
					HX_STACK_LINE(23)
					bool tmp43 = (_this->listen_z != null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(23)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(23)
					if ((tmp43)){
						HX_STACK_LINE(23)
						bool tmp45 = _this->ignore_listeners;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(23)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(23)
						tmp44 = !(tmp46);
					}
					else{
						HX_STACK_LINE(23)
						tmp44 = false;
					}
					HX_STACK_LINE(23)
					if ((tmp44)){
						HX_STACK_LINE(23)
						Float tmp45 = _z1;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(23)
						_this->listen_z(tmp45);
					}
					HX_STACK_LINE(23)
					_this->z;
				}
			}
			HX_STACK_LINE(23)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(23)
			bool tmp42 = (_this->listen_x != null());		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(23)
			bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(23)
			if ((tmp42)){
				HX_STACK_LINE(23)
				bool tmp44 = _this->ignore_listeners;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(23)
				bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(23)
				tmp43 = !(tmp45);
			}
			else{
				HX_STACK_LINE(23)
				tmp43 = false;
			}
			HX_STACK_LINE(23)
			if ((tmp43)){
				HX_STACK_LINE(23)
				Float tmp44 = _this->x;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(23)
				_this->listen_x(tmp44);
			}
			HX_STACK_LINE(23)
			bool tmp44 = (_this->listen_y != null());		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(23)
			bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(23)
			if ((tmp44)){
				HX_STACK_LINE(23)
				bool tmp46 = _this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(23)
				bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(23)
				tmp45 = !(tmp47);
			}
			else{
				HX_STACK_LINE(23)
				tmp45 = false;
			}
			HX_STACK_LINE(23)
			if ((tmp45)){
				HX_STACK_LINE(23)
				Float tmp46 = _this->y;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(23)
				_this->listen_y(tmp46);
			}
			HX_STACK_LINE(23)
			bool tmp46 = (_this->listen_z != null());		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(23)
			bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(23)
			if ((tmp46)){
				HX_STACK_LINE(23)
				bool tmp48 = _this->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(23)
				bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(23)
				tmp47 = !(tmp49);
			}
			else{
				HX_STACK_LINE(23)
				tmp47 = false;
			}
			HX_STACK_LINE(23)
			if ((tmp47)){
				HX_STACK_LINE(23)
				Float tmp48 = _this->z;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(23)
				_this->listen_z(tmp48);
			}
			HX_STACK_LINE(23)
			_this;
		}
		HX_STACK_LINE(23)
		tmp = _this;
	}
	HX_STACK_LINE(23)
	worldV = tmp;
	HX_STACK_LINE(24)
	::phoenix::Vector tmp1 = worldV;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VectorExtender_obj,toWorldSpace,return )

::phoenix::Vector VectorExtender_obj::absolute( ::phoenix::Vector v){
	HX_STACK_FRAME("VectorExtender","absolute",0xc610729b,"VectorExtender.absolute","VectorExtender.hx",27,0x3f7b8c34)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(28)
	Float tmp = v->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	Float tmp2 = v->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(tmp1,tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VectorExtender_obj,absolute,return )

::phoenix::Vector VectorExtender_obj::setFromAngle( ::phoenix::Vector v,Float radians){
	HX_STACK_FRAME("VectorExtender","setFromAngle",0x34c4742b,"VectorExtender.setFromAngle","VectorExtender.hx",31,0x3f7b8c34)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(radians,"radians")
	HX_STACK_LINE(32)
	Float tmp = radians;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	Float tmp2 = radians;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(tmp1,tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	v = tmp4;
	HX_STACK_LINE(33)
	::phoenix::Vector tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VectorExtender_obj,setFromAngle,return )

::phoenix::Vector VectorExtender_obj::tangent2D( ::phoenix::Vector v){
	HX_STACK_FRAME("VectorExtender","tangent2D",0xe7d73f33,"VectorExtender.tangent2D","VectorExtender.hx",36,0x3f7b8c34)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(37)
	Float tmp = v->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	Float tmp2 = v->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VectorExtender_obj,tangent2D,return )

::phoenix::Vector VectorExtender_obj::closestPointOnLine( ::phoenix::Vector v,::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("VectorExtender","closestPointOnLine",0x8503386e,"VectorExtender.closestPointOnLine","VectorExtender.hx",40,0x3f7b8c34)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(41)
	Float tmp = (b->x - a->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	Float tmp1 = (b->y - a->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	Float tmp2 = (b->z - a->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	::phoenix::Vector ab = tmp3;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(42)
	Float tmp4 = (v->x - a->x);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	Float tmp5 = (v->y - a->y);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	Float tmp6 = (v->z - a->z);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(tmp4,tmp5,tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(42)
	::phoenix::Vector av = tmp7;		HX_STACK_VAR(av,"av");
	HX_STACK_LINE(44)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::phoenix::Vector tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				Float tmp11 = (ab->x * ab->x);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(44)
				Float tmp12 = (ab->y * ab->y);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(44)
				Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(44)
				Float tmp14 = (ab->z * ab->z);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(44)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(44)
				Float tmp16 = ::Math_obj::sqrt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(44)
				Float b1 = tmp16;		HX_STACK_VAR(b1,"b1");
				HX_STACK_LINE(44)
				Float tmp17 = (Float(ab->x) / Float(b1));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(44)
				Float tmp18 = (Float(ab->y) / Float(b1));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(44)
				Float tmp19 = (Float(ab->z) / Float(b1));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(44)
				tmp10 = ::phoenix::Vector_obj::__new(tmp17,tmp18,tmp19,null());
			}
			HX_STACK_LINE(44)
			::phoenix::Vector other = tmp10;		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(44)
			Float tmp11 = (av->x * other->x);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(44)
			Float tmp12 = (av->y * other->y);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(44)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(44)
			Float tmp14 = (av->z * other->z);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(44)
			tmp9 = (tmp13 + tmp14);
		}
		HX_STACK_LINE(44)
		Float value = tmp9;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(44)
		Float tmp10 = (ab->x * ab->x);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(44)
		Float tmp11 = (ab->y * ab->y);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(44)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(44)
		Float tmp13 = (ab->z * ab->z);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(44)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(44)
		Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(44)
		Float b1 = tmp15;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(44)
		bool tmp16 = (value < ((Float)0.0));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(44)
		if ((tmp16)){
			HX_STACK_LINE(44)
			tmp8 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(44)
			bool tmp17 = (value > b1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(44)
			if ((tmp17)){
				HX_STACK_LINE(44)
				tmp8 = b1;
			}
			else{
				HX_STACK_LINE(44)
				tmp8 = value;
			}
		}
	}
	HX_STACK_LINE(44)
	Float d = tmp8;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(46)
	::phoenix::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::phoenix::Vector tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			Float tmp11 = (ab->x * ab->x);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(46)
			Float tmp12 = (ab->y * ab->y);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(46)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(46)
			Float tmp14 = (ab->z * ab->z);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(46)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(46)
			Float tmp16 = ::Math_obj::sqrt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(46)
			Float b1 = tmp16;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(46)
			Float tmp17 = (Float(ab->x) / Float(b1));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(46)
			Float tmp18 = (Float(ab->y) / Float(b1));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(46)
			Float tmp19 = (Float(ab->z) / Float(b1));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(46)
			tmp10 = ::phoenix::Vector_obj::__new(tmp17,tmp18,tmp19,null());
		}
		HX_STACK_LINE(46)
		Float tmp11 = d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		::phoenix::Vector tmp12 = ::phoenix::Vector_obj::Multiply(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(46)
		::phoenix::Vector b1 = tmp12;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(46)
		Float tmp13 = (a->x + b1->x);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(46)
		Float tmp14 = (a->y + b1->y);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(46)
		Float tmp15 = (a->z + b1->z);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(46)
		tmp9 = ::phoenix::Vector_obj::__new(tmp13,tmp14,tmp15,null());
	}
	HX_STACK_LINE(46)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(VectorExtender_obj,closestPointOnLine,return )


VectorExtender_obj::VectorExtender_obj()
{
}

bool VectorExtender_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"cross2D") ) { outValue = cross2D_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"absolute") ) { outValue = absolute_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tangent2D") ) { outValue = tangent2D_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toLocalSpace") ) { outValue = toLocalSpace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toWorldSpace") ) { outValue = toWorldSpace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFromAngle") ) { outValue = setFromAngle_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"closestPointOnLine") ) { outValue = closestPointOnLine_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VectorExtender_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VectorExtender_obj::__mClass,"__mClass");
};

#endif

hx::Class VectorExtender_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("cross2D","\x52","\x6b","\x51","\xdf"),
	HX_HCSTRING("toLocalSpace","\xb6","\x60","\x39","\x5b"),
	HX_HCSTRING("toWorldSpace","\x6f","\x6e","\xf2","\x8e"),
	HX_HCSTRING("absolute","\x77","\xce","\x95","\xc3"),
	HX_HCSTRING("setFromAngle","\x07","\xee","\xba","\xfb"),
	HX_HCSTRING("tangent2D","\xd7","\x43","\x02","\xbf"),
	HX_HCSTRING("closestPointOnLine","\x4a","\x7f","\x0c","\x4a"),
	::String(null()) };

void VectorExtender_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("VectorExtender","\xca","\xd0","\x4e","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VectorExtender_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< VectorExtender_obj >;
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

