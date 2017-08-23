#pragma once

#include "OccludeeState.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Renderer.h"
#include "..\UnityEngine\Collider.h"

namespace rust 
{
	class Occludee : public MonoBehaviour // 0x18
	{
	public:
		OccludeeState* state; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Renderer* renderer; // 0x20 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::Collider* collider; // 0x28 (size: 0x8, flags: 0x4, type: 0x12)
		float minTimeVisible; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		bool isStatic; // 0x34 (size: 0x1, flags: 0x6, type: 0x2)
		bool autoRegister; // 0x35 (size: 0x1, flags: 0x6, type: 0x2)
		bool stickyGizmos; // 0x36 (size: 0x1, flags: 0x6, type: 0x2)
		int occludeeId; // 0x38 (size: 0x4, flags: 0x4, type: 0x8)
		UnityEngine::Vector3 center; // 0x3c (size: 0xc, flags: 0x4, type: 0x11)
		float radius; // 0x48 (size: 0x4, flags: 0x4, type: 0xc)
	}; // size = 0x50
}
