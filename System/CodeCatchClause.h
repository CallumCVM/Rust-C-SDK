#pragma once

#include "..\System\CodeDom\CodeTypeReference.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\CodeDom\CodeStatementCollection.h"

namespace System
{
	namespace CodeDom
{
	class CodeCatchClause : public Object // 0x0
	{
	public:
		System::CodeDom::CodeTypeReference* catchExceptionType; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* localName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::CodeDom::CodeStatementCollection* statements; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
