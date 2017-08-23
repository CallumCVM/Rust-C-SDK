#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\HumanLimit.h"

namespace UnityEngine
{
	class HumanBone : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_BoneName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_HumanName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::HumanLimit limit; // 0x20 (size: 0x2c, flags: 0x6, type: 0x11)
	}; // size = 0x50
}
