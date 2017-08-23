#pragma once

namespace rust 
{
	class UpdateBehaviour : public MonoBehaviour // 0x18
	{
	public:
		float lastUpdate; // 0x18 (size: 0x4, flags: 0x3, type: 0xc)
		float nextUpdate; // 0x1c (size: 0x4, flags: 0x3, type: 0xc)
	}; // size = 0x20
}
