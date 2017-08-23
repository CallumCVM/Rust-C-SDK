#pragma once

#include "..\System\Type.h"

namespace rust 
{
	class ArrayIndexIsEnum : public PropertyAttribute // 0x18
	{
	public:
		System::Type* enumType; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
