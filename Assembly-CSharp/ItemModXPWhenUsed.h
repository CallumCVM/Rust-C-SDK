#pragma once

namespace rust 
{
	class ItemModXPWhenUsed : public ItemMod // 0x20
	{
	public:
		float xpPerUnit; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		int unitSize; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
