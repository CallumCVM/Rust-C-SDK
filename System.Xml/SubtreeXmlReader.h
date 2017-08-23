#pragma once

#include "..\System\Xml\XmlReader.h"
#include "..\System\Xml\IXmlLineInfo.h"
#include "..\System\Xml\IXmlNamespaceResolver.h"

namespace Mono
{
	namespace Xml
{
	class SubtreeXmlReader : public XmlReader // 0x28
	{
	public:
		System::Xml::XmlReader* Reader; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::IXmlLineInfo* li; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::IXmlNamespaceResolver* nsResolver; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		int startDepth; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		bool eof; // 0x44 (size: 0x1, flags: 0x1, type: 0x2)
		bool initial; // 0x45 (size: 0x1, flags: 0x1, type: 0x2)
		bool read; // 0x46 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
