#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class SecurityAttribute : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _value; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
