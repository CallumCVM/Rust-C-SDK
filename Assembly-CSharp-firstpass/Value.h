#pragma once

#include "..\JSON\ValueType.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\JSON\Object.h"
#include "..\JSON\Array.h"
#include "..\JSON\Value.h"

namespace JSON
{
	class Value : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <Str>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		JSON::Object* <Obj>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		JSON::Array* <Array>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		JSON::Value* <Parent>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		JSON::ValueType <Type>k__BackingField; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
		double <Number>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0xd)
		bool <Boolean>k__BackingField; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
