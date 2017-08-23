#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class BoneInfoComponent : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Vector3 sizeVariation; // 0x18 (size: 0xc, flags: 0x6, type: 0x11)
		int sizeVariationSeed; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
