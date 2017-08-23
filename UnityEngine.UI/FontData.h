#pragma once

#include "..\UnityEngine\Font.h"
#include "..\UnityEngine\FontStyle.h"
#include "..\UnityEngine\TextAnchor.h"
#include "..\UnityEngine\HorizontalWrapMode.h"
#include "..\UnityEngine\VerticalWrapMode.h"

namespace UnityEngine
{
	namespace UI
{
	class FontData : public Object // 0x0
	{
	public:
		UnityEngine::Font* m_Font; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int m_FontSize; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::FontStyle m_FontStyle; // 0x1c (size: 0x4, flags: 0x1, type: 0x11)
		bool m_BestFit; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		int m_MinSize; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int m_MaxSize; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::TextAnchor m_Alignment; // 0x2c (size: 0x4, flags: 0x1, type: 0x11)
		bool m_AlignByGeometry; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_RichText; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::HorizontalWrapMode m_HorizontalOverflow; // 0x34 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::VerticalWrapMode m_VerticalOverflow; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		float m_LineSpacing; // 0x3c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x40
}
