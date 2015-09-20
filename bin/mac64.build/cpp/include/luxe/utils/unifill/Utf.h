#ifndef INCLUDED_luxe_utils_unifill_Utf
#define INCLUDED_luxe_utils_unifill_Utf

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,utils,unifill,Utf)
namespace luxe{
namespace utils{
namespace unifill{


class HXCPP_CLASS_ATTRIBUTES  Utf_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Utf_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual int get_length( )=0;
		virtual Dynamic get_length_dyn()=0;
		virtual int codeUnitAt( int index)=0;
		virtual Dynamic codeUnitAt_dyn()=0;
		virtual int codePointAt( int index)=0;
		virtual Dynamic codePointAt_dyn()=0;
		virtual int codePointWidthAt( int index)=0;
		virtual Dynamic codePointWidthAt_dyn()=0;
		virtual int codePointWidthBefore( int index)=0;
		virtual Dynamic codePointWidthBefore_dyn()=0;
		virtual Void validate( )=0;
		virtual Dynamic validate_dyn()=0;
};

#define DELEGATE_luxe_utils_unifill_Utf \
virtual int get_length( ) { return mDelegate->get_length();}  \
virtual Dynamic get_length_dyn() { return mDelegate->get_length_dyn();}  \
virtual int codeUnitAt( int index) { return mDelegate->codeUnitAt(index);}  \
virtual Dynamic codeUnitAt_dyn() { return mDelegate->codeUnitAt_dyn();}  \
virtual int codePointAt( int index) { return mDelegate->codePointAt(index);}  \
virtual Dynamic codePointAt_dyn() { return mDelegate->codePointAt_dyn();}  \
virtual int codePointWidthAt( int index) { return mDelegate->codePointWidthAt(index);}  \
virtual Dynamic codePointWidthAt_dyn() { return mDelegate->codePointWidthAt_dyn();}  \
virtual int codePointWidthBefore( int index) { return mDelegate->codePointWidthBefore(index);}  \
virtual Dynamic codePointWidthBefore_dyn() { return mDelegate->codePointWidthBefore_dyn();}  \
virtual Void validate( ) { return mDelegate->validate();}  \
virtual Dynamic validate_dyn() { return mDelegate->validate_dyn();}  \


template<typename IMPL>
class Utf_delegate_ : public Utf_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Utf_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_luxe_utils_unifill_Utf
};

} // end namespace luxe
} // end namespace utils
} // end namespace unifill

#endif /* INCLUDED_luxe_utils_unifill_Utf */ 
