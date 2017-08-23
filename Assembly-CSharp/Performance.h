#pragma once

namespace rust 
{
	class Performance : public SingletonComponent`1 // 0x18
	{
	public:
		int frames; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		float time; // 0x1c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x20
}
