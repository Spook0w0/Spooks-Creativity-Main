// Generated by Haxe 4.3.2
#ifndef INCLUDED_hxvlc_externs_Types
#define INCLUDED_hxvlc_externs_Types

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxvlc,externs,Types)

namespace hxvlc{
namespace externs{


class HXCPP_CLASS_ATTRIBUTES Types_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Types_obj OBJ_;
		Types_obj();

	public:
		enum { _hx_ClassId = 0x4233407b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxvlc.externs.Types")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxvlc.externs.Types"); }

		inline static ::hx::ObjectPtr< Types_obj > __new() {
			::hx::ObjectPtr< Types_obj > __this = new Types_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Types_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Types_obj *__this = (Types_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Types_obj), false, "hxvlc.externs.Types"));
			*(void **)__this = Types_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Types_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Types",59,e0,f8,ad); }

};

} // end namespace hxvlc
} // end namespace externs

#endif /* INCLUDED_hxvlc_externs_Types */ 