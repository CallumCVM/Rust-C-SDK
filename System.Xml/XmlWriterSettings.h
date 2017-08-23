#pragma once

#include "..\System\Xml\ConformanceLevel.h"
#include "..\System\Text\Encoding.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\NewLineHandling.h"
#include "..\System\Xml\XmlOutputMethod.h"
#include "..\System\Xml\NamespaceHandling.h"

namespace System
{
	namespace Xml
{
	class XmlWriterSettings : public Object // 0x0
	{
	public:
		System::Text::Encoding* encoding; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* indentChars; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* newLineChars; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		bool checkCharacters; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool closeOutput; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::ConformanceLevel conformance; // 0x2c (size: 0x4, flags: 0x1, type: 0x11)
		bool indent; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool newLineOnAttributes; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::NewLineHandling newLineHandling; // 0x34 (size: 0x4, flags: 0x1, type: 0x11)
		bool omitXmlDeclaration; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::XmlOutputMethod outputMethod; // 0x3c (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::NamespaceHandling <NamespaceHandling>k__BackingField; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
