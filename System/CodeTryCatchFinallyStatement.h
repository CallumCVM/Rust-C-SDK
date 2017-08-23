#pragma once

#include "..\System\CodeDom\CodeStatementCollection.h"
#include "..\System\CodeDom\CodeCatchClauseCollection.h"

namespace System
{
	namespace CodeDom
{
	class CodeTryCatchFinallyStatement : public CodeStatement // 0x30
	{
	public:
		System::CodeDom::CodeStatementCollection* tryStatements; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeStatementCollection* finallyStatements; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeCatchClauseCollection* catchClauses; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
