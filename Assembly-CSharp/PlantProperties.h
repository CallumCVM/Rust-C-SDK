#pragma once

#include "..\PlantProperties\Stage.h"
#include "..\UnityEngine\AnimationCurve.h"
#include "..\BaseEntity\Menu\Option.h"
#include "ItemDefinition.h"
#include "GameObjectRef.h"

namespace rust 
{
	class PlantProperties : public ScriptableObject // 0x18
	{
	public:
		PlantProperties::Stage* stages; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::AnimationCurve* timeOfDayHappiness; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* temperatureHappiness; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* fruitCurve; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		BaseEntity::Menu::Option pickOption; // 0x38 (size: 0x20, flags: 0x6, type: 0x11)
		ItemDefinition* pickupItem; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* pickEffect; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		BaseEntity::Menu::Option cloneOption; // 0x68 (size: 0x20, flags: 0x6, type: 0x11)
		ItemDefinition* cloneItem; // 0x88 (size: 0x8, flags: 0x6, type: 0x12)
		int maxSeasons; // 0x90 (size: 0x4, flags: 0x6, type: 0x8)
		int maxHeldWater; // 0x94 (size: 0x4, flags: 0x6, type: 0x8)
		int lifetimeWaterConsumption; // 0x98 (size: 0x4, flags: 0x6, type: 0x8)
		float waterConsumptionLifetime; // 0x9c (size: 0x4, flags: 0x6, type: 0xc)
		int waterYieldBonus; // 0xa0 (size: 0x4, flags: 0x6, type: 0x8)
		int pickupAmount; // 0xa4 (size: 0x4, flags: 0x6, type: 0x8)
		int maxHarvests; // 0xa8 (size: 0x4, flags: 0x6, type: 0x8)
		bool disappearAfterHarvest; // 0xac (size: 0x1, flags: 0x6, type: 0x2)
		int maxClones; // 0xb0 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0xb8
}
