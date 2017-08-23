#pragma once

namespace UnityEngine
{
	class JointSuspension2D : public ValueType // 0x0
	{
	public:
		float m_DampingRatio; // 0x10 (size: 0x4, flags: 0x1, type: 0xc)
		float m_Frequency; // 0x14 (size: 0x4, flags: 0x1, type: 0xc)
		float m_Angle; // 0x18 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x20
}
