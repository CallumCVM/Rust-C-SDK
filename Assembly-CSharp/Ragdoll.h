#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Rigidbody.h"
#include "..\UnityEngine\PhysicMaterial.h"
#include "..\UnityEngine\SpringJoint.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\LODGroup.h"
#include "OptimizeAnimator.h"

namespace rust 
{
	class Ragdoll : public BaseMonoBehaviour // 0x18
	{
	public:
		UnityEngine::Transform* eyeTransform; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* centerBone; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Rigidbody* primaryBody; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::PhysicMaterial* physicMaterial; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::SpringJoint* corpseJoint; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* GibEffect; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Rigidbody* pinTo; // 0x48 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::LODGroup* _lodGroup; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		OptimizeAnimator* optimizeAnimator; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		bool IsSetup; // 0x60 (size: 0x1, flags: 0x4, type: 0x2)
	}; // size = 0x68
}
