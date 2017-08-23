#pragma once

#include "..\System\Xml\XmlTextReader.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Configuration
{
	class ConfigXmlDocument : public XmlDocument // 0xb0
	{
	public:
		System::Xml::XmlTextReader* reader; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* fileName; // 0xb8 (size: 0x8, flags: 0x1, type: 0xe)
		int lineNumber; // 0xc0 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xc8
}
