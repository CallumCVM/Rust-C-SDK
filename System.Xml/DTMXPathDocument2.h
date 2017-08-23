#pragma once

#include "..\System\Xml\XPath\XPathNavigator.h"
#include "..\System\Xml\XmlNameTable.h"
#include "..\Mono\Xml\XPath\DTMXPathLinkedNode2.h"
#include "..\Mono\Xml\XPath\DTMXPathAttributeNode2.h"
#include "..\Mono\Xml\XPath\DTMXPathNamespaceNode2.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Hashtable.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class DTMXPathDocument2 : public Object // 0x0
	{
	public:
		System::Xml::XPath::XPathNavigator* root; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Xml::XmlNameTable* NameTable; // 0x18 (size: 0x8, flags: 0x23, type: 0x12)
		Mono::Xml::XPath::DTMXPathLinkedNode2* Nodes; // 0x20 (size: 0x8, flags: 0x23, type: 0x1d)
		Mono::Xml::XPath::DTMXPathAttributeNode2* Attributes; // 0x28 (size: 0x8, flags: 0x23, type: 0x1d)
		Mono::Xml::XPath::DTMXPathNamespaceNode2* Namespaces; // 0x30 (size: 0x8, flags: 0x23, type: 0x1d)
		UnityEngine::UnicodeString** AtomicStringPool; // 0x38 (size: 0x8, flags: 0x23, type: 0x1d)
		UnityEngine::UnicodeString** NonAtomicStringPool; // 0x40 (size: 0x8, flags: 0x23, type: 0x1d)
		System::Collections::Hashtable* IdTable; // 0x48 (size: 0x8, flags: 0x23, type: 0x12)
	}; // size = 0x50
}
