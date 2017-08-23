#pragma once

#include "..\UnityEngine\UI\Button\ButtonClickedEvent.h"

namespace UnityEngine
{
	namespace UI
{
	class Button : public Selectable // 0xc8
	{
	public:
		UnityEngine::UI::Button::ButtonClickedEvent* m_OnClick; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0xd0
}
