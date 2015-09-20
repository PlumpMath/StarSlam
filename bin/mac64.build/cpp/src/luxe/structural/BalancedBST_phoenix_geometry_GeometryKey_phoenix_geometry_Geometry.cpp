#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTTraverseMethod
#include <luxe/structural/BalancedBSTTraverseMethod.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
namespace luxe{
namespace structural{

Void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__construct(Dynamic compare_function)
{
HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","new",0xa9e9064f,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.new","luxe/structural/BalancedBST.hx",32,0xa0b365fc)
HX_STACK_THIS(this)
HX_STACK_ARG(compare_function,"compare_function")
{
	HX_STACK_LINE(34)
	this->compare = compare_function;
	HX_STACK_LINE(35)
	this->_array = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::~BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj() { }

Dynamic BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__CreateEmpty() { return  new BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj; }
hx::ObjectPtr< BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new(Dynamic compare_function)
{  hx::ObjectPtr< BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > _result_ = new BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();
	_result_->__construct(compare_function);
	return _result_;}

Dynamic BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > _result_ = new BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

int BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::size( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","size",0x054d9bf2,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.size","luxe/structural/BalancedBST.hx",42,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	int tmp1 = this->node_count(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,size,return )

int BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::depth( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","depth",0xf8ebc0b2,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.depth","luxe/structural/BalancedBST.hx",49,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	int tmp1 = this->node_depth(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,depth,return )

Void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::insert( ::phoenix::geometry::GeometryKey _key,::phoenix::geometry::Geometry _value){
{
		HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","insert",0x05b12caa,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.insert","luxe/structural/BalancedBST.hx",56,0xa0b365fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_key,"_key")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(58)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		::phoenix::geometry::GeometryKey tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		::phoenix::geometry::Geometry tmp2 = _value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp3 = this->node_insert(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		this->root = tmp3;
		HX_STACK_LINE(59)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		tmp4->color = false;
		HX_STACK_LINE(61)
		this->_array = null();
		HX_STACK_LINE(62)
		this->_array = this->toArray();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,insert,(void))

bool BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::contains( ::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","contains",0x203141d0,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.contains","luxe/structural/BalancedBST.hx",67,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(70)
	::phoenix::geometry::GeometryKey tmp = _key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	::phoenix::geometry::Geometry tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,contains,return )

::phoenix::geometry::Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::find( ::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","find",0xfcb5cb6a,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.find","luxe/structural/BalancedBST.hx",75,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(77)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	::phoenix::geometry::GeometryKey tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	::phoenix::geometry::Geometry tmp2 = this->node_find(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,find,return )

int BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::rank( ::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","rank",0x049e48dd,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.rank","luxe/structural/BalancedBST.hx",83,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(85)
	::phoenix::geometry::GeometryKey tmp = _key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->root;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	int tmp2 = this->node_rank(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,rank,return )

::phoenix::geometry::GeometryKey BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::select( int _rank){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","select",0xd207046d,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.select","luxe/structural/BalancedBST.hx",91,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_rank,"_rank")
	HX_STACK_LINE(93)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	int tmp1 = _rank;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = this->node_select(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp2;		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(95)
	bool tmp3 = (_node != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	if ((tmp3)){
		HX_STACK_LINE(96)
		::phoenix::geometry::GeometryKey tmp4 = _node->key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		return tmp4;
	}
	else{
		HX_STACK_LINE(98)
		return null();
	}
	HX_STACK_LINE(95)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,select,return )

::phoenix::geometry::GeometryKey BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::smallest( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","smallest",0x99977590,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.smallest","luxe/structural/BalancedBST.hx",104,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->node_smallest(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp1;		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(108)
	bool tmp2 = (_node != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	if ((tmp2)){
		HX_STACK_LINE(109)
		::phoenix::geometry::GeometryKey tmp3 = _node->key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		return tmp3;
	}
	else{
		HX_STACK_LINE(111)
		return null();
	}
	HX_STACK_LINE(108)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,smallest,return )

::phoenix::geometry::GeometryKey BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::largest( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","largest",0xad54968b,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.largest","luxe/structural/BalancedBST.hx",117,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->node_largest(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp1;		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(121)
	bool tmp2 = (_node != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	if ((tmp2)){
		HX_STACK_LINE(122)
		::phoenix::geometry::GeometryKey tmp3 = _node->key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		return tmp3;
	}
	else{
		HX_STACK_LINE(124)
		return null();
	}
	HX_STACK_LINE(121)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,largest,return )

bool BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::remove( ::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","remove",0x6c5c85b5,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.remove","luxe/structural/BalancedBST.hx",130,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(132)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	{
		HX_STACK_LINE(132)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->root;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp1->left;		HX_STACK_VAR(_node,"_node");
		HX_STACK_LINE(132)
		bool tmp2 = (_node == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		if ((tmp2)){
			HX_STACK_LINE(132)
			tmp = false;
		}
		else{
			HX_STACK_LINE(132)
			tmp = (_node->color == true);
		}
	}
	HX_STACK_LINE(132)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(132)
	if ((tmp2)){
		HX_STACK_LINE(132)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = this->root;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(132)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(132)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp6->right;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(132)
			bool tmp7 = (_node == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(132)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(132)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(132)
			if ((tmp9)){
				HX_STACK_LINE(132)
				tmp4 = false;
			}
			else{
				HX_STACK_LINE(132)
				bool tmp10 = (_node->color == true);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(132)
				tmp4 = tmp10;
			}
		}
		HX_STACK_LINE(132)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(132)
		tmp3 = !(tmp5);
	}
	else{
		HX_STACK_LINE(132)
		tmp3 = false;
	}
	HX_STACK_LINE(132)
	if ((tmp3)){
		HX_STACK_LINE(133)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(133)
		tmp4->color = true;
	}
	HX_STACK_LINE(136)
	::phoenix::geometry::GeometryKey tmp4 = _key;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(136)
	bool tmp5 = this->contains(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(136)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(136)
	if ((tmp6)){
		HX_STACK_LINE(137)
		return false;
	}
	HX_STACK_LINE(140)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = this->root;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(140)
	::phoenix::geometry::GeometryKey tmp8 = _key;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(140)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = this->node_remove(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(140)
	this->root = tmp9;
	HX_STACK_LINE(142)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp10 = this->root;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(142)
	bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(142)
	if ((tmp11)){
		HX_STACK_LINE(143)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp12 = this->root;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(143)
		tmp12->color = false;
	}
	HX_STACK_LINE(146)
	this->_array = null();
	HX_STACK_LINE(147)
	this->_array = this->toArray();
	HX_STACK_LINE(149)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,remove,return )

bool BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::remove_smallest( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","remove_smallest",0xba8920e9,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.remove_smallest","luxe/structural/BalancedBST.hx",154,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->root;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp1->left;		HX_STACK_VAR(_node,"_node");
		HX_STACK_LINE(156)
		bool tmp2 = (_node == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		if ((tmp2)){
			HX_STACK_LINE(156)
			tmp = false;
		}
		else{
			HX_STACK_LINE(156)
			tmp = (_node->color == true);
		}
	}
	HX_STACK_LINE(156)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(156)
	if ((tmp2)){
		HX_STACK_LINE(156)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = this->root;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp6->right;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(156)
			bool tmp7 = (_node == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(156)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(156)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			if ((tmp9)){
				HX_STACK_LINE(156)
				tmp4 = false;
			}
			else{
				HX_STACK_LINE(156)
				bool tmp10 = (_node->color == true);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(156)
				tmp4 = tmp10;
			}
		}
		HX_STACK_LINE(156)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		tmp3 = !(tmp5);
	}
	else{
		HX_STACK_LINE(156)
		tmp3 = false;
	}
	HX_STACK_LINE(156)
	if ((tmp3)){
		HX_STACK_LINE(157)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		tmp4->color = true;
	}
	HX_STACK_LINE(160)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(160)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = this->node_remove_smallest(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(160)
	this->root = tmp5;
	HX_STACK_LINE(162)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = this->root;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(162)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(162)
	if ((tmp7)){
		HX_STACK_LINE(163)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = this->root;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(163)
		tmp8->color = false;
	}
	HX_STACK_LINE(166)
	this->_array = null();
	HX_STACK_LINE(167)
	this->_array = this->toArray();
	HX_STACK_LINE(169)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,remove_smallest,return )

bool BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::remove_largest( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","remove_largest",0x2e0d5952,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.remove_largest","luxe/structural/BalancedBST.hx",174,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(177)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	{
		HX_STACK_LINE(177)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->root;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp1->left;		HX_STACK_VAR(_node,"_node");
		HX_STACK_LINE(177)
		bool tmp2 = (_node == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		if ((tmp2)){
			HX_STACK_LINE(177)
			tmp = false;
		}
		else{
			HX_STACK_LINE(177)
			tmp = (_node->color == true);
		}
	}
	HX_STACK_LINE(177)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(177)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(177)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(177)
	if ((tmp2)){
		HX_STACK_LINE(177)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = this->root;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp6->right;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(177)
			bool tmp7 = (_node == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(177)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(177)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(177)
			if ((tmp9)){
				HX_STACK_LINE(177)
				tmp4 = false;
			}
			else{
				HX_STACK_LINE(177)
				bool tmp10 = (_node->color == true);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(177)
				tmp4 = tmp10;
			}
		}
		HX_STACK_LINE(177)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(177)
		tmp3 = !(tmp5);
	}
	else{
		HX_STACK_LINE(177)
		tmp3 = false;
	}
	HX_STACK_LINE(177)
	if ((tmp3)){
		HX_STACK_LINE(178)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		tmp4->color = true;
	}
	HX_STACK_LINE(181)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(181)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = this->node_remove_largest(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(181)
	this->root = tmp5;
	HX_STACK_LINE(183)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = this->root;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(183)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(183)
	if ((tmp7)){
		HX_STACK_LINE(184)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = this->root;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(184)
		tmp8->color = false;
	}
	HX_STACK_LINE(187)
	this->_array = null();
	HX_STACK_LINE(188)
	this->_array = this->toArray();
	HX_STACK_LINE(190)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,remove_largest,return )

::phoenix::geometry::GeometryKey BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::floor( ::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","floor",0x2458a17b,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.floor","luxe/structural/BalancedBST.hx",195,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(197)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	::phoenix::geometry::GeometryKey tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(197)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = this->node_floor(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(197)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp2;		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(199)
	bool tmp3 = (_node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	if ((tmp3)){
		HX_STACK_LINE(200)
		return null();
	}
	HX_STACK_LINE(203)
	::phoenix::geometry::GeometryKey tmp4 = _node->key;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(203)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,floor,return )

::phoenix::geometry::GeometryKey BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::ceil( ::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","ceil",0xfab71a36,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.ceil","luxe/structural/BalancedBST.hx",208,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(210)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	::phoenix::geometry::GeometryKey tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(210)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = this->node_ceil(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(210)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp2;		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(212)
	bool tmp3 = (_node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(212)
	if ((tmp3)){
		HX_STACK_LINE(213)
		return null();
	}
	HX_STACK_LINE(216)
	::phoenix::geometry::GeometryKey tmp4 = _node->key;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(216)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,ceil,return )

Array< ::Dynamic > BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::toArray( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","toArray",0x63ac138d,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.toArray","luxe/structural/BalancedBST.hx",221,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(225)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->root;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,a)
	int __ArgCount() const { return 1; }
	Void run(::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/structural/BalancedBST.hx",225,0xa0b365fc)
		HX_STACK_ARG(_node,"_node")
		{
			HX_STACK_LINE(226)
			::phoenix::geometry::Geometry tmp1 = _node->value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(226)
			a->push(tmp1);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(225)
	this->traverse_node(tmp,::luxe::structural::BalancedBSTTraverseMethod_obj::order_retain, Dynamic(new _Function_1_1(a)));
	HX_STACK_LINE(229)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,toArray,return )

Array< ::Dynamic > BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::keys( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","keys",0x0000dd25,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.keys","luxe/structural/BalancedBST.hx",234,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(238)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->root;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,a)
	int __ArgCount() const { return 1; }
	Void run(::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/structural/BalancedBST.hx",238,0xa0b365fc)
		HX_STACK_ARG(_node,"_node")
		{
			HX_STACK_LINE(239)
			::phoenix::geometry::GeometryKey tmp1 = _node->key;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(239)
			a->push(tmp1);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(238)
	this->traverse_node(tmp,::luxe::structural::BalancedBSTTraverseMethod_obj::order_retain, Dynamic(new _Function_1_1(a)));
	HX_STACK_LINE(242)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,keys,return )

Dynamic BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::iterator( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","iterator",0x8750319f,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.iterator","luxe/structural/BalancedBST.hx",248,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	Dynamic tmp = this->_array->iteratorFast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,iterator,return )

Void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::traverse_node( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::luxe::structural::BalancedBSTTraverseMethod _method,Dynamic _on_traverse){
{
		HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","traverse_node",0xc8c1599e,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.traverse_node","luxe/structural/BalancedBST.hx",256,0xa0b365fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_node,"_node")
		HX_STACK_ARG(_method,"_method")
		HX_STACK_ARG(_on_traverse,"_on_traverse")
		HX_STACK_LINE(258)
		bool tmp = (_node != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		if ((tmp)){
			HX_STACK_LINE(260)
			switch( (int)(_method->__Index())){
				case (int)0: {
					HX_STACK_LINE(263)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = _node;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(263)
					_on_traverse(tmp1).Cast< Void >();
					HX_STACK_LINE(264)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = _node->left;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(264)
					::luxe::structural::BalancedBSTTraverseMethod tmp3 = _method;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(264)
					Dynamic tmp4 = _on_traverse;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(264)
					this->traverse_node(tmp2,tmp3,tmp4);
					HX_STACK_LINE(265)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node->right;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(265)
					::luxe::structural::BalancedBSTTraverseMethod tmp6 = _method;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(265)
					Dynamic tmp7 = _on_traverse;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(265)
					this->traverse_node(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(268)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = _node->left;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(268)
					::luxe::structural::BalancedBSTTraverseMethod tmp2 = _method;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(268)
					Dynamic tmp3 = _on_traverse;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(268)
					this->traverse_node(tmp1,tmp2,tmp3);
					HX_STACK_LINE(269)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = _node;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(269)
					_on_traverse(tmp4).Cast< Void >();
					HX_STACK_LINE(270)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node->right;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(270)
					::luxe::structural::BalancedBSTTraverseMethod tmp6 = _method;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(270)
					Dynamic tmp7 = _on_traverse;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(270)
					this->traverse_node(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(273)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = _node->left;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(273)
					::luxe::structural::BalancedBSTTraverseMethod tmp2 = _method;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(273)
					Dynamic tmp3 = _on_traverse;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(273)
					this->traverse_node(tmp1,tmp2,tmp3);
					HX_STACK_LINE(274)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = _node->right;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(274)
					::luxe::structural::BalancedBSTTraverseMethod tmp5 = _method;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(274)
					Dynamic tmp6 = _on_traverse;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(274)
					this->traverse_node(tmp4,tmp5,tmp6);
					HX_STACK_LINE(275)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = _node;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(275)
					_on_traverse(tmp7).Cast< Void >();
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,traverse_node,(void))

bool BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::get_empty( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","get_empty",0xfef86a13,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.get_empty","luxe/structural/BalancedBST.hx",286,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(288)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,get_empty,return )

int BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_depth( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_depth",0x642da5b7,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_depth","luxe/structural/BalancedBST.hx",293,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(295)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	if ((tmp)){
		HX_STACK_LINE(296)
		return (int)0;
	}
	HX_STACK_LINE(300)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = _node->left;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(300)
	int tmp2 = this->node_depth(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(301)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp3 = _node->right;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(301)
	int tmp4 = this->node_depth(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(299)
	Float tmp5 = ::Math_obj::max(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(299)
	Float _n_depth = tmp5;		HX_STACK_VAR(_n_depth,"_n_depth");
	HX_STACK_LINE(304)
	Float tmp6 = _n_depth;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(304)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(304)
	int tmp8 = ((int)1 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(304)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_depth,return )

int BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_count( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_count",0xd766f983,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_count","luxe/structural/BalancedBST.hx",309,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(311)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(311)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(311)
	if ((tmp)){
		HX_STACK_LINE(311)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(311)
		tmp1 = _node->nodecount;
	}
	HX_STACK_LINE(311)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_count,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_insert( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key,::phoenix::geometry::Geometry _value){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_insert",0x7417ac05,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_insert","luxe/structural/BalancedBST.hx",316,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(318)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	if ((tmp)){
		HX_STACK_LINE(320)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new(_key,_value,(int)1,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(320)
		return tmp1;
	}
	HX_STACK_LINE(325)
	::phoenix::geometry::GeometryKey tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(325)
	::phoenix::geometry::GeometryKey tmp2 = _node->key;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(325)
	int tmp3 = this->compare(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(325)
	int comparison = tmp3;		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(327)
	bool tmp4 = (comparison < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(327)
	if ((tmp4)){
		HX_STACK_LINE(329)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node->left;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(329)
		::phoenix::geometry::GeometryKey tmp6 = _key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(329)
		::phoenix::geometry::Geometry tmp7 = _value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(329)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = this->node_insert(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(329)
		_node->left = tmp8;
	}
	else{
		HX_STACK_LINE(331)
		bool tmp5 = (comparison > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(331)
		if ((tmp5)){
			HX_STACK_LINE(333)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = _node->right;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(333)
			::phoenix::geometry::GeometryKey tmp7 = _key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(333)
			::phoenix::geometry::Geometry tmp8 = _value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(333)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = this->node_insert(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(333)
			_node->right = tmp9;
		}
		else{
			HX_STACK_LINE(337)
			_node->value = _value;
		}
	}
	HX_STACK_LINE(341)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(341)
	{
		HX_STACK_LINE(341)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(341)
		bool tmp6 = (_node1 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(341)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(341)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(341)
		if ((tmp8)){
			HX_STACK_LINE(341)
			tmp5 = false;
		}
		else{
			HX_STACK_LINE(341)
			tmp5 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(341)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(341)
	if ((tmp5)){
		HX_STACK_LINE(341)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(341)
			bool tmp8 = (_node1 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(341)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(341)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(341)
			if ((tmp10)){
				HX_STACK_LINE(341)
				tmp7 = false;
			}
			else{
				HX_STACK_LINE(341)
				bool tmp11 = (_node1->color == true);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(341)
				tmp7 = tmp11;
			}
		}
		HX_STACK_LINE(341)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(341)
		tmp6 = !(tmp8);
	}
	else{
		HX_STACK_LINE(341)
		tmp6 = false;
	}
	HX_STACK_LINE(341)
	if ((tmp6)){
		HX_STACK_LINE(342)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = _node;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(342)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = this->rotate_left(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(342)
		_node = tmp8;
	}
	HX_STACK_LINE(345)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(345)
	{
		HX_STACK_LINE(345)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(345)
		bool tmp8 = (_node1 == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(345)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(345)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(345)
		if ((tmp10)){
			HX_STACK_LINE(345)
			tmp7 = false;
		}
		else{
			HX_STACK_LINE(345)
			tmp7 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(345)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(345)
	if ((tmp7)){
		HX_STACK_LINE(345)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = _node->left->left;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(345)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(345)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = tmp10;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(345)
		bool tmp11 = (_node1 == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(345)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(345)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(345)
		if ((tmp13)){
			HX_STACK_LINE(345)
			tmp8 = false;
		}
		else{
			HX_STACK_LINE(345)
			tmp8 = (_node1->color == true);
		}
	}
	else{
		HX_STACK_LINE(345)
		tmp8 = false;
	}
	HX_STACK_LINE(345)
	if ((tmp8)){
		HX_STACK_LINE(346)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = _node;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(346)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp10 = this->rotate_right(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(346)
		_node = tmp10;
	}
	HX_STACK_LINE(349)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(349)
	{
		HX_STACK_LINE(349)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(349)
		bool tmp10 = (_node1 == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(349)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(349)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(349)
		if ((tmp12)){
			HX_STACK_LINE(349)
			tmp9 = false;
		}
		else{
			HX_STACK_LINE(349)
			tmp9 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(349)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(349)
	if ((tmp9)){
		HX_STACK_LINE(349)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(349)
		bool tmp11 = (_node1 == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(349)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(349)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(349)
		if ((tmp13)){
			HX_STACK_LINE(349)
			tmp10 = false;
		}
		else{
			HX_STACK_LINE(349)
			tmp10 = (_node1->color == true);
		}
	}
	else{
		HX_STACK_LINE(349)
		tmp10 = false;
	}
	HX_STACK_LINE(349)
	if ((tmp10)){
		HX_STACK_LINE(350)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp11 = _node;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(350)
		this->swap_color(tmp11);
	}
	HX_STACK_LINE(353)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp11 = _node;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(353)
	this->node_update_count(tmp11);
	HX_STACK_LINE(355)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp12 = _node;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(355)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC3(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_insert,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_update_count( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_update_count",0x2a8cc8a5,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_update_count","luxe/structural/BalancedBST.hx",360,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(362)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = _node->left;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	int tmp1 = this->node_count(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = _node->right;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(362)
	int tmp3 = this->node_count(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(362)
	int tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(362)
	int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(362)
	_node->nodecount = tmp5;
	HX_STACK_LINE(364)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = _node;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(364)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_update_count,return )

::phoenix::geometry::Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_find( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_find",0x534a2e05,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_find","luxe/structural/BalancedBST.hx",369,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(371)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(371)
	if ((tmp)){
		HX_STACK_LINE(372)
		return null();
	}
	HX_STACK_LINE(375)
	::phoenix::geometry::GeometryKey tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(375)
	::phoenix::geometry::GeometryKey tmp2 = _node->key;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(375)
	int tmp3 = this->compare(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(375)
	int comparison = tmp3;		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(377)
	bool tmp4 = (comparison < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(377)
	if ((tmp4)){
		HX_STACK_LINE(378)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node->left;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(378)
		::phoenix::geometry::GeometryKey tmp6 = _key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(378)
		::phoenix::geometry::Geometry tmp7 = this->node_find(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(378)
		return tmp7;
	}
	else{
		HX_STACK_LINE(379)
		bool tmp5 = (comparison > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(379)
		if ((tmp5)){
			HX_STACK_LINE(380)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = _node->right;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(380)
			::phoenix::geometry::GeometryKey tmp7 = _key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(380)
			::phoenix::geometry::Geometry tmp8 = this->node_find(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(380)
			return tmp8;
		}
		else{
			HX_STACK_LINE(382)
			::phoenix::geometry::Geometry tmp6 = _node->value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(382)
			return tmp6;
		}
	}
	HX_STACK_LINE(377)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_find,return )

int BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_rank( ::phoenix::geometry::GeometryKey _key,::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_rank",0x5b32ab78,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_rank","luxe/structural/BalancedBST.hx",388,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(390)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(390)
	if ((tmp)){
		HX_STACK_LINE(391)
		return (int)0;
	}
	HX_STACK_LINE(394)
	::phoenix::geometry::GeometryKey tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(394)
	::phoenix::geometry::GeometryKey tmp2 = _node->key;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(394)
	int tmp3 = this->compare(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(394)
	int comparison = tmp3;		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(396)
	bool tmp4 = (comparison < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(396)
	if ((tmp4)){
		HX_STACK_LINE(397)
		::phoenix::geometry::GeometryKey tmp5 = _key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(397)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = _node->left;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(397)
		int tmp7 = this->node_rank(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(397)
		return tmp7;
	}
	else{
		HX_STACK_LINE(398)
		bool tmp5 = (comparison > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(398)
		if ((tmp5)){
			HX_STACK_LINE(399)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = _node->left;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(399)
			int tmp7 = this->node_count(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(399)
			int tmp8 = ((int)1 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(399)
			::phoenix::geometry::GeometryKey tmp9 = _key;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(399)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp10 = _node->right;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(399)
			int tmp11 = this->node_rank(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(399)
			int tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(399)
			return tmp12;
		}
		else{
			HX_STACK_LINE(401)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = _node->left;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(401)
			int tmp7 = this->node_count(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(401)
			return tmp7;
		}
	}
	HX_STACK_LINE(396)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_rank,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_select( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,int _rank){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_select",0x406d83c8,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_select","luxe/structural/BalancedBST.hx",407,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_rank,"_rank")
	HX_STACK_LINE(409)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(409)
	if ((tmp)){
		HX_STACK_LINE(410)
		return null();
	}
	HX_STACK_LINE(413)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = _node->left;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(413)
	int tmp2 = this->node_count(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(413)
	int _r = tmp2;		HX_STACK_VAR(_r,"_r");
	HX_STACK_LINE(415)
	bool tmp3 = (_r > _rank);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(415)
	if ((tmp3)){
		HX_STACK_LINE(416)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = _node->left;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(416)
		int tmp5 = _rank;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(416)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = this->node_select(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(416)
		return tmp6;
	}
	else{
		HX_STACK_LINE(417)
		bool tmp4 = (_r < _rank);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(417)
		if ((tmp4)){
			HX_STACK_LINE(418)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node->right;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(418)
			int tmp6 = (_rank - _r);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(418)
			int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(418)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = this->node_select(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(418)
			return tmp8;
		}
		else{
			HX_STACK_LINE(420)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(420)
			return tmp5;
		}
	}
	HX_STACK_LINE(415)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_select,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_smallest( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_smallest",0x4e20c1ab,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_smallest","luxe/structural/BalancedBST.hx",426,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(428)
	bool tmp = (_node->left == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(428)
	if ((tmp)){
		HX_STACK_LINE(429)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = _node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(429)
		return tmp1;
	}
	HX_STACK_LINE(432)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = _node->left;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(432)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = this->node_smallest(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(432)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_smallest,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_largest( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_largest",0xd89d86d0,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_largest","luxe/structural/BalancedBST.hx",437,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(439)
	bool tmp = (_node->right == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(439)
	if ((tmp)){
		HX_STACK_LINE(440)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = _node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(440)
		return tmp1;
	}
	else{
		HX_STACK_LINE(442)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = _node->right;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(442)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = this->node_largest(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(442)
		return tmp2;
	}
	HX_STACK_LINE(439)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_largest,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_floor( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_floor",0x8f9a8680,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_floor","luxe/structural/BalancedBST.hx",448,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(450)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(450)
	if ((tmp)){
		HX_STACK_LINE(451)
		return null();
	}
	HX_STACK_LINE(454)
	::phoenix::geometry::GeometryKey tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(454)
	::phoenix::geometry::GeometryKey tmp2 = _node->key;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(454)
	int tmp3 = this->compare(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(454)
	int comparison = tmp3;		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(456)
	bool tmp4 = (comparison == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(456)
	if ((tmp4)){
		HX_STACK_LINE(457)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(457)
		return tmp5;
	}
	else{
		HX_STACK_LINE(458)
		bool tmp5 = (comparison < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(458)
		if ((tmp5)){
			HX_STACK_LINE(459)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = _node->left;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(459)
			::phoenix::geometry::GeometryKey tmp7 = _key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(459)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = this->node_floor(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(459)
			return tmp8;
		}
	}
	HX_STACK_LINE(462)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node->right;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(462)
	::phoenix::geometry::GeometryKey tmp6 = _key;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(462)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = this->node_floor(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(462)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _n = tmp7;		HX_STACK_VAR(_n,"_n");
	HX_STACK_LINE(464)
	bool tmp8 = (_n != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(464)
	if ((tmp8)){
		HX_STACK_LINE(465)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = _n;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(465)
		return tmp9;
	}
	else{
		HX_STACK_LINE(467)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = _node;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(467)
		return tmp9;
	}
	HX_STACK_LINE(464)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_floor,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_ceil( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_ceil",0x514b7cd1,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_ceil","luxe/structural/BalancedBST.hx",473,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(475)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(475)
	if ((tmp)){
		HX_STACK_LINE(476)
		return null();
	}
	HX_STACK_LINE(479)
	::phoenix::geometry::GeometryKey tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(479)
	::phoenix::geometry::GeometryKey tmp2 = _node->key;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(479)
	int tmp3 = this->compare(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(479)
	int comparison = tmp3;		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(481)
	bool tmp4 = (comparison == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(481)
	if ((tmp4)){
		HX_STACK_LINE(483)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(483)
		return tmp5;
	}
	else{
		HX_STACK_LINE(485)
		bool tmp5 = (comparison < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(485)
		if ((tmp5)){
			HX_STACK_LINE(487)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = _node->left;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(487)
			::phoenix::geometry::GeometryKey tmp7 = _key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(487)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = this->node_ceil(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(487)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _n = tmp8;		HX_STACK_VAR(_n,"_n");
			HX_STACK_LINE(489)
			bool tmp9 = (_n != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(489)
			if ((tmp9)){
				HX_STACK_LINE(490)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp10 = _n;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(490)
				return tmp10;
			}
			else{
				HX_STACK_LINE(492)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp10 = _node;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(492)
				return tmp10;
			}
		}
	}
	HX_STACK_LINE(497)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node->right;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(497)
	::phoenix::geometry::GeometryKey tmp6 = _key;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(497)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = this->node_ceil(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(497)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_ceil,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_remove_smallest( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_remove_smallest",0x9b535e2e,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_remove_smallest","luxe/structural/BalancedBST.hx",502,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(504)
	bool tmp = (_node->left == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(504)
	if ((tmp)){
		HX_STACK_LINE(505)
		return null();
	}
	HX_STACK_LINE(508)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(508)
	{
		HX_STACK_LINE(508)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(508)
		bool tmp2 = (_node1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(508)
		if ((tmp2)){
			HX_STACK_LINE(508)
			tmp1 = false;
		}
		else{
			HX_STACK_LINE(508)
			tmp1 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(508)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(508)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(508)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(508)
	if ((tmp3)){
		HX_STACK_LINE(508)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(508)
		{
			HX_STACK_LINE(508)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = _node->left->left;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(508)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(508)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = tmp7;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(508)
			bool tmp8 = (_node1 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(508)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(508)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(508)
			if ((tmp10)){
				HX_STACK_LINE(508)
				tmp5 = false;
			}
			else{
				HX_STACK_LINE(508)
				bool tmp11 = (_node1->color == true);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(508)
				tmp5 = tmp11;
			}
		}
		HX_STACK_LINE(508)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(508)
		tmp4 = !(tmp6);
	}
	else{
		HX_STACK_LINE(508)
		tmp4 = false;
	}
	HX_STACK_LINE(508)
	if ((tmp4)){
		HX_STACK_LINE(509)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(509)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = this->move_red_left(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(509)
		_node = tmp6;
	}
	HX_STACK_LINE(512)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node->left;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(512)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = this->node_remove_smallest(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(512)
	_node->left = tmp6;
	HX_STACK_LINE(513)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = _node;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(513)
	this->node_update_count(tmp7);
	HX_STACK_LINE(515)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = _node;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(515)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = this->balance(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(515)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_remove_smallest,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_remove_largest( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_remove_largest",0x315b2bad,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_remove_largest","luxe/structural/BalancedBST.hx",520,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(522)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(522)
	{
		HX_STACK_LINE(522)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(522)
		bool tmp1 = (_node1 == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(522)
		if ((tmp1)){
			HX_STACK_LINE(522)
			tmp = false;
		}
		else{
			HX_STACK_LINE(522)
			tmp = (_node1->color == true);
		}
	}
	HX_STACK_LINE(522)
	if ((tmp)){
		HX_STACK_LINE(523)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = _node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(523)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = this->rotate_right(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(523)
		_node = tmp2;
	}
	HX_STACK_LINE(526)
	bool tmp1 = (_node->right == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(526)
	if ((tmp1)){
		HX_STACK_LINE(527)
		return null();
	}
	HX_STACK_LINE(530)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(530)
	{
		HX_STACK_LINE(530)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(530)
		bool tmp3 = (_node1 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(530)
		if ((tmp3)){
			HX_STACK_LINE(530)
			tmp2 = false;
		}
		else{
			HX_STACK_LINE(530)
			tmp2 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(530)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(530)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(530)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(530)
	if ((tmp4)){
		HX_STACK_LINE(530)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(530)
		{
			HX_STACK_LINE(530)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = _node->right->left;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(530)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(530)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = tmp8;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(530)
			bool tmp9 = (_node1 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(530)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(530)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(530)
			if ((tmp11)){
				HX_STACK_LINE(530)
				tmp6 = false;
			}
			else{
				HX_STACK_LINE(530)
				bool tmp12 = (_node1->color == true);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(530)
				tmp6 = tmp12;
			}
		}
		HX_STACK_LINE(530)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(530)
		tmp5 = !(tmp7);
	}
	else{
		HX_STACK_LINE(530)
		tmp5 = false;
	}
	HX_STACK_LINE(530)
	if ((tmp5)){
		HX_STACK_LINE(531)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = _node;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(531)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = this->move_red_right(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(531)
		_node = tmp7;
	}
	HX_STACK_LINE(534)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = _node->right;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(534)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = this->node_remove_largest(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(534)
	_node->right = tmp7;
	HX_STACK_LINE(535)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = _node;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(535)
	this->node_update_count(tmp8);
	HX_STACK_LINE(537)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = _node;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(537)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp10 = this->balance(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(537)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_remove_largest,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::node_remove( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node,::phoenix::geometry::GeometryKey _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","node_remove",0xdac30510,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.node_remove","luxe/structural/BalancedBST.hx",542,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(544)
	::phoenix::geometry::GeometryKey tmp = _key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(544)
	::phoenix::geometry::GeometryKey tmp1 = _node->key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(544)
	int tmp2 = this->compare(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(544)
	int comparison = tmp2;		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(546)
	bool tmp3 = (comparison < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(546)
	if ((tmp3)){
		HX_STACK_LINE(548)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(548)
		{
			HX_STACK_LINE(548)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(548)
			bool tmp5 = (_node1 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(548)
			if ((tmp5)){
				HX_STACK_LINE(548)
				tmp4 = false;
			}
			else{
				HX_STACK_LINE(548)
				tmp4 = (_node1->color == true);
			}
		}
		HX_STACK_LINE(548)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(548)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(548)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(548)
		if ((tmp6)){
			HX_STACK_LINE(548)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(548)
			{
				HX_STACK_LINE(548)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = _node->left->left;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(548)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(548)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = tmp10;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(548)
				bool tmp11 = (_node1 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(548)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(548)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(548)
				if ((tmp13)){
					HX_STACK_LINE(548)
					tmp8 = false;
				}
				else{
					HX_STACK_LINE(548)
					bool tmp14 = (_node1->color == true);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(548)
					tmp8 = tmp14;
				}
			}
			HX_STACK_LINE(548)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(548)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(548)
			tmp7 = false;
		}
		HX_STACK_LINE(548)
		if ((tmp7)){
			HX_STACK_LINE(549)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = _node;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(549)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = this->move_red_left(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(549)
			_node = tmp9;
		}
		HX_STACK_LINE(552)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = _node->left;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(552)
		::phoenix::geometry::GeometryKey tmp9 = _key;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(552)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp10 = this->node_remove(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(552)
		_node->left = tmp10;
	}
	else{
		HX_STACK_LINE(556)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(556)
		{
			HX_STACK_LINE(556)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(556)
			bool tmp5 = (_node1 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(556)
			if ((tmp5)){
				HX_STACK_LINE(556)
				tmp4 = false;
			}
			else{
				HX_STACK_LINE(556)
				tmp4 = (_node1->color == true);
			}
		}
		HX_STACK_LINE(556)
		if ((tmp4)){
			HX_STACK_LINE(557)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(557)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = this->rotate_right(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(557)
			_node = tmp6;
		}
		HX_STACK_LINE(560)
		::phoenix::geometry::GeometryKey tmp5 = _key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(560)
		::phoenix::geometry::GeometryKey tmp6 = _node->key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(560)
		int tmp7 = this->compare(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(560)
		int comparison1 = tmp7;		HX_STACK_VAR(comparison1,"comparison1");
		HX_STACK_LINE(562)
		bool tmp8 = (comparison1 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(562)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(562)
		if ((tmp8)){
			HX_STACK_LINE(562)
			tmp9 = (_node->right == null());
		}
		else{
			HX_STACK_LINE(562)
			tmp9 = false;
		}
		HX_STACK_LINE(562)
		if ((tmp9)){
			HX_STACK_LINE(563)
			return null();
		}
		HX_STACK_LINE(566)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(566)
		{
			HX_STACK_LINE(566)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(566)
			bool tmp11 = (_node1 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(566)
			if ((tmp11)){
				HX_STACK_LINE(566)
				tmp10 = false;
			}
			else{
				HX_STACK_LINE(566)
				tmp10 = (_node1->color == true);
			}
		}
		HX_STACK_LINE(566)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(566)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(566)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(566)
		if ((tmp12)){
			HX_STACK_LINE(566)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(566)
			{
				HX_STACK_LINE(566)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp15 = _node->right->left;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(566)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(566)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = tmp16;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(566)
				bool tmp17 = (_node1 == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(566)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(566)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(566)
				if ((tmp19)){
					HX_STACK_LINE(566)
					tmp14 = false;
				}
				else{
					HX_STACK_LINE(566)
					bool tmp20 = (_node1->color == true);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(566)
					tmp14 = tmp20;
				}
			}
			HX_STACK_LINE(566)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(566)
			tmp13 = !(tmp15);
		}
		else{
			HX_STACK_LINE(566)
			tmp13 = false;
		}
		HX_STACK_LINE(566)
		if ((tmp13)){
			HX_STACK_LINE(567)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp14 = _node;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(567)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp15 = this->move_red_right(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(567)
			_node = tmp15;
		}
		HX_STACK_LINE(570)
		::phoenix::geometry::GeometryKey tmp14 = _key;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(570)
		::phoenix::geometry::GeometryKey tmp15 = _node->key;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(570)
		int tmp16 = this->compare(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(570)
		int comparison2 = tmp16;		HX_STACK_VAR(comparison2,"comparison2");
		HX_STACK_LINE(571)
		bool tmp17 = (comparison2 == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(571)
		if ((tmp17)){
			HX_STACK_LINE(573)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp18 = _node->right;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(573)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp19 = this->node_smallest(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(573)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _n = tmp19;		HX_STACK_VAR(_n,"_n");
			HX_STACK_LINE(574)
			_node->key = _n->key;
			HX_STACK_LINE(575)
			_node->value = _n->value;
			HX_STACK_LINE(577)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp20 = _node->right;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(577)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp21 = this->node_remove_smallest(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(577)
			_node->right = tmp21;
		}
		else{
			HX_STACK_LINE(580)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp18 = _node->right;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(580)
			::phoenix::geometry::GeometryKey tmp19 = _key;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(580)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp20 = this->node_remove(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(580)
			_node->right = tmp20;
		}
	}
	HX_STACK_LINE(585)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = _node;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(585)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = this->balance(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(585)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,node_remove,return )

bool BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::is_red( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","is_red",0xd983a0ad,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.is_red","luxe/structural/BalancedBST.hx",589,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(591)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(591)
	if ((tmp)){
		HX_STACK_LINE(592)
		return false;
	}
	HX_STACK_LINE(595)
	bool tmp1 = (_node->color == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(595)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,is_red,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::rotate_left( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","rotate_left",0xea10309a,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.rotate_left","luxe/structural/BalancedBST.hx",599,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(601)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _n = _node->right;		HX_STACK_VAR(_n,"_n");
	HX_STACK_LINE(604)
	_n->color = _node->color;
	HX_STACK_LINE(605)
	_node->color = true;
	HX_STACK_LINE(607)
	_node->right = _n->left;
	HX_STACK_LINE(608)
	_n->left = _node;
	HX_STACK_LINE(611)
	_n->nodecount = _node->nodecount;
	HX_STACK_LINE(612)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = _node;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(612)
	this->node_update_count(tmp);
	HX_STACK_LINE(614)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = _n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(614)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,rotate_left,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::rotate_right( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","rotate_right",0x5b2763e9,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.rotate_right","luxe/structural/BalancedBST.hx",618,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(620)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _n = _node->left;		HX_STACK_VAR(_n,"_n");
	HX_STACK_LINE(623)
	_n->color = _node->color;
	HX_STACK_LINE(624)
	_node->color = true;
	HX_STACK_LINE(626)
	_node->left = _n->right;
	HX_STACK_LINE(627)
	_n->right = _node;
	HX_STACK_LINE(630)
	_n->nodecount = _node->nodecount;
	HX_STACK_LINE(631)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = _node;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(631)
	this->node_update_count(tmp);
	HX_STACK_LINE(633)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = _n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(633)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,rotate_right,return )

Void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::swap_color( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
{
		HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","swap_color",0x4e348968,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.swap_color","luxe/structural/BalancedBST.hx",637,0xa0b365fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_node,"_node")
		HX_STACK_LINE(639)
		bool tmp = _node->color;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(639)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(639)
		_node->color = tmp1;
		HX_STACK_LINE(640)
		bool tmp2 = _node->left->color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(640)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(640)
		_node->left->color = tmp3;
		HX_STACK_LINE(641)
		bool tmp4 = _node->right->color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(641)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(641)
		_node->right->color = tmp5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,swap_color,(void))

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::move_red_left( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","move_red_left",0x490225d2,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.move_red_left","luxe/structural/BalancedBST.hx",645,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(647)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = _node;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(647)
	this->swap_color(tmp);
	HX_STACK_LINE(649)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(649)
	{
		HX_STACK_LINE(649)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = _node->right->left;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(649)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = tmp2;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(649)
		bool tmp3 = (_node1 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(649)
		if ((tmp3)){
			HX_STACK_LINE(649)
			tmp1 = false;
		}
		else{
			HX_STACK_LINE(649)
			tmp1 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(649)
	if ((tmp1)){
		HX_STACK_LINE(650)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = _node->right;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(650)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp3 = this->rotate_right(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(650)
		_node->right = tmp3;
		HX_STACK_LINE(651)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = _node;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(651)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = this->rotate_left(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(651)
		_node = tmp5;
	}
	HX_STACK_LINE(654)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = _node;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(654)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,move_red_left,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::move_red_right( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","move_red_right",0x0febffb1,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.move_red_right","luxe/structural/BalancedBST.hx",657,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(659)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = _node;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(659)
	this->swap_color(tmp);
	HX_STACK_LINE(661)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(661)
	{
		HX_STACK_LINE(661)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = _node->left->left;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(661)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = tmp2;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(661)
		bool tmp3 = (_node1 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(661)
		if ((tmp3)){
			HX_STACK_LINE(661)
			tmp1 = false;
		}
		else{
			HX_STACK_LINE(661)
			tmp1 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(661)
	if ((tmp1)){
		HX_STACK_LINE(662)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = _node;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(662)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp3 = this->rotate_right(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(662)
		_node = tmp3;
	}
	HX_STACK_LINE(665)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = _node;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(665)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,move_red_right,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::balance( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","balance",0x9525f68b,"luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.balance","luxe/structural/BalancedBST.hx",668,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(670)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(670)
	{
		HX_STACK_LINE(670)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(670)
		bool tmp1 = (_node1 == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(670)
		if ((tmp1)){
			HX_STACK_LINE(670)
			tmp = false;
		}
		else{
			HX_STACK_LINE(670)
			tmp = (_node1->color == true);
		}
	}
	HX_STACK_LINE(670)
	if ((tmp)){
		HX_STACK_LINE(671)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = _node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(671)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = this->rotate_left(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(671)
		_node = tmp2;
	}
	HX_STACK_LINE(674)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(674)
	{
		HX_STACK_LINE(674)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(674)
		bool tmp2 = (_node1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(674)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(674)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(674)
		if ((tmp4)){
			HX_STACK_LINE(674)
			tmp1 = false;
		}
		else{
			HX_STACK_LINE(674)
			tmp1 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(674)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(674)
	if ((tmp1)){
		HX_STACK_LINE(674)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp3 = _node->left->left;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(674)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(674)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = tmp4;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(674)
		bool tmp5 = (_node1 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(674)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(674)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(674)
		if ((tmp7)){
			HX_STACK_LINE(674)
			tmp2 = false;
		}
		else{
			HX_STACK_LINE(674)
			tmp2 = (_node1->color == true);
		}
	}
	else{
		HX_STACK_LINE(674)
		tmp2 = false;
	}
	HX_STACK_LINE(674)
	if ((tmp2)){
		HX_STACK_LINE(675)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp3 = _node;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(675)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = this->rotate_right(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(675)
		_node = tmp4;
	}
	HX_STACK_LINE(678)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(678)
	{
		HX_STACK_LINE(678)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(678)
		bool tmp4 = (_node1 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(678)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(678)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(678)
		if ((tmp6)){
			HX_STACK_LINE(678)
			tmp3 = false;
		}
		else{
			HX_STACK_LINE(678)
			tmp3 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(678)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(678)
	if ((tmp3)){
		HX_STACK_LINE(678)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(678)
		bool tmp5 = (_node1 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(678)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(678)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(678)
		if ((tmp7)){
			HX_STACK_LINE(678)
			tmp4 = false;
		}
		else{
			HX_STACK_LINE(678)
			tmp4 = (_node1->color == true);
		}
	}
	else{
		HX_STACK_LINE(678)
		tmp4 = false;
	}
	HX_STACK_LINE(678)
	if ((tmp4)){
		HX_STACK_LINE(679)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(679)
		this->swap_color(tmp5);
	}
	HX_STACK_LINE(682)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = _node;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(682)
	this->node_update_count(tmp5);
	HX_STACK_LINE(684)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = _node;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(684)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,balance,return )


BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj()
{
}

void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(compare,"compare");
	HX_MARK_MEMBER_NAME(empty,"empty");
	HX_MARK_MEMBER_NAME(_array,"_array");
	HX_MARK_END_CLASS();
}

void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(compare,"compare");
	HX_VISIT_MEMBER_NAME(empty,"empty");
	HX_VISIT_MEMBER_NAME(_array,"_array");
}

Dynamic BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"find") ) { return find_dyn(); }
		if (HX_FIELD_EQ(inName,"rank") ) { return rank_dyn(); }
		if (HX_FIELD_EQ(inName,"ceil") ) { return ceil_dyn(); }
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return inCallProp == hx::paccAlways ? get_empty() : empty; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth_dyn(); }
		if (HX_FIELD_EQ(inName,"floor") ) { return floor_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { return _array; }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"select") ) { return select_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"is_red") ) { return is_red_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare; }
		if (HX_FIELD_EQ(inName,"largest") ) { return largest_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		if (HX_FIELD_EQ(inName,"balance") ) { return balance_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"smallest") ) { return smallest_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_empty") ) { return get_empty_dyn(); }
		if (HX_FIELD_EQ(inName,"node_find") ) { return node_find_dyn(); }
		if (HX_FIELD_EQ(inName,"node_rank") ) { return node_rank_dyn(); }
		if (HX_FIELD_EQ(inName,"node_ceil") ) { return node_ceil_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"node_depth") ) { return node_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"node_count") ) { return node_count_dyn(); }
		if (HX_FIELD_EQ(inName,"node_floor") ) { return node_floor_dyn(); }
		if (HX_FIELD_EQ(inName,"swap_color") ) { return swap_color_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"node_insert") ) { return node_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"node_select") ) { return node_select_dyn(); }
		if (HX_FIELD_EQ(inName,"node_remove") ) { return node_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate_left") ) { return rotate_left_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"node_largest") ) { return node_largest_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate_right") ) { return rotate_right_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"traverse_node") ) { return traverse_node_dyn(); }
		if (HX_FIELD_EQ(inName,"node_smallest") ) { return node_smallest_dyn(); }
		if (HX_FIELD_EQ(inName,"move_red_left") ) { return move_red_left_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"remove_largest") ) { return remove_largest_dyn(); }
		if (HX_FIELD_EQ(inName,"move_red_right") ) { return move_red_right_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"remove_smallest") ) { return remove_smallest_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"node_update_count") ) { return node_update_count_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"node_remove_largest") ) { return node_remove_largest_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"node_remove_smallest") ) { return node_remove_smallest_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { empty=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { _array=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { compare=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"));
	outFields->push(HX_HCSTRING("_array","\xda","\xb4","\x76","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry*/ ,(int)offsetof(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,compare),HX_HCSTRING("compare","\xa5","\x18","\x69","\x83")},
	{hx::fsBool,(int)offsetof(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,empty),HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,_array),HX_HCSTRING("_array","\xda","\xb4","\x76","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("_array","\xda","\xb4","\x76","\x21"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("find","\x39","\xd0","\xbb","\x43"),
	HX_HCSTRING("rank","\xac","\x4d","\xa4","\x4b"),
	HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a"),
	HX_HCSTRING("smallest","\xdf","\x8d","\xe1","\xa5"),
	HX_HCSTRING("largest","\x1c","\x3d","\xbc","\x3b"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("remove_smallest","\x7a","\x40","\xc3","\x8c"),
	HX_HCSTRING("remove_largest","\xe1","\x16","\x19","\x66"),
	HX_HCSTRING("floor","\xcc","\xd1","\x96","\x02"),
	HX_HCSTRING("ceil","\x05","\x1f","\xbd","\x41"),
	HX_HCSTRING("toArray","\x1e","\xba","\x13","\xf2"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("traverse_node","\xef","\xc2","\x11","\x17"),
	HX_HCSTRING("get_empty","\xe4","\x96","\x83","\xb3"),
	HX_HCSTRING("node_depth","\xc6","\xaf","\x69","\xa9"),
	HX_HCSTRING("node_count","\x92","\x03","\xa3","\x1c"),
	HX_HCSTRING("node_insert","\x16","\x6f","\x64","\xc3"),
	HX_HCSTRING("node_update_count","\x76","\xae","\x3a","\x97"),
	HX_HCSTRING("node_find","\xd6","\x5a","\xd5","\x07"),
	HX_HCSTRING("node_rank","\x49","\xd8","\xbd","\x0f"),
	HX_HCSTRING("node_select","\xd9","\x46","\xba","\x8f"),
	HX_HCSTRING("node_smallest","\xfc","\x2a","\x71","\x9c"),
	HX_HCSTRING("node_largest","\x9f","\x72","\x7b","\xec"),
	HX_HCSTRING("node_floor","\x8f","\x90","\xd6","\xd4"),
	HX_HCSTRING("node_ceil","\xa2","\xa9","\xd6","\x05"),
	HX_HCSTRING("node_remove_smallest","\xfd","\x30","\xc8","\x80"),
	HX_HCSTRING("node_remove_largest","\xbe","\xe7","\xaa","\x91"),
	HX_HCSTRING("node_remove","\x21","\xc8","\x0f","\x2a"),
	HX_HCSTRING("is_red","\x3c","\xb7","\xaf","\x71"),
	HX_HCSTRING("rotate_left","\xab","\xf3","\x5c","\x39"),
	HX_HCSTRING("rotate_right","\xb8","\x4f","\x05","\x6f"),
	HX_HCSTRING("swap_color","\x77","\x93","\x70","\x93"),
	HX_HCSTRING("move_red_left","\x23","\x8f","\x52","\x97"),
	HX_HCSTRING("move_red_right","\x40","\xbd","\xf7","\x47"),
	HX_HCSTRING("balance","\x1c","\x9d","\x8d","\x23"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass,"__mClass");
};

#endif

hx::Class BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass;

void BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.structural.BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","\xdd","\x32","\x9e","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj >;
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
} // end namespace structural
