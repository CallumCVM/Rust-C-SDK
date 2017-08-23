#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class HelpURLAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_Url; // 0x10 (size: 0x8, flags: 0x23, type: 0xe)
	}; // size = 0x18
}
