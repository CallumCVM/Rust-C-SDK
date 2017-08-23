#pragma once

#include "SoundDefinition.h"

namespace rust 
{
	class FootstepSound : public MonoBehaviour // 0x18
	{
	public:
		SoundDefinition* lightSound; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* medSound; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* hardSound; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
