#pragma once

#include "..\UnityEngine\Font\FontTextureRebuildCallback.h"

namespace UnityEngine
{
	class Font : public Object // 0x18
	{
	public:
		UnityEngine::Font::FontTextureRebuildCallback* m_FontTextureRebuildCallback; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
