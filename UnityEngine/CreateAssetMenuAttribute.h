#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class CreateAssetMenuAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* <menuName>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <fileName>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		int <order>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
