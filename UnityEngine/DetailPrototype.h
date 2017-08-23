#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Color.h"

namespace UnityEngine
{
	class DetailPrototype : public Object // 0x0
	{
	public:
		UnityEngine::GameObject* m_Prototype; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* m_PrototypeTexture; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Color m_HealthyColor; // 0x20 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color m_DryColor; // 0x30 (size: 0x10, flags: 0x1, type: 0x11)
		float m_MinWidth; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
		float m_MaxWidth; // 0x44 (size: 0x4, flags: 0x1, type: 0xc)
		float m_MinHeight; // 0x48 (size: 0x4, flags: 0x1, type: 0xc)
		float m_MaxHeight; // 0x4c (size: 0x4, flags: 0x1, type: 0xc)
		float m_NoiseSpread; // 0x50 (size: 0x4, flags: 0x1, type: 0xc)
		float m_BendFactor; // 0x54 (size: 0x4, flags: 0x1, type: 0xc)
		int m_RenderMode; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		int m_UsePrototypeMesh; // 0x5c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x60
}
