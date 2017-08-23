#pragma once

#include "..\GameMenu\Option.h"
#include "GameObjectRef.h"
#include "..\SoundModulation\Modulator.h"
#include "Sound.h"
#include "..\UnityEngine\Quaternion.h"
#include "ItemDefinition.h"
#include "BaseCombatEntity.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Vector3.h"
#include "SoundDefinition.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class AutoTurret : public StorageContainer // 0x2e8
	{
	public:
		GameMenu::Option __menuOption_MenuAuthorize; // 0x2e8 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_MenuClearList; // 0x340 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_MenuDeauthorize; // 0x398 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_MenuTurretAttackAll; // 0x3f0 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_MenuTurretDisable; // 0x448 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_MenuTurretEnable; // 0x4a0 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_MenuTurretPeacekeeper; // 0x4f8 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_MenuTurretRotate; // 0x550 (size: 0x58, flags: 0x1, type: 0x11)
		GameObjectRef* gun_fire_effect; // 0x5a8 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* bulletEffect; // 0x5b0 (size: 0x8, flags: 0x6, type: 0x12)
		SoundModulation::Modulator* turnSoundModulator; // 0x5b8 (size: 0x8, flags: 0x1, type: 0x12)
		SoundModulation::Modulator* ambientSoundModulator; // 0x5c0 (size: 0x8, flags: 0x1, type: 0x12)
		Sound* ambientLoop; // 0x5c8 (size: 0x8, flags: 0x1, type: 0x12)
		Sound* turnLoop; // 0x5d0 (size: 0x8, flags: 0x1, type: 0x12)
		ItemDefinition* ammoType; // 0x5d8 (size: 0x8, flags: 0x6, type: 0x12)
		BaseCombatEntity* target; // 0x5e0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* eyePos; // 0x5e8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* muzzlePos; // 0x5f0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* gun_yaw; // 0x5f8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* gun_pitch; // 0x600 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* turnLoopDef; // 0x608 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* movementChangeDef; // 0x610 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* ambientLoopDef; // 0x618 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* focusCameraDef; // 0x620 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* peacekeeperToggleSound; // 0x628 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* onlineSound; // 0x630 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* offlineSound; // 0x638 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* targetAcquiredEffect; // 0x640 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* targetLostEffect; // 0x648 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<ProtoBuf.PlayerNameID>* authorizedPlayers; // 0x650 (size: 0x8, flags: 0x1, type: 0x15)
		float bulletSpeed; // 0x658 (size: 0x4, flags: 0x6, type: 0xc)
		float nextFocusSound; // 0x65c (size: 0x4, flags: 0x1, type: 0xc)
		bool wasTurning; // 0x660 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::Quaternion lastYaw; // 0x664 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 aimDir; // 0x674 (size: 0xc, flags: 0x6, type: 0x11)
		float sightRange; // 0x680 (size: 0x4, flags: 0x6, type: 0xc)
		float focusSoundFreqMin; // 0x684 (size: 0x4, flags: 0x6, type: 0xc)
		float focusSoundFreqMax; // 0x688 (size: 0x4, flags: 0x6, type: 0xc)
		float aimCone; // 0x68c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x690
}
