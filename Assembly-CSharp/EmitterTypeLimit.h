#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class EmitterTypeLimit : public Object // 0x0
	{
	public:
		UnityEngine::List<AmbienceDefinitionList>* ambience; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		int limit; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int active; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
