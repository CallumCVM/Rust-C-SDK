#pragma once

namespace rust 
{
	class ItemModAlterCondition : public ItemMod // 0x20
	{
	public:
		float conditionChange; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
