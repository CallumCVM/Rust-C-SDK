#pragma once

#include "BaseNpc.h"
#include "..\UnityEngine\Animator.h"
#include "MaterialEffect.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class AnimalAnimation : public MonoBehaviour // 0x18
	{
	public:
		BaseNpc* Target; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Animator* Animator; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		MaterialEffect* FootstepEffects; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* Feet; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* BaseFolder; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		float lastThinkTime; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 previousPosition; // 0x44 (size: 0xc, flags: 0x1, type: 0x11)
		float previousRotationYaw; // 0x50 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x58
}
