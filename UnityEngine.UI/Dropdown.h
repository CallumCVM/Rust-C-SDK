#pragma once

#include "..\UnityEngine\RectTransform.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\UI\Dropdown\OptionDataList.h"
#include "..\UnityEngine\UI\Dropdown\DropdownEvent.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\UI\CoroutineTween\TweenRunner<UnityEngine\UI\CoroutineTween\FloatTween>.h"

namespace UnityEngine
{
	namespace UI
{
	class Dropdown : public Selectable // 0xc8
	{
	public:
		UnityEngine::RectTransform* m_Template; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Text* m_CaptionText; // 0xd0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Image* m_CaptionImage; // 0xd8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Text* m_ItemText; // 0xe0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Image* m_ItemImage; // 0xe8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Dropdown::OptionDataList* m_Options; // 0xf0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Dropdown::DropdownEvent* m_OnValueChanged; // 0xf8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* m_Dropdown; // 0x100 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* m_Blocker; // 0x108 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<UnityEngine.UI.Dropdown.DropdownItem>* m_Items; // 0x110 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UI::CoroutineTween::TweenRunner<UnityEngine::UI::CoroutineTween::FloatTween> m_AlphaTweenRunner; // 0x118 (size: 0x8, flags: 0x1, type: 0x15)
		int m_Value; // 0x120 (size: 0x4, flags: 0x1, type: 0x8)
		bool validTemplate; // 0x124 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x128
}
