#pragma once

#include "..\UnityEngine\Animator.h"
#include "..\UnityEngine\ParticleSystem.h"
#include "..\UnityEngine\AudioSource.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class BucketVMFluidSim : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Animator* waterbucketAnim; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::ParticleSystem* waterPour; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::ParticleSystem* waterTurbulence; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::ParticleSystem* waterFill; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioSource* waterSpill; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		float waterLevel; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float targetWaterLevel; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float PlayerEyePitch; // 0x48 (size: 0x4, flags: 0x1, type: 0xc)
		float turb_forward; // 0x4c (size: 0x4, flags: 0x1, type: 0xc)
		float turb_side; // 0x50 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 lastPosition; // 0x54 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 groundSpeedLast; // 0x60 (size: 0xc, flags: 0x4, type: 0x11)
		UnityEngine::Vector3 lastAngle; // 0x6c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 vecAngleSpeedLast; // 0x78 (size: 0xc, flags: 0x4, type: 0x11)
		UnityEngine::Vector3 initialPosition; // 0x84 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x90
}
