#pragma once

#include "..\System\Type.h"

namespace rust 
{
	class SimplePropertyDescriptor : public PropertyDescriptor // 0x38
	{
	public:
		System::Type* componentType; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* propertyType; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
