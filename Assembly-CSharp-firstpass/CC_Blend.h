#pragma once

#include "..\UnityEngine\Texture.h"

namespace rust 
{
	class CC_Blend : public CC_Base // 0x28
	{
	public:
		UnityEngine::Texture* texture; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		float amount; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		int mode; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x38
}
