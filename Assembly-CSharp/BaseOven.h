#pragma once

#include "..\GameMenu\Option.h"
#include "..\BaseEntity\Menu\Option.h"
#include "ItemAmount.h"
#include "ItemDefinition.h"

namespace rust 
{
	class BaseOven : public StorageContainer // 0x2e8
	{
	public:
		GameMenu::Option __menuOption_SwitchOff; // 0x2e8 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_SwitchOn; // 0x340 (size: 0x58, flags: 0x1, type: 0x11)
		BaseEntity::Menu::Option switchOnMenu; // 0x398 (size: 0x20, flags: 0x6, type: 0x11)
		BaseEntity::Menu::Option switchOffMenu; // 0x3b8 (size: 0x20, flags: 0x6, type: 0x11)
		ItemAmount* startupContents; // 0x3d8 (size: 0x8, flags: 0x6, type: 0x1d)
		ItemDefinition* fuelType; // 0x3e0 (size: 0x8, flags: 0x6, type: 0x12)
		TemperatureType temperature; // 0x3e8 (size: 0x4, flags: 0x6, type: 0x11)
		bool allowByproductCreation; // 0x3ec (size: 0x1, flags: 0x6, type: 0x2)
		bool canModFire; // 0x3ed (size: 0x1, flags: 0x6, type: 0x2)
		bool disabledBySplash; // 0x3ee (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x3f0
}
