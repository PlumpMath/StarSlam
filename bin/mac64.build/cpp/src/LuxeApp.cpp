#include <hxcpp.h>

#ifndef INCLUDED_LuxeApp
#include <LuxeApp.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif

Void LuxeApp_obj::__construct()
{
	return null();
}

//LuxeApp_obj::~LuxeApp_obj() { }

Dynamic LuxeApp_obj::__CreateEmpty() { return  new LuxeApp_obj; }
hx::ObjectPtr< LuxeApp_obj > LuxeApp_obj::__new()
{  hx::ObjectPtr< LuxeApp_obj > _result_ = new LuxeApp_obj();
	_result_->__construct();
	return _result_;}

Dynamic LuxeApp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LuxeApp_obj > _result_ = new LuxeApp_obj();
	_result_->__construct();
	return _result_;}

::Main LuxeApp_obj::_game;

::luxe::Core LuxeApp_obj::_core;

::snow::Snow LuxeApp_obj::_snow;

Dynamic LuxeApp_obj::_conf;

Void LuxeApp_obj::main( ){
{
		HX_STACK_FRAME("LuxeApp","main",0x0a926d1c,"LuxeApp.main","LuxeApp.hx",16,0x7a4c8133)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","LuxeApp.hx",21,0x7a4c8133)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)960,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)640,false);
					__result->Add(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9") , false,false);
					__result->Add(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9") , true,false);
					__result->Add(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17") , false,false);
					__result->Add(HX_HCSTRING("title","\x98","\x15","\x3b","\x10") , HX_HCSTRING("luxe app","\x37","\x1f","\x54","\x5a"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(21)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","LuxeApp.hx",20,0x7a4c8133)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52") , tmp1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(20)
		Dynamic tmp2 = _Function_1_2::Block(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		::LuxeApp_obj::_conf = tmp2;
		HX_STACK_LINE(39)
		::snow::Snow tmp3 = ::snow::Snow_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		::LuxeApp_obj::_snow = tmp3;
		HX_STACK_LINE(41)
		::Main tmp4 = ::Main_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		::LuxeApp_obj::_game = tmp4;
		HX_STACK_LINE(43)
		::Main tmp5 = ::LuxeApp_obj::_game;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		Dynamic tmp6 = ::LuxeApp_obj::_conf;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		::luxe::Core tmp7 = ::luxe::Core_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		::LuxeApp_obj::_core = tmp7;
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","LuxeApp.hx",45,0x7a4c8133)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("has_loop","\xa9","\x9c","\xf3","\xf3") , true,false);
					__result->Add(HX_HCSTRING("config_custom_assets","\x14","\x71","\x35","\x57") , false,false);
					__result->Add(HX_HCSTRING("config_custom_runtime","\x27","\x0b","\x12","\xb0") , false,false);
					__result->Add(HX_HCSTRING("config_runtime_path","\x89","\x68","\xc3","\xcc") , HX_HCSTRING("config.json","\x54","\xdb","\x08","\xa4"),false);
					__result->Add(HX_HCSTRING("config_assets_path","\xe4","\x1d","\x1f","\x80") , HX_HCSTRING("manifest","\xaf","\xfb","\x29","\xd0"),false);
					__result->Add(HX_HCSTRING("app_package","\xa8","\x8a","\xe2","\xb9") , HX_HCSTRING("org.ledoux.starslam","\xb4","\xfb","\x9c","\x77"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(45)
		Dynamic tmp8 = _Function_1_3::Block();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		Dynamic _snow_config = tmp8;		HX_STACK_VAR(_snow_config,"_snow_config");
		HX_STACK_LINE(55)
		::snow::Snow tmp9 = ::LuxeApp_obj::_snow;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(55)
		Dynamic tmp10 = _snow_config;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		::luxe::Core tmp11 = ::LuxeApp_obj::_core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(55)
		tmp9->init(tmp10,tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LuxeApp_obj,main,(void))


LuxeApp_obj::LuxeApp_obj()
{
}

bool LuxeApp_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_game") ) { outValue = _game; return true;  }
		if (HX_FIELD_EQ(inName,"_core") ) { outValue = _core; return true;  }
		if (HX_FIELD_EQ(inName,"_snow") ) { outValue = _snow; return true;  }
		if (HX_FIELD_EQ(inName,"_conf") ) { outValue = _conf; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::Main*/ ,(void *) &LuxeApp_obj::_game,HX_HCSTRING("_game","\xd1","\x0f","\x70","\xf7")},
	{hx::fsObject /*::luxe::Core*/ ,(void *) &LuxeApp_obj::_core,HX_HCSTRING("_core","\x3e","\xd9","\xd5","\xf4")},
	{hx::fsObject /*::snow::Snow*/ ,(void *) &LuxeApp_obj::_snow,HX_HCSTRING("_snow","\x62","\x7e","\x68","\xff")},
	{hx::fsObject /*Dynamic*/ ,(void *) &LuxeApp_obj::_conf,HX_HCSTRING("_conf","\xc3","\xd5","\xd5","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LuxeApp_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LuxeApp_obj::_game,"_game");
	HX_MARK_MEMBER_NAME(LuxeApp_obj::_core,"_core");
	HX_MARK_MEMBER_NAME(LuxeApp_obj::_snow,"_snow");
	HX_MARK_MEMBER_NAME(LuxeApp_obj::_conf,"_conf");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LuxeApp_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LuxeApp_obj::_game,"_game");
	HX_VISIT_MEMBER_NAME(LuxeApp_obj::_core,"_core");
	HX_VISIT_MEMBER_NAME(LuxeApp_obj::_snow,"_snow");
	HX_VISIT_MEMBER_NAME(LuxeApp_obj::_conf,"_conf");
};

#endif

hx::Class LuxeApp_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_game","\xd1","\x0f","\x70","\xf7"),
	HX_HCSTRING("_core","\x3e","\xd9","\xd5","\xf4"),
	HX_HCSTRING("_snow","\x62","\x7e","\x68","\xff"),
	HX_HCSTRING("_conf","\xc3","\xd5","\xd5","\xf4"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void LuxeApp_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("LuxeApp","\x6b","\x56","\x2a","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LuxeApp_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LuxeApp_obj >;
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

