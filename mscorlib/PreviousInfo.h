#pragma once

namespace rust 
{
	class PreviousInfo : public ValueType // 0x0
	{
	public:
		int Code; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned char* SortKey; // 0x18 (size: 0x8, flags: 0x6, type: 0xf)
	}; // size = 0x20
}
