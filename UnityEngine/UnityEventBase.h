#pragma once

#include "..\UnityEngine\Events\InvokableCallList.h"
#include "..\UnityEngine\Events\PersistentCallGroup.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace Events
{
	class UnityEventBase : public Object // 0x0
	{
	public:
		UnityEngine::Events::InvokableCallList* m_Calls; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Events::PersistentCallGroup* m_PersistentCalls; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_TypeName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		bool m_CallsDirty; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
