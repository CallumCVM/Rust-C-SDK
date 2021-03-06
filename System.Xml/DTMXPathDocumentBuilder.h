#pragma once

#include "..\System\Xml\XmlReader.h"
#include "..\System\Xml\XmlValidatingReader.h"
#include "..\System\Xml\XmlSpace.h"
#include "..\System\Xml\XmlNameTable.h"
#include "..\System\Xml\IXmlLineInfo.h"
#include "..\Mono\Xml\XPath\DTMXPathLinkedNode.h"
#include "..\Mono\Xml\XPath\DTMXPathAttributeNode.h"
#include "..\Mono\Xml\XPath\DTMXPathNamespaceNode.h"
#include "..\System\Collections\Hashtable.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class DTMXPathDocumentBuilder : public Object // 0x0
	{
	public:
		System::Xml::XmlReader* xmlReader; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlValidatingReader* validatingReader; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNameTable* nameTable; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::IXmlLineInfo* lineInfo; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::XPath::DTMXPathLinkedNode* nodes; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Xml::XPath::DTMXPathAttributeNode* attributes; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Xml::XPath::DTMXPathNamespaceNode* namespaces; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Hashtable* idTable; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		int* parentStack; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Xml::XmlSpace xmlSpace; // 0x58 (size: 0x4, flags: 0x1, type: 0x11)
		int nodeCapacity; // 0x5c (size: 0x4, flags: 0x1, type: 0x8)
		int attributeCapacity; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		int nsCapacity; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		int nodeIndex; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		int attributeIndex; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		int nsIndex; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		bool hasAttributes; // 0x74 (size: 0x1, flags: 0x1, type: 0x2)
		bool hasLocalNs; // 0x75 (size: 0x1, flags: 0x1, type: 0x2)
		int attrIndexAtStart; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
		int nsIndexAtStart; // 0x7c (size: 0x4, flags: 0x1, type: 0x8)
		int lastNsInScope; // 0x80 (size: 0x4, flags: 0x1, type: 0x8)
		bool skipRead; // 0x84 (size: 0x1, flags: 0x1, type: 0x2)
		int parentStackIndex; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x90
}
