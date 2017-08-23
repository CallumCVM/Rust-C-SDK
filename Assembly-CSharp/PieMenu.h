#pragma once

#include "..\UnityEngine\UI\Image.h"
#include "PieShape.h"
#include "..\UnityEngine\GameObject.h"
#include "..\PieMenu\MenuOption.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\AudioClip.h"
#include "..\UnityEngine\CanvasGroup.h"

namespace rust 
{
	class PieMenu : public UIBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Image* middleBox; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		PieShape* pieBackgroundBlur; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		PieShape* pieBackground; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		PieShape* pieSelection; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* pieOptionPrefab; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* optionsCanvas; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		PieMenu::MenuOption* options; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::GameObject* scaleTarget; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* middleImage; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* middleTitle; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* middleDesc; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* middleRequired; // 0x70 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioClip* clipOpen; // 0x78 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioClip* clipCancel; // 0x80 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioClip* clipChanged; // 0x88 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioClip* clipSelected; // 0x90 (size: 0x8, flags: 0x6, type: 0x12)
		PieMenu::MenuOption* defaultOption; // 0x98 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* canvasGroup; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		PieMenu::MenuOption* selectedOption; // 0xa8 (size: 0x8, flags: 0x3, type: 0x12)
		float sliceGaps; // 0xb0 (size: 0x4, flags: 0x6, type: 0xc)
		float outerSize; // 0xb4 (size: 0x4, flags: 0x6, type: 0xc)
		float innerSize; // 0xb8 (size: 0x4, flags: 0x6, type: 0xc)
		float iconSize; // 0xbc (size: 0x4, flags: 0x6, type: 0xc)
		float startRadius; // 0xc0 (size: 0x4, flags: 0x6, type: 0xc)
		float radiusSize; // 0xc4 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color colorIconActive; // 0xc8 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color colorIconHovered; // 0xd8 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color colorIconDisabled; // 0xe8 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color colorBackgroundDisabled; // 0xf8 (size: 0x10, flags: 0x6, type: 0x11)
		bool isClosing; // 0x108 (size: 0x1, flags: 0x1, type: 0x2)
		bool IsOpen; // 0x109 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x110
}
