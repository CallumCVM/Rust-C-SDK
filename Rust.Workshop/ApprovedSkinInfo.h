#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Rust\Workshop\Price.h"
#include "..\Rust\Workshop\DropChance.h"
#include "Skinnable.h"

namespace Rust
{
	namespace Workshop
{
	class ApprovedSkinInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <Desc>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Name>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		Skinnable* <Skinnable>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned __int64 <InventoryId>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 <WorkshopdId>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0xb)
		Rust::Workshop::Price <Price>k__BackingField; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		bool <Tradable>k__BackingField; // 0x3c (size: 0x1, flags: 0x1, type: 0x2)
		Rust::Workshop::DropChance <DropChance>k__BackingField; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
		bool <Marketable>k__BackingField; // 0x44 (size: 0x1, flags: 0x1, type: 0x2)
		bool <AllowInCrates>k__BackingField; // 0x45 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
