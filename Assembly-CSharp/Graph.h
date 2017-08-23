#pragma once

#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\Rect.h"

namespace rust 
{
	class Graph : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Material* Material; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float* values; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		int Resolution; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Vector2 ScreenFill; // 0x2c (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 ScreenOrigin; // 0x34 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 Pivot; // 0x3c (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Rect Area; // 0x44 (size: 0x10, flags: 0x6, type: 0x11)
		float CurrentValue; // 0x54 (size: 0x4, flags: 0x3, type: 0xc)
		int index; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		float max; // 0x5c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x60
}
