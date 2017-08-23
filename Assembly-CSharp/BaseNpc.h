#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Quaternion.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\AI\NavMeshAgent.h"
#include "..\Apex\AI\Components\UtilityAIComponent.h"
#include "BaseEntity.h"
#include "..\Rust\Ai\Memory\SeenInfo.h"
#include "GameObjectRef.h"
#include "..\Rust\DamageType.h"
#include "StateTimer.h"
#include "VitalLevel.h"

namespace rust 
{
	class BaseNpc : public BaseCombatEntity // 0x1e8
	{
	public:
		UnityEngine::Transform* ChaseTransform; // 0x1e8 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::AI::NavMeshAgent* NavAgent; // 0x1f0 (size: 0x8, flags: 0x6, type: 0x12)
		Apex::AI::Components::UtilityAIComponent* utilityAiComponent; // 0x1f8 (size: 0x8, flags: 0x1, type: 0x12)
		BaseEntity* <AttackTarget>k__BackingField; // 0x200 (size: 0x8, flags: 0x1, type: 0x12)
		Rust::Ai::Memory::SeenInfo <AttackTargetMemory>k__BackingField; // 0x208 (size: 0x20, flags: 0x1, type: 0x11)
		BaseEntity* <FoodTarget>k__BackingField; // 0x228 (size: 0x8, flags: 0x1, type: 0x12)
		GameObjectRef* CorpsePrefab; // 0x230 (size: 0x8, flags: 0x6, type: 0x12)
		StateTimer BusyTimer; // 0x238 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Quaternion NetworkRotation; // 0x248 (size: 0x10, flags: 0x86, type: 0x11)
		AiFlags aiFlags; // 0x258 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 lastStuckPos; // 0x25c (size: 0xc, flags: 0x1, type: 0x11)
		float stuckDuration; // 0x268 (size: 0x4, flags: 0x6, type: 0xc)
		float lastStuckTime; // 0x26c (size: 0x4, flags: 0x6, type: 0xc)
		float idleDuration; // 0x270 (size: 0x4, flags: 0x6, type: 0xc)
		float nextVisThink; // 0x274 (size: 0x4, flags: 0x1, type: 0xc)
		float lastTimeSeen; // 0x278 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 lastPosition; // 0x27c (size: 0xc, flags: 0x1, type: 0x11)
		AiStatistics Stats; // 0x288 (size: 0x28, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 AttackOffset; // 0x2b0 (size: 0xc, flags: 0x6, type: 0x11)
		float AttackDamage; // 0x2bc (size: 0x4, flags: 0x6, type: 0xc)
		Rust::DamageType AttackDamageType; // 0x2c0 (size: 0x4, flags: 0x6, type: 0x11)
		float AttackCost; // 0x2c4 (size: 0x4, flags: 0x6, type: 0xc)
		float AttackRate; // 0x2c8 (size: 0x4, flags: 0x6, type: 0xc)
		float AttackRange; // 0x2cc (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 <GuardPosition>k__BackingField; // 0x2d0 (size: 0xc, flags: 0x1, type: 0x11)
		float Sleep; // 0x2dc (size: 0x4, flags: 0x86, type: 0xc)
		VitalLevel Stamina; // 0x2e0 (size: 0x8, flags: 0x6, type: 0x11)
		VitalLevel Energy; // 0x2e8 (size: 0x8, flags: 0x6, type: 0x11)
		VitalLevel Hydration; // 0x2f0 (size: 0x8, flags: 0x6, type: 0x11)
		Behaviour <CurrentBehaviour>k__BackingField; // 0x2f8 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x300
}
