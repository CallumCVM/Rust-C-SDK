#pragma once

namespace UnityEngine
{
	class Keyframe : public ValueType // 0x0
	{
	public:
		float m_Time; // 0x10 (size: 0x4, flags: 0x1, type: 0xc)
		float m_Value; // 0x14 (size: 0x4, flags: 0x1, type: 0xc)
		float m_InTangent; // 0x18 (size: 0x4, flags: 0x1, type: 0xc)
		float m_OutTangent; // 0x1c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x20
}
