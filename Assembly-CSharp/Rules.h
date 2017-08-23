#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "ServerBrowserList.h"

namespace rust 
{
	class Rules : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* tag; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		ServerBrowserList* serverList; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
