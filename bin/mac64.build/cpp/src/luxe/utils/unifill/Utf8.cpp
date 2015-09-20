#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
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

Void Utf8_obj::__construct(::String s)
{
HX_STACK_FRAME("luxe.utils.unifill.Utf8","new",0x60e100b3,"luxe.utils.unifill.Utf8.new","luxe/utils/unifill/Utf8.hx",138,0xbecfbbba)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(138)
	this->str = s;
}
;
	return null();
}

//Utf8_obj::~Utf8_obj() { }

Dynamic Utf8_obj::__CreateEmpty() { return  new Utf8_obj; }
hx::ObjectPtr< Utf8_obj > Utf8_obj::__new(::String s)
{  hx::ObjectPtr< Utf8_obj > _result_ = new Utf8_obj();
	_result_->__construct(s);
	return _result_;}

Dynamic Utf8_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utf8_obj > _result_ = new Utf8_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Utf8_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::luxe::utils::unifill::Utf_obj)) return operator ::luxe::utils::unifill::Utf_obj *();
	return super::__ToInterface(inType);
}

Utf8_obj::operator ::luxe::utils::unifill::Utf_obj *()
	{ return new ::luxe::utils::unifill::Utf_delegate_< Utf8_obj >(this); }
int Utf8_obj::codeUnitAt( int index){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","codeUnitAt",0xa72241b1,"luxe.utils.unifill.Utf8.codeUnitAt","luxe/utils/unifill/Utf8.hx",41,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(42)
	::String tmp = this->str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	int tmp2 = tmp.cca(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,codeUnitAt,return )

int Utf8_obj::codePointAt( int index){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","codePointAt",0x29768309,"luxe.utils.unifill.Utf8.codePointAt","luxe/utils/unifill/Utf8.hx",49,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(50)
	::String tmp = this->str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	int tmp1 = tmp.length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	Dynamic tmp2 = this->codeUnitAt_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	int tmp4 = ::luxe::utils::unifill::_Utf8::Utf8Impl_obj::decode_code_point(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,codePointAt,return )

::luxe::utils::unifill::Utf8 Utf8_obj::charAt( int index){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","charAt",0x5e22fef6,"luxe.utils.unifill.Utf8.charAt","luxe/utils/unifill/Utf8.hx",57,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(58)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::String tmp2 = this->str;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(58)
			int tmp4 = tmp2.cca(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			int c = tmp4;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(58)
			bool tmp5 = (c < (int)192);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			if ((tmp5)){
				HX_STACK_LINE(58)
				tmp1 = (int)1;
			}
			else{
				HX_STACK_LINE(58)
				bool tmp6 = (c < (int)224);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(58)
				if ((tmp6)){
					HX_STACK_LINE(58)
					tmp1 = (int)2;
				}
				else{
					HX_STACK_LINE(58)
					bool tmp7 = (c < (int)240);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(58)
					if ((tmp7)){
						HX_STACK_LINE(58)
						tmp1 = (int)3;
					}
					else{
						HX_STACK_LINE(58)
						bool tmp8 = (c < (int)248);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(58)
						if ((tmp8)){
							HX_STACK_LINE(58)
							tmp1 = (int)4;
						}
						else{
							HX_STACK_LINE(58)
							tmp1 = (int)1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(58)
		Dynamic len = tmp1;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::String tmp2 = this->str;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(58)
			Dynamic tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			::String tmp5 = tmp2.substr(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			::String s = tmp5;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(58)
			tmp = s;
		}
	}
	HX_STACK_LINE(58)
	::luxe::utils::unifill::Utf8 tmp1 = ::luxe::utils::unifill::Utf8_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,charAt,return )

int Utf8_obj::codePointCount( int beginIndex,int endIndex){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","codePointCount",0x65088879,"luxe.utils.unifill.Utf8.codePointCount","luxe/utils/unifill/Utf8.hx",65,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
	HX_STACK_LINE(66)
	int index = beginIndex;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(67)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(68)
	while((true)){
		HX_STACK_LINE(68)
		bool tmp = (index < endIndex);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		if ((tmp1)){
			HX_STACK_LINE(68)
			break;
		}
		HX_STACK_LINE(69)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			::String tmp3 = this->str;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			int tmp5 = tmp3.cca(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			int c = tmp5;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(69)
			bool tmp6 = (c < (int)192);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(69)
			if ((tmp6)){
				HX_STACK_LINE(69)
				tmp2 = (int)1;
			}
			else{
				HX_STACK_LINE(69)
				bool tmp7 = (c < (int)224);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(69)
				if ((tmp7)){
					HX_STACK_LINE(69)
					tmp2 = (int)2;
				}
				else{
					HX_STACK_LINE(69)
					bool tmp8 = (c < (int)240);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(69)
					if ((tmp8)){
						HX_STACK_LINE(69)
						tmp2 = (int)3;
					}
					else{
						HX_STACK_LINE(69)
						bool tmp9 = (c < (int)248);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(69)
						if ((tmp9)){
							HX_STACK_LINE(69)
							tmp2 = (int)4;
						}
						else{
							HX_STACK_LINE(69)
							tmp2 = (int)1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(69)
		hx::AddEq(index,tmp2);
		HX_STACK_LINE(70)
		++(i);
	}
	HX_STACK_LINE(72)
	int tmp = i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,codePointCount,return )

int Utf8_obj::codePointWidthAt( int index){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","codePointWidthAt",0x323dfec3,"luxe.utils.unifill.Utf8.codePointWidthAt","luxe/utils/unifill/Utf8.hx",79,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(80)
	::String tmp = this->str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	int tmp2 = tmp.cca(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	int c = tmp2;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(81)
	bool tmp3 = (c < (int)192);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	if ((tmp3)){
		HX_STACK_LINE(81)
		tmp4 = (int)1;
	}
	else{
		HX_STACK_LINE(81)
		bool tmp5 = (c < (int)224);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		if ((tmp5)){
			HX_STACK_LINE(81)
			tmp4 = (int)2;
		}
		else{
			HX_STACK_LINE(81)
			bool tmp6 = (c < (int)240);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			if ((tmp6)){
				HX_STACK_LINE(81)
				tmp4 = (int)3;
			}
			else{
				HX_STACK_LINE(81)
				bool tmp7 = (c < (int)248);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(81)
				if ((tmp7)){
					HX_STACK_LINE(81)
					tmp4 = (int)4;
				}
				else{
					HX_STACK_LINE(81)
					tmp4 = (int)1;
				}
			}
		}
	}
	HX_STACK_LINE(81)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,codePointWidthAt,return )

int Utf8_obj::codePointWidthBefore( int index){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","codePointWidthBefore",0xaa51264f,"luxe.utils.unifill.Utf8.codePointWidthBefore","luxe/utils/unifill/Utf8.hx",88,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(89)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		Dynamic tmp1 = this->codeUnitAt_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		Dynamic accessor = tmp1;		HX_STACK_VAR(accessor,"accessor");
		HX_STACK_LINE(89)
		int tmp2 = (index - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		int tmp3 = accessor(tmp2).Cast< int >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		int c1 = tmp3;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(89)
		bool tmp4 = (c1 < (int)128);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(89)
		if ((tmp5)){
			HX_STACK_LINE(89)
			tmp6 = (c1 >= (int)192);
		}
		else{
			HX_STACK_LINE(89)
			tmp6 = true;
		}
		HX_STACK_LINE(89)
		if ((tmp6)){
			HX_STACK_LINE(89)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(89)
			int tmp7 = (index - (int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(89)
			int tmp8 = accessor(tmp7).Cast< int >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(89)
			int tmp9 = (int(tmp8) & int((int)224));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(89)
			bool tmp10 = (tmp9 == (int)192);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(89)
			if ((tmp10)){
				HX_STACK_LINE(89)
				tmp = (int)2;
			}
			else{
				HX_STACK_LINE(89)
				int tmp11 = (index - (int)3);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(89)
				int tmp12 = accessor(tmp11).Cast< int >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(89)
				int tmp13 = (int(tmp12) & int((int)240));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(89)
				bool tmp14 = (tmp13 == (int)224);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(89)
				if ((tmp14)){
					HX_STACK_LINE(89)
					tmp = (int)3;
				}
				else{
					HX_STACK_LINE(89)
					int tmp15 = (index - (int)4);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(89)
					int tmp16 = accessor(tmp15).Cast< int >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(89)
					int tmp17 = (int(tmp16) & int((int)248));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(89)
					bool tmp18 = (tmp17 == (int)240);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(89)
					if ((tmp18)){
						HX_STACK_LINE(89)
						tmp = (int)4;
					}
					else{
						HX_STACK_LINE(89)
						tmp = (int)1;
					}
				}
			}
		}
	}
	HX_STACK_LINE(89)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,codePointWidthBefore,return )

int Utf8_obj::offsetByCodePoints( int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","offsetByCodePoints",0x4ec81d27,"luxe.utils.unifill.Utf8.offsetByCodePoints","luxe/utils/unifill/Utf8.hx",96,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(97)
	bool tmp = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	if ((tmp)){
		HX_STACK_LINE(98)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(98)
		::String tmp2 = this->str;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		int tmp3 = tmp2.length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		int len = tmp3;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(98)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(98)
		while((true)){
			HX_STACK_LINE(98)
			bool tmp4 = (i < codePointOffset);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(98)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			if ((tmp4)){
				HX_STACK_LINE(98)
				tmp5 = (index1 < len);
			}
			else{
				HX_STACK_LINE(98)
				tmp5 = false;
			}
			HX_STACK_LINE(98)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			if ((tmp6)){
				HX_STACK_LINE(98)
				break;
			}
			HX_STACK_LINE(98)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				::String tmp8 = this->str;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(98)
				int tmp9 = index1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(98)
				int tmp10 = tmp8.cca(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(98)
				int c = tmp10;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(98)
				bool tmp11 = (c < (int)192);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(98)
				if ((tmp11)){
					HX_STACK_LINE(98)
					tmp7 = (int)1;
				}
				else{
					HX_STACK_LINE(98)
					bool tmp12 = (c < (int)224);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(98)
					if ((tmp12)){
						HX_STACK_LINE(98)
						tmp7 = (int)2;
					}
					else{
						HX_STACK_LINE(98)
						bool tmp13 = (c < (int)240);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(98)
						if ((tmp13)){
							HX_STACK_LINE(98)
							tmp7 = (int)3;
						}
						else{
							HX_STACK_LINE(98)
							bool tmp14 = (c < (int)248);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(98)
							if ((tmp14)){
								HX_STACK_LINE(98)
								tmp7 = (int)4;
							}
							else{
								HX_STACK_LINE(98)
								tmp7 = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(98)
			hx::AddEq(index1,tmp7);
			HX_STACK_LINE(98)
			++(i);
		}
		HX_STACK_LINE(98)
		tmp1 = index1;
	}
	else{
		HX_STACK_LINE(100)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(100)
		int count = (int)0;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(100)
		while((true)){
			HX_STACK_LINE(100)
			int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			int tmp3 = codePointOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(100)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(100)
			if ((tmp5)){
				HX_STACK_LINE(100)
				tmp6 = ((int)0 < index1);
			}
			else{
				HX_STACK_LINE(100)
				tmp6 = false;
			}
			HX_STACK_LINE(100)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(100)
			if ((tmp7)){
				HX_STACK_LINE(100)
				break;
			}
			HX_STACK_LINE(100)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				Dynamic tmp9 = this->codeUnitAt_dyn();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(100)
				Dynamic accessor = tmp9;		HX_STACK_VAR(accessor,"accessor");
				HX_STACK_LINE(100)
				int tmp10 = (index1 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(100)
				int tmp11 = accessor(tmp10).Cast< int >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(100)
				int c1 = tmp11;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(100)
				bool tmp12 = (c1 < (int)128);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(100)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(100)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(100)
				if ((tmp13)){
					HX_STACK_LINE(100)
					tmp14 = (c1 >= (int)192);
				}
				else{
					HX_STACK_LINE(100)
					tmp14 = true;
				}
				HX_STACK_LINE(100)
				if ((tmp14)){
					HX_STACK_LINE(100)
					tmp8 = (int)1;
				}
				else{
					HX_STACK_LINE(100)
					int tmp15 = (index1 - (int)2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(100)
					int tmp16 = accessor(tmp15).Cast< int >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(100)
					int tmp17 = (int(tmp16) & int((int)224));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(100)
					bool tmp18 = (tmp17 == (int)192);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(100)
					if ((tmp18)){
						HX_STACK_LINE(100)
						tmp8 = (int)2;
					}
					else{
						HX_STACK_LINE(100)
						int tmp19 = (index1 - (int)3);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(100)
						int tmp20 = accessor(tmp19).Cast< int >();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(100)
						int tmp21 = (int(tmp20) & int((int)240));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(100)
						bool tmp22 = (tmp21 == (int)224);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(100)
						if ((tmp22)){
							HX_STACK_LINE(100)
							tmp8 = (int)3;
						}
						else{
							HX_STACK_LINE(100)
							int tmp23 = (index1 - (int)4);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(100)
							int tmp24 = accessor(tmp23).Cast< int >();		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(100)
							int tmp25 = (int(tmp24) & int((int)248));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(100)
							bool tmp26 = (tmp25 == (int)240);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(100)
							if ((tmp26)){
								HX_STACK_LINE(100)
								tmp8 = (int)4;
							}
							else{
								HX_STACK_LINE(100)
								tmp8 = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(100)
			hx::SubEq(index1,tmp8);
			HX_STACK_LINE(100)
			++(count);
		}
		HX_STACK_LINE(100)
		tmp1 = index1;
	}
	HX_STACK_LINE(97)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,offsetByCodePoints,return )

::luxe::utils::unifill::Utf8 Utf8_obj::substr( int index,Dynamic len){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","substr",0x40b874be,"luxe.utils.unifill.Utf8.substr","luxe/utils/unifill/Utf8.hx",107,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(108)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		::String tmp1 = this->str;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		Dynamic tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		::String tmp4 = tmp1.substr(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		::String s = tmp4;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(108)
		tmp = s;
	}
	HX_STACK_LINE(108)
	::luxe::utils::unifill::Utf8 tmp1 = ::luxe::utils::unifill::Utf8_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,substr,return )

Void Utf8_obj::validate( ){
{
		HX_STACK_FRAME("luxe.utils.unifill.Utf8","validate",0xd6279363,"luxe.utils.unifill.Utf8.validate","luxe/utils/unifill/Utf8.hx",117,0xbecfbbba)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		::String tmp = this->str;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		int tmp1 = tmp.length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		int len = tmp1;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(119)
		Dynamic tmp2 = this->codeUnitAt_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		Dynamic accessor = tmp2;		HX_STACK_VAR(accessor,"accessor");
		HX_STACK_LINE(120)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(121)
		while((true)){
			HX_STACK_LINE(121)
			bool tmp3 = (i < len);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			if ((tmp4)){
				HX_STACK_LINE(121)
				break;
			}
			HX_STACK_LINE(122)
			int tmp5 = len;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(122)
			Dynamic tmp6 = accessor;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(122)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(122)
			::luxe::utils::unifill::_Utf8::Utf8Impl_obj::decode_code_point(tmp5,tmp6,tmp7);
			HX_STACK_LINE(123)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				::String tmp9 = this->str;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(123)
				int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(123)
				int tmp11 = tmp9.cca(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(123)
				int c = tmp11;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(123)
				bool tmp12 = (c < (int)192);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(123)
				if ((tmp12)){
					HX_STACK_LINE(123)
					tmp8 = (int)1;
				}
				else{
					HX_STACK_LINE(123)
					bool tmp13 = (c < (int)224);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(123)
					if ((tmp13)){
						HX_STACK_LINE(123)
						tmp8 = (int)2;
					}
					else{
						HX_STACK_LINE(123)
						bool tmp14 = (c < (int)240);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(123)
						if ((tmp14)){
							HX_STACK_LINE(123)
							tmp8 = (int)3;
						}
						else{
							HX_STACK_LINE(123)
							bool tmp15 = (c < (int)248);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(123)
							if ((tmp15)){
								HX_STACK_LINE(123)
								tmp8 = (int)4;
							}
							else{
								HX_STACK_LINE(123)
								tmp8 = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(123)
			hx::AddEq(i,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Utf8_obj,validate,(void))

::String Utf8_obj::toString( ){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","toString",0x09b29379,"luxe.utils.unifill.Utf8.toString","luxe/utils/unifill/Utf8.hx",127,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	::String tmp = this->str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	::String tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Utf8_obj,toString,return )

::haxe::io::Bytes Utf8_obj::toBytes( ){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","toBytes",0xbb43aac3,"luxe.utils.unifill.Utf8.toBytes","luxe/utils/unifill/Utf8.hx",131,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	::String tmp = this->str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	::String tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::ofString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Utf8_obj,toBytes,return )

int Utf8_obj::get_length( ){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","get_length",0x0b62d4bc,"luxe.utils.unifill.Utf8.get_length","luxe/utils/unifill/Utf8.hx",141,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	::String tmp = this->str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	int tmp1 = tmp.length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Utf8_obj,get_length,return )

int Utf8_obj::forward_offset_by_code_points( int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","forward_offset_by_code_points",0x0537fdd2,"luxe.utils.unifill.Utf8.forward_offset_by_code_points","luxe/utils/unifill/Utf8.hx",145,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(146)
	::String tmp = this->str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	int tmp1 = tmp.length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(147)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(148)
	while((true)){
		HX_STACK_LINE(148)
		bool tmp2 = (i < codePointOffset);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		if ((tmp2)){
			HX_STACK_LINE(148)
			tmp3 = (index < len);
		}
		else{
			HX_STACK_LINE(148)
			tmp3 = false;
		}
		HX_STACK_LINE(148)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		if ((tmp4)){
			HX_STACK_LINE(148)
			break;
		}
		HX_STACK_LINE(149)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			::String tmp6 = this->str;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			int tmp8 = tmp6.cca(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(149)
			int c = tmp8;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(149)
			bool tmp9 = (c < (int)192);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(149)
			if ((tmp9)){
				HX_STACK_LINE(149)
				tmp5 = (int)1;
			}
			else{
				HX_STACK_LINE(149)
				bool tmp10 = (c < (int)224);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(149)
				if ((tmp10)){
					HX_STACK_LINE(149)
					tmp5 = (int)2;
				}
				else{
					HX_STACK_LINE(149)
					bool tmp11 = (c < (int)240);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(149)
					if ((tmp11)){
						HX_STACK_LINE(149)
						tmp5 = (int)3;
					}
					else{
						HX_STACK_LINE(149)
						bool tmp12 = (c < (int)248);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(149)
						if ((tmp12)){
							HX_STACK_LINE(149)
							tmp5 = (int)4;
						}
						else{
							HX_STACK_LINE(149)
							tmp5 = (int)1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(149)
		hx::AddEq(index,tmp5);
		HX_STACK_LINE(150)
		++(i);
	}
	HX_STACK_LINE(152)
	int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,forward_offset_by_code_points,return )

int Utf8_obj::backward_offset_by_code_points( int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","backward_offset_by_code_points",0x39aa76ea,"luxe.utils.unifill.Utf8.backward_offset_by_code_points","luxe/utils/unifill/Utf8.hx",155,0xbecfbbba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(156)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(157)
	while((true)){
		HX_STACK_LINE(157)
		bool tmp = (count < codePointOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		if ((tmp)){
			HX_STACK_LINE(157)
			tmp1 = ((int)0 < index);
		}
		else{
			HX_STACK_LINE(157)
			tmp1 = false;
		}
		HX_STACK_LINE(157)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		if ((tmp2)){
			HX_STACK_LINE(157)
			break;
		}
		HX_STACK_LINE(158)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			Dynamic tmp4 = this->codeUnitAt_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			Dynamic accessor = tmp4;		HX_STACK_VAR(accessor,"accessor");
			HX_STACK_LINE(158)
			int tmp5 = (index - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(158)
			int tmp6 = accessor(tmp5).Cast< int >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(158)
			int c1 = tmp6;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(158)
			bool tmp7 = (c1 < (int)128);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(158)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(158)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(158)
			if ((tmp8)){
				HX_STACK_LINE(158)
				tmp9 = (c1 >= (int)192);
			}
			else{
				HX_STACK_LINE(158)
				tmp9 = true;
			}
			HX_STACK_LINE(158)
			if ((tmp9)){
				HX_STACK_LINE(158)
				tmp3 = (int)1;
			}
			else{
				HX_STACK_LINE(158)
				int tmp10 = (index - (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(158)
				int tmp11 = accessor(tmp10).Cast< int >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(158)
				int tmp12 = (int(tmp11) & int((int)224));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(158)
				bool tmp13 = (tmp12 == (int)192);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(158)
				if ((tmp13)){
					HX_STACK_LINE(158)
					tmp3 = (int)2;
				}
				else{
					HX_STACK_LINE(158)
					int tmp14 = (index - (int)3);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(158)
					int tmp15 = accessor(tmp14).Cast< int >();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(158)
					int tmp16 = (int(tmp15) & int((int)240));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(158)
					bool tmp17 = (tmp16 == (int)224);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(158)
					if ((tmp17)){
						HX_STACK_LINE(158)
						tmp3 = (int)3;
					}
					else{
						HX_STACK_LINE(158)
						int tmp18 = (index - (int)4);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(158)
						int tmp19 = accessor(tmp18).Cast< int >();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(158)
						int tmp20 = (int(tmp19) & int((int)248));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(158)
						bool tmp21 = (tmp20 == (int)240);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(158)
						if ((tmp21)){
							HX_STACK_LINE(158)
							tmp3 = (int)4;
						}
						else{
							HX_STACK_LINE(158)
							tmp3 = (int)1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(158)
		hx::SubEq(index,tmp3);
		HX_STACK_LINE(159)
		++(count);
	}
	HX_STACK_LINE(161)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,backward_offset_by_code_points,return )

::luxe::utils::unifill::Utf8 Utf8_obj::fromCodePoint( int codePoint){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","fromCodePoint",0xbd55432c,"luxe.utils.unifill.Utf8.fromCodePoint","luxe/utils/unifill/Utf8.hx",11,0xbecfbbba)
	HX_STACK_ARG(codePoint,"codePoint")
	HX_STACK_LINE(12)
	::haxe::io::BytesBuffer tmp = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	::haxe::io::BytesBuffer buf = tmp;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(13)
	Dynamic tmp1 = buf->addByte_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	int tmp2 = codePoint;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp1,tmp2);
	HX_STACK_LINE(14)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(14)
	{
		HX_STACK_LINE(14)
		::haxe::io::Bytes tmp4 = buf->getBytes();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(14)
		::haxe::io::Bytes b = tmp4;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(14)
		{
			HX_STACK_LINE(14)
			::String tmp5 = b->toString();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(14)
			::String s = tmp5;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(14)
			tmp3 = s;
		}
	}
	HX_STACK_LINE(14)
	::luxe::utils::unifill::Utf8 tmp4 = ::luxe::utils::unifill::Utf8_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(14)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,fromCodePoint,return )

::luxe::utils::unifill::Utf8 Utf8_obj::fromCodePoints( Dynamic codePoints){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","fromCodePoints",0xed4583c7,"luxe.utils.unifill.Utf8.fromCodePoints","luxe/utils/unifill/Utf8.hx",20,0xbecfbbba)
	HX_STACK_ARG(codePoints,"codePoints")
	HX_STACK_LINE(21)
	::haxe::io::BytesBuffer tmp = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	::haxe::io::BytesBuffer buf = tmp;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(22)
	Dynamic tmp1 = codePoints->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp1);  __it->hasNext(); ){
		int c = __it->next();
		{
			HX_STACK_LINE(23)
			Dynamic tmp2 = buf->addByte_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			int tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp2,tmp3);
		}
;
	}
	HX_STACK_LINE(25)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::haxe::io::Bytes tmp3 = buf->getBytes();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		::haxe::io::Bytes b = tmp3;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			::String tmp4 = b->toString();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(25)
			::String s = tmp4;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(25)
			tmp2 = s;
		}
	}
	HX_STACK_LINE(25)
	::luxe::utils::unifill::Utf8 tmp3 = ::luxe::utils::unifill::Utf8_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,fromCodePoints,return )

::luxe::utils::unifill::Utf8 Utf8_obj::fromString( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","fromString",0xd047fde8,"luxe.utils.unifill.Utf8.fromString","luxe/utils/unifill/Utf8.hx",28,0xbecfbbba)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(29)
	::luxe::utils::unifill::Utf8 tmp = ::luxe::utils::unifill::Utf8_obj::__new(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,fromString,return )

::luxe::utils::unifill::Utf8 Utf8_obj::fromBytes( ::haxe::io::Bytes b){
	HX_STACK_FRAME("luxe.utils.unifill.Utf8","fromBytes",0xbc27a334,"luxe.utils.unifill.Utf8.fromBytes","luxe/utils/unifill/Utf8.hx",32,0xbecfbbba)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(33)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::String tmp1 = b->toString();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		::String s = tmp1;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(33)
		tmp = s;
	}
	HX_STACK_LINE(33)
	::luxe::utils::unifill::Utf8 tmp1 = ::luxe::utils::unifill::Utf8_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,fromBytes,return )


Utf8_obj::Utf8_obj()
{
}

void Utf8_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Utf8);
	HX_MARK_MEMBER_NAME(str,"str");
	HX_MARK_END_CLASS();
}

void Utf8_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(str,"str");
}

Dynamic Utf8_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { return str; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"charAt") ) { return charAt_dyn(); }
		if (HX_FIELD_EQ(inName,"substr") ) { return substr_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { return toBytes_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"codeUnitAt") ) { return codeUnitAt_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"codePointAt") ) { return codePointAt_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"codePointCount") ) { return codePointCount_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"codePointWidthAt") ) { return codePointWidthAt_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"offsetByCodePoints") ) { return offsetByCodePoints_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"codePointWidthBefore") ) { return codePointWidthBefore_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"forward_offset_by_code_points") ) { return forward_offset_by_code_points_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"backward_offset_by_code_points") ) { return backward_offset_by_code_points_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Utf8_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromCodePoint") ) { outValue = fromCodePoint_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromCodePoints") ) { outValue = fromCodePoints_dyn(); return true;  }
	}
	return false;
}

Dynamic Utf8_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { str=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Utf8_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Utf8_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Utf8_obj,str),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("codeUnitAt","\xa4","\x71","\x4e","\x2b"),
	HX_HCSTRING("codePointAt","\xb6","\x47","\xf4","\x4b"),
	HX_HCSTRING("charAt","\x69","\x79","\x75","\xb7"),
	HX_HCSTRING("codePointCount","\xec","\x2d","\xd7","\x2e"),
	HX_HCSTRING("codePointWidthAt","\xf6","\x26","\x17","\x09"),
	HX_HCSTRING("codePointWidthBefore","\x02","\xe4","\x4d","\xc6"),
	HX_HCSTRING("offsetByCodePoints","\x1a","\xf8","\x61","\x6c"),
	HX_HCSTRING("substr","\x31","\xef","\x0a","\x9a"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("forward_offset_by_code_points","\xbf","\x71","\x4d","\xf8"),
	HX_HCSTRING("backward_offset_by_code_points","\x5d","\x72","\x5a","\xf9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#endif

hx::Class Utf8_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromCodePoint","\x19","\x4d","\x4f","\xce"),
	HX_HCSTRING("fromCodePoints","\x3a","\x29","\x14","\xb7"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	::String(null()) };

void Utf8_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.unifill.Utf8","\x41","\x2b","\x28","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utf8_obj::__GetStatic;
	__mClass->mSetStaticField = &Utf8_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Utf8_obj >;
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
