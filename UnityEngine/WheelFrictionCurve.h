#pragma once

namespace UnityEngine
{
	class WheelFrictionCurve : public ValueType // 0x0
	{
	public:
		float m_ExtremumSlip; // 0x10 (size: 0x4, flags: 0x1, type: 0xc)
		float m_ExtremumValue; // 0x14 (size: 0x4, flags: 0x1, type: 0xc)
		float m_AsymptoteSlip; // 0x18 (size: 0x4, flags: 0x1, type: 0xc)
		float m_AsymptoteValue; // 0x1c (size: 0x4, flags: 0x1, type: 0xc)
		float m_Stiffness; // 0x20 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x28
}
