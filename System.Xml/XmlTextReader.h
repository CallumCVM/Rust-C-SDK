#pragma once

#include "..\System\Xml\XmlTextReader.h"
#include "..\Mono\Xml2\XmlTextReader.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
	class XmlTextReader : public XmlReader // 0x28
	{
	public:
		System::Xml::XmlTextReader* entity; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml2::XmlTextReader* source; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System.Collections.Generic.Stack<UnityEngine::UnicodeString*> entityNameStack; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		bool entityInsideAttribute; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		bool insideAttribute; // 0x41 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
