#pragma once

#include "..\System\Xml\XmlQualifiedName.h"
#include "..\Mono\Xml\XPath\Pattern.h"
#include "..\System\Collections\ArrayList.h"
#include "..\Mono\Xml\Xsl\Operations\XslOperation.h"
#include "..\Mono\Xml\Xsl\XslStylesheet.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XslTemplate : public Object // 0x0
	{
	public:
		System::Xml::XmlQualifiedName* name; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::XPath::Pattern* match; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* mode; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* parameters; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslOperation* content; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::XslStylesheet* style; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		double priority; // 0x40 (size: 0x8, flags: 0x1, type: 0xd)
		int Id; // 0x48 (size: 0x4, flags: 0x26, type: 0x8)
		int stackSize; // 0x4c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x50
}
