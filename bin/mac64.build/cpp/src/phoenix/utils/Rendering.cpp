#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_phoenix_utils_Rendering
#include <phoenix/utils/Rendering.h>
#endif
namespace phoenix{
namespace utils{

Void Rendering_obj::__construct()
{
	return null();
}

//Rendering_obj::~Rendering_obj() { }

Dynamic Rendering_obj::__CreateEmpty() { return  new Rendering_obj; }
hx::ObjectPtr< Rendering_obj > Rendering_obj::__new()
{  hx::ObjectPtr< Rendering_obj > _result_ = new Rendering_obj();
	_result_->__construct();
	return _result_;}

Dynamic Rendering_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rendering_obj > _result_ = new Rendering_obj();
	_result_->__construct();
	return _result_;}

int Rendering_obj::gl_blend_mode_from_BlendMode( int _b){
	HX_STACK_FRAME("phoenix.utils.Rendering","gl_blend_mode_from_BlendMode",0xf5abd9d1,"phoenix.utils.Rendering.gl_blend_mode_from_BlendMode","phoenix/utils/Rendering.hx",9,0x8a2baeb0)
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(11)
	int tmp = _b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(13)
			return (int)0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(15)
			return (int)1;
		}
		;break;
		case (int)768: {
			HX_STACK_LINE(17)
			return (int)768;
		}
		;break;
		case (int)769: {
			HX_STACK_LINE(19)
			return (int)769;
		}
		;break;
		case (int)770: {
			HX_STACK_LINE(21)
			return (int)770;
		}
		;break;
		case (int)771: {
			HX_STACK_LINE(23)
			return (int)771;
		}
		;break;
		case (int)772: {
			HX_STACK_LINE(25)
			return (int)772;
		}
		;break;
		case (int)773: {
			HX_STACK_LINE(27)
			return (int)773;
		}
		;break;
		case (int)774: {
			HX_STACK_LINE(29)
			return (int)774;
		}
		;break;
		case (int)775: {
			HX_STACK_LINE(31)
			return (int)775;
		}
		;break;
		case (int)776: {
			HX_STACK_LINE(33)
			return (int)776;
		}
		;break;
	}
	HX_STACK_LINE(11)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Rendering_obj,gl_blend_mode_from_BlendMode,return )

int Rendering_obj::get_elements_for_type( int type,int length){
	HX_STACK_FRAME("phoenix.utils.Rendering","get_elements_for_type",0xb01f8cf1,"phoenix.utils.Rendering.get_elements_for_type","phoenix/utils/Rendering.hx",38,0x8a2baeb0)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(40)
	int tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(42)
			Float tmp1 = (Float(length) / Float((int)4));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			return tmp2;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(44)
			Float tmp1 = (Float(length) / Float((int)4));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(44)
			return tmp2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(46)
			Float tmp1 = (Float(length) / Float((int)4));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(46)
			int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			return tmp2;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(48)
			Float tmp1 = (Float(length) / Float((int)4));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(48)
			int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(48)
			return tmp2;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(50)
			Float tmp1 = (Float(length) / Float((int)4));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(50)
			int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(50)
			return tmp2;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(52)
			Float tmp1 = (Float(length) / Float((int)4));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(52)
			int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			return tmp2;
		}
		;break;
		default: {
			HX_STACK_LINE(54)
			Float tmp1 = (Float(length) / Float((int)4));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			return tmp2;
		}
	}
	HX_STACK_LINE(40)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Rendering_obj,get_elements_for_type,return )

Float Rendering_obj::fovx_to_y( Float fovx,Float aspect){
	HX_STACK_FRAME("phoenix.utils.Rendering","fovx_to_y",0xb6e51a8b,"phoenix.utils.Rendering.fovx_to_y","phoenix/utils/Rendering.hx",58,0x8a2baeb0)
	HX_STACK_ARG(fovx,"fovx")
	HX_STACK_ARG(aspect,"aspect")
	HX_STACK_LINE(59)
	Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	Float tmp1 = (Float((int)180) / Float(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	Float tmp2 = fovx;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	Float tmp3 = ::Math_obj::PI;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	Float tmp4 = (Float(tmp3) / Float((int)180));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(59)
	Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(59)
	Float tmp7 = ::Math_obj::tan(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(59)
	Float tmp8 = (Float((int)1) / Float(aspect));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(59)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(59)
	Float tmp10 = ::Math_obj::atan(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(59)
	Float tmp11 = ((int)2 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(59)
	Float tmp12 = (tmp1 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(59)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Rendering_obj,fovx_to_y,return )


Rendering_obj::Rendering_obj()
{
}

bool Rendering_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fovx_to_y") ) { outValue = fovx_to_y_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_elements_for_type") ) { outValue = get_elements_for_type_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"gl_blend_mode_from_BlendMode") ) { outValue = gl_blend_mode_from_BlendMode_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rendering_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rendering_obj::__mClass,"__mClass");
};

#endif

hx::Class Rendering_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("gl_blend_mode_from_BlendMode","\x73","\xba","\x54","\xcb"),
	HX_HCSTRING("get_elements_for_type","\x0f","\xec","\xf9","\x15"),
	HX_HCSTRING("fovx_to_y","\xa9","\xc4","\xd9","\xfe"),
	::String(null()) };

void Rendering_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.utils.Rendering","\xd0","\xe7","\x6b","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Rendering_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Rendering_obj >;
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
} // end namespace utils
