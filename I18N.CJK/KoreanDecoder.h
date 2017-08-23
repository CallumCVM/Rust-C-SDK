#pragma once

namespace rust 
{
	class KoreanDecoder : public DbcsDecoder // 0x28
	{
	public:
		bool useUHC; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		int last_byte_count; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		int last_byte_conv; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
