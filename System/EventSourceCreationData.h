#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Diagnostics
{
	class EventSourceCreationData : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _source; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _logName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _machineName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _messageResourceFile; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _parameterResourceFile; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _categoryResourceFile; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		int _categoryCount; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x48
}
