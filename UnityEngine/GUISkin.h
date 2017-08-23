#pragma once

#include "..\UnityEngine\Font.h"
#include "..\UnityEngine\GUIStyle.h"
#include "..\UnityEngine\GUISettings.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class GUISkin : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::Font* m_Font; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_box; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_button; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_toggle; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_label; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_textField; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_textArea; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_window; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_horizontalSlider; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_horizontalSliderThumb; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_verticalSlider; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_verticalSliderThumb; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_horizontalScrollbar; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_horizontalScrollbarThumb; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_horizontalScrollbarLeftButton; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_horizontalScrollbarRightButton; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_verticalScrollbar; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_verticalScrollbarThumb; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_verticalScrollbarUpButton; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_verticalScrollbarDownButton; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_ScrollView; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* m_CustomStyles; // 0xc0 (size: 0x8, flags: 0x3, type: 0x1d)
		UnityEngine::GUISettings* m_Settings; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,UnityEngine.GUIStyle> m_Styles; // 0xd0 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0xd8
}
