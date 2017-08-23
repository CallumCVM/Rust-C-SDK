#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Facepunch\Steamworks\Client.h"
#include "..\Facepunch\Steamworks\Interop\ServerRules.h"

namespace rust 
{
	class Server : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <Name>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <GameDir>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Map>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Description>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString** <Tags>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		Facepunch::Steamworks::Client* Client; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		System.Action<bool> OnReceivedRules; // 0x40 (size: 0x8, flags: 0x6, type: 0x15)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,UnityEngine::UnicodeString*> Rules; // 0x48 (size: 0x8, flags: 0x6, type: 0x15)
		Facepunch::Steamworks::Interop::ServerRules* RulesRequest; // 0x50 (size: 0x8, flags: 0x3, type: 0x12)
		int <Ping>k__BackingField; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned int <AppId>k__BackingField; // 0x5c (size: 0x4, flags: 0x1, type: 0x9)
		int <Players>k__BackingField; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		int <MaxPlayers>k__BackingField; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		int <BotPlayers>k__BackingField; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		bool <Passworded>k__BackingField; // 0x6c (size: 0x1, flags: 0x1, type: 0x2)
		bool <Secure>k__BackingField; // 0x6d (size: 0x1, flags: 0x1, type: 0x2)
		unsigned int <LastTimePlayed>k__BackingField; // 0x70 (size: 0x4, flags: 0x1, type: 0x9)
		int <Version>k__BackingField; // 0x74 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned __int64 <SteamId>k__BackingField; // 0x78 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned int <Address>k__BackingField; // 0x80 (size: 0x4, flags: 0x1, type: 0x9)
		int <ConnectionPort>k__BackingField; // 0x84 (size: 0x4, flags: 0x1, type: 0x8)
		int <QueryPort>k__BackingField; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x90
}
