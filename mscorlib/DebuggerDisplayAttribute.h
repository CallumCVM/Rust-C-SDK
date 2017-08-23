#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"

namespace System
{
	namespace Diagnostics
{
	class DebuggerDisplayAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* value; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* type; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* target_type_name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* target_type; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
