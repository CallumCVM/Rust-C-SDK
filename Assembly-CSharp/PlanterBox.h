#pragma once

#include "..\UnityEngine\MeshRenderer.h"

namespace rust 
{
	class PlanterBox : public BaseCombatEntity // 0x1e8
	{
	public:
		UnityEngine::MeshRenderer* soilRenderer; // 0x1e8 (size: 0x8, flags: 0x6, type: 0x12)
		int soilSaturation; // 0x1f0 (size: 0x4, flags: 0x6, type: 0x8)
		int soilSaturationMax; // 0x1f4 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x1f8
}
