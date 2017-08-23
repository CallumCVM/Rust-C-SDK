#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	class ArgumentException : public SystemException // 0x60
	{
	public:
		UnityEngine::UnicodeString* param_name; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x68
}
