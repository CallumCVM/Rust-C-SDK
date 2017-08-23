#pragma once

#include "..\ProtoBuf\Item\InstanceData.h"
#include "..\ProtoBuf\Item\ConditionData.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\ProtoBuf\ItemContainer.h"

namespace ProtoBuf
{
	class Item : public Object // 0x0
	{
	public:
		ProtoBuf::Item::InstanceData* instanceData; // 0x10 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::Item::ConditionData* conditionData; // 0x18 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x86, type: 0xe)
		UnityEngine::UnicodeString* text; // 0x28 (size: 0x8, flags: 0x86, type: 0xe)
		ProtoBuf::ItemContainer* contents; // 0x30 (size: 0x8, flags: 0x86, type: 0x12)
		unsigned int UID; // 0x38 (size: 0x4, flags: 0x86, type: 0x9)
		int itemid; // 0x3c (size: 0x4, flags: 0x86, type: 0x8)
		int slot; // 0x40 (size: 0x4, flags: 0x86, type: 0x8)
		int amount; // 0x44 (size: 0x4, flags: 0x86, type: 0x8)
		int flags; // 0x48 (size: 0x4, flags: 0x86, type: 0x8)
		float removetime; // 0x4c (size: 0x4, flags: 0x86, type: 0xc)
		float locktime; // 0x50 (size: 0x4, flags: 0x86, type: 0xc)
		unsigned int worldEntity; // 0x54 (size: 0x4, flags: 0x86, type: 0x9)
		unsigned int heldEntity; // 0x58 (size: 0x4, flags: 0x86, type: 0x9)
		unsigned __int64 skinid; // 0x60 (size: 0x8, flags: 0x86, type: 0xb)
		bool ShouldPool; // 0x68 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x69 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
