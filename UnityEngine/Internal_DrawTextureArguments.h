#pragma once

#include "..\UnityEngine\Rect.h"
#include "..\UnityEngine\Color32.h"
#include "..\UnityEngine\Texture.h"
#include "..\UnityEngine\Material.h"

namespace UnityEngine
{
	class Internal_DrawTextureArguments : public ValueType // 0x0
	{
	public:
		UnityEngine::Rect screenRect; // 0x10 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Rect sourceRect; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
		int leftBorder; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		int rightBorder; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
		int topBorder; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		int bottomBorder; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Color32 color; // 0x40 (size: 0x4, flags: 0x6, type: 0x11)
		int pass; // 0x44 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Texture* texture; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* mat; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x58
}
