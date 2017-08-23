#pragma once

#include "SoundDefinition.h"
#include "SoundModifier.h"
#include "SoundSource.h"
#include "..\UnityEngine\AudioSource.h"
#include "SoundFade.h"
#include "SoundModulation.h"
#include "SoundOcclusion.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class Sound : public MonoBehaviour // 0x18
	{
	public:
		SoundDefinition* definition; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		SoundModifier* modifiers; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		SoundSource* soundSource; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioSource* audioSources; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::AudioSource* audioSource; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::AudioSource* distantAudioSource; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		SoundFade* _fade; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		SoundModulation* _modulation; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		SoundOcclusion* _occlusion; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<WeightedAudioClip>* closeClips; // 0x60 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<WeightedAudioClip>* farClips; // 0x68 (size: 0x8, flags: 0x1, type: 0x15)
		float <initialMaxDistance>k__BackingField; // 0x70 (size: 0x4, flags: 0x1, type: 0xc)
		float <initialSpread>k__BackingField; // 0x74 (size: 0x4, flags: 0x1, type: 0xc)
		bool playing; // 0x78 (size: 0x1, flags: 0x6, type: 0x2)
		float <startTime>k__BackingField; // 0x7c (size: 0x4, flags: 0x1, type: 0xc)
		float <endTime>k__BackingField; // 0x80 (size: 0x4, flags: 0x1, type: 0xc)
		float distanceScale; // 0x84 (size: 0x4, flags: 0x1, type: 0xc)
		int clipIndex; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
		bool hasDistantSound; // 0x8c (size: 0x1, flags: 0x1, type: 0x2)
		float length; // 0x90 (size: 0x4, flags: 0x1, type: 0xc)
		int FrameUpdateIndex; // 0x94 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x98
}
