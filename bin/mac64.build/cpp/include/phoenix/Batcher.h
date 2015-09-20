#ifndef INCLUDED_phoenix_Batcher
#define INCLUDED_phoenix_Batcher

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,structural,BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry)
HX_DECLARE_CLASS1(phoenix,BatchState)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,Camera)
HX_DECLARE_CLASS1(phoenix,Renderer)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,GeometryKey)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLBO)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLObject)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Batcher_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Batcher_obj OBJ_;
		Batcher_obj();
		Void __construct(::phoenix::Renderer _r,::String __o__name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.Batcher")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Batcher_obj > __new(::phoenix::Renderer _r,::String __o__name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Batcher_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Batcher","\x87","\x4a","\x61","\x8d"); }

		static void __boot();
		::String id;
		int layer;
		bool enabled;
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry geometry;
		::haxe::ds::IntMap groups;
		bool tree_changed;
		::snow::api::buffers::ArrayBufferView vertlist;
		::snow::api::buffers::ArrayBufferView tcoordlist;
		::snow::api::buffers::ArrayBufferView colorlist;
		::snow::api::buffers::ArrayBufferView normallist;
		::snow::api::buffers::ArrayBufferView static_vertlist;
		::snow::api::buffers::ArrayBufferView static_tcoordlist;
		::snow::api::buffers::ArrayBufferView static_colorlist;
		::snow::api::buffers::ArrayBufferView static_normallist;
		int vert_floats;
		int tcoord_floats;
		int color_floats;
		int normal_floats;
		int static_vert_floats;
		int static_tcoord_floats;
		int static_color_floats;
		int static_normal_floats;
		int buffer_count;
		int buffer_index;
		int max_verts;
		int max_floats;
		int vert_count;
		Array< ::Dynamic > vertexBuffers;
		Array< ::Dynamic > tcoordBuffers;
		Array< ::Dynamic > vcolorBuffers;
		Dynamic projectionmatrix_attribute;
		Dynamic modelviewmatrix_attribute;
		int vert_attribute;
		int tcoord_attribute;
		int color_attribute;
		Dynamic tex0_attribute;
		Dynamic tex1_attribute;
		Dynamic tex2_attribute;
		Dynamic tex3_attribute;
		Dynamic tex4_attribute;
		Dynamic tex5_attribute;
		Dynamic tex6_attribute;
		Dynamic tex7_attribute;
		::phoenix::Renderer renderer;
		::phoenix::Camera view;
		int draw_calls;
		int dynamic_batched_count;
		int static_batched_count;
		int visible_count;
		bool log;
		::String name;
		int sequence;
		virtual int set_layer( int _layer);
		Dynamic set_layer_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual int compare( ::phoenix::Batcher other);
		Dynamic compare_dyn();

		virtual Void add_group( int _group,Dynamic _pre_render,Dynamic _post_render);
		Dynamic add_group_dyn();

		virtual ::String compare_rule_to_string( int r);
		Dynamic compare_rule_to_string_dyn();

		virtual int compare_rule( ::phoenix::geometry::GeometryKey a,::phoenix::geometry::GeometryKey b);
		Dynamic compare_rule_dyn();

		virtual int geometry_compare( ::phoenix::geometry::GeometryKey a,::phoenix::geometry::GeometryKey b);
		Dynamic geometry_compare_dyn();

		virtual Void list_geometry( );
		Dynamic list_geometry_dyn();

		virtual Void add( ::phoenix::geometry::Geometry _geom,hx::Null< bool >  _force_add);
		Dynamic add_dyn();

		virtual Void empty( hx::Null< bool >  _drop);
		Dynamic empty_dyn();

		virtual Void remove( ::phoenix::geometry::Geometry _geom,Dynamic _remove_batcher_from_geometry);
		Dynamic remove_dyn();

		virtual Void shader_activate( ::phoenix::Shader _shader);
		Dynamic shader_activate_dyn();

		::phoenix::BatchState state;
		virtual Void batch( hx::Null< bool >  persist_immediate);
		Dynamic batch_dyn();

		virtual Void draw( Dynamic persist_immediate);
		Dynamic draw_dyn();

		virtual Void submit_static_geometry( ::phoenix::geometry::Geometry geom);
		Dynamic submit_static_geometry_dyn();

		virtual Void submit_current_vertex_list( int type);
		Dynamic submit_current_vertex_list_dyn();

		virtual Void geometry_batch( ::phoenix::geometry::Geometry geom);
		Dynamic geometry_batch_dyn();

		virtual Void geometry_batch_static( ::phoenix::geometry::Geometry geom);
		Dynamic geometry_batch_static_dyn();

		virtual Void _enable_attributes( );
		Dynamic _enable_attributes_dyn();

		virtual Void _disable_attributes( );
		Dynamic _disable_attributes_dyn();

		static int _sequence_key;
};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Batcher */ 
