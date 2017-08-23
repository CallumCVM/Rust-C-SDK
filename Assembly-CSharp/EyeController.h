#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class EyeController : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Transform* LeftEye; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* RightEye; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* EyeTransform; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* Focus; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool debug; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 Fudge; // 0x3c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 FlickerRange; // 0x48 (size: 0xc, flags: 0x6, type: 0x11)
		float FocusUpdateTime; // 0x54 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 Flicker; // 0x58 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 FlickerTarget; // 0x64 (size: 0xc, flags: 0x1, type: 0x11)
		float TimeToUpdateFlicker; // 0x70 (size: 0x4, flags: 0x1, type: 0xc)
		float FlickerSpeed; // 0x74 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x78
}
