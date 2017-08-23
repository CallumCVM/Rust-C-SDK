#pragma once

#include "..\System\UIntPtr.h"
#include "..\System\Reflection\MethodInfo.h"
#include "..\System\Reflection\Emit\ModuleBuilder.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Reflection\Emit\CustomAttributeBuilder.h"
#include "..\System\Reflection\Emit\MonoResource.h"
#include "..\System\Reflection\Emit\PEFileKinds.h"
#include "..\System\Reflection\Module.h"
#include "..\System\Reflection\Emit\MonoWin32Resource.h"
#include "..\System\Reflection\Emit\RefEmitPermissionSet.h"
#include "..\System\Reflection\PortableExecutableKinds.h"
#include "..\System\Reflection\ImageFileMachine.h"
#include "..\System\Type.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Resources\Win32VersionResource.h"
#include "..\Mono\Security\StrongName.h"
#include "..\System\Reflection\Emit\NativeResourceType.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class AssemblyBuilder : public Assembly // 0x60
	{
	public:
		System::UIntPtr dynamic_assembly; // 0x60 (size: 0x8, flags: 0x1, type: 0x19)
		System::Reflection::MethodInfo* entry_point; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::ModuleBuilder* modules; // 0x70 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* name; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* dir; // 0x80 (size: 0x8, flags: 0x1, type: 0xe)
		System::Reflection::Emit::CustomAttributeBuilder* cattrs; // 0x88 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::MonoResource* resources; // 0x90 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* public_key; // 0x98 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* version; // 0xa0 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* culture; // 0xa8 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned int algid; // 0xb0 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int flags; // 0xb4 (size: 0x4, flags: 0x1, type: 0x9)
		System::Reflection::Emit::PEFileKinds pekind; // 0xb8 (size: 0x4, flags: 0x1, type: 0x11)
		bool delay_sign; // 0xbc (size: 0x1, flags: 0x1, type: 0x2)
		unsigned int access; // 0xc0 (size: 0x4, flags: 0x1, type: 0x9)
		System::Reflection::Module* loaded_modules; // 0xc8 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::MonoWin32Resource* win32_resources; // 0xd0 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::RefEmitPermissionSet* permissions_minimum; // 0xd8 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::RefEmitPermissionSet* permissions_optional; // 0xe0 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::RefEmitPermissionSet* permissions_refused; // 0xe8 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::PortableExecutableKinds peKind; // 0xf0 (size: 0x4, flags: 0x1, type: 0x11)
		System::Reflection::ImageFileMachine machine; // 0xf4 (size: 0x4, flags: 0x1, type: 0x11)
		bool corlib_internal; // 0xf8 (size: 0x1, flags: 0x1, type: 0x2)
		System::Type* type_forwarders; // 0x100 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* pktoken; // 0x108 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Type* corlib_object_type; // 0x110 (size: 0x8, flags: 0x3, type: 0x12)
		System::Type* corlib_value_type; // 0x118 (size: 0x8, flags: 0x3, type: 0x12)
		System::Type* corlib_enum_type; // 0x120 (size: 0x8, flags: 0x3, type: 0x12)
		System::Type* corlib_void_type; // 0x128 (size: 0x8, flags: 0x3, type: 0x12)
		System::Collections::ArrayList* resource_writers; // 0x130 (size: 0x8, flags: 0x1, type: 0x12)
		System::Resources::Win32VersionResource* version_res; // 0x138 (size: 0x8, flags: 0x1, type: 0x12)
		bool created; // 0x140 (size: 0x1, flags: 0x1, type: 0x2)
		bool is_module_only; // 0x141 (size: 0x1, flags: 0x1, type: 0x2)
		Mono::Security::StrongName* sn; // 0x148 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::NativeResourceType native_resource; // 0x150 (size: 0x4, flags: 0x1, type: 0x11)
		bool is_compiler_context; // 0x154 (size: 0x1, flags: 0x21, type: 0x2)
		UnityEngine::UnicodeString* versioninfo_culture; // 0x158 (size: 0x8, flags: 0x1, type: 0xe)
		System::Reflection::Emit::ModuleBuilder* manifest_module; // 0x160 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x168
}
