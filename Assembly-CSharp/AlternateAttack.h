#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class AlternateAttack : public StateMachineBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString** targetTransitions; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		bool random; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		bool dontIncrement; // 0x21 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
