#pragma once

#include "..\UnityEngine\Sprite.h"
#include "..\Translate\Phrase.h"
#include "SteamInventoryCategory.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class SteamInventoryItem : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::Sprite* icon; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Translate::Phrase* displayName; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Translate::Phrase* displayDescription; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		SteamInventoryCategory* steamCategory; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* itemname; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		int id; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
		Category category; // 0x44 (size: 0x4, flags: 0x6, type: 0x11)
		SubCategory subcategory; // 0x48 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned __int64 workshopID; // 0x50 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x58
}
