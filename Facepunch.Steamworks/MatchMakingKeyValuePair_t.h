#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class MatchMakingKeyValuePair_t : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* Key; // 0x10 (size: 0x8, flags: 0x1006, type: 0xe)
		UnityEngine::UnicodeString* Value; // 0x18 (size: 0x8, flags: 0x1006, type: 0xe)
	}; // size = 0x20
}
