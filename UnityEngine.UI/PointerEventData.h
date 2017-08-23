#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\EventSystems\RaycastResult.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\EventSystems\PointerEventData\InputButton.h"

namespace UnityEngine
{
	namespace EventSystems
{
	class PointerEventData : public BaseEventData // 0x20
	{
	public:
		UnityEngine::GameObject* <pointerEnter>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* m_PointerPress; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* <lastPress>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* <rawPointerPress>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* <pointerDrag>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::EventSystems::RaycastResult <pointerCurrentRaycast>k__BackingField; // 0x48 (size: 0x48, flags: 0x1, type: 0x11)
		UnityEngine::EventSystems::RaycastResult <pointerPressRaycast>k__BackingField; // 0x90 (size: 0x48, flags: 0x1, type: 0x11)
		UnityEngine::List<UnityEngine.GameObject>* hovered; // 0xd8 (size: 0x8, flags: 0x6, type: 0x15)
		bool <eligibleForClick>k__BackingField; // 0xe0 (size: 0x1, flags: 0x1, type: 0x2)
		int <pointerId>k__BackingField; // 0xe4 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Vector2 <position>k__BackingField; // 0xe8 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 <delta>k__BackingField; // 0xf0 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 <pressPosition>k__BackingField; // 0xf8 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 <worldPosition>k__BackingField; // 0x100 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 <worldNormal>k__BackingField; // 0x10c (size: 0xc, flags: 0x1, type: 0x11)
		float <clickTime>k__BackingField; // 0x118 (size: 0x4, flags: 0x1, type: 0xc)
		int <clickCount>k__BackingField; // 0x11c (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Vector2 <scrollDelta>k__BackingField; // 0x120 (size: 0x8, flags: 0x1, type: 0x11)
		bool <useDragThreshold>k__BackingField; // 0x128 (size: 0x1, flags: 0x1, type: 0x2)
		bool <dragging>k__BackingField; // 0x129 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::EventSystems::PointerEventData::InputButton <button>k__BackingField; // 0x12c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x130
}
