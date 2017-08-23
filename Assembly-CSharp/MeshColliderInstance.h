#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Rigidbody.h"
#include "..\UnityEngine\Collider.h"
#include "OBB.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"
#include "..\MeshCache\Data.h"

namespace rust 
{
	class MeshColliderInstance : public ValueType // 0x0
	{
	public:
		UnityEngine::Transform* transform; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Rigidbody* rigidbody; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Collider* collider; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		OBB bounds; // 0x28 (size: 0x50, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 position; // 0x78 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Quaternion rotation; // 0x84 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 scale; // 0x94 (size: 0xc, flags: 0x6, type: 0x11)
		MeshCache::Data* data; // 0xa0 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0xa8
}
