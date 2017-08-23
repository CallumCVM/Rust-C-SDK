#pragma once

#include "..\System\Xml\XmlDictionary.h"
#include "..\System\Xml\XmlReader.h"
#include "..\System\Xml\XmlDictionaryReader.h"
#include "..\System\Xml\IXmlLineInfo.h"
#include "..\System\Xml\OnXmlDictionaryReaderClose.h"

namespace System
{
	namespace Xml
{
	class XmlSimpleDictionaryReader : public XmlDictionaryReader // 0x38
	{
	public:
		System::Xml::XmlDictionary* dict; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlReader* reader; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlDictionaryReader* as_dict_reader; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::IXmlLineInfo* as_line_info; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::OnXmlDictionaryReaderClose* onClose; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x60
}
