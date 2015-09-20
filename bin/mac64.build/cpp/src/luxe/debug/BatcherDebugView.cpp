#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_debug_BatcherDebugView
#include <luxe/debug/BatcherDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
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
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
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
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
#ifndef INCLUDED_phoenix_geometry_LineGeometry
#include <phoenix/geometry/LineGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextGeometry
#include <phoenix/geometry/TextGeometry.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLTO
#include <snow/modules/opengl/native/GLTO.h>
#endif
namespace luxe{
namespace debug{

Void BatcherDebugView_obj::__construct()
{
HX_STACK_FRAME("luxe.debug.BatcherDebugView","new",0xed05fff6,"luxe.debug.BatcherDebugView.new","luxe/debug/BatcherDebugView.hx",11,0xdc49bab8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(63)
	this->as_immediate = false;
	HX_STACK_LINE(35)
	this->dragging = false;
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	this->set_name(HX_HCSTRING("Batcher Debug","\xda","\xb7","\xfe","\xa3"));
}
;
	return null();
}

//BatcherDebugView_obj::~BatcherDebugView_obj() { }

Dynamic BatcherDebugView_obj::__CreateEmpty() { return  new BatcherDebugView_obj; }
hx::ObjectPtr< BatcherDebugView_obj > BatcherDebugView_obj::__new()
{  hx::ObjectPtr< BatcherDebugView_obj > _result_ = new BatcherDebugView_obj();
	_result_->__construct();
	return _result_;}

Dynamic BatcherDebugView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BatcherDebugView_obj > _result_ = new BatcherDebugView_obj();
	_result_->__construct();
	return _result_;}

Void BatcherDebugView_obj::create( ){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","create",0x7eca9926,"luxe.debug.BatcherDebugView.create","luxe/debug/BatcherDebugView.hx",20,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",24,0xdc49bab8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("camera_name","\x65","\x11","\x29","\x5d") , HX_HCSTRING("batcher_debug_view","\xe9","\x1c","\x00","\xaa"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(24)
		Dynamic tmp1 = _Function_1_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		::phoenix::Camera tmp2 = ::phoenix::Camera_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Camera &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",22,0xdc49bab8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("debug_batcher_view","\xe9","\x36","\x04","\x56"),false);
					__result->Add(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7") , tmp2,false);
					__result->Add(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f") , (int)1000,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(22)
		Dynamic tmp3 = _Function_1_2::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		::phoenix::Batcher tmp4 = tmp->create_batcher(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		this->batcher = tmp4;
	}
return null();
}


Void BatcherDebugView_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","refresh",0x4e318c71,"luxe.debug.BatcherDebugView.refresh","luxe/debug/BatcherDebugView.hx",30,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		this->clear_batcher_tree();
		HX_STACK_LINE(32)
		this->draw_batcher_tree();
	}
return null();
}


Void BatcherDebugView_obj::onmousedown( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","onmousedown",0x5ec63d9e,"luxe.debug.BatcherDebugView.onmousedown","luxe/debug/BatcherDebugView.hx",39,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(40)
		::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::phoenix::Vector _this = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(40)
			tmp = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
		}
		HX_STACK_LINE(40)
		this->dragmstart = tmp;
		HX_STACK_LINE(41)
		::phoenix::Vector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			::phoenix::Batcher tmp2 = this->batcher;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			::phoenix::Vector tmp3 = tmp2->view->get_pos();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(41)
			::phoenix::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(41)
			tmp1 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
		}
		HX_STACK_LINE(41)
		this->dragstart = tmp1;
		HX_STACK_LINE(42)
		this->dragging = true;
	}
return null();
}


Void BatcherDebugView_obj::onmouseup( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","onmouseup",0x175fa497,"luxe.debug.BatcherDebugView.onmouseup","luxe/debug/BatcherDebugView.hx",45,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(45)
		this->dragging = false;
	}
return null();
}


Void BatcherDebugView_obj::onmousemove( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","onmousemove",0x64b9284d,"luxe.debug.BatcherDebugView.onmousemove","luxe/debug/BatcherDebugView.hx",47,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(48)
		bool tmp = this->dragging;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		if ((tmp)){
			HX_STACK_LINE(49)
			::phoenix::Vector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				::phoenix::Vector a = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(49)
				::phoenix::Vector tmp2 = this->dragmstart;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(49)
				::phoenix::Vector b = tmp2;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(49)
				Float tmp3 = (a->x - b->x);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(49)
				Float tmp4 = (a->y - b->y);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(49)
				Float tmp5 = (a->z - b->z);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(49)
				tmp1 = ::phoenix::Vector_obj::__new(tmp3,tmp4,tmp5,null());
			}
			HX_STACK_LINE(49)
			::phoenix::Vector diff = tmp1;		HX_STACK_VAR(diff,"diff");
			HX_STACK_LINE(50)
			::phoenix::Batcher tmp2 = this->batcher;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(50)
			::phoenix::Vector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				::phoenix::Vector tmp4 = this->dragstart;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(50)
				::phoenix::Vector a = tmp4;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(50)
				Float tmp5 = (a->x - diff->x);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(50)
				Float tmp6 = (a->y - diff->y);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(50)
				Float tmp7 = (a->z - diff->z);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(50)
				tmp3 = ::phoenix::Vector_obj::__new(tmp5,tmp6,tmp7,null());
			}
			HX_STACK_LINE(50)
			tmp2->view->set_pos(tmp3);
		}
	}
