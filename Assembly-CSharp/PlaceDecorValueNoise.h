#pragma once

#include "SpawnFilter.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "NoiseParameters.h"

namespace rust 
{
	class PlaceDecorValueNoise : public ProceduralComponent // 0x28
	{
	public:
		SpawnFilter* Filter; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* ResourceFolder; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		NoiseParameters Cluster; // 0x38 (size: 0x10, flags: 0x6, type: 0x11)
		float ObjectDensity; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x50
}
