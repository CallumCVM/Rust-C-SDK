#pragma once

namespace rust 
{
	class MegaWireConstraint : public Object // 0x0
	{
	public:
		bool active; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
		float reactivate; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float rtime; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
