#pragma once

#include "..\System\Type.h"

namespace rust 
{
	class ArrayPropertyDescriptor : public PropertyDescriptor // 0x38
	{
	public:
		System::Type* array_type; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		int index; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x48
}
