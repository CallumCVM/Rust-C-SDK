#pragma once

#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace Events
{
	class InvokableCallList : public Object // 0x0
	{
	public:
		UnityEngine::List<UnityEngine.Events.BaseInvokableCall>* m_PersistentCalls; // 0x10 (size: 0x8, flags: 0x21, type: 0x15)
		UnityEngine::List<UnityEngine.Events.BaseInvokableCall>* m_RuntimeCalls; // 0x18 (size: 0x8, flags: 0x21, type: 0x15)
		UnityEngine::List<UnityEngine.Events.BaseInvokableCall>* m_ExecutingCalls; // 0x20 (size: 0x8, flags: 0x21, type: 0x15)
		bool m_NeedsUpdate; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
