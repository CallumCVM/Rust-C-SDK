#pragma once

namespace rust 
{
	class ValueRange : public Object // 0x0
	{
	public:
		float min; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float max; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x18
}
