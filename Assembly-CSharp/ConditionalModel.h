#pragma once

#include "ModelConditionTest.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ConditionalModel : public PrefabAttribute // 0x98
	{
	public:
		ModelConditionTest* conditions; // 0x98 (size: 0x8, flags: 0x86, type: 0x1d)
		UnityEngine::GameObject* prefabObject; // 0xa0 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::UnicodeString* conditionalName; // 0xa8 (size: 0x8, flags: 0x86, type: 0xe)
		unsigned int conditionalID; // 0xb0 (size: 0x4, flags: 0x86, type: 0x9)
	}; // size = 0xb8
}
