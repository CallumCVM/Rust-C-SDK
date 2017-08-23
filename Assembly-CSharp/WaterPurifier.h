#pragma once

#include "LiquidContainer.h"
#include "GameObjectRef.h"
#include "..\UnityEngine\Transform.h"
#include "ItemDefinition.h"

namespace rust 
{
	class WaterPurifier : public LiquidContainer // 0x350
	{
	public:
		LiquidContainer* waterStorage; // 0x350 (size: 0x8, flags: 0x1, type: 0x12)
		GameObjectRef* storagePrefab; // 0x358 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* storagePrefabAnchor; // 0x360 (size: 0x8, flags: 0x6, type: 0x12)
		ItemDefinition* freshWater; // 0x368 (size: 0x8, flags: 0x6, type: 0x12)
		int waterToProcessPerMinute; // 0x370 (size: 0x4, flags: 0x6, type: 0x8)
		int freshWaterRatio; // 0x374 (size: 0x4, flags: 0x6, type: 0x8)
		float dirtyWaterProcssed; // 0x378 (size: 0x4, flags: 0x1, type: 0xc)
		float pendingFreshWater; // 0x37c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x380
}
