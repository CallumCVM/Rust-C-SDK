#pragma once

#include "..\Rust\Workshop\ItemSchema\Item.h"

namespace Rust
{
	namespace Workshop
{
	class ItemSchema : public Object // 0x0
	{
	public:
		Rust::Workshop::ItemSchema::Item* items; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		int appid; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
