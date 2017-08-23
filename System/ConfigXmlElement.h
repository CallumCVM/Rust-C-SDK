#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ConfigXmlElement : public XmlElement // 0x58
	{
	public:
		UnityEngine::UnicodeString* fileName; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		int lineNumber; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x68
}
