#pragma once

#include "..\System\Type.h"

namespace System
{
	namespace ComponentModel
{
	class BaseNumberConverter : public TypeConverter // 0x0
	{
	public:
		System::Type* InnerType; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x18
}
