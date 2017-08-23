#pragma once

#include "PatrolHelicopterAI.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class AIHelicopterAnimation : public MonoBehaviour // 0x18
	{
	public:
		PatrolHelicopterAI* _ai; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float swayAmount; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float lastStrafeScalar; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float lastForwardBackScalar; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float degreeMax; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 lastPosition; // 0x30 (size: 0xc, flags: 0x6, type: 0x11)
		float oldMoveSpeed; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		float smoothRateOfChange; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float flareAmount; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x48
}
