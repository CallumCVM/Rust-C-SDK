#pragma once

#include "..\System\Reflection\MonoGenericClass.h"
#include "..\System\Reflection\PropertyInfo.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class PropertyOnTypeBuilderInst : public PropertyInfo // 0x0
	{
	public:
		System::Reflection::MonoGenericClass* instantiation; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::PropertyInfo* prop; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
