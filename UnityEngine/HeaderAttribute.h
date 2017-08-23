#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class HeaderAttribute : public PropertyAttribute // 0x18
	{
	public:
		UnityEngine::UnicodeString* header; // 0x18 (size: 0x8, flags: 0x26, type: 0xe)
	}; // size = 0x20
}
