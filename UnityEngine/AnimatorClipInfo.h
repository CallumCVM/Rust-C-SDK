#pragma once

namespace UnityEngine
{
	class AnimatorClipInfo : public ValueType // 0x0
	{
	public:
		int m_ClipInstanceID; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		float m_Weight; // 0x14 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x18
}
