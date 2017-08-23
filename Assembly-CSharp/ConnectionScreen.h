#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\GameObject.h"
#include "ServerBrowserInfo.h"
#include "..\UnityEngine\Events\UnityEvent.h"
#include "..\Facepunch\Steamworks\ServerList\Server.h"

namespace rust 
{
	class ConnectionScreen : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::UI::Text* statusText; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* disconnectButton; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* retryButton; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		ServerBrowserInfo* browserInfo; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Events::UnityEvent* onShowConnectionScreen; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Steamworks::ServerList::Server* currentServer; // 0x40 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x48
}
