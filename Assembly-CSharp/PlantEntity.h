#pragma once

#include "..\GameMenu\Option.h"
#include "PlantProperties.h"
#include "..\PlantProperties\State.h"
#include "DeferredAction.h"
#include "..\UnityEngine\GameObject.h"
#include "MaterialColorLerp.h"

namespace rust 
{
	class PlantEntity : public BaseCombatEntity // 0x1e8
	{
	public:
		GameMenu::Option __menuOption_MenuClone; // 0x1e8 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_MenuPick; // 0x240 (size: 0x58, flags: 0x1, type: 0x11)
		PlantProperties* plantProperty; // 0x298 (size: 0x8, flags: 0x6, type: 0x12)
		DeferredAction* skinChange; // 0x2a0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* skin; // 0x2a8 (size: 0x8, flags: 0x1, type: 0x12)
		MaterialColorLerp* mcl; // 0x2b0 (size: 0x8, flags: 0x1, type: 0x12)
		int water; // 0x2b8 (size: 0x4, flags: 0x6, type: 0x8)
		int consumedWater; // 0x2bc (size: 0x4, flags: 0x6, type: 0x8)
		PlantProperties::State state; // 0x2c0 (size: 0x4, flags: 0x1, type: 0x11)
		float age; // 0x2c4 (size: 0x4, flags: 0x1, type: 0xc)
		float client_healthScale; // 0x2c8 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x2d0
}
