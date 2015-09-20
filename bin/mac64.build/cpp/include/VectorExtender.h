#ifndef INCLUDED_VectorExtender
#define INCLUDED_VectorExtender

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(VectorExtender)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(phoenix,Transform)
HX_DECLARE_CLASS1(phoenix,Vector)


class HXCPP_CLASS_ATTRIBUTES  VectorExtender_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VectorExtender_obj OBJ_;
		VectorExtender_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="VectorExtender")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VectorExtender_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VectorExtender_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VectorExtender","\xca","\xd0","\x4e","\xc7"); }

		static Float distance( ::phoenix::Vector pos1,::phoenix::Vector pos2);
		static Dynamic distance_dyn();

		static Float cross2D( ::phoenix::Vector v1,::phoenix::Vector v2);
		static Dynamic cross2D_dyn();

		static ::phoenix::Vector toLocalSpace( ::phoenix::Vector v,::phoenix::Transform t);
		static Dynamic toLocalSpace_dyn();

		static ::phoenix::Vector toWorldSpace( ::phoenix::Vector v,::phoenix::Transform t);
		static Dynamic toWorldSpace_dyn();

		static ::phoenix::Vector absolute( ::phoenix::Vector v);
		static Dynamic absolute_dyn();

		static ::phoenix::Vector setFromAngle( ::phoenix::Vector v,Float radians);
		static Dynamic setFromAngle_dyn();

		static ::phoenix::Vector tangent2D( ::phoenix::Vector v);
		static Dynamic tangent2D_dyn();

		static ::phoenix::Vector closestPointOnLine( ::phoenix::Vector v,::phoenix::Vector a,::phoenix::Vector b);
		static Dynamic closestPointOnLine_dyn();

};


#endif /* INCLUDED_VectorExtender */ 
