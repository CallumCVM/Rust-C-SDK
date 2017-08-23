#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\TreeInstance.h"
#include "..\UnityEngine\TreePrototype.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class TreePerfTest : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* TerrainTrees; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::GameObject* CustomTrees; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		int* treeTypes; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		float* treeRotations; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Vector3* treePositions; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::TreeInstance* treeInstances; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::TreePrototype* treePrototypes; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::List<UnityEngine.GameObject>* treeObjects; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
		int Seed; // 0x58 (size: 0x4, flags: 0x6, type: 0x8)
		int TreeCount; // 0x5c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x60
}
