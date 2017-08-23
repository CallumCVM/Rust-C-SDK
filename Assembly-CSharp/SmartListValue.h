#pragma once

namespace rust 
{
	class SmartListValue : public Object // 0x0
	{
	public:
		int hashedListIndex; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
