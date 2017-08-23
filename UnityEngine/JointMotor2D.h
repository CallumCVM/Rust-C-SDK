#pragma once

namespace UnityEngine
{
	class JointMotor2D : public ValueType // 0x0
	{
	public:
		float m_MotorSpeed; // 0x10 (size: 0x4, flags: 0x1, type: 0xc)
		float m_MaximumMotorTorque; // 0x14 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x18
}
