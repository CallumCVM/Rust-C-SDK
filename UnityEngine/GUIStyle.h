#pragma once

#include "..\UnityEngine\GUIStyleState.h"
#include "..\UnityEngine\RectOffset.h"
#include "..\UnityEngine\Font.h"

namespace UnityEngine
{
	class GUIStyle : public Object // 0x0
	{
	public:
		__int64 m_Ptr; // 0x10 (size: 0x8, flags: 0x83, type: 0x18)
		UnityEngine::GUIStyleState* m_Normal; // 0x18 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::GUIStyleState* m_Hover; // 0x20 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::GUIStyleState* m_Active; // 0x28 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::GUIStyleState* m_Focused; // 0x30 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::GUIStyleState* m_OnNormal; // 0x38 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::GUIStyleState* m_OnHover; // 0x40 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::GUIStyleState* m_OnActive; // 0x48 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::GUIStyleState* m_OnFocused; // 0x50 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::RectOffset* m_Border; // 0x58 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::RectOffset* m_Padding; // 0x60 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::RectOffset* m_Margin; // 0x68 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::RectOffset* m_Overflow; // 0x70 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::Font* m_FontInternal; // 0x78 (size: 0x8, flags: 0x81, type: 0x12)
	}; // size = 0x80
}
