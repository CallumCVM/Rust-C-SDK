#pragma once

#include "GameObjectRef.h"
#include "ProtectionProperties.h"
#include "ArmorProperties.h"
#include "ClothingMovementProperties.h"
#include "..\UIBlackoutOverlay\blackoutType.h"

namespace rust 
{
	class ItemModWearable : public ItemMod // 0x20
	{
	public:
		GameObjectRef* entityPrefab; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		ProtectionProperties* protectionProperties; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		ArmorProperties* armorProperties; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		ClothingMovementProperties* movementProperties; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UIBlackoutOverlay::blackoutType occlusionType; // 0x40 (size: 0x4, flags: 0x6, type: 0x11)
		bool blocksAiming; // 0x44 (size: 0x1, flags: 0x6, type: 0x2)
		bool emissive; // 0x45 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x48
}
