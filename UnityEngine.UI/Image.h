#pragma once

#include "..\UnityEngine\Sprite.h"
#include "..\UnityEngine\UI\Image\Type.h"
#include "..\UnityEngine\UI\Image\FillMethod.h"

namespace UnityEngine
{
	namespace UI
{
	class Image : public MaskableGraphic // 0x98
	{
	public:
		UnityEngine::Sprite* m_Sprite; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Sprite* m_OverrideSprite; // 0xa0 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::UI::Image::Type m_Type; // 0xa8 (size: 0x4, flags: 0x1, type: 0x11)
		bool m_PreserveAspect; // 0xac (size: 0x1, flags: 0x1, type: 0x2)
		bool m_FillCenter; // 0xad (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UI::Image::FillMethod m_FillMethod; // 0xb0 (size: 0x4, flags: 0x1, type: 0x11)
		float m_FillAmount; // 0xb4 (size: 0x4, flags: 0x1, type: 0xc)
		bool m_FillClockwise; // 0xb8 (size: 0x1, flags: 0x1, type: 0x2)
		int m_FillOrigin; // 0xbc (size: 0x4, flags: 0x1, type: 0x8)
		float m_AlphaHitTestMinimumThreshold; // 0xc0 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0xc8
}
