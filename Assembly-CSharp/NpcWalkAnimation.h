#pragma once

#include "..\UnityEngine\Vector3.h"
#include "BaseNpc.h"
#include "..\UnityEngine\Animator.h"
#include "..\UnityEngine\Transform.h"
#include "AverageVelocity.h"
#include "..\UnityEngine\Quaternion.h"

namespace rust 
{
	class NpcWalkAnimation : public MonoBehaviour // 0x18
	{
	public:
		BaseNpc* Npc; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Animator* Animator; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* HipBone; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* LookBone; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* alignmentRoot; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		AverageVelocity* AverageVelocity; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector3 HipFudge; // 0x48 (size: 0xc, flags: 0x6, type: 0x11)
		bool UpdateWalkSpeed; // 0x54 (size: 0x1, flags: 0x6, type: 0x2)
		bool UpdateFacingDirection; // 0x55 (size: 0x1, flags: 0x6, type: 0x2)
		bool UpdateGroundNormal; // 0x56 (size: 0x1, flags: 0x6, type: 0x2)
		bool LaggyAss; // 0x57 (size: 0x1, flags: 0x6, type: 0x2)
		bool LookAtTarget; // 0x58 (size: 0x1, flags: 0x6, type: 0x2)
		float MaxLaggyAssRotation; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		float MaxWalkAnimSpeed; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 oldPosition; // 0x64 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Quaternion hipForward; // 0x70 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Quaternion lookForward; // 0x80 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Quaternion baseHipRotation; // 0x90 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Quaternion baseLookRotation; // 0xa0 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 targetUp; // 0xb0 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 targetOffset; // 0xbc (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0xc8
}
