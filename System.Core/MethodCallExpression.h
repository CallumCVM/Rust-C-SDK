#pragma once

#include "..\System\Linq\Expressions\Expression.h"
#include "..\System\Reflection\MethodInfo.h"
#include "..\System\Collections\ObjectModel\ReadOnlyCollection<System\Linq\Expressions\Expression>.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class MethodCallExpression : public Expression // 0x20
	{
	public:
		System::Linq::Expressions::Expression* obj; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MethodInfo* method; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ObjectModel::ReadOnlyCollection<System::Linq::Expressions::Expression> arguments; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x38
}
