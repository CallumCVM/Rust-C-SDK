#pragma once

#include "..\UnityEngine\Quaternion.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\JointDrive.h"

namespace UnityEngine
{
	class CharacterJoint : public Joint // 0x18
	{
	public:
		UnityEngine::Quaternion targetRotation; // 0x18 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 targetAngularVelocity; // 0x28 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::JointDrive rotationDrive; // 0x34 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
