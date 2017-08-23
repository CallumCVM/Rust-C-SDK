#pragma once

namespace rust 
{
	class CacheData : public Object // 0x0
	{
	public:
		unsigned char* data; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned int entityID; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int numID; // 0x1c (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x20
}
