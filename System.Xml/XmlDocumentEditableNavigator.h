#pragma once

#include "..\Mono\Xml\XPath\XPathEditableDocument.h"
#include "..\System\Xml\XPath\XPathNavigator.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class XmlDocumentEditableNavigator : public XPathNavigator // 0x0
	{
	public:
		Mono::Xml::XPath::XPathEditableDocument* document; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XPathNavigator* navigator; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
