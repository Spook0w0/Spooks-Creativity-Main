// Generated by Haxe 4.3.2
#ifndef INCLUDED_NoteHoldSplash
#define INCLUDED_NoteHoldSplash

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(ColorSwap)
HX_DECLARE_CLASS0(NoteHoldSplash)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES NoteHoldSplash_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef NoteHoldSplash_obj OBJ_;
		NoteHoldSplash_obj();

	public:
		enum { _hx_ClassId = 0x1a6315dc };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_note);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="NoteHoldSplash")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"NoteHoldSplash"); }
		static ::hx::ObjectPtr< NoteHoldSplash_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_note);
		static ::hx::ObjectPtr< NoteHoldSplash_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_note);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NoteHoldSplash_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NoteHoldSplash",b8,8a,39,11); }

		static void __boot();
		static Float scrollX;
		static Float scrollY;
		 ::ColorSwap colorSwap;
		::String idleAnim;
		::String textureLoaded;
		::Array< ::String > colors;
		void setup(Float x,Float y,::hx::Null< int >  note,::String texture,::hx::Null< Float >  hueColor,::hx::Null< Float >  satColor,::hx::Null< Float >  brtColor);
		::Dynamic setup_dyn();

		void setPos(Float x,Float y);
		::Dynamic setPos_dyn();

		void endHold(::hx::Null< bool >  success);
		::Dynamic endHold_dyn();

		void loadAnims(::String skin,::hx::Null< int >  noteData);
		::Dynamic loadAnims_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_NoteHoldSplash */ 
