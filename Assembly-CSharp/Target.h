#pragma once

#include "..\UnityEngine\Ray.h"
#include "BaseEntity.h"
#include "BuildingBlock.h"
#include "Socket_Base.h"
#include "..\UnityEngine\Vector3.h"
#include "BasePlayer.h"

namespace rust 
{
	class Target : public ValueType // 0x0
	{
	public:
		bool valid; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Ray ray; // 0x14 (size: 0x18, flags: 0x6, type: 0x11)
		BaseEntity* transformParent; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		BuildingBlock* construction; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		Socket_Base* socket; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		bool onTerrain; // 0x48 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 position; // 0x4c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 normal; // 0x58 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 rotation; // 0x64 (size: 0xc, flags: 0x6, type: 0x11)
		BasePlayer* player; // 0x70 (size: 0x8, flags: 0x6, type: 0x12)
		bool inBuildingPrivilege; // 0x78 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x80
}
