#pragma once

#include "..\UnityEngine\AudioClip.h"

namespace rust 
{
	class LeanAudioStream : public Object // 0x0
	{
	public:
		UnityEngine::AudioClip* audioClip; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		float* audioArr; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		int position; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
