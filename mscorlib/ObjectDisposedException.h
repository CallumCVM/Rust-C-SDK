#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	class ObjectDisposedException : public InvalidOperationException // 0x60
	{
	public:
		UnityEngine::UnicodeString* obj_name; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* msg; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x70
}
