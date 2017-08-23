#pragma once

#include "..\UnityEngine\Texture.h"
#include "..\UnityEngine\Rect.h"

namespace UnityEngine
{
	namespace UI
{
	class RawImage : public MaskableGraphic // 0x98
	{
	public:
		UnityEngine::Texture* m_Texture; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Rect m_UVRect; // 0xa0 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0xb0
}
