#pragma once

#include "ItemDefinition.h"
#include "..\Translate\Phrase.h"
#include "..\UnityEngine\Sprite.h"

namespace rust 
{
	class PrefabInformation : public PrefabAttribute // 0x98
	{
	public:
		ItemDefinition* associatedItemDefinition; // 0x98 (size: 0x8, flags: 0x6, type: 0x12)
		Translate::Phrase* title; // 0xa0 (size: 0x8, flags: 0x6, type: 0x12)
		Translate::Phrase* description; // 0xa8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Sprite* sprite; // 0xb0 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0xb8
}
