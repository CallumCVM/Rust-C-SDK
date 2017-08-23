#pragma once

#include "..\GameMenu\Option.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Quaternion.h"
#include "SoundDefinition.h"
#include "Sound.h"
#include "..\SoundModulation\Modulator.h"

namespace rust 
{
	class SpinnerWheel : public Signage // 0x318
	{
	public:
		GameMenu::Option __menuOption_Menu_LockSpin; // 0x318 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_Spin; // 0x370 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_UnlockSpin; // 0x3c8 (size: 0x58, flags: 0x1, type: 0x11)
		UnityEngine::Transform* wheel; // 0x420 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* spinLoopSoundDef; // 0x428 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* spinStartSoundDef; // 0x430 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* spinAccentSoundDef; // 0x438 (size: 0x8, flags: 0x6, type: 0x12)
		Sound* spinSound; // 0x440 (size: 0x8, flags: 0x1, type: 0x12)
		SoundModulation::Modulator* spinSoundGain; // 0x448 (size: 0x8, flags: 0x1, type: 0x12)
		float velocity; // 0x450 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Quaternion targetRotation; // 0x454 (size: 0x10, flags: 0x6, type: 0x11)
		float minTimeBetweenSpinAccentSounds; // 0x464 (size: 0x4, flags: 0x6, type: 0xc)
		float spinAccentAngleDelta; // 0x468 (size: 0x4, flags: 0x6, type: 0xc)
		float angleRotated; // 0x46c (size: 0x4, flags: 0x1, type: 0xc)
		float lastSpinSound; // 0x470 (size: 0x4, flags: 0x1, type: 0xc)
		float clientSpinSpeed; // 0x474 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x478
}
