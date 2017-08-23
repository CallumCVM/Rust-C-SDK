#pragma once

#include "..\UnityEngine\LayerMask.h"
#include "..\ColliderInfo\Flags.h"

namespace rust 
{
	class DeployVolume : public PrefabAttribute // 0x98
	{
	public:
		UnityEngine::LayerMask layers; // 0x98 (size: 0x4, flags: 0x6, type: 0x11)
		ColliderInfo::Flags ignore; // 0x9c (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0xa0
}
