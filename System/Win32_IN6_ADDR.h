#pragma once

namespace rust 
{
	class Win32_IN6_ADDR : public ValueType // 0x0
	{
	public:
		unsigned char* Bytes; // 0x10 (size: 0x8, flags: 0x1006, type: 0x1d)
	}; // size = 0x18
}
