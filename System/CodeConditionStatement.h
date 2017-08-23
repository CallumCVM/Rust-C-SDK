#pragma once

#include "..\System\CodeDom\CodeExpression.h"
#include "..\System\CodeDom\CodeStatementCollection.h"

namespace System
{
	namespace CodeDom
{
	class CodeConditionStatement : public CodeStatement // 0x30
	{
	public:
		System::CodeDom::CodeExpression* condition; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeStatementCollection* trueStatements; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeStatementCollection* falseStatements; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
