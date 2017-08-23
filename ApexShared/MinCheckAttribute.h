#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Apex
{
	namespace Utilities
{
	class MinCheckAttribute : public PropertyAttribute // 0x18
	{
	public:
		UnityEngine::UnicodeString* <label>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <tooltip>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		float <min>k__BackingField; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x30
}
