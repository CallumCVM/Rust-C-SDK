#pragma once

#include "..\System\CodeDom\CodeTypeReference.h"
#include "..\System\CodeDom\CodeExpressionCollection.h"
#include "..\System\CodeDom\CodeExpression.h"

namespace System
{
	namespace CodeDom
{
	class CodeArrayCreateExpression : public CodeExpression // 0x18
	{
	public:
		System::CodeDom::CodeTypeReference* createType; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeExpressionCollection* initializers; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeExpression* sizeExpression; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int size; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
