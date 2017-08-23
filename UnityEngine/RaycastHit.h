#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\Collider.h"

namespace UnityEngine
{
	class RaycastHit : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 m_Point; // 0x10 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_Normal; // 0x1c (size: 0xc, flags: 0x1, type: 0x11)
		int m_FaceID; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		float m_Distance; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector2 m_UV; // 0x30 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Collider* m_Collider; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
