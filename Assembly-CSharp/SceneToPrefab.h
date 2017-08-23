#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class SceneToPrefab : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* outputPrefab; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		bool flattenHierarchy; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
