#pragma once

namespace rust 
{
	class UTF7Decoder : public Decoder // 0x20
	{
	public:
		int leftOver; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
