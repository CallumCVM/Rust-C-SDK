#pragma once

#include "..\System\Xml\XPath\XPathExpression.h"
#include "..\Mono\Xml\Xsl\Operations\XslOperation.h"
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
	class XslForEach : public XslCompiledElement // 0x20
	{
	public:
		System::Xml::XPath::XPathExpression* select; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslOperation* children; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::XslSortEvaluator* sortEvaluator; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
