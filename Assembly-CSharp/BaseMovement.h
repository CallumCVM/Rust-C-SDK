#pragma once

#include "BasePlayer.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class BaseMovement : public MonoBehaviour // 0x18
	{
	public:
		BasePlayer* Owner; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		bool adminCheat; // 0x20 (size: 0x1, flags: 0x86, type: 0x2)
		float adminSpeed; // 0x24 (size: 0x4, flags: 0x86, type: 0xc)
		UnityEngine::Vector3 <TargetMovement>k__BackingField; // 0x28 (size: 0xc, flags: 0x1, type: 0x11)
		float <Running>k__BackingField; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
		float <Ducking>k__BackingField; // 0x38 (size: 0x4, flags: 0x1, type: 0xc)
		float <Grounded>k__BackingField; // 0x3c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x40
}
