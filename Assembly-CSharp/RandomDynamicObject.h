#pragma once

#include "..\UnityEngine\GameObject.h"
#include "LODCell.h"

namespace rust 
{
	class RandomDynamicObject : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* Candidates; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::GameObject* instance; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		LODCell* cell; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		float Distance; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float Probability; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
