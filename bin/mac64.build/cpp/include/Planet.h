#ifndef INCLUDED_Planet
#define INCLUDED_Planet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
HX_DECLARE_CLASS0(Planet)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(phoenix,Vector)


class HXCPP_CLASS_ATTRIBUTES  Planet_obj : public ::luxe::Entity_obj{
	public:
		typedef ::luxe::Entity_obj super;
		typedef Planet_obj OBJ_;
		Planet_obj();
		Void __construct(Dynamic _options,int _points);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Planet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Planet_obj > __new(Dynamic _options,int _points);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Planet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Planet","\xb8","\x06","\x45","\x6c"); }

		int pointsToArea;
		int sizeToAtmosphere;
		int points;
		Float radius;
		Float diameter;
		::phoenix::Vector velocity;
		Float frictionPercent;
		int fictionMaxCoefficient;
		bool isSuperSlam;
		Array< ::Dynamic > players;
		virtual Void update( Float dt);

		virtual Void superSlam( ::phoenix::Vector dir);
		Dynamic superSlam_dyn();

		virtual Void endSuperSlam( );
		Dynamic endSuperSlam_dyn();

		virtual Void slam( Float force,::phoenix::Vector dir);
		Dynamic slam_dyn();

		virtual Float atmosphereRadius( );
		Dynamic atmosphereRadius_dyn();

		virtual bool collidesWithPlanet( ::Planet p);
		Dynamic collidesWithPlanet_dyn();

		virtual Void mergeWithPlanet( ::Planet p);
		Dynamic mergeWithPlanet_dyn();

		virtual Void splitPlanet( );
		Dynamic splitPlanet_dyn();

		virtual Void init( );

		virtual Void ondestroy( );

};


#endif /* INCLUDED_Planet */ 
