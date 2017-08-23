#pragma once

namespace rust 
{
	class Win32_MIB_UDPROW : public Object // 0x0
	{
	public:
		unsigned int LocalAddr; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		int LocalPort; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
