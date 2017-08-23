#pragma once

#include "..\UnityEngine\RectOffset.h"
#include "..\UnityEngine\TextAnchor.h"
#include "..\UnityEngine\RectTransform.h"
#include "..\UnityEngine\DrivenRectTransformTracker.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace UI
{
	class LayoutGroup : public UIBehaviour // 0x18
	{
	public:
		UnityEngine::RectOffset* m_Padding; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::RectTransform* m_Rect; // 0x20 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::List<UnityEngine.RectTransform>* m_RectChildren; // 0x28 (size: 0x8, flags: 0x81, type: 0x15)
		UnityEngine::TextAnchor m_ChildAlignment; // 0x30 (size: 0x4, flags: 0x4, type: 0x11)
		UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x34 (size: 0x0, flags: 0x4, type: 0x11)
		UnityEngine::Vector2 m_TotalMinSize; // 0x34 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 m_TotalPreferredSize; // 0x3c (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 m_TotalFlexibleSize; // 0x44 (size: 0x8, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
