#pragma once

#include "..\UnityEngine\Light.h"

namespace rust 
{
	class LightLOD : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Light* lightComponent; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		float DistanceBias; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		bool ToggleLight; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
		bool ToggleShadows; // 0x25 (size: 0x1, flags: 0x6, type: 0x2)
		float cameraDist; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
		float fadeSign; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		float maxLightIntensity; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
		float maxShadowStrength; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x38
}
