#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ProceduralComponent : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* Description; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		Realm Mode; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
