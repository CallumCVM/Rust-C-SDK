#pragma once

namespace rust 
{
	class MegaWireLodLevel : public Object // 0x0
	{
	public:
		float distance; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		int sides; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		float segsperunit; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
