#pragma once

#include "..\UnityEngine\List.h"
#include "..\AmbienceDefinition\ValueRange.h"
#include "..\TerrainBiome\Enum.h"
#include "..\TerrainTopology\Enum.h"
#include "EnvironmentType.h"
#include "..\UnityEngine\AnimationCurve.h"

namespace rust 
{
	class AmbienceDefinition : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::List<SoundDefinition>* sounds; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		AmbienceDefinition::ValueRange* stingFrequency; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* time; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		AmbienceDefinition::ValueRange* rain; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		AmbienceDefinition::ValueRange* wind; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		AmbienceDefinition::ValueRange* snow; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		TerrainBiome::Enum biomes; // 0x48 (size: 0x4, flags: 0x6, type: 0x11)
		TerrainTopology::Enum topologies; // 0x4c (size: 0x4, flags: 0x6, type: 0x11)
		EnvironmentType environmentType; // 0x50 (size: 0x4, flags: 0x6, type: 0x11)
		bool useEnvironmentType; // 0x54 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x58
}
