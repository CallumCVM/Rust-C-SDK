#pragma once

#include "ItemContainer.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class PlayerCorpse : public LootableCorpse // 0x278
	{
	public:
		ItemContainer* clientClothing; // 0x278 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::UnicodeString* lastClothes; // 0x280 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x288
}
