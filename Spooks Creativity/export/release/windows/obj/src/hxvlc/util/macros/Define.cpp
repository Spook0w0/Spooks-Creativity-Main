// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_hxvlc_util_macros_Define
#include <hxvlc/util/macros/Define.h>
#endif

namespace hxvlc{
namespace util{
namespace macros{

void Define_obj::__construct() { }

Dynamic Define_obj::__CreateEmpty() { return new Define_obj; }

void *Define_obj::_hx_vtable = 0;

Dynamic Define_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Define_obj > _hx_result = new Define_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Define_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ec068e1;
}


Define_obj::Define_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Define_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Define_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Define_obj::__mClass;

void Define_obj::__register()
{
	Define_obj _hx_dummy;
	Define_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxvlc.util.macros.Define",07,74,bd,98);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Define_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Define_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Define_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxvlc
} // end namespace util
} // end namespace macros