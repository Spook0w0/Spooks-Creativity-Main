// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_FlxFunkSoundTray
#include <FlxFunkSoundTray.h>
#endif
#ifndef INCLUDED_GameMain
#include <GameMain.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9edbdec928b0f2a4_210_new,"GameMain","new",0x8f6827dd,"GameMain.new","Main.hx",210,0x087e5c05)

void GameMain_obj::__construct(::hx::Null< int >  __o_gameWidth,::hx::Null< int >  __o_gameHeight,::hx::Class initialState,::hx::Null< int >  __o_updateFramerate,::hx::Null< int >  __o_drawFramerate,::hx::Null< bool >  __o_skipSplash,::hx::Null< bool >  __o_startFullscreen){
            		int gameWidth = __o_gameWidth.Default(0);
            		int gameHeight = __o_gameHeight.Default(0);
            		int updateFramerate = __o_updateFramerate.Default(60);
            		int drawFramerate = __o_drawFramerate.Default(60);
            		bool skipSplash = __o_skipSplash.Default(false);
            		bool startFullscreen = __o_startFullscreen.Default(false);
            	HX_STACKFRAME(&_hx_pos_9edbdec928b0f2a4_210_new)
HXLINE( 211)		super::__construct(gameWidth,gameHeight,initialState,updateFramerate,drawFramerate,skipSplash,startFullscreen);
HXLINE( 213)		this->_customSoundTray = ::hx::ClassOf< ::FlxFunkSoundTray >();
            	}

Dynamic GameMain_obj::__CreateEmpty() { return new GameMain_obj; }

void *GameMain_obj::_hx_vtable = 0;

Dynamic GameMain_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameMain_obj > _hx_result = new GameMain_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool GameMain_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x40a0cd8f) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x40a0cd8f;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x43384a08 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< GameMain_obj > GameMain_obj::__new(::hx::Null< int >  __o_gameWidth,::hx::Null< int >  __o_gameHeight,::hx::Class initialState,::hx::Null< int >  __o_updateFramerate,::hx::Null< int >  __o_drawFramerate,::hx::Null< bool >  __o_skipSplash,::hx::Null< bool >  __o_startFullscreen) {
	::hx::ObjectPtr< GameMain_obj > __this = new GameMain_obj();
	__this->__construct(__o_gameWidth,__o_gameHeight,initialState,__o_updateFramerate,__o_drawFramerate,__o_skipSplash,__o_startFullscreen);
	return __this;
}

::hx::ObjectPtr< GameMain_obj > GameMain_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_gameWidth,::hx::Null< int >  __o_gameHeight,::hx::Class initialState,::hx::Null< int >  __o_updateFramerate,::hx::Null< int >  __o_drawFramerate,::hx::Null< bool >  __o_skipSplash,::hx::Null< bool >  __o_startFullscreen) {
	GameMain_obj *__this = (GameMain_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameMain_obj), true, "GameMain"));
	*(void **)__this = GameMain_obj::_hx_vtable;
	flixel::FlxGame_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(__o_gameWidth,__o_gameHeight,initialState,__o_updateFramerate,__o_drawFramerate,__o_skipSplash,__o_startFullscreen);
	return __this;
}

GameMain_obj::GameMain_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GameMain_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GameMain_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GameMain_obj::__mClass;

void GameMain_obj::__register()
{
	GameMain_obj _hx_dummy;
	GameMain_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameMain",6b,f5,2d,8e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GameMain_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameMain_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameMain_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

