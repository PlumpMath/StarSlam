#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_PromiseError
#include <snow/api/PromiseError.h>
#endif
#ifndef INCLUDED_snow_api_Promises
#include <snow/api/Promises.h>
#endif
namespace snow{
namespace api{

Void Promise_obj::__construct(Dynamic func)
{
HX_STACK_FRAME("snow.api.Promise","new",0xe10ada2e,"snow.api.Promise.new","snow/api/Promise.hx",25,0xcb181004)
HX_STACK_THIS(this)
HX_STACK_ARG(func,"func")
{
	HX_STACK_LINE(37)
	this->was_caught = false;
	HX_STACK_LINE(45)
	::snow::api::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	this->state = (int)0;
	HX_STACK_LINE(49)
	this->reject_reactions = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(50)
	this->fulfill_reactions = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(51)
	this->settle_reactions = cpp::ArrayBase_obj::__new();

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::snow::api::Promise,_g,Dynamic,func)
	int __ArgCount() const { return 0; }
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",53,0xcb181004)
		{
			HX_STACK_LINE(62)
			func(_g->onfulfill_dyn(),_g->onreject_dyn());
			HX_STACK_LINE(65)
			Dynamic tmp = ::snow::api::Promises_obj::next_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(65)
			::snow::api::Promises_obj::defer(tmp,null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(53)
	::snow::api::Promises_obj::queue( Dynamic(new _Function_1_1(_g,func)));
}
;
	return null();
}

//Promise_obj::~Promise_obj() { }

Dynamic Promise_obj::__CreateEmpty() { return  new Promise_obj; }
hx::ObjectPtr< Promise_obj > Promise_obj::__new(Dynamic func)
{  hx::ObjectPtr< Promise_obj > _result_ = new Promise_obj();
	_result_->__construct(func);
	return _result_;}

Dynamic Promise_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Promise_obj > _result_ = new Promise_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::snow::api::Promise Promise_obj::then( Dynamic on_fulfilled,Dynamic on_rejected){
	HX_STACK_FRAME("snow.api.Promise","then",0x0c6d8d4f,"snow.api.Promise.then","snow/api/Promise.hx",74,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_ARG(on_fulfilled,"on_fulfilled")
	HX_STACK_ARG(on_rejected,"on_rejected")
	HX_STACK_LINE(74)
	int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	int _g = tmp;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(74)
	int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	switch( (int)(tmp1)){
		case (int)0: {
			HX_STACK_LINE(77)
			Dynamic tmp2 = on_fulfilled;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			this->add_fulfill(tmp2);
			HX_STACK_LINE(78)
			Dynamic tmp3 = on_rejected;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			this->add_reject(tmp3);
			HX_STACK_LINE(79)
			::snow::api::Promise tmp4 = this->new_linked_promise();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			return tmp4;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(83)
			Dynamic tmp2 = on_fulfilled;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			Dynamic tmp3 = this->result;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			::snow::api::Promises_obj::defer(tmp2,tmp3);
			HX_STACK_LINE(84)
			Dynamic tmp4 = this->result;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			::snow::api::Promise tmp5 = ::snow::api::Promise_obj::resolve(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			return tmp5;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(88)
			Dynamic tmp2 = on_rejected;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			Dynamic tmp3 = this->result;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			::snow::api::Promises_obj::defer(tmp2,tmp3);
			HX_STACK_LINE(89)
			Dynamic tmp4 = this->result;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			::snow::api::Promise tmp5 = ::snow::api::Promise_obj::reject(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			return tmp5;
		}
		;break;
	}
	HX_STACK_LINE(74)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Promise_obj,then,return )

::snow::api::Promise Promise_obj::error( Dynamic on_rejected){
	HX_STACK_FRAME("snow.api.Promise","error",0x37116516,"snow.api.Promise.error","snow/api/Promise.hx",100,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_ARG(on_rejected,"on_rejected")
	HX_STACK_LINE(100)
	int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	int _g = tmp;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(100)
	int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	switch( (int)(tmp1)){
		case (int)0: {
			HX_STACK_LINE(103)
			Dynamic tmp2 = on_rejected;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			this->add_reject(tmp2);
			HX_STACK_LINE(104)
			::snow::api::Promise tmp3 = this->new_linked_resolve_empty();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(104)
			return tmp3;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(108)
			Dynamic tmp2 = this->result;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			::snow::api::Promise tmp3 = ::snow::api::Promise_obj::resolve(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			return tmp3;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(112)
			Dynamic tmp2 = on_rejected;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			Dynamic tmp3 = this->result;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			::snow::api::Promises_obj::defer(tmp2,tmp3);
			HX_STACK_LINE(113)
			Dynamic tmp4 = this->result;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(113)
			::snow::api::Promise tmp5 = ::snow::api::Promise_obj::reject(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			return tmp5;
		}
		;break;
	}
	HX_STACK_LINE(100)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,error,return )

::String Promise_obj::toString( ){
	HX_STACK_FRAME("snow.api.Promise","toString",0xf41b7c1e,"snow.api.Promise.toString","snow/api/Promise.hx",226,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_LINE(227)
	::String tmp = this->state_string();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	::String tmp1 = (HX_HCSTRING("Promise { state:","\x53","\xa9","\x1a","\x7e") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	::String tmp2 = (tmp1 + HX_HCSTRING(", result:","\xc9","\xa8","\x23","\xd3"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(227)
	Dynamic tmp3 = this->result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(227)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(227)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(227)
	::String tmp6 = (tmp5 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(227)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,toString,return )

Void Promise_obj::add_settle( Dynamic f){
{
		HX_STACK_FRAME("snow.api.Promise","add_settle",0xf8fc3b1b,"snow.api.Promise.add_settle","snow/api/Promise.hx",235,0xcb181004)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(237)
		int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		if ((tmp1)){
			HX_STACK_LINE(238)
			Dynamic tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(238)
			this->settle_reactions->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		}
		else{
			HX_STACK_LINE(240)
			Dynamic tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(240)
			Dynamic tmp3 = this->result;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(240)
			::snow::api::Promises_obj::defer(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,add_settle,(void))

::snow::api::Promise Promise_obj::new_linked_promise( ){
	HX_STACK_FRAME("snow.api.Promise","new_linked_promise",0x40dd1d26,"snow.api.Promise.new_linked_promise","snow/api/Promise.hx",247,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_LINE(247)
	::snow::api::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::api::Promise,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic f,Dynamic r){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",250,0xcb181004)
		HX_STACK_ARG(f,"f")
		HX_STACK_ARG(r,"r")
		{

			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,::snow::api::Promise,_g,Dynamic,r,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/api/Promise.hx",250,0xcb181004)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(251)
					bool tmp = (_g->state == (int)1);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(251)
					if ((tmp)){
						HX_STACK_LINE(252)
						Dynamic tmp1 = _g->result;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(252)
						f(tmp1);
					}
					else{
						HX_STACK_LINE(254)
						Dynamic tmp1 = _g->result;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(254)
						r(tmp1);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(250)
			_g->add_settle( Dynamic(new _Function_2_1(_g,r,f)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(249)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_promise,return )

::snow::api::Promise Promise_obj::new_linked_resolve( ){
	HX_STACK_FRAME("snow.api.Promise","new_linked_resolve",0xb0536277,"snow.api.Promise.new_linked_resolve","snow/api/Promise.hx",264,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_LINE(264)
	::snow::api::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::api::Promise,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic f,Dynamic r){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",266,0xcb181004)
		HX_STACK_ARG(f,"f")
		HX_STACK_ARG(r,"r")
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(Dynamic val){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/api/Promise.hx",266,0xcb181004)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(267)
					Dynamic tmp = val;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(267)
					f(tmp);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(266)
			_g->add_settle( Dynamic(new _Function_2_1(f)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(265)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_resolve,return )

::snow::api::Promise Promise_obj::new_linked_reject( ){
	HX_STACK_FRAME("snow.api.Promise","new_linked_reject",0x4d777c34,"snow.api.Promise.new_linked_reject","snow/api/Promise.hx",274,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_LINE(274)
	::snow::api::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::api::Promise,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic f,Dynamic r){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",276,0xcb181004)
		HX_STACK_ARG(f,"f")
		HX_STACK_ARG(r,"r")
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,r)
			int __ArgCount() const { return 1; }
			Void run(Dynamic val){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/api/Promise.hx",276,0xcb181004)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(277)
					Dynamic tmp = val;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(277)
					r(tmp);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(276)
			_g->add_settle( Dynamic(new _Function_2_1(r)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(275)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_reject,return )

::snow::api::Promise Promise_obj::new_linked_resolve_empty( ){
	HX_STACK_FRAME("snow.api.Promise","new_linked_resolve_empty",0x28449785,"snow.api.Promise.new_linked_resolve_empty","snow/api/Promise.hx",285,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_LINE(285)
	::snow::api::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::api::Promise,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic f,Dynamic r){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",287,0xcb181004)
		HX_STACK_ARG(f,"f")
		HX_STACK_ARG(r,"r")
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/api/Promise.hx",288,0xcb181004)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(288)
					f();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(287)
			_g->add_settle( Dynamic(new _Function_2_1(f)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(286)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_resolve_empty,return )

::snow::api::Promise Promise_obj::new_linked_reject_empty( ){
	HX_STACK_FRAME("snow.api.Promise","new_linked_reject_empty",0x845a1d02,"snow.api.Promise.new_linked_reject_empty","snow/api/Promise.hx",296,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	::snow::api::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::api::Promise,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic f,Dynamic r){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",298,0xcb181004)
		HX_STACK_ARG(f,"f")
		HX_STACK_ARG(r,"r")
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,r)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/api/Promise.hx",299,0xcb181004)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(299)
					r();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(298)
			_g->add_settle( Dynamic(new _Function_2_1(r)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(297)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_reject_empty,return )

Void Promise_obj::add_fulfill( Dynamic f){
{
		HX_STACK_FRAME("snow.api.Promise","add_fulfill",0x885e59b0,"snow.api.Promise.add_fulfill","snow/api/Promise.hx",306,0xcb181004)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(307)
		bool tmp = (f != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(307)
		if ((tmp)){
			HX_STACK_LINE(308)
			Dynamic tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(308)
			this->fulfill_reactions->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,add_fulfill,(void))

Void Promise_obj::add_reject( Dynamic f){
{
		HX_STACK_FRAME("snow.api.Promise","add_reject",0x8bf952ef,"snow.api.Promise.add_reject","snow/api/Promise.hx",313,0xcb181004)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(314)
		bool tmp = (f != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		if ((tmp)){
			HX_STACK_LINE(315)
			this->was_caught = true;
			HX_STACK_LINE(316)
			Dynamic tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(316)
			this->reject_reactions->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,add_reject,(void))

Void Promise_obj::onfulfill( Dynamic val){
{
		HX_STACK_FRAME("snow.api.Promise","onfulfill",0x5213e64f,"snow.api.Promise.onfulfill","snow/api/Promise.hx",323,0xcb181004)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(327)
		this->state = (int)1;
		HX_STACK_LINE(328)
		this->result = val;
		HX_STACK_LINE(330)
		while((true)){
			HX_STACK_LINE(330)
			int tmp = this->fulfill_reactions->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(330)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(330)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(330)
			if ((tmp2)){
				HX_STACK_LINE(330)
				break;
			}
			HX_STACK_LINE(331)
			Dynamic tmp3 = this->fulfill_reactions->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(331)
			Dynamic fn = tmp3;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(332)
			fn(this->result);
		}
		HX_STACK_LINE(335)
		this->onsettle();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,onfulfill,(void))

Void Promise_obj::onreject( Dynamic reason){
{
		HX_STACK_FRAME("snow.api.Promise","onreject",0x694a7f30,"snow.api.Promise.onreject","snow/api/Promise.hx",340,0xcb181004)
		HX_STACK_THIS(this)
		HX_STACK_ARG(reason,"reason")
		HX_STACK_LINE(344)
		this->state = (int)2;
		HX_STACK_LINE(345)
		this->result = reason;
		HX_STACK_LINE(347)
		while((true)){
			HX_STACK_LINE(347)
			int tmp = this->reject_reactions->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(347)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(347)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(347)
			if ((tmp2)){
				HX_STACK_LINE(347)
				break;
			}
			HX_STACK_LINE(348)
			Dynamic tmp3 = this->reject_reactions->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(348)
			Dynamic fn = tmp3;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(349)
			fn(this->result);
		}
		HX_STACK_LINE(352)
		this->onsettle();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,onreject,(void))

Void Promise_obj::onsettle( ){
{
		HX_STACK_FRAME("snow.api.Promise","onsettle",0xd64d675c,"snow.api.Promise.onsettle","snow/api/Promise.hx",359,0xcb181004)
		HX_STACK_THIS(this)
		HX_STACK_LINE(359)
		while((true)){
			HX_STACK_LINE(359)
			int tmp = this->settle_reactions->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(359)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(359)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(359)
			if ((tmp2)){
				HX_STACK_LINE(359)
				break;
			}
			HX_STACK_LINE(360)
			Dynamic tmp3 = this->settle_reactions->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(360)
			Dynamic fn = tmp3;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(361)
			fn(this->result);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,onsettle,(void))

Void Promise_obj::onexception( Dynamic err){
{
		HX_STACK_FRAME("snow.api.Promise","onexception",0xf4b49b1e,"snow.api.Promise.onexception","snow/api/Promise.hx",368,0xcb181004)
		HX_STACK_THIS(this)
		HX_STACK_ARG(err,"err")
		HX_STACK_LINE(368)
		::snow::api::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::api::Promise,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",372,0xcb181004)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(373)
				bool tmp = _g->was_caught;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(373)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(373)
				if ((tmp1)){
					HX_STACK_LINE(374)
					bool tmp2 = (_g->state == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(374)
					if ((tmp2)){
						HX_STACK_LINE(375)
						::String tmp3 = _g->toString();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(375)
						::snow::api::PromiseError tmp4 = ::snow::api::PromiseError_obj::UnhandledPromiseRejection(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(375)
						HX_STACK_DO_THROW(tmp4);
						HX_STACK_LINE(376)
						return null();
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(372)
		this->add_settle( Dynamic(new _Function_1_1(_g)));
		HX_STACK_LINE(386)
		int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(386)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(386)
		if ((tmp1)){
			HX_STACK_LINE(387)
			Dynamic tmp2 = err;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(387)
			this->onreject(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,onexception,(void))

::String Promise_obj::state_string( ){
	HX_STACK_FRAME("snow.api.Promise","state_string",0x9a7c64f1,"snow.api.Promise.state_string","snow/api/Promise.hx",393,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_LINE(394)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(394)
	{
		HX_STACK_LINE(394)
		int tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(394)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(394)
		int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(394)
		switch( (int)(tmp2)){
			case (int)0: {
				HX_STACK_LINE(395)
				tmp = HX_HCSTRING("pending","\x57","\x98","\xec","\x2b");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(396)
				tmp = HX_HCSTRING("fulfilled","\x9f","\x25","\x7b","\x40");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(397)
				tmp = HX_HCSTRING("rejected","\x7e","\xff","\x83","\xab");
			}
			;break;
		}
	}
	HX_STACK_LINE(394)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,state_string,return )

::snow::api::Promise Promise_obj::all( Array< ::Dynamic > list){
	HX_STACK_FRAME("snow.api.Promise","all",0xe10102ef,"snow.api.Promise.all","snow/api/Promise.hx",127,0xcb181004)
	HX_STACK_ARG(list,"list")

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,list)
	int __ArgCount() const { return 2; }
	Void run(Dynamic ok,Dynamic no){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",135,0xcb181004)
		HX_STACK_ARG(ok,"ok")
		HX_STACK_ARG(no,"no")
		{
			HX_STACK_LINE(137)
			Array< int > current = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(current,"current");
			HX_STACK_LINE(138)
			int total = list->length;		HX_STACK_VAR(total,"total");
			HX_STACK_LINE(139)
			cpp::ArrayBase fulfill_result = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(fulfill_result,"fulfill_result");
			HX_STACK_LINE(140)
			cpp::ArrayBase reject_result = cpp::ArrayBase_obj::__new().Add(null());		HX_STACK_VAR(reject_result,"reject_result");
			HX_STACK_LINE(141)
			Array< int > all_state = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(all_state,"all_state");

			HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_Function_2_1,Array< int >,all_state,Dynamic,ok,int,total,cpp::ArrayBase,fulfill_result,Array< int >,current)
			int __ArgCount() const { return 2; }
			Void run(int index,Dynamic val){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/api/Promise.hx",143,0xcb181004)
				HX_STACK_ARG(index,"index")
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(145)
					bool tmp = (all_state->__get((int)0) != (int)0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(145)
					if ((tmp)){
						HX_STACK_LINE(145)
						return null();
					}
					HX_STACK_LINE(147)
					(current[(int)0])++;
					HX_STACK_LINE(148)
					Dynamic tmp1 = val;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(148)
					hx::IndexRef((fulfill_result).mPtr,index) = tmp1;
					HX_STACK_LINE(150)
					bool tmp2 = (total == current->__get((int)0));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(150)
					if ((tmp2)){
						HX_STACK_LINE(151)
						all_state[(int)0] = (int)1;
						HX_STACK_LINE(152)
						ok(fulfill_result);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(143)
			Dynamic single_ok =  Dynamic(new _Function_2_1(all_state,ok,total,fulfill_result,current));		HX_STACK_VAR(single_ok,"single_ok");

			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_2,Array< int >,all_state,Dynamic,no,cpp::ArrayBase,reject_result)
			int __ArgCount() const { return 1; }
			Void run(Dynamic val){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","snow/api/Promise.hx",157,0xcb181004)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(159)
					bool tmp = (all_state->__get((int)0) != (int)0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(159)
					if ((tmp)){
						HX_STACK_LINE(159)
						return null();
					}
					HX_STACK_LINE(161)
					all_state[(int)0] = (int)2;
					HX_STACK_LINE(162)
					hx::IndexRef((reject_result).mPtr,(int)0) = val;
					HX_STACK_LINE(163)
					Dynamic tmp1 = reject_result->__GetItem((int)0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(163)
					no(tmp1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(157)
			Dynamic single_err =  Dynamic(new _Function_2_2(all_state,no,reject_result));		HX_STACK_VAR(single_err,"single_err");
			HX_STACK_LINE(167)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(168)
			{
				HX_STACK_LINE(168)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(168)
				while((true)){
					HX_STACK_LINE(168)
					bool tmp = (_g < list->length);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(168)
					bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(168)
					if ((tmp1)){
						HX_STACK_LINE(168)
						break;
					}
					HX_STACK_LINE(168)
					::snow::api::Promise tmp2 = list->__get(_g).StaticCast< ::snow::api::Promise >();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(168)
					::snow::api::Promise promise = tmp2;		HX_STACK_VAR(promise,"promise");
					HX_STACK_LINE(168)
					++(_g);
					HX_STACK_LINE(169)
					Dynamic tmp3 = single_ok;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(169)
					int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(169)
					Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(169)
					{
						HX_STACK_LINE(169)
						Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(169)
						int a1 = tmp4;		HX_STACK_VAR(a1,"a1");

						HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,int,a1,Dynamic,f)
						int __ArgCount() const { return 1; }
						Void run(Dynamic a2){
							HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","snow/api/Promise.hx",169,0xcb181004)
							HX_STACK_ARG(a2,"a2")
							{
								HX_STACK_LINE(169)
								int tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(169)
								Dynamic tmp7 = a2;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(169)
								f(tmp6,tmp7).Cast< Void >();
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(169)
						tmp5 =  Dynamic(new _Function_5_1(a1,f));
					}
					HX_STACK_LINE(169)
					::snow::api::Promise tmp6 = promise->then(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(169)
					Dynamic tmp7 = single_err;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(169)
					tmp6->error(tmp7);
					HX_STACK_LINE(170)
					(index)++;
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(135)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(list)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,all,return )

::snow::api::Promise Promise_obj::race( Array< ::Dynamic > list){
	HX_STACK_FRAME("snow.api.Promise","race",0x0b15ce83,"snow.api.Promise.race","snow/api/Promise.hx",180,0xcb181004)
	HX_STACK_ARG(list,"list")

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,list)
	int __ArgCount() const { return 2; }
	Void run(Dynamic ok,Dynamic no){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",182,0xcb181004)
		HX_STACK_ARG(ok,"ok")
		HX_STACK_ARG(no,"no")
		{
			HX_STACK_LINE(184)
			Array< bool > settled = Array_obj< bool >::__new().Add(false);		HX_STACK_VAR(settled,"settled");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,ok,Array< bool >,settled)
			int __ArgCount() const { return 1; }
			Void run(Dynamic val){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/api/Promise.hx",185,0xcb181004)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(186)
					bool tmp = settled->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(186)
					if ((tmp)){
						HX_STACK_LINE(186)
						return null();
					}
					HX_STACK_LINE(187)
					settled[(int)0] = true;
					HX_STACK_LINE(188)
					Dynamic tmp1 = val;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(188)
					ok(tmp1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(185)
			Dynamic single_ok =  Dynamic(new _Function_2_1(ok,settled));		HX_STACK_VAR(single_ok,"single_ok");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,Dynamic,no,Array< bool >,settled)
			int __ArgCount() const { return 1; }
			Void run(Dynamic val){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","snow/api/Promise.hx",191,0xcb181004)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(192)
					bool tmp = settled->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(192)
					if ((tmp)){
						HX_STACK_LINE(192)
						return null();
					}
					HX_STACK_LINE(193)
					settled[(int)0] = true;
					HX_STACK_LINE(194)
					Dynamic tmp1 = val;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(194)
					no(tmp1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(191)
			Dynamic single_err =  Dynamic(new _Function_2_2(no,settled));		HX_STACK_VAR(single_err,"single_err");
			HX_STACK_LINE(197)
			{
				HX_STACK_LINE(197)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(197)
				while((true)){
					HX_STACK_LINE(197)
					bool tmp = (_g < list->length);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(197)
					bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(197)
					if ((tmp1)){
						HX_STACK_LINE(197)
						break;
					}
					HX_STACK_LINE(197)
					::snow::api::Promise tmp2 = list->__get(_g).StaticCast< ::snow::api::Promise >();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(197)
					::snow::api::Promise promise = tmp2;		HX_STACK_VAR(promise,"promise");
					HX_STACK_LINE(197)
					++(_g);
					HX_STACK_LINE(198)
					Dynamic tmp3 = single_ok;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(198)
					::snow::api::Promise tmp4 = promise->then(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(198)
					Dynamic tmp5 = single_err;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(198)
					tmp4->error(tmp5);
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(182)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(list)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,race,return )

::snow::api::Promise Promise_obj::reject( Dynamic reason){
	HX_STACK_FRAME("snow.api.Promise","reject",0xa943dc51,"snow.api.Promise.reject","snow/api/Promise.hx",206,0xcb181004)
	HX_STACK_ARG(reason,"reason")

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,reason)
	int __ArgCount() const { return 2; }
	Void run(Dynamic ok,Dynamic no){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",208,0xcb181004)
		HX_STACK_ARG(ok,"ok")
		HX_STACK_ARG(no,"no")
		{
			HX_STACK_LINE(209)
			Dynamic tmp = reason;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(209)
			no(tmp);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(208)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(reason)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,reject,return )

::snow::api::Promise Promise_obj::resolve( Dynamic val){
	HX_STACK_FRAME("snow.api.Promise","resolve",0xa75b1bba,"snow.api.Promise.resolve","snow/api/Promise.hx",216,0xcb181004)
	HX_STACK_ARG(val,"val")

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,val)
	int __ArgCount() const { return 2; }
	Void run(Dynamic ok,Dynamic no){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",218,0xcb181004)
		HX_STACK_ARG(ok,"ok")
		HX_STACK_ARG(no,"no")
		{
			HX_STACK_LINE(219)
			Dynamic tmp = val;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(219)
			ok(tmp);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(218)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(val)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,resolve,return )


Promise_obj::Promise_obj()
{
}

void Promise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Promise);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_MEMBER_NAME(reject_reactions,"reject_reactions");
	HX_MARK_MEMBER_NAME(fulfill_reactions,"fulfill_reactions");
	HX_MARK_MEMBER_NAME(settle_reactions,"settle_reactions");
	HX_MARK_MEMBER_NAME(was_caught,"was_caught");
	HX_MARK_END_CLASS();
}

void Promise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(result,"result");
	HX_VISIT_MEMBER_NAME(reject_reactions,"reject_reactions");
	HX_VISIT_MEMBER_NAME(fulfill_reactions,"fulfill_reactions");
	HX_VISIT_MEMBER_NAME(settle_reactions,"settle_reactions");
	HX_VISIT_MEMBER_NAME(was_caught,"was_caught");
}

Dynamic Promise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return result; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"onreject") ) { return onreject_dyn(); }
		if (HX_FIELD_EQ(inName,"onsettle") ) { return onsettle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onfulfill") ) { return onfulfill_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"was_caught") ) { return was_caught; }
		if (HX_FIELD_EQ(inName,"add_settle") ) { return add_settle_dyn(); }
		if (HX_FIELD_EQ(inName,"add_reject") ) { return add_reject_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"add_fulfill") ) { return add_fulfill_dyn(); }
		if (HX_FIELD_EQ(inName,"onexception") ) { return onexception_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"state_string") ) { return state_string_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reject_reactions") ) { return reject_reactions; }
		if (HX_FIELD_EQ(inName,"settle_reactions") ) { return settle_reactions; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fulfill_reactions") ) { return fulfill_reactions; }
		if (HX_FIELD_EQ(inName,"new_linked_reject") ) { return new_linked_reject_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"new_linked_promise") ) { return new_linked_promise_dyn(); }
		if (HX_FIELD_EQ(inName,"new_linked_resolve") ) { return new_linked_resolve_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"new_linked_reject_empty") ) { return new_linked_reject_empty_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"new_linked_resolve_empty") ) { return new_linked_resolve_empty_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Promise_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { outValue = all_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"race") ) { outValue = race_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reject") ) { outValue = reject_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { outValue = resolve_dyn(); return true;  }
	}
	return false;
}

Dynamic Promise_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"was_caught") ) { was_caught=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reject_reactions") ) { reject_reactions=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"settle_reactions") ) { settle_reactions=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fulfill_reactions") ) { fulfill_reactions=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Promise_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Promise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"));
	outFields->push(HX_HCSTRING("reject_reactions","\x8a","\xa6","\x76","\xb0"));
	outFields->push(HX_HCSTRING("fulfill_reactions","\xab","\x55","\x22","\x9b"));
	outFields->push(HX_HCSTRING("settle_reactions","\xb6","\xfd","\x65","\xeb"));
	outFields->push(HX_HCSTRING("was_caught","\x12","\x4f","\x0e","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Promise_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Promise_obj,result),HX_HCSTRING("result","\xdd","\x68","\x84","\x08")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Promise_obj,reject_reactions),HX_HCSTRING("reject_reactions","\x8a","\xa6","\x76","\xb0")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Promise_obj,fulfill_reactions),HX_HCSTRING("fulfill_reactions","\xab","\x55","\x22","\x9b")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Promise_obj,settle_reactions),HX_HCSTRING("settle_reactions","\xb6","\xfd","\x65","\xeb")},
	{hx::fsBool,(int)offsetof(Promise_obj,was_caught),HX_HCSTRING("was_caught","\x12","\x4f","\x0e","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("result","\xdd","\x68","\x84","\x08"),
	HX_HCSTRING("reject_reactions","\x8a","\xa6","\x76","\xb0"),
	HX_HCSTRING("fulfill_reactions","\xab","\x55","\x22","\x9b"),
	HX_HCSTRING("settle_reactions","\xb6","\xfd","\x65","\xeb"),
	HX_HCSTRING("was_caught","\x12","\x4f","\x0e","\x2d"),
	HX_HCSTRING("then","\xdd","\x02","\xfc","\x4c"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("add_settle","\x29","\x4f","\x38","\x78"),
	HX_HCSTRING("new_linked_promise","\x34","\xef","\x80","\xc1"),
	HX_HCSTRING("new_linked_resolve","\x85","\x34","\xf7","\x30"),
	HX_HCSTRING("new_linked_reject","\xe6","\x25","\x68","\x7f"),
	HX_HCSTRING("new_linked_resolve_empty","\x13","\x68","\xbe","\x26"),
	HX_HCSTRING("new_linked_reject_empty","\x34","\x18","\x9c","\x5f"),
	HX_HCSTRING("add_fulfill","\xe2","\xd1","\xb3","\x5d"),
	HX_HCSTRING("add_reject","\xfd","\x66","\x35","\x0b"),
	HX_HCSTRING("onfulfill","\x01","\x8e","\xaa","\xd6"),
	HX_HCSTRING("onreject","\xbe","\xd3","\x9d","\xad"),
	HX_HCSTRING("onsettle","\xea","\xbb","\xa0","\x1a"),
	HX_HCSTRING("onexception","\x50","\x13","\x0a","\xca"),
	HX_HCSTRING("state_string","\x7f","\x18","\xf0","\x6f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#endif

hx::Class Promise_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("all","\x21","\xf9","\x49","\x00"),
	HX_HCSTRING("race","\x11","\x44","\xa4","\x4b"),
	HX_HCSTRING("reject","\x5f","\x51","\x85","\x02"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	::String(null()) };

void Promise_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.Promise","\x3c","\xeb","\xf2","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Promise_obj::__GetStatic;
	__mClass->mSetStaticField = &Promise_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Promise_obj >;
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

} // end namespace snow
} // end namespace api
