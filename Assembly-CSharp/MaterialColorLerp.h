#pragma once

#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\MaterialPropertyBlock.h"
#include "..\UnityEngine\Renderer.h"

namespace rust 
{
	class MaterialColorLerp : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::MaterialPropertyBlock* _block; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Renderer* _cachedRenderers; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		bool initialized; // 0x28 (size: 0x1, flags: 0x81, type: 0x2)
		UnityEngine::Color startColor; // 0x2c (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color endColor; // 0x3c (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color currentColor; // 0x4c (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color targetColor; // 0x5c (size: 0x10, flags: 0x1, type: 0x11)
		float delta; // 0x6c (size: 0x4, flags: 0x6, type: 0xc)
		int colorID; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		float lerpStartTime; // 0x74 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x78
}
