#pragma once

#include "..\System\Xml\ConformanceLevel.h"
#include "..\System\Xml\XmlNameTable.h"
#include "..\System\Xml\Schema\XmlSchemaSet.h"
#include "..\System\Xml\Schema\XmlSchemaValidationFlags.h"
#include "..\System\Xml\ValidationType.h"
#include "..\System\Xml\XmlResolver.h"
#include "..\System\Xml\Schema\ValidationEventHandler.h"

namespace System
{
	namespace Xml
{
	class XmlReaderSettings : public Object // 0x0
	{
	public:
		System::Xml::XmlNameTable* nameTable; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaSet* schemas; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlResolver* xmlResolver; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::ValidationEventHandler* ValidationEventHandler; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool checkCharacters; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool closeInput; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::ConformanceLevel conformance; // 0x34 (size: 0x4, flags: 0x1, type: 0x11)
		bool ignoreComments; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		bool ignoreProcessingInstructions; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
		bool ignoreWhitespace; // 0x3a (size: 0x1, flags: 0x1, type: 0x2)
		int lineNumberOffset; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		int linePositionOffset; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		bool prohibitDtd; // 0x44 (size: 0x1, flags: 0x1, type: 0x2)
		bool schemasNeedsInitialization; // 0x45 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::Schema::XmlSchemaValidationFlags validationFlags; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::ValidationType validationType; // 0x4c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
