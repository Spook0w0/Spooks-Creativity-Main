// Generated by Haxe 4.3.2
#ifndef INCLUDED_shaders_Glitching
#define INCLUDED_shaders_Glitching

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(shaders,Glitching)
HX_DECLARE_CLASS1(shaders,GlitchingShader)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES Glitching_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Glitching_obj OBJ_;
		Glitching_obj();

	public:
		enum { _hx_ClassId = 0x62388363 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.Glitching")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.Glitching"); }
		static ::hx::ObjectPtr< Glitching_obj > __new();
		static ::hx::ObjectPtr< Glitching_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Glitching_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Glitching",ed,7f,a9,57); }

		 ::shaders::GlitchingShader shader;
		void update(Float elapsed);
		::Dynamic update_dyn();

};

} // end namespace shaders

#endif /* INCLUDED_shaders_Glitching */ 