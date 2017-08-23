#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlNameTable.h"
#include "..\System\Xml\ReadState.h"

namespace System
{
	namespace Xml
{
	class DummyStateXmlReader : public XmlReader // 0x28
	{
	public:
		UnityEngine::UnicodeString* base_uri; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlNameTable* name_table; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::ReadState read_state; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
