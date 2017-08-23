#pragma once

#include "..\Mono\Xml\Xsl\Operations\XslNumberingLevel.h"
#include "..\Mono\Xml\XPath\Pattern.h"
#include "..\System\Xml\XPath\XPathExpression.h"
#include "..\Mono\Xml\Xsl\Operations\XslAvt.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
{
{
			namespace Operations
{
	class XslNumber : public XslCompiledElement // 0x20
	{
	public:
		Mono::Xml::XPath::Pattern* count; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::XPath::Pattern* from; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XPathExpression* value; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslAvt* format; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslAvt* lang; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslAvt* letterValue; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslAvt* groupingSeparator; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslAvt* groupingSize; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslNumberingLevel level; // 0x60 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x68
}
