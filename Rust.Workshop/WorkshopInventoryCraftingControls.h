#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UI\Button.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\Facepunch\Steamworks\Inventory\Definition.h"
#include "..\UnityEngine\Coroutine.h"
#include "..\Rust\Workshop\Game\WorkshopCraftInfoModal.h"

namespace Rust
{
	namespace Workshop
{
{
		namespace Game
{
	class WorkshopInventoryCraftingControls : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* Container; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* ConvertToItem; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<Facepunch.Steamworks.Inventory.Result>* CraftingResult; // 0x28 (size: 0x8, flags: 0x3, type: 0x15)
		UnityEngine::UI::Text* WoodAmount; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* ClothAmount; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* MetalAmount; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* InfoText; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Steamworks::Inventory::Definition* <ResultItem>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Coroutine* <MarketCoroutine>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		Rust::Workshop::Game::WorkshopCraftInfoModal* CraftModal; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* CraftingContainer; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* CraftingButton; // 0x70 (size: 0x8, flags: 0x6, type: 0x12)
		System.Collections.Generic.Dictionary<int,Rust.Workshop.Game.WorkshopInventoryCraftingControls.MarketPrice> priceCache; // 0x78 (size: 0x8, flags: 0x1, type: 0x15)
		int SelectedCount; // 0x80 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x88
}
