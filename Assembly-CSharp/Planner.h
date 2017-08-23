#pragma once

#include "Construction.h"
#include "..\Planner\Guide.h"
#include "BaseEntity.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class Planner : public HeldEntity // 0x180
	{
	public:
		Construction* currentConstruction; // 0x180 (size: 0x8, flags: 0x86, type: 0x12)
		Planner::Guide* guide; // 0x188 (size: 0x8, flags: 0x3, type: 0x12)
		BaseEntity* buildableList; // 0x190 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector3 rotationOffset; // 0x198 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x1a8
}
