#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\TextGenerationSettings.h"
#include "..\UnityEngine\TextGenerationError.h"
#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	class TextGenerator : public Object // 0x0
	{
	public:
		__int64 m_Ptr; // 0x10 (size: 0x8, flags: 0x3, type: 0x18)
		UnityEngine::UnicodeString* m_LastString; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::TextGenerationSettings m_LastSettings; // 0x20 (size: 0x60, flags: 0x1, type: 0x11)
		bool m_HasGenerated; // 0x80 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::TextGenerationError m_LastValid; // 0x84 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::List<UnityEngine.UIVertex>* m_Verts; // 0x88 (size: 0x8, flags: 0x21, type: 0x15)
		UnityEngine::List<UnityEngine.UICharInfo>* m_Characters; // 0x90 (size: 0x8, flags: 0x21, type: 0x15)
		UnityEngine::List<UnityEngine.UILineInfo>* m_Lines; // 0x98 (size: 0x8, flags: 0x21, type: 0x15)
		bool m_CachedVerts; // 0xa0 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_CachedCharacters; // 0xa1 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_CachedLines; // 0xa2 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xa8
}
