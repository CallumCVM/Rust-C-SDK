#pragma once

#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\PhysicMaterial.h"

namespace rust 
{
	class GenerateRoadMeshes : public ProceduralComponent // 0x28
	{
	public:
		UnityEngine::Material* RoadMaterial; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::PhysicMaterial* RoadPhysicMaterial; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
