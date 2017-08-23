#pragma once

#include "..\UnityEngine\List.h"
#include "..\AmbienceManager\EmitterTypeLimit.h"
#include "..\System\Collections\Generic\Dictionary<AmbienceDefinitionList,AmbienceManager\EmitterTypeLimit>.h"
#include "..\UnityEngine\CullingGroup.h"
#include "..\UnityEngine\BoundingSphere.h"

namespace rust 
{
	class AmbienceManager : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::List<AmbienceManager.EmitterTypeLimit>* localEmitterLimits; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		AmbienceManager::EmitterTypeLimit* catchallEmitterLimit; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		System::Collections::Generic::Dictionary<AmbienceDefinitionList,AmbienceManager::EmitterTypeLimit> emitterLimitByAmbience; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<AmbienceEmitter>* baseEmitters; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<AmbienceEmitter>* emittersInRange; // 0x38 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<AmbienceEmitter>* activeEmitters; // 0x40 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<AmbienceEmitter>* emitters; // 0x48 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::CullingGroup* cullingGroup; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<AmbienceEmitter>* emittersBySphereIdx; // 0x58 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::BoundingSphere* cullGroupSphers; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		int maxActiveLocalEmitters; // 0x68 (size: 0x4, flags: 0x6, type: 0x8)
		float tickInterval; // 0x6c (size: 0x4, flags: 0x1, type: 0xc)
		float lastTick; // 0x70 (size: 0x4, flags: 0x1, type: 0xc)
		bool cullingGroupDirty; // 0x74 (size: 0x1, flags: 0x1, type: 0x2)
		float localEmitterRange; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x80
}
