#pragma once

#include "SynchronizedClock.h"
#include "SoundDefinition.h"

namespace rust 
{
	class AmbienceLocalStings : public MonoBehaviour // 0x18
	{
	public:
		SynchronizedClock* stingClock; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		SoundDefinition* stingSounds; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		float maxDistance; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float stingRadius; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float stingFrequency; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float stingFrequencyVariance; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