return null();
}


Void BatcherDebugView_obj::onmousewheel( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","onmousewheel",0x7a9e83df,"luxe.debug.BatcherDebugView.onmousewheel","luxe/debug/BatcherDebugView.hx",54,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(55)
		bool tmp = (e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		if ((tmp)){
			HX_STACK_LINE(56)
			::phoenix::Batcher tmp1 = this->batcher;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(56)
			::phoenix::Camera _g = tmp1->view;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			Float tmp2 = (_g->zoom - ((Float)0.1));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			_g->set_zoom(tmp2);
		}
		else{
			HX_STACK_LINE(58)
			::phoenix::Batcher tmp1 = this->batcher;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(58)
			::phoenix::Camera _g = tmp1->view;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			Float tmp2 = (_g->zoom + ((Float)0.1));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			_g->set_zoom(tmp2);
		}
	}
return null();
}


Void BatcherDebugView_obj::clear_batcher_tree( ){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","clear_batcher_tree",0x9faccb92,"luxe.debug.BatcherDebugView.clear_batcher_tree","luxe/debug/BatcherDebugView.hx",65,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		::phoenix::geometry::CompositeGeometry tmp = this->_tree_geom;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		if ((tmp1)){
			HX_STACK_LINE(67)
			::phoenix::geometry::CompositeGeometry tmp2 = this->_tree_geom;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			tmp2->drop(null());
			HX_STACK_LINE(68)
			this->_tree_geom = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BatcherDebugView_obj,clear_batcher_tree,(void))

