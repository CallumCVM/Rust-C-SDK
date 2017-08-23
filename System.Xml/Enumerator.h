#pragma once

#include "..\System\Xml\IHasXmlChildNode.h"
#include "..\System\Xml\XmlLinkedNode.h"

namespace rust 
{
	class Enumerator : public Object // 0x0
	{
	public:
		System::Xml::IHasXmlChildNode* parent; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlLinkedNode* currentChild; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool passedLastNode; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
