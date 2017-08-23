#pragma once

#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace EventSystems
{
	class EventTrigger : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<UnityEngine.EventSystems.EventTrigger.Entry>* m_Delegates; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.EventSystems.EventTrigger.Entry>* delegates; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x28
}
