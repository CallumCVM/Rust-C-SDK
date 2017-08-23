#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Texture.h"

namespace UnityEngine
{
	class GUIContent : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_Text; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::Texture* m_Image; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_Tooltip; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
