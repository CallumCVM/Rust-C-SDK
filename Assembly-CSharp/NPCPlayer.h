#pragma once

#include "..\UnityEngine\Vector3.h"
#include "PlayerInventoryProperties.h"
#include "..\UnityEngine\LayerMask.h"
#include "..\UnityEngine\AI\NavMeshAgent.h"

namespace rust 
{
	class NPCPlayer : public BasePlayer // 0x4b0
	{
	public:
		PlayerInventoryProperties* loadouts; // 0x4b0 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::AI::NavMeshAgent* NavAgent; // 0x4b8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3 finalDestination; // 0x4c0 (size: 0xc, flags: 0x6, type: 0x11)
		float randomOffset; // 0x4cc (size: 0x4, flags: 0x81, type: 0xc)
		UnityEngine::Vector3 spawnPos; // 0x4d0 (size: 0xc, flags: 0x81, type: 0x11)
		float stoppingDistance; // 0x4dc (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::LayerMask movementMask; // 0x4e0 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x4e8
}
