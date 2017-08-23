#pragma once

#include "VirtualItemIcon.h"
#include "VendingPanelAdmin.h"

namespace rust 
{
	class AdminExistingSellOrder : public MonoBehaviour // 0x18
	{
	public:
		VirtualItemIcon* MerchandiseIcon; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		VirtualItemIcon* CurrencyIcon; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		VendingPanelAdmin* adminPanel; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int index; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
