#pragma once

#include "ItemMod.h"

namespace rust 
{
	class ItemModActionChange : public ItemMod // 0x20
	{
	public:
		ItemMod* actions; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
