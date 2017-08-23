#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class DevEnableDisable : public DevControlsTab // 0x18
	{
	public:
		UnityEngine::GameObject* Objects; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* CookieName; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* TabName; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x30
}
