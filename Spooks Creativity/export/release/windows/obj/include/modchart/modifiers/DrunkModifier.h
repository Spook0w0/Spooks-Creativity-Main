// Generated by Haxe 4.3.2
#ifndef INCLUDED_modchart_modifiers_DrunkModifier
#define INCLUDED_modchart_modifiers_DrunkModifier

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_modchart_NoteModifier
#include <modchart/NoteModifier.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(math,Vector3)
HX_DECLARE_CLASS1(modchart,ModManager)
HX_DECLARE_CLASS1(modchart,Modifier)
HX_DECLARE_CLASS1(modchart,NoteModifier)
HX_DECLARE_CLASS2(modchart,modifiers,DrunkModifier)

namespace modchart{
namespace modifiers{


class HXCPP_CLASS_ATTRIBUTES DrunkModifier_obj : public  ::modchart::NoteModifier_obj
{
	public:
		typedef  ::modchart::NoteModifier_obj super;
		typedef DrunkModifier_obj OBJ_;
		DrunkModifier_obj();

	public:
		enum { _hx_ClassId = 0x4d91af5b };

		void __construct( ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="modchart.modifiers.DrunkModifier")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"modchart.modifiers.DrunkModifier"); }
		static ::hx::ObjectPtr< DrunkModifier_obj > __new( ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		static ::hx::ObjectPtr< DrunkModifier_obj > __alloc(::hx::Ctx *_hx_ctx, ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DrunkModifier_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DrunkModifier",7b,28,67,6f); }

		::String getName();

		 ::math::Vector3 getPos(Float time,Float visualDiff,Float timeDiff,Float beat, ::math::Vector3 pos,int data,int player, ::flixel::FlxSprite obj);

		::Array< ::String > getSubmods();

};

} // end namespace modchart
} // end namespace modifiers

#endif /* INCLUDED_modchart_modifiers_DrunkModifier */ 
