#pragma once

#include "..\System\Reflection\MethodInfo.h"
#include "..\System\Type.h"

namespace System
{
	namespace Reflection
{
	class InterfaceMapping : public ValueType // 0x0
	{
	public:
		System::Reflection::MethodInfo* InterfaceMethods; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		System::Type* InterfaceType; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::Reflection::MethodInfo* TargetMethods; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		System::Type* TargetType; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
