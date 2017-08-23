#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ConvarControlledSpawnPopulation : public SpawnPopulation // 0x58
	{
	public:
		UnityEngine::UnicodeString* PopulationConvar; // 0x58 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x60
}
