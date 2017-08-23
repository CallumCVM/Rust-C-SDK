#pragma once

#include "..\UnityEngine\UI\Toggle\ToggleTransition.h"
#include "..\UnityEngine\UI\Graphic.h"
#include "..\UnityEngine\UI\ToggleGroup.h"
#include "..\UnityEngine\UI\Toggle\ToggleEvent.h"

namespace UnityEngine
{
	namespace UI
{
	class Toggle : public Selectable // 0xc8
	{
	public:
		UnityEngine::UI::Graphic* graphic; // 0xc8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::ToggleGroup* m_Group; // 0xd0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Toggle::ToggleEvent* onValueChanged; // 0xd8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Toggle::ToggleTransition toggleTransition; // 0xe0 (size: 0x4, flags: 0x6, type: 0x11)
		bool m_IsOn; // 0xe4 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xe8
}
