#pragma once

#include "..\Facepunch\Steamworks\Inventory\Item.h"

namespace rust 
{
	class SteamInventory : public EntityComponent`1 // 0x20
	{
	public:
		Facepunch::Steamworks::Inventory::Item* Items; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x28
}
