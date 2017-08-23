#pragma once

#include "..\UnityEngine\GUIContent.h"

namespace UnityEngine
{
	class GUIWordWrapSizer : public GUILayoutEntry // 0x40
	{
	public:
		UnityEngine::GUIContent* m_Content; // 0x40 (size: 0x8, flags: 0x21, type: 0x12)
		float m_ForcedMinHeight; // 0x48 (size: 0x4, flags: 0x21, type: 0xc)
		float m_ForcedMaxHeight; // 0x4c (size: 0x4, flags: 0x21, type: 0xc)
	}; // size = 0x50
}
