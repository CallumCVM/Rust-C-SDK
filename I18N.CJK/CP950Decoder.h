#pragma once

namespace rust 
{
	class CP950Decoder : public DbcsDecoder // 0x28
	{
	public:
		int last_byte_count; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int last_byte_conv; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
