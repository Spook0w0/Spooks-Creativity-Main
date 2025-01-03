// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_math_Vector3
#include <math/Vector3.h>
#endif
#ifndef INCLUDED_modchart_ModManager
#include <modchart/ModManager.h>
#endif
#ifndef INCLUDED_modchart_Modifier
#include <modchart/Modifier.h>
#endif
#ifndef INCLUDED_modchart_NoteModifier
#include <modchart/NoteModifier.h>
#endif
#ifndef INCLUDED_modchart_modifiers_InvertModifier
#include <modchart/modifiers/InvertModifier.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4f70726eac2eea54_6_new,"modchart.modifiers.InvertModifier","new",0x7edacce3,"modchart.modifiers.InvertModifier.new","modchart/modifiers/InvertModifier.hx",6,0x3c126a6b)
HX_LOCAL_STACK_FRAME(_hx_pos_4f70726eac2eea54_9_getName,"modchart.modifiers.InvertModifier","getName",0xbcb51c04,"modchart.modifiers.InvertModifier.getName","modchart/modifiers/InvertModifier.hx",9,0x3c126a6b)
HX_LOCAL_STACK_FRAME(_hx_pos_4f70726eac2eea54_12_getPos,"modchart.modifiers.InvertModifier","getPos",0x64ba0dfb,"modchart.modifiers.InvertModifier.getPos","modchart/modifiers/InvertModifier.hx",12,0x3c126a6b)
namespace modchart{
namespace modifiers{

void InvertModifier_obj::__construct( ::modchart::ModManager modMgr, ::modchart::Modifier parent){
            	HX_STACKFRAME(&_hx_pos_4f70726eac2eea54_6_new)
HXDLIN(   6)		super::__construct(modMgr,parent);
            	}

Dynamic InvertModifier_obj::__CreateEmpty() { return new InvertModifier_obj; }

void *InvertModifier_obj::_hx_vtable = 0;

Dynamic InvertModifier_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InvertModifier_obj > _hx_result = new InvertModifier_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool InvertModifier_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4386e937) {
		if (inClassId<=(int)0x0ce062e5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0ce062e5;
		} else {
			return inClassId==(int)0x4386e937;
		}
	} else {
		return inClassId==(int)0x503195cd;
	}
}

::String InvertModifier_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_4f70726eac2eea54_9_getName)
HXDLIN(   9)		return HX_("invert",16,e7,d8,9f);
            	}


 ::math::Vector3 InvertModifier_obj::getPos(Float time,Float diff,Float tDiff,Float beat, ::math::Vector3 pos,int data,int player, ::flixel::FlxSprite obj){
            	HX_STACKFRAME(&_hx_pos_4f70726eac2eea54_12_getPos)
HXLINE(  13)		if ((this->getValue(player) == 0)) {
HXLINE(  14)			return pos;
            		}
HXLINE(  16)		int distance;
HXDLIN(  16)		if ((::hx::Mod(data,2) == 0)) {
HXLINE(  16)			distance = 1;
            		}
            		else {
HXLINE(  16)			distance = -1;
            		}
HXDLIN(  16)		Float distance1 = (::Note_obj::swagWidth * ( (Float)(distance) ));
HXLINE(  17)		 ::math::Vector3 pos1 = pos;
HXDLIN(  17)		Float pos2 = pos1->x;
HXDLIN(  17)		pos1->x = (pos2 + (distance1 * this->getValue(player)));
HXLINE(  18)		return pos;
            	}



::hx::ObjectPtr< InvertModifier_obj > InvertModifier_obj::__new( ::modchart::ModManager modMgr, ::modchart::Modifier parent) {
	::hx::ObjectPtr< InvertModifier_obj > __this = new InvertModifier_obj();
	__this->__construct(modMgr,parent);
	return __this;
}

::hx::ObjectPtr< InvertModifier_obj > InvertModifier_obj::__alloc(::hx::Ctx *_hx_ctx, ::modchart::ModManager modMgr, ::modchart::Modifier parent) {
	InvertModifier_obj *__this = (InvertModifier_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InvertModifier_obj), true, "modchart.modifiers.InvertModifier"));
	*(void **)__this = InvertModifier_obj::_hx_vtable;
	__this->__construct(modMgr,parent);
	return __this;
}

InvertModifier_obj::InvertModifier_obj()
{
}

::hx::Val InvertModifier_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getPos") ) { return ::hx::Val( getPos_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return ::hx::Val( getName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *InvertModifier_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *InvertModifier_obj_sStaticStorageInfo = 0;
#endif

static ::String InvertModifier_obj_sMemberFields[] = {
	HX_("getName",01,22,82,1b),
	HX_("getPos",9e,96,24,a3),
	::String(null()) };

::hx::Class InvertModifier_obj::__mClass;

void InvertModifier_obj::__register()
{
	InvertModifier_obj _hx_dummy;
	InvertModifier_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("modchart.modifiers.InvertModifier",71,1f,dc,c5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InvertModifier_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InvertModifier_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InvertModifier_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InvertModifier_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace modchart
} // end namespace modifiers
