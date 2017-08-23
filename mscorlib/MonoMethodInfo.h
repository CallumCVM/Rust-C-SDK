#pragma once

#include "..\System\Type.h"
#include "..\System\Reflection\MethodAttributes.h"
#include "..\System\Reflection\MethodImplAttributes.h"
#include "..\System\Reflection\CallingConventions.h"

namespace System
{
	namespace Reflection
{
	class MonoMethodInfo : public ValueType // 0x0
	{
	public:
		System::Type* parent; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* ret; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MethodAttributes attrs; // 0x20 (size: 0x4, flags: 0x3, type: 0x11)
		System::Reflection::MethodImplAttributes iattrs; // 0x24 (size: 0x4, flags: 0x3, type: 0x11)
		System::Reflection::CallingConventions callconv; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
