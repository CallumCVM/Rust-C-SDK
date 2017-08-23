#pragma once

#include "..\UnityEngine\Color.h"

namespace UnityEngine
{
	namespace UI
{
	class ColorBlock : public ValueType // 0x0
	{
	public:
		UnityEngine::Color m_NormalColor; // 0x10 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color m_HighlightedColor; // 0x20 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color m_PressedColor; // 0x30 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color m_DisabledColor; // 0x40 (size: 0x10, flags: 0x1, type: 0x11)
		float m_ColorMultiplier; // 0x50 (size: 0x4, flags: 0x1, type: 0xc)
		float m_FadeDuration; // 0x54 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x58
}
