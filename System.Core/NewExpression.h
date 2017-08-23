#pragma once

#include "..\System\Reflection\ConstructorInfo.h"
#include "..\System\Collections\ObjectModel\ReadOnlyCollection<System\Linq\Expressions\Expression>.h"
#include "..\System\Collections\ObjectModel\ReadOnlyCollection<System\Reflection\MemberInfo>.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class NewExpression : public Expression // 0x20
	{
	public:
		System::Reflection::ConstructorInfo* constructor; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ObjectModel::ReadOnlyCollection<System::Linq::Expressions::Expression> arguments; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::ObjectModel::ReadOnlyCollection<System::Reflection::MemberInfo> members; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x38
}
