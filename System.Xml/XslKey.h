#pragma once

#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Xml\XPath\CompiledExpression.h"
#include "..\Mono\Xml\XPath\Pattern.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XslKey : public Object // 0x0
	{
	public:
		System::Xml::XmlQualifiedName* name; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::CompiledExpression* useExpr; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::XPath::Pattern* matchPattern; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
