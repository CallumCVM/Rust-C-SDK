#pragma once

#include "..\System\CodeDom\CodeCommentStatementCollection.h"
#include "..\System\CodeDom\CodeNamespaceImportCollection.h"
#include "..\System\CodeDom\CodeNamespaceCollection.h"
#include "..\System\CodeDom\CodeTypeDeclarationCollection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\EventHandler.h"

namespace System
{
	namespace CodeDom
{
	class CodeNamespace : public CodeObject // 0x18
	{
	public:
		System::CodeDom::CodeCommentStatementCollection* comments; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeNamespaceImportCollection* imports; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeNamespaceCollection* namespaces; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeDeclarationCollection* classes; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		System::EventHandler* PopulateComments; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler* PopulateImports; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler* PopulateTypes; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		int populated; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x60
}
