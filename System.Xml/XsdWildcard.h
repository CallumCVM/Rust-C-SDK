#pragma once

#include "..\System\Xml\Schema\XmlSchemaObject.h"
#include "..\System\Xml\Schema\XmlSchemaContentProcessing.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Specialized\StringCollection.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdWildcard : public Object // 0x0
	{
	public:
		System::Xml::Schema::XmlSchemaObject* xsobj; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* TargetNamespace; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		System::Collections::Specialized::StringCollection* ResolvedNamespaces; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		System::Xml::Schema::XmlSchemaContentProcessing ResolvedProcessing; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		bool SkipCompile; // 0x2c (size: 0x1, flags: 0x6, type: 0x2)
		bool HasValueAny; // 0x2d (size: 0x1, flags: 0x6, type: 0x2)
		bool HasValueLocal; // 0x2e (size: 0x1, flags: 0x6, type: 0x2)
		bool HasValueOther; // 0x2f (size: 0x1, flags: 0x6, type: 0x2)
		bool HasValueTargetNamespace; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x38
}
