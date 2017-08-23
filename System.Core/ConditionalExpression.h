#pragma once

#include "..\System\Linq\Expressions\Expression.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class ConditionalExpression : public Expression // 0x20
	{
	public:
		System::Linq::Expressions::Expression* test; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Linq::Expressions::Expression* if_true; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Linq::Expressions::Expression* if_false; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
