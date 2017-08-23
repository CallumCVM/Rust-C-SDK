#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSchemaDatatype.h"
#include "..\System\Collections\ArrayList.h"
#include "..\Mono\Xml\DTDAttributeOccurenceType.h"

namespace Mono
{
	namespace Xml
{
	class DTDAttributeDefinition : public DTDNode // 0x30
	{
	public:
		UnityEngine::UnicodeString* name; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Schema::XmlSchemaDatatype* datatype; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* enumeratedLiterals; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* unresolvedDefault; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::ArrayList* enumeratedNotations; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* resolvedDefaultValue; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* resolvedNormalizedDefaultValue; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Xml::DTDAttributeOccurenceType occurenceType; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x70
}
