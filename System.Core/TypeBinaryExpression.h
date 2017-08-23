#pragma once

#include "..\System\Linq\Expressions\Expression.h"
#include "..\System\Type.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class TypeBinaryExpression : public Expression // 0x20
	{
	public:
		System::Linq::Expressions::Expression* expression; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* type_operand; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
