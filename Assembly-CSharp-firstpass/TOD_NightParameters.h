#pragma once

#include "..\UnityEngine\Gradient.h"

namespace rust 
{
	class TOD_NightParameters : public Object // 0x0
	{
	public:
		UnityEngine::Gradient* MoonColor; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Gradient* LightColor; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Gradient* RayColor; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Gradient* SkyColor; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Gradient* CloudColor; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Gradient* FogColor; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Gradient* AmbientColor; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		float LightIntensity; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		float ShadowStrength; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		float AmbientMultiplier; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		float ReflectionMultiplier; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x58
}
