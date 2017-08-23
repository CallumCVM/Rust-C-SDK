#pragma once

#include "..\System\CodeDom\CodeExpressionCollection.h"
#include "..\System\CodeDom\CodeExpression.h"

namespace System
{
	namespace CodeDom
{
	class CodeDelegateInvokeExpression : public CodeExpression // 0x18
	{
	public:
		System::CodeDom::CodeExpressionCollection* parameters; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeExpression* targetObject; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
