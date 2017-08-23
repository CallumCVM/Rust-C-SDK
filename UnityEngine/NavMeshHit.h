#pragma once

#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	namespace AI
{
	class NavMeshHit : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 m_Position; // 0x10 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_Normal; // 0x1c (size: 0xc, flags: 0x1, type: 0x11)
		float m_Distance; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
		int m_Mask; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		int m_Hit; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
