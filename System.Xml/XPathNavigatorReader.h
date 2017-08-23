#pragma once

#include "..\System\Xml\XPath\XPathNavigator.h"
#include "..\System\Text\StringBuilder.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class XPathNavigatorReader : public XmlReader // 0x28
	{
	public:
		System::Xml::XPath::XPathNavigator* root; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XPathNavigator* current; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* readStringBuffer; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* innerXmlBuilder; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		bool started; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		bool closed; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
		bool endElement; // 0x4a (size: 0x1, flags: 0x1, type: 0x2)
		bool attributeValueConsumed; // 0x4b (size: 0x1, flags: 0x1, type: 0x2)
		int depth; // 0x4c (size: 0x4, flags: 0x1, type: 0x8)
		int attributeCount; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		bool eof; // 0x54 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
