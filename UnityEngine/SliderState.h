#pragma once

namespace UnityEngine
{
	class SliderState : public Object // 0x0
	{
	public:
		float dragStartPos; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float dragStartValue; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		bool isDragging; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x20
}
