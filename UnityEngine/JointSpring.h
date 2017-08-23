#pragma once

namespace UnityEngine
{
	class JointSpring : public ValueType // 0x0
	{
	public:
		float spring; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float damper; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float targetPosition; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
