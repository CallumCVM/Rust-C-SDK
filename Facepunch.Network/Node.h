#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Node : public Object // 0x0
	{
	public:
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,Network.Stats.Node> Children; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		__int64 Bytes; // 0x18 (size: 0x8, flags: 0x6, type: 0xa)
		__int64 Count; // 0x20 (size: 0x8, flags: 0x6, type: 0xa)
	}; // size = 0x28
}
