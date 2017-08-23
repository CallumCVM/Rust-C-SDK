#pragma once

#include "..\Facepunch\Steamworks\RemoteFile.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Entry : public ValueType // 0x0
	{
	public:
		unsigned __int64 SteamId; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		int Score; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int* SubScores; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		int GlobalRank; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		Facepunch::Steamworks::RemoteFile* AttachedFile; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* Name; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x40
}
