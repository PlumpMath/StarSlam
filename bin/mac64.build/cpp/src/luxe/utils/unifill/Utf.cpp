#include <hxcpp.h>

#ifndef INCLUDED_luxe_utils_unifill_Utf
#include <luxe/utils/unifill/Utf.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{


static ::String sMemberFields[] = {
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("codeUnitAt","\xa4","\x71","\x4e","\x2b"),
	HX_HCSTRING("codePointAt","\xb6","\x47","\xf4","\x4b"),
	HX_HCSTRING("codePointWidthAt","\xf6","\x26","\x17","\x09"),
	HX_HCSTRING("codePointWidthBefore","\x02","\xe4","\x4d","\xc6"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf_obj::__mClass,"__mClass");
};

#endif

hx::Class Utf_obj::__mClass;

void Utf_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.unifill.Utf","\x17","\xc9","\xa7","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Utf_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
