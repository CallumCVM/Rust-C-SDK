#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class SwapRPG : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* rpgModels; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* curAmmoType; // 0x20 (size: 0x8, flags: 0x81, type: 0xe)
	}; // size = 0x28
}
