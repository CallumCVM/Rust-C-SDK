#pragma once

#include "SpawnFilter.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class PlaceMonuments : public ProceduralComponent // 0x28
	{
	public:
		SpawnFilter* Filter; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* ResourceFolder; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::List<UnityEngine.Vector3>* spawns; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		int Attempts; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
		int Distance; // 0x44 (size: 0x4, flags: 0x6, type: 0x8)
		int MinSize; // 0x48 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x50
}
