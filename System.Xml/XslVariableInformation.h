#pragma once

#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Xml\XPath\XPathExpression.h"
#include "..\Mono\Xml\Xsl\Operations\XslOperation.h"

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
	class XslVariableInformation : public Object // 0x0
	{
	public:
		System::Xml::XmlQualifiedName* name; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XPathExpression* select; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslOperation* content; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
