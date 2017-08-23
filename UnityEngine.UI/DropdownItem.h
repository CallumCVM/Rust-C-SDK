#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\RectTransform.h"
#include "..\UnityEngine\UI\Toggle.h"

namespace rust 
{
	class DropdownItem : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* m_Text; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Image* m_Image; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RectTransform* m_RectTransform; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Toggle* m_Toggle; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
