#pragma once

#include "..\UnityEngine\AudioClip.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class MusicClip : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::AudioClip* audioClip; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<float>* fadeInPoints; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		int lengthInBars; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int lengthInBarsWithTail; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x30
}
