#pragma once

#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Reflection\MethodInfo.h"
#include "..\System\Reflection\EventAttributes.h"

namespace System
{
	namespace Reflection
{
	class MonoEventInfo : public ValueType // 0x0
	{
	public:
		System::Type* declaring_type; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		System::Type* reflected_type; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		System::Reflection::MethodInfo* add_method; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		System::Reflection::MethodInfo* remove_method; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		System::Reflection::MethodInfo* raise_method; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		System::Reflection::EventAttributes attrs; // 0x40 (size: 0x4, flags: 0x6, type: 0x11)
		System::Reflection::MethodInfo* other_methods; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x50
}
