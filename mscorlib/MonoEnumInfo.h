#pragma once

#include "..\System\Type.h"
#include "..\System\Array.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	class MonoEnumInfo : public ValueType // 0x0
	{
	public:
		System::Type* utype; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		System::Array* values; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::UnicodeString** names; // 0x20 (size: 0x8, flags: 0x3, type: 0x1d)
		System::Collections::Hashtable* name_hash; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x30
}
