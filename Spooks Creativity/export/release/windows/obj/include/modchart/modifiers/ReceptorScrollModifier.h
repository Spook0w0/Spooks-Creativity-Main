// Generated by Haxe 4.3.2
#ifndef INCLUDED_modchart_modifiers_ReceptorScrollModifier
#define INCLUDED_modchart_modifiers_ReceptorScrollModifier

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_modchart_NoteModifier
#include <modchart/NoteModifier.h>
#endif
HX_DECLARE_CLASS0(Note)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(math,Vector3)
HX_DECLARE_CLASS1(modchart,ModManager)
HX_DECLARE_CLASS1(modchart,Modifier)
HX_DECLARE_CLASS1(modchart,NoteModifier)
HX_DECLARE_CLASS2(modchart,modifiers,ReceptorScrollModifier)

namespace modchart{
namespace modifiers{


class HXCPP_CLASS_ATTRIBUTES ReceptorScrollModifier_obj : public  ::modchart::NoteModifier_obj
{
	public:
		typedef  ::modchart::NoteModifier_obj super;
		typedef ReceptorScrollModifier_obj OBJ_;
		ReceptorScrollModifier_obj();

	public:
		enum { _hx_ClassId = 0x1ed503bc };

		void __construct( ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="modchart.modifiers.ReceptorScrollModifier")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"modchart.modifiers.ReceptorScrollModifier"); }
		static ::hx::ObjectPtr< ReceptorScrollModifier_obj > __new( ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		static ::hx::ObjectPtr< ReceptorScrollModifier_obj > __alloc(::hx::Ctx *_hx_ctx, ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ReceptorScrollModifier_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ReceptorScrollModifier",80,e5,f8,75); }

		Float lerp(Float a,Float b,Float c);
		::Dynamic lerp_dyn();

		Float moveSpeed;
		::String getName();

		 ::math::Vector3 getPos(Float time,Float visualDiff,Float timeDiff,Float beat, ::math::Vector3 pos,int data,int player, ::flixel::FlxSprite obj);

		void updateNote(Float beat, ::Note daNote, ::math::Vector3 pos,int player);

};

} // end namespace modchart
} // end namespace modifiers

#endif /* INCLUDED_modchart_modifiers_ReceptorScrollModifier */ 