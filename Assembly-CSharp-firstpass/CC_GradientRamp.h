#pragma once

#include "..\UnityEngine\Texture.h"

namespace rust 
{
	class CC_GradientRamp : public CC_Base // 0x28
	{
	public:
		UnityEngine::Texture* rampTexture; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		float amount; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
