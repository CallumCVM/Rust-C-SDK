#pragma once

#include "..\System\Xml\XmlDictionary.h"

namespace System
{
	namespace Xml
{
	class XmlBinaryReaderSession : public Object // 0x0
	{
	public:
		System::Xml::XmlDictionary* dic; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System.Collections.Generic.Dictionary<int,System.Xml.XmlDictionaryString> store; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
