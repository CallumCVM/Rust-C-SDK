#pragma once

#include "..\UnityEngine\UI\Button.h"
#include "..\Facepunch\Steamworks\Workshop\Item.h"

namespace Rust
{
	namespace Workshop
{
	class WorkshopItemVoteGame : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Button* VoteButton; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Steamworks::Workshop::Item* Items; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		Facepunch::Steamworks::Workshop::Item* CurrentItem; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
