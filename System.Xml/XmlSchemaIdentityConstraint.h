#pragma once

#include "..\System\Xml\Schema\XmlSchemaObjectCollection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Xml\Schema\XmlSchemaXPath.h"
#include "..\Mono\Xml\Schema\XsdIdentitySelector.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaIdentityConstraint : public XmlSchemaAnnotated // 0x88
	{
	public:
		System::Xml::Schema::XmlSchemaObjectCollection* fields; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x90 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlQualifiedName* qName; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaXPath* selector; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Schema::XsdIdentitySelector* compiledSelector; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0xb0
}
