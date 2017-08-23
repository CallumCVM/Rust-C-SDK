#pragma once

#include "..\System\Runtime\Serialization\ExportOptions.h"
#include "..\System\Runtime\Serialization\KnownTypeCollection.h"
#include "..\System\Xml\Schema\XmlSchemaSet.h"
#include "..\System\Collections\Generic\Dictionary<System\Xml\XmlQualifiedName,System\Xml\Schema\XmlSchemaType>.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class XsdDataContractExporter : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::ExportOptions* options; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::KnownTypeCollection* known_types; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaSet* schemas; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::Dictionary<System::Xml::XmlQualifiedName,System::Xml::Schema::XmlSchemaType> generated_schema_types; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x30
}
