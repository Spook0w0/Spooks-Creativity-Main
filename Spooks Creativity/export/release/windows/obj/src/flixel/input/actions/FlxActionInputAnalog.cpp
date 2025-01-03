// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputAnalog
#include <flixel/input/actions/FlxActionInputAnalog.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputType
#include <flixel/input/actions/FlxInputType.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11dc5d554a568b00_301_new,"flixel.input.actions.FlxActionInputAnalog","new",0x759b504b,"flixel.input.actions.FlxActionInputAnalog.new","flixel/input/actions/FlxActionInputAnalog.hx",301,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_11dc5d554a568b00_322_check,"flixel.input.actions.FlxActionInputAnalog","check",0x3bce2973,"flixel.input.actions.FlxActionInputAnalog.check","flixel/input/actions/FlxActionInputAnalog.hx",322,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_11dc5d554a568b00_359_checkAxis,"flixel.input.actions.FlxActionInputAnalog","checkAxis",0x0afda7b4,"flixel.input.actions.FlxActionInputAnalog.checkAxis","flixel/input/actions/FlxActionInputAnalog.hx",359,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_11dc5d554a568b00_365_updateValues,"flixel.input.actions.FlxActionInputAnalog","updateValues",0xef275580,"flixel.input.actions.FlxActionInputAnalog.updateValues","flixel/input/actions/FlxActionInputAnalog.hx",365,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_11dc5d554a568b00_310_boot,"flixel.input.actions.FlxActionInputAnalog","boot",0x6a63f1e7,"flixel.input.actions.FlxActionInputAnalog.boot","flixel/input/actions/FlxActionInputAnalog.hx",310,0x00ad3122)
HX_LOCAL_STACK_FRAME(_hx_pos_11dc5d554a568b00_311_boot,"flixel.input.actions.FlxActionInputAnalog","boot",0x6a63f1e7,"flixel.input.actions.FlxActionInputAnalog.boot","flixel/input/actions/FlxActionInputAnalog.hx",311,0x00ad3122)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputAnalog_obj::__construct( ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID){
            		int Axis = __o_Axis.Default(3);
            		int DeviceID = __o_DeviceID.Default(-2);
            	HX_GC_STACKFRAME(&_hx_pos_11dc5d554a568b00_301_new)
HXLINE( 306)		this->y = ((Float)0);
HXLINE( 305)		this->x = ((Float)0);
HXLINE( 315)		super::__construct(::flixel::input::actions::FlxInputType_obj::ANALOG_dyn(),Device,InputID,Trigger,DeviceID);
HXLINE( 316)		this->axis = Axis;
HXLINE( 317)		this->xMoved =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,0);
HXLINE( 318)		this->yMoved =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,1);
            	}

Dynamic FlxActionInputAnalog_obj::__CreateEmpty() { return new FlxActionInputAnalog_obj; }

void *FlxActionInputAnalog_obj::_hx_vtable = 0;

Dynamic FlxActionInputAnalog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputAnalog_obj > _hx_result = new FlxActionInputAnalog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxActionInputAnalog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20308a99) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x20308a99;
	} else {
		return inClassId==(int)0x7f995ee1;
	}
}

