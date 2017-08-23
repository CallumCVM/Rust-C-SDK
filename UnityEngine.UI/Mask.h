#pragma once

#include "..\UnityEngine\RectTransform.h"
#include "..\UnityEngine\UI\Graphic.h"
#include "..\UnityEngine\Material.h"

namespace UnityEngine
{
	namespace UI
{
	class Mask : public UIBehaviour // 0x18
	{
	public:
		UnityEngine::RectTransform* m_RectTransform; // 0x18 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::UI::Graphic* m_Graphic; // 0x20 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::Material* m_MaskMaterial; // 0x28 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::Material* m_UnmaskMaterial; // 0x30 (size: 0x8, flags: 0x81, type: 0x12)
		bool m_ShowMaskGraphic; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
