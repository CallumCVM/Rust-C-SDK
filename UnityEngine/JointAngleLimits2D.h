#pragma once

namespace UnityEngine
{
	class JointAngleLimits2D : public ValueType // 0x0
	{
	public:
		float m_LowerAngle; // 0x10 (size: 0x4, flags: 0x1, type: 0xc)
		float m_UpperAngle; // 0x14 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x18
}
