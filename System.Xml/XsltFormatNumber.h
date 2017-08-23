#pragma once

#include "..\System\Xml\XPath\Expression.h"
#include "..\System\Xml\Xsl\IStaticXsltContext.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XsltFormatNumber : public XPathFunction // 0x0
	{
	public:
		System::Xml::XPath::Expression* arg0; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::Expression* arg1; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::Expression* arg2; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Xsl::IStaticXsltContext* ctx; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
