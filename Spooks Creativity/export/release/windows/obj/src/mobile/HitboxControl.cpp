// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_mobile_HitboxControl
#include <mobile/HitboxControl.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4198cf7ebc4dd437_12_new,"mobile.HitboxControl","new",0x6cf278eb,"mobile.HitboxControl.new","mobile/HitboxControl.hx",12,0x94a91ee6)
static const ::String _hx_array_data_189b2779_1[] = {
	HX_("left",07,08,b0,47),HX_("down",62,f8,6d,42),HX_("up",5b,66,00,00),HX_("right",dc,0b,64,e9),
};
HX_LOCAL_STACK_FRAME(_hx_pos_4198cf7ebc4dd437_53_update,"mobile.HitboxControl","update",0xb8e0865e,"mobile.HitboxControl.update","mobile/HitboxControl.hx",53,0x94a91ee6)
HX_LOCAL_STACK_FRAME(_hx_pos_4198cf7ebc4dd437_81_checkInTouch,"mobile.HitboxControl","checkInTouch",0xf53213c7,"mobile.HitboxControl.checkInTouch","mobile/HitboxControl.hx",81,0x94a91ee6)
namespace mobile{

void HitboxControl_obj::__construct(int order){
            	HX_GC_STACKFRAME(&_hx_pos_4198cf7ebc4dd437_12_new)
HXLINE(  27)		this->minX = ((Float)0);
HXLINE(  26)		this->maxX = ((Float)0);
HXLINE(  24)		this->framePasses = ((Float)0);
HXLINE(  23)		this->onJustRelease = false;
HXLINE(  22)		this->onJustPress = false;
HXLINE(  21)		this->onPress = false;
HXLINE(  17)		this->noteData = 0;
HXLINE(  15)		this->hitboxPath = HX_("mobile/hitbox",e5,3e,fe,f0);
HXLINE(  14)		this->facer = ::Array_obj< ::String >::fromData( _hx_array_data_189b2779_1,4);
HXLINE(  30)		this->hitbox =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  31)		 ::flixel::FlxSprite _hx_tmp = this->hitbox;
HXDLIN(  31)		::String key = this->hitboxPath;
HXDLIN(  31)		::String library = null();
HXDLIN(  31)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(key,null());
HXDLIN(  31)		bool xmlExists = false;
HXDLIN(  31)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  31)			xmlExists = true;
            		}
HXDLIN(  31)		 ::Dynamic _hx_tmp1;
HXDLIN(  31)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  31)			_hx_tmp1 = imageLoaded;
            		}
            		else {
HXLINE(  31)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,library);
HXDLIN(  31)			_hx_tmp1 = returnAsset;
            		}
HXDLIN(  31)		 ::Dynamic _hx_tmp2;
HXDLIN(  31)		if (xmlExists) {
HXLINE(  31)			_hx_tmp2 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  31)			_hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN(  31)		_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE(  32)		this->hitbox->animation->addByPrefix(HX_("idle",14,a7,b3,45),this->facer->__get(order),0,false,null(),null());
HXLINE(  33)		this->hitbox->animation->play(HX_("idle",14,a7,b3,45),true,null(),null());
HXLINE(  34)		this->hitbox->set_alpha(((Float)0.01));
HXLINE(  36)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  36)		::String library1 = null();
HXDLIN(  36)		 ::flixel::graphics::FlxGraphic returnAsset1 = ::Paths_obj::returnGraphic(HX_("mobile/hitbox_hint",61,fc,79,5e),library1);
HXDLIN(  36)		this->hint = _hx_tmp3->loadGraphic(returnAsset1,true,320,720,null(),null());
HXLINE(  37)		this->hint->animation->add(HX_("idle",14,a7,b3,45),::Array_obj< int >::__new(1)->init(0,order),0,false,null(),null());
HXLINE(  38)		this->hint->animation->play(HX_("idle",14,a7,b3,45),true,null(),null());
HXLINE(  39)		this->hint->set_alpha(((Float)0.4));
HXLINE(  41)		super::__construct((((Float)320.) * ( (Float)(order) )),0,null());
HXLINE(  42)		this->maxX = (((Float)320.) * ( (Float)((order + 1)) ));
HXLINE(  43)		this->minX = (((Float)320.) * ( (Float)(order) ));
HXLINE(  45)		this->add(this->hitbox);
HXLINE(  46)		this->add(this->hint);
HXLINE(  48)		this->noteData = order;
            	}

