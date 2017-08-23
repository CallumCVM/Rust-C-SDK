#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\Texture2D.h"

namespace rust 
{
	class MeshPaintable : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* replacementTextureName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Texture2D* targetTexture; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		int textureWidth; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int textureHeight; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Color clearColor; // 0x30 (size: 0x10, flags: 0x6, type: 0x11)
		bool hasChanges; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x48
}
