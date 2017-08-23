#pragma once

#include "BaseEntity.h"
#include "SoundDefinition.h"

namespace rust 
{
	class PhysicsEffects : public MonoBehaviour // 0x18
	{
	public:
		BaseEntity* entity; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* physImpactSoundDef; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		float minTimeBetweenEffects; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float lastEffectPlayed; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		float lowMedThreshold; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float medHardThreshold; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		float enableDelay; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float enabledAt; // 0x3c (size: 0x4, flags: 0x1, type: 0xc)
		float ignoreImpactThreshold; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x48
}
