#pragma once

#include "..\UnityEngine\AnimationCurve.h"
#include "..\SoundModulation\Modulator.h"

namespace rust 
{
	class TimeBasedSoundSpread : public SoundModifier // 0x20
	{
	public:
		UnityEngine::AnimationCurve* spreadCurve; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* wanderIntensityCurve; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		SoundModulation::Modulator* modulator; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		float startTime; // 0x38 (size: 0x4, flags: 0x1, type: 0xc)
		float wanderTime; // 0x3c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x40
}
