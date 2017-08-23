#pragma once

#include "..\System\Xml\XPath\XPathExpression.h"

namespace rust 
{
	class XPathAvtPart : public AvtPart // 0x0
	{
	public:
		System::Xml::XPath::XPathExpression* expr; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
