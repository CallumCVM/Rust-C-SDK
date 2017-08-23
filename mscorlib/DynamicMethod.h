#pragma once

#include "..\System\RuntimeMethodHandle.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Reflection\MethodAttributes.h"
#include "..\System\Reflection\CallingConventions.h"
#include "..\System\Reflection\Module.h"
#include "..\System\Reflection\Emit\ILGenerator.h"
#include "..\System\Object.h"
#include "..\System\Delegate.h"
#include "..\System\Reflection\MonoMethod.h"
#include "..\System\Reflection\Emit\ParameterBuilder.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class DynamicMethod : public MethodInfo // 0x0
	{
	public:
		System::RuntimeMethodHandle mhandle; // 0x10 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* returnType; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* parameters; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::MethodAttributes attributes; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
		System::Reflection::CallingConventions callingConvention; // 0x34 (size: 0x4, flags: 0x1, type: 0x11)
		System::Reflection::Module* module; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool skipVisibility; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		bool init_locals; // 0x41 (size: 0x1, flags: 0x1, type: 0x2)
		System::Reflection::Emit::ILGenerator* ilgen; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		int nrefs; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		System::Object* refs; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		__int64 referenced_by; // 0x60 (size: 0x8, flags: 0x1, type: 0x18)
		System::Type* owner; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Delegate* deleg; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MonoMethod* method; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::ParameterBuilder* pinfo; // 0x80 (size: 0x8, flags: 0x1, type: 0x1d)
		bool creating; // 0x88 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x90
}