::String BatcherDebugView_obj::keystr( ::phoenix::geometry::GeometryKey key,::phoenix::geometry::GeometryKey key2){
	HX_STACK_FRAME("luxe.debug.BatcherDebugView","keystr",0x42b5de9c,"luxe.debug.BatcherDebugView.keystr","luxe/debug/BatcherDebugView.hx",72,0xdc49bab8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(key2,"key2")
	HX_STACK_LINE(74)
	::String tmp = (HX_HCSTRING("ts: ","\xe5","\x35","\x04","\x4d") + key->timestamp);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::String tmp1 = (tmp + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	::String tmp2 = (tmp1 + HX_HCSTRING("seq: ","\x05","\x34","\x2d","\x7a"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	int tmp3 = key->sequence;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(74)
	::String tmp5 = (tmp4 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(74)
	::String tmp6 = (tmp5 + HX_HCSTRING("primitive_type: ","\xb8","\xc3","\xde","\xd5"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(76)
	int tmp7 = key->primitive_type;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(74)
	::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(74)
	::String tmp9 = (tmp8 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(76)
	int tmp10 = key->primitive_type;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(74)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(74)
	::String tmp12 = (tmp11 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(74)
	::String tmp13 = (tmp12 + HX_HCSTRING("texture: ","\x41","\x28","\x49","\xaf"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(77)
	bool tmp14 = (key->texture == null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(77)
	::String tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(77)
	if ((tmp14)){
		HX_STACK_LINE(77)
		tmp15 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
	}
	else{
		HX_STACK_LINE(77)
		::snow::modules::opengl::native::GLTO tmp16 = key->texture->texture;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(77)
		tmp15 = ::Std_obj::string(tmp16);
	}
	HX_STACK_LINE(74)
	::String tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(74)
	::String tmp17 = (tmp16 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(74)
	::String tmp18 = (tmp17 + HX_HCSTRING("texture id: ","\xa6","\x48","\xf8","\x17"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(78)
	bool tmp19 = (key->texture == null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(78)
	::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(78)
	if ((tmp19)){
		HX_STACK_LINE(78)
		tmp20 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
	}
	else{
		HX_STACK_LINE(78)
		tmp20 = key->texture->id;
	}
	HX_STACK_LINE(74)
	::String tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(74)
	::String tmp22 = (tmp21 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(74)
	::String tmp23 = (tmp22 + HX_HCSTRING("shader: ","\x0b","\xc5","\x2a","\x36"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(79)
	bool tmp24 = (key->shader == null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(79)
	::String tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(79)
	if ((tmp24)){
		HX_STACK_LINE(79)
		tmp25 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
	}
	else{
		HX_STACK_LINE(79)
		tmp25 = key->shader->id;
	}
	HX_STACK_LINE(74)
	::String tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(74)
	::String tmp27 = (tmp26 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(74)
	::String tmp28 = (tmp27 + HX_HCSTRING("group: ","\xa5","\x73","\xf7","\x86"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(80)
	int tmp29 = key->group;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(74)
	::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(74)
	::String tmp31 = (tmp30 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(74)
	::String tmp32 = (tmp31 + HX_HCSTRING("depth: ","\x69","\xaa","\x4a","\x6a"));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(81)
	Float tmp33 = key->depth;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(74)
	::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(74)
	::String tmp35 = (tmp34 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(74)
	::String tmp36 = (tmp35 + HX_HCSTRING("clip: ","\x76","\xf5","\x57","\x0a"));		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(82)
	bool tmp37 = key->clip;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(82)
	::String tmp38 = ::Std_obj::string(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(74)
	::String tmp39 = (tmp36 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(73)
	return tmp39;
}


HX_DEFINE_DYNAMIC_FUNC2(BatcherDebugView_obj,keystr,return )

Void BatcherDebugView_obj::draw_geom_node( bool l,::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _leaf,::phoenix::Vector _p,hx::Null< Float >  __o__bbw){
Float _bbw = __o__bbw.Default(20);
	HX_STACK_FRAME("luxe.debug.BatcherDebugView","draw_geom_node",0xc8abfe94,"luxe.debug.BatcherDebugView.draw_geom_node","luxe/debug/BatcherDebugView.hx",85,0xdc49bab8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_ARG(_leaf,"_leaf")
	HX_STACK_ARG(_p,"_p")
	HX_STACK_ARG(_bbw,"_bbw")
{
		HX_STACK_LINE(87)
		Float _bw = (int)128;		HX_STACK_VAR(_bw,"_bw");
		HX_STACK_LINE(88)
		Float tmp = (Float(_bw) / Float((int)2));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		Float _bwhalf = tmp;		HX_STACK_VAR(_bwhalf,"_bwhalf");
		HX_STACK_LINE(89)
		Float _bh = (int)128;		HX_STACK_VAR(_bh,"_bh");
		HX_STACK_LINE(91)
		::phoenix::geometry::Geometry _g = _leaf->value;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		::phoenix::Color tmp1 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,((Float)0.4));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		::phoenix::Color tmp2 = tmp1->rgb((int)16777215);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		::phoenix::Color c = tmp2;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(95)
		bool tmp3 = _g->dropped;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		if ((tmp3)){
			HX_STACK_LINE(96)
			::phoenix::Color tmp4 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			::phoenix::Color tmp5 = tmp4->rgb((int)13369344);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			c = tmp5;
		}
		HX_STACK_LINE(99)
		::phoenix::geometry::CompositeGeometry tmp4 = this->_tree_geom;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		::luxe::Draw tmp5 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(101)
		bool tmp6 = this->as_immediate;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(102)
		Float tmp7 = (_p->x - _bwhalf);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(102)
		Float tmp8 = _p->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(103)
		Float tmp9 = _bw;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(103)
		Float tmp10 = _bh;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(104)
		::phoenix::Color tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(105)
		::phoenix::Batcher tmp12 = this->batcher;		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_1{
			inline static Dynamic Block( bool &tmp6,Float &tmp9,::phoenix::Color &tmp11,Float &tmp10,Float &tmp7,Float &tmp8,::phoenix::Batcher &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",100,0xdc49bab8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , tmp6,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp9,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp10,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp11,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp12,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.4),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(100)
		Dynamic tmp13 = _Function_1_1::Block(tmp6,tmp9,tmp11,tmp10,tmp7,tmp8,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(100)
		::phoenix::geometry::RectangleGeometry tmp14 = tmp5->rectangle(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(99)
		tmp4->add_geometry(tmp14);
		HX_STACK_LINE(110)
		::phoenix::geometry::CompositeGeometry tmp15 = this->_tree_geom;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(111)
		::luxe::Draw tmp16 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(112)
		bool tmp17 = this->as_immediate;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(113)
		Float tmp18 = (_p->x - _bwhalf);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(113)
		Float tmp19 = _p->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(113)
		Float tmp20 = _bw;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(113)
		Float tmp21 = _bh;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(113)
		::phoenix::Rectangle tmp22 = ::phoenix::Rectangle_obj::__new(tmp18,tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(115)
		::phoenix::Color tmp23 = c;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(116)
		::phoenix::Batcher tmp24 = this->batcher;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(118)
		::phoenix::geometry::GeometryKey tmp25 = _leaf->key;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(118)
		::phoenix::geometry::GeometryKey tmp26 = _g->key;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(118)
		::String tmp27 = this->keystr(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Rectangle &tmp22,bool &tmp17,::phoenix::Color &tmp23,::phoenix::Batcher &tmp24,::String &tmp27){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",111,0xdc49bab8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , tmp17,false);
					__result->Add(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66") , tmp22,false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , ((Dynamic)((int)13)),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp23,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp24,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.4),false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp27,false);
					__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , (int)2,false);
					__result->Add(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53") , (int)2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(111)
		Dynamic tmp28 = _Function_1_2::Block(tmp22,tmp17,tmp23,tmp24,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(111)
		::phoenix::geometry::TextGeometry tmp29 = tmp16->text(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(110)
		tmp15->add_geometry(tmp29);
		HX_STACK_LINE(124)
		::phoenix::Vector tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			::phoenix::Vector tmp31 = ::phoenix::Vector_obj::__new(_p->x,_p->y,_p->z,_p->w);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(124)
			::phoenix::Vector _this = tmp31;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(124)
			Float _x = _p->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(124)
			Float tmp32 = (_p->y - (int)16);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(124)
			Float _y = tmp32;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(124)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(124)
			_this->ignore_listeners = true;
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				_this->x = _x;
				HX_STACK_LINE(124)
				bool tmp33 = _this->_construct;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(124)
				if ((tmp33)){
					HX_STACK_LINE(124)
					_this->x;
				}
				else{
					HX_STACK_LINE(124)
					bool tmp34 = (_this->listen_x != null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(124)
					bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(124)
					if ((tmp34)){
						HX_STACK_LINE(124)
						bool tmp36 = _this->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(124)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(124)
						tmp35 = !(tmp37);
					}
					else{
						HX_STACK_LINE(124)
						tmp35 = false;
					}
					HX_STACK_LINE(124)
					if ((tmp35)){
						HX_STACK_LINE(124)
						Float tmp36 = _x;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(124)
						_this->listen_x(tmp36);
					}
					HX_STACK_LINE(124)
					_this->x;
				}
			}
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				_this->y = _y;
				HX_STACK_LINE(124)
				bool tmp33 = _this->_construct;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(124)
				if ((tmp33)){
					HX_STACK_LINE(124)
					_this->y;
				}
				else{
					HX_STACK_LINE(124)
					bool tmp34 = (_this->listen_y != null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(124)
					bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(124)
					if ((tmp34)){
						HX_STACK_LINE(124)
						bool tmp36 = _this->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(124)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(124)
						tmp35 = !(tmp37);
					}
					else{
						HX_STACK_LINE(124)
						tmp35 = false;
					}
					HX_STACK_LINE(124)
					if ((tmp35)){
						HX_STACK_LINE(124)
						Float tmp36 = _y;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(124)
						_this->listen_y(tmp36);
					}
					HX_STACK_LINE(124)
					_this->y;
				}
			}
			HX_STACK_LINE(124)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(124)
			bool tmp33 = (_this->listen_x != null());		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(124)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(124)
			if ((tmp33)){
				HX_STACK_LINE(124)
				bool tmp35 = _this->ignore_listeners;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(124)
				bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(124)
				tmp34 = !(tmp36);
			}
			else{
				HX_STACK_LINE(124)
				tmp34 = false;
			}
			HX_STACK_LINE(124)
			if ((tmp34)){
				HX_STACK_LINE(124)
				Float tmp35 = _this->x;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(124)
				_this->listen_x(tmp35);
			}
			HX_STACK_LINE(124)
			bool tmp35 = (_this->listen_y != null());		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(124)
			bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(124)
			if ((tmp35)){
				HX_STACK_LINE(124)
				bool tmp37 = _this->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(124)
				bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(124)
				tmp36 = !(tmp38);
			}
			else{
				HX_STACK_LINE(124)
				tmp36 = false;
			}
			HX_STACK_LINE(124)
			if ((tmp36)){
				HX_STACK_LINE(124)
				Float tmp37 = _this->y;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(124)
				_this->listen_y(tmp37);
			}
			HX_STACK_LINE(124)
			tmp30 = _this;
		}
		HX_STACK_LINE(124)
		::phoenix::Vector t = tmp30;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(125)
		::phoenix::Vector tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::phoenix::Vector tmp32 = ::phoenix::Vector_obj::__new(_p->x,_p->y,_p->z,_p->w);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(125)
			::phoenix::Vector _this = tmp32;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(125)
			Float _x = _p->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(125)
			Float tmp33 = (_p->y + _bw);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(125)
			Float tmp34 = (tmp33 + (int)2);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(125)
			Float _y = tmp34;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(125)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(125)
			_this->ignore_listeners = true;
			HX_STACK_LINE(125)
			{
				HX_STACK_LINE(125)
				_this->x = _x;
				HX_STACK_LINE(125)
				bool tmp35 = _this->_construct;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(125)
				if ((tmp35)){
					HX_STACK_LINE(125)
					_this->x;
				}
				else{
					HX_STACK_LINE(125)
					bool tmp36 = (_this->listen_x != null());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(125)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(125)
					if ((tmp36)){
						HX_STACK_LINE(125)
						bool tmp38 = _this->ignore_listeners;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(125)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(125)
						tmp37 = !(tmp39);
					}
					else{
						HX_STACK_LINE(125)
						tmp37 = false;
					}
					HX_STACK_LINE(125)
					if ((tmp37)){
						HX_STACK_LINE(125)
						Float tmp38 = _x;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(125)
						_this->listen_x(tmp38);
					}
					HX_STACK_LINE(125)
					_this->x;
				}
			}
			HX_STACK_LINE(125)
			{
				HX_STACK_LINE(125)
				_this->y = _y;
				HX_STACK_LINE(125)
				bool tmp35 = _this->_construct;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(125)
				if ((tmp35)){
					HX_STACK_LINE(125)
					_this->y;
				}
				else{
					HX_STACK_LINE(125)
					bool tmp36 = (_this->listen_y != null());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(125)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(125)
					if ((tmp36)){
						HX_STACK_LINE(125)
						bool tmp38 = _this->ignore_listeners;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(125)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(125)
						tmp37 = !(tmp39);
					}
					else{
						HX_STACK_LINE(125)
						tmp37 = false;
					}
					HX_STACK_LINE(125)
					if ((tmp37)){
						HX_STACK_LINE(125)
						Float tmp38 = _y;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(125)
						_this->listen_y(tmp38);
					}
					HX_STACK_LINE(125)
					_this->y;
				}
			}
			HX_STACK_LINE(125)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(125)
			bool tmp35 = (_this->listen_x != null());		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(125)
			bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(125)
			if ((tmp35)){
				HX_STACK_LINE(125)
				bool tmp37 = _this->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(125)
				bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(125)
				tmp36 = !(tmp38);
			}
			else{
				HX_STACK_LINE(125)
				tmp36 = false;
			}
			HX_STACK_LINE(125)
			if ((tmp36)){
				HX_STACK_LINE(125)
				Float tmp37 = _this->x;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(125)
				_this->listen_x(tmp37);
			}
			HX_STACK_LINE(125)
			bool tmp37 = (_this->listen_y != null());		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(125)
			bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(125)
			if ((tmp37)){
				HX_STACK_LINE(125)
				bool tmp39 = _this->ignore_listeners;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(125)
				bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(125)
				tmp38 = !(tmp40);
			}
			else{
				HX_STACK_LINE(125)
				tmp38 = false;
			}
			HX_STACK_LINE(125)
			if ((tmp38)){
				HX_STACK_LINE(125)
				Float tmp39 = _this->y;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(125)
				_this->listen_y(tmp39);
			}
			HX_STACK_LINE(125)
			tmp31 = _this;
		}
		HX_STACK_LINE(125)
		::phoenix::Vector t2 = tmp31;		HX_STACK_VAR(t2,"t2");
		HX_STACK_LINE(126)
		int talign = (int)2;		HX_STACK_VAR(talign,"talign");
		HX_STACK_LINE(132)
		::phoenix::geometry::CompositeGeometry tmp32 = this->_tree_geom;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(133)
		::luxe::Draw tmp33 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(134)
		bool tmp34 = this->as_immediate;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(135)
		::phoenix::Vector tmp35 = t;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(137)
		::phoenix::Color tmp36 = c;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(138)
		::phoenix::Batcher tmp37 = this->batcher;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(140)
		::String tmp38 = _g->id;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(141)
		int tmp39 = talign;		HX_STACK_VAR(tmp39,"tmp39");
		struct _Function_1_3{
			inline static Dynamic Block( ::phoenix::Color &tmp36,::String &tmp38,bool &tmp34,::phoenix::Batcher &tmp37,int &tmp39,::phoenix::Vector &tmp35){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",133,0xdc49bab8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , tmp34,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp35,false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , ((Dynamic)((int)13)),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp36,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp37,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.4),false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp38,false);
					__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , tmp39,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(133)
		Dynamic tmp40 = _Function_1_3::Block(tmp36,tmp38,tmp34,tmp37,tmp39,tmp35);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(133)
		::phoenix::geometry::TextGeometry tmp41 = tmp33->text(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(132)
		tmp32->add_geometry(tmp41);
		HX_STACK_LINE(145)
		::phoenix::Color tmp42 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,((Float)0.4));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(145)
		::phoenix::Color tmp43 = tmp42->rgb((int)16750916);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(145)
		::phoenix::Color c2 = tmp43;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(146)
		::String notes_l = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");		HX_STACK_VAR(notes_l,"notes_l");
		HX_STACK_LINE(147)
		::String notes_r = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");		HX_STACK_VAR(notes_r,"notes_r");
		HX_STACK_LINE(149)
		bool tmp44 = (_leaf->left != null());		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(149)
		if ((tmp44)){
			HX_STACK_LINE(150)
			notes_l = HX_HCSTRING("node","\x02","\x0a","\x0a","\x49");
			HX_STACK_LINE(151)
			::phoenix::Renderer tmp45 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(151)
			::phoenix::geometry::GeometryKey tmp46 = _leaf->key;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(151)
			::phoenix::geometry::GeometryKey tmp47 = _leaf->left->key;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(151)
			int tmp48 = tmp45->batcher->compare_rule(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(151)
			int compare = tmp48;		HX_STACK_VAR(compare,"compare");
			HX_STACK_LINE(152)
			::phoenix::Renderer tmp49 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(152)
			int tmp50 = compare;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(152)
			::String tmp51 = tmp49->batcher->compare_rule_to_string(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(152)
			notes_l = tmp51;
		}
		HX_STACK_LINE(155)
		bool tmp45 = (_leaf->right != null());		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(155)
		if ((tmp45)){
			HX_STACK_LINE(156)
			notes_r = HX_HCSTRING("node","\x02","\x0a","\x0a","\x49");
			HX_STACK_LINE(157)
			::phoenix::Renderer tmp46 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(157)
			::phoenix::geometry::GeometryKey tmp47 = _leaf->key;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(157)
			::phoenix::geometry::GeometryKey tmp48 = _leaf->right->key;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(157)
			int tmp49 = tmp46->batcher->compare_rule(tmp47,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(157)
			int compare = tmp49;		HX_STACK_VAR(compare,"compare");
			HX_STACK_LINE(158)
			::phoenix::Renderer tmp50 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(158)
			int tmp51 = compare;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(158)
			::String tmp52 = tmp50->batcher->compare_rule_to_string(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(158)
			notes_r = tmp52;
		}
		HX_STACK_LINE(161)
		::phoenix::geometry::CompositeGeometry tmp46 = this->_tree_geom;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(162)
		::luxe::Draw tmp47 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(163)
		bool tmp48 = this->as_immediate;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(164)
		::phoenix::Vector tmp49 = t2;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(166)
		::phoenix::Color tmp50 = c2;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(167)
		::phoenix::Batcher tmp51 = this->batcher;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(169)
		::String tmp52 = (notes_l + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(169)
		::String tmp53 = notes_r;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(169)
		::String tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(170)
		int tmp55 = talign;		HX_STACK_VAR(tmp55,"tmp55");
		struct _Function_1_4{
			inline static Dynamic Block( bool &tmp48,::String &tmp54,int &tmp55,::phoenix::Vector &tmp49,::phoenix::Color &tmp50,::phoenix::Batcher &tmp51){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",162,0xdc49bab8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , tmp48,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp49,false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , ((Dynamic)((int)13)),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp50,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp51,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.4),false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp54,false);
					__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , tmp55,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(162)
		Dynamic tmp56 = _Function_1_4::Block(tmp48,tmp54,tmp55,tmp49,tmp50,tmp51);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(162)
		::phoenix::geometry::TextGeometry tmp57 = tmp47->text(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(161)
		tmp46->add_geometry(tmp57);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BatcherDebugView_obj,draw_geom_node,(void))

Void BatcherDebugView_obj::draw_geom_leaf( bool L,::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _leaf,::phoenix::Vector _p){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","draw_geom_leaf",0xc751f830,"luxe.debug.BatcherDebugView.draw_geom_leaf","luxe/debug/BatcherDebugView.hx",175,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(L,"L")
		HX_STACK_ARG(_leaf,"_leaf")
		HX_STACK_ARG(_p,"_p")
		HX_STACK_LINE(177)
		bool tmp = (_leaf == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		if ((tmp)){
			HX_STACK_LINE(178)
			return null();
		}
		HX_STACK_LINE(181)
		Float tmp1 = (Float(_leaf->nodecount) / Float((int)20));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		Float _bw = tmp1;		HX_STACK_VAR(_bw,"_bw");
		HX_STACK_LINE(182)
		int tmp2 = (_leaf->nodecount * (int)25);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		Float _bwb = tmp2;		HX_STACK_VAR(_bwb,"_bwb");
		HX_STACK_LINE(183)
		Float _bh = (int)128;		HX_STACK_VAR(_bh,"_bh");
		HX_STACK_LINE(184)
		Float _bh2 = (int)148;		HX_STACK_VAR(_bh2,"_bh2");
		HX_STACK_LINE(185)
		Float tmp3 = (Float(_bw) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		Float _bwhalf = tmp3;		HX_STACK_VAR(_bwhalf,"_bwhalf");
		HX_STACK_LINE(187)
		::phoenix::Color tmp4 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,((Float)0.4));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		::phoenix::Color tmp5 = tmp4->rgb((int)16777215);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		::phoenix::Color c = tmp5;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(189)
		bool tmp6 = (_leaf != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(189)
		if ((tmp6)){
			HX_STACK_LINE(191)
			bool tmp7 = L;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(191)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = _leaf;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(191)
			::phoenix::Vector tmp9 = _p;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(191)
			Float tmp10 = _bw;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(191)
			this->draw_geom_node(tmp7,tmp8,tmp9,tmp10);
			HX_STACK_LINE(193)
			bool tmp11 = (_leaf->left != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(193)
			if ((tmp11)){
				HX_STACK_LINE(195)
				::phoenix::Renderer tmp12 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(195)
				::phoenix::geometry::GeometryKey tmp13 = _leaf->left->key;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(195)
				::phoenix::geometry::GeometryKey tmp14 = _leaf->key;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(195)
				int tmp15 = tmp12->batcher->geometry_compare(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(195)
				bool tmp16 = (tmp15 < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(195)
				if ((tmp16)){
					HX_STACK_LINE(196)
					::phoenix::Color tmp17 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(196)
					::phoenix::Color tmp18 = tmp17->rgb((int)52224);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(196)
					c = tmp18;
				}
				else{
					HX_STACK_LINE(198)
					::phoenix::Color tmp17 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(198)
					::phoenix::Color tmp18 = tmp17->rgb((int)13369344);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(198)
					c = tmp18;
				}
				HX_STACK_LINE(201)
				::phoenix::geometry::CompositeGeometry tmp17 = this->_tree_geom;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(202)
				::luxe::Draw tmp18 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(203)
				bool tmp19 = this->as_immediate;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(204)
				Float tmp20 = (_p->x - _bwhalf);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(204)
				Float tmp21 = (_p->y + _bh);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(204)
				::phoenix::Vector tmp22 = ::phoenix::Vector_obj::__new(tmp20,tmp21,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(205)
				Float tmp23 = (_p->x - _bwb);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(205)
				Float tmp24 = (_p->y + _bh2);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(205)
				::phoenix::Vector tmp25 = ::phoenix::Vector_obj::__new(tmp23,tmp24,null(),null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(206)
				::phoenix::Color tmp26 = c;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(207)
				::phoenix::Batcher tmp27 = this->batcher;		HX_STACK_VAR(tmp27,"tmp27");
				struct _Function_3_1{
					inline static Dynamic Block( ::phoenix::Vector &tmp22,bool &tmp19,::phoenix::Color &tmp26,::phoenix::Vector &tmp25,::phoenix::Batcher &tmp27){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",202,0xdc49bab8)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , tmp19,false);
							__result->Add(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00") , tmp22,false);
							__result->Add(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00") , tmp25,false);
							__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp26,false);
							__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp27,false);
							__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.4),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(202)
				Dynamic tmp28 = _Function_3_1::Block(tmp22,tmp19,tmp26,tmp25,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(202)
				::phoenix::geometry::LineGeometry tmp29 = tmp18->line(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(201)
				tmp17->add_geometry(tmp29);
				HX_STACK_LINE(212)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp30 = _leaf->left;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(212)
				Float tmp31 = (_p->x - _bwb);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(212)
				Float tmp32 = (_p->y + _bh2);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(212)
				::phoenix::Vector tmp33 = ::phoenix::Vector_obj::__new(tmp31,tmp32,null(),null());		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(212)
				this->draw_geom_leaf(true,tmp30,tmp33);
			}
			HX_STACK_LINE(214)
			bool tmp12 = (_leaf->right != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(214)
			if ((tmp12)){
				HX_STACK_LINE(216)
				::phoenix::Renderer tmp13 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(216)
				::phoenix::geometry::GeometryKey tmp14 = _leaf->right->key;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(216)
				::phoenix::geometry::GeometryKey tmp15 = _leaf->key;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(216)
				int tmp16 = tmp13->batcher->geometry_compare(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(216)
				bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(216)
				if ((tmp17)){
					HX_STACK_LINE(217)
					::phoenix::Color tmp18 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(217)
					::phoenix::Color tmp19 = tmp18->rgb((int)52224);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(217)
					c = tmp19;
				}
				else{
					HX_STACK_LINE(219)
					::phoenix::Color tmp18 = ::phoenix::Color_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(219)
					::phoenix::Color tmp19 = tmp18->rgb((int)13369344);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(219)
					c = tmp19;
				}
				HX_STACK_LINE(222)
				::phoenix::geometry::CompositeGeometry tmp18 = this->_tree_geom;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(223)
				::luxe::Draw tmp19 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(224)
				bool tmp20 = this->as_immediate;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(225)
				Float tmp21 = (_p->x + _bwhalf);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(225)
				Float tmp22 = (_p->y + _bh);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(225)
				::phoenix::Vector tmp23 = ::phoenix::Vector_obj::__new(tmp21,tmp22,null(),null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(226)
				Float tmp24 = (_p->x + _bwb);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(226)
				Float tmp25 = (_p->y + _bh2);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(226)
				::phoenix::Vector tmp26 = ::phoenix::Vector_obj::__new(tmp24,tmp25,null(),null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(227)
				::phoenix::Color tmp27 = c;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(228)
				::phoenix::Batcher tmp28 = this->batcher;		HX_STACK_VAR(tmp28,"tmp28");
				struct _Function_3_1{
					inline static Dynamic Block( ::phoenix::Batcher &tmp28,bool &tmp20,::phoenix::Vector &tmp23,::phoenix::Vector &tmp26,::phoenix::Color &tmp27){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",223,0xdc49bab8)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , tmp20,false);
							__result->Add(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00") , tmp23,false);
							__result->Add(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00") , tmp26,false);
							__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp27,false);
							__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp28,false);
							__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.4),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(223)
				Dynamic tmp29 = _Function_3_1::Block(tmp28,tmp20,tmp23,tmp26,tmp27);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(223)
				::phoenix::geometry::LineGeometry tmp30 = tmp19->line(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(222)
				tmp18->add_geometry(tmp30);
				HX_STACK_LINE(233)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp31 = _leaf->right;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(233)
				Float tmp32 = (_p->x + _bwb);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(233)
				Float tmp33 = (_p->y + _bh2);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(233)
				::phoenix::Vector tmp34 = ::phoenix::Vector_obj::__new(tmp32,tmp33,null(),null());		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(233)
				this->draw_geom_leaf(false,tmp31,tmp34);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BatcherDebugView_obj,draw_geom_leaf,(void))

Void BatcherDebugView_obj::draw_batcher_tree( ){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","draw_batcher_tree",0x1ae0d3a7,"luxe.debug.BatcherDebugView.draw_batcher_tree","luxe/debug/BatcherDebugView.hx",238,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(240)
		this->_tree_geom = null();
		HX_STACK_LINE(242)
		::phoenix::Batcher tmp = this->batcher;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		bool tmp1 = this->as_immediate;		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Batcher &tmp,bool &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/BatcherDebugView.hx",241,0xdc49bab8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp,false);
					__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , tmp1,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.4),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(241)
		Dynamic tmp2 = _Function_1_1::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(241)
		::phoenix::geometry::CompositeGeometry tmp3 = ::phoenix::geometry::CompositeGeometry_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(241)
		this->_tree_geom = tmp3;
		HX_STACK_LINE(248)
		::luxe::Core tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(248)
		int tmp5 = tmp4->screen->get_w();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(248)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(248)
		::luxe::Debug tmp7 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(248)
		Float tmp8 = tmp7->padding->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(248)
		Float tmp9 = (tmp8 * (int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(248)
		Float tmp10 = (tmp9 + (int)10);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(248)
		::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(tmp6,tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(248)
		::phoenix::Vector _p = tmp11;		HX_STACK_VAR(_p,"_p");
		HX_STACK_LINE(250)
		::phoenix::Renderer tmp12 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(250)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp13 = tmp12->batcher->geometry;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(250)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp13->root;		HX_STACK_VAR(_node,"_node");
		HX_STACK_LINE(252)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp14 = _node;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(252)
		::phoenix::Vector tmp15 = _p;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(252)
		this->draw_geom_leaf(true,tmp14,tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BatcherDebugView_obj,draw_batcher_tree,(void))

Void BatcherDebugView_obj::process( ){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","process",0x525b5505,"luxe.debug.BatcherDebugView.process","luxe/debug/BatcherDebugView.hx",256,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(257)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		if ((tmp)){
			HX_STACK_LINE(258)
			::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(258)
			bool tmp2 = tmp1->batcher->tree_changed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(258)
			if ((tmp2)){
				HX_STACK_LINE(259)
				this->refresh();
			}
		}
	}
return null();
}


Void BatcherDebugView_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","show",0x7b8a48a7,"luxe.debug.BatcherDebugView.show","luxe/debug/BatcherDebugView.hx",264,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(265)
		this->super::show();
		HX_STACK_LINE(266)
		this->refresh();
	}
return null();
}


Void BatcherDebugView_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.BatcherDebugView","hide",0x7445a86c,"luxe.debug.BatcherDebugView.hide","luxe/debug/BatcherDebugView.hx",269,0xdc49bab8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(270)
		this->super::hide();
		HX_STACK_LINE(271)
		this->clear_batcher_tree();
	}
return null();
}



BatcherDebugView_obj::BatcherDebugView_obj()
{
}

void BatcherDebugView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BatcherDebugView);
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(dragging,"dragging");
	HX_MARK_MEMBER_NAME(dragstart,"dragstart");
	HX_MARK_MEMBER_NAME(dragmstart,"dragmstart");
	HX_MARK_MEMBER_NAME(_tree_geom,"_tree_geom");
	HX_MARK_MEMBER_NAME(as_immediate,"as_immediate");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BatcherDebugView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(dragging,"dragging");
	HX_VISIT_MEMBER_NAME(dragstart,"dragstart");
	HX_VISIT_MEMBER_NAME(dragmstart,"dragmstart");
	HX_VISIT_MEMBER_NAME(_tree_geom,"_tree_geom");
	HX_VISIT_MEMBER_NAME(as_immediate,"as_immediate");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BatcherDebugView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"keystr") ) { return keystr_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dragging") ) { return dragging; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragstart") ) { return dragstart; }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dragmstart") ) { return dragmstart; }
		if (HX_FIELD_EQ(inName,"_tree_geom") ) { return _tree_geom; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"as_immediate") ) { return as_immediate; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"draw_geom_node") ) { return draw_geom_node_dyn(); }
		if (HX_FIELD_EQ(inName,"draw_geom_leaf") ) { return draw_geom_leaf_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"draw_batcher_tree") ) { return draw_batcher_tree_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"clear_batcher_tree") ) { return clear_batcher_tree_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BatcherDebugView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dragging") ) { dragging=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragstart") ) { dragstart=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dragmstart") ) { dragmstart=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tree_geom") ) { _tree_geom=inValue.Cast< ::phoenix::geometry::CompositeGeometry >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"as_immediate") ) { as_immediate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BatcherDebugView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BatcherDebugView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"));
	outFields->push(HX_HCSTRING("dragging","\xcf","\x3c","\x8c","\x37"));
	outFields->push(HX_HCSTRING("dragstart","\xee","\x73","\x33","\x53"));
	outFields->push(HX_HCSTRING("dragmstart","\xc9","\x63","\xc9","\x8c"));
	outFields->push(HX_HCSTRING("_tree_geom","\x3e","\x48","\xf3","\x2a"));
	outFields->push(HX_HCSTRING("as_immediate","\x24","\x47","\x06","\xf9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(BatcherDebugView_obj,batcher),HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")},
	{hx::fsBool,(int)offsetof(BatcherDebugView_obj,dragging),HX_HCSTRING("dragging","\xcf","\x3c","\x8c","\x37")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(BatcherDebugView_obj,dragstart),HX_HCSTRING("dragstart","\xee","\x73","\x33","\x53")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(BatcherDebugView_obj,dragmstart),HX_HCSTRING("dragmstart","\xc9","\x63","\xc9","\x8c")},
	{hx::fsObject /*::phoenix::geometry::CompositeGeometry*/ ,(int)offsetof(BatcherDebugView_obj,_tree_geom),HX_HCSTRING("_tree_geom","\x3e","\x48","\xf3","\x2a")},
	{hx::fsBool,(int)offsetof(BatcherDebugView_obj,as_immediate),HX_HCSTRING("as_immediate","\x24","\x47","\x06","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("dragging","\xcf","\x3c","\x8c","\x37"),
	HX_HCSTRING("dragstart","\xee","\x73","\x33","\x53"),
	HX_HCSTRING("dragmstart","\xc9","\x63","\xc9","\x8c"),
	HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"),
	HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("_tree_geom","\x3e","\x48","\xf3","\x2a"),
	HX_HCSTRING("as_immediate","\x24","\x47","\x06","\xf9"),
	HX_HCSTRING("clear_batcher_tree","\x68","\x02","\x5a","\xe6"),
	HX_HCSTRING("keystr","\x72","\xac","\xfa","\x3f"),
	HX_HCSTRING("draw_geom_node","\x6a","\x92","\xd3","\x50"),
	HX_HCSTRING("draw_geom_leaf","\x06","\x8c","\x79","\x4f"),
	HX_HCSTRING("draw_batcher_tree","\x91","\xc9","\xea","\x9c"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BatcherDebugView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BatcherDebugView_obj::__mClass,"__mClass");
};

#endif

hx::Class BatcherDebugView_obj::__mClass;

void BatcherDebugView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug.BatcherDebugView","\x04","\x8d","\x65","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BatcherDebugView_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BatcherDebugView_obj >;
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
} // end namespace debug
