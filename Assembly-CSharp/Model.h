#pragma once

#include "..\UnityEngine\SphereCollider.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Animator.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\LODGroup.h"

namespace rust 
{
	class Model : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::SphereCollider* collision; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* rootBone; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* headBone; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* eyeBone; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Animator* animator; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* boneTransforms; // 0x40 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString** boneNames; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::LODGroup* _lodGroup; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		int skin; // 0x58 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x60
}
