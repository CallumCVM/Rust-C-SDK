#pragma once

#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	class Plane : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 m_Normal; // 0x10 (size: 0xc, flags: 0x1, type: 0x11)
		float m_Distance; // 0x1c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x20
}
