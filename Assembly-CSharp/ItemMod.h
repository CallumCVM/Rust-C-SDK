#pragma once

#include "ItemMod.h"

namespace rust 
{
	class ItemMod : public MonoBehaviour // 0x18
	{
	public:
		ItemMod* siblingMods; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
