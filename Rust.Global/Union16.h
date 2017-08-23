#pragma once

#include "..\System\Int16.h"
#include "..\System\UInt16.h"

namespace rust 
{
	class Union16 : public ValueType // 0x0
	{
	public:
		System::Int16 i; // 0x10 (size: 0x2, flags: 0x6, type: 0x6)
		System::UInt16 u; // 0x10 (size: 0x2, flags: 0x6, type: 0x7)
		unsigned char b1; // 0x10 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char b2; // 0x11 (size: 0x1, flags: 0x6, type: 0x5)
	}; // size = 0x18
}
