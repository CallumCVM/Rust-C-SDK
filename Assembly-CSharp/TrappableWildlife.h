#pragma once

#include "GameObjectRef.h"
#include "ItemDefinition.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class TrappableWildlife : public ScriptableObject // 0x18
	{
	public:
		GameObjectRef* worldObject; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		ItemDefinition* inventoryObject; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<TrappableWildlife.BaitType>* baitTypes; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		int minToCatch; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		int maxToCatch; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
		int caloriesForInterest; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		float successRate; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		float xpScale; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x48
}
