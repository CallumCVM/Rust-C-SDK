#pragma once

#include "..\System\Xml\XmlNameTable.h"
#include "..\Mono\Xml\XPath\DTMXPathDocument.h"
#include "..\Mono\Xml\XPath\DTMXPathLinkedNode.h"
#include "..\Mono\Xml\XPath\DTMXPathAttributeNode.h"
#include "..\Mono\Xml\XPath\DTMXPathNamespaceNode.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Text\StringBuilder.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class DTMXPathNavigator : public XPathNavigator // 0x0
	{
	public:
		System::Xml::XmlNameTable* nameTable; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::XPath::DTMXPathDocument* document; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::XPath::DTMXPathLinkedNode* nodes; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Xml::XPath::DTMXPathAttributeNode* attributes; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Xml::XPath::DTMXPathNamespaceNode* namespaces; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Hashtable* idTable; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* valueBuilder; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		bool currentIsNode; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		bool currentIsAttr; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
		int currentNode; // 0x4c (size: 0x4, flags: 0x1, type: 0x8)
		int currentAttr; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		int currentNs; // 0x54 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x58
}
