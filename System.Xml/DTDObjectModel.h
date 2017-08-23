#pragma once

#include "..\Mono\Xml\DTDAutomataFactory.h"
#include "..\Mono\Xml\DTDElementAutomata.h"
#include "..\Mono\Xml\DTDEmptyAutomata.h"
#include "..\Mono\Xml\DTDAnyAutomata.h"
#include "..\Mono\Xml\DTDInvalidAutomata.h"
#include "..\Mono\Xml\DTDElementDeclarationCollection.h"
#include "..\Mono\Xml\DTDAttListDeclarationCollection.h"
#include "..\Mono\Xml\DTDParameterEntityDeclarationCollection.h"
#include "..\Mono\Xml\DTDEntityDeclarationCollection.h"
#include "..\Mono\Xml\DTDNotationDeclarationCollection.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\XmlResolver.h"
#include "..\System\Xml\XmlNameTable.h"
#include "..\System\Collections\Hashtable.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Xml
{
	class DTDObjectModel : public Object // 0x0
	{
	public:
		Mono::Xml::DTDAutomataFactory* factory; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDElementAutomata* rootAutomata; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDEmptyAutomata* emptyAutomata; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDAnyAutomata* anyAutomata; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDInvalidAutomata* invalidAutomata; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDElementDeclarationCollection* elementDecls; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDAttListDeclarationCollection* attListDecls; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDParameterEntityDeclarationCollection* peDecls; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDEntityDeclarationCollection* entityDecls; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDNotationDeclarationCollection* notationDecls; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* validationErrors; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlResolver* resolver; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNameTable* nameTable; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* externalResources; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* baseURI; // 0x80 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* name; // 0x88 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* publicId; // 0x90 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* systemId; // 0x98 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* intSubset; // 0xa0 (size: 0x8, flags: 0x1, type: 0xe)
		bool intSubsetHasPERef; // 0xa8 (size: 0x1, flags: 0x1, type: 0x2)
		bool isStandalone; // 0xa9 (size: 0x1, flags: 0x1, type: 0x2)
		int lineNumber; // 0xac (size: 0x4, flags: 0x1, type: 0x8)
		int linePosition; // 0xb0 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xb8
}
