#pragma once

#include "BaseEntity.h"
#include "Item.h"
#include "..\UnityEngine\List.h"
#include "EntityRef.h"

namespace rust 
{
	class PlayerLoot : public EntityComponent`1 // 0x20
	{
	public:
		BaseEntity* entitySource; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Item* itemSource; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<ItemContainer>* containers; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		EntityRef clientEntity; // 0x38 (size: 0x10, flags: 0x81, type: 0x11)
	}; // size = 0x48
}
