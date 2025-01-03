// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Mover
#include <flixel/system/debug/interaction/tools/Mover.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Pointer
#include <flixel/system/debug/interaction/tools/Pointer.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools__Mover_GraphicMoverTool
#include <flixel/system/debug/interaction/tools/_Mover/GraphicMoverTool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a3cdf69c667c8d41_17_new,"flixel.system.debug.interaction.tools.Mover","new",0x9079915c,"flixel.system.debug.interaction.tools.Mover.new","flixel/system/debug/interaction/tools/Mover.hx",17,0xc1a785b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3cdf69c667c8d41_23_init,"flixel.system.debug.interaction.tools.Mover","init",0xd69e5694,"flixel.system.debug.interaction.tools.Mover.init","flixel/system/debug/interaction/tools/Mover.hx",23,0xc1a785b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3cdf69c667c8d41_36_update,"flixel.system.debug.interaction.tools.Mover","update",0x6b898a8d,"flixel.system.debug.interaction.tools.Mover.update","flixel/system/debug/interaction/tools/Mover.hx",36,0xc1a785b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3cdf69c667c8d41_54_stopDragging,"flixel.system.debug.interaction.tools.Mover","stopDragging",0x8f5cfa75,"flixel.system.debug.interaction.tools.Mover.stopDragging","flixel/system/debug/interaction/tools/Mover.hx",54,0xc1a785b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3cdf69c667c8d41_58_startDragging,"flixel.system.debug.interaction.tools.Mover","startDragging",0xf80ef34d,"flixel.system.debug.interaction.tools.Mover.startDragging","flixel/system/debug/interaction/tools/Mover.hx",58,0xc1a785b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a3cdf69c667c8d41_72_doDragging,"flixel.system.debug.interaction.tools.Mover","doDragging",0xb6bbe9fe,"flixel.system.debug.interaction.tools.Mover.doDragging","flixel/system/debug/interaction/tools/Mover.hx",72,0xc1a785b7)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{

void Mover_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a3cdf69c667c8d41_17_new)
HXLINE(  19)		this->_dragging = false;
HXLINE(  17)		super::__construct();
            	}

Dynamic Mover_obj::__CreateEmpty() { return new Mover_obj; }

void *Mover_obj::_hx_vtable = 0;

Dynamic Mover_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Mover_obj > _hx_result = new Mover_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mover_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1361d5a9 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x67484b98) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x67484b98;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

 ::flixel::_hx_system::debug::interaction::tools::Tool Mover_obj::init( ::flixel::_hx_system::debug::interaction::Interaction brain){
            	HX_GC_STACKFRAME(&_hx_pos_a3cdf69c667c8d41_23_init)
HXLINE(  24)		this->super::init(brain);
HXLINE(  25)		this->_lastCursorPosition =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,brain->flixelPointer->x,brain->flixelPointer->x);
HXLINE(  27)		this->_name = HX_("Mover",21,3c,93,9f);
HXLINE(  28)		this->_shortcut = HX_("Shift",62,5c,50,0f);
HXLINE(  29)		this->setButton(::hx::ClassOf< ::flixel::_hx_system::debug::interaction::tools::_Mover::GraphicMoverTool >());
HXLINE(  30)		this->setCursor( ::flixel::_hx_system::debug::interaction::tools::_Mover::GraphicMoverTool_obj::__alloc( HX_CTX ,0,0,null(),null()));
HXLINE(  32)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


void Mover_obj::update(){
            	HX_STACKFRAME(&_hx_pos_a3cdf69c667c8d41_36_update)
HXLINE(  38)		bool _hx_tmp;
HXDLIN(  38)		if (!(this->isActive())) {
HXLINE(  38)			_hx_tmp = !(this->_brain->keyPressed(16));
            		}
            		else {
HXLINE(  38)			_hx_tmp = false;
            		}
HXDLIN(  38)		if (_hx_tmp) {
HXLINE(  39)			return;
            		}
HXLINE(  41)		bool _hx_tmp1;
HXDLIN(  41)		if (this->_brain->pointerPressed) {
HXLINE(  41)			_hx_tmp1 = !(this->_dragging);
            		}
            		else {
HXLINE(  41)			_hx_tmp1 = false;
            		}
HXDLIN(  41)		if (_hx_tmp1) {
HXLINE(  42)			this->startDragging();
            		}
            		else {
HXLINE(  43)			bool _hx_tmp2;
HXDLIN(  43)			if (this->_brain->pointerPressed) {
HXLINE(  43)				_hx_tmp2 = this->_dragging;
            			}
            			else {
HXLINE(  43)				_hx_tmp2 = false;
            			}
HXDLIN(  43)			if (_hx_tmp2) {
HXLINE(  44)				this->doDragging();
            			}
            			else {
HXLINE(  45)				if (this->_brain->pointerJustReleased) {
HXLINE(  46)					this->stopDragging();
            				}
            			}
            		}
HXLINE(  48)		this->_lastCursorPosition->set_x(this->_brain->flixelPointer->x);
HXLINE(  49)		this->_lastCursorPosition->set_y(this->_brain->flixelPointer->y);
            	}


