#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Audio\AudioMixerGroup.h"

namespace rust 
{
	class SoundDefinition : public ScriptableObject // 0x18
	{
	public:
		GameObjectRef* template; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<WeightedAudioClip>* weightedAudioClips; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<SoundDefinition.DistanceAudioClipList>* distanceAudioClips; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::Audio::AudioMixerGroup* output; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Audio::AudioMixerGroup* occludedOutput; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		bool defaultToFirstPerson; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
		bool loop; // 0x41 (size: 0x1, flags: 0x6, type: 0x2)
		bool randomizeStartPosition; // 0x42 (size: 0x1, flags: 0x6, type: 0x2)
		float volume; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float volumeVariation; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		float pitch; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		float pitchVariation; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		bool dontVoiceLimit; // 0x54 (size: 0x1, flags: 0x6, type: 0x2)
		int globalVoiceMaxCount; // 0x58 (size: 0x4, flags: 0x6, type: 0x8)
		int localVoiceMaxCount; // 0x5c (size: 0x4, flags: 0x6, type: 0x8)
		float localVoiceRange; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		float voiceLimitFadeOutTime; // 0x64 (size: 0x4, flags: 0x6, type: 0xc)
		float localVoiceDebounceTime; // 0x68 (size: 0x4, flags: 0x6, type: 0xc)
		bool enableOcclusion; // 0x6c (size: 0x1, flags: 0x6, type: 0x2)
		bool playIfOccluded; // 0x6d (size: 0x1, flags: 0x6, type: 0x2)
		float occlusionFilterFreq; // 0x70 (size: 0x4, flags: 0x6, type: 0xc)
		float occlusionGain; // 0x74 (size: 0x4, flags: 0x6, type: 0xc)
		bool forceOccludedPlayback; // 0x78 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x80
}
