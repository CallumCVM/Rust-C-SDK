#pragma once

#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\Material.h"
#include "LODCell.h"

namespace rust 
{
	class FoliageDisplacement : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Mesh* mesh; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* material; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		LODCell* cell; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool moving; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool billboard; // 0x31 (size: 0x1, flags: 0x6, type: 0x2)
		bool visible; // 0x32 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
