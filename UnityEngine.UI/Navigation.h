#pragma once

#include "..\UnityEngine\UI\Navigation\Mode.h"
#include "..\UnityEngine\UI\Selectable.h"

namespace UnityEngine
{
	namespace UI
{
	class Navigation : public ValueType // 0x0
	{
	public:
		UnityEngine::UI::Navigation::Mode m_Mode; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UI::Selectable* m_SelectOnUp; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Selectable* m_SelectOnDown; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Selectable* m_SelectOnLeft; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Selectable* m_SelectOnRight; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
