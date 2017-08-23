#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Reflection\ConstructorInfo.h"

namespace System
{
	class MonoTypeInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* full_name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		System::Reflection::ConstructorInfo* default_ctor; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
