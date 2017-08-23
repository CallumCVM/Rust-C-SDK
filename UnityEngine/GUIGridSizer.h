#pragma once

namespace UnityEngine
{
	class GUIGridSizer : public GUILayoutEntry // 0x40
	{
	public:
		int m_Count; // 0x40 (size: 0x4, flags: 0x21, type: 0x8)
		int m_XCount; // 0x44 (size: 0x4, flags: 0x21, type: 0x8)
		float m_MinButtonWidth; // 0x48 (size: 0x4, flags: 0x21, type: 0xc)
		float m_MaxButtonWidth; // 0x4c (size: 0x4, flags: 0x21, type: 0xc)
		float m_MinButtonHeight; // 0x50 (size: 0x4, flags: 0x21, type: 0xc)
		float m_MaxButtonHeight; // 0x54 (size: 0x4, flags: 0x21, type: 0xc)
	}; // size = 0x58
}
