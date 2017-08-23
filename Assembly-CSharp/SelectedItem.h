#pragma once

#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Animator.h"
#include "ProtectionValue.h"
#include "..\UnityEngine\List.h"
#include "Item.h"

namespace rust 
{
	class SelectedItem : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::UI::Image* icon; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* iconSplitter; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* title; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* description; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* splitPanel; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* itemProtection; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* menuOption; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* optionsParent; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* innerPanelContainer; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Animator* animator; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		ProtectionValue* protectionValues; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::List<GameMenu.Option>* previousOptions; // 0x70 (size: 0x8, flags: 0x1, type: 0x15)
		Item* lastItem; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		bool wasOpen; // 0x80 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x88
}