Dynamic HitboxControl_obj::__CreateEmpty() { return new HitboxControl_obj; }

void *HitboxControl_obj::_hx_vtable = 0;

Dynamic HitboxControl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HitboxControl_obj > _hx_result = new HitboxControl_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HitboxControl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x288ce903) {
			if (inClassId<=(int)0x001554e3) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x001554e3;
			} else {
				return inClassId==(int)0x288ce903;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HitboxControl_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_4198cf7ebc4dd437_53_update)
HXLINE(  54)		bool _hx_tmp;
HXDLIN(  54)		if (!(this->onPress)) {
HXLINE(  54)			 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN(  54)			if ((_this->current != 1)) {
HXLINE(  54)				_hx_tmp = (_this->current == 2);
            			}
            			else {
HXLINE(  54)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(  54)			_hx_tmp = false;
            		}
HXDLIN(  54)		if (_hx_tmp) {
HXLINE(  55)			if (this->checkInTouch()) {
HXLINE(  56)				this->onPress = true;
HXLINE(  57)				this->onJustPress = true;
HXLINE(  58)				this->onJustRelease = false;
HXLINE(  59)				this->framePasses = ( (Float)(0) );
            			}
            		}
            		else {
HXLINE(  61)			bool _hx_tmp1;
HXDLIN(  61)			if (this->onPress) {
HXLINE(  61)				 ::flixel::input::mouse::FlxMouseButton _this1 = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN(  61)				bool _hx_tmp2;
HXDLIN(  61)				if ((_this1->current != 0)) {
HXLINE(  61)					_hx_tmp2 = (_this1->current == -1);
            				}
            				else {
HXLINE(  61)					_hx_tmp2 = true;
            				}
HXDLIN(  61)				if (!(_hx_tmp2)) {
HXLINE(  61)					_hx_tmp1 = !(this->checkInTouch());
            				}
            				else {
HXLINE(  61)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE(  61)				_hx_tmp1 = false;
            			}
HXDLIN(  61)			if (_hx_tmp1) {
HXLINE(  62)				this->onPress = false;
HXLINE(  63)				this->onJustRelease = true;
HXLINE(  64)				this->onJustPress = false;
HXLINE(  65)				this->framePasses = ( (Float)(0) );
            			}
            		}
HXLINE(  68)		Float _hx_tmp3;
HXDLIN(  68)		if (this->onPress) {
HXLINE(  68)			_hx_tmp3 = ((Float)0.75);
            		}
            		else {
HXLINE(  68)			_hx_tmp3 = ( (Float)(0) );
            		}
HXDLIN(  68)		this->hitbox->set_alpha(_hx_tmp3);
HXLINE(  69)		if (this->onJustPress) {
HXLINE(  70)			 ::mobile::HitboxControl _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  70)			_hx_tmp4->framePasses = (_hx_tmp4->framePasses + 1);
HXLINE(  71)			if ((this->framePasses >= 5)) {
HXLINE(  72)				this->onJustPress = false;
            			}
            		}
HXLINE(  74)		if (this->onJustRelease) {
HXLINE(  75)			 ::mobile::HitboxControl _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  75)			_hx_tmp5->framePasses = (_hx_tmp5->framePasses + 1);
HXLINE(  76)			if ((this->framePasses >= 5)) {
HXLINE(  77)				this->onJustRelease = false;
            			}
            		}
            	}


