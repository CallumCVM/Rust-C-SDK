#pragma once

#include "..\UnityEngine\AnimationCurve.h"
#include "..\UnityEngine\Light.h"

namespace rust 
{
	class ExplosionsLightCurves : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::AnimationCurve* LightCurve; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Light* lightSource; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		float GraphTimeMultiplier; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float GraphIntensityMultiplier; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		bool canUpdate; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		float startTime; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x38
}