void Mover_obj::stopDragging(){
            	HX_STACKFRAME(&_hx_pos_a3cdf69c667c8d41_54_stopDragging)
HXDLIN(  54)		this->_dragging = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mover_obj,stopDragging,(void))

void Mover_obj::startDragging(){
            	HX_STACKFRAME(&_hx_pos_a3cdf69c667c8d41_58_startDragging)
HXLINE(  59)		if (this->_dragging) {
HXLINE(  60)			return;
            		}
HXLINE(  62)		this->_dragging = true;
HXLINE(  67)		bool _hx_tmp;
HXDLIN(  67)		if (!(this->isActive())) {
HXLINE(  67)			_hx_tmp = ::Std_obj::isOfType(this->_brain->activeTool,::hx::ClassOf< ::flixel::_hx_system::debug::interaction::tools::Pointer >());
            		}
            		else {
HXLINE(  67)			_hx_tmp = false;
            		}
HXDLIN(  67)		if (_hx_tmp) {
HXLINE(  68)			( ( ::flixel::_hx_system::debug::interaction::tools::Pointer)(this->_brain->activeTool) )->cancelSelection();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mover_obj,startDragging,(void))

void Mover_obj::doDragging(){
            	HX_STACKFRAME(&_hx_pos_a3cdf69c667c8d41_72_doDragging)
HXLINE(  73)		Float dx = (this->_brain->flixelPointer->x - this->_lastCursorPosition->x);
HXLINE(  74)		Float dy = (this->_brain->flixelPointer->y - this->_lastCursorPosition->y);
HXLINE(  76)		{
HXLINE(  76)			int _g = 0;
HXDLIN(  76)			::Array< ::Dynamic> _g1 = this->_brain->selectedItems->members;
HXDLIN(  76)			while((_g < _g1->length)){
HXLINE(  76)				 ::flixel::FlxObject member = _g1->__get(_g).StaticCast<  ::flixel::FlxObject >();
HXDLIN(  76)				_g = (_g + 1);
HXLINE(  78)				if (!(::Std_obj::isOfType(member,::hx::ClassOf< ::flixel::FlxObject >()))) {
HXLINE(  79)					continue;
            				}
HXLINE(  81)				 ::flixel::FlxObject object = member;
HXLINE(  82)				if (::hx::IsNotNull( object )) {
HXLINE(  84)					object->set_x((object->x + dx));
HXLINE(  85)					object->set_y((object->y + dy));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mover_obj,doDragging,(void))


::hx::ObjectPtr< Mover_obj > Mover_obj::__new() {
	::hx::ObjectPtr< Mover_obj > __this = new Mover_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Mover_obj > Mover_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Mover_obj *__this = (Mover_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Mover_obj), true, "flixel.system.debug.interaction.tools.Mover"));
	*(void **)__this = Mover_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Mover_obj::Mover_obj()
{
}

void Mover_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mover);
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(_lastCursorPosition,"_lastCursorPosition");
	 ::flixel::_hx_system::debug::interaction::tools::Tool_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mover_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(_lastCursorPosition,"_lastCursorPosition");
	 ::flixel::_hx_system::debug::interaction::tools::Tool_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Mover_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { return ::hx::Val( _dragging ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"doDragging") ) { return ::hx::Val( doDragging_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stopDragging") ) { return ::hx::Val( stopDragging_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startDragging") ) { return ::hx::Val( startDragging_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastCursorPosition") ) { return ::hx::Val( _lastCursorPosition ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Mover_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastCursorPosition") ) { _lastCursorPosition=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mover_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_dragging",2e,34,22,7f));
	outFields->push(HX_("_lastCursorPosition",b4,fe,02,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Mover_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Mover_obj,_dragging),HX_("_dragging",2e,34,22,7f)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(Mover_obj,_lastCursorPosition),HX_("_lastCursorPosition",b4,fe,02,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Mover_obj_sStaticStorageInfo = 0;
#endif

static ::String Mover_obj_sMemberFields[] = {
	HX_("_dragging",2e,34,22,7f),
	HX_("_lastCursorPosition",b4,fe,02,31),
	HX_("init",10,3b,bb,45),
	HX_("update",09,86,05,87),
	HX_("stopDragging",f1,ba,ec,a8),
	HX_("startDragging",51,9f,47,3c),
	HX_("doDragging",7a,53,01,a5),
	::String(null()) };

::hx::Class Mover_obj::__mClass;

void Mover_obj::__register()
{
	Mover_obj _hx_dummy;
	Mover_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.interaction.tools.Mover",6a,f3,4e,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Mover_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Mover_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mover_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mover_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
