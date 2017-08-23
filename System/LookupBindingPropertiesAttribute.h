#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace ComponentModel
{
	class LookupBindingPropertiesAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* data_source; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* display_member; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* value_member; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* lookup_member; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
