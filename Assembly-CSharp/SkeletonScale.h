#pragma once

#include "BoneInfoComponent.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class SkeletonScale : public MonoBehaviour // 0x18
	{
	public:
		BoneInfoComponent* bones; // 0x18 (size: 0x8, flags: 0x4, type: 0x1d)
		UnityEngine::GameObject* leftShoulder; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* rightShoulder; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* spine; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		int seed; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x40
}
