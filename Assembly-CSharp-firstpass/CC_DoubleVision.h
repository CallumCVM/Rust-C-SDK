#pragma once

#include "..\UnityEngine\Vector2.h"

namespace rust 
{
	class CC_DoubleVision : public CC_Base // 0x28
	{
	public:
		UnityEngine::Vector2 displace; // 0x28 (size: 0x8, flags: 0x6, type: 0x11)
		float amount; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
