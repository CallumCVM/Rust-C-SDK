#pragma once

#include "..\UnityEngine\Bounds.h"

namespace rust 
{
	class DeployVolumeEntityBounds : public DeployVolume // 0xa0
	{
	public:
		UnityEngine::Bounds bounds; // 0xa0 (size: 0x18, flags: 0x1, type: 0x11)
	}; // size = 0xb8
}
