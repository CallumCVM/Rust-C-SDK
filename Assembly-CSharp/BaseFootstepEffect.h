#pragma once

#include "..\UnityEngine\LayerMask.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class BaseFootstepEffect : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::LayerMask validImpactLayers; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		float lastFootstepTime; // 0x1c (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 lastFootstepPos; // 0x20 (size: 0xc, flags: 0x4, type: 0x11)
	}; // size = 0x30
}
