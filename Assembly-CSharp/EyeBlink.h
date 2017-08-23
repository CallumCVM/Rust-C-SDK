#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Vector2.h"

namespace rust 
{
	class EyeBlink : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Transform* LeftEye; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* RightEye; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3 LeftEyeOffset; // 0x28 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 RightEyeOffset; // 0x34 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 TimeWithoutBlinking; // 0x40 (size: 0x8, flags: 0x6, type: 0x11)
		float BlinkSpeed; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 LeftEyeInitial; // 0x4c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 RightEyeInitial; // 0x58 (size: 0xc, flags: 0x1, type: 0x11)
		float BlinkCountdown; // 0x64 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x68
}
