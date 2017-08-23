#pragma once

#include "..\System\Reflection\MonoGenericClass.h"
#include "..\System\Reflection\Emit\MethodBuilder.h"
#include "..\System\Type.h"
#include "..\System\Reflection\Emit\MethodOnTypeBuilderInst.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class MethodOnTypeBuilderInst : public MethodInfo // 0x0
	{
	public:
		System::Reflection::MonoGenericClass* instantiation; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::MethodBuilder* mb; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		System::Type* method_arguments; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::MethodOnTypeBuilderInst* generic_method_definition; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
