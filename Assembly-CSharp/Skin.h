#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "SteamInventoryItem.h"

namespace rust 
{
	class Skin : public ValueType // 0x0
	{
	public:
		int id; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int itemid; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		bool isSkin; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		SteamInventoryItem* _invItem; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
