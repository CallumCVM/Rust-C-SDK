#pragma once

#include "..\System\CodeDom\CodeTypeReference.h"
#include "..\System\CodeDom\CodeExpressionCollection.h"

namespace System
{
	namespace CodeDom
{
	class CodeObjectCreateExpression : public CodeExpression // 0x18
	{
	public:
		System::CodeDom::CodeTypeReference* createType; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeExpressionCollection* parameters; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
