#pragma once

#include "..\System\Type.h"
#include "..\System\UInt16.h"

namespace System
{
	namespace Reflection
{
	class LocalVariableInfo : public Object // 0x0
	{
	public:
		System::Type* type; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		bool is_pinned; // 0x18 (size: 0x1, flags: 0x3, type: 0x2)
		System::UInt16 position; // 0x1a (size: 0x2, flags: 0x3, type: 0x7)
	}; // size = 0x20
}
