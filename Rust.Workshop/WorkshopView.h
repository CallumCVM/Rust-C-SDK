#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Button.h"
#include "..\Facepunch\Steamworks\Workshop\Item.h"

namespace Rust
{
	namespace Workshop
{
{
		namespace Editor
{
	class WorkshopView : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* Title; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* AuthorName; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* VoteInfo; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* VoteUp; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* VoteDown; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Steamworks::Workshop::Item* item; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
