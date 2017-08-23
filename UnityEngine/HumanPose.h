#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"

namespace UnityEngine
{
	class HumanPose : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 bodyPosition; // 0x10 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Quaternion bodyRotation; // 0x1c (size: 0x10, flags: 0x6, type: 0x11)
		float* muscles; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x38
}
