// Generated by Haxe 4.3.2
#ifndef INCLUDED_Boyfriend
#define INCLUDED_Boyfriend

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Character
#include <Character.h>
#endif
HX_DECLARE_CLASS0(Boyfriend)
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Boyfriend_obj : public  ::Character_obj
{
	public:
		typedef  ::Character_obj super;
		typedef Boyfriend_obj OBJ_;
		Boyfriend_obj();

	public:
		enum { _hx_ClassId = 0x4bce7e8a };

		void __construct(Float x,Float y,::String __o__hx_char);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Boyfriend")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Boyfriend"); }
		static ::hx::ObjectPtr< Boyfriend_obj > __new(Float x,Float y,::String __o__hx_char);
		static ::hx::ObjectPtr< Boyfriend_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o__hx_char);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Boyfriend_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Boyfriend",4a,09,8b,88); }

		bool startedDeath;
		void update(Float elapsed);

};


#endif /* INCLUDED_Boyfriend */ 
