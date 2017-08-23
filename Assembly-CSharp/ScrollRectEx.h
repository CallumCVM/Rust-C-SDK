#pragma once

#include "..\UnityEngine\EventSystems\PointerEventData\InputButton.h"
#include "..\UnityEngine\RectTransform.h"
#include "..\UnityEngine\UI\ScrollRectEx\MovementType.h"
#include "..\UnityEngine\UI\Scrollbar.h"
#include "..\UnityEngine\UI\ScrollRectEx\ScrollbarVisibility.h"
#include "..\UnityEngine\UI\ScrollRectEx\ScrollRectEvent.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\Bounds.h"
#include "..\UnityEngine\DrivenRectTransformTracker.h"
#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	namespace UI
{
	class ScrollRectEx : public UIBehaviour // 0x18
	{
	public:
		UnityEngine::RectTransform* m_Content; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RectTransform* m_Viewport; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Scrollbar* m_HorizontalScrollbar; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Scrollbar* m_VerticalScrollbar; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::ScrollRectEx::ScrollRectEvent* m_OnValueChanged; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RectTransform* m_ViewRect; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RectTransform* m_Rect; // 0x48 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::RectTransform* m_HorizontalScrollbarRect; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RectTransform* m_VerticalScrollbarRect; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector3* m_Corners; // 0x60 (size: 0x8, flags: 0x21, type: 0x1d)
		UnityEngine::EventSystems::PointerEventData::InputButton scrollButton; // 0x68 (size: 0x4, flags: 0x6, type: 0x11)
		bool m_Horizontal; // 0x6c (size: 0x1, flags: 0x1, type: 0x2)
		bool m_Vertical; // 0x6d (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UI::ScrollRectEx::MovementType m_MovementType; // 0x70 (size: 0x4, flags: 0x1, type: 0x11)
		float m_Elasticity; // 0x74 (size: 0x4, flags: 0x1, type: 0xc)
		bool m_Inertia; // 0x78 (size: 0x1, flags: 0x1, type: 0x2)
		float m_DecelerationRate; // 0x7c (size: 0x4, flags: 0x1, type: 0xc)
		float m_ScrollSensitivity; // 0x80 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::UI::ScrollRectEx::ScrollbarVisibility m_HorizontalScrollbarVisibility; // 0x84 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UI::ScrollRectEx::ScrollbarVisibility m_VerticalScrollbarVisibility; // 0x88 (size: 0x4, flags: 0x1, type: 0x11)
		float m_HorizontalScrollbarSpacing; // 0x8c (size: 0x4, flags: 0x1, type: 0xc)
		float m_VerticalScrollbarSpacing; // 0x90 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector2 m_PointerStartLocalCursor; // 0x94 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 m_ContentStartPosition; // 0x9c (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Bounds m_ContentBounds; // 0xa4 (size: 0x18, flags: 0x1, type: 0x11)
		UnityEngine::Bounds m_ViewBounds; // 0xbc (size: 0x18, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 m_Velocity; // 0xd4 (size: 0x8, flags: 0x1, type: 0x11)
		bool m_Dragging; // 0xdc (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::Vector2 m_PrevPosition; // 0xe0 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Bounds m_PrevContentBounds; // 0xe8 (size: 0x18, flags: 0x1, type: 0x11)
		UnityEngine::Bounds m_PrevViewBounds; // 0x100 (size: 0x18, flags: 0x1, type: 0x11)
		bool m_HasRebuiltLayout; // 0x118 (size: 0x1, flags: 0x81, type: 0x2)
		bool m_HSliderExpand; // 0x119 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_VSliderExpand; // 0x11a (size: 0x1, flags: 0x1, type: 0x2)
		float m_HSliderHeight; // 0x11c (size: 0x4, flags: 0x1, type: 0xc)
		float m_VSliderWidth; // 0x120 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x124 (size: 0x0, flags: 0x1, type: 0x11)
	}; // size = 0x128
}
