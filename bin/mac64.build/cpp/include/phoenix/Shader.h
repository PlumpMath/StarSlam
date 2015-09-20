#ifndef INCLUDED_phoenix_Shader
#define INCLUDED_phoenix_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Matrix)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLObject)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLPO)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLSO)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Shader_obj : public ::luxe::resource::Resource_obj{
	public:
		typedef ::luxe::resource::Resource_obj super;
		typedef Shader_obj OBJ_;
		Shader_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.Shader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Shader_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51"); }

		::String log;
		::String vert_source;
		::String frag_source;
		::String vert_id;
		::String frag_id;
		::snow::modules::opengl::native::GLSO vert_shader;
		::snow::modules::opengl::native::GLSO frag_shader;
		::snow::modules::opengl::native::GLPO program;
		::snow::modules::opengl::native::GLSO shader;
		int vert_attribute;
		int tcoord_attribute;
		int color_attribute;
		int normal_attribute;
		Dynamic projectionmatrix_attribute;
		Dynamic modelviewmatrix_attribute;
		Dynamic tex0_attribute;
		Dynamic tex1_attribute;
		Dynamic tex2_attribute;
		Dynamic tex3_attribute;
		Dynamic tex4_attribute;
		Dynamic tex5_attribute;
		Dynamic tex6_attribute;
		Dynamic tex7_attribute;
		::haxe::ds::StringMap uniforms;
		::haxe::ds::StringMap uniform_textures;
		virtual Void activate( );
		Dynamic activate_dyn();

		virtual Void deactivate( );
		Dynamic deactivate_dyn();

		virtual ::phoenix::Shader clone( ::String _id);
		Dynamic clone_dyn();

		virtual Void set_int( ::String _name,int _value);
		Dynamic set_int_dyn();

		virtual Void set_float( ::String _name,Float _value);
		Dynamic set_float_dyn();

		virtual Void set_vector2( ::String _name,::phoenix::Vector _value);
		Dynamic set_vector2_dyn();

		virtual Void set_vector3( ::String _name,::phoenix::Vector _value);
		Dynamic set_vector3_dyn();

		virtual Void set_vector4( ::String _name,::phoenix::Vector _value);
		Dynamic set_vector4_dyn();

		virtual Void set_matrix4( ::String _name,::phoenix::Matrix _value);
		Dynamic set_matrix4_dyn();

		virtual Void set_color( ::String _name,::phoenix::Color _value);
		Dynamic set_color_dyn();

		virtual Void set_texture( ::String _name,::phoenix::Texture _value);
		Dynamic set_texture_dyn();

		virtual ::String format_log( ::String _log);
		Dynamic format_log_dyn();

		virtual ::snow::modules::opengl::native::GLSO compile( int _type,::String _source);
		Dynamic compile_dyn();

		virtual bool link( );
		Dynamic link_dyn();

		virtual Void clear( );

		virtual ::snow::api::Promise reload( );

		virtual bool from_string( ::String _vert_source,::String _fragment_source);
		Dynamic from_string_dyn();

		virtual Void apply_uniforms( );
		Dynamic apply_uniforms_dyn();

		virtual Dynamic location( ::String _name);
		Dynamic location_dyn();

		virtual Void apply_int( Dynamic _location,int _int);
		Dynamic apply_int_dyn();

		virtual Void apply_float( Dynamic _location,Float _float);
		Dynamic apply_float_dyn();

		virtual Void apply_vec2( Dynamic _location,::phoenix::Vector _vec);
		Dynamic apply_vec2_dyn();

		virtual Void apply_vec3( Dynamic _location,::phoenix::Vector _vec);
		Dynamic apply_vec3_dyn();

		virtual Void apply_vec4( Dynamic _location,::phoenix::Vector _vec);
		Dynamic apply_vec4_dyn();

		virtual Void apply_mat4( Dynamic _location,::phoenix::Matrix _mat);
		Dynamic apply_mat4_dyn();

		virtual Void apply_color( Dynamic _location,::phoenix::Color _color);
		Dynamic apply_color_dyn();

		virtual Void apply_texture( Dynamic _location,::phoenix::Texture _tex);
		Dynamic apply_texture_dyn();

		virtual Void add_log( ::String _log);
		Dynamic add_log_dyn();

		virtual ::String toString( );

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Shader */ 
