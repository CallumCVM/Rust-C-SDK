#pragma once

#include "..\UnityEngine\UI\ContentSizeFitter\FitMode.h"
#include "..\UnityEngine\RectTransform.h"
#include "..\UnityEngine\DrivenRectTransformTracker.h"

namespace UnityEngine
{
	namespace UI
{
	class ContentSizeFitter : public UIBehaviour // 0x18
	{
	public:
		UnityEngine::RectTransform* m_Rect; // 0x18 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::UI::ContentSizeFitter::FitMode m_HorizontalFit; // 0x20 (size: 0x4, flags: 0x4, type: 0x11)
		UnityEngine::UI::ContentSizeFitter::FitMode m_VerticalFit; // 0x24 (size: 0x4, flags: 0x4, type: 0x11)
		UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x28 (size: 0x0, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
