#pragma once

namespace rust 
{
	class UTF32Decoder : public Decoder // 0x20
	{
	public:
		bool bigEndian; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		int leftOverByte; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int leftOverLength; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
