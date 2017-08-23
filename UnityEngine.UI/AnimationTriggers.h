#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace UI
{
	class AnimationTriggers : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_NormalTrigger; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_HighlightedTrigger; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_PressedTrigger; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_DisabledTrigger; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
