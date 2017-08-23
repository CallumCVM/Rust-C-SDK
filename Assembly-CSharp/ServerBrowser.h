#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ServerBrowser : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* orderBy; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* searchText; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* mapSearchText; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		bool showFull; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool showEmpty; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
