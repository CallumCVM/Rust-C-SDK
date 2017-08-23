#pragma once

#include "..\System\Reflection\CustomAttributeTypedArgument.h"
#include "..\System\Reflection\MemberInfo.h"

namespace System
{
	namespace Reflection
{
	class CustomAttributeNamedArgument : public ValueType // 0x0
	{
	public:
		System::Reflection::CustomAttributeTypedArgument typedArgument; // 0x10 (size: 0x10, flags: 0x1, type: 0x11)
		System::Reflection::MemberInfo* memberInfo; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
