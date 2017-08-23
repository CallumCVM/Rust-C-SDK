#pragma once

#include "..\UnityEngine\Animator.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Rigidbody.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\GameObject.h"
#include "GameObjectRef.h"

namespace rust 
{
	class m2bradleyAnimator : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Animator* m2Animator; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* treadLeftMaterial; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* treadRightMaterial; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Rigidbody* mainRigidbody; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* turret; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* mainCannon; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* coaxGun; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* rocketsPitch; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* spotLightYaw; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* spotLightPitch; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* sideMG; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* sideguns; // 0x70 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Transform* ShocksBones; // 0x78 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Transform* ShockTraceLineBegin; // 0x80 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector3* vecShocksOffsetPosition; // 0x88 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Transform* targetTurret; // 0x90 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* targetSpotLight; // 0x98 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* targetSideguns; // 0xa0 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::GameObject* muzzleflashCannon; // 0xa8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* muzzleflashCoaxGun; // 0xb0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* muzzleflashSideMG; // 0xb8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* muzzleflashRockets; // 0xc0 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::GameObject* spotLightHaloSawnpoint; // 0xc8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* muzzleflashSideguns; // 0xd0 (size: 0x8, flags: 0x6, type: 0x1d)
		GameObjectRef* machineGunMuzzleFlashFX; // 0xd8 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* mainCannonFireFX; // 0xe0 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* rocketLaunchFX; // 0xe8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3* vecSideGunRotation; // 0xf0 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector3 vecTurret; // 0xf8 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 vecMainCannon; // 0x104 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 vecCoaxGun; // 0x110 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 vecRocketsPitch; // 0x11c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 vecSpotLightBase; // 0x128 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 vecSpotLight; // 0x134 (size: 0xc, flags: 0x1, type: 0x11)
		float sideMGPitchValue; // 0x140 (size: 0x4, flags: 0x1, type: 0xc)
		bool rocketsOpen; // 0x144 (size: 0x1, flags: 0x6, type: 0x2)
		float treadConstant; // 0x148 (size: 0x4, flags: 0x6, type: 0xc)
		float wheelSpinConstant; // 0x14c (size: 0x4, flags: 0x6, type: 0xc)
		float sidegunsTurnSpeed; // 0x150 (size: 0x4, flags: 0x6, type: 0xc)
		float turretTurnSpeed; // 0x154 (size: 0x4, flags: 0x6, type: 0xc)
		float cannonPitchSpeed; // 0x158 (size: 0x4, flags: 0x6, type: 0xc)
		float rocketPitchSpeed; // 0x15c (size: 0x4, flags: 0x6, type: 0xc)
		float spotLightTurnSpeed; // 0x160 (size: 0x4, flags: 0x6, type: 0xc)
		float machineGunSpeed; // 0x164 (size: 0x4, flags: 0x6, type: 0xc)
		float wheelAngle; // 0x168 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x170
}
