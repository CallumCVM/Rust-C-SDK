#pragma once

#include "..\UnityEngine\Rect.h"
#include "..\UnityEngine\FontStyle.h"

namespace UnityEngine
{
	class CharacterInfo : public ValueType // 0x0
	{
	public:
		int index; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Rect uv; // 0x14 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Rect vert; // 0x24 (size: 0x10, flags: 0x6, type: 0x11)
		float width; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		int size; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::FontStyle style; // 0x3c (size: 0x4, flags: 0x6, type: 0x11)
		bool flipped; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x48
}
