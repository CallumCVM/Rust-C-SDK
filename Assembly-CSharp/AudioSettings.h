#pragma once

#include "..\UnityEngine\Audio\AudioMixer.h"

namespace rust 
{
	class AudioSettings : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Audio::AudioMixer* mixer; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
