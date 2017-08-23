#pragma once

#include "..\UnityEngine\UI\CanvasScaler\ScaleMode.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\UI\CanvasScaler\ScreenMatchMode.h"
#include "..\UnityEngine\UI\CanvasScaler\Unit.h"
#include "..\UnityEngine\Canvas.h"

namespace UnityEngine
{
	namespace UI
{
	class CanvasScaler : public UIBehaviour // 0x18
	{
	public:
		UnityEngine::Canvas* m_Canvas; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::CanvasScaler::ScaleMode m_UiScaleMode; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
		float m_ReferencePixelsPerUnit; // 0x24 (size: 0x4, flags: 0x4, type: 0xc)
		float m_ScaleFactor; // 0x28 (size: 0x4, flags: 0x4, type: 0xc)
		UnityEngine::Vector2 m_ReferenceResolution; // 0x2c (size: 0x8, flags: 0x4, type: 0x11)
		UnityEngine::UI::CanvasScaler::ScreenMatchMode m_ScreenMatchMode; // 0x34 (size: 0x4, flags: 0x4, type: 0x11)
		float m_MatchWidthOrHeight; // 0x38 (size: 0x4, flags: 0x4, type: 0xc)
		UnityEngine::UI::CanvasScaler::Unit m_PhysicalUnit; // 0x3c (size: 0x4, flags: 0x4, type: 0x11)
		float m_FallbackScreenDPI; // 0x40 (size: 0x4, flags: 0x4, type: 0xc)
		float m_DefaultSpriteDPI; // 0x44 (size: 0x4, flags: 0x4, type: 0xc)
		float m_DynamicPixelsPerUnit; // 0x48 (size: 0x4, flags: 0x4, type: 0xc)
		float m_PrevScaleFactor; // 0x4c (size: 0x4, flags: 0x81, type: 0xc)
		float m_PrevReferencePixelsPerUnit; // 0x50 (size: 0x4, flags: 0x81, type: 0xc)
	}; // size = 0x58
}
