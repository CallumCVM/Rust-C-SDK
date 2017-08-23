#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ConfigXmlTextReader : public XmlTextReader // 0x48
	{
	public:
		UnityEngine::UnicodeString* fileName; // 0x48 (size: 0x8, flags: 0x21, type: 0xe)
	}; // size = 0x50
}
