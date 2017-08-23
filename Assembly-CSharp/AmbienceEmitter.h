#pragma once

#include "AmbienceDefinitionList.h"
#include "..\UnityEngine\BoundingSphere.h"
#include "Sound.h"
#include "..\SoundModulation\Modulator.h"
#include "..\UnityEngine\List.h"
#include "..\TerrainTopology\Enum.h"
#include "..\TerrainBiome\Enum.h"

namespace rust 
{
	class AmbienceEmitter : public MonoBehaviour // 0x18
	{
	public:
		AmbienceDefinitionList* baseAmbience; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		AmbienceDefinitionList* stings; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Sound* baseSound; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		SoundModulation::Modulator* occlusionGain; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<int>* biomeReadings; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<int>* topologyReadings; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<AmbienceDefinition,float> nextStingTime; // 0x48 (size: 0x8, flags: 0x6, type: 0x15)
		System.Collections.Generic.Dictionary<int,int> readingOccurences; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
		bool isStatic; // 0x58 (size: 0x1, flags: 0x6, type: 0x2)
		bool active; // 0x59 (size: 0x1, flags: 0x6, type: 0x2)
		float cameraDistance; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::BoundingSphere boundingSphere; // 0x60 (size: 0x10, flags: 0x6, type: 0x11)
		float crossfadeTime; // 0x70 (size: 0x4, flags: 0x6, type: 0xc)
		float lastCrossfade; // 0x74 (size: 0x4, flags: 0x1, type: 0xc)
		int readingsToKeep; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
		TerrainTopology::Enum <currentTopology>k__BackingField; // 0x7c (size: 0x4, flags: 0x1, type: 0x11)
		TerrainBiome::Enum <currentBiome>k__BackingField; // 0x80 (size: 0x4, flags: 0x1, type: 0x11)
		float deactivateTime; // 0x84 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x88
}
