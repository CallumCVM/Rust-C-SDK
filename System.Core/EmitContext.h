#pragma once

#include "..\System\Linq\Expressions\CompilationContext.h"
#include "..\System\Linq\Expressions\EmitContext.h"
#include "..\System\Linq\Expressions\LambdaExpression.h"
#include "..\System\Reflection\Emit\DynamicMethod.h"
#include "..\System\Reflection\Emit\LocalBuilder.h"
#include "..\UnityEngine\List.h"
#include "..\System\Reflection\Emit\ILGenerator.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class EmitContext : public Object // 0x0
	{
	public:
		System::Linq::Expressions::CompilationContext* context; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Linq::Expressions::EmitContext* parent; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Linq::Expressions::LambdaExpression* lambda; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::DynamicMethod* method; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::LocalBuilder* hoisted_store; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<System.Linq.Expressions.ParameterExpression>* hoisted; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		System::Reflection::Emit::ILGenerator* ig; // 0x40 (size: 0x8, flags: 0x26, type: 0x12)
	}; // size = 0x48
}
