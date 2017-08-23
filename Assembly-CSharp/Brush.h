#pragma once

#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Color.h"

namespace Painting
{
	class Brush : public Object // 0x0
	{
	public:
		UnityEngine::Texture2D* texture; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		float spacing; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector2 brushSize; // 0x1c (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Color color; // 0x24 (size: 0x10, flags: 0x6, type: 0x11)
		bool erase; // 0x34 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x38
}
