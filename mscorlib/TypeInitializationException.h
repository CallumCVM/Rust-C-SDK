#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	class TypeInitializationException : public SystemException // 0x60
	{
	public:
		UnityEngine::UnicodeString* type_name; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x68
}
