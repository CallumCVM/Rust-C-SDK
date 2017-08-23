#pragma once

#include "..\GameMenu\Option.h"
#include "BasePlayer.h"
#include "..\UnityEngine\GameObject.h"
#include "SoundPlayer.h"
#include "ItemDefinition.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class SearchLight : public StorageContainer // 0x2e8
	{
	public:
		GameMenu::Option __menuOption_StopUseLight; // 0x2e8 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_SwitchOff; // 0x340 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_SwitchOn; // 0x398 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_UseLight; // 0x3f0 (size: 0x58, flags: 0x1, type: 0x11)
		BasePlayer* mountedPlayer; // 0x448 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* pitchObject; // 0x450 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* yawObject; // 0x458 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* eyePoint; // 0x460 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* lightEffect; // 0x468 (size: 0x8, flags: 0x6, type: 0x12)
		SoundPlayer* turnLoop; // 0x470 (size: 0x8, flags: 0x6, type: 0x12)
		ItemDefinition* fuelType; // 0x478 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3 aimDir; // 0x480 (size: 0xc, flags: 0x1, type: 0x11)
		bool wasMoving; // 0x48c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x490
}
