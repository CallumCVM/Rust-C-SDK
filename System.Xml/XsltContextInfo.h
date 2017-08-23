#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class XsltContextInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* ElementPrefix; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* ElementNamespace; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		bool IsCData; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		bool PreserveWhitespace; // 0x21 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
