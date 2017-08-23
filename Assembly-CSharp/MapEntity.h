#pragma once

namespace rust 
{
	class MapEntity : public HeldEntity // 0x180
	{
	public:
		unsigned int* fogImages; // 0x180 (size: 0x8, flags: 0x86, type: 0x1d)
		unsigned int* paintImages; // 0x188 (size: 0x8, flags: 0x86, type: 0x1d)
	}; // size = 0x190
}
