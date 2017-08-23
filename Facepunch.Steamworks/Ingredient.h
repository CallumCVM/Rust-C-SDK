#pragma once

#include "..\Facepunch\Steamworks\Inventory\Definition.h"

namespace rust 
{
	class Ingredient : public ValueType // 0x0
	{
	public:
		int DefinitionId; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		Facepunch::Steamworks::Inventory::Definition* Definition; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		int Count; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
