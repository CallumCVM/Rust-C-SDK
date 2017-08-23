#pragma once

#include "GameObjectRef.h"
#include "OreHotSpot.h"
#include "SoundPlayer.h"

namespace rust 
{
	class OreResourceEntity : public StagedResourceEntity // 0x178
	{
	public:
		GameObjectRef* bonusPrefab; // 0x178 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* finishEffect; // 0x180 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* bonusFailEffect; // 0x188 (size: 0x8, flags: 0x6, type: 0x12)
		OreHotSpot* _hotSpot; // 0x190 (size: 0x8, flags: 0x6, type: 0x12)
		SoundPlayer* bonusSound; // 0x198 (size: 0x8, flags: 0x6, type: 0x12)
		int bonusesKilled; // 0x1a0 (size: 0x4, flags: 0x1, type: 0x8)
		int bonusesSpawned; // 0x1a4 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x1a8
}
