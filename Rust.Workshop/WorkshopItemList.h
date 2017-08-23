#pragma once

#include "..\Rust\Workshop\WorkshopItemButton.h"
#include "..\UnityEngine\GameObject.h"
#include "..\Rust\Workshop\ListType.h"
#include "..\UnityEngine\UI\Button.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\UI\Dropdown.h"

namespace Rust
{
	namespace Workshop
{
	class WorkshopItemList : public MonoBehaviour // 0x18
	{
	public:
		Rust::Workshop::WorkshopItemButton* ButtonPrefab; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* Container; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* PreviousPage; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* NextPage; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* PageInfo; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* ItemFilter; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UI::Dropdown* ItemTypeSelector; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		Rust::Workshop::ListType ListType; // 0x50 (size: 0x4, flags: 0x6, type: 0x11)
		int PerPage; // 0x54 (size: 0x4, flags: 0x6, type: 0x8)
		int Page; // 0x58 (size: 0x4, flags: 0x6, type: 0x8)
		int ForcedRefresh; // 0x5c (size: 0x4, flags: 0x1, type: 0x8)
		int TotalResults; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		bool Refreshing; // 0x64 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x68
}
