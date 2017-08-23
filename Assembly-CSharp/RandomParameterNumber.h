#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class RandomParameterNumber : public StateMachineBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* parameterName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		int min; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int max; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
