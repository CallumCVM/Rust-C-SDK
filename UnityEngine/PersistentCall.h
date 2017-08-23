#pragma once

#include "..\UnityEngine\Object.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Events\PersistentListenerMode.h"
#include "..\UnityEngine\Events\ArgumentCache.h"
#include "..\UnityEngine\Events\UnityEventCallState.h"

namespace UnityEngine
{
	namespace Events
{
	class PersistentCall : public Object // 0x0
	{
	public:
		UnityEngine::Object* m_Target; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_MethodName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::Events::ArgumentCache* m_Arguments; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Events::PersistentListenerMode m_Mode; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::Events::UnityEventCallState m_CallState; // 0x2c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
