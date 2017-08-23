#pragma once

#include "..\System\Linq\Expressions\NewExpression.h"
#include "..\System\Collections\ObjectModel\ReadOnlyCollection<System\Linq\Expressions\MemberBinding>.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class MemberInitExpression : public Expression // 0x20
	{
	public:
		System::Linq::Expressions::NewExpression* new_expression; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ObjectModel::ReadOnlyCollection<System::Linq::Expressions::MemberBinding> bindings; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x30
}
