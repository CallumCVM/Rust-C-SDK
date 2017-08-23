#pragma once

#include "..\System\Object.h"
#include "..\System\Xml\IXmlLineInfo.h"
#include "..\System\Xml\IXmlNamespaceResolver.h"
#include "..\System\Uri.h"
#include "..\System\Xml\XmlNameTable.h"
#include "..\System\Xml\Schema\XmlSchemaSet.h"
#include "..\System\Xml\XmlResolver.h"
#include "..\System\Xml\Schema\XmlSchemaObject.h"
#include "..\System\Xml\Schema\XmlSchemaValidationFlags.h"
#include "..\System\Xml\Schema\XmlSchemaValidator\Transition.h"
#include "..\Mono\Xml\Schema\XsdParticleStateManager.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\Schema\XmlSchemaAttribute.h"
#include "..\Mono\Xml\Schema\XsdIDManager.h"
#include "..\System\Text\StringBuilder.h"
#include "..\System\Xml\Schema\XmlSchemaDatatype.h"
#include "..\System\Xml\Schema\ValidationEventHandler.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaValidator : public Object // 0x0
	{
	public:
		System::Object nominalEventSender; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Xml::IXmlLineInfo* lineInfo; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::IXmlNamespaceResolver* nsResolver; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Uri* sourceUri; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNameTable* nameTable; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaSet* schemas; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlResolver* xmlResolver; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObject* startType; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Schema::XsdParticleStateManager* state; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* occuredAtts; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaAttribute* defaultAttributes; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::ArrayList* defaultAttributesCache; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Schema::XsdIDManager* idManager; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* keyTables; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* currentKeyFieldConsumers; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* tmpKeyrefPool; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* elementQNameStack; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* storedCharacters; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaDatatype* CurrentAttributeType; // 0xa0 (size: 0x8, flags: 0x3, type: 0x12)
		System::Xml::Schema::ValidationEventHandler* ValidationEventHandler; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaValidationFlags options; // 0xb0 (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::Schema::XmlSchemaValidator::Transition transition; // 0xb4 (size: 0x4, flags: 0x1, type: 0x11)
		bool shouldValidateCharacters; // 0xb8 (size: 0x1, flags: 0x1, type: 0x2)
		int depth; // 0xbc (size: 0x4, flags: 0x1, type: 0x8)
		int xsiNilDepth; // 0xc0 (size: 0x4, flags: 0x1, type: 0x8)
		int skipValidationDepth; // 0xc4 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xc8
}
