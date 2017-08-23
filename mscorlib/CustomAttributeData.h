#pragma once

#include "..\System\Reflection\ConstructorInfo.h"
#include "..\System\Collections\Generic\IList<System\Reflection\CustomAttributeTypedArgument>.h"
#include "..\System\Collections\Generic\IList<System\Reflection\CustomAttributeNamedArgument>.h"

namespace System
{
	namespace Reflection
{
	class CustomAttributeData : public Object // 0x0
	{
	public:
		System::Reflection::ConstructorInfo* ctorInfo; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::IList<System::Reflection::CustomAttributeTypedArgument> ctorArgs; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::IList<System::Reflection::CustomAttributeNamedArgument> namedArgs; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
