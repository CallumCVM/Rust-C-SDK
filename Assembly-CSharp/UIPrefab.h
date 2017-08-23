#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class UIPrefab : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* prefabSource; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* createdGameObject; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x28
}
