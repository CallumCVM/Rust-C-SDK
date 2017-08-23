#pragma once

#include "..\UnityEngine\Vector2.h"

namespace rust 
{
	class CC_RadialBlur : public CC_Base // 0x28
	{
	public:
		float amount; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector2 center; // 0x2c (size: 0x8, flags: 0x6, type: 0x11)
		int quality; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x38
}
