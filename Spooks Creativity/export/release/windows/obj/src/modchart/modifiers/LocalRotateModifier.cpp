// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_modchart_modifiers_LocalRotateModifier
#include <modchart/modifiers/LocalRotateModifier.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5783b3cec7a8a278_22_new,"modchart.modifiers.LocalRotateModifier","new",0xe6ae2fab,"modchart.modifiers.LocalRotateModifier.new","modchart/modifiers/LocalRotateModifier.hx",22,0xe08d1ae7)
HX_LOCAL_STACK_FRAME(_hx_pos_5783b3cec7a8a278_13_getName,"modchart.modifiers.LocalRotateModifier","getName",0x770582cc,"modchart.modifiers.LocalRotateModifier.getName","modchart/modifiers/LocalRotateModifier.hx",13,0xe08d1ae7)
HX_LOCAL_STACK_FRAME(_hx_pos_5783b3cec7a8a278_16_getOrder,"modchart.modifiers.LocalRotateModifier","getOrder",0x4c6950ed,"modchart.modifiers.LocalRotateModifier.getOrder","modchart/modifiers/LocalRotateModifier.hx",16,0xe08d1ae7)
HX_LOCAL_STACK_FRAME(_hx_pos_5783b3cec7a8a278_19_lerp,"modchart.modifiers.LocalRotateModifier","lerp",0xf06914cc,"modchart.modifiers.LocalRotateModifier.lerp","modchart/modifiers/LocalRotateModifier.hx",19,0xe08d1ae7)
HX_LOCAL_STACK_FRAME(_hx_pos_5783b3cec7a8a278_29_rotateV3,"modchart.modifiers.LocalRotateModifier","rotateV3",0xbff46f0d,"modchart.modifiers.LocalRotateModifier.rotateV3","modchart/modifiers/LocalRotateModifier.hx",29,0xe08d1ae7)
HX_LOCAL_STACK_FRAME(_hx_pos_5783b3cec7a8a278_47_getPos,"modchart.modifiers.LocalRotateModifier","getPos",0xade29833,"modchart.modifiers.LocalRotateModifier.getPos","modchart/modifiers/LocalRotateModifier.hx",47,0xe08d1ae7)
HX_LOCAL_STACK_FRAME(_hx_pos_5783b3cec7a8a278_70_getSubmods,"modchart.modifiers.LocalRotateModifier","getSubmods",0xedf3b310,"modchart.modifiers.LocalRotateModifier.getSubmods","modchart/modifiers/LocalRotateModifier.hx",70,0xe08d1ae7)
namespace modchart{
namespace modifiers{

void LocalRotateModifier_obj::__construct( ::modchart::ModManager modMgr,::String __o_prefix, ::modchart::Modifier parent){
            		::String prefix = __o_prefix;
            		if (::hx::IsNull(__o_prefix)) prefix = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_5783b3cec7a8a278_22_new)
HXLINE(  23)		this->prefix = prefix;
HXLINE(  24)		super::__construct(modMgr,parent);
            	}

Dynamic LocalRotateModifier_obj::__CreateEmpty() { return new LocalRotateModifier_obj; }

void *LocalRotateModifier_obj::_hx_vtable = 0;

Dynamic LocalRotateModifier_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LocalRotateModifier_obj > _hx_result = new LocalRotateModifier_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool LocalRotateModifier_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4386e937) {
		if (inClassId<=(int)0x0ce062e5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0ce062e5;
		} else {
			return inClassId==(int)0x4386e937;
		}
	} else {
		return inClassId==(int)0x6df87a5d;
	}
}

::String LocalRotateModifier_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_5783b3cec7a8a278_13_getName)
HXDLIN(  13)		return ((HX_("",00,00,00,00) + this->prefix) + HX_("rotateX",9d,49,1d,f1));
            	}


int LocalRotateModifier_obj::getOrder(){
            	HX_STACKFRAME(&_hx_pos_5783b3cec7a8a278_16_getOrder)
HXDLIN(  16)		return -1;
            	}


Float LocalRotateModifier_obj::lerp(Float a,Float b,Float c){
            	HX_STACKFRAME(&_hx_pos_5783b3cec7a8a278_19_lerp)
HXDLIN(  19)		return (a + ((b - a) * c));
            	}


