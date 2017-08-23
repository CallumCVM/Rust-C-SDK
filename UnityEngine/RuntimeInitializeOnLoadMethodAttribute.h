#pragma once

#include "..\UnityEngine\RuntimeInitializeLoadType.h"

namespace UnityEngine
{
	class RuntimeInitializeOnLoadMethodAttribute : public PreserveAttribute // 0x0
	{
	public:
		UnityEngine::RuntimeInitializeLoadType <loadType>k__BackingField; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
