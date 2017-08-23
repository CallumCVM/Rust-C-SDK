#pragma once

#include "..\System\UInt16.h"

namespace rust 
{
	class Packet : public ValueType // 0x0
	{
	public:
		unsigned int <Address>k__BackingField; // 0x10 (size: 0x4, flags: 0x1, type: 0x9)
		System::UInt16 <Port>k__BackingField; // 0x14 (size: 0x2, flags: 0x1, type: 0x7)
		unsigned char* <Data>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		int <Size>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
