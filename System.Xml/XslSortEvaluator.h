#pragma once

#include "..\System\Xml\XPath\XPathExpression.h"
#include "..\Mono\Xml\Xsl\Sort.h"
#include "..\System\Xml\XPath\XPathSorter.h"
#include "..\System\Xml\XPath\XPathSorters.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XslSortEvaluator : public Object // 0x0
	{
	public:
		System::Xml::XPath::XPathExpression* select; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Sort* sorterTemplates; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Xml::XPath::XPathSorter* sorters; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Xml::XPath::XPathSorters* sortRunner; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool isSorterContextDependent; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
