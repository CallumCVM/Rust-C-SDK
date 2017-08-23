#pragma once

#include "..\Mono\Xml\Schema\XsdKeyEntry.h"
#include "..\Mono\Xml\Schema\XsdIdentityField.h"
#include "..\Mono\Xml\Schema\XsdAnySimpleType.h"
#include "..\System\Object.h"
#include "..\Mono\Xml\Schema\XsdIdentityPath.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdKeyEntryField : public Object // 0x0
	{
	public:
		Mono::Xml::Schema::XsdKeyEntry* entry; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Schema::XsdIdentityField* field; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Schema::XsdAnySimpleType* FieldType; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		System::Object Identity; // 0x28 (size: 0x8, flags: 0x6, type: 0x1c)
		Mono::Xml::Schema::XsdIdentityPath* FieldFoundPath; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		bool FieldFound; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
		int FieldLineNumber; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
		int FieldLinePosition; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
		bool FieldHasLineInfo; // 0x44 (size: 0x1, flags: 0x6, type: 0x2)
		bool IsXsiNil; // 0x45 (size: 0x1, flags: 0x6, type: 0x2)
		int FieldFoundDepth; // 0x48 (size: 0x4, flags: 0x6, type: 0x8)
		bool Consuming; // 0x4c (size: 0x1, flags: 0x6, type: 0x2)
		bool Consumed; // 0x4d (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x50
}
