#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class EffectCategory : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* folder; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::List<UnityEngine::UnicodeString*>* prefabs; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x20
}
