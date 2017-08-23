#pragma once

#include "..\UnityEngine\UI\Navigation.h"
#include "..\UnityEngine\UI\Selectable\Transition.h"
#include "..\UnityEngine\UI\ColorBlock.h"
#include "..\UnityEngine\UI\SpriteState.h"
#include "..\UnityEngine\UI\AnimationTriggers.h"
#include "..\UnityEngine\UI\Graphic.h"
#include "..\UnityEngine\UI\Selectable\SelectionState.h"
#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace UI
{
	class Selectable : public UIBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Navigation m_Navigation; // 0x18 (size: 0x28, flags: 0x1, type: 0x11)
		UnityEngine::UI::SpriteState m_SpriteState; // 0x40 (size: 0x18, flags: 0x1, type: 0x11)
		UnityEngine::UI::AnimationTriggers* m_AnimationTriggers; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Graphic* m_TargetGraphic; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<UnityEngine.CanvasGroup>* m_CanvasGroupCache; // 0x68 (size: 0x8, flags: 0x21, type: 0x15)
		UnityEngine::UI::Selectable::Transition m_Transition; // 0x70 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UI::ColorBlock m_Colors; // 0x74 (size: 0x48, flags: 0x1, type: 0x11)
		bool m_Interactable; // 0xbc (size: 0x1, flags: 0x1, type: 0x2)
		bool m_GroupsAllowInteraction; // 0xbd (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UI::Selectable::SelectionState m_CurrentSelectionState; // 0xc0 (size: 0x4, flags: 0x1, type: 0x11)
		bool <isPointerInside>k__BackingField; // 0xc4 (size: 0x1, flags: 0x1, type: 0x2)
		bool <isPointerDown>k__BackingField; // 0xc5 (size: 0x1, flags: 0x1, type: 0x2)
		bool <hasSelection>k__BackingField; // 0xc6 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xc8
}
