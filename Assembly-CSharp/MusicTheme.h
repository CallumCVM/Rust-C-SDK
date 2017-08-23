#pragma once

#include "..\MusicTheme\ValueRange.h"
#include "..\TerrainBiome\Enum.h"
#include "..\TerrainTopology\Enum.h"
#include "..\UnityEngine\AnimationCurve.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class MusicTheme : public ScriptableObject // 0x18
	{
	public:
		MusicTheme::ValueRange* rain; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		MusicTheme::ValueRange* wind; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		MusicTheme::ValueRange* snow; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* time; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<MusicTheme.PositionedClip>* clips; // 0x38 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<MusicTheme.Layer>* layers; // 0x40 (size: 0x8, flags: 0x6, type: 0x15)
		System.Collections.Generic.Dictionary<int,UnityEngine::List<MusicTheme.PositionedClip>>* activeClips; // 0x48 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.AudioClip>* firstAudioClips; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<UnityEngine.AudioClip,bool> audioClipDict; // 0x58 (size: 0x8, flags: 0x1, type: 0x15)
		float tempo; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		int intensityHoldBars; // 0x64 (size: 0x4, flags: 0x6, type: 0x8)
		int lengthInBars; // 0x68 (size: 0x4, flags: 0x6, type: 0x8)
		bool canPlayInMenus; // 0x6c (size: 0x1, flags: 0x6, type: 0x2)
		TerrainBiome::Enum biomes; // 0x70 (size: 0x4, flags: 0x6, type: 0x11)
		TerrainTopology::Enum topologies; // 0x74 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x78
}
