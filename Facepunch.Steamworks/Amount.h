#pragma once

#include "..\Facepunch\Steamworks\Inventory\Item.h"

namespace rust 
{
	class Amount : public ValueType // 0x0
	{
	public:
		Facepunch::Steamworks::Inventory::Item Item; // 0x10 (size: 0x20, flags: 0x6, type: 0x11)
		int Quantity; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x38
}
