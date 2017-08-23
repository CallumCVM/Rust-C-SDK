#pragma once

namespace UnityEngine
{
	class LayerMask : public ValueType // 0x0
	{
	public:
		int m_Mask; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x18
}