bool HitboxControl_obj::checkInTouch(){
            	HX_STACKFRAME(&_hx_pos_4198cf7ebc4dd437_81_checkInTouch)
HXLINE(  82)		{
HXLINE(  82)			int _g = 0;
HXDLIN(  82)			::Array< ::Dynamic> _g1 = ::flixel::FlxG_obj::touches->list;
HXDLIN(  82)			while((_g < _g1->length)){
HXLINE(  82)				 ::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN(  82)				_g = (_g + 1);
HXLINE(  84)				 ::flixel::math::FlxBasePoint mousePos = touch->getScreenPosition(::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >(),null());
HXLINE(  85)				if ((mousePos->x >= this->minX)) {
HXLINE(  85)					return (mousePos->x <= this->maxX);
            				}
            				else {
HXLINE(  85)					return false;
            				}
            			}
            		}
HXLINE(  87)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HitboxControl_obj,checkInTouch,return )


::hx::ObjectPtr< HitboxControl_obj > HitboxControl_obj::__new(int order) {
	::hx::ObjectPtr< HitboxControl_obj > __this = new HitboxControl_obj();
	__this->__construct(order);
	return __this;
}

::hx::ObjectPtr< HitboxControl_obj > HitboxControl_obj::__alloc(::hx::Ctx *_hx_ctx,int order) {
	HitboxControl_obj *__this = (HitboxControl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HitboxControl_obj), true, "mobile.HitboxControl"));
	*(void **)__this = HitboxControl_obj::_hx_vtable;
	__this->__construct(order);
	return __this;
}

HitboxControl_obj::HitboxControl_obj()
{
}

