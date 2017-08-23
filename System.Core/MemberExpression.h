#pragma once

#include "..\System\Linq\Expressions\Expression.h"
#include "..\System\Reflection\MemberInfo.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class MemberExpression : public Expression // 0x20
	{
	public:
		System::Linq::Expressions::Expression* expression; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MemberInfo* member; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
