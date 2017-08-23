#pragma once

#include "..\System\Text\StringBuilder.h"
#include "..\System\Xml\XmlReaderBinarySupport.h"
#include "..\System\Xml\XmlReaderSettings.h"

namespace System
{
	namespace Xml
{
	class XmlReader : public Object // 0x0
	{
	public:
		System::Text::StringBuilder* readStringBuffer; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlReaderBinarySupport* binary; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlReaderSettings* settings; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
