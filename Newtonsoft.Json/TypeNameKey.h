#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class TypeNameKey : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* AssemblyName; // 0x10 (size: 0x8, flags: 0x23, type: 0xe)
		UnityEngine::UnicodeString* TypeName; // 0x18 (size: 0x8, flags: 0x23, type: 0xe)
	}; // size = 0x20
}
