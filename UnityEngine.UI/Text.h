#pragma once

#include "..\UnityEngine\UI\FontData.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\TextGenerator.h"
#include "..\UnityEngine\UIVertex.h"

namespace UnityEngine
{
	namespace UI
{
	class Text : public MaskableGraphic // 0x98
	{
	public:
		UnityEngine::UI::FontData* m_FontData; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_Text; // 0xa0 (size: 0x8, flags: 0x4, type: 0xe)
		UnityEngine::TextGenerator* m_TextCache; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::TextGenerator* m_TextCacheForLayout; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UIVertex* m_TempVerts; // 0xb8 (size: 0x8, flags: 0x21, type: 0x1d)
		bool m_DisableFontTextureRebuiltCallback; // 0xc0 (size: 0x1, flags: 0x84, type: 0x2)
	}; // size = 0xc8
}
