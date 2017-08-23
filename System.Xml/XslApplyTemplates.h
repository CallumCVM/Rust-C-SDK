#pragma once

#include "..\System\Xml\XPath\XPathExpression.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Collections\ArrayList.h"
#include "..\Mono\Xml\Xsl\XslSortEvaluator.h"

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
	class XslApplyTemplates : public XslCompiledElement // 0x20
	{
	public:
		System::Xml::XPath::XPathExpression* select; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* mode; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* withParams; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::XslSortEvaluator* sortEvaluator; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
