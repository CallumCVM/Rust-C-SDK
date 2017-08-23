#pragma once

namespace rust 
{
	class ItemModUseContent : public ItemMod // 0x20
	{
	public:
		int amountToConsume; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
