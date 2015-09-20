#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Exception
#include <luxe/utils/unifill/Exception.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_InternalEncoding
#include <luxe/utils/unifill/InternalEncoding.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Utf
#include <luxe/utils/unifill/Utf.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Utf8
#include <luxe/utils/unifill/Utf8.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__Utf8_Utf8Impl
#include <luxe/utils/unifill/_Utf8/Utf8Impl.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{

Void InternalEncoding_obj::__construct()
{
	return null();
}

//InternalEncoding_obj::~InternalEncoding_obj() { }

Dynamic InternalEncoding_obj::__CreateEmpty() { return  new InternalEncoding_obj; }
hx::ObjectPtr< InternalEncoding_obj > InternalEncoding_obj::__new()
{  hx::ObjectPtr< InternalEncoding_obj > _result_ = new InternalEncoding_obj();
	_result_->__construct();
	return _result_;}

Dynamic InternalEncoding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InternalEncoding_obj > _result_ = new InternalEncoding_obj();
	_result_->__construct();
	return _result_;}

::String InternalEncoding_obj::get_internalEncoding( ){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","get_internalEncoding",0x28a1da27,"luxe.utils.unifill.InternalEncoding.get_internalEncoding","luxe/utils/unifill/InternalEncoding.hx",24,0x3061c49b)
	HX_STACK_LINE(24)
	return HX_HCSTRING("UTF-8","\x32","\x80","\xca","\x28");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InternalEncoding_obj,get_internalEncoding,return )

int InternalEncoding_obj::codeUnitAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codeUnitAt",0x2c559c12,"luxe.utils.unifill.InternalEncoding.codeUnitAt","luxe/utils/unifill/InternalEncoding.hx",35,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(36)
	::luxe::utils::unifill::Utf8 tmp = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::luxe::utils::unifill::Utf8 u = tmp;		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(37)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	int tmp2 = u->str.cca(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codeUnitAt,return )

int InternalEncoding_obj::codePointAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codePointAt",0x31323d88,"luxe.utils.unifill.InternalEncoding.codePointAt","luxe/utils/unifill/InternalEncoding.hx",44,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(45)
	::luxe::utils::unifill::Utf8 tmp = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	::luxe::utils::unifill::Utf8 u = tmp;		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(46)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	int tmp2 = u->codePointAt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codePointAt,return )

