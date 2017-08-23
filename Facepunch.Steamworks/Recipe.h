#pragma once

#include "..\Facepunch\Steamworks\Inventory\Definition.h"
#include "..\Facepunch\Steamworks\Inventory\Recipe\Ingredient.h"

namespace rust 
{
	class Recipe : public ValueType // 0x0
	{
	public:
		Facepunch::Steamworks::Inventory::Definition* Result; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Steamworks::Inventory::Recipe::Ingredient* Ingredients; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
