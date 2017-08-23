#pragma once

#include "VisualStorageContainerNode.h"
#include "..\VisualStorageContainer\DisplayModel.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class VisualStorageContainer : public LootContainer // 0x318
	{
	public:
		VisualStorageContainerNode* displayNodes; // 0x318 (size: 0x8, flags: 0x6, type: 0x1d)
		VisualStorageContainer::DisplayModel* displayModels; // 0x320 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Transform* nodeParent; // 0x328 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* defaultDisplayModel; // 0x330 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x338
}
