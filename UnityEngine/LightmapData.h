#pragma once

#include "..\UnityEngine\Texture2D.h"

namespace UnityEngine
{
	class LightmapData : public Object // 0x0
	{
	public:
		UnityEngine::Texture2D* m_Light; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::Texture2D* m_Dir; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::Texture2D* m_ShadowMask; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x28
}
