#pragma once

#include "..\UnityEngine\Texture.h"

namespace rust 
{
	class LUTSettings : public ValueType // 0x0
	{
	public:
		bool enabled; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Texture* texture; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float contribution; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
