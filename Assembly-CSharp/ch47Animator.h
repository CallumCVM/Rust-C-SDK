#pragma once

#include "..\UnityEngine\Animator.h"
#include "..\UnityEngine\SkinnedMeshRenderer.h"

namespace rust 
{
	class ch47Animator : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Animator* animator; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::SkinnedMeshRenderer* blurredRotorBlades; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::SkinnedMeshRenderer* RotorBlades; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		bool bottomDoorOpen; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool landingGearDown; // 0x31 (size: 0x1, flags: 0x6, type: 0x2)
		bool leftDoorOpen; // 0x32 (size: 0x1, flags: 0x6, type: 0x2)
		bool rightDoorOpen; // 0x33 (size: 0x1, flags: 0x6, type: 0x2)
		bool rearDoorOpen; // 0x34 (size: 0x1, flags: 0x6, type: 0x2)
		bool rearDoorExtensionOpen; // 0x35 (size: 0x1, flags: 0x6, type: 0x2)
		float rotorBladeSpeed; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float wheelTurnSpeed; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		float wheelTurnAngle; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		bool blurredRotorBladesEnabled; // 0x44 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
