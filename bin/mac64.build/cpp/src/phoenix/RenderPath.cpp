#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_RenderPath
#include <phoenix/RenderPath.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
namespace phoenix{

Void RenderPath_obj::__construct(::phoenix::Renderer _renderer)
{
HX_STACK_FRAME("phoenix.RenderPath","new",0x7c190cac,"phoenix.RenderPath.new","phoenix/RenderPath.hx",13,0x9e7f7fa3)
HX_STACK_THIS(this)
HX_STACK_ARG(_renderer,"_renderer")
{
	HX_STACK_LINE(13)
	this->renderer = _renderer;
}
;
	return null();
}

//RenderPath_obj::~RenderPath_obj() { }

Dynamic RenderPath_obj::__CreateEmpty() { return  new RenderPath_obj; }
hx::ObjectPtr< RenderPath_obj > RenderPath_obj::__new(::phoenix::Renderer _renderer)
{  hx::ObjectPtr< RenderPath_obj > _result_ = new RenderPath_obj();
	_result_->__construct(_renderer);
	return _result_;}

Dynamic RenderPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderPath_obj > _result_ = new RenderPath_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void RenderPath_obj::render( Array< ::Dynamic > _batchers,::phoenix::RendererStats _stats){
{
		HX_STACK_FRAME("phoenix.RenderPath","render",0x4d8de68a,"phoenix.RenderPath.render","phoenix/RenderPath.hx",18,0x9e7f7fa3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_batchers,"_batchers")
		HX_STACK_ARG(_stats,"_stats")
		HX_STACK_LINE(18)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(18)
		while((true)){
			HX_STACK_LINE(18)
			bool tmp = (_g < _batchers->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(18)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(18)
			if ((tmp1)){
				HX_STACK_LINE(18)
				break;
			}
			HX_STACK_LINE(18)
			::phoenix::Batcher tmp2 = _batchers->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(18)
			::phoenix::Batcher batch = tmp2;		HX_STACK_VAR(batch,"batch");
			HX_STACK_LINE(18)
			++(_g);
			HX_STACK_LINE(19)
			bool tmp3 = batch->enabled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(19)
			if ((tmp3)){
				HX_STACK_LINE(22)
				::luxe::Debug tmp4 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(22)
				::String tmp5 = (HX_HCSTRING("batch.","\x34","\xdb","\xcf","\x55") + batch->name);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(22)
				tmp4->start(tmp5,null());
				HX_STACK_LINE(25)
				batch->draw(null());
				HX_STACK_LINE(28)
				int tmp6 = batch->geometry->size();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(28)
				hx::AddEq(_stats->geometry_count,tmp6);
				HX_STACK_LINE(29)
				hx::AddEq(_stats->dynamic_batched_count,batch->dynamic_batched_count);
				HX_STACK_LINE(30)
				hx::AddEq(_stats->static_batched_count,batch->static_batched_count);
				HX_STACK_LINE(31)
				hx::AddEq(_stats->visible_count,batch->visible_count);
				HX_STACK_LINE(32)
				hx::AddEq(_stats->draw_calls,batch->draw_calls);
				HX_STACK_LINE(33)
				hx::AddEq(_stats->vert_count,batch->vert_count);
				HX_STACK_LINE(37)
				::luxe::Debug tmp7 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(37)
				::String tmp8 = (HX_HCSTRING("batch.","\x34","\xdb","\xcf","\x55") + batch->name);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(37)
				tmp7->end(tmp8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RenderPath_obj,render,(void))


RenderPath_obj::RenderPath_obj()
{
}

void RenderPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderPath);
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_END_CLASS();
}

void RenderPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
}

Dynamic RenderPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::phoenix::Renderer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RenderPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void RenderPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Renderer*/ ,(int)offsetof(RenderPath_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderPath_obj::__mClass,"__mClass");
};

#endif

hx::Class RenderPath_obj::__mClass;

void RenderPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.RenderPath","\xba","\x86","\x1a","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &RenderPath_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderPath_obj >;
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
