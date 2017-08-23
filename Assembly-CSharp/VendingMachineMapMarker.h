#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "VendingMachine.h"
#include "..\ProtoBuf\VendingMachine\SellOrderContainer.h"

namespace rust 
{
	class VendingMachineMapMarker : public MapMarker // 0x138
	{
	public:
		UnityEngine::UnicodeString* markerShopName; // 0x138 (size: 0x8, flags: 0x6, type: 0xe)
		VendingMachine* server_vendingMachine; // 0x140 (size: 0x8, flags: 0x6, type: 0x12)
		ProtoBuf::VendingMachine::SellOrderContainer* client_sellOrders; // 0x148 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x150
}
