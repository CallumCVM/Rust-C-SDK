#pragma once

#include "GameObjectRef.h"
#include "ResourceDispenser.h"
#include "..\UnityEngine\GameObject.h"
#include "LODCell.h"

namespace rust 
{
	class OreHotSpot : public BaseCombatEntity // 0x1e8
	{
	public:
		GameObjectRef* visualEffect; // 0x1e8 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* finishEffect; // 0x1f0 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* damageEffect; // 0x1f8 (size: 0x8, flags: 0x6, type: 0x12)
		ResourceDispenser* resourceDispenser; // 0x200 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* visualInstance; // 0x208 (size: 0x8, flags: 0x1, type: 0x12)
		LODCell* cell; // 0x210 (size: 0x8, flags: 0x1, type: 0x12)
		float visualDistance; // 0x218 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x220
}
