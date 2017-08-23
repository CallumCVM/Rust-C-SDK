#pragma once

#include "..\System\RuntimeMethodHandle.h"
#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Reflection\CallingConventions.h"

namespace System
{
	namespace Reflection
{
	class MonoArrayMethod : public MethodInfo // 0x0
	{
	public:
		System::RuntimeMethodHandle mhandle; // 0x10 (size: 0x8, flags: 0x3, type: 0x11)
		System::Type* parent; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		System::Type* ret; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		System::Type* parameters; // 0x28 (size: 0x8, flags: 0x3, type: 0x1d)
		UnityEngine::UnicodeString* name; // 0x30 (size: 0x8, flags: 0x3, type: 0xe)
		int table_idx; // 0x38 (size: 0x4, flags: 0x3, type: 0x8)
		System::Reflection::CallingConventions call_conv; // 0x3c (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x40
}
