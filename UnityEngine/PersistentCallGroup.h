#pragma once

#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace Events
{
	class PersistentCallGroup : public Object // 0x0
	{
	public:
		UnityEngine::List<UnityEngine.Events.PersistentCall>* m_Calls; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
