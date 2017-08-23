#pragma once

#include "..\UnityEngine\Vector3.h"
#include "DecorSpawn.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class DecorPatch : public MonoBehaviour // 0x18
	{
	public:
		DecorSpawn* decorSpawn; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<UnityEngine.GameObject>* spawns; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		bool initialized; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		float LOD; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		float shift; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
		float extent; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 offset; // 0x38 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
