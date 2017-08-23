#pragma once

#include "..\UnityEngine\Animator.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Renderer.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class TreadAnimator : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Animator* mainBodyAnimator; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* wheelBones; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector3* vecShocksOffsetPosition; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector3* wheelBoneOrigin; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Renderer* treadRenderer; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* leftTread; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* rightTread; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		float wheelBoneDistMax; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 currentVelocity; // 0x54 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 lastPos; // 0x60 (size: 0xc, flags: 0x1, type: 0x11)
		float lastVelocityCalcTime; // 0x6c (size: 0x4, flags: 0x1, type: 0xc)
		float treadConstant; // 0x70 (size: 0x4, flags: 0x6, type: 0xc)
		float wheelSpinConstant; // 0x74 (size: 0x4, flags: 0x6, type: 0xc)
		float wheelAngle; // 0x78 (size: 0x4, flags: 0x1, type: 0xc)
		float treadAmount; // 0x7c (size: 0x4, flags: 0x1, type: 0xc)
		float traceLineMin; // 0x80 (size: 0x4, flags: 0x6, type: 0xc)
		float traceLineMax; // 0x84 (size: 0x4, flags: 0x6, type: 0xc)
		float maxShockDist; // 0x88 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x90
}
