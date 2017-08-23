#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ConfigXmlCDataSection : public XmlCDataSection // 0x38
	{
	public:
		UnityEngine::UnicodeString* fileName; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		int lineNumber; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x48
}
