#pragma once

#include "..\UnityEngine\List.h"
#include "..\ProtoBuf\PlayerLifeStory.h"

namespace ProtoBuf
{
	class RespawnInformation : public Object // 0x0
	{
	public:
		UnityEngine::List<ProtoBuf.RespawnInformation.SpawnOptions>* spawnOptions; // 0x10 (size: 0x8, flags: 0x86, type: 0x15)
		ProtoBuf::PlayerLifeStory* previousLife; // 0x18 (size: 0x8, flags: 0x86, type: 0x12)
		bool fadeIn; // 0x20 (size: 0x1, flags: 0x86, type: 0x2)
		bool ShouldPool; // 0x21 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x22 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
