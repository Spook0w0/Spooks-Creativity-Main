// Generated by Haxe 4.3.2
#ifndef INCLUDED_modchart_ModManager
#define INCLUDED_modchart_ModManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(StrumNote)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(math,Vector3)
HX_DECLARE_CLASS1(modchart,EventTimeline)
HX_DECLARE_CLASS1(modchart,ModManager)
HX_DECLARE_CLASS1(modchart,Modifier)
HX_DECLARE_CLASS2(modchart,events,BaseEvent)
HX_DECLARE_CLASS2(modchart,events,CallbackEvent)

namespace modchart{


class HXCPP_CLASS_ATTRIBUTES ModManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ModManager_obj OBJ_;
		ModManager_obj();

	public:
		enum { _hx_ClassId = 0x0388d33b };

		void __construct( ::PlayState state);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="modchart.ModManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"modchart.ModManager"); }
		static ::hx::ObjectPtr< ModManager_obj > __new( ::PlayState state);
		static ::hx::ObjectPtr< ModManager_obj > __alloc(::hx::Ctx *_hx_ctx, ::PlayState state);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ModManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ModManager",eb,e3,d9,85); }

		bool modchartEnable;
		void registerDefaultModifiers();
		::Dynamic registerDefaultModifiers_dyn();

		 ::PlayState state;
		::Array< ::Dynamic> receptors;
		 ::modchart::EventTimeline timeline;
		 ::haxe::ds::StringMap notemodRegister;
		 ::haxe::ds::StringMap miscmodRegister;
		 ::haxe::ds::EnumValueMap registerByType;
		 ::haxe::ds::StringMap _hx_register;
		::Array< ::Dynamic> modArray;
		::Array< ::Dynamic> activeMods;
		void quickRegister( ::modchart::Modifier mod);
		::Dynamic quickRegister_dyn();

		void registerMod(::String modName, ::modchart::Modifier mod, ::Dynamic registerSubmods);
		::Dynamic registerMod_dyn();

		 ::modchart::Modifier get(::String modName);
		::Dynamic get_dyn();

		Float getPercent(::String modName,int player);
		::Dynamic getPercent_dyn();

		Float getValue(::String modName,int player);
		::Dynamic getValue_dyn();

		void setPercent(::String modName,Float val,::hx::Null< int >  player);
		::Dynamic setPercent_dyn();

		void setValue(::String modName,Float val,::hx::Null< int >  player);
		::Dynamic setValue_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		void updateTimeline(Float curStep);
		::Dynamic updateTimeline_dyn();

		Float getBaseX(int direction,int player);
		::Dynamic getBaseX_dyn();

		void updateObject(Float beat, ::flixel::FlxSprite obj, ::math::Vector3 pos,int player);
		::Dynamic updateObject_dyn();

		Float getVisPos(::hx::Null< Float >  songPos,::hx::Null< Float >  strumTime,::hx::Null< Float >  songSpeed);
		::Dynamic getVisPos_dyn();

		 ::math::Vector3 getPos(Float time,Float diff,Float tDiff,Float beat,int data,int player, ::flixel::FlxSprite obj,::Array< ::String > exclusions, ::math::Vector3 pos);
		::Dynamic getPos_dyn();

		void queueEaseP(Float step,Float endStep,::String modName,Float percent,::String style,::hx::Null< int >  player, ::Dynamic startVal);
		::Dynamic queueEaseP_dyn();

		void queueSetP(Float step,::String modName,Float percent,::hx::Null< int >  player);
		::Dynamic queueSetP_dyn();

		void ease(Float beat,Float beatDur,::String modName,Float target,::String style,::hx::Null< int >  player, ::Dynamic startVal);
		::Dynamic ease_dyn();

		void set(Float beat,::String modName,Float target,::hx::Null< int >  player);
		::Dynamic set_dyn();

		void queueEase(Float step,Float endStep,::String modName,Float target,::String style,::hx::Null< int >  player, ::Dynamic startVal);
		::Dynamic queueEase_dyn();

		void queueSet(Float step,::String modName,Float target,::hx::Null< int >  player);
		::Dynamic queueSet_dyn();

		void queueFunc(Float step,Float endStep, ::Dynamic callback);
		::Dynamic queueFunc_dyn();

		void queueFuncOnce(Float step, ::Dynamic callback);
		::Dynamic queueFuncOnce_dyn();

};

} // end namespace modchart

#endif /* INCLUDED_modchart_ModManager */ 
