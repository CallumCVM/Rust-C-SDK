#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class DTMXPathAttributeNode : public ValueType // 0x0
	{
	public:
		int OwnerElement; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int NextAttribute; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::UnicodeString* LocalName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* NamespaceURI; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Prefix; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Value; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		int LineNumber; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		int LinePosition; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x40
}
