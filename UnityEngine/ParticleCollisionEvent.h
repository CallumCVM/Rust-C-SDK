#pragma once

#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	class ParticleCollisionEvent : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 m_Intersection; // 0x10 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_Normal; // 0x1c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_Velocity; // 0x28 (size: 0xc, flags: 0x1, type: 0x11)
		int m_ColliderInstanceID; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
