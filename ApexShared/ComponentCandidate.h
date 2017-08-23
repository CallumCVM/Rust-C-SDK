#pragma once

#include "..\UnityEngine\MonoBehaviour.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ComponentCandidate : public Object // 0x0
	{
	public:
		UnityEngine::MonoBehaviour* component; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* categoryName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x20
}
