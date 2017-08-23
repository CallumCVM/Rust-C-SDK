#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class ViewmodelSway : public MonoBehaviour // 0x18
	{
	public:
		float positionalSwaySpeed; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float positionalSwayAmount; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 lastPosition; // 0x20 (size: 0xc, flags: 0x3, type: 0x11)
		UnityEngine::Vector3 smoothedVelocity; // 0x2c (size: 0xc, flags: 0x3, type: 0x11)
		float rotationSwaySpeed; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float rotationSwayAmount; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 lastRotation; // 0x40 (size: 0xc, flags: 0x3, type: 0x11)
		UnityEngine::Vector3 smoothedRotation; // 0x4c (size: 0xc, flags: 0x3, type: 0x11)
	}; // size = 0x58
}
