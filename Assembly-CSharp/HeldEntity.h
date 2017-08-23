#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Animator.h"
#include "ViewModel.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\AnimatorOverrideController.h"
#include "..\HeldEntity\HolsterInfo.h"

namespace rust 
{
	class HeldEntity : public BaseEntity // 0x130
	{
	public:
		UnityEngine::List<HeldEntity.PunchEntry>* _punches; // 0x130 (size: 0x8, flags: 0x4, type: 0x15)
		UnityEngine::Animator* worldModelAnimator; // 0x138 (size: 0x8, flags: 0x6, type: 0x12)
		ViewModel* viewModel; // 0x140 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::UnicodeString* handBone; // 0x148 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::AnimatorOverrideController* HoldAnimationOverride; // 0x150 (size: 0x8, flags: 0x6, type: 0x12)
		HeldEntity::HolsterInfo* holsterInfo; // 0x158 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3 punchAdded; // 0x160 (size: 0xc, flags: 0x4, type: 0x11)
		float lastPunchTime; // 0x16c (size: 0x4, flags: 0x4, type: 0xc)
		bool isDeployed; // 0x170 (size: 0x1, flags: 0x4, type: 0x2)
		float hostileScore; // 0x174 (size: 0x4, flags: 0x6, type: 0xc)
		unsigned int ownerItemUID; // 0x178 (size: 0x4, flags: 0x3, type: 0x9)
	}; // size = 0x180
}
