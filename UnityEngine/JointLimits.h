#pragma once

namespace UnityEngine
{
	class JointLimits : public ValueType // 0x0
	{
	public:
		float m_Min; // 0x10 (size: 0x4, flags: 0x1, type: 0xc)
		float m_Max; // 0x14 (size: 0x4, flags: 0x1, type: 0xc)
		float m_Bounciness; // 0x18 (size: 0x4, flags: 0x1, type: 0xc)
		float m_BounceMinVelocity; // 0x1c (size: 0x4, flags: 0x1, type: 0xc)
		float m_ContactDistance; // 0x20 (size: 0x4, flags: 0x1, type: 0xc)
		float minBounce; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float maxBounce; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}