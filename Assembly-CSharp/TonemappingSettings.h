#pragma once

#include "..\UnityStandardAssets\CinematicEffects\TonemappingColorGrading\Tonemapper.h"
#include "..\UnityEngine\AnimationCurve.h"

namespace rust 
{
	class TonemappingSettings : public ValueType // 0x0
	{
	public:
		bool enabled; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
		UnityStandardAssets::CinematicEffects::TonemappingColorGrading::Tonemapper tonemapper; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
		float exposure; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::AnimationCurve* curve; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		float neutralBlackIn; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float neutralWhiteIn; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float neutralBlackOut; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float neutralWhiteOut; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		float neutralWhiteLevel; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float neutralWhiteClip; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x40
}
