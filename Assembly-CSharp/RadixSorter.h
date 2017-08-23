#pragma once

namespace rust 
{
	class RadixSorter : public Object // 0x0
	{
	public:
		unsigned int* histogram; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned int* offset; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
