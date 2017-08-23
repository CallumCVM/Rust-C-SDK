#pragma once

#include "..\System\Xml\XPath\XPathNodeIterator.h"

namespace rust 
{
	class XPathNodeIteratorNodeListIterator : public Object // 0x0
	{
	public:
		System::Xml::XPath::XPathNodeIterator* iter; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XPathNodeIterator* source; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
