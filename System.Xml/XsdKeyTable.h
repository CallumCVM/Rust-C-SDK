#pragma once

#include "..\Mono\Xml\Schema\XsdIdentitySelector.h"
#include "..\System\Xml\Schema\XmlSchemaIdentityConstraint.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\Mono\Xml\Schema\XsdKeyEntryCollection.h"
#include "..\Mono\Xml\Schema\XsdKeyTable.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdKeyTable : public Object // 0x0
	{
	public:
		Mono::Xml::Schema::XsdIdentitySelector* selector; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaIdentityConstraint* source; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* qname; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* refKeyName; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Schema::XsdKeyEntryCollection* Entries; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		Mono::Xml::Schema::XsdKeyEntryCollection* FinishedEntries; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		Mono::Xml::Schema::XsdKeyTable* ReferencedKey; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		bool alwaysTrue; // 0x48 (size: 0x1, flags: 0x26, type: 0x2)
		int StartDepth; // 0x4c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x50
}
