#pragma once

namespace rust 
{
	class HashedPoolValue : public Object // 0x0
	{
	public:
		unsigned __int64 hashedPoolKey; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		int hashedPoolIndex; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
