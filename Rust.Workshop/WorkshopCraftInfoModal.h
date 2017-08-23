#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\Rust\UI\HttpImage.h"
#include "..\UnityEngine\GameObject.h"
#include "..\Facepunch\Steamworks\Inventory\Recipe.h"

namespace Rust
{
	namespace Workshop
{
{
		namespace Game
{
	class WorkshopCraftInfoModal : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* Name; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* Requirements; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* Label; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		Rust::UI::HttpImage* IconImage; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* ErrorPanel; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* ErrorText; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* CraftButton; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* ProgressPanel; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Steamworks::Inventory::Recipe Recipe; // 0x58 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x68
}
