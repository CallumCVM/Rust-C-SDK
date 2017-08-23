#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\Rust\UI\HttpImage.h"
#include "..\UnityEngine\GameObject.h"
#include "..\Facepunch\Steamworks\Workshop\Item.h"

namespace Rust
{
	namespace Workshop
{
	class WorkshopItemButton : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* Name; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* Description; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Rust::UI::HttpImage* Icon; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* OldIndicator; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* Incompatible; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* ItemDownloaded; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* ItemDownloadPending; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* ItemDownloading; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Steamworks::Workshop::Item* Item; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x60
}
