#pragma once

#include "..\UnityEngine\Audio\AudioMixerGroup.h"
#include "..\UnityEngine\List.h"
#include "MusicTheme.h"
#include "..\System\Collections\Generic\Dictionary<MusicTheme\PositionedClip,MusicManager\ClipPlaybackData>.h"
#include "..\UnityEngine\AudioSource.h"
#include "MusicClipLoader.h"

namespace rust 
{
	class MusicManager : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Audio::AudioMixerGroup* mixerGroup; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<MusicTheme>* themes; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		MusicTheme* currentTheme; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<UnityEngine.AudioSource>* sources; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		System::Collections::Generic::Dictionary<MusicTheme::PositionedClip,MusicManager::ClipPlaybackData> clipPlaybackData; // 0x38 (size: 0x8, flags: 0x6, type: 0x15)
		MusicTheme* nextTheme; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioSource* syncSource; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		MusicClipLoader* clipLoader; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<MusicTheme.PositionedClip>* activeClips; // 0x58 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<MusicTheme.PositionedClip>* activeMusicClips; // 0x60 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<MusicTheme.PositionedClip>* activeControlClips; // 0x68 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<MusicTheme>* validThemes; // 0x70 (size: 0x8, flags: 0x1, type: 0x15)
		double nextMusic; // 0x78 (size: 0x8, flags: 0x6, type: 0xd)
		double nextMusicForced; // 0x80 (size: 0x8, flags: 0x6, type: 0xd)
		float intensity; // 0x88 (size: 0x4, flags: 0x6, type: 0xc)
		int holdIntensityUntilBar; // 0x8c (size: 0x4, flags: 0x6, type: 0x8)
		bool musicPlaying; // 0x90 (size: 0x1, flags: 0x6, type: 0x2)
		bool loadingFirstClips; // 0x91 (size: 0x1, flags: 0x6, type: 0x2)
		double lastClipUpdate; // 0x98 (size: 0x8, flags: 0x6, type: 0xd)
		float clipUpdateInterval; // 0xa0 (size: 0x4, flags: 0x6, type: 0xc)
		double themeStartTime; // 0xa8 (size: 0x8, flags: 0x6, type: 0xd)
		int lastActiveClipRefresh; // 0xb0 (size: 0x4, flags: 0x6, type: 0x8)
		int activeClipRefreshInterval; // 0xb4 (size: 0x4, flags: 0x6, type: 0x8)
		bool forceThemeChange; // 0xb8 (size: 0x1, flags: 0x6, type: 0x2)
		float randomIntensityJumpChance; // 0xbc (size: 0x4, flags: 0x6, type: 0xc)
		bool needsResync; // 0xc0 (size: 0x1, flags: 0x1, type: 0x2)
		int fadingClipCount; // 0xc4 (size: 0x4, flags: 0x1, type: 0x8)
		int currentBar; // 0xc8 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0xd0
}
