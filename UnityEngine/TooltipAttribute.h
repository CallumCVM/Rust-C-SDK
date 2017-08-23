#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class TooltipAttribute : public PropertyAttribute // 0x18
	{
	public:
		UnityEngine::UnicodeString* tooltip; // 0x18 (size: 0x8, flags: 0x26, type: 0xe)
	}; // size = 0x20
}
