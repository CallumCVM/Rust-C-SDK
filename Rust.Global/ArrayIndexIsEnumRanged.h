#pragma once

namespace rust 
{
	class ArrayIndexIsEnumRanged : public ArrayIndexIsEnum // 0x20
	{
	public:
		float min; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float max; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
