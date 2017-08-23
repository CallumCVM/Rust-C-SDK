#pragma once

#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\UI\RectMask2D.h"
#include "..\UnityEngine\UI\MaskableGraphic\CullStateChangedEvent.h"
#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	namespace UI
{
	class MaskableGraphic : public Graphic // 0x70
	{
	public:
		UnityEngine::Material* m_MaskMaterial; // 0x70 (size: 0x8, flags: 0x84, type: 0x12)
		UnityEngine::UI::RectMask2D* m_ParentMask; // 0x78 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::UI::MaskableGraphic::CullStateChangedEvent* m_OnCullStateChanged; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector3* m_Corners; // 0x88 (size: 0x8, flags: 0x21, type: 0x1d)
		bool m_ShouldRecalculateStencil; // 0x90 (size: 0x1, flags: 0x84, type: 0x2)
		bool m_Maskable; // 0x91 (size: 0x1, flags: 0x81, type: 0x2)
		bool m_IncludeForMasking; // 0x92 (size: 0x1, flags: 0x84, type: 0x2)
		bool m_ShouldRecalculate; // 0x93 (size: 0x1, flags: 0x84, type: 0x2)
		int m_StencilValue; // 0x94 (size: 0x4, flags: 0x84, type: 0x8)
	}; // size = 0x98
}
