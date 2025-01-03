// Generated by Haxe 4.3.2
#ifndef INCLUDED_modchart_Modifier
#define INCLUDED_modchart_Modifier

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Note)
HX_DECLARE_CLASS0(StrumNote)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(math,Vector3)
HX_DECLARE_CLASS1(modchart,ModManager)
HX_DECLARE_CLASS1(modchart,Modifier)
HX_DECLARE_CLASS1(modchart,ModifierType)

namespace modchart{


class HXCPP_CLASS_ATTRIBUTES Modifier_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Modifier_obj OBJ_;
		Modifier_obj();

	public:
		enum { _hx_ClassId = 0x4386e937 };

		void __construct( ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="modchart.Modifier")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"modchart.Modifier"); }
		static ::hx::ObjectPtr< Modifier_obj > __new( ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		static ::hx::ObjectPtr< Modifier_obj > __alloc(::hx::Ctx *_hx_ctx, ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Modifier_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Modifier",77,97,79,f0); }

		 ::modchart::ModManager modMgr;
		::Array< Float > percents;
		 ::haxe::ds::StringMap submods;
		 ::modchart::Modifier parent;
		bool active;
		virtual  ::modchart::ModifierType getModType();
		::Dynamic getModType_dyn();

		virtual bool ignorePos();
		::Dynamic ignorePos_dyn();

		virtual bool ignoreUpdateReceptor();
		::Dynamic ignoreUpdateReceptor_dyn();

		virtual bool ignoreUpdateNote();
		::Dynamic ignoreUpdateNote_dyn();

		virtual bool doesUpdate();
		::Dynamic doesUpdate_dyn();

		virtual bool shouldExecute(int player,Float value);
		::Dynamic shouldExecute_dyn();

		virtual int getOrder();
		::Dynamic getOrder_dyn();

		virtual ::String getName();
		::Dynamic getName_dyn();

		Float getValue(int player);
		::Dynamic getValue_dyn();

		Float getPercent(int player);
		::Dynamic getPercent_dyn();

		void setValue(Float value,::hx::Null< int >  player);
		::Dynamic setValue_dyn();

		void setPercent(Float percent,::hx::Null< int >  player);
		::Dynamic setPercent_dyn();

		virtual ::Array< ::String > getSubmods();
		::Dynamic getSubmods_dyn();

		Float getSubmodPercent(::String modName,int player);
		::Dynamic getSubmodPercent_dyn();

		Float getSubmodValue(::String modName,int player);
		::Dynamic getSubmodValue_dyn();

		void setSubmodPercent(::String modName,Float endPercent,int player);
		::Dynamic setSubmodPercent_dyn();

		void setSubmodValue(::String modName,Float endValue,int player);
		::Dynamic setSubmodValue_dyn();

		virtual void updateReceptor(Float beat, ::StrumNote receptor, ::math::Vector3 pos,int player);
		::Dynamic updateReceptor_dyn();

		virtual void updateNote(Float beat, ::Note note, ::math::Vector3 pos,int player);
		::Dynamic updateNote_dyn();

		virtual  ::math::Vector3 getPos(Float time,Float diff,Float tDiff,Float beat, ::math::Vector3 pos,int data,int player, ::flixel::FlxSprite obj);
		::Dynamic getPos_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

};

} // end namespace modchart

#endif /* INCLUDED_modchart_Modifier */ 
