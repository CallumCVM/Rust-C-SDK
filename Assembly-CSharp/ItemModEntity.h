#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ItemModEntity : public ItemMod // 0x20
	{
	public:
		GameObjectRef* entityPrefab; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* defaultBone; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x30
}
