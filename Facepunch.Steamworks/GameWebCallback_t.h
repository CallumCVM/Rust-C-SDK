#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class GameWebCallback_t : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* URL; // 0x10 (size: 0x8, flags: 0x1006, type: 0xe)
	}; // size = 0x18
}
