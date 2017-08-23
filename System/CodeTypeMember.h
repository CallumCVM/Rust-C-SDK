#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\CodeDom\MemberAttributes.h"
#include "..\System\CodeDom\CodeCommentStatementCollection.h"
#include "..\System\CodeDom\CodeAttributeDeclarationCollection.h"
#include "..\System\CodeDom\CodeLinePragma.h"
#include "..\System\CodeDom\CodeDirectiveCollection.h"

namespace System
{
	namespace CodeDom
{
	class CodeTypeMember : public CodeObject // 0x18
	{
	public:
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::CodeDom::CodeCommentStatementCollection* comments; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeAttributeDeclarationCollection* customAttributes; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeLinePragma* linePragma; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeDirectiveCollection* endDirectives; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeDirectiveCollection* startDirectives; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::MemberAttributes attributes; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
