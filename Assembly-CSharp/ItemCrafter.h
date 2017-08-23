#pragma once

#include "..\UnityEngine\List.h"
#include "..\System\Collections\Generic\Queue<ItemCraftTask>.h"

namespace rust 
{
	class ItemCrafter : public EntityComponent`1 // 0x20
	{
	public:
		UnityEngine::List<ItemContainer>* containers; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		System::Collections::Generic::Queue<ItemCraftTask> queue; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		int taskUID; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x38
}
