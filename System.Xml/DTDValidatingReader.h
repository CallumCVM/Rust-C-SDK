#pragma once

#include "..\Mono\Xml\EntityResolvingXmlReader.h"
#include "..\System\Xml\XmlTextReader.h"
#include "..\System\Xml\XmlValidatingReader.h"
#include "..\Mono\Xml\DTDObjectModel.h"
#include "..\System\Xml\XmlResolver.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Xml\DTDValidatingReader\AttributeSlot.h"
#include "..\System\Collections\Stack.h"
#include "..\Mono\Xml\DTDAutomata.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\XmlNamespaceManager.h"
#include "..\System\Text\StringBuilder.h"
#include "..\System\Char.h"

namespace Mono
{
	namespace Xml
{
	class DTDValidatingReader : public XmlReader // 0x28
	{
	public:
		Mono::Xml::EntityResolvingXmlReader* reader; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlTextReader* sourceTextReader; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlValidatingReader* validatingReader; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDObjectModel* dtd; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlResolver* resolver; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* currentElement; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Xml::DTDValidatingReader::AttributeSlot* attributes; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Stack* elementStack; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* automataStack; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDAutomata* currentAutomata; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDAutomata* previousAutomata; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* idList; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* missingIDReferences; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNamespaceManager* nsmgr; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* currentTextValue; // 0x98 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* constructingTextValue; // 0xa0 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::Stack* attributeValueEntityStack; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* valueBuilder; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Char* whitespaceChars; // 0xb8 (size: 0x8, flags: 0x1, type: 0x1d)
		int attributeCount; // 0xc0 (size: 0x4, flags: 0x1, type: 0x8)
		int currentAttribute; // 0xc4 (size: 0x4, flags: 0x1, type: 0x8)
		bool consumedAttribute; // 0xc8 (size: 0x1, flags: 0x1, type: 0x2)
		bool popScope; // 0xc9 (size: 0x1, flags: 0x1, type: 0x2)
		bool isStandalone; // 0xca (size: 0x1, flags: 0x1, type: 0x2)
		bool shouldResetCurrentTextValue; // 0xcb (size: 0x1, flags: 0x1, type: 0x2)
		bool isSignificantWhitespace; // 0xcc (size: 0x1, flags: 0x1, type: 0x2)
		bool isWhitespace; // 0xcd (size: 0x1, flags: 0x1, type: 0x2)
		bool isText; // 0xce (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xd0
}
