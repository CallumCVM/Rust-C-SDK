#pragma once

#include "..\UnityEngine\List.h"

namespace ProtoBuf
{
	class PlayerUpdateLoot : public Object // 0x0
	{
	public:
		UnityEngine::List<ProtoBuf.ItemContainer>* containers; // 0x10 (size: 0x8, flags: 0x86, type: 0x15)
		unsigned int itemID; // 0x18 (size: 0x4, flags: 0x86, type: 0x9)
		unsigned int entityID; // 0x1c (size: 0x4, flags: 0x86, type: 0x9)
		bool ShouldPool; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
