#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\ProtoBuf\PlayerInventory.h"
#include "..\ProtoBuf\PlayerMetabolism.h"
#include "ModelState.h"
#include "..\ProtoBuf\PersistantPlayer.h"
#include "..\ProtoBuf\PlayerLifeStory.h"

namespace ProtoBuf
{
	class BasePlayer : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x86, type: 0xe)
		ProtoBuf::PlayerInventory* inventory; // 0x18 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::PlayerMetabolism* metabolism; // 0x20 (size: 0x8, flags: 0x86, type: 0x12)
		ModelState* modelState; // 0x28 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::PersistantPlayer* persistantData; // 0x30 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::PlayerLifeStory* currentLife; // 0x38 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::PlayerLifeStory* previousLife; // 0x40 (size: 0x8, flags: 0x86, type: 0x12)
		unsigned __int64 userid; // 0x48 (size: 0x8, flags: 0x86, type: 0xb)
		int playerFlags; // 0x50 (size: 0x4, flags: 0x86, type: 0x8)
		unsigned int heldEntity; // 0x54 (size: 0x4, flags: 0x86, type: 0x9)
		float health; // 0x58 (size: 0x4, flags: 0x86, type: 0xc)
		float skinCol; // 0x5c (size: 0x4, flags: 0x86, type: 0xc)
		float skinTex; // 0x60 (size: 0x4, flags: 0x86, type: 0xc)
		float skinMesh; // 0x64 (size: 0x4, flags: 0x86, type: 0xc)
		bool ShouldPool; // 0x68 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x69 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
