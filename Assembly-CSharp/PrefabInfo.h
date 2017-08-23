#pragma once

#include "..\UnityEngine\Behaviour.h"
#include "..\UnityEngine\Rigidbody.h"
#include "..\UnityEngine\Collider.h"
#include "..\UnityEngine\LODGroup.h"
#include "..\UnityEngine\Renderer.h"
#include "..\UnityEngine\ParticleSystem.h"

namespace rust 
{
	class PrefabInfo : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Behaviour* behaviours; // 0x18 (size: 0x8, flags: 0x3, type: 0x1d)
		UnityEngine::Rigidbody* rigidbodies; // 0x20 (size: 0x8, flags: 0x3, type: 0x1d)
		UnityEngine::Collider* colliders; // 0x28 (size: 0x8, flags: 0x3, type: 0x1d)
		UnityEngine::LODGroup* lodgroups; // 0x30 (size: 0x8, flags: 0x3, type: 0x1d)
		UnityEngine::Renderer* renderers; // 0x38 (size: 0x8, flags: 0x3, type: 0x1d)
		UnityEngine::ParticleSystem* particles; // 0x40 (size: 0x8, flags: 0x3, type: 0x1d)
		bool* behaviourStates; // 0x48 (size: 0x8, flags: 0x3, type: 0x1d)
		bool* rigidbodyStates; // 0x50 (size: 0x8, flags: 0x3, type: 0x1d)
		bool* colliderStates; // 0x58 (size: 0x8, flags: 0x3, type: 0x1d)
		bool* lodgroupStates; // 0x60 (size: 0x8, flags: 0x3, type: 0x1d)
		bool* rendererStates; // 0x68 (size: 0x8, flags: 0x3, type: 0x1d)
		unsigned int prefabID; // 0x70 (size: 0x4, flags: 0x3, type: 0x9)
	}; // size = 0x78
}
