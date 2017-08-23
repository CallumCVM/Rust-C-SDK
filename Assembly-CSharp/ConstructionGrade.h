#pragma once

#include "Construction.h"
#include "BuildingGrade.h"
#include "GameObjectRef.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class ConstructionGrade : public PrefabAttribute // 0x98
	{
	public:
		Construction* construction; // 0x98 (size: 0x8, flags: 0x86, type: 0x12)
		BuildingGrade* gradeBase; // 0xa0 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* skinObject; // 0xa8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<ItemAmount>* _costToBuild; // 0xb0 (size: 0x8, flags: 0x3, type: 0x15)
	}; // size = 0xb8
}
