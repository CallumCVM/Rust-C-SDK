#pragma once

#include "..\System\Reflection\MonoPropertyInfo.h"
#include "..\System\Reflection\PInfo.h"
#include "..\System\Reflection\MonoProperty\GetterAdapter.h"

namespace System
{
	namespace Reflection
{
	class MonoProperty : public PropertyInfo // 0x0
	{
	public:
		__int64 klass; // 0x10 (size: 0x8, flags: 0x3, type: 0x18)
		__int64 prop; // 0x18 (size: 0x8, flags: 0x3, type: 0x18)
		System::Reflection::MonoPropertyInfo info; // 0x20 (size: 0x28, flags: 0x1, type: 0x11)
		System::Reflection::PInfo cached; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
		System::Reflection::MonoProperty::GetterAdapter* cached_getter; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x58
}
