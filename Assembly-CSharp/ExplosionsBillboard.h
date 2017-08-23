#pragma once

#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Transform.h"

namespace rust 
{
	class ExplosionsBillboard : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Camera* Camera; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* myContainer; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* t; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* camT; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* contT; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool Active; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
		bool AutoInitCamera; // 0x41 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x48
}
