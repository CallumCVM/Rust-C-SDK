#pragma once

#include "..\UnityEngine\Vector2.h"

namespace UnityEngine
{
	class Ray2D : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector2 m_Origin; // 0x10 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 m_Direction; // 0x18 (size: 0x8, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
