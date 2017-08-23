#pragma once

#include "..\UnityEngine\LayerMask.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class RainSurfaceAmbience : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<RainSurfaceAmbience.SurfaceSound>* surfaces; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		float tickRate; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float lastTick; // 0x24 (size: 0x4, flags: 0x1, type: 0xc)
		float gridSize; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float gridSamples; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float startHeight; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float rayLength; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::LayerMask layerMask; // 0x38 (size: 0x4, flags: 0x6, type: 0x11)
		float spreadScale; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		float maxDistance; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float lerpSpeed; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x48
}
