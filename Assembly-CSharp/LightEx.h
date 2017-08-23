#pragma once

#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\AnimationCurve.h"
#include "..\UnityEngine\Light.h"

namespace rust 
{
	class LightEx : public UpdateBehaviour // 0x20
	{
	public:
		UnityEngine::AnimationCurve* blendCurve; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* intenseCurve; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Light* lightComponent; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool alterColor; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
		float colorTimeScale; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color colorA; // 0x40 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color colorB; // 0x50 (size: 0x10, flags: 0x6, type: 0x11)
		bool loopColor; // 0x60 (size: 0x1, flags: 0x6, type: 0x2)
		bool alterIntensity; // 0x61 (size: 0x1, flags: 0x6, type: 0x2)
		float intensityTimeScale; // 0x64 (size: 0x4, flags: 0x6, type: 0xc)
		float intensityCurveScale; // 0x68 (size: 0x4, flags: 0x6, type: 0xc)
		bool loopIntensity; // 0x6c (size: 0x1, flags: 0x6, type: 0x2)
		bool randomOffset; // 0x6d (size: 0x1, flags: 0x6, type: 0x2)
		float time; // 0x70 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x78
}
