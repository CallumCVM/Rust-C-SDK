#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Xml2\XmlTextReader.h"
#include "..\System\Char.h"
#include "..\System\Xml\XmlNodeType.h"

namespace rust 
{
	class XmlTokenInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* valueCache; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Xml2::XmlTextReader* Reader; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::UnicodeString* Name; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* LocalName; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Prefix; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* NamespaceURI; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		bool IsEmptyElement; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
		System::Char QuoteChar; // 0x42 (size: 0x2, flags: 0x6, type: 0x3)
		int LineNumber; // 0x44 (size: 0x4, flags: 0x6, type: 0x8)
		int LinePosition; // 0x48 (size: 0x4, flags: 0x6, type: 0x8)
		int ValueBufferStart; // 0x4c (size: 0x4, flags: 0x6, type: 0x8)
		int ValueBufferEnd; // 0x50 (size: 0x4, flags: 0x6, type: 0x8)
		System::Xml::XmlNodeType NodeType; // 0x54 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x58
}
