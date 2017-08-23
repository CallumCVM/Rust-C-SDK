#pragma once

#include "..\System\CodeDom\CodeNamespace.h"
#include "..\System\CodeDom\CodeCompileUnit.h"
#include "..\System\CodeDom\CodeAttributeDeclarationCollection.h"
#include "..\System\Xml\Serialization\XmlTypeMapping.h"
#include "..\System\CodeDom\Compiler\CodeDomProvider.h"
#include "..\System\Xml\Serialization\CodeGenerationOptions.h"
#include "..\System\Xml\Serialization\CodeIdentifiers.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class MapCodeGenerator : public Object // 0x0
	{
	public:
		System::CodeDom::CodeNamespace* codeNamespace; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeCompileUnit* codeCompileUnit; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeAttributeDeclarationCollection* includeMetadata; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlTypeMapping* exportedAnyType; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::Compiler::CodeDomProvider* codeProvider; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::CodeIdentifiers* identifiers; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* exportedMaps; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* includeMaps; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		bool includeArrayTypes; // 0x50 (size: 0x1, flags: 0x4, type: 0x2)
		System::Xml::Serialization::CodeGenerationOptions options; // 0x54 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x58
}
