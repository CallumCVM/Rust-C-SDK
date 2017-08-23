#pragma once

#include "..\GameMenu\Option.h"
#include "..\UnityEngine\Vector3.h"
#include "PlayerModel.h"
#include "PlayerVoiceRecorder.h"
#include "PlayerVoiceSpeaker.h"
#include "ConstructVision.h"
#include "..\UnityEngine\GameObject.h"
#include "BaseEntity.h"
#include "..\UnityEngine\Collider.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "HitTest.h"
#include "ModelState.h"
#include "..\Network\Connection\TimeAverageValue.h"
#include "PlayerTick.h"
#include "GameObjectRef.h"
#include "PlayerEyes.h"
#include "PlayerInventory.h"
#include "PlayerBlueprints.h"
#include "PlayerMetabolism.h"
#include "PlayerInput.h"
#include "BaseMovement.h"
#include "BaseCollision.h"
#include "PlayerBelt.h"
#include "..\UnityEngine\Rigidbody.h"
#include "ProtectionProperties.h"

namespace rust 
{
	class BasePlayer : public BaseCombatEntity // 0x1e8
	{
	public:
		GameMenu::Option __menuOption_Drink; // 0x1e8 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_AssistPlayer; // 0x240 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_LootPlayer; // 0x298 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_SaltWater; // 0x2f0 (size: 0x58, flags: 0x1, type: 0x11)
		PlayerModel* playerModel; // 0x348 (size: 0x8, flags: 0x86, type: 0x12)
		PlayerVoiceRecorder* voiceRecorder; // 0x350 (size: 0x8, flags: 0x86, type: 0x12)
		PlayerVoiceSpeaker* voiceSpeaker; // 0x358 (size: 0x8, flags: 0x86, type: 0x12)
		ConstructVision* constructVisionObject; // 0x360 (size: 0x8, flags: 0x83, type: 0x12)
		UnityEngine::GameObject* lookingAt; // 0x368 (size: 0x8, flags: 0x86, type: 0x12)
		BaseEntity* lookingAtEntity; // 0x370 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::Collider* lookingAtCollider; // 0x378 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::UnicodeString* lastClothesHash; // 0x380 (size: 0x8, flags: 0x1, type: 0xe)
		HitTest* lookingAtTest; // 0x388 (size: 0x8, flags: 0x1, type: 0x12)
		ModelState* modelState; // 0x390 (size: 0x8, flags: 0x86, type: 0x12)
		ModelState* modelStateTick; // 0x398 (size: 0x8, flags: 0x81, type: 0x12)
		PlayerTick* lastSentTick; // 0x3a0 (size: 0x8, flags: 0x1, type: 0x12)
		GameObjectRef* fallDamageEffect; // 0x3a8 (size: 0x8, flags: 0x6, type: 0x12)
		PlayerEyes* eyes; // 0x3b0 (size: 0x8, flags: 0x86, type: 0x12)
		PlayerInventory* inventory; // 0x3b8 (size: 0x8, flags: 0x86, type: 0x12)
		PlayerBlueprints* blueprints; // 0x3c0 (size: 0x8, flags: 0x86, type: 0x12)
		PlayerMetabolism* metabolism; // 0x3c8 (size: 0x8, flags: 0x86, type: 0x12)
		PlayerInput* input; // 0x3d0 (size: 0x8, flags: 0x86, type: 0x12)
		BaseMovement* movement; // 0x3d8 (size: 0x8, flags: 0x86, type: 0x12)
		BaseCollision* collision; // 0x3e0 (size: 0x8, flags: 0x86, type: 0x12)
		PlayerBelt* Belt; // 0x3e8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Collider* triggerCollider; // 0x3f0 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::Rigidbody* physicsRigidbody; // 0x3f8 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::UnicodeString* UserIDString; // 0x400 (size: 0x8, flags: 0x86, type: 0xe)
		UnityEngine::UnicodeString* _displayName; // 0x408 (size: 0x8, flags: 0x1, type: 0xe)
		ProtectionProperties* cachedProtection; // 0x410 (size: 0x8, flags: 0x1, type: 0x12)
		CameraMode currentViewMode; // 0x418 (size: 0x4, flags: 0x86, type: 0x11)
		CameraMode selectedViewMode; // 0x41c (size: 0x4, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 lastRevivePoint; // 0x420 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 lastReviveDirection; // 0x42c (size: 0xc, flags: 0x1, type: 0x11)
		bool Frozen; // 0x438 (size: 0x1, flags: 0x86, type: 0x2)
		UnityEngine::Vector3 lookingAtPoint; // 0x43c (size: 0xc, flags: 0x86, type: 0x11)
		bool needsClothesRebuild; // 0x448 (size: 0x1, flags: 0x1, type: 0x2)
		int headTracking; // 0x44c (size: 0x4, flags: 0x86, type: 0x8)
		float usePressTime; // 0x450 (size: 0x4, flags: 0x1, type: 0xc)
		unsigned int clActiveItem; // 0x454 (size: 0x4, flags: 0x1, type: 0x9)
		Network::Connection::TimeAverageValue p2pPacketsPerSecond; // 0x458 (size: 0x20, flags: 0x1, type: 0x11)
		int maxProjectileID; // 0x478 (size: 0x4, flags: 0x1, type: 0x8)
		float lastUpdateTime; // 0x47c (size: 0x4, flags: 0x1, type: 0xc)
		float cachedThreatLevel; // 0x480 (size: 0x4, flags: 0x1, type: 0xc)
		float lastSentTickTime; // 0x484 (size: 0x4, flags: 0x1, type: 0xc)
		float nextVisThink; // 0x488 (size: 0x4, flags: 0x1, type: 0xc)
		float lastTimeSeen; // 0x48c (size: 0x4, flags: 0x1, type: 0xc)
		bool debugPrevVisible; // 0x490 (size: 0x1, flags: 0x1, type: 0x2)
		PlayerFlags playerFlags; // 0x494 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned __int64 userID; // 0x498 (size: 0x8, flags: 0x86, type: 0xb)
		float lastHeadshotSoundTime; // 0x4a0 (size: 0x4, flags: 0x1, type: 0xc)
		bool clothingBlocksAiming; // 0x4a4 (size: 0x1, flags: 0x6, type: 0x2)
		float clothingMoveSpeedReduction; // 0x4a8 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x4b0
}
