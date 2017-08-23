#pragma once

#include "..\GameMenu\Option.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\ProtoBuf\VendingMachine\SellOrderContainer.h"
#include "SoundPlayer.h"
#include "GameObjectRef.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class VendingMachine : public StorageContainer // 0x2e8
	{
	public:
		GameMenu::Option __menuOption_Menu_BroadcastOff; // 0x2e8 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_BroadcastOn; // 0x340 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_OpenAdmin; // 0x398 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_RotateVM; // 0x3f0 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_Shop; // 0x448 (size: 0x58, flags: 0x1, type: 0x11)
		UnityEngine::GameObject* adminMenuPrefab; // 0x4a0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* customerPanel; // 0x4a8 (size: 0x8, flags: 0x6, type: 0xe)
		ProtoBuf::VendingMachine::SellOrderContainer* sellOrders; // 0x4b0 (size: 0x8, flags: 0x6, type: 0x12)
		SoundPlayer* buySound; // 0x4b8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* shopName; // 0x4c0 (size: 0x8, flags: 0x6, type: 0xe)
		GameObjectRef* mapMarkerPrefab; // 0x4c8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<SoundManager.ScheduledSound>* scheduledPhysSounds; // 0x4d0 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x4d8
}
