#pragma once

#include "..\Facepunch\Steamworks\Client.h"
#include "..\UnityEngine\List.h"

namespace Facepunch
{
	namespace Steamworks
{
	class Friends : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Client* client; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::List<Facepunch.Steamworks.SteamFriend>* _allFriends; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
