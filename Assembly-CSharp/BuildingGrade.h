#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\PhysicMaterial.h"
#include "ProtectionProperties.h"
#include "..\BaseEntity\Menu\Option.h"

namespace rust 
{
	class BuildingGrade : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::List<ItemAmount>* baseCost; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::PhysicMaterial* physicMaterial; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		ProtectionProperties* damageProtecton; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		BaseEntity::Menu::Option upgradeMenu; // 0x30 (size: 0x20, flags: 0x6, type: 0x11)
		Enum type; // 0x50 (size: 0x4, flags: 0x6, type: 0x11)
		float baseHealth; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x58
}
