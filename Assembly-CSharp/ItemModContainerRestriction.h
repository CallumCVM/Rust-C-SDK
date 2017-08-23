#pragma once

namespace rust 
{
	class ItemModContainerRestriction : public ItemMod // 0x20
	{
	public:
		SlotFlags slotFlags; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
