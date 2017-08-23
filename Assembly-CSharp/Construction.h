#pragma once

#include "..\BaseEntity\Menu\Option.h"
#include "..\UnityEngine\Vector3.h"
#include "Socket_Base.h"
#include "ConstructionGrade.h"
#include "SocketHandle.h"
#include "..\UnityEngine\Bounds.h"
#include "Deployable.h"
#include "ConstructionPlaceholder.h"

namespace rust 
{
	class Construction : public PrefabAttribute // 0x98
	{
	public:
		BaseEntity::Menu::Option info; // 0x98 (size: 0x20, flags: 0x6, type: 0x11)
		Socket_Base* allSockets; // 0xb8 (size: 0x8, flags: 0x86, type: 0x1d)
		ConstructionGrade* defaultGrade; // 0xc0 (size: 0x8, flags: 0x86, type: 0x12)
		SocketHandle* socketHandle; // 0xc8 (size: 0x8, flags: 0x86, type: 0x12)
		ConstructionGrade* grades; // 0xd0 (size: 0x8, flags: 0x86, type: 0x1d)
		Deployable* deployable; // 0xd8 (size: 0x8, flags: 0x86, type: 0x12)
		ConstructionPlaceholder* placeholder; // 0xe0 (size: 0x8, flags: 0x86, type: 0x12)
		bool canBypassBuildingPermission; // 0xe8 (size: 0x1, flags: 0x6, type: 0x2)
		bool canRotate; // 0xe9 (size: 0x1, flags: 0x6, type: 0x2)
		bool checkVolumeOnRotate; // 0xea (size: 0x1, flags: 0x6, type: 0x2)
		bool checkVolumeOnUpgrade; // 0xeb (size: 0x1, flags: 0x6, type: 0x2)
		bool canPlaceAtMaxDistance; // 0xec (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 rotationAmount; // 0xf0 (size: 0xc, flags: 0x6, type: 0x11)
		float healthMultiplier; // 0xfc (size: 0x4, flags: 0x6, type: 0xc)
		float costMultiplier; // 0x100 (size: 0x4, flags: 0x6, type: 0xc)
		float maxplaceDistance; // 0x104 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Bounds bounds; // 0x108 (size: 0x18, flags: 0x86, type: 0x11)
	}; // size = 0x120
}
