#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\EventSystems\BaseInputModule.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\EventSystems\BaseEventData.h"

namespace UnityEngine
{
	namespace EventSystems
{
	class EventSystem : public UIBehaviour // 0x18
	{
	public:
		UnityEngine::List<UnityEngine.EventSystems.BaseInputModule>* m_SystemInputModules; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::EventSystems::BaseInputModule* m_CurrentInputModule; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* m_FirstSelected; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* m_CurrentSelected; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::EventSystems::BaseEventData* m_DummyData; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool m_sendNavigationEvents; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		int m_DragThreshold; // 0x44 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_Paused; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_SelectionGuard; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
