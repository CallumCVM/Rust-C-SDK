#pragma once

namespace UnityEngine
{
	namespace UI
{
	class LayoutElement : public UIBehaviour // 0x18
	{
	public:
		bool m_IgnoreLayout; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		float m_MinWidth; // 0x1c (size: 0x4, flags: 0x1, type: 0xc)
		float m_MinHeight; // 0x20 (size: 0x4, flags: 0x1, type: 0xc)
		float m_PreferredWidth; // 0x24 (size: 0x4, flags: 0x1, type: 0xc)
		float m_PreferredHeight; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
		float m_FlexibleWidth; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		float m_FlexibleHeight; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x38
}