void HitboxControl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HitboxControl);
	HX_MARK_MEMBER_NAME(facer,"facer");
	HX_MARK_MEMBER_NAME(hitboxPath,"hitboxPath");
	HX_MARK_MEMBER_NAME(noteData,"noteData");
	HX_MARK_MEMBER_NAME(hitbox,"hitbox");
	HX_MARK_MEMBER_NAME(hint,"hint");
	HX_MARK_MEMBER_NAME(onPress,"onPress");
	HX_MARK_MEMBER_NAME(onJustPress,"onJustPress");
	HX_MARK_MEMBER_NAME(onJustRelease,"onJustRelease");
	HX_MARK_MEMBER_NAME(framePasses,"framePasses");
	HX_MARK_MEMBER_NAME(maxX,"maxX");
	HX_MARK_MEMBER_NAME(minX,"minX");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HitboxControl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(facer,"facer");
	HX_VISIT_MEMBER_NAME(hitboxPath,"hitboxPath");
	HX_VISIT_MEMBER_NAME(noteData,"noteData");
	HX_VISIT_MEMBER_NAME(hitbox,"hitbox");
	HX_VISIT_MEMBER_NAME(hint,"hint");
	HX_VISIT_MEMBER_NAME(onPress,"onPress");
	HX_VISIT_MEMBER_NAME(onJustPress,"onJustPress");
	HX_VISIT_MEMBER_NAME(onJustRelease,"onJustRelease");
	HX_VISIT_MEMBER_NAME(framePasses,"framePasses");
	HX_VISIT_MEMBER_NAME(maxX,"maxX");
	HX_VISIT_MEMBER_NAME(minX,"minX");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HitboxControl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { return ::hx::Val( hint ); }
		if (HX_FIELD_EQ(inName,"maxX") ) { return ::hx::Val( maxX ); }
		if (HX_FIELD_EQ(inName,"minX") ) { return ::hx::Val( minX ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"facer") ) { return ::hx::Val( facer ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hitbox") ) { return ::hx::Val( hitbox ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onPress") ) { return ::hx::Val( onPress ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { return ::hx::Val( noteData ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hitboxPath") ) { return ::hx::Val( hitboxPath ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onJustPress") ) { return ::hx::Val( onJustPress ); }
		if (HX_FIELD_EQ(inName,"framePasses") ) { return ::hx::Val( framePasses ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkInTouch") ) { return ::hx::Val( checkInTouch_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onJustRelease") ) { return ::hx::Val( onJustRelease ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HitboxControl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { hint=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxX") ) { maxX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minX") ) { minX=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"facer") ) { facer=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hitbox") ) { hitbox=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onPress") ) { onPress=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { noteData=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hitboxPath") ) { hitboxPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onJustPress") ) { onJustPress=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framePasses") ) { framePasses=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onJustRelease") ) { onJustRelease=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HitboxControl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("facer",35,55,48,fb));
	outFields->push(HX_("hitboxPath",5d,ab,35,28));
	outFields->push(HX_("noteData",3c,7b,96,51));
	outFields->push(HX_("hitbox",98,ed,27,57));
	outFields->push(HX_("hint",87,3d,0e,45));
	outFields->push(HX_("onPress",e4,f1,c5,5e));
	outFields->push(HX_("onJustPress",98,7c,86,09));
	outFields->push(HX_("onJustRelease",1c,de,97,74));
	outFields->push(HX_("framePasses",8c,9f,79,cc));
	outFields->push(HX_("maxX",34,45,56,48));
	outFields->push(HX_("minX",86,4e,5c,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HitboxControl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(HitboxControl_obj,facer),HX_("facer",35,55,48,fb)},
	{::hx::fsString,(int)offsetof(HitboxControl_obj,hitboxPath),HX_("hitboxPath",5d,ab,35,28)},
	{::hx::fsInt,(int)offsetof(HitboxControl_obj,noteData),HX_("noteData",3c,7b,96,51)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HitboxControl_obj,hitbox),HX_("hitbox",98,ed,27,57)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HitboxControl_obj,hint),HX_("hint",87,3d,0e,45)},
	{::hx::fsBool,(int)offsetof(HitboxControl_obj,onPress),HX_("onPress",e4,f1,c5,5e)},
	{::hx::fsBool,(int)offsetof(HitboxControl_obj,onJustPress),HX_("onJustPress",98,7c,86,09)},
	{::hx::fsBool,(int)offsetof(HitboxControl_obj,onJustRelease),HX_("onJustRelease",1c,de,97,74)},
	{::hx::fsFloat,(int)offsetof(HitboxControl_obj,framePasses),HX_("framePasses",8c,9f,79,cc)},
	{::hx::fsFloat,(int)offsetof(HitboxControl_obj,maxX),HX_("maxX",34,45,56,48)},
	{::hx::fsFloat,(int)offsetof(HitboxControl_obj,minX),HX_("minX",86,4e,5c,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HitboxControl_obj_sStaticStorageInfo = 0;
#endif

static ::String HitboxControl_obj_sMemberFields[] = {
	HX_("facer",35,55,48,fb),
	HX_("hitboxPath",5d,ab,35,28),
	HX_("noteData",3c,7b,96,51),
	HX_("hitbox",98,ed,27,57),
	HX_("hint",87,3d,0e,45),
	HX_("onPress",e4,f1,c5,5e),
	HX_("onJustPress",98,7c,86,09),
	HX_("onJustRelease",1c,de,97,74),
	HX_("framePasses",8c,9f,79,cc),
	HX_("maxX",34,45,56,48),
	HX_("minX",86,4e,5c,48),
	HX_("update",09,86,05,87),
	HX_("checkInTouch",b2,a5,76,9e),
	::String(null()) };

::hx::Class HitboxControl_obj::__mClass;

void HitboxControl_obj::__register()
{
	HitboxControl_obj _hx_dummy;
	HitboxControl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("mobile.HitboxControl",79,27,9b,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HitboxControl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HitboxControl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HitboxControl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HitboxControl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace mobile