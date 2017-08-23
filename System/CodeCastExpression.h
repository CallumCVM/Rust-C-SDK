#pragma once

#include "..\System\CodeDom\CodeTypeReference.h"
#include "..\System\CodeDom\CodeExpression.h"

namespace System
{
	namespace CodeDom
{
	class CodeCastExpression : public CodeExpression // 0x18
	{
	public:
		System::CodeDom::CodeTypeReference* targetType; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeExpression* expression; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
