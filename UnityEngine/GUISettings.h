#pragma once

#include "..\UnityEngine\Color.h"

namespace UnityEngine
{
	class GUISettings : public Object // 0x0
	{
	public:
		bool m_DoubleClickSelectsWord; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_TripleClickSelectsLine; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::Color m_CursorColor; // 0x14 (size: 0x10, flags: 0x1, type: 0x11)
		float m_CursorFlashSpeed; // 0x24 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Color m_SelectionColor; // 0x28 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
