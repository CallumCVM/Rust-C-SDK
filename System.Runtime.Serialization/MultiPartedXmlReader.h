#pragma once

#include "..\System\Xml\XmlReader.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
	class MultiPartedXmlReader : public DummyStateXmlReader // 0x40
	{
	public:
		System::Xml::XmlReader* owner; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* value; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x50
}
