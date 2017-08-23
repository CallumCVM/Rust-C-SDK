#pragma once

#include "..\UnityEngine\Color32.h"

namespace rust 
{
	class TextureData : public ValueType // 0x0
	{
	public:
		int width; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int height; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Color32* colors; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
