#pragma once

namespace rust 
{
	class ByteMap : public Object // 0x0
	{
	public:
		unsigned char* values; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int size; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int bytes; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