HX_DEFINE_DYNAMIC_FUNC3(LocalRotateModifier_obj,lerp,return )

 ::math::Vector3 LocalRotateModifier_obj::rotateV3( ::math::Vector3 vec,Float xA,Float yA,Float zA){
            	HX_GC_STACKFRAME(&_hx_pos_5783b3cec7a8a278_29_rotateV3)
HXLINE(  30)		 ::flixel::math::FlxBasePoint rotateZ = ::CoolUtil_obj::rotate(vec->x,vec->y,zA,null());
HXLINE(  31)		 ::math::Vector3 offZ =  ::math::Vector3_obj::__alloc( HX_CTX ,rotateZ->x,rotateZ->y,vec->z);
HXLINE(  33)		 ::flixel::math::FlxBasePoint rotateX = ::CoolUtil_obj::rotate(offZ->z,offZ->y,xA,null());
HXLINE(  34)		 ::math::Vector3 offX =  ::math::Vector3_obj::__alloc( HX_CTX ,offZ->x,rotateX->y,rotateX->x);
HXLINE(  36)		 ::flixel::math::FlxBasePoint rotateY = ::CoolUtil_obj::rotate(offX->x,offX->z,yA,null());
HXLINE(  37)		 ::math::Vector3 offY =  ::math::Vector3_obj::__alloc( HX_CTX ,rotateY->x,offX->y,rotateY->y);
HXLINE(  39)		if (rotateZ->_weak) {
HXLINE(  39)			rotateZ->put();
            		}
HXLINE(  40)		if (rotateX->_weak) {
HXLINE(  40)			rotateX->put();
            		}
HXLINE(  41)		if (rotateY->_weak) {
HXLINE(  41)			rotateY->put();
            		}
HXLINE(  43)		return offY;
            	}


HX_DEFINE_DYNAMIC_FUNC4(LocalRotateModifier_obj,rotateV3,return )

 ::math::Vector3 LocalRotateModifier_obj::getPos(Float time,Float visualDiff,Float timeDiff,Float beat, ::math::Vector3 pos,int data,int player, ::flixel::FlxSprite obj){
            	HX_GC_STACKFRAME(&_hx_pos_5783b3cec7a8a278_47_getPos)
HXLINE(  48)		Float x = ((((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.5)) - ::Note_obj::swagWidth) - ( (Float)(54) )) + (::Note_obj::swagWidth * ((Float)1.5)));
HXLINE(  49)		switch((int)(player)){
            			case (int)0: {
HXLINE(  52)				x = (x + (((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.5)) - (::Note_obj::swagWidth * ( (Float)(2) ))) - ( (Float)(100) )));
            			}
            			break;
            			case (int)1: {
HXLINE(  54)				x = (x - (((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.5)) - (::Note_obj::swagWidth * ( (Float)(2) ))) - ( (Float)(100) )));
            			}
            			break;
            		}
HXLINE(  57)		x = (x - ( (Float)(56) ));
HXLINE(  59)		 ::math::Vector3 origin =  ::math::Vector3_obj::__alloc( HX_CTX ,x,((( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.5)) - (::Note_obj::swagWidth * ((Float)0.5))),null());
HXLINE(  61)		 ::math::Vector3 result = null();
HXDLIN(  61)		if (::hx::IsNull( result )) {
HXLINE(  61)			result =  ::math::Vector3_obj::__alloc( HX_CTX ,null(),null(),null());
            		}
HXDLIN(  61)		{
HXLINE(  61)			result->x = (pos->x - origin->x);
HXDLIN(  61)			result->y = (pos->y - origin->y);
HXDLIN(  61)			result->z = (pos->z - origin->z);
            		}
HXDLIN(  61)		 ::math::Vector3 diff = result;
HXLINE(  62)		int scale = ::flixel::FlxG_obj::height;
HXLINE(  63)		 ::math::Vector3 diff1 = diff;
HXDLIN(  63)		diff1->z = (diff1->z * ( (Float)(scale) ));
HXLINE(  64)		Float out = this->getValue(player);
HXDLIN(  64)		Float out1 = this->getSubmodValue(((HX_("",00,00,00,00) + this->prefix) + HX_("rotateY",9e,49,1d,f1)),player);
HXDLIN(  64)		 ::math::Vector3 out2 = this->rotateV3(diff,out,out1,this->getSubmodValue(((HX_("",00,00,00,00) + this->prefix) + HX_("rotateZ",9f,49,1d,f1)),player));
HXLINE(  65)		 ::math::Vector3 out3 = out2;
HXDLIN(  65)		out3->z = (out3->z / ( (Float)(scale) ));
HXLINE(  66)		 ::math::Vector3 result1 = null();
HXDLIN(  66)		if (::hx::IsNull( result1 )) {
HXLINE(  66)			result1 =  ::math::Vector3_obj::__alloc( HX_CTX ,null(),null(),null());
            		}
