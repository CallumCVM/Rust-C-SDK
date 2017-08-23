#pragma once

#include "..\System\CodeDom\CodeTypeReference.h"

namespace System
{
	namespace CodeDom
{
	class CodeTypeOfExpression : public CodeExpression // 0x18
	{
	public:
		System::CodeDom::CodeTypeReference* type; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
