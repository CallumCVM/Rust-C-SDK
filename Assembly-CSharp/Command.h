#pragma once

#include "..\System\Net\IPEndPoint.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Command : public ValueType // 0x0
	{
	public:
		System::Net::IPEndPoint* Ip; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* ConnectionId; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Name; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Message; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		int Identifier; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x38
}
