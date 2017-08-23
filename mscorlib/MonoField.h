#pragma once

#include "..\System\RuntimeFieldHandle.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Reflection\FieldAttributes.h"

namespace System
{
	namespace Reflection
{
	class MonoField : public FieldInfo // 0x0
	{
	public:
		__int64 klass; // 0x10 (size: 0x8, flags: 0x3, type: 0x18)
		System::RuntimeFieldHandle fhandle; // 0x18 (size: 0x8, flags: 0x3, type: 0x11)
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* type; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::FieldAttributes attrs; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
