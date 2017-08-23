#pragma once

#include "..\UnityEngine\RectTransform.h"
#include "SteamUserButton.h"
#include "..\SteamFriendsList\onFriendSelectedEvent.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class SteamFriendsList : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::RectTransform* targetPanel; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		SteamUserButton* userButton; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		SteamFriendsList::onFriendSelectedEvent* onFriendSelected; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<Facepunch.Steamworks.SteamFriend>* playerList; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		bool IncludeFriendsList; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
		bool IncludeRecentlySeen; // 0x39 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x40
}
