#pragma once

#include "..\System\Type.h"
#include "..\System\Object.h"

namespace System
{
	namespace Reflection
{
	class CustomAttributeTypedArgument : public ValueType // 0x0
	{
	public:
		System::Type* argumentType; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object value; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x20
}
