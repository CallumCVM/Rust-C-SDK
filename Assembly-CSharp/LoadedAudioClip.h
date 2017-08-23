#pragma once

#include "..\UnityEngine\AudioClip.h"

namespace rust 
{
	class LoadedAudioClip : public Object // 0x0
	{
	public:
		UnityEngine::AudioClip* clip; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		float unloadTime; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
