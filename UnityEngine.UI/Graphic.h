#pragma once

#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\RectTransform.h"
#include "..\UnityEngine\CanvasRenderer.h"
#include "..\UnityEngine\Canvas.h"
#include "..\UnityEngine\Events\UnityAction.h"
#include "..\UnityEngine\UI\CoroutineTween\TweenRunner<UnityEngine\UI\CoroutineTween\ColorTween>.h"

namespace UnityEngine
{
	namespace UI
{
	class Graphic : public UIBehaviour // 0x18
	{
	public:
		UnityEngine::Material* m_Material; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::RectTransform* m_RectTransform; // 0x20 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::CanvasRenderer* m_CanvasRender; // 0x28 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::Canvas* m_Canvas; // 0x30 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::Events::UnityAction* m_OnDirtyLayoutCallback; // 0x38 (size: 0x8, flags: 0x84, type: 0x12)
		UnityEngine::Events::UnityAction* m_OnDirtyVertsCallback; // 0x40 (size: 0x8, flags: 0x84, type: 0x12)
		UnityEngine::Events::UnityAction* m_OnDirtyMaterialCallback; // 0x48 (size: 0x8, flags: 0x84, type: 0x12)
		UnityEngine::UI::CoroutineTween::TweenRunner<UnityEngine::UI::CoroutineTween::ColorTween> m_ColorTweenRunner; // 0x50 (size: 0x8, flags: 0xa1, type: 0x15)
		UnityEngine::Color m_Color; // 0x58 (size: 0x10, flags: 0x1, type: 0x11)
		bool m_RaycastTarget; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_VertsDirty; // 0x69 (size: 0x1, flags: 0x81, type: 0x2)
		bool m_MaterialDirty; // 0x6a (size: 0x1, flags: 0x81, type: 0x2)
		bool <useLegacyMeshGeneration>k__BackingField; // 0x6b (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
