#pragma once

#include "..\System\Linq\Expressions\Expression.h"
#include "..\System\Reflection\MethodInfo.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class UnaryExpression : public Expression // 0x20
	{
	public:
		System::Linq::Expressions::Expression* operand; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MethodInfo* method; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool is_lifted; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
