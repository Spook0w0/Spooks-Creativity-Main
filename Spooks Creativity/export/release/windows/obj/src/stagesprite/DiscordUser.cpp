// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_stagesprite_AttachedNormalText
#include <stagesprite/AttachedNormalText.h>
#endif
#ifndef INCLUDED_stagesprite_DiscordUser
#include <stagesprite/DiscordUser.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1dd5301189bd826e_11_new,"stagesprite.DiscordUser","new",0x1742013e,"stagesprite.DiscordUser.new","stagesprite/DiscordUser.hx",11,0x0da00fb3)
static const ::String _hx_array_data_d8a54a4c_1[] = {
	HX_("e",65,00,00,00),
};
static const ::String _hx_array_data_d8a54a4c_2[] = {
	HX_("e",65,00,00,00),
};
static const ::String _hx_array_data_d8a54a4c_3[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_d8a54a4c_4[] = {
	HX_("o",6f,00,00,00),
};
static const ::String _hx_array_data_d8a54a4c_5[] = {
	HX_("o",6f,00,00,00),
};
static const ::String _hx_array_data_d8a54a4c_6[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_d8a54a4c_7[] = {
	HX_("a",61,00,00,00),
};
static const ::String _hx_array_data_d8a54a4c_8[] = {
	HX_("a",61,00,00,00),
};
static const ::String _hx_array_data_d8a54a4c_9[] = {
	HX_("h",68,00,00,00),
};
static const ::String _hx_array_data_d8a54a4c_10[] = {
	HX_("e",65,00,00,00),
};
static const ::String _hx_array_data_d8a54a4c_11[] = {
	HX_("e",65,00,00,00),
};
static const ::String _hx_array_data_d8a54a4c_12[] = {
	HX_("h",68,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_1dd5301189bd826e_71_update,"stagesprite.DiscordUser","update",0x45d2b3eb,"stagesprite.DiscordUser.update","stagesprite/DiscordUser.hx",71,0x0da00fb3)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd5301189bd826e_112_addText,"stagesprite.DiscordUser","addText",0xbdf2074c,"stagesprite.DiscordUser.addText","stagesprite/DiscordUser.hx",112,0x0da00fb3)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd5301189bd826e_135_deleteMessage,"stagesprite.DiscordUser","deleteMessage",0xba05fb3a,"stagesprite.DiscordUser.deleteMessage","stagesprite/DiscordUser.hx",135,0x0da00fb3)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd5301189bd826e_137_changeChar,"stagesprite.DiscordUser","changeChar",0xedff5b48,"stagesprite.DiscordUser.changeChar","stagesprite/DiscordUser.hx",137,0x0da00fb3)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd5301189bd826e_145_isSameStrumTime,"stagesprite.DiscordUser","isSameStrumTime",0xc06e3d44,"stagesprite.DiscordUser.isSameStrumTime","stagesprite/DiscordUser.hx",145,0x0da00fb3)
