#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	class ResolveEventArgs : public EventArgs // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_Name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x18
}
