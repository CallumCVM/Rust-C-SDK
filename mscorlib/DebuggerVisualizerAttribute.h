#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"

namespace System
{
	namespace Diagnostics
{
	class DebuggerVisualizerAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* description; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* visualizerSourceName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* visualizerName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* targetTypeName; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* target; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
