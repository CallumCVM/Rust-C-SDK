#pragma once

#include "..\System\Linq\Expressions\Expression.h"
#include "..\System\Collections\ObjectModel\ReadOnlyCollection<System\Linq\Expressions\ParameterExpression>.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class LambdaExpression : public Expression // 0x20
	{
	public:
		System::Linq::Expressions::Expression* body; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ObjectModel::ReadOnlyCollection<System::Linq::Expressions::ParameterExpression> parameters; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x30
}
