#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Collider.h"

namespace UnityEngine
{
	class WheelHit : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 m_Point; // 0x10 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_Normal; // 0x1c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_ForwardDir; // 0x28 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_SidewaysDir; // 0x34 (size: 0xc, flags: 0x1, type: 0x11)
		float m_Force; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
		float m_ForwardSlip; // 0x44 (size: 0x4, flags: 0x1, type: 0xc)
		float m_SidewaysSlip; // 0x48 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Collider* m_Collider; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x58
}
