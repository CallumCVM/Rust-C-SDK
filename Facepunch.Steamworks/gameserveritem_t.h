#pragma once

#include "..\SteamNative\servernetadr_t.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace SteamNative
{
	class gameserveritem_t : public ValueType // 0x0
	{
	public:
		SteamNative::servernetadr_t NetAdr; // 0x10 (size: 0x8, flags: 0x6, type: 0x11)
		int Ping; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		bool HadSuccessfulResponse; // 0x1c (size: 0x1, flags: 0x1006, type: 0x2)
		bool DoNotRefresh; // 0x1d (size: 0x1, flags: 0x1006, type: 0x2)
		UnityEngine::UnicodeString* GameDir; // 0x20 (size: 0x8, flags: 0x1006, type: 0xe)
		UnityEngine::UnicodeString* Map; // 0x28 (size: 0x8, flags: 0x1006, type: 0xe)
		UnityEngine::UnicodeString* GameDescription; // 0x30 (size: 0x8, flags: 0x1006, type: 0xe)
		unsigned int AppID; // 0x38 (size: 0x4, flags: 0x6, type: 0x9)
		int Players; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
		int MaxPlayers; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
		int BotPlayers; // 0x44 (size: 0x4, flags: 0x6, type: 0x8)
		bool Password; // 0x48 (size: 0x1, flags: 0x1006, type: 0x2)
		bool Secure; // 0x49 (size: 0x1, flags: 0x1006, type: 0x2)
		unsigned int TimeLastPlayed; // 0x4c (size: 0x4, flags: 0x6, type: 0x9)
		int ServerVersion; // 0x50 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::UnicodeString* ServerName; // 0x58 (size: 0x8, flags: 0x1006, type: 0xe)
		UnityEngine::UnicodeString* GameTags; // 0x60 (size: 0x8, flags: 0x1006, type: 0xe)
		unsigned __int64 SteamID; // 0x68 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x70
}
