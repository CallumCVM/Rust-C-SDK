#pragma once

#include "..\UnityEngine\SkinnedMeshRenderer.h"
#include "AnimalMultiSkin.h"
#include "Model.h"

namespace rust 
{
	class AnimalSkin : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::SkinnedMeshRenderer* animalMesh; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		AnimalMultiSkin* animalSkins; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		Model* model; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool dontRandomizeOnStart; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x38
}
