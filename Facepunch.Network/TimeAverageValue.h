#pragma once

#include "..\System\DateTime.h"

namespace rust 
{
	class TimeAverageValue : public ValueType // 0x0
	{
	public:
		System::DateTime refreshTime; // 0x10 (size: 0x10, flags: 0x1, type: 0x11)
		unsigned __int64 counterPrev; // 0x20 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 counterNext; // 0x28 (size: 0x8, flags: 0x1, type: 0xb)
	}; // size = 0x30
}
