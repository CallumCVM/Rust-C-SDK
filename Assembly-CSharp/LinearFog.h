#pragma once

#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Color.h"

namespace rust 
{
	class LinearFog : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Material* fogMaterial; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Color fogColor; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
		float fogStart; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float fogRange; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		float fogDensity; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		bool fogSky; // 0x3c (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x40
}
