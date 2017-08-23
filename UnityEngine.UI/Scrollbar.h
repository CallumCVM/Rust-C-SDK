#pragma once

#include "..\UnityEngine\RectTransform.h"
#include "..\UnityEngine\UI\Scrollbar\Direction.h"
#include "..\UnityEngine\UI\Scrollbar\ScrollEvent.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\DrivenRectTransformTracker.h"
#include "..\UnityEngine\Coroutine.h"

namespace UnityEngine
{
	namespace UI
{
	class Scrollbar : public Selectable // 0xc8
	{
	public:
		UnityEngine::RectTransform* m_HandleRect; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Scrollbar::ScrollEvent* m_OnValueChanged; // 0xd0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RectTransform* m_ContainerRect; // 0xd8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Coroutine* m_PointerDownRepeat; // 0xe0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Scrollbar::Direction m_Direction; // 0xe8 (size: 0x4, flags: 0x1, type: 0x11)
		float m_Value; // 0xec (size: 0x4, flags: 0x1, type: 0xc)
		float m_Size; // 0xf0 (size: 0x4, flags: 0x1, type: 0xc)
		int m_NumberOfSteps; // 0xf4 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Vector2 m_Offset; // 0xf8 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x100 (size: 0x0, flags: 0x1, type: 0x11)
		bool isPointerDownAndNotDragging; // 0x100 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x108
}
