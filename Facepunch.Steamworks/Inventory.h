#pragma once

#include "..\System\Action.h"
#include "..\Facepunch\Steamworks\Inventory\Item.h"
#include "..\System\DateTime.h"
#include "..\SteamNative\SteamInventory.h"
#include "..\System\Diagnostics\Stopwatch.h"
#include "..\Facepunch\Steamworks\Inventory\Definition.h"

namespace Facepunch
{
	namespace Steamworks
{
	class Inventory : public Object // 0x0
	{
	public:
		System::Action* OnUpdate; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Steamworks::Inventory::Item* Items; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* SerializedItems; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		SteamNative::SteamInventory* inventory; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		System::Diagnostics::Stopwatch* fetchRetryTimer; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::Inventory::Definition* Definitions; // 0x38 (size: 0x8, flags: 0x6, type: 0x1d)
		System::DateTime SerializedExpireTime; // 0x40 (size: 0x10, flags: 0x6, type: 0x11)
		unsigned int LastTimestamp; // 0x50 (size: 0x4, flags: 0x3, type: 0x9)
		bool <IsServer>k__BackingField; // 0x54 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
