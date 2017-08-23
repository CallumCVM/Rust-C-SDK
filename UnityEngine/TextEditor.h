#pragma once

#include "..\UnityEngine\TouchScreenKeyboard.h"
#include "..\UnityEngine\GUIStyle.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\GUIContent.h"
#include "..\UnityEngine\Rect.h"
#include "..\UnityEngine\TextEditor\DblClickSnapping.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class TextEditor : public Object // 0x0
	{
	public:
		UnityEngine::TouchScreenKeyboard* keyboardOnScreen; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GUIStyle* style; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GUIContent* m_Content; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* oldText; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		int controlID; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		bool multiline; // 0x34 (size: 0x1, flags: 0x6, type: 0x2)
		bool hasHorizontalCursorPos; // 0x35 (size: 0x1, flags: 0x6, type: 0x2)
		bool isPasswordField; // 0x36 (size: 0x1, flags: 0x6, type: 0x2)
		bool m_HasFocus; // 0x37 (size: 0x1, flags: 0x3, type: 0x2)
		UnityEngine::Vector2 scrollOffset; // 0x38 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Rect m_Position; // 0x40 (size: 0x10, flags: 0x1, type: 0x11)
		int m_CursorIndex; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		int m_SelectIndex; // 0x54 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_RevealCursor; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::Vector2 graphicalCursorPos; // 0x5c (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 graphicalSelectCursorPos; // 0x64 (size: 0x8, flags: 0x6, type: 0x11)
		bool m_MouseDragSelectsWholeWords; // 0x6c (size: 0x1, flags: 0x1, type: 0x2)
		int m_DblClickInitPos; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::TextEditor::DblClickSnapping m_DblClickSnap; // 0x74 (size: 0x1, flags: 0x1, type: 0x11)
		bool m_bJustSelected; // 0x75 (size: 0x1, flags: 0x1, type: 0x2)
		int m_iAltCursorPos; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
		int oldPos; // 0x7c (size: 0x4, flags: 0x1, type: 0x8)
		int oldSelectPos; // 0x80 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x88
}
