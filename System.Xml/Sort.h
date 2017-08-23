#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XPath\XmlDataType.h"
#include "..\System\Xml\XPath\XmlSortOrder.h"
#include "..\System\Xml\XPath\XmlCaseOrder.h"
#include "..\Mono\Xml\Xsl\Operations\XslAvt.h"
#include "..\System\Xml\XPath\XPathExpression.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class Sort : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* lang; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Xml::Xsl::Operations::XslAvt* langAvt; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslAvt* dataTypeAvt; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslAvt* orderAvt; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslAvt* caseOrderAvt; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XPathExpression* expr; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XmlDataType dataType; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::XPath::XmlSortOrder order; // 0x44 (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::XPath::XmlCaseOrder caseOrder; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
