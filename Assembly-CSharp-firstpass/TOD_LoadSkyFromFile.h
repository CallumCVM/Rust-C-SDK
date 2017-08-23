#pragma once

#include "TOD_Sky.h"
#include "..\UnityEngine\TextAsset.h"

namespace rust 
{
	class TOD_LoadSkyFromFile : public MonoBehaviour // 0x18
	{
	public:
		TOD_Sky* sky; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::TextAsset* textAsset; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
