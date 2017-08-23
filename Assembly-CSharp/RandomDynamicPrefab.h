#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "Prefab.h"
#include "..\UnityEngine\GameObject.h"
#include "LODCell.h"

namespace rust 
{
	class RandomDynamicPrefab : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* ResourceFolder; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		Prefab* prefab; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* instance; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		LODCell* cell; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		float Distance; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float Probability; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x40
}
