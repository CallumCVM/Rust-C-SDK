#pragma once

#include "..\UnityEngine\GUI\WindowFunction.h"
#include "..\UnityEngine\Rect.h"
#include "..\UnityEngine\GUILayoutOption.h"
#include "..\UnityEngine\GUIStyle.h"

namespace rust 
{
	class LayoutedWindow : public Object // 0x0
	{
	public:
		UnityEngine::GUI::WindowFunction* m_Func; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		UnityEngine::GUILayoutOption* m_Options; // 0x18 (size: 0x8, flags: 0x21, type: 0x1d)
		UnityEngine::GUIStyle* m_Style; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
		UnityEngine::Rect m_ScreenRect; // 0x28 (size: 0x10, flags: 0x21, type: 0x11)
	}; // size = 0x38
}
