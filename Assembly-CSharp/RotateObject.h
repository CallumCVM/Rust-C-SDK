#pragma once

namespace rust 
{
	class RotateObject : public MonoBehaviour // 0x18
	{
	public:
		float rotateSpeed_X; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float rotateSpeed_Y; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float rotateSpeed_Z; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