bool FlxActionInputAnalog_obj::check( ::flixel::input::actions::FlxAction Action){
            	HX_STACKFRAME(&_hx_pos_11dc5d554a568b00_322_check)
HXLINE( 323)		bool returnVal;
HXDLIN( 323)		switch((int)(this->axis)){
            			case (int)0: {
HXLINE( 325)				int state = this->xMoved->current;
HXDLIN( 325)				switch((int)(this->trigger)){
            					case (int)-1: {
HXLINE( 323)						returnVal = (state == -1);
            					}
            					break;
            					case (int)0: {
HXLINE( 325)						if ((state != 0)) {
HXLINE( 323)							returnVal = (state == -1);
            						}
            						else {
HXLINE( 323)							returnVal = true;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 325)						if ((state != 1)) {
HXLINE( 323)							returnVal = (state == 2);
            						}
            						else {
HXLINE( 323)							returnVal = true;
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 323)						returnVal = (state == 2);
            					}
            					break;
            					default:{
HXLINE( 323)						returnVal = false;
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 326)				int state1 = this->yMoved->current;
HXDLIN( 326)				switch((int)(this->trigger)){
            					case (int)-1: {
HXLINE( 323)						returnVal = (state1 == -1);
            					}
            					break;
            					case (int)0: {
HXLINE( 326)						if ((state1 != 0)) {
HXLINE( 323)							returnVal = (state1 == -1);
            						}
            						else {
HXLINE( 323)							returnVal = true;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 326)						if ((state1 != 1)) {
HXLINE( 323)							returnVal = (state1 == 2);
            						}
            						else {
HXLINE( 323)							returnVal = true;
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 323)						returnVal = (state1 == 2);
            					}
            					break;
            					default:{
HXLINE( 323)						returnVal = false;
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 327)				int state2 = this->xMoved->current;
HXDLIN( 327)				bool returnVal1;
HXDLIN( 327)				switch((int)(this->trigger)){
            					case (int)-1: {
HXLINE( 327)						returnVal1 = (state2 == -1);
            					}
            					break;
            					case (int)0: {
HXLINE( 327)						if ((state2 != 0)) {
HXLINE( 327)							returnVal1 = (state2 == -1);
            						}
            						else {
HXLINE( 327)							returnVal1 = true;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 327)						if ((state2 != 1)) {
HXLINE( 327)							returnVal1 = (state2 == 2);
            						}
            						else {
HXLINE( 327)							returnVal1 = true;
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 327)						returnVal1 = (state2 == 2);
            					}
            					break;
            					default:{
HXLINE( 327)						returnVal1 = false;
            					}
            				}
HXDLIN( 327)				if (returnVal1) {
HXLINE( 327)					int state3 = this->yMoved->current;
HXDLIN( 327)					switch((int)(this->trigger)){
            						case (int)-1: {
HXLINE( 323)							returnVal = (state3 == -1);
            						}
            						break;
            						case (int)0: {
HXLINE( 327)							if ((state3 != 0)) {
HXLINE( 323)								returnVal = (state3 == -1);
            							}
            							else {
HXLINE( 323)								returnVal = true;
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 327)							if ((state3 != 1)) {
HXLINE( 323)								returnVal = (state3 == 2);
            							}
            							else {
HXLINE( 323)								returnVal = true;
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 323)							returnVal = (state3 == 2);
            						}
            						break;
            						default:{
HXLINE( 323)							returnVal = false;
            						}
            					}
            				}
            				else {
HXLINE( 323)					returnVal = false;
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 331)				switch((int)(this->trigger)){
            					case (int)-1: {
HXLINE( 340)						bool returnVal2;
HXDLIN( 340)						if (this->checkAxis(true,-1)) {
HXLINE( 340)							returnVal2 = this->checkAxis(false,0);
            						}
            						else {
HXLINE( 340)							returnVal2 = false;
            						}
HXDLIN( 340)						if (!(returnVal2)) {
HXLINE( 342)							if (this->checkAxis(true,0)) {
HXLINE( 323)								returnVal = this->checkAxis(false,-1);
            							}
            							else {
HXLINE( 323)								returnVal = false;
            							}
            						}
            						else {
HXLINE( 323)							returnVal = true;
            						}
            					}
            					break;
            					case (int)0: {
HXLINE( 334)						if (!(this->checkAxis(true,0))) {
HXLINE( 323)							returnVal = this->checkAxis(false,0);
            						}
            						else {
HXLINE( 323)							returnVal = true;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 333)						if (!(this->checkAxis(true,1))) {
HXLINE( 323)							returnVal = this->checkAxis(false,1);
            						}
            						else {
HXLINE( 323)							returnVal = true;
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 336)						bool returnVal3;
HXDLIN( 336)						bool returnVal4;
HXDLIN( 336)						if (this->checkAxis(true,2)) {
HXLINE( 336)							returnVal4 = this->checkAxis(false,2);
            						}
            						else {
HXLINE( 336)							returnVal4 = false;
            						}
HXDLIN( 336)						if (!(returnVal4)) {
HXLINE( 337)							if (this->checkAxis(true,2)) {
HXLINE( 336)								returnVal3 = this->checkAxis(false,0);
            							}
            							else {
HXLINE( 336)								returnVal3 = false;
            							}
            						}
            						else {
HXLINE( 336)							returnVal3 = true;
            						}
HXDLIN( 336)						if (!(returnVal3)) {
HXLINE( 338)							if (this->checkAxis(true,0)) {
HXLINE( 323)								returnVal = this->checkAxis(false,2);
            							}
            							else {
HXLINE( 323)								returnVal = false;
            							}
            						}
            						else {
HXLINE( 323)							returnVal = true;
            						}
            					}
            					break;
            				}
            			}
            			break;
            		}
HXLINE( 347)		if (returnVal) {
HXLINE( 349)			if (::hx::IsNull( Action->_x )) {
HXLINE( 350)				Action->_x = this->x;
            			}
HXLINE( 351)			if (::hx::IsNull( Action->_y )) {
HXLINE( 352)				Action->_y = this->y;
            			}
            		}
HXLINE( 355)		return returnVal;
            	}


bool FlxActionInputAnalog_obj::checkAxis(bool isX,int state){
            	HX_STACKFRAME(&_hx_pos_11dc5d554a568b00_359_checkAxis)
HXLINE( 360)		 ::flixel::input::FlxInput input;
HXDLIN( 360)		if (isX) {
HXLINE( 360)			input = this->xMoved;
            		}
            		else {
HXLINE( 360)			input = this->yMoved;
            		}
HXLINE( 361)		int state1 = input->current;
HXDLIN( 361)		switch((int)(state)){
            			case (int)-1: {
HXLINE( 361)				return (state1 == -1);
            			}
            			break;
            			case (int)0: {
HXLINE( 361)				if ((state1 != 0)) {
HXLINE( 361)					return (state1 == -1);
            				}
            				else {
HXLINE( 361)					return true;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 361)				if ((state1 != 1)) {
HXLINE( 361)					return (state1 == 2);
            				}
            				else {
HXLINE( 361)					return true;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 361)				return (state1 == 2);
            			}
            			break;
            			default:{
HXLINE( 361)				return false;
            			}
            		}
HXDLIN( 361)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionInputAnalog_obj,checkAxis,return )

void FlxActionInputAnalog_obj::updateValues(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_11dc5d554a568b00_365_updateValues)
HXLINE( 366)		if ((X != 0)) {
HXLINE( 368)			this->xMoved->press();
            		}
            		else {
HXLINE( 372)			this->xMoved->release();
            		}
HXLINE( 375)		if ((Y != 0)) {
HXLINE( 377)			this->yMoved->press();
            		}
            		else {
HXLINE( 381)			this->yMoved->release();
            		}
HXLINE( 384)		this->x = X;
HXLINE( 385)		this->y = Y;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionInputAnalog_obj,updateValues,(void))

bool FlxActionInputAnalog_obj::A_X;

bool FlxActionInputAnalog_obj::A_Y;


::hx::ObjectPtr< FlxActionInputAnalog_obj > FlxActionInputAnalog_obj::__new( ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID) {
	::hx::ObjectPtr< FlxActionInputAnalog_obj > __this = new FlxActionInputAnalog_obj();
	__this->__construct(Device,InputID,Trigger,__o_Axis,__o_DeviceID);
	return __this;
}

::hx::ObjectPtr< FlxActionInputAnalog_obj > FlxActionInputAnalog_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_Axis,::hx::Null< int >  __o_DeviceID) {
	FlxActionInputAnalog_obj *__this = (FlxActionInputAnalog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputAnalog_obj), true, "flixel.input.actions.FlxActionInputAnalog"));
	*(void **)__this = FlxActionInputAnalog_obj::_hx_vtable;
	__this->__construct(Device,InputID,Trigger,__o_Axis,__o_DeviceID);
	return __this;
}

