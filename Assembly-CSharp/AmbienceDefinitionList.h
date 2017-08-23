#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class AmbienceDefinitionList : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::List<AmbienceDefinition>* defs; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x20
}
