#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class WebCamDevice : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_Name; // 0x10 (size: 0x8, flags: 0x3, type: 0xe)
		int m_Flags; // 0x18 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x20
}
