#pragma once

#include "..\System\Xml\XmlDocument.h"
#include "..\System\Xml\XmlNode.h"
#include "..\System\Xml\XmlNodeListChildren.h"

namespace System
{
	namespace Xml
{
	class XmlNode : public Object // 0x0
	{
	public:
		System::Xml::XmlDocument* ownerDocument; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNode* parentNode; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNodeListChildren* childNodes; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
