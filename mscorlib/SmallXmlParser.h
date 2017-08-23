#pragma once

#include "..\Mono\Xml\SmallXmlParser\IContentHandler.h"
#include "..\System\IO\TextReader.h"
#include "..\System\Collections\Stack.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Text\StringBuilder.h"
#include "..\System\Char.h"
#include "..\Mono\Xml\SmallXmlParser\AttrListImpl.h"

namespace Mono
{
	namespace Xml
{
	class SmallXmlParser : public Object // 0x0
	{
	public:
		Mono::Xml::SmallXmlParser::IContentHandler* handler; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::TextReader* reader; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* elementNames; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* xmlSpaces; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* xmlSpace; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Text::StringBuilder* buffer; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Char* nameBuffer; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		bool isWhitespace; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		Mono::Xml::SmallXmlParser::AttrListImpl* attributes; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		int line; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		int column; // 0x5c (size: 0x4, flags: 0x1, type: 0x8)
		bool resetColumn; // 0x60 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x68
}
