#pragma once

#include "..\UnityEngine\Light.h"
#include "LODCell.h"

namespace rust 
{
	class AmbientLightLOD : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Light* lightComponent; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		LODCell* cell; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		float enabledRadius; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
