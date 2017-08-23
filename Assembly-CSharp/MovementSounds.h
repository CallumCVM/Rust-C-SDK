#pragma once

#include "SoundDefinition.h"
#include "Sound.h"
#include "..\SoundModulation\Modulator.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class MovementSounds : public MonoBehaviour // 0x18
	{
	public:
		SoundDefinition* waterMovementDef; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Sound* waterMovement; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		SoundModulation::Modulator* waterGainMod; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		float waterMovementFadeInSpeed; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float waterMovementFadeOutSpeed; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 lastPos; // 0x38 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