HX_LOCAL_STACK_FRAME(_hx_pos_1dd5301189bd826e_155_isNotAMessage,"stagesprite.DiscordUser","isNotAMessage",0x0d007e2d,"stagesprite.DiscordUser.isNotAMessage","stagesprite/DiscordUser.hx",155,0x0da00fb3)
namespace stagesprite{

void DiscordUser_obj::__construct(::hx::Null< bool >  __o_isOpponent,::String imageName){
            		bool isOpponent = __o_isOpponent.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_1dd5301189bd826e_11_new)
HXLINE( 111)		this->lastNotes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  70)		this->game = ::PlayState_obj::instance;
HXLINE(  69)		this->discordSpace = ((Float)10);
HXLINE(  68)		this->targetY = ((Float)0);
HXLINE(  45)		this->deletingMsg = false;
HXLINE(  44)		this->isOpponent = false;
HXLINE(  33)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  33)		_g->set(HX_("ammar-happy",85,24,a0,d5),HX_("Ammar",12,01,6b,b5));
HXDLIN(  33)		_g->set(HX_("annoyer-happy",4b,e3,cb,57),HX_("Annoying User",94,f7,1c,92));
HXDLIN(  33)		_g->set(HX_("annoyer-sad",81,a5,55,b0),HX_("Annoying User",94,f7,1c,92));
HXDLIN(  33)		_g->set(HX_("deleted-user",7f,74,69,64),HX_("Deleted User Dark",44,79,c4,45));
HXDLIN(  33)		_g->set(HX_("deleted-user-insane",f8,bf,93,13),HX_("Deleted User",32,62,1f,9b));
HXDLIN(  33)		_g->set(HX_("mod-happy",15,36,3a,fc),HX_("Moderator",e5,1f,0e,c4));
HXDLIN(  33)		_g->set(HX_("mod-neutral",7c,a5,52,9e),HX_("Moderator",e5,1f,0e,c4));
HXDLIN(  33)		_g->set(HX_("random-girl",26,d8,d4,04),HX_("Random Girl",99,11,ab,57));
HXDLIN(  33)		this->chars = _g;
HXLINE(  32)		this->curCharacter = HX_("",00,00,00,00);
HXLINE(  30)		this->noteIsNear = false;
HXLINE(  29)		this->timer = ((Float)0);
HXLINE(  27)		this->typingText = HX_("(The person is typing...)",74,1d,fa,42);
HXLINE(  26)		this->emptyText = HX_("...",ee,0f,23,00);
HXLINE(  19)		this->lyrics = ::Array_obj< ::Dynamic>::__new(4)->init(0,::Array_obj< ::Dynamic>::__new(3)->init(0,::Array_obj< ::String >::fromData( _hx_array_data_d8a54a4c_1,1))->init(1,::Array_obj< ::String >::fromData( _hx_array_data_d8a54a4c_2,1))->init(2,::Array_obj< ::String >::fromData( _hx_array_data_d8a54a4c_3,1)))->init(1,::Array_obj< ::Dynamic>::__new(3)->init(0,::Array_obj< ::String >::fromData( _hx_array_data_d8a54a4c_4,1))->init(1,::Array_obj< ::String >::fromData( _hx_array_data_d8a54a4c_5,1))->init(2,::Array_obj< ::String >::fromData( _hx_array_data_d8a54a4c_6,1)))->init(2,::Array_obj< ::Dynamic>::__new(3)->init(0,::Array_obj< ::String >::fromData( _hx_array_data_d8a54a4c_7,1))->init(1,::Array_obj< ::String >::fromData( _hx_array_data_d8a54a4c_8,1))->init(2,::Array_obj< ::String >::fromData( _hx_array_data_d8a54a4c_9,1)))->init(3,::Array_obj< ::Dynamic>::__new(3)->init(0,::Array_obj< ::String >::fromData( _hx_array_data_d8a54a4c_10,1))->init(1,::Array_obj< ::String >::fromData( _hx_array_data_d8a54a4c_11,1))->init(2,::Array_obj< ::String >::fromData( _hx_array_data_d8a54a4c_12,1)));
HXLINE(  15)		this->myTurn = true;
HXLINE(  48)		super::__construct(0,0,null());
HXLINE(  50)		this->curCharacter = this->chars->get_string(imageName);
HXLINE(  52)		::String library = null();
HXDLIN(  52)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic((HX_("chars/",b2,a4,75,b7) + this->curCharacter),library);
HXDLIN(  52)		this->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE(  53)		this->setGraphicSize(405,91);
HXLINE(  54)		this->updateHitbox();
HXLINE(  55)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  56)		{
HXLINE(  56)			 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN(  56)			this1->set_x(( (Float)(0) ));
HXDLIN(  56)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  58)		this->message =  ::stagesprite::AttachedNormalText_obj::__alloc( HX_CTX ,this->emptyText,505,24);
HXLINE(  59)		 ::stagesprite::AttachedNormalText _hx_tmp = this->message;
HXDLIN(  59)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("Discord/ggsans-Medium.ttf",e4,ec,63,54)));
HXDLIN(  59)		::String _hx_tmp1;
HXDLIN(  59)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  59)			_hx_tmp1 = file;
            		}
            		else {
HXLINE(  59)			_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("Discord/ggsans-Medium.ttf",e4,ec,63,54));
            		}
