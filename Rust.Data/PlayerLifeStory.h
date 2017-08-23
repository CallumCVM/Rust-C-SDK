#pragma once

#include "..\ProtoBuf\PlayerLifeStory\DeathInfo.h"

namespace ProtoBuf
{
	class PlayerLifeStory : public Object // 0x0
	{
	public:
		ProtoBuf::PlayerLifeStory::DeathInfo* deathInfo; // 0x10 (size: 0x8, flags: 0x86, type: 0x12)
		float secondsAlive; // 0x18 (size: 0x4, flags: 0x86, type: 0xc)
		float metersWalked; // 0x1c (size: 0x4, flags: 0x86, type: 0xc)
		float metersRun; // 0x20 (size: 0x4, flags: 0x86, type: 0xc)
		float secondsSleeping; // 0x24 (size: 0x4, flags: 0x86, type: 0xc)
		unsigned int timeBorn; // 0x28 (size: 0x4, flags: 0x86, type: 0x9)
		unsigned int timeDied; // 0x2c (size: 0x4, flags: 0x86, type: 0x9)
		bool ShouldPool; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
