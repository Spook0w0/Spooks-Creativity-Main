// Generated by Haxe 4.3.2
#ifndef INCLUDED_modchart_modifiers_XModifier
#define INCLUDED_modchart_modifiers_XModifier

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
HX_DECLARE_CLASS2(modchart,modifiers,XModifier)

namespace modchart{
namespace modifiers{


class HXCPP_CLASS_ATTRIBUTES XModifier_obj : public  ::modchart::NoteModifier_obj
{
	public:
		typedef  ::modchart::NoteModifier_obj super;
		typedef XModifier_obj OBJ_;
		XModifier_obj();

	public:
		enum { _hx_ClassId = 0x665b46af };

		void __construct( ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="modchart.modifiers.XModifier")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"modchart.modifiers.XModifier"); }
		static ::hx::ObjectPtr< XModifier_obj > __new( ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		static ::hx::ObjectPtr< XModifier_obj > __alloc(::hx::Ctx *_hx_ctx, ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~XModifier_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("XModifier",cf,af,75,73); }

		::String getName();

		bool shouldExecute(int player,Float val);

		void updateNote(Float beat, ::Note daNote, ::math::Vector3 pos,int player);

		::Array< ::String > getSubmods();

};

} // end namespace modchart
} // end namespace modifiers

#endif /* INCLUDED_modchart_modifiers_XModifier */ 