::String InternalEncoding_obj::charAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","charAt",0x38df54d7,"luxe.utils.unifill.InternalEncoding.charAt","luxe/utils/unifill/InternalEncoding.hx",53,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(54)
	::luxe::utils::unifill::Utf8 tmp = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	::luxe::utils::unifill::Utf8 u = tmp;		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(55)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(55)
				int tmp5 = u->str.cca(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				int c = tmp5;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(55)
				bool tmp6 = (c < (int)192);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(55)
				if ((tmp6)){
					HX_STACK_LINE(55)
					tmp3 = (int)1;
				}
				else{
					HX_STACK_LINE(55)
					bool tmp7 = (c < (int)224);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					if ((tmp7)){
						HX_STACK_LINE(55)
						tmp3 = (int)2;
					}
					else{
						HX_STACK_LINE(55)
						bool tmp8 = (c < (int)240);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(55)
						if ((tmp8)){
							HX_STACK_LINE(55)
							tmp3 = (int)3;
						}
						else{
							HX_STACK_LINE(55)
							bool tmp9 = (c < (int)248);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(55)
							if ((tmp9)){
								HX_STACK_LINE(55)
								tmp3 = (int)4;
							}
							else{
								HX_STACK_LINE(55)
								tmp3 = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(55)
			Dynamic len = tmp3;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(55)
				Dynamic tmp5 = len;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				::String tmp6 = u->str.substr(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(55)
				::String s1 = tmp6;		HX_STACK_VAR(s1,"s1");
				HX_STACK_LINE(55)
				tmp2 = s1;
			}
		}
		HX_STACK_LINE(55)
		::luxe::utils::unifill::Utf8 tmp3 = ::luxe::utils::unifill::Utf8_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		::luxe::utils::unifill::Utf8 _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(55)
		tmp1 = _this->str;
	}
	HX_STACK_LINE(55)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,charAt,return )

int InternalEncoding_obj::codePointCount( ::String s,int beginIndex,int endIndex){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codePointCount",0xe9cf275a,"luxe.utils.unifill.InternalEncoding.codePointCount","luxe/utils/unifill/InternalEncoding.hx",62,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
	HX_STACK_LINE(63)
	::luxe::utils::unifill::Utf8 tmp = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	::luxe::utils::unifill::Utf8 u = tmp;		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(64)
	int tmp1 = beginIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	int tmp2 = endIndex;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	int tmp3 = u->codePointCount(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(InternalEncoding_obj,codePointCount,return )

int InternalEncoding_obj::codePointWidthAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codePointWidthAt",0x6d12d7e4,"luxe.utils.unifill.InternalEncoding.codePointWidthAt","luxe/utils/unifill/InternalEncoding.hx",71,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(72)
	::luxe::utils::unifill::Utf8 tmp = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::luxe::utils::unifill::Utf8 u = tmp;		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(73)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		int tmp3 = u->str.cca(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		int c = tmp3;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(73)
		bool tmp4 = (c < (int)192);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		if ((tmp4)){
			HX_STACK_LINE(73)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(73)
			bool tmp5 = (c < (int)224);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			if ((tmp5)){
				HX_STACK_LINE(73)
				tmp1 = (int)2;
			}
			else{
				HX_STACK_LINE(73)
				bool tmp6 = (c < (int)240);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				if ((tmp6)){
					HX_STACK_LINE(73)
					tmp1 = (int)3;
				}
				else{
					HX_STACK_LINE(73)
					bool tmp7 = (c < (int)248);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(73)
					if ((tmp7)){
						HX_STACK_LINE(73)
						tmp1 = (int)4;
					}
					else{
						HX_STACK_LINE(73)
						tmp1 = (int)1;
					}
				}
			}
		}
	}
	HX_STACK_LINE(73)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codePointWidthAt,return )

int InternalEncoding_obj::codePointWidthBefore( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codePointWidthBefore",0xd33fa3f0,"luxe.utils.unifill.InternalEncoding.codePointWidthBefore","luxe/utils/unifill/InternalEncoding.hx",80,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(81)
	::luxe::utils::unifill::Utf8 tmp = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	::luxe::utils::unifill::Utf8 u = tmp;		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(82)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		Dynamic accessor = u->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
		HX_STACK_LINE(82)
		int tmp2 = (index - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		int tmp3 = accessor(tmp2).Cast< int >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		int c1 = tmp3;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(82)
		bool tmp4 = (c1 < (int)128);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		if ((tmp5)){
			HX_STACK_LINE(82)
			tmp6 = (c1 >= (int)192);
		}
		else{
			HX_STACK_LINE(82)
			tmp6 = true;
		}
		HX_STACK_LINE(82)
		if ((tmp6)){
			HX_STACK_LINE(82)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(82)
			int tmp7 = (index - (int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(82)
			int tmp8 = accessor(tmp7).Cast< int >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(82)
			int tmp9 = (int(tmp8) & int((int)224));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			bool tmp10 = (tmp9 == (int)192);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(82)
			if ((tmp10)){
				HX_STACK_LINE(82)
				tmp1 = (int)2;
			}
			else{
				HX_STACK_LINE(82)
				int tmp11 = (index - (int)3);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(82)
				int tmp12 = accessor(tmp11).Cast< int >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(82)
				int tmp13 = (int(tmp12) & int((int)240));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(82)
				bool tmp14 = (tmp13 == (int)224);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(82)
				if ((tmp14)){
					HX_STACK_LINE(82)
					tmp1 = (int)3;
				}
				else{
					HX_STACK_LINE(82)
					int tmp15 = (index - (int)4);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(82)
					int tmp16 = accessor(tmp15).Cast< int >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(82)
					int tmp17 = (int(tmp16) & int((int)248));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(82)
					bool tmp18 = (tmp17 == (int)240);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(82)
					if ((tmp18)){
						HX_STACK_LINE(82)
						tmp1 = (int)4;
					}
					else{
						HX_STACK_LINE(82)
						tmp1 = (int)1;
					}
				}
			}
		}
	}
	HX_STACK_LINE(82)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codePointWidthBefore,return )

int InternalEncoding_obj::offsetByCodePoints( ::String s,int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","offsetByCodePoints",0x8b5e4088,"luxe.utils.unifill.InternalEncoding.offsetByCodePoints","luxe/utils/unifill/InternalEncoding.hx",89,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(90)
	::luxe::utils::unifill::Utf8 tmp = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	::luxe::utils::unifill::Utf8 u = tmp;		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(91)
	bool tmp1 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	if ((tmp1)){
		HX_STACK_LINE(91)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(91)
		int tmp3 = u->str.length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		int len = tmp3;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(91)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(91)
		while((true)){
			HX_STACK_LINE(91)
			bool tmp4 = (i < codePointOffset);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			if ((tmp4)){
				HX_STACK_LINE(91)
				tmp5 = (index1 < len);
			}
			else{
				HX_STACK_LINE(91)
				tmp5 = false;
			}
			HX_STACK_LINE(91)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			if ((tmp6)){
				HX_STACK_LINE(91)
				break;
			}
			HX_STACK_LINE(91)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				int tmp8 = index1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(91)
				int tmp9 = u->str.cca(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(91)
				int c = tmp9;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(91)
				bool tmp10 = (c < (int)192);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(91)
				if ((tmp10)){
					HX_STACK_LINE(91)
					tmp7 = (int)1;
				}
				else{
					HX_STACK_LINE(91)
					bool tmp11 = (c < (int)224);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(91)
					if ((tmp11)){
						HX_STACK_LINE(91)
						tmp7 = (int)2;
					}
					else{
						HX_STACK_LINE(91)
						bool tmp12 = (c < (int)240);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(91)
						if ((tmp12)){
							HX_STACK_LINE(91)
							tmp7 = (int)3;
						}
						else{
							HX_STACK_LINE(91)
							bool tmp13 = (c < (int)248);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(91)
							if ((tmp13)){
								HX_STACK_LINE(91)
								tmp7 = (int)4;
							}
							else{
								HX_STACK_LINE(91)
								tmp7 = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(91)
			hx::AddEq(index1,tmp7);
			HX_STACK_LINE(91)
			++(i);
		}
		HX_STACK_LINE(91)
		tmp2 = index1;
	}
	else{
		HX_STACK_LINE(91)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(91)
		int count = (int)0;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(91)
		while((true)){
			HX_STACK_LINE(91)
			int tmp3 = count;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			int tmp4 = codePointOffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			int tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(91)
			if ((tmp6)){
				HX_STACK_LINE(91)
				tmp7 = ((int)0 < index1);
			}
			else{
				HX_STACK_LINE(91)
				tmp7 = false;
			}
			HX_STACK_LINE(91)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(91)
			if ((tmp8)){
				HX_STACK_LINE(91)
				break;
			}
			HX_STACK_LINE(91)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				Dynamic accessor = u->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
				HX_STACK_LINE(91)
				int tmp10 = (index1 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(91)
				int tmp11 = accessor(tmp10).Cast< int >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(91)
				int c1 = tmp11;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(91)
				bool tmp12 = (c1 < (int)128);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(91)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(91)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(91)
				if ((tmp13)){
					HX_STACK_LINE(91)
					tmp14 = (c1 >= (int)192);
				}
				else{
					HX_STACK_LINE(91)
					tmp14 = true;
				}
				HX_STACK_LINE(91)
				if ((tmp14)){
					HX_STACK_LINE(91)
					tmp9 = (int)1;
				}
				else{
					HX_STACK_LINE(91)
					int tmp15 = (index1 - (int)2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(91)
					int tmp16 = accessor(tmp15).Cast< int >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(91)
					int tmp17 = (int(tmp16) & int((int)224));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(91)
					bool tmp18 = (tmp17 == (int)192);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(91)
					if ((tmp18)){
						HX_STACK_LINE(91)
						tmp9 = (int)2;
					}
					else{
						HX_STACK_LINE(91)
						int tmp19 = (index1 - (int)3);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(91)
						int tmp20 = accessor(tmp19).Cast< int >();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(91)
						int tmp21 = (int(tmp20) & int((int)240));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(91)
						bool tmp22 = (tmp21 == (int)224);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(91)
						if ((tmp22)){
							HX_STACK_LINE(91)
							tmp9 = (int)3;
						}
						else{
							HX_STACK_LINE(91)
							int tmp23 = (index1 - (int)4);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(91)
							int tmp24 = accessor(tmp23).Cast< int >();		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(91)
							int tmp25 = (int(tmp24) & int((int)248));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(91)
							bool tmp26 = (tmp25 == (int)240);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(91)
							if ((tmp26)){
								HX_STACK_LINE(91)
								tmp9 = (int)4;
							}
							else{
								HX_STACK_LINE(91)
								tmp9 = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(91)
			hx::SubEq(index1,tmp9);
			HX_STACK_LINE(91)
			++(count);
		}
		HX_STACK_LINE(91)
		tmp2 = index1;
	}
	HX_STACK_LINE(91)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(InternalEncoding_obj,offsetByCodePoints,return )

int InternalEncoding_obj::backwardOffsetByCodePoints( ::String s,int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","backwardOffsetByCodePoints",0x9c28134b,"luxe.utils.unifill.InternalEncoding.backwardOffsetByCodePoints","luxe/utils/unifill/InternalEncoding.hx",99,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(100)
	::luxe::utils::unifill::Utf8 tmp = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	::luxe::utils::unifill::Utf8 u = tmp;		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(101)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	{
		HX_STACK_LINE(101)
		int tmp2 = codePointOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		int tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		int codePointOffset1 = tmp3;		HX_STACK_VAR(codePointOffset1,"codePointOffset1");
		HX_STACK_LINE(101)
		bool tmp4 = (codePointOffset1 >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(101)
		if ((tmp4)){
			HX_STACK_LINE(101)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(101)
			int tmp5 = u->str.length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(101)
			int len = tmp5;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(101)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(101)
			while((true)){
				HX_STACK_LINE(101)
				bool tmp6 = (i < codePointOffset1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(101)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(101)
				if ((tmp6)){
					HX_STACK_LINE(101)
					tmp7 = (index1 < len);
				}
				else{
					HX_STACK_LINE(101)
					tmp7 = false;
				}
				HX_STACK_LINE(101)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(101)
				if ((tmp8)){
					HX_STACK_LINE(101)
					break;
				}
				HX_STACK_LINE(101)
				int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(101)
				{
					HX_STACK_LINE(101)
					int tmp10 = index1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(101)
					int tmp11 = u->str.cca(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(101)
					int c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(101)
					bool tmp12 = (c < (int)192);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(101)
					if ((tmp12)){
						HX_STACK_LINE(101)
						tmp9 = (int)1;
					}
					else{
						HX_STACK_LINE(101)
						bool tmp13 = (c < (int)224);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(101)
						if ((tmp13)){
							HX_STACK_LINE(101)
							tmp9 = (int)2;
						}
						else{
							HX_STACK_LINE(101)
							bool tmp14 = (c < (int)240);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(101)
							if ((tmp14)){
								HX_STACK_LINE(101)
								tmp9 = (int)3;
							}
							else{
								HX_STACK_LINE(101)
								bool tmp15 = (c < (int)248);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(101)
								if ((tmp15)){
									HX_STACK_LINE(101)
									tmp9 = (int)4;
								}
								else{
									HX_STACK_LINE(101)
									tmp9 = (int)1;
								}
							}
						}
					}
				}
				HX_STACK_LINE(101)
				hx::AddEq(index1,tmp9);
				HX_STACK_LINE(101)
				++(i);
			}
			HX_STACK_LINE(101)
			tmp1 = index1;
		}
		else{
			HX_STACK_LINE(101)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(101)
			int count = (int)0;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(101)
			while((true)){
				HX_STACK_LINE(101)
				int tmp5 = count;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(101)
				int tmp6 = codePointOffset1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(101)
				int tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(101)
				bool tmp8 = (tmp5 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(101)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(101)
				if ((tmp8)){
					HX_STACK_LINE(101)
					tmp9 = ((int)0 < index1);
				}
				else{
					HX_STACK_LINE(101)
					tmp9 = false;
				}
				HX_STACK_LINE(101)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(101)
				if ((tmp10)){
					HX_STACK_LINE(101)
					break;
				}
				HX_STACK_LINE(101)
				int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(101)
				{
					HX_STACK_LINE(101)
					Dynamic accessor = u->codeUnitAt_dyn();		HX_STACK_VAR(accessor,"accessor");
					HX_STACK_LINE(101)
					int tmp12 = (index1 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(101)
					int tmp13 = accessor(tmp12).Cast< int >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(101)
					int c1 = tmp13;		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(101)
					bool tmp14 = (c1 < (int)128);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(101)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(101)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(101)
					if ((tmp15)){
						HX_STACK_LINE(101)
						tmp16 = (c1 >= (int)192);
					}
					else{
						HX_STACK_LINE(101)
						tmp16 = true;
					}
					HX_STACK_LINE(101)
					if ((tmp16)){
						HX_STACK_LINE(101)
						tmp11 = (int)1;
					}
					else{
						HX_STACK_LINE(101)
						int tmp17 = (index1 - (int)2);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(101)
						int tmp18 = accessor(tmp17).Cast< int >();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(101)
						int tmp19 = (int(tmp18) & int((int)224));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(101)
						bool tmp20 = (tmp19 == (int)192);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(101)
						if ((tmp20)){
							HX_STACK_LINE(101)
							tmp11 = (int)2;
						}
						else{
							HX_STACK_LINE(101)
							int tmp21 = (index1 - (int)3);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(101)
							int tmp22 = accessor(tmp21).Cast< int >();		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(101)
							int tmp23 = (int(tmp22) & int((int)240));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(101)
							bool tmp24 = (tmp23 == (int)224);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(101)
							if ((tmp24)){
								HX_STACK_LINE(101)
								tmp11 = (int)3;
							}
							else{
								HX_STACK_LINE(101)
								int tmp25 = (index1 - (int)4);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(101)
								int tmp26 = accessor(tmp25).Cast< int >();		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(101)
								int tmp27 = (int(tmp26) & int((int)248));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(101)
								bool tmp28 = (tmp27 == (int)240);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(101)
								if ((tmp28)){
									HX_STACK_LINE(101)
									tmp11 = (int)4;
								}
								else{
									HX_STACK_LINE(101)
									tmp11 = (int)1;
								}
							}
						}
					}
				}
				HX_STACK_LINE(101)
				hx::SubEq(index1,tmp11);
				HX_STACK_LINE(101)
				++(count);
			}
			HX_STACK_LINE(101)
			tmp1 = index1;
		}
	}
	HX_STACK_LINE(101)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(InternalEncoding_obj,backwardOffsetByCodePoints,return )

::String InternalEncoding_obj::fromCodePoint( int codePoint){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","fromCodePoint",0xf753db6b,"luxe.utils.unifill.InternalEncoding.fromCodePoint","luxe/utils/unifill/InternalEncoding.hx",107,0x3061c49b)
	HX_STACK_ARG(codePoint,"codePoint")
	HX_STACK_LINE(108)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		::luxe::utils::unifill::Utf8 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			::haxe::io::BytesBuffer tmp2 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			::haxe::io::BytesBuffer buf = tmp2;		HX_STACK_VAR(buf,"buf");
			HX_STACK_LINE(108)
			Dynamic tmp3 = buf->addByte_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			int tmp4 = codePoint;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp3,tmp4);
			HX_STACK_LINE(108)
			::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			{
				HX_STACK_LINE(108)
				::haxe::io::Bytes tmp6 = buf->getBytes();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(108)
				::haxe::io::Bytes b = tmp6;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					::String tmp7 = b->toString();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(108)
					::String s = tmp7;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(108)
					tmp5 = s;
				}
			}
			HX_STACK_LINE(108)
			tmp1 = ::luxe::utils::unifill::Utf8_obj::__new(tmp5);
		}
		HX_STACK_LINE(108)
		::luxe::utils::unifill::Utf8 _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(108)
		tmp = _this->str;
	}
	HX_STACK_LINE(108)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,fromCodePoint,return )

::String InternalEncoding_obj::fromCodePoints( Dynamic codePoints){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","fromCodePoints",0x720c22a8,"luxe.utils.unifill.InternalEncoding.fromCodePoints","luxe/utils/unifill/InternalEncoding.hx",114,0x3061c49b)
	HX_STACK_ARG(codePoints,"codePoints")
	HX_STACK_LINE(115)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	{
		HX_STACK_LINE(115)
		::luxe::utils::unifill::Utf8 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			::haxe::io::BytesBuffer tmp2 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(115)
			::haxe::io::BytesBuffer buf = tmp2;		HX_STACK_VAR(buf,"buf");
			HX_STACK_LINE(115)
			Dynamic tmp3 = codePoints->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(115)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp3);  __it->hasNext(); ){
				int c = __it->next();
				{
					HX_STACK_LINE(115)
					Dynamic tmp4 = buf->addByte_dyn();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(115)
					int tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(115)
					::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp4,tmp5);
				}
;
			}
			HX_STACK_LINE(115)
			::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			{
				HX_STACK_LINE(115)
				::haxe::io::Bytes tmp5 = buf->getBytes();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(115)
				::haxe::io::Bytes b = tmp5;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(115)
				{
					HX_STACK_LINE(115)
					::String tmp6 = b->toString();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(115)
					::String s = tmp6;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(115)
					tmp4 = s;
				}
			}
			HX_STACK_LINE(115)
			tmp1 = ::luxe::utils::unifill::Utf8_obj::__new(tmp4);
		}
		HX_STACK_LINE(115)
		::luxe::utils::unifill::Utf8 _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(115)
		tmp = _this->str;
	}
	HX_STACK_LINE(115)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,fromCodePoints,return )

Void InternalEncoding_obj::validate( ::String s){
{
		HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","validate",0x190de384,"luxe.utils.unifill.InternalEncoding.validate","luxe/utils/unifill/InternalEncoding.hx",124,0x3061c49b)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(125)
		::luxe::utils::unifill::Utf8 tmp = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		::luxe::utils::unifill::Utf8 u = tmp;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(126)
		u->validate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,validate,(void))

bool InternalEncoding_obj::isValidString( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","isValidString",0x6c95d575,"luxe.utils.unifill.InternalEncoding.isValidString","luxe/utils/unifill/InternalEncoding.hx",133,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(133)
	try
	{
	HX_STACK_CATCHABLE(::luxe::utils::unifill::Exception, 0);
	{
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::luxe::utils::unifill::Utf8 tmp = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(134)
			::luxe::utils::unifill::Utf8 u = tmp;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(134)
			u->validate();
		}
		HX_STACK_LINE(135)
		return true;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::luxe::utils::unifill::Exception >() ){
			HX_STACK_BEGIN_CATCH
			::luxe::utils::unifill::Exception e = __e;{
				HX_STACK_LINE(137)
				switch( (int)(e->__Index())){
					case (int)1: {
						HX_STACK_LINE(137)
						int tmp = (::luxe::utils::unifill::Exception(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(137)
						int index = tmp;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(139)
						return false;
					}
					;break;
					default: {
						HX_STACK_LINE(141)
						::luxe::utils::unifill::Exception tmp = e;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(141)
						HX_STACK_DO_THROW(tmp);
					}
				}
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(133)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,isValidString,return )


InternalEncoding_obj::InternalEncoding_obj()
{
}

bool InternalEncoding_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"charAt") ) { outValue = charAt_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { outValue = validate_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"codeUnitAt") ) { outValue = codeUnitAt_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"codePointAt") ) { outValue = codePointAt_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromCodePoint") ) { outValue = fromCodePoint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isValidString") ) { outValue = isValidString_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"codePointCount") ) { outValue = codePointCount_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromCodePoints") ) { outValue = fromCodePoints_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"internalEncoding") ) { if (inCallProp == hx::paccAlways) { outValue = get_internalEncoding(); return true; } }
		if (HX_FIELD_EQ(inName,"codePointWidthAt") ) { outValue = codePointWidthAt_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"offsetByCodePoints") ) { outValue = offsetByCodePoints_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_internalEncoding") ) { outValue = get_internalEncoding_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"codePointWidthBefore") ) { outValue = codePointWidthBefore_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"backwardOffsetByCodePoints") ) { outValue = backwardOffsetByCodePoints_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InternalEncoding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InternalEncoding_obj::__mClass,"__mClass");
};

#endif

hx::Class InternalEncoding_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_internalEncoding","\x39","\x1a","\xb0","\x1b"),
	HX_HCSTRING("codeUnitAt","\xa4","\x71","\x4e","\x2b"),
	HX_HCSTRING("codePointAt","\xb6","\x47","\xf4","\x4b"),
	HX_HCSTRING("charAt","\x69","\x79","\x75","\xb7"),
	HX_HCSTRING("codePointCount","\xec","\x2d","\xd7","\x2e"),
	HX_HCSTRING("codePointWidthAt","\xf6","\x26","\x17","\x09"),
	HX_HCSTRING("codePointWidthBefore","\x02","\xe4","\x4d","\xc6"),
	HX_HCSTRING("offsetByCodePoints","\x1a","\xf8","\x61","\x6c"),
	HX_HCSTRING("backwardOffsetByCodePoints","\xdd","\xac","\xe8","\x97"),
	HX_HCSTRING("fromCodePoint","\x19","\x4d","\x4f","\xce"),
	HX_HCSTRING("fromCodePoints","\x3a","\x29","\x14","\xb7"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("isValidString","\x23","\x47","\x91","\x43"),
	::String(null()) };

void InternalEncoding_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.unifill.InternalEncoding","\x40","\x63","\x30","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InternalEncoding_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< InternalEncoding_obj >;
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
