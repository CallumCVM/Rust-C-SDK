#pragma once

#include "..\System\Xml\XPath\XPathNodeType.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class DTMXPathLinkedNode : public ValueType // 0x0
	{
	public:
		int FirstChild; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int Parent; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int PreviousSibling; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int NextSibling; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		int FirstAttribute; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int FirstNamespace; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		System::Xml::XPath::XPathNodeType NodeType; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::UnicodeString* BaseURI; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		bool IsEmptyElement; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::UnicodeString* LocalName; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* NamespaceURI; // 0x48 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Prefix; // 0x50 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Value; // 0x58 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* XmlLang; // 0x60 (size: 0x8, flags: 0x6, type: 0xe)
		int LineNumber; // 0x68 (size: 0x4, flags: 0x6, type: 0x8)
		int LinePosition; // 0x6c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x70
}
