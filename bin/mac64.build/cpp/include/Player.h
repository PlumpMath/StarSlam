#ifndef INCLUDED_Player
#define INCLUDED_Player

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
HX_DECLARE_CLASS1(phoenix,Color)


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::luxe::Entity_obj{
	public:
		typedef ::luxe::Entity_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Player_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		int size;
		Float location;
		Float speed;
		Float height;
		bool isJumping;
		Float jumpSpeed;
		Float jumpForce;
		Float gravityForce;
		Float jumpBoostForce;
		Float jumpBoostTimer;
		Float jumpBoostTimerMax;
		Float slamChargeTimer;
		Float slamChargeTimerMax;
		Float slamSpeed;
		Float minSlamSpeed;
		Float maxSlamSpeed;
		bool isSuperSlam;
		bool canHop;
		int moveMode;
		::Planet planet;
		::phoenix::Color color;
		virtual Void update( Float dt);

		virtual Void jump( );
		Dynamic jump_dyn();

		virtual Void fall( );
		Dynamic fall_dyn();

		virtual Void stopJumpBoost( );
		Dynamic stopJumpBoost_dyn();

		virtual Void land( );
		Dynamic land_dyn();

		virtual Void chargeSlam( );
		Dynamic chargeSlam_dyn();

		virtual Void slam( );
		Dynamic slam_dyn();

		virtual Void inputDown( );
		Dynamic inputDown_dyn();

		virtual Void inputUp( );
		Dynamic inputUp_dyn();

		virtual bool entersAtmosphere( ::Planet p);
		Dynamic entersAtmosphere_dyn();

		virtual Void setPlanet( ::Planet p);
		Dynamic setPlanet_dyn();

		virtual Void hopToPlanet( ::Planet p);
		Dynamic hopToPlanet_dyn();

		virtual Void init( );

		virtual Void ondestroy( );

};


#endif /* INCLUDED_Player */ 
