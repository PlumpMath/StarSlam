#include <hxcpp.h>

#ifndef INCLUDED_luxe_utils_unifill_CodePointIter
#include <luxe/utils/unifill/CodePointIter.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_InternalEncodingIter
#include <luxe/utils/unifill/InternalEncodingIter.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Utf
#include <luxe/utils/unifill/Utf.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Utf8
#include <luxe/utils/unifill/Utf8.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{

Void CodePointIter_obj::__construct(::String s)
{
HX_STACK_FRAME("luxe.utils.unifill.CodePointIter","new",0x0b9c58fd,"luxe.utils.unifill.CodePointIter.new","luxe/utils/unifill/CodePointIter.hx",7,0x99e093d6)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(8)
	this->s = s;
	HX_STACK_LINE(9)
	::luxe::utils::unifill::InternalEncodingIter tmp = ::luxe::utils::unifill::InternalEncodingIter_obj::__new(s,(int)0,s.length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	this->itr = tmp;
}
;
	return null();
}

//CodePointIter_obj::~CodePointIter_obj() { }

Dynamic CodePointIter_obj::__CreateEmpty() { return  new CodePointIter_obj; }
hx::ObjectPtr< CodePointIter_obj > CodePointIter_obj::__new(::String s)
{  hx::ObjectPtr< CodePointIter_obj > _result_ = new CodePointIter_obj();
	_result_->__construct(s);
	return _result_;}

Dynamic CodePointIter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CodePointIter_obj > _result_ = new CodePointIter_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool CodePointIter_obj::hasNext( ){
	HX_STACK_FRAME("luxe.utils.unifill.CodePointIter","hasNext",0x4c5c408a,"luxe.utils.unifill.CodePointIter.hasNext","luxe/utils/unifill/CodePointIter.hx",12,0x99e093d6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	{
		HX_STACK_LINE(13)
		::luxe::utils::unifill::InternalEncodingIter tmp1 = this->itr;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13)
		::luxe::utils::unifill::InternalEncodingIter _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(13)
		tmp = (_this->index < _this->endIndex);
	}
	HX_STACK_LINE(13)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CodePointIter_obj,hasNext,return )

int CodePointIter_obj::next( ){
	HX_STACK_FRAME("luxe.utils.unifill.CodePointIter","next",0x1d3185b6,"luxe.utils.unifill.CodePointIter.next","luxe/utils/unifill/CodePointIter.hx",16,0x99e093d6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			::luxe::utils::unifill::InternalEncodingIter tmp2 = this->itr;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(17)
			::luxe::utils::unifill::InternalEncodingIter _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(17)
			int i = _this->index;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(17)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				::luxe::utils::unifill::Utf8 tmp4 = ::luxe::utils::unifill::Utf8_obj::__new(_this->string);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(17)
				::luxe::utils::unifill::Utf8 u = tmp4;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(17)
				{
					HX_STACK_LINE(17)
					int tmp5 = _this->index;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(17)
					int tmp6 = u->str.cca(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(17)
					int c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(17)
					bool tmp7 = (c < (int)192);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(17)
					if ((tmp7)){
						HX_STACK_LINE(17)
						tmp3 = (int)1;
					}
					else{
						HX_STACK_LINE(17)
						bool tmp8 = (c < (int)224);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(17)
						if ((tmp8)){
							HX_STACK_LINE(17)
							tmp3 = (int)2;
						}
						else{
							HX_STACK_LINE(17)
							bool tmp9 = (c < (int)240);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(17)
							if ((tmp9)){
								HX_STACK_LINE(17)
								tmp3 = (int)3;
							}
							else{
								HX_STACK_LINE(17)
								bool tmp10 = (c < (int)248);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(17)
								if ((tmp10)){
									HX_STACK_LINE(17)
									tmp3 = (int)4;
								}
								else{
									HX_STACK_LINE(17)
									tmp3 = (int)1;
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(17)
			hx::AddEq(_this->index,tmp3);
			HX_STACK_LINE(17)
			tmp1 = i;
		}
		HX_STACK_LINE(17)
		int index = tmp1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(17)
		::String tmp2 = this->s;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		::luxe::utils::unifill::Utf8 tmp4 = ::luxe::utils::unifill::Utf8_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(17)
		::luxe::utils::unifill::Utf8 u = tmp4;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(17)
		int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(17)
		tmp = u->codePointAt(tmp5);
	}
	HX_STACK_LINE(17)
	int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CodePointIter_obj,next,return )


CodePointIter_obj::CodePointIter_obj()
{
}

void CodePointIter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CodePointIter);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(itr,"itr");
	HX_MARK_END_CLASS();
}

void CodePointIter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(itr,"itr");
}

Dynamic CodePointIter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"itr") ) { return itr; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CodePointIter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"itr") ) { itr=inValue.Cast< ::luxe::utils::unifill::InternalEncodingIter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CodePointIter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CodePointIter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("itr","\x27","\x12","\x50","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(CodePointIter_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{hx::fsObject /*::luxe::utils::unifill::InternalEncodingIter*/ ,(int)offsetof(CodePointIter_obj,itr),HX_HCSTRING("itr","\x27","\x12","\x50","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("itr","\x27","\x12","\x50","\x00"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CodePointIter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CodePointIter_obj::__mClass,"__mClass");
};

#endif

hx::Class CodePointIter_obj::__mClass;

void CodePointIter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.unifill.CodePointIter","\x8b","\x16","\xeb","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CodePointIter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CodePointIter_obj >;
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
} // end namespace utils
} // end namespace unifill
