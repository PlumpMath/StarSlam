#ifndef INCLUDED_luxe_utils_unifill_Utf8
#define INCLUDED_luxe_utils_unifill_Utf8

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_utils_unifill_Utf
#include <luxe/utils/unifill/Utf.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(luxe,utils,unifill,Utf)
HX_DECLARE_CLASS3(luxe,utils,unifill,Utf8)
namespace luxe{
namespace utils{
namespace unifill{


class HXCPP_CLASS_ATTRIBUTES  Utf8_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Utf8_obj OBJ_;
		Utf8_obj();
		Void __construct(::String s);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.utils.unifill.Utf8")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Utf8_obj > __new(::String s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Utf8_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::luxe::utils::unifill::Utf_obj *();
		::String __ToString() const { return HX_HCSTRING("Utf8","\x51","\x81","\x87","\x38"); }

		virtual int codeUnitAt( int index);
		Dynamic codeUnitAt_dyn();

		virtual int codePointAt( int index);
		Dynamic codePointAt_dyn();

		virtual ::luxe::utils::unifill::Utf8 charAt( int index);
		Dynamic charAt_dyn();

		virtual int codePointCount( int beginIndex,int endIndex);
		Dynamic codePointCount_dyn();

		virtual int codePointWidthAt( int index);
		Dynamic codePointWidthAt_dyn();

		virtual int codePointWidthBefore( int index);
		Dynamic codePointWidthBefore_dyn();

		virtual int offsetByCodePoints( int index,int codePointOffset);
		Dynamic offsetByCodePoints_dyn();

		virtual ::luxe::utils::unifill::Utf8 substr( int index,Dynamic len);
		Dynamic substr_dyn();

		virtual Void validate( );
		Dynamic validate_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::haxe::io::Bytes toBytes( );
		Dynamic toBytes_dyn();

		::String str;
		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual int forward_offset_by_code_points( int index,int codePointOffset);
		Dynamic forward_offset_by_code_points_dyn();

		virtual int backward_offset_by_code_points( int index,int codePointOffset);
		Dynamic backward_offset_by_code_points_dyn();

		static ::luxe::utils::unifill::Utf8 fromCodePoint( int codePoint);
		static Dynamic fromCodePoint_dyn();

		static ::luxe::utils::unifill::Utf8 fromCodePoints( Dynamic codePoints);
		static Dynamic fromCodePoints_dyn();

		static ::luxe::utils::unifill::Utf8 fromString( ::String s);
		static Dynamic fromString_dyn();

		static ::luxe::utils::unifill::Utf8 fromBytes( ::haxe::io::Bytes b);
		static Dynamic fromBytes_dyn();

};

} // end namespace luxe
} // end namespace utils
} // end namespace unifill

#endif /* INCLUDED_luxe_utils_unifill_Utf8 */ 
