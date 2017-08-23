#pragma once

#include "..\System\CodeDom\CodeExpression.h"
#include "..\System\CodeDom\CodeBinaryOperatorType.h"

namespace System
{
	namespace CodeDom
{
	class CodeBinaryOperatorExpression : public CodeExpression // 0x18
	{
	public:
		System::CodeDom::CodeExpression* left; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeExpression* right; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeBinaryOperatorType op; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
