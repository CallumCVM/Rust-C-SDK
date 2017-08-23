#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Toggle.h"
#include "..\Facepunch\Steamworks\ServerList\Server.h"

namespace rust 
{
	class ServerBrowserItem : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* serverName; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* mapName; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* playerCount; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* ping; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Toggle* favourited; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Steamworks::ServerList::Server* serverInfo; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		bool preventFavouriteToggle; // 0x48 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x50
}
