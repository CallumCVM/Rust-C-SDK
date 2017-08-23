#pragma once

#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Reflection\MethodInfo.h"
#include "..\System\Reflection\PropertyAttributes.h"

namespace System
{
	namespace Reflection
{
	class MonoPropertyInfo : public ValueType // 0x0
	{
	public:
		System::Type* parent; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		System::Reflection::MethodInfo* get_method; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		System::Reflection::MethodInfo* set_method; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		System::Reflection::PropertyAttributes attrs; // 0x30 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x38
}