HXDLIN(  66)		{
HXLINE(  66)			result1->x = (origin->x + out2->x);
HXDLIN(  66)			result1->y = (origin->y + out2->y);
HXDLIN(  66)			result1->z = (origin->z + out2->z);
            		}
HXDLIN(  66)		return result1;
            	}


::Array< ::String > LocalRotateModifier_obj::getSubmods(){
            	HX_STACKFRAME(&_hx_pos_5783b3cec7a8a278_70_getSubmods)
HXDLIN(  70)		return ::Array_obj< ::String >::__new(2)->init(0,((HX_("",00,00,00,00) + this->prefix) + HX_("rotateY",9e,49,1d,f1)))->init(1,((HX_("",00,00,00,00) + this->prefix) + HX_("rotateZ",9f,49,1d,f1)));
            	}



::hx::ObjectPtr< LocalRotateModifier_obj > LocalRotateModifier_obj::__new( ::modchart::ModManager modMgr,::String __o_prefix, ::modchart::Modifier parent) {
	::hx::ObjectPtr< LocalRotateModifier_obj > __this = new LocalRotateModifier_obj();
	__this->__construct(modMgr,__o_prefix,parent);
	return __this;
}

::hx::ObjectPtr< LocalRotateModifier_obj > LocalRotateModifier_obj::__alloc(::hx::Ctx *_hx_ctx, ::modchart::ModManager modMgr,::String __o_prefix, ::modchart::Modifier parent) {
	LocalRotateModifier_obj *__this = (LocalRotateModifier_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LocalRotateModifier_obj), true, "modchart.modifiers.LocalRotateModifier"));
	*(void **)__this = LocalRotateModifier_obj::_hx_vtable;
	__this->__construct(modMgr,__o_prefix,parent);
	return __this;
}

LocalRotateModifier_obj::LocalRotateModifier_obj()
{
}

void LocalRotateModifier_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LocalRotateModifier);
	HX_MARK_MEMBER_NAME(prefix,"prefix");
	 ::modchart::Modifier_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LocalRotateModifier_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(prefix,"prefix");
	 ::modchart::Modifier_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LocalRotateModifier_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { return ::hx::Val( lerp_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { return ::hx::Val( prefix ); }
		if (HX_FIELD_EQ(inName,"getPos") ) { return ::hx::Val( getPos_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return ::hx::Val( getName_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getOrder") ) { return ::hx::Val( getOrder_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotateV3") ) { return ::hx::Val( rotateV3_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getSubmods") ) { return ::hx::Val( getSubmods_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LocalRotateModifier_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { prefix=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LocalRotateModifier_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("prefix",92,d9,b6,ae));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LocalRotateModifier_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(LocalRotateModifier_obj,prefix),HX_("prefix",92,d9,b6,ae)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LocalRotateModifier_obj_sStaticStorageInfo = 0;
#endif

static ::String LocalRotateModifier_obj_sMemberFields[] = {
	HX_("getName",01,22,82,1b),
	HX_("getOrder",18,00,f8,94),
	HX_("lerp",77,12,b0,47),
	HX_("prefix",92,d9,b6,ae),
	HX_("rotateV3",38,1e,83,08),
	HX_("getPos",9e,96,24,a3),
	HX_("getSubmods",fb,c2,ec,7a),
	::String(null()) };

::hx::Class LocalRotateModifier_obj::__mClass;

void LocalRotateModifier_obj::__register()
{
	LocalRotateModifier_obj _hx_dummy;
	LocalRotateModifier_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("modchart.modifiers.LocalRotateModifier",39,7e,04,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LocalRotateModifier_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LocalRotateModifier_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocalRotateModifier_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocalRotateModifier_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace modchart
} // end namespace modifiers