#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class AddComponentMenu : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_AddComponentMenu; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		int m_Ordering; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
