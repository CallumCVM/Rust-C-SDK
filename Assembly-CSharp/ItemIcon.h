#pragma once

#include "ItemContainerSource.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\UI\Text.h"
#include "Item.h"
#include "..\UnityEngine\AudioClip.h"
#include "..\System\Action.h"
#include "..\System\Nullable<UnityEngine\Vector2>.h"

namespace rust 
{
	class ItemIcon : public BaseMonoBehaviour // 0x18
	{
	public:
		ItemContainerSource* containerSource; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* slots; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* iconContents; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* iconImage; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* underlayImage; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* amountText; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* hoverOutline; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* cornerIcon; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* lockedImage; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* progressImage; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* backgroundImage; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* conditionObject; // 0x70 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* conditionFill; // 0x78 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* maxConditionFill; // 0x80 (size: 0x8, flags: 0x6, type: 0x12)
		Item* item; // 0x88 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::AudioClip* hoverSound; // 0x90 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* slotImages; // 0x98 (size: 0x8, flags: 0x3, type: 0x1d)
		System::Action* timedAction; // 0xa0 (size: 0x8, flags: 0x6, type: 0x12)
		int slotOffset; // 0xa8 (size: 0x4, flags: 0x6, type: 0x8)
		int slot; // 0xac (size: 0x4, flags: 0x6, type: 0x8)
		bool setSlotFromSiblingIndex; // 0xb0 (size: 0x1, flags: 0x6, type: 0x2)
		bool allowSelection; // 0xb1 (size: 0x1, flags: 0x6, type: 0x2)
		bool allowDropping; // 0xb2 (size: 0x1, flags: 0x6, type: 0x2)
		bool invalidSlot; // 0xb3 (size: 0x1, flags: 0x86, type: 0x2)
		System::Nullable<UnityEngine::Vector2> timedActionTime; // 0xb4 (size: 0xc, flags: 0x6, type: 0x15)
	}; // size = 0xc0
}
