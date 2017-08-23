#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class StackFrame : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <filename>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <function>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <module>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <context_line>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		int <colno>k__BackingField; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int <lineno>k__BackingField; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		bool <in_app>k__BackingField; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
