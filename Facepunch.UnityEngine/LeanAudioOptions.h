#pragma once

#include "..\UnityEngine\Vector3.h"
#include "LeanAudioStream.h"

namespace rust 
{
	class LeanAudioOptions : public Object // 0x0
	{
	public:
		UnityEngine::Vector3* vibrato; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector3* modulation; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		LeanAudioStream* stream; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		LeanAudioWaveStyle waveStyle; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		int frequencyRate; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		float waveNoiseScale; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float waveNoiseInfluence; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		bool useSetData; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x40
}
