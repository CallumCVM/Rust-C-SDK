#pragma once

#include "..\UnityEngine\Vector2.h"

namespace UnityEngine
{
	class ColliderDistance2D : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector2 m_PointA; // 0x10 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 m_PointB; // 0x18 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 m_Normal; // 0x20 (size: 0x8, flags: 0x1, type: 0x11)
		float m_Distance; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
		int m_IsValid; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
