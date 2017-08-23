#pragma once

#include "..\System\Xml\Schema\XmlSchema.h"
#include "..\System\Xml\Schema\XmlSchemaComplexType.h"
#include "..\System\Xml\XmlQualifiedName.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlSerializableMapping : public XmlTypeMapping // 0x80
	{
	public:
		System::Xml::Schema::XmlSchema* _schema; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaComplexType* _schemaType; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* _schemaTypeName; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x98
}
