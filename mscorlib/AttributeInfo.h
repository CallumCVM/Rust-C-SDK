#pragma once

#include "..\System\AttributeUsageAttribute.h"

namespace rust 
{
	class AttributeInfo : public Object // 0x0
	{
	public:
		System::AttributeUsageAttribute* _usage; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int _inheritanceLevel; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
