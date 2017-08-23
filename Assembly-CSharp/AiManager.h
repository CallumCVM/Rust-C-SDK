#pragma once

#include "..\UnityEngine\LayerMask.h"
#include "..\System\Collections\Generic\HashSet<Rust\Ai\CoverPointVolume>.h"
#include "..\UnityEngine\AnimationCurve.h"
#include "..\WorldSpaceGrid<Rust\Ai\AiManager\EngagementInfo>.h"

namespace Rust
{
	namespace Ai
{
	class AiManager : public SingletonComponent`1 // 0x18
	{
	public:
		System::Collections::Generic::HashSet<Rust::Ai::CoverPointVolume> CoverPointVolumes; // 0x18 (size: 0x8, flags: 0x26, type: 0x15)
		UnityEngine::AnimationCurve* HitResponse; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* HurtResponse; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		WorldSpaceGrid<Rust::Ai::AiManager::EngagementInfo> intensityGrid; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		bool UseCover; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::LayerMask DynamicCoverPointVolumeLayerMask; // 0x3c (size: 0x4, flags: 0x6, type: 0x11)
		bool UseIntensity; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
		float IntensityCellSize; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float hitResponseOutputMultiplier; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		float maxHurtResponseInput; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		float hurtResponseOutputMultiplier; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		float OnDeathIntensityBonus; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		float IntensityDecayRate; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		float NoEngagementToDecayTime; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x60
}
