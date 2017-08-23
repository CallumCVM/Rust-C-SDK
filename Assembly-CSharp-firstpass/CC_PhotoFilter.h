#pragma once

#include "..\UnityEngine\Color.h"

namespace rust 
{
	class CC_PhotoFilter : public CC_Base // 0x28
	{
	public:
		UnityEngine::Color color; // 0x28 (size: 0x10, flags: 0x6, type: 0x11)
		float density; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x40
}
