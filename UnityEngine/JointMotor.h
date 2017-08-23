#pragma once

namespace UnityEngine
{
	class JointMotor : public ValueType // 0x0
	{
	public:
		float m_TargetVelocity; // 0x10 (size: 0x4, flags: 0x1, type: 0xc)
		float m_Force; // 0x14 (size: 0x4, flags: 0x1, type: 0xc)
		int m_FreeSpin; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
