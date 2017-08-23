#pragma once

namespace rust 
{
	class BaseScreenShake : public MonoBehaviour // 0x18
	{
	public:
		float length; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float timeTaken; // 0x1c (size: 0x4, flags: 0x3, type: 0xc)
	}; // size = 0x20
}
