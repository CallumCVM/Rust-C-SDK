#pragma once

#include "..\Mono\Xml\Xsl\XslTemplate.h"
#include "..\Mono\Xml\XPath\Pattern.h"

namespace rust 
{
	class TemplateWithPriority : public Object // 0x0
	{
	public:
		Mono::Xml::Xsl::XslTemplate* Template; // 0x10 (size: 0x8, flags: 0x26, type: 0x12)
		Mono::Xml::XPath::Pattern* Pattern; // 0x18 (size: 0x8, flags: 0x26, type: 0x12)
		double Priority; // 0x20 (size: 0x8, flags: 0x26, type: 0xd)
		int TemplateID; // 0x28 (size: 0x4, flags: 0x26, type: 0x8)
	}; // size = 0x30
}
