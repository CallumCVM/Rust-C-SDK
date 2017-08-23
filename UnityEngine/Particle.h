#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Color.h"

namespace UnityEngine
{
	class Particle : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 m_Position; // 0x10 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_Velocity; // 0x1c (size: 0xc, flags: 0x1, type: 0x11)
		float m_Size; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
		float m_Rotation; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		float m_AngularVelocity; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
		float m_Energy; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
		float m_StartEnergy; // 0x38 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Color m_Color; // 0x3c (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
