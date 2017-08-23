#pragma once

#include "..\System\Xml\XmlReader.h"
#include "..\System\Xml\XmlNodeReaderImpl.h"

namespace System
{
	namespace Xml
{
	class XmlNodeReader : public XmlReader // 0x28
	{
	public:
		System::Xml::XmlReader* entity; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNodeReaderImpl* source; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool entityInsideAttribute; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		bool insideAttribute; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
