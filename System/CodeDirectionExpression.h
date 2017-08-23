#pragma once

#include "..\System\CodeDom\FieldDirection.h"
#include "..\System\CodeDom\CodeExpression.h"

namespace System
{
	namespace CodeDom
{
	class CodeDirectionExpression : public CodeExpression // 0x18
	{
	public:
		System::CodeDom::CodeExpression* expression; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::FieldDirection direction; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
