#pragma once

namespace rust 
{
	class StabilitySocket : public Socket_Base // 0xe0
	{
	public:
		float support; // 0xe0 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0xe8
}
