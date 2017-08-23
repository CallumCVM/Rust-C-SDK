#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\ProtoBuf\SleepingBag\Private.h"

namespace ProtoBuf
{
	class SleepingBag : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x86, type: 0xe)
		ProtoBuf::SleepingBag::Private* privateData; // 0x18 (size: 0x8, flags: 0x86, type: 0x12)
		unsigned __int64 deployerID; // 0x20 (size: 0x8, flags: 0x86, type: 0xb)
		bool ShouldPool; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
