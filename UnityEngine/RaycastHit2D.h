#pragma once

#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\Collider2D.h"

namespace UnityEngine
{
	class RaycastHit2D : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector2 m_Centroid; // 0x10 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 m_Point; // 0x18 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 m_Normal; // 0x20 (size: 0x8, flags: 0x1, type: 0x11)
		float m_Distance; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
		float m_Fraction; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Collider2D* m_Collider; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
