#pragma once

#include "..\System\CodeDom\CodeStatement.h"
#include "..\System\CodeDom\CodeStatementCollection.h"
#include "..\System\CodeDom\CodeExpression.h"

namespace System
{
	namespace CodeDom
{
	class CodeIterationStatement : public CodeStatement // 0x30
	{
	public:
		System::CodeDom::CodeStatement* incrementStatement; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeStatement* initStatement; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeStatementCollection* statements; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeExpression* testExpression; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x50
}
