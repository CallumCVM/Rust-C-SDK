#pragma once

#include "..\System\Object.h"

namespace rust 
{
	class Slot : public ValueType // 0x0
	{
	public:
		System::Object key; // 0x10 (size: 0x8, flags: 0x3, type: 0x1c)
		System::Object value; // 0x18 (size: 0x8, flags: 0x3, type: 0x1c)
	}; // size = 0x20
}
