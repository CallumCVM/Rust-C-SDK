#pragma once

#include "ServerHistoryItem.h"
#include "..\UnityEngine\GameObject.h"
#include "..\Facepunch\Steamworks\ServerList\Request.h"

namespace rust 
{
	class ServerHistory : public MonoBehaviour // 0x18
	{
	public:
		ServerHistoryItem* prefab; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* panelList; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Steamworks::ServerList::Request* Request; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x30
}
