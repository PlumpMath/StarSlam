#ifndef INCLUDED_phoenix_BatchGroup
#define INCLUDED_phoenix_BatchGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,BatchGroup)
HX_DECLARE_CLASS1(phoenix,Batcher)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  BatchGroup_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BatchGroup_obj OBJ_;
		BatchGroup_obj();
		Void __construct(Dynamic _pre,Dynamic _post);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.BatchGroup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BatchGroup_obj > __new(Dynamic _pre,Dynamic _post);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BatchGroup_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BatchGroup","\x45","\xfd","\x93","\x42"); }

		Dynamic pre_render;
		Dynamic &pre_render_dyn() { return pre_render;}
		Dynamic post_render;
		Dynamic &post_render_dyn() { return post_render;}
};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_BatchGroup */ 