// Generated by Haxe 4.3.2
#ifndef INCLUDED_mobile_StorageUtil
#define INCLUDED_mobile_StorageUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(mobile,StorageUtil)

namespace mobile{


class HXCPP_CLASS_ATTRIBUTES StorageUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StorageUtil_obj OBJ_;
		StorageUtil_obj();

	public:
		enum { _hx_ClassId = 0x49b157d3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="mobile.StorageUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"mobile.StorageUtil"); }

		inline static ::hx::ObjectPtr< StorageUtil_obj > __new() {
			::hx::ObjectPtr< StorageUtil_obj > __this = new StorageUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StorageUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			StorageUtil_obj *__this = (StorageUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StorageUtil_obj), false, "mobile.StorageUtil"));
			*(void **)__this = StorageUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StorageUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StorageUtil",bd,b4,62,29); }

		static void __boot();
		static ::String rootDir;
		static ::String getStorageDirectory( ::Dynamic force);
		static ::Dynamic getStorageDirectory_dyn();

		static void createDirectories(::String directory);
		static ::Dynamic createDirectories_dyn();

		static void saveContent(::String fileName,::String fileData);
		static ::Dynamic saveContent_dyn();

};

} // end namespace mobile

#endif /* INCLUDED_mobile_StorageUtil */ 
