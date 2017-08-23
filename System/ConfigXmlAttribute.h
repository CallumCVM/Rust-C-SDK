#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ConfigXmlAttribute : public XmlAttribute // 0x48
	{
	public:
		UnityEngine::UnicodeString* fileName; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		int lineNumber; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x58
}
