#pragma once

#include "..\System\Xml\XmlReader.h"
#include "..\System\Xml\XmlReaderBinarySupport\CharGetter.h"
#include "..\System\Xml\XmlReaderBinarySupport\CommandState.h"
#include "..\System\Text\StringBuilder.h"

namespace System
{
	namespace Xml
{
	class XmlReaderBinarySupport : public Object // 0x0
	{
	public:
		System::Xml::XmlReader* reader; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlReaderBinarySupport::CharGetter* getter; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* base64Cache; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Text::StringBuilder* textCache; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int base64CacheStartsAt; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		System::Xml::XmlReaderBinarySupport::CommandState state; // 0x34 (size: 0x4, flags: 0x1, type: 0x11)
		bool hasCache; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		bool dontReset; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
