#pragma once

#include "..\System\CodeDom\CodeExpression.h"

namespace System
{
	namespace CodeDom
{
	class CodeExpressionStatement : public CodeStatement // 0x30
	{
	public:
		System::CodeDom::CodeExpression* expression; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
