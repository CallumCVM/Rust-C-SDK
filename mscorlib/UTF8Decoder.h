#pragma once

namespace rust 
{
	class UTF8Decoder : public Decoder // 0x20
	{
	public:
		unsigned int leftOverBits; // 0x20 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int leftOverCount; // 0x24 (size: 0x4, flags: 0x1, type: 0x9)
	}; // size = 0x28
}
