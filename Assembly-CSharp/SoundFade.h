#pragma once

#include "Sound.h"
#include "..\SoundModulation\Modulator.h"

namespace rust 
{
	class SoundFade : public MonoBehaviour // 0x18
	{
	public:
		Sound* _sound; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		SoundModulation::Modulator* fadeGainModulator; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Direction currentDirection; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
		float startTime; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		float length; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x38
}
