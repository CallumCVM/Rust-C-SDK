#pragma once

#include "..\System\Xml\XmlNameTable.h"
#include "..\System\Xml\XmlResolver.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\Schema\XmlSchemaObjectTable.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Xml\Schema\XmlSchemaCompilationSettings.h"
#include "..\System\Guid.h"
#include "..\System\Xml\Schema\ValidationEventHandler.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaSet : public Object // 0x0
	{
	public:
		System::Xml::XmlNameTable* nameTable; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlResolver* xmlResolver; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* schemas; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectTable* attributes; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectTable* elements; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectTable* types; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* idCollection; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectTable* namedIdentities; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaCompilationSettings* settings; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::ValidationEventHandler* ValidationEventHandler; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		bool isCompiled; // 0x60 (size: 0x1, flags: 0x1, type: 0x2)
		System::Guid CompilationId; // 0x64 (size: 0x10, flags: 0x3, type: 0x11)
	}; // size = 0x78
}
