#pragma once

#include "..\Facepunch\Steamworks\ServerList\Server.h"
#include "..\UnityEngine\UI\Text.h"

namespace rust 
{
	class ServerHistoryItem : public MonoBehaviour // 0x18
	{
	public:
		Facepunch::Steamworks::ServerList::Server* serverInfo; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Text* serverName; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* players; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* lastJoinDate; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		unsigned int order; // 0x38 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x40
}
