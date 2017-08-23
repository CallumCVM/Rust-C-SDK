#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ProtectionProperties : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::UnicodeString* comments; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		float* amounts; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		float density; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
