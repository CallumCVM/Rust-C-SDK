#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class SoundVoiceLimiter : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<Sound>* sounds; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		int maxSimultaneousSounds; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
