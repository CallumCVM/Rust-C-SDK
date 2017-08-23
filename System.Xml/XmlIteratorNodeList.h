#pragma once

#include "..\System\Xml\XPath\XPathNodeIterator.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Xml
{
	class XmlIteratorNodeList : public XmlNodeList // 0x0
	{
	public:
		System::Xml::XPath::XPathNodeIterator* source; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XPathNodeIterator* iterator; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* list; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool finished; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
