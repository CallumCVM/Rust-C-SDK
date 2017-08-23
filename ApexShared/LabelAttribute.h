#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Apex
{
	namespace Utilities
{
	class LabelAttribute : public PropertyAttribute // 0x18
	{
	public:
		UnityEngine::UnicodeString* <label>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <tooltip>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
