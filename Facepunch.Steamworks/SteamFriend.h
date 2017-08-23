#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Facepunch\Steamworks\Client.h"
#include "..\SteamNative\PersonaState.h"
#include "..\SteamNative\FriendRelationship.h"

namespace Facepunch
{
	namespace Steamworks
{
	class SteamFriend : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		Facepunch::Steamworks::Client* <Client>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned __int64 <Id>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 <CurrentAppId>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned int <ServerIp>k__BackingField; // 0x30 (size: 0x4, flags: 0x1, type: 0x9)
		int <ServerGamePort>k__BackingField; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		int <ServerQueryPort>k__BackingField; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned __int64 <ServerLobbyId>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0xb)
		SteamNative::PersonaState personaState; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
		SteamNative::FriendRelationship relationship; // 0x4c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
