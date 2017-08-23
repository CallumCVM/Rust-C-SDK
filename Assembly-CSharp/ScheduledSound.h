#pragma once

#include "SoundDefinition.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class ScheduledSound : public Object // 0x0
	{
	public:
		SoundDefinition* def; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		float startTime; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 position; // 0x1c (size: 0xc, flags: 0x6, type: 0x11)
		float volumeMod; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
