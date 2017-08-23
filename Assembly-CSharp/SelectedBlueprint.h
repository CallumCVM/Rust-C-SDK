#pragma once

#include "ItemBlueprint.h"
#include "..\UnityEngine\UI\InputField.h"
#include "..\UnityEngine\GameObject.h"
#include "IconSkinPicker.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\UI\Button.h"
#include "BlueprintCraftGridRow.h"

namespace rust 
{
	class SelectedBlueprint : public SingletonComponent`1 // 0x18
	{
	public:
		ItemBlueprint* blueprint; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::InputField* craftAmountText; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* ingredientGrid; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		IconSkinPicker* skinPicker; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* iconImage; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* titleText; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* descriptionText; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* CraftArea; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* CraftButton; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* CraftTime; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* CraftAmount; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		BlueprintCraftGridRow* ingredientRows; // 0x70 (size: 0x8, flags: 0x1, type: 0x1d)
		int craftAmount; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x80
}
