#pragma once

#include "..\System\Xml\Serialization\XmlSchemas.h"
#include "..\System\Xml\Serialization\CodeIdentifiers.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Collections\Queue.h"
#include "..\System\Xml\Serialization\XmlReflectionImporter.h"
#include "..\System\Xml\Serialization\SoapReflectionImporter.h"
#include "..\System\Xml\Serialization\CodeGenerationOptions.h"
#include "..\System\Xml\Schema\XmlSchemaElement.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlSchemaImporter : public SchemaImporter // 0x18
	{
	public:
		System::Xml::Serialization::XmlSchemas* schemas; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::CodeIdentifiers* typeIdentifiers; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::CodeIdentifiers* elemIdentifiers; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* mappedTypes; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* primitiveDerivedMappedTypes; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* dataMappedTypes; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Queue* pendingMaps; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* sharedAnonymousTypes; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlReflectionImporter* auxXmlRefImporter; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::SoapReflectionImporter* auxSoapRefImporter; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaElement* anyElement; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		bool encodedFormat; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
		bool anyTypeImported; // 0x71 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::Serialization::CodeGenerationOptions options; // 0x74 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x78
}
