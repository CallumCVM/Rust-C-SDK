#pragma once

#include "..\UnityEngine\Sprite.h"

namespace UnityEngine
{
	namespace UI
{
	class SpriteState : public ValueType // 0x0
	{
	public:
		UnityEngine::Sprite* m_HighlightedSprite; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Sprite* m_PressedSprite; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Sprite* m_DisabledSprite; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
