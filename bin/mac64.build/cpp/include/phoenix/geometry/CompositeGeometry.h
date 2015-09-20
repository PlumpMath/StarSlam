#ifndef INCLUDED_phoenix_geometry_CompositeGeometry
#define INCLUDED_phoenix_geometry_CompositeGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,CompositeGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  CompositeGeometry_obj : public ::phoenix::geometry::Geometry_obj{
	public:
		typedef ::phoenix::geometry::Geometry_obj super;
		typedef CompositeGeometry_obj OBJ_;
		CompositeGeometry_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.geometry.CompositeGeometry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CompositeGeometry_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CompositeGeometry_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CompositeGeometry","\xb9","\x6d","\xaf","\xe8"); }

		Array< ::Dynamic > geometry;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void replace( Array< ::Dynamic > _geometry);
		Dynamic replace_dyn();

		virtual bool has_geometry( ::phoenix::geometry::Geometry geom);
		Dynamic has_geometry_dyn();

		virtual Void add_geometry( ::phoenix::geometry::Geometry geom);
		Dynamic add_geometry_dyn();

		virtual Void remove_geometry( ::phoenix::geometry::Geometry g);
		Dynamic remove_geometry_dyn();

		virtual Void add_to_batcher( ::phoenix::Batcher _batcher);
		Dynamic add_to_batcher_dyn();

		virtual Void drop( Dynamic remove);

		virtual Void translate( ::phoenix::Vector _offset);

		virtual ::phoenix::Color set_color( ::phoenix::Color _color);

		virtual int set_primitive_type( int val);

		virtual ::phoenix::Shader set_shader( ::phoenix::Shader val);

		virtual ::phoenix::Texture set_texture( ::phoenix::Texture val);

		virtual Float set_depth( Float val);

		virtual int set_group( int val);

		virtual bool set_locked( bool val);

		virtual bool set_dirty( bool val);

		virtual ::phoenix::Rectangle set_clip_rect( ::phoenix::Rectangle val);

		virtual bool set_visible( bool val);

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_CompositeGeometry */ 
