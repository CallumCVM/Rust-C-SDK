#pragma once

#include "..\SteamNative\SteamInventory.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Facepunch\Steamworks\Inventory\Recipe.h"
#include "..\System\DateTime.h"

namespace rust 
{
	class Definition : public Object // 0x0
	{
	public:
		SteamNative::SteamInventory* inventory; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::UnicodeString* <Name>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Description>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <IconUrl>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <IconLargeUrl>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Type>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <ExchangeSchema>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		Facepunch::Steamworks::Inventory::Recipe* <Recipes>k__BackingField; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		Facepunch::Steamworks::Inventory::Recipe* <IngredientFor>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* <PriceRaw>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,UnityEngine::UnicodeString*> customProperties; // 0x60 (size: 0x8, flags: 0x1, type: 0x15)
		int <Id>k__BackingField; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		System::DateTime <Created>k__BackingField; // 0x70 (size: 0x10, flags: 0x1, type: 0x11)
		System::DateTime <Modified>k__BackingField; // 0x80 (size: 0x10, flags: 0x1, type: 0x11)
		double <PriceDollars>k__BackingField; // 0x90 (size: 0x8, flags: 0x1, type: 0xd)
		bool <Marketable>k__BackingField; // 0x98 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xa0
}
