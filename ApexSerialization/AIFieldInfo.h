#pragma once

#include "..\System\Reflection\FieldInfo.h"
#include "..\System\Object.h"

namespace rust 
{
	class AIFieldInfo : public ValueType // 0x0
	{
	public:
		System::Reflection::FieldInfo* field; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		System::Object defaultValue; // 0x18 (size: 0x8, flags: 0x3, type: 0x1c)
	}; // size = 0x20
}
