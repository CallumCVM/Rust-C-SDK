#pragma once

namespace rust 
{
	class Socket_Terrain : public Socket_Base // 0xe0
	{
	public:
		float placementHeight; // 0xe0 (size: 0x4, flags: 0x6, type: 0xc)
		bool alignToNormal; // 0xe4 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0xe8
}