HXDLIN(  59)		_hx_tmp->set_font(_hx_tmp1);
HXLINE(  61)		this->message->sprTracker = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  62)		this->message->offsetX = ( (Float)(103) );
HXLINE(  63)		this->message->offsetY = ( (Float)(40) );
HXLINE(  65)		this->isOpponent = isOpponent;
            	}

Dynamic DiscordUser_obj::__CreateEmpty() { return new DiscordUser_obj; }

void *DiscordUser_obj::_hx_vtable = 0;

Dynamic DiscordUser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DiscordUser_obj > _hx_result = new DiscordUser_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DiscordUser_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x248a1f00) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x248a1f00;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void DiscordUser_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1dd5301189bd826e_71_update)
HXLINE(  72)		Float _hx_tmp;
HXDLIN(  72)		if (this->myTurn) {
HXLINE(  72)			_hx_tmp = (((Float)360.) + this->discordSpace);
            		}
            		else {
HXLINE(  72)			Float _hx_tmp1 = (((Float)360.) - this->discordSpace);
HXDLIN(  72)			Float _hx_tmp2 = (_hx_tmp1 - this->get_height());
HXDLIN(  72)			_hx_tmp = (_hx_tmp2 - ( (Float)(((this->message->textField->get_numLines() - 1) * 33)) ));
            		}
HXDLIN(  72)		this->targetY = _hx_tmp;
HXLINE(  73)		this->set_x(( (Float)(320) ));
HXLINE(  74)		Float a = this->y;
HXDLIN(  74)		Float Value = (elapsed * ( (Float)(7) ));
HXDLIN(  74)		Float lowerBound;
HXDLIN(  74)		if ((Value < 0)) {
HXLINE(  74)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE(  74)			lowerBound = Value;
            		}
HXDLIN(  74)		Float _hx_tmp3;
HXDLIN(  74)		if ((lowerBound > 1)) {
HXLINE(  74)			_hx_tmp3 = ( (Float)(1) );
            		}
            		else {
HXLINE(  74)			_hx_tmp3 = lowerBound;
            		}
HXDLIN(  74)		this->set_y((a + (_hx_tmp3 * (this->targetY - a))));
HXLINE(  76)		if (!(this->isNotAMessage())) {
HXLINE(  77)			if ((this->timer >= 1)) {
HXLINE(  78)				this->deletingMsg = true;
HXLINE(  79)				 ::stagesprite::AttachedNormalText _hx_tmp4 = this->message;
HXDLIN(  79)				_hx_tmp4->set_text(this->message->text.substr(0,(this->message->text.length - (1 + ::Math_obj::floor(elapsed)))));
HXLINE(  80)				if ((this->message->text.length < 3)) {
HXLINE(  81)					this->message->set_text(this->emptyText);
HXLINE(  82)					this->deletingMsg = false;
            				}
            			}
            			else {
HXLINE(  85)				 ::stagesprite::DiscordUser _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  85)				_hx_tmp5->timer = (_hx_tmp5->timer + elapsed);
HXLINE(  86)				this->deletingMsg = false;
            			}
            		}
HXLINE(  91)		if ((this->game->notes->length >= 1)) {
HXLINE(  92)			int _g = 0;
HXDLIN(  92)			int _g1 = (this->game->notes->length - 1);
HXDLIN(  92)			while((_g < _g1)){
HXLINE(  92)				_g = (_g + 1);
HXDLIN(  92)				int i = (_g - 1);
HXLINE(  93)				 ::Note daNote = Dynamic( this->game->notes->members->__get(((this->game->notes->length - 1) - i))).StaticCast<  ::Note >();
HXLINE(  94)				bool _hx_tmp6;
HXDLIN(  94)				bool _hx_tmp7;
HXDLIN(  94)				if (::hx::IsNotNull( daNote )) {
HXLINE(  94)					bool _hx_tmp8;
HXDLIN(  94)					if (!(this->isOpponent)) {
HXLINE(  94)						_hx_tmp8 = daNote->mustPress;
            					}
            					else {
HXLINE(  94)						_hx_tmp8 = false;
            					}
HXDLIN(  94)					if (!(_hx_tmp8)) {
HXLINE(  94)						if (this->isOpponent) {
HXLINE(  94)							_hx_tmp7 = !(daNote->mustPress);
            						}
            						else {
HXLINE(  94)							_hx_tmp7 = false;
            						}
            					}
            					else {
HXLINE(  94)						_hx_tmp7 = true;
            					}
            				}
            				else {
HXLINE(  94)					_hx_tmp7 = false;
            				}
HXDLIN(  94)				if (_hx_tmp7) {
HXLINE(  94)					_hx_tmp6 = (daNote->distance < 200);
            				}
            				else {
HXLINE(  94)					_hx_tmp6 = false;
            				}
HXDLIN(  94)				this->noteIsNear = _hx_tmp6;
            			}
            		}
            		else {
HXLINE(  97)			this->noteIsNear = false;
            		}
