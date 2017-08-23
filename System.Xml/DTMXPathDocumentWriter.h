#pragma once

#include "..\System\Xml\XmlNameTable.h"
#include "..\Mono\Xml\XPath\DTMXPathLinkedNode.h"
#include "..\Mono\Xml\XPath\DTMXPathAttributeNode.h"
#include "..\Mono\Xml\XPath\DTMXPathNamespaceNode.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Xml\WriteState.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class DTMXPathDocumentWriter : public XmlWriter // 0x18
	{
	public:
		System::Xml::XmlNameTable* nameTable; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::XPath::DTMXPathLinkedNode* nodes; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Xml::XPath::DTMXPathAttributeNode* attributes; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Xml::XPath::DTMXPathNamespaceNode* namespaces; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Hashtable* idTable; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		int* parentStack; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		int nodeCapacity; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		int attributeCapacity; // 0x4c (size: 0x4, flags: 0x1, type: 0x8)
		int nsCapacity; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		int nodeIndex; // 0x54 (size: 0x4, flags: 0x1, type: 0x8)
		int attributeIndex; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		int nsIndex; // 0x5c (size: 0x4, flags: 0x1, type: 0x8)
		int parentStackIndex; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		bool hasAttributes; // 0x64 (size: 0x1, flags: 0x1, type: 0x2)
		bool hasLocalNs; // 0x65 (size: 0x1, flags: 0x1, type: 0x2)
		int attrIndexAtStart; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		int nsIndexAtStart; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		int lastNsInScope; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		int prevSibling; // 0x74 (size: 0x4, flags: 0x1, type: 0x8)
		System::Xml::WriteState state; // 0x78 (size: 0x4, flags: 0x1, type: 0x11)
		bool openNamespace; // 0x7c (size: 0x1, flags: 0x1, type: 0x2)
		bool isClosed; // 0x7d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
