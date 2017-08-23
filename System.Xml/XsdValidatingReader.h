#pragma once

#include "..\System\Xml\XmlReader.h"
#include "..\System\Xml\XmlResolver.h"
#include "..\Mono\Xml\IHasXmlSchemaInfo.h"
#include "..\System\Xml\IXmlLineInfo.h"
#include "..\System\Xml\ValidationType.h"
#include "..\System\Xml\Schema\XmlSchemaSet.h"
#include "..\Mono\Xml\Schema\XsdIDManager.h"
#include "..\System\Collections\ArrayList.h"
#include "..\Mono\Xml\Schema\XsdParticleStateManager.h"
#include "..\System\Text\StringBuilder.h"
#include "..\System\Xml\Schema\XmlSchemaAttribute.h"
#include "..\System\Object.h"
#include "..\System\Xml\Schema\ValidationEventHandler.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdValidatingReader : public XmlReader // 0x28
	{
	public:
		System::Xml::XmlReader* reader; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlResolver* resolver; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::IHasXmlSchemaInfo* sourceReaderSchemaInfo; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::IXmlLineInfo* readerLineInfo; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaSet* schemas; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Schema::XsdIDManager* idManager; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* keyTables; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* currentKeyFieldConsumers; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* tmpKeyrefPool; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* elementQNameStack; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Schema::XsdParticleStateManager* state; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* storedCharacters; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaAttribute* defaultAttributes; // 0x88 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::ArrayList* defaultAttributesCache; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object currentAttrType; // 0x98 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Xml::Schema::ValidationEventHandler* ValidationEventHandler; // 0xa0 (size: 0x8, flags: 0x6, type: 0x12)
		System::Xml::ValidationType validationType; // 0xa8 (size: 0x4, flags: 0x1, type: 0x11)
		bool namespaces; // 0xac (size: 0x1, flags: 0x1, type: 0x2)
		bool validationStarted; // 0xad (size: 0x1, flags: 0x1, type: 0x2)
		bool checkIdentity; // 0xae (size: 0x1, flags: 0x1, type: 0x2)
		bool checkKeyConstraints; // 0xaf (size: 0x1, flags: 0x1, type: 0x2)
		int skipValidationDepth; // 0xb0 (size: 0x4, flags: 0x1, type: 0x8)
		int xsiNilDepth; // 0xb4 (size: 0x4, flags: 0x1, type: 0x8)
		bool shouldValidateCharacters; // 0xb8 (size: 0x1, flags: 0x1, type: 0x2)
		int currentDefaultAttribute; // 0xbc (size: 0x4, flags: 0x1, type: 0x8)
		bool defaultAttributeConsumed; // 0xc0 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xc8
}
