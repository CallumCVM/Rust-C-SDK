#pragma once

#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\Vector4.h"

namespace UnityEngine
{
	class SplatPrototype : public Object // 0x0
	{
	public:
		UnityEngine::Texture2D* m_Texture; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::Texture2D* m_NormalMap; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::Vector2 m_TileSize; // 0x20 (size: 0x8, flags: 0x3, type: 0x11)
		UnityEngine::Vector2 m_TileOffset; // 0x28 (size: 0x8, flags: 0x3, type: 0x11)
		UnityEngine::Vector4 m_SpecularMetallic; // 0x30 (size: 0x10, flags: 0x3, type: 0x11)
		float m_Smoothness; // 0x40 (size: 0x4, flags: 0x3, type: 0xc)
	}; // size = 0x48
}
