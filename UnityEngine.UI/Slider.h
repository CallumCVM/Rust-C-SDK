#pragma once

#include "..\UnityEngine\RectTransform.h"
#include "..\UnityEngine\UI\Slider\Direction.h"
#include "..\UnityEngine\UI\Slider\SliderEvent.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\DrivenRectTransformTracker.h"

namespace UnityEngine
{
	namespace UI
{
	class Slider : public Selectable // 0xc8
	{
	public:
		UnityEngine::RectTransform* m_FillRect; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RectTransform* m_HandleRect; // 0xd0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Slider::SliderEvent* m_OnValueChanged; // 0xd8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Image* m_FillImage; // 0xe0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* m_FillTransform; // 0xe8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RectTransform* m_FillContainerRect; // 0xf0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* m_HandleTransform; // 0xf8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RectTransform* m_HandleContainerRect; // 0x100 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Slider::Direction m_Direction; // 0x108 (size: 0x4, flags: 0x1, type: 0x11)
		float m_MinValue; // 0x10c (size: 0x4, flags: 0x1, type: 0xc)
		float m_MaxValue; // 0x110 (size: 0x4, flags: 0x1, type: 0xc)
		bool m_WholeNumbers; // 0x114 (size: 0x1, flags: 0x1, type: 0x2)
		float m_Value; // 0x118 (size: 0x4, flags: 0x4, type: 0xc)
		UnityEngine::Vector2 m_Offset; // 0x11c (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x124 (size: 0x0, flags: 0x1, type: 0x11)
	}; // size = 0x128
}
