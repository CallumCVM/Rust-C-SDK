#pragma once

#include "..\System\RuntimeMethodHandle.h"
#include "..\System\Type.h"
#include "..\System\Reflection\MethodAttributes.h"
#include "..\System\Reflection\MethodImplAttributes.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Reflection\Emit\ILGenerator.h"
#include "..\System\Reflection\Emit\TypeBuilder.h"
#include "..\System\Reflection\Emit\ParameterBuilder.h"
#include "..\System\Reflection\Emit\CustomAttributeBuilder.h"
#include "..\System\Reflection\MethodInfo.h"
#include "..\System\Runtime\InteropServices\CharSet.h"
#include "..\System\Runtime\InteropServices\CallingConvention.h"
#include "..\System\Reflection\CallingConventions.h"
#include "..\System\Reflection\Emit\GenericTypeParameterBuilder.h"
#include "..\System\Reflection\Emit\RefEmitPermissionSet.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class MethodBuilder : public MethodInfo // 0x0
	{
	public:
		System::RuntimeMethodHandle mhandle; // 0x10 (size: 0x8, flags: 0x1, type: 0x11)
		System::Type* rtype; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* parameters; // 0x20 (size: 0x8, flags: 0x3, type: 0x1d)
		System::Reflection::MethodAttributes attrs; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
		System::Reflection::MethodImplAttributes iattrs; // 0x2c (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* name; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		int table_idx; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned char* code; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::ILGenerator* ilgen; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::TypeBuilder* type; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::ParameterBuilder* pinfo; // 0x58 (size: 0x8, flags: 0x3, type: 0x1d)
		System::Reflection::Emit::CustomAttributeBuilder* cattrs; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::MethodInfo* override_method; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* pi_dll; // 0x70 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* pi_entry; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
		System::Runtime::InteropServices::CharSet charset; // 0x80 (size: 0x4, flags: 0x1, type: 0x11)
		unsigned int extra_flags; // 0x84 (size: 0x4, flags: 0x1, type: 0x9)
		System::Runtime::InteropServices::CallingConvention native_cc; // 0x88 (size: 0x4, flags: 0x1, type: 0x11)
		System::Reflection::CallingConventions call_conv; // 0x8c (size: 0x4, flags: 0x1, type: 0x11)
		bool init_locals; // 0x90 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 generic_container; // 0x98 (size: 0x8, flags: 0x1, type: 0x18)
		System::Reflection::Emit::GenericTypeParameterBuilder* generic_params; // 0xa0 (size: 0x8, flags: 0x3, type: 0x1d)
		System::Type* returnModReq; // 0xa8 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Type* returnModOpt; // 0xb0 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Type* paramModReq; // 0xb8 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Type* paramModOpt; // 0xc0 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::RefEmitPermissionSet* permissions; // 0xc8 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0xd0
}
