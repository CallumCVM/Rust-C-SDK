#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Color32.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\Vector4.h"

namespace UnityEngine
{
	class UIVertex : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 position; // 0x10 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 normal; // 0x1c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Color32 color; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 uv0; // 0x2c (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 uv1; // 0x34 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 uv2; // 0x3c (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 uv3; // 0x44 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector4 tangent; // 0x4c (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x60
}
