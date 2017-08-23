#pragma once

#include "..\UnityEngine\Bounds.h"
#include "..\UnityEngine\Vector4.h"

namespace rust 
{
	class WaterCullingVolume : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Vector4* worldToLocal; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		bool isDynamic; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Bounds worldBounds; // 0x24 (size: 0x18, flags: 0x1, type: 0x11)
		bool isVisible; // 0x3c (size: 0x1, flags: 0x1, type: 0x2)
		float distanceToCamera; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x48
}
