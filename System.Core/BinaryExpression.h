#pragma once

#include "..\System\Linq\Expressions\Expression.h"
#include "..\System\Linq\Expressions\LambdaExpression.h"
#include "..\System\Reflection\MethodInfo.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class BinaryExpression : public Expression // 0x20
	{
	public:
		System::Linq::Expressions::Expression* left; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Linq::Expressions::Expression* right; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Linq::Expressions::LambdaExpression* conversion; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MethodInfo* method; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool lift_to_null; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		bool is_lifted; // 0x41 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
