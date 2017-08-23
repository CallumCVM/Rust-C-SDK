#pragma once

#include "ItemBlueprint.h"
#include "BasePlayer.h"
#include "..\ProtoBuf\Item\InstanceData.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class ItemCraftTask : public Object // 0x0
	{
	public:
		ItemBlueprint* blueprint; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		BasePlayer* owner; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		ProtoBuf::Item::InstanceData* instanceData; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<unsigned __int64>* potentialOwners; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<Item>* takenItems; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		float endTime; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		int taskUID; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
		bool cancelled; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
		int amount; // 0x44 (size: 0x4, flags: 0x6, type: 0x8)
		int skinID; // 0x48 (size: 0x4, flags: 0x6, type: 0x8)
		int numCrafted; // 0x4c (size: 0x4, flags: 0x6, type: 0x8)
		float conditionScale; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x58
}
