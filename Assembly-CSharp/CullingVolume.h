#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Bounds.h"

namespace rust 
{
	class CullingVolume : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<CullingVolume>* Connections; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<LODComponent>* components; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		bool Portal; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Bounds bounds; // 0x2c (size: 0x18, flags: 0x1, type: 0x11)
		float lastSeen; // 0x44 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x48
}
