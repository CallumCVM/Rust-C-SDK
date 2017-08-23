#pragma once

#include "..\ProtoBuf\CodeLock\Private.h"

namespace ProtoBuf
{
	class CodeLock : public Object // 0x0
	{
	public:
		ProtoBuf::CodeLock::Private* pv; // 0x10 (size: 0x8, flags: 0x86, type: 0x12)
		bool hasCode; // 0x18 (size: 0x1, flags: 0x86, type: 0x2)
		bool hasGuestCode; // 0x19 (size: 0x1, flags: 0x86, type: 0x2)
		bool ShouldPool; // 0x1a (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x1b (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
