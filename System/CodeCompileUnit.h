#pragma once

#include "..\System\CodeDom\CodeAttributeDeclarationCollection.h"
#include "..\System\CodeDom\CodeNamespaceCollection.h"
#include "..\System\Collections\Specialized\StringCollection.h"
#include "..\System\CodeDom\CodeDirectiveCollection.h"

namespace System
{
	namespace CodeDom
{
	class CodeCompileUnit : public CodeObject // 0x18
	{
	public:
		System::CodeDom::CodeAttributeDeclarationCollection* attributes; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeNamespaceCollection* namespaces; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::StringCollection* assemblies; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeDirectiveCollection* startDirectives; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeDirectiveCollection* endDirectives; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
