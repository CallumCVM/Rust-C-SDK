#pragma once

#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	class Ray : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 m_Origin; // 0x10 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_Direction; // 0x1c (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