HXLINE( 100)		if (this->noteIsNear) {
HXLINE( 101)			if ((this->message->text == this->emptyText)) {
HXLINE( 102)				this->message->set_text(this->typingText);
            			}
            		}
            		else {
HXLINE( 104)			if ((this->message->text == this->typingText)) {
HXLINE( 105)				this->message->set_text(this->emptyText);
            			}
            		}
HXLINE( 108)		this->super::update(elapsed);
            	}


void DiscordUser_obj::addText( ::Note note){
            	HX_STACKFRAME(&_hx_pos_1dd5301189bd826e_112_addText)
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		if (!(this->isNotAMessage())) {
HXLINE( 113)			_hx_tmp = this->deletingMsg;
            		}
            		else {
HXLINE( 113)			_hx_tmp = true;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 114)			this->message->set_text(HX_("",00,00,00,00));
            		}
HXLINE( 115)		::String additionText = HX_("",00,00,00,00);
HXLINE( 117)		if (!(this->isSameStrumTime(note))) {
HXLINE( 118)			while((this->lastNotes->length > 3)){
HXLINE( 119)				this->lastNotes->pop().StaticCast<  ::Note >();
            			}
HXLINE( 121)			if ((this->message->textField->get_numLines() > 5)) {
HXLINE( 121)				this->message->set_text(HX_("",00,00,00,00));
            			}
HXLINE( 122)			bool isNextSus = false;
HXLINE( 123)			bool _hx_tmp1;
HXDLIN( 123)			if (::hx::IsNotNull( note )) {
HXLINE( 123)				_hx_tmp1 = ::hx::IsNotNull( note->nextNote );
            			}
            			else {
HXLINE( 123)				_hx_tmp1 = false;
            			}
HXDLIN( 123)			if (_hx_tmp1) {
HXLINE( 123)				isNextSus = note->nextNote->isSustainNote;
            			}
HXLINE( 124)			bool endSustain;
HXDLIN( 124)			if (isNextSus) {
HXLINE( 124)				endSustain = note->isSustainNote;
            			}
            			else {
HXLINE( 124)				endSustain = false;
            			}
HXLINE( 125)			int singArray;
HXDLIN( 125)			if (endSustain) {
HXLINE( 125)				singArray = 2;
            			}
            			else {
HXLINE( 125)				if (note->isSustainNote) {
HXLINE( 125)					singArray = 1;
            				}
            				else {
HXLINE( 125)					singArray = 0;
            				}
            			}
HXDLIN( 125)			::Array< ::String > singArray1 = this->lyrics->__get(note->singData).StaticCast< ::Array< ::Dynamic> >()->__get(singArray).StaticCast< ::Array< ::String > >();
HXLINE( 126)			::String additionText1;
HXDLIN( 126)			bool additionText2;
HXDLIN( 126)			if ((this->message->text.length > 0)) {
HXLINE( 126)				additionText2 = note->isSustainNote;
            			}
            			else {
HXLINE( 126)				additionText2 = true;
            			}
HXDLIN( 126)			if (additionText2) {
HXLINE( 126)				additionText1 = HX_("",00,00,00,00);
            			}
            			else {
HXLINE( 126)				additionText1 = HX_(" ",20,00,00,00);
            			}
HXDLIN( 126)			additionText = (additionText1 + singArray1->__get(::flixel::FlxG_obj::random->_hx_int(0,(singArray1->length - 1),null())));
HXLINE( 127)			this->lastNotes->push(note);
HXLINE( 129)			this->timer = ( (Float)(0) );
            		}
