#pragma once

namespace UnityEngine
{
	namespace UI
{
	class HorizontalOrVerticalLayoutGroup : public LayoutGroup // 0x50
	{
	public:
		float m_Spacing; // 0x50 (size: 0x4, flags: 0x4, type: 0xc)
		bool m_ChildForceExpandWidth; // 0x54 (size: 0x1, flags: 0x4, type: 0x2)
		bool m_ChildForceExpandHeight; // 0x55 (size: 0x1, flags: 0x4, type: 0x2)
		bool m_ChildControlWidth; // 0x56 (size: 0x1, flags: 0x4, type: 0x2)
		bool m_ChildControlHeight; // 0x57 (size: 0x1, flags: 0x4, type: 0x2)
	}; // size = 0x58
}
