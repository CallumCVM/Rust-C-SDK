#pragma once

namespace UnityEngine
{
	class JointDrive : public ValueType // 0x0
	{
	public:
		float m_PositionSpring; // 0x10 (size: 0x4, flags: 0x1, type: 0xc)
		float m_PositionDamper; // 0x14 (size: 0x4, flags: 0x1, type: 0xc)
		float m_MaximumForce; // 0x18 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x20
}