HXLINE( 132)		 ::stagesprite::AttachedNormalText fh = this->message;
HXDLIN( 132)		fh->set_text((fh->text + additionText));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DiscordUser_obj,addText,(void))

void DiscordUser_obj::deleteMessage(){
            	HX_STACKFRAME(&_hx_pos_1dd5301189bd826e_135_deleteMessage)
HXDLIN( 135)		this->timer = ( (Float)(5) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(DiscordUser_obj,deleteMessage,(void))

void DiscordUser_obj::changeChar(::String charName){
            	HX_STACKFRAME(&_hx_pos_1dd5301189bd826e_137_changeChar)
HXLINE( 138)		this->curCharacter = this->chars->get_string(charName);
HXLINE( 140)		::String library = null();
HXDLIN( 140)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic((HX_("chars/",b2,a4,75,b7) + this->curCharacter),library);
HXDLIN( 140)		this->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE( 141)		this->setGraphicSize(405,91);
HXLINE( 142)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DiscordUser_obj,changeChar,(void))

bool DiscordUser_obj::isSameStrumTime( ::Note note){
            	HX_STACKFRAME(&_hx_pos_1dd5301189bd826e_145_isSameStrumTime)
HXLINE( 146)		if ((this->lastNotes->length <= 0)) {
HXLINE( 146)			return false;
            		}
HXLINE( 147)		{
HXLINE( 147)			int _g = 0;
HXDLIN( 147)			::Array< ::Dynamic> _g1 = this->lastNotes;
HXDLIN( 147)			while((_g < _g1->length)){
HXLINE( 147)				 ::Note prevNote = _g1->__get(_g).StaticCast<  ::Note >();
HXDLIN( 147)				_g = (_g + 1);
HXLINE( 148)				if ((prevNote->strumTime == note->strumTime)) {
HXLINE( 149)					return true;
            				}
            			}
            		}
HXLINE( 152)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DiscordUser_obj,isSameStrumTime,return )

bool DiscordUser_obj::isNotAMessage(){
            	HX_STACKFRAME(&_hx_pos_1dd5301189bd826e_155_isNotAMessage)
HXDLIN( 155)		if ((this->message->text != this->typingText)) {
HXDLIN( 155)			return (this->message->text == this->emptyText);
            		}
            		else {
HXDLIN( 155)			return true;
            		}
HXDLIN( 155)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DiscordUser_obj,isNotAMessage,return )

::Array< ::Dynamic> DiscordUser_obj::vocals;


::hx::ObjectPtr< DiscordUser_obj > DiscordUser_obj::__new(::hx::Null< bool >  __o_isOpponent,::String imageName) {
	::hx::ObjectPtr< DiscordUser_obj > __this = new DiscordUser_obj();
	__this->__construct(__o_isOpponent,imageName);
	return __this;
}

::hx::ObjectPtr< DiscordUser_obj > DiscordUser_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_isOpponent,::String imageName) {
	DiscordUser_obj *__this = (DiscordUser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DiscordUser_obj), true, "stagesprite.DiscordUser"));
	*(void **)__this = DiscordUser_obj::_hx_vtable;
	__this->__construct(__o_isOpponent,imageName);
	return __this;
}

DiscordUser_obj::DiscordUser_obj()
{
}

