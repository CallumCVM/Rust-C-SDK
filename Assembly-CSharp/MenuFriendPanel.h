#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\RawImage.h"
#include "..\Facepunch\Steamworks\SteamFriend.h"

namespace rust 
{
	class MenuFriendPanel : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* friendName; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* friendSubtitle; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::RawImage* friendAvatar; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Steamworks::SteamFriend* friend; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
