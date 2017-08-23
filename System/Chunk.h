#pragma once

namespace rust 
{
	class Chunk : public Object // 0x0
	{
	public:
		unsigned char* Bytes; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		int Offset; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
