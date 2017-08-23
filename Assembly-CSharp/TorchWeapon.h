#pragma once

#include "..\UnityEngine\AnimatorOverrideController.h"

namespace rust 
{
	class TorchWeapon : public BaseMelee // 0x220
	{
	public:
		UnityEngine::AnimatorOverrideController* LitHoldAnimationOverride; // 0x220 (size: 0x8, flags: 0x6, type: 0x12)
		float fuelTickAmount; // 0x228 (size: 0x4, flags: 0x86, type: 0xc)
	}; // size = 0x230
}
