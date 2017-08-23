#pragma once

#include "..\System\Xml\XmlReader.h"
#include "..\System\Xml\XmlReaderSettings.h"
#include "..\System\Xml\IXmlLineInfo.h"

namespace Mono
{
	namespace Xml
{
	class XmlFilterReader : public XmlReader // 0x28
	{
	public:
		System::Xml::XmlReader* reader; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlReaderSettings* settings; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::IXmlLineInfo* lineInfo; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
