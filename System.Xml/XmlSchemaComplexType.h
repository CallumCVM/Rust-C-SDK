#pragma once

#include "..\System\Xml\Schema\XmlSchemaAnyAttribute.h"
#include "..\System\Xml\Schema\XmlSchemaObjectCollection.h"
#include "..\System\Xml\Schema\XmlSchemaObjectTable.h"
#include "..\System\Xml\Schema\XmlSchemaDerivationMethod.h"
#include "..\System\Xml\Schema\XmlSchemaContentModel.h"
#include "..\System\Xml\Schema\XmlSchemaParticle.h"
#include "..\System\Xml\Schema\XmlSchemaContentType.h"
#include "..\System\Guid.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaComplexType : public XmlSchemaType // 0xc0
	{
	public:
		System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0xc0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectCollection* attributes; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectTable* attributeUses; // 0xd0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaAnyAttribute* attributeWildcard; // 0xd8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaContentModel* contentModel; // 0xe0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaParticle* validatableParticle; // 0xe8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaParticle* contentTypeParticle; // 0xf0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaParticle* particle; // 0xf8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaDerivationMethod block; // 0x100 (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::Schema::XmlSchemaDerivationMethod blockResolved; // 0x104 (size: 0x4, flags: 0x1, type: 0x11)
		bool isAbstract; // 0x108 (size: 0x1, flags: 0x1, type: 0x2)
		bool isMixed; // 0x109 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::Schema::XmlSchemaContentType resolvedContentType; // 0x10c (size: 0x4, flags: 0x1, type: 0x11)
		bool ValidatedIsAbstract; // 0x110 (size: 0x1, flags: 0x3, type: 0x2)
		System::Guid CollectProcessId; // 0x114 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x128
}
