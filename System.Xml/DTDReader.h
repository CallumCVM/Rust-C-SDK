#pragma once

#include "..\System\Xml\XmlParserInput.h"
#include "..\System\Collections\Stack.h"
#include "..\System\Char.h"
#include "..\System\Text\StringBuilder.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Xml\DTDObjectModel.h"

namespace System
{
	namespace Xml
{
	class DTDReader : public Object // 0x0
	{
	public:
		System::Xml::XmlParserInput* currentInput; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* parserInputStack; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Char* nameBuffer; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Text::StringBuilder* valueBuffer; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* cachedPublicId; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* cachedSystemId; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Xml::DTDObjectModel* DTD; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		int nameLength; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		int nameCapacity; // 0x4c (size: 0x4, flags: 0x1, type: 0x8)
		int currentLinkedNodeLineNumber; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		int currentLinkedNodeLinePosition; // 0x54 (size: 0x4, flags: 0x1, type: 0x8)
		int dtdIncludeSect; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		bool normalization; // 0x5c (size: 0x1, flags: 0x1, type: 0x2)
		bool processingInternalSubset; // 0x5d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x60
}
