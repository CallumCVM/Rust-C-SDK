#pragma once

#include "..\System\Xml\XmlElement.h"
#include "..\System\Xml\XmlDocument.h"

namespace System
{
	namespace Xml
{
	class XmlAttributeCollection : public XmlNamedNodeMap // 0x28
	{
	public:
		System::Xml::XmlElement* ownerElement; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlDocument* ownerDocument; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
