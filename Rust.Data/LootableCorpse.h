#pragma once

#include "..\ProtoBuf\LootableCorpse\Private.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace ProtoBuf
{
	class LootableCorpse : public Object // 0x0
	{
	public:
		ProtoBuf::LootableCorpse::Private* privateData; // 0x10 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::UnicodeString* playerName; // 0x18 (size: 0x8, flags: 0x86, type: 0xe)
		unsigned __int64 playerID; // 0x20 (size: 0x8, flags: 0x86, type: 0xb)
		bool ShouldPool; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
