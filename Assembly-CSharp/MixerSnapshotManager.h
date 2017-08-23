#pragma once

#include "..\UnityEngine\Audio\AudioMixerSnapshot.h"
#include "SoundDefinition.h"
#include "Sound.h"

namespace rust 
{
	class MixerSnapshotManager : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Audio::AudioMixerSnapshot* defaultSnapshot; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Audio::AudioMixerSnapshot* underwaterSnapshot; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Audio::AudioMixerSnapshot* loadingSnapshot; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Audio::AudioMixerSnapshot* woundedSnapshot; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* underwaterInSound; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* underwaterOutSound; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* woundedLoop; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		Sound* woundedLoopSound; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Audio::AudioMixerSnapshot* currentState; // 0x58 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x60
}
