#pragma once

#include "..\Facepunch\Steamworks\Inventory\Item.h"
#include "..\Rust\UI\HttpImage.h"

namespace Rust
{
	namespace Workshop
{
{
		namespace Game
{
	class WorkshopInventoryItem : public MonoBehaviour // 0x18
	{
	public:
		Facepunch::Steamworks::Inventory::Item Item; // 0x18 (size: 0x20, flags: 0x6, type: 0x11)
		Rust::UI::HttpImage* Image; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x40
}
