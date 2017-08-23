#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkCRC : public Object // 0x0
	{
	public:
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,int> m_Scripts; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		bool m_ScriptCRCCheck; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
