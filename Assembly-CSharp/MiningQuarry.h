#pragma once

#include "..\UnityEngine\Animator.h"
#include "..\UnityEngine\Renderer.h"
#include "SoundPlayer.h"
#include "..\UnityEngine\List.h"
#include "GameObjectRef.h"
#include "..\UnityEngine\GameObject.h"
#include "..\MiningQuarry\ChildPrefab.h"
#include "..\ResourceDepositManager\ResourceDeposit.h"

namespace rust 
{
	class MiningQuarry : public BaseResourceExtractor // 0x1f0
	{
	public:
		UnityEngine::Animator* beltAnimator; // 0x1f0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Renderer* beltScrollRenderer; // 0x1f8 (size: 0x8, flags: 0x6, type: 0x12)
		SoundPlayer* onSounds; // 0x200 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::List<SoundModulation.Modulator>* soundGainMods; // 0x208 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<SoundModulation.Modulator>* soundPitchMods; // 0x210 (size: 0x8, flags: 0x1, type: 0x15)
		GameObjectRef* bucketDropEffect; // 0x218 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* bucketDropTransform; // 0x220 (size: 0x8, flags: 0x6, type: 0x12)
		MiningQuarry::ChildPrefab* engineSwitchPrefab; // 0x228 (size: 0x8, flags: 0x6, type: 0x12)
		MiningQuarry::ChildPrefab* hopperPrefab; // 0x230 (size: 0x8, flags: 0x6, type: 0x12)
		MiningQuarry::ChildPrefab* fuelStoragePrefab; // 0x238 (size: 0x8, flags: 0x6, type: 0x12)
		ResourceDepositManager::ResourceDeposit* _linkedDeposit; // 0x240 (size: 0x8, flags: 0x1, type: 0x12)
		int scrollMatIndex; // 0x248 (size: 0x4, flags: 0x6, type: 0x8)
		float beltSpeed; // 0x24c (size: 0x4, flags: 0x1, type: 0xc)
		float processRate; // 0x250 (size: 0x4, flags: 0x6, type: 0xc)
		float workToAdd; // 0x254 (size: 0x4, flags: 0x6, type: 0xc)
		bool isStatic; // 0x258 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x260
}