void DiscordUser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DiscordUser);
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(myTurn,"myTurn");
	HX_MARK_MEMBER_NAME(otherUser,"otherUser");
	HX_MARK_MEMBER_NAME(lyrics,"lyrics");
	HX_MARK_MEMBER_NAME(emptyText,"emptyText");
	HX_MARK_MEMBER_NAME(typingText,"typingText");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(noteIsNear,"noteIsNear");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(chars,"chars");
	HX_MARK_MEMBER_NAME(isOpponent,"isOpponent");
	HX_MARK_MEMBER_NAME(deletingMsg,"deletingMsg");
	HX_MARK_MEMBER_NAME(targetY,"targetY");
	HX_MARK_MEMBER_NAME(discordSpace,"discordSpace");
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_MEMBER_NAME(lastNotes,"lastNotes");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DiscordUser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(myTurn,"myTurn");
	HX_VISIT_MEMBER_NAME(otherUser,"otherUser");
	HX_VISIT_MEMBER_NAME(lyrics,"lyrics");
	HX_VISIT_MEMBER_NAME(emptyText,"emptyText");
	HX_VISIT_MEMBER_NAME(typingText,"typingText");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(noteIsNear,"noteIsNear");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(chars,"chars");
	HX_VISIT_MEMBER_NAME(isOpponent,"isOpponent");
	HX_VISIT_MEMBER_NAME(deletingMsg,"deletingMsg");
	HX_VISIT_MEMBER_NAME(targetY,"targetY");
	HX_VISIT_MEMBER_NAME(discordSpace,"discordSpace");
	HX_VISIT_MEMBER_NAME(game,"game");
	HX_VISIT_MEMBER_NAME(lastNotes,"lastNotes");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DiscordUser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return ::hx::Val( game ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return ::hx::Val( timer ); }
		if (HX_FIELD_EQ(inName,"chars") ) { return ::hx::Val( chars ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"myTurn") ) { return ::hx::Val( myTurn ); }
		if (HX_FIELD_EQ(inName,"lyrics") ) { return ::hx::Val( lyrics ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return ::hx::Val( message ); }
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		if (HX_FIELD_EQ(inName,"addText") ) { return ::hx::Val( addText_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"otherUser") ) { return ::hx::Val( otherUser ); }
		if (HX_FIELD_EQ(inName,"emptyText") ) { return ::hx::Val( emptyText ); }
		if (HX_FIELD_EQ(inName,"lastNotes") ) { return ::hx::Val( lastNotes ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"typingText") ) { return ::hx::Val( typingText ); }
		if (HX_FIELD_EQ(inName,"noteIsNear") ) { return ::hx::Val( noteIsNear ); }
		if (HX_FIELD_EQ(inName,"isOpponent") ) { return ::hx::Val( isOpponent ); }
		if (HX_FIELD_EQ(inName,"changeChar") ) { return ::hx::Val( changeChar_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"deletingMsg") ) { return ::hx::Val( deletingMsg ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		if (HX_FIELD_EQ(inName,"discordSpace") ) { return ::hx::Val( discordSpace ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"deleteMessage") ) { return ::hx::Val( deleteMessage_dyn() ); }
		if (HX_FIELD_EQ(inName,"isNotAMessage") ) { return ::hx::Val( isNotAMessage_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isSameStrumTime") ) { return ::hx::Val( isSameStrumTime_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DiscordUser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vocals") ) { outValue = ( vocals ); return true; }
	}
	return false;
}

::hx::Val DiscordUser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast<  ::PlayState >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"chars") ) { chars=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"myTurn") ) { myTurn=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lyrics") ) { lyrics=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast<  ::stagesprite::AttachedNormalText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"otherUser") ) { otherUser=inValue.Cast<  ::stagesprite::DiscordUser >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyText") ) { emptyText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastNotes") ) { lastNotes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"typingText") ) { typingText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteIsNear") ) { noteIsNear=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isOpponent") ) { isOpponent=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"deletingMsg") ) { deletingMsg=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"discordSpace") ) { discordSpace=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DiscordUser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vocals") ) { vocals=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void DiscordUser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("message",c7,35,11,9a));
	outFields->push(HX_("myTurn",09,9d,41,78));
	outFields->push(HX_("otherUser",3b,cd,80,84));
	outFields->push(HX_("lyrics",34,7f,b1,25));
	outFields->push(HX_("emptyText",da,fd,d1,09));
	outFields->push(HX_("typingText",c4,fe,92,6b));
	outFields->push(HX_("timer",c5,bf,35,10));
	outFields->push(HX_("noteIsNear",84,43,7d,04));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("chars",dd,9c,b3,45));
	outFields->push(HX_("isOpponent",a7,cb,67,73));
	outFields->push(HX_("deletingMsg",f9,d0,98,30));
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("discordSpace",7a,b3,82,e0));
	outFields->push(HX_("game",f2,f3,5e,44));
	outFields->push(HX_("lastNotes",0b,0a,78,ec));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DiscordUser_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::stagesprite::AttachedNormalText */ ,(int)offsetof(DiscordUser_obj,message),HX_("message",c7,35,11,9a)},
	{::hx::fsBool,(int)offsetof(DiscordUser_obj,myTurn),HX_("myTurn",09,9d,41,78)},
	{::hx::fsObject /*  ::stagesprite::DiscordUser */ ,(int)offsetof(DiscordUser_obj,otherUser),HX_("otherUser",3b,cd,80,84)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DiscordUser_obj,lyrics),HX_("lyrics",34,7f,b1,25)},
	{::hx::fsString,(int)offsetof(DiscordUser_obj,emptyText),HX_("emptyText",da,fd,d1,09)},
	{::hx::fsString,(int)offsetof(DiscordUser_obj,typingText),HX_("typingText",c4,fe,92,6b)},
	{::hx::fsFloat,(int)offsetof(DiscordUser_obj,timer),HX_("timer",c5,bf,35,10)},
	{::hx::fsBool,(int)offsetof(DiscordUser_obj,noteIsNear),HX_("noteIsNear",84,43,7d,04)},
	{::hx::fsString,(int)offsetof(DiscordUser_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(DiscordUser_obj,chars),HX_("chars",dd,9c,b3,45)},
	{::hx::fsBool,(int)offsetof(DiscordUser_obj,isOpponent),HX_("isOpponent",a7,cb,67,73)},
	{::hx::fsBool,(int)offsetof(DiscordUser_obj,deletingMsg),HX_("deletingMsg",f9,d0,98,30)},
	{::hx::fsFloat,(int)offsetof(DiscordUser_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsFloat,(int)offsetof(DiscordUser_obj,discordSpace),HX_("discordSpace",7a,b3,82,e0)},
	{::hx::fsObject /*  ::PlayState */ ,(int)offsetof(DiscordUser_obj,game),HX_("game",f2,f3,5e,44)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DiscordUser_obj,lastNotes),HX_("lastNotes",0b,0a,78,ec)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DiscordUser_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &DiscordUser_obj::vocals,HX_("vocals",5e,10,51,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DiscordUser_obj_sMemberFields[] = {
	HX_("message",c7,35,11,9a),
	HX_("myTurn",09,9d,41,78),
	HX_("otherUser",3b,cd,80,84),
	HX_("lyrics",34,7f,b1,25),
	HX_("emptyText",da,fd,d1,09),
	HX_("typingText",c4,fe,92,6b),
	HX_("timer",c5,bf,35,10),
	HX_("noteIsNear",84,43,7d,04),
	HX_("curCharacter",09,86,7c,d7),
	HX_("chars",dd,9c,b3,45),
	HX_("isOpponent",a7,cb,67,73),
	HX_("deletingMsg",f9,d0,98,30),
	HX_("targetY",e8,f3,67,88),
	HX_("discordSpace",7a,b3,82,e0),
	HX_("game",f2,f3,5e,44),
	HX_("update",09,86,05,87),
	HX_("lastNotes",0b,0a,78,ec),
	HX_("addText",6e,0f,37,89),
	HX_("deleteMessage",dc,c8,9a,f8),
	HX_("changeChar",66,94,08,1c),
	HX_("isSameStrumTime",66,37,0b,68),
	HX_("isNotAMessage",cf,4b,95,4b),
	::String(null()) };

static void DiscordUser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DiscordUser_obj::vocals,"vocals");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DiscordUser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DiscordUser_obj::vocals,"vocals");
};

#endif

::hx::Class DiscordUser_obj::__mClass;

static ::String DiscordUser_obj_sStaticFields[] = {
	HX_("vocals",5e,10,51,59),
	::String(null())
};

void DiscordUser_obj::__register()
{
	DiscordUser_obj _hx_dummy;
	DiscordUser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("stagesprite.DiscordUser",4c,4a,a5,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DiscordUser_obj::__GetStatic;
	__mClass->mSetStaticField = &DiscordUser_obj::__SetStatic;
	__mClass->mMarkFunc = DiscordUser_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DiscordUser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DiscordUser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DiscordUser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DiscordUser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DiscordUser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DiscordUser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace stagesprite
