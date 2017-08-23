#pragma once

#include "..\UnityEngine\SphereCollider.h"

namespace UnityEngine
{
	class ClothSphereColliderPair : public ValueType // 0x0
	{
	public:
		UnityEngine::SphereCollider* m_First; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::SphereCollider* m_Second; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
