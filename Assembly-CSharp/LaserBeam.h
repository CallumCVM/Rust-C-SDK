#pragma once

#include "..\UnityEngine\LineRenderer.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Renderer.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\Transform.h"

namespace rust 
{
	class LaserBeam : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::LineRenderer* beamRenderer; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* dotObject; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Renderer* dotRenderer; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* dotSpotlight; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* emissionOverride; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		float scrollSpeed; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector2 scrollDir; // 0x44 (size: 0x8, flags: 0x6, type: 0x11)
		float maxDistance; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		float stillBlendFactor; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		float movementBlendFactor; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		float movementThreshhold; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		bool isFirstPerson; // 0x5c (size: 0x1, flags: 0x6, type: 0x2)
		float aimToBarrelBlendFrac; // 0x60 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x68
}
