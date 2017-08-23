#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Sprite.h"

namespace rust 
{
	class OptionData : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_Text; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::Sprite* m_Image; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
