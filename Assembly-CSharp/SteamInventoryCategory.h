#pragma once

namespace rust 
{
	class SteamInventoryCategory : public ScriptableObject // 0x18
	{
	public:
		bool canBeSoldToOtherUsers; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
		bool canBeTradedWithOtherUsers; // 0x19 (size: 0x1, flags: 0x6, type: 0x2)
		bool isCommodity; // 0x1a (size: 0x1, flags: 0x6, type: 0x2)
		Price price; // 0x1c (size: 0x4, flags: 0x6, type: 0x11)
		DropChance dropChance; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
		bool CanBeInCrates; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
