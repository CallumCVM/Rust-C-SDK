#pragma once

#include "..\System\Type.h"

namespace rust 
{
	class TypeConvertKey : public ValueType // 0x0
	{
	public:
		System::Type* _initialType; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Type* _targetType; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x20
}
