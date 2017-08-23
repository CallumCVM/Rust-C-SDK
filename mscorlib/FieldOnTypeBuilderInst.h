#pragma once

#include "..\System\Reflection\MonoGenericClass.h"
#include "..\System\Reflection\Emit\FieldBuilder.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class FieldOnTypeBuilderInst : public FieldInfo // 0x0
	{
	public:
		System::Reflection::MonoGenericClass* instantiation; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		System::Reflection::Emit::FieldBuilder* fb; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x20
}
