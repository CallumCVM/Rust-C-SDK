#pragma once

#include "SpawnFilter.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class PlaceDecorWhiteNoise : public ProceduralComponent // 0x28
	{
	public:
		SpawnFilter* Filter; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* ResourceFolder; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		float ObjectDensity; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x40
}
