#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\EventSystems\AxisEventData.h"
#include "..\UnityEngine\EventSystems\EventSystem.h"
#include "..\UnityEngine\EventSystems\BaseEventData.h"
#include "..\UnityEngine\EventSystems\BaseInput.h"

namespace UnityEngine
{
	namespace EventSystems
{
	class BaseInputModule : public UIBehaviour // 0x18
	{
	public:
		UnityEngine::List<UnityEngine.EventSystems.RaycastResult>* m_RaycastResultCache; // 0x18 (size: 0x8, flags: 0x84, type: 0x15)
		UnityEngine::EventSystems::AxisEventData* m_AxisEventData; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::EventSystems::EventSystem* m_EventSystem; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::EventSystems::BaseEventData* m_BaseEventData; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::EventSystems::BaseInput* m_InputOverride; // 0x38 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::EventSystems::BaseInput* m_DefaultInput; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
