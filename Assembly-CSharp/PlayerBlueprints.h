#pragma once

#include "SteamInventory.h"

namespace rust 
{
	class PlayerBlueprints : public EntityComponent`1 // 0x20
	{
	public:
		SteamInventory* steamInventory; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		int* craftableItems; // 0x28 (size: 0x8, flags: 0x81, type: 0x1d)
	}; // size = 0x30
}
