#pragma once

#include "BaseEntity.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\PhysicMaterial.h"
#include "..\UnityEngine\Collider.h"

namespace rust 
{
	class TraceInfo : public ValueType // 0x0
	{
	public:
		bool valid; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
		float distance; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		BaseEntity* entity; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3 point; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 normal; // 0x2c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Transform* bone; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::PhysicMaterial* material; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		unsigned int partID; // 0x48 (size: 0x4, flags: 0x6, type: 0x9)
		UnityEngine::Collider* collider; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x58
}
