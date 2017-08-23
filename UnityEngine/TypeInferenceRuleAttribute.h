#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngineInternal
{
	class TypeInferenceRuleAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* _rule; // 0x10 (size: 0x8, flags: 0x21, type: 0xe)
	}; // size = 0x18
}