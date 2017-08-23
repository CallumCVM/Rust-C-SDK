#pragma once

#include "Sound.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class SoundModulation : public MonoBehaviour // 0x18
	{
	public:
		Sound* sound; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<UnityEngine::List<SoundModulation.Modulator>>* modulators; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<float>* modulationValues; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x30
}