FlxActionInputAnalog_obj::FlxActionInputAnalog_obj()
{
}

void FlxActionInputAnalog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxActionInputAnalog);
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(xMoved,"xMoved");
	HX_MARK_MEMBER_NAME(yMoved,"yMoved");
	 ::flixel::input::actions::FlxActionInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxActionInputAnalog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(xMoved,"xMoved");
	HX_VISIT_MEMBER_NAME(yMoved,"yMoved");
	 ::flixel::input::actions::FlxActionInput_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxActionInputAnalog_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return ::hx::Val( axis ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"xMoved") ) { return ::hx::Val( xMoved ); }
		if (HX_FIELD_EQ(inName,"yMoved") ) { return ::hx::Val( yMoved ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"checkAxis") ) { return ::hx::Val( checkAxis_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateValues") ) { return ::hx::Val( updateValues_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxActionInputAnalog_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"xMoved") ) { xMoved=inValue.Cast<  ::flixel::input::FlxInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMoved") ) { yMoved=inValue.Cast<  ::flixel::input::FlxInput >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxActionInputAnalog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("axis",a1,1c,79,40));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("xMoved",9b,88,66,9a));
	outFields->push(HX_("yMoved",fa,e4,c1,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionInputAnalog_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxActionInputAnalog_obj,axis),HX_("axis",a1,1c,79,40)},
	{::hx::fsFloat,(int)offsetof(FlxActionInputAnalog_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxActionInputAnalog_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsObject /*  ::flixel::input::FlxInput */ ,(int)offsetof(FlxActionInputAnalog_obj,xMoved),HX_("xMoved",9b,88,66,9a)},
	{::hx::fsObject /*  ::flixel::input::FlxInput */ ,(int)offsetof(FlxActionInputAnalog_obj,yMoved),HX_("yMoved",fa,e4,c1,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxActionInputAnalog_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &FlxActionInputAnalog_obj::A_X,HX_("A_X",9a,a5,31,00)},
	{::hx::fsBool,(void *) &FlxActionInputAnalog_obj::A_Y,HX_("A_Y",9b,a5,31,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxActionInputAnalog_obj_sMemberFields[] = {
	HX_("axis",a1,1c,79,40),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("xMoved",9b,88,66,9a),
	HX_("yMoved",fa,e4,c1,00),
	HX_("check",c8,98,b6,45),
	HX_("checkAxis",89,e5,58,94),
	HX_("updateValues",cb,aa,7a,4f),
	::String(null()) };

static void FlxActionInputAnalog_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxActionInputAnalog_obj::A_X,"A_X");
	HX_MARK_MEMBER_NAME(FlxActionInputAnalog_obj::A_Y,"A_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxActionInputAnalog_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxActionInputAnalog_obj::A_X,"A_X");
	HX_VISIT_MEMBER_NAME(FlxActionInputAnalog_obj::A_Y,"A_Y");
};

#endif

::hx::Class FlxActionInputAnalog_obj::__mClass;

static ::String FlxActionInputAnalog_obj_sStaticFields[] = {
	HX_("A_X",9a,a5,31,00),
	HX_("A_Y",9b,a5,31,00),
	::String(null())
};

void FlxActionInputAnalog_obj::__register()
{
	FlxActionInputAnalog_obj _hx_dummy;
	FlxActionInputAnalog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputAnalog",d9,ce,6c,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxActionInputAnalog_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxActionInputAnalog_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputAnalog_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputAnalog_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxActionInputAnalog_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputAnalog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputAnalog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxActionInputAnalog_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_11dc5d554a568b00_310_boot)
HXDLIN( 310)		A_X = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_11dc5d554a568b00_311_boot)
HXDLIN( 311)		A_Y = false;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
