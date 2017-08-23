#pragma once

#include "..\System\Int16.h"

namespace rust 
{
	class PacketStat : public Object // 0x0
	{
	public:
		System::Int16 msgType; // 0x10 (size: 0x2, flags: 0x6, type: 0x6)
		int count; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int bytes; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
