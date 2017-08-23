#pragma once

#include "..\System\Linq\Expressions\MemberBindingType.h"
#include "..\System\Reflection\MemberInfo.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class MemberBinding : public Object // 0x0
	{
	public:
		System::Reflection::MemberInfo* member; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Linq::Expressions::MemberBindingType binding_type; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
