#pragma once

#include "..\System\CodeDom\CodeExpression.h"

namespace System
{
	namespace CodeDom
{
	class CodeAssignStatement : public CodeStatement // 0x30
	{
	public:
		System::CodeDom::CodeExpression* left; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeExpression* right; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
