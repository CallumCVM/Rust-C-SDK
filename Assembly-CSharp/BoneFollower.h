#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"

namespace rust 
{
	class BoneFollower : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Transform* bone; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3 offset; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Quaternion rotationOffset; // 0x2c (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
