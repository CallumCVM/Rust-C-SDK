#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Serialization\XmlSerializerNamespaces.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Guid.h"
#include "..\System\Xml\Schema\XmlSchemaObject.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaObject : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* sourceUri; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Serialization::XmlSerializerNamespaces* namespaces; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* unhandledAttributeList; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		System::Xml::Schema::XmlSchemaObject* redefinedObject; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		System::Xml::Schema::XmlSchemaObject* parent; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		int lineNumber; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		int linePosition; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		bool isCompiled; // 0x40 (size: 0x1, flags: 0x3, type: 0x2)
		int errorCount; // 0x44 (size: 0x4, flags: 0x3, type: 0x8)
		System::Guid CompilationId; // 0x48 (size: 0x10, flags: 0x3, type: 0x11)
		System::Guid ValidationId; // 0x58 (size: 0x10, flags: 0x3, type: 0x11)
		bool isRedefineChild; // 0x68 (size: 0x1, flags: 0x3, type: 0x2)
		bool isRedefinedComponent; // 0x69 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x70
}
