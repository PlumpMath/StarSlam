#include <hxcpp.h>

#ifndef INCLUDED_phoenix_BatchGroup
#include <phoenix/BatchGroup.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
namespace phoenix{

Void BatchGroup_obj::__construct(Dynamic _pre,Dynamic _post)
{
HX_STACK_FRAME("phoenix.BatchGroup","new",0xf6a272b6,"phoenix.BatchGroup.new","phoenix/Batcher.hx",55,0xa9541457)
HX_STACK_THIS(this)
HX_STACK_ARG(_pre,"_pre")
HX_STACK_ARG(_post,"_post")
{
	HX_STACK_LINE(56)
	this->pre_render = _pre;
	HX_STACK_LINE(57)
	this->post_render = _post;
}
;
	return null();
}

//BatchGroup_obj::~BatchGroup_obj() { }

Dynamic BatchGroup_obj::__CreateEmpty() { return  new BatchGroup_obj; }
hx::ObjectPtr< BatchGroup_obj > BatchGroup_obj::__new(Dynamic _pre,Dynamic _post)
{  hx::ObjectPtr< BatchGroup_obj > _result_ = new BatchGroup_obj();
	_result_->__construct(_pre,_post);
	return _result_;}

Dynamic BatchGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BatchGroup_obj > _result_ = new BatchGroup_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


BatchGroup_obj::BatchGroup_obj()
{
}

void BatchGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BatchGroup);
	HX_MARK_MEMBER_NAME(pre_render,"pre_render");
	HX_MARK_MEMBER_NAME(post_render,"post_render");
	HX_MARK_END_CLASS();
}

void BatchGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pre_render,"pre_render");
	HX_VISIT_MEMBER_NAME(post_render,"post_render");
}

Dynamic BatchGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"pre_render") ) { return pre_render; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"post_render") ) { return post_render; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BatchGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"pre_render") ) { pre_render=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"post_render") ) { post_render=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BatchGroup_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BatchGroup_obj,pre_render),HX_HCSTRING("pre_render","\x32","\xb7","\x9c","\x14")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BatchGroup_obj,post_render),HX_HCSTRING("post_render","\x95","\x44","\x87","\xe2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pre_render","\x32","\xb7","\x9c","\x14"),
	HX_HCSTRING("post_render","\x95","\x44","\x87","\xe2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BatchGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BatchGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class BatchGroup_obj::__mClass;

void BatchGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.BatchGroup","\xc4","\x9f","\xa1","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BatchGroup_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BatchGroup_obj >;
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
